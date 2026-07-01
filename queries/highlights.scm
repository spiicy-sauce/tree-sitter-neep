; Syntax highlighting for the Neep recipe format.

; ── Comments ─────────────────────────────────────────────────────────
(comment) @comment

; ── Metadata ─────────────────────────────────────────────────────────
(kv_line key: (key) @property)
(kv_line value: (value) @string)
(equipment_line name: (ingredient_name) @type)

; ── Section headers / ingredient labels ─────────────────────────────
(section_header title: (header_text) @markup.heading)
(ingredient_label text: (label_text) @markup.heading)

; ── Amounts ──────────────────────────────────────────────────────────
[
  (basis_member)
  (basis_ref)
  (plain_amount)
] @number

; ── Names ────────────────────────────────────────────────────────────
(basis_name) @type
(recipe_name) @function
(ingredient_name) @variable

; Header anchors read like sub-recipes (a later, more specific
; pattern overrides the generic `ingredient_name` above).
(hash_link name: (ingredient_name) @function)
(header_anchor name: (ingredient_name) @function)

; ── Inline step tokens ───────────────────────────────────────────────
(timer) @constant.builtin
(target) @constant

; ── Mappings ─────────────────────────────────────────────────────────
"->" @operator
(mapping inner: (mapping_side) @variable)
(mapping outer: (mapping_side) @variable)

; ── Notes ────────────────────────────────────────────────────────────
(note_text) @string

; ── Punctuation ──────────────────────────────────────────────────────
["[" "]"] @punctuation.bracket
["<" ">"] @punctuation.bracket
["(" ")"] @punctuation.bracket
"<~" @punctuation.special
"<+" @punctuation.special
"<!" @punctuation.special
"<#" @punctuation.special
":" @punctuation.delimiter
"," @punctuation.delimiter
