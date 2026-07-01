/**
 * @file Tree-sitter grammar for the Neep recipe format (.neep)
 * @license MIT
 *
 * Neep is a line-oriented, section-delimited plain-text recipe format.
 * The document is a sequence of up to four sections separated by `---`
 * lines, in fixed order: metadata, ingredients, steps, notes. A file may
 * also be steps-only (no separators).
 *
 * Design notes:
 *  - Whitespace (space/tab) and `//` comments are `extras`: they may appear
 *    between any two tokens and are dropped by consumers. Newlines are NOT
 *    extras; they are explicit `_nl` tokens because the format is
 *    line-oriented.
 *  - Amount blocks (`[...]`) are captured as an opaque `amount_text` string.
 *    The basis-amount vs plain-amount distinction is made in neep-syntax,
 *    per spec ("Detected during validation, not parsing").
 *  - The metadata-only vs steps-only ambiguity (both lack `---`) is resolved
 *    with dynamic precedence favouring the metadata-led document.
 */

module.exports = grammar({
  name: 'neep',

  extras: $ => [
    /[ \t]+/,
    $.comment,
  ],

  externals: $ => [
    $._doc_start_meta,
    $._doc_start_steps,
    $._eof,
  ],

  // `[amount]` is a shared prefix of ingredient/basis-decl/sub-recipe lines;
  // the amount's role (generic vs. sub-recipe basis) is only settled by the
  // sigil after `]`, so GLR must keep both interpretations alive.
  conflicts: $ => [
    [$._amount, $._basis_amount],
    [$._amount, $.sub_recipe],
  ],

  rules: {
    // ── Top level ────────────────────────────────────────────────────
    // The external scanner emits exactly one zero-width marker at the start
    // of the file, selecting the metadata-led vs steps-only interpretation.
    file: $ => choice(
      seq($._doc_start_meta, $._metadata_document),
      seq($._doc_start_steps, $.step_section),
    ),

    _metadata_document: $ => seq(
      $.metadata_section,
      optional(seq(
        $._separator,
        $.ingredient_section,
        optional(seq(
          $._separator,
          $.step_section,
          optional(seq(
            $._separator,
            $.note_section,
          )),
        )),
      )),
    ),

    _separator: $ => token(prec(5, /---(\r\n|\r|\n)/)),

    comment: $ => token(prec(10, /\/\/[^\r\n]*/)),

    _nl: $ => token(/\r\n|\r|\n/),

    // Line terminator: a newline, or end-of-file (so the last line of a file
    // need not have a trailing newline).
    _eol: $ => choice($._nl, $._eof),

    // ── Metadata ─────────────────────────────────────────────────────
    metadata_section: $ => repeat1(choice(
      $.equipment_line,
      $.kv_line,
      $.blank_line,
    )),

    // <!dutch oven>  — the same equipment reference used in steps.
    equipment_line: $ => seq(
      '<!',
      field('name', $.ingredient_name),
      '>',
      $._eol,
    ),

    kv_line: $ => seq(
      field('key', $.key),
      ':',
      optional(field('value', $.value)),
      $._eol,
    ),
    key: $ => token(/[^\s:()\[\]<>{}~*+!@%\/]+/),
    value: $ => /[^\r\n]+/,

    blank_line: $ => $._nl,

    // ── Ingredients ──────────────────────────────────────────────────
    ingredient_section: $ => repeat1(choice(
      $.basis_decl,
      $.sub_recipe,
      $.ingredient,
      $.ingredient_label,
      $.blank_line,
    )),

    // [500g]<~flour>
    basis_decl: $ => seq(
      field('amount', $.amount_block),
      '<~',
      field('name', $.basis_name),
      '>',
      $._eol,
    ),

    // [20%*flour]<+poolish>(whole wheat flour->bread flour)
    //
    // A macro `(...)` is only legal on a basis-relative reference; a
    // plain-amount reference admits no macro. Splitting the production here
    // is what lets the grammar — not the semantic layer — reject
    // `[2]<+poolish>(a->b)`.
    sub_recipe: $ => seq(
      choice(
        seq(
          '[',
          field('amount', $._basis_amount),
          ']',
          '<+',
          field('name', $.recipe_name),
          '>',
          optional(field('mappings', $.mapping_group)),
        ),
        seq(
          '[',
          field('amount', $.plain_amount),
          ']',
          '<+',
          field('name', $.recipe_name),
          '>',
        ),
      ),
      $._eol,
    ),

    // [80%*flour]<bread flour>   |   <salt>
    ingredient: $ => seq(
      optional(field('amount', $.amount_block)),
      '<',
      field('name', $.ingredient_name),
      '>',
      $._eol,
    ),

    ingredient_label: $ => seq(
      field('text', $.label_text),
      $._eol,
    ),
    label_text: $ => token(/[^ \t\r\n\[!<][^\r\n]*/),

    // The amount inside `[...]` is classified by the grammar, not re-parsed
    // downstream:
    //   `80%*flour`  → basis_member   (a constituent share of a basis)
    //   `75%flour`   → basis_ref      (a percentage of a basis total)
    //   `3 cloves`,
    //   `pinch`, `2` → plain_amount   (a literal amount)
    //   `=`          → amount_macro   (passthrough: equal to input amount)
    //   `+`          → amount_macro   (sum: sum of all inputs in paragraph)
    //
    // Canonically a plain amount is `<number> <unit>` (single space) or a
    // bare unit (`pinch`), and a basis amount is `<number>% <basis>` /
    // `<number>% *<basis>` (single space, `%` glued to the number). The glued
    // forms (`3cloves`, `100%flour`, `10%*flour`) are accepted but warned about
    // by the semantic layer and fixed by the formatter.
    amount_block: $ => seq('[', optional(choice($._amount, $.amount_macro)), ']'),
    _amount: $ => choice($.basis_member, $.basis_ref, $.plain_amount),

    // Amount macros for intermediates: `=` (passthrough) or `+` (sum).
    amount_macro: $ => choice('=', '+'),
    _basis_amount: $ => choice($.basis_member, $.basis_ref),

    // The percentage admits a missing integer part (`.5%`) or fractional part
    // (`5.%`), as well as the usual `5%` / `5.5%`.
    //
    // Like a plain amount, the canonical form puts a single space between the
    // number and the "unit" — here the basis name — but the `%` stays glued to
    // the number: `100% flour`, `10% *flour`. The space is optional in the
    // grammar (`100%flour`, `10%*flour` still parse) so the semantic layer can
    // warn and the formatter can fix it.
    basis_member: $ =>
      token(prec(2, /([0-9]+(\.[0-9]*)?|\.[0-9]+)%[ \t]*\*[^\s()\[\]<>{}~*+!@%\/]+/)),
    basis_ref: $ =>
      token(prec(1, /([0-9]+(\.[0-9]*)?|\.[0-9]+)%[ \t]*[^\s()\[\]<>{}~*+!@%\/]+/)),
    plain_amount: $ => token(/[^\]\r\n]+/),

    basis_name: $ => $._word,
    // Like `_word`, but `/` and `.` are allowed so a sub-recipe can be referred
    // to by a relative path (`<+breads/poolish>`, `<+../shared/starter>`); the
    // loader resolves it against the referring file's directory.
    recipe_name: $ => token(/[^\s()\[\]<>{}~*+!@%]+/),
    // The leading character may not be a reference sigil (`+ ! : #`), so that
    // `<+name>`, `<!name>`, and `<#name>` are unambiguously sub-recipe,
    // equipment, and anchor references. A `:` may not appear at all: inside
    // `<…>` it separates an intermediate's input from its name, so an ordinary
    // ingredient reference never contains one.
    ingredient_name: $ => token(/[^>\r\n+!:$#][^>\r\n:]*/),

    mapping_group: $ => seq('(', $.mapping_list, ')'),
    mapping_list: $ => seq($.mapping, repeat(seq(',', $.mapping))),
    mapping: $ => seq(
      field('inner', $.mapping_side),
      '->',
      field('outer', $.mapping_side),
    ),
    mapping_side: $ => token(/[^,()>\r\n\-]+/),

    // ── Steps ────────────────────────────────────────────────────────
    step_section: $ => repeat1(choice(
      $.section_header,
      $.prose_line,
      $.blank_line,
    )),

    // = Autolyse <#autolyse>
    // A header may end with a `<#anchor>` so later steps can link back to it.
    // The title stops at `<` so the anchor parses separately.
    section_header: $ => seq(
      $._header_marker,
      optional(field('title', $.header_text)),
      optional(field('anchor', $.header_anchor)),
      $._eol,
    ),
    _header_marker: $ => token(prec(2, /=[ \t]+/)),
    header_text: $ => token(/[^<\r\n]+/),
    header_anchor: $ => seq('<#', field('name', $.ingredient_name), '>'),

    prose_line: $ => seq(
      repeat1($._prose_token),
      $._eol,
    ),

    _prose_token: $ => choice(
      $.intermediate_decl,
      $.ingredient_with_amount,
      $.sub_recipe_ref,
      $.equipment_ref,
      $.hash_link,
      $.ingredient_ref,
      $.timer,
      $.target,
      $.literal,
    ),

    // [75%flour]<water>
    ingredient_with_amount: $ => seq(
      field('amount', $.amount_block),
      '<',
      field('name', $.ingredient_name),
      '>',
    ),

    // <+poolish>
    sub_recipe_ref: $ => seq(
      '<+',
      field('name', $.recipe_name),
      '>',
    ),

    // <!dutch oven>
    equipment_ref: $ => seq(
      '<!',
      field('name', $.ingredient_name),
      '>',
    ),

    // <#autolyse> — links back to the header that declared the anchor.
    hash_link: $ => seq(
      '<#',
      field('name', $.ingredient_name),
      '>',
    ),

    // <whole wheat flour>
    ingredient_ref: $ => seq(
      '<',
      field('name', $.ingredient_name),
      '>',
    ),

    // An intermediate DECLARATION — a product made mid-recipe, marked by the
    // `:` inside `<…>`. Two shapes:
    //   [1 tbsp]<:lemon juice>            output form: the prefix amount is the
    //                                     intermediate's own amount.
    //   [1 tbsp]<parsley:chopped parsley>[=]
    //                                     input/output form: `parsley` (before
    //                                     the colon) is a named input consumed
    //                                     inline, the prefix amount is the
    //                                     input's amount, and the trailing
    //                                     `[=]`/`[+]` macro is the intermediate's
    //                                     amount (passthrough / sum of inputs).
    // Both the prefix amount and the trailing macro are optional. A LATER use of
    // the intermediate is a bare `<name>` — the same token as an ingredient
    // reference (`ingredient_ref`); the semantic layer tells them apart by name.
    intermediate_decl: $ => prec.right(seq(
      optional(field('in_amount', $.amount_block)),
      '<',
      optional(field('input', $.intermediate_name)),
      ':',
      field('name', $.intermediate_name),
      '>',
      optional(field('out_macro', $.macro_block)),
    )),

    // The `[=]`/`[+]` block that gives an intermediate's amount when its input is
    // named inline (`<parsley:chopped parsley>[=]`).
    macro_block: $ => seq('[', $.amount_macro, ']'),

    // A name inside an intermediate declaration: like `ingredient_name` but it
    // may not contain a `:` (which separates input from output) or start with a
    // reference sigil.
    intermediate_name: $ => token(/[^>\r\n+!:$#][^>\r\n:]*/),

    // @30m  @2-3h
    timer: $ => token(/@[^ \t\r\n.,;!?]+/),

    // {500°F}
    target: $ => token(/\{[^}\r\n]*\}/),

    literal: $ => token(/([^\[<@{\/\r\n]|\/[^\/\r\n])+/),

    // ── Notes ────────────────────────────────────────────────────────
    // Freeform, no inline tokens scanned. Captured line-by-line; consumers
    // rejoin with newlines.
    note_section: $ => repeat1($.note_line),
    note_line: $ => choice(
      seq(field('text', $.note_text), $._eol),
      $.blank_line,
    ),
    note_text: $ => /[^\r\n]+/,

    // ── Shared ───────────────────────────────────────────────────────
    _word: $ => token(/[^\s()\[\]<>{}~*+!@%\/]+/),
  },
});
