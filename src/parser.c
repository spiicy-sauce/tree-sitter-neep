#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym__separator = 1,
  sym_comment = 2,
  sym__nl = 3,
  anon_sym_LT_BANG = 4,
  anon_sym_GT = 5,
  anon_sym_COLON = 6,
  sym_key = 7,
  aux_sym_value_token1 = 8,
  anon_sym_LT_TILDE = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LT_PLUS = 12,
  anon_sym_LT = 13,
  sym_label_text = 14,
  sym_basis_member = 15,
  sym_basis_ref = 16,
  sym_plain_amount = 17,
  sym_recipe_name = 18,
  sym_ingredient_name = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_COMMA = 22,
  anon_sym_DASH_GT = 23,
  sym_mapping_side = 24,
  sym__header_marker = 25,
  sym_timer = 26,
  sym_target = 27,
  sym_literal = 28,
  sym__word = 29,
  sym__doc_start_meta = 30,
  sym__doc_start_steps = 31,
  sym__eof = 32,
  sym_file = 33,
  sym__metadata_document = 34,
  sym__eol = 35,
  sym_metadata_section = 36,
  sym_equipment_line = 37,
  sym_kv_line = 38,
  sym_value = 39,
  sym_blank_line = 40,
  sym_ingredient_section = 41,
  sym_basis_decl = 42,
  sym_sub_recipe = 43,
  sym_ingredient = 44,
  sym_group_label = 45,
  sym_amount_block = 46,
  sym__amount = 47,
  sym__basis_amount = 48,
  sym_basis_name = 49,
  sym_mapping_group = 50,
  sym_mapping_list = 51,
  sym_mapping = 52,
  sym_step_section = 53,
  sym_section_header = 54,
  sym_header_text = 55,
  sym_prose_line = 56,
  sym__prose_token = 57,
  sym_ingredient_with_amount = 58,
  sym_sub_recipe_ref = 59,
  sym_equipment_ref = 60,
  sym_ingredient_ref = 61,
  sym_note_section = 62,
  sym_note_line = 63,
  sym_note_text = 64,
  aux_sym_metadata_section_repeat1 = 65,
  aux_sym_ingredient_section_repeat1 = 66,
  aux_sym_mapping_list_repeat1 = 67,
  aux_sym_step_section_repeat1 = 68,
  aux_sym_prose_line_repeat1 = 69,
  aux_sym_note_section_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__separator] = "_separator",
  [sym_comment] = "comment",
  [sym__nl] = "_nl",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_LT_TILDE] = "<~",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT_PLUS] = "<+",
  [anon_sym_LT] = "<",
  [sym_label_text] = "label_text",
  [sym_basis_member] = "basis_member",
  [sym_basis_ref] = "basis_ref",
  [sym_plain_amount] = "plain_amount",
  [sym_recipe_name] = "recipe_name",
  [sym_ingredient_name] = "ingredient_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH_GT] = "->",
  [sym_mapping_side] = "mapping_side",
  [sym__header_marker] = "_header_marker",
  [sym_timer] = "timer",
  [sym_target] = "target",
  [sym_literal] = "literal",
  [sym__word] = "_word",
  [sym__doc_start_meta] = "_doc_start_meta",
  [sym__doc_start_steps] = "_doc_start_steps",
  [sym__eof] = "_eof",
  [sym_file] = "file",
  [sym__metadata_document] = "_metadata_document",
  [sym__eol] = "_eol",
  [sym_metadata_section] = "metadata_section",
  [sym_equipment_line] = "equipment_line",
  [sym_kv_line] = "kv_line",
  [sym_value] = "value",
  [sym_blank_line] = "blank_line",
  [sym_ingredient_section] = "ingredient_section",
  [sym_basis_decl] = "basis_decl",
  [sym_sub_recipe] = "sub_recipe",
  [sym_ingredient] = "ingredient",
  [sym_group_label] = "group_label",
  [sym_amount_block] = "amount_block",
  [sym__amount] = "_amount",
  [sym__basis_amount] = "_basis_amount",
  [sym_basis_name] = "basis_name",
  [sym_mapping_group] = "mapping_group",
  [sym_mapping_list] = "mapping_list",
  [sym_mapping] = "mapping",
  [sym_step_section] = "step_section",
  [sym_section_header] = "section_header",
  [sym_header_text] = "header_text",
  [sym_prose_line] = "prose_line",
  [sym__prose_token] = "_prose_token",
  [sym_ingredient_with_amount] = "ingredient_with_amount",
  [sym_sub_recipe_ref] = "sub_recipe_ref",
  [sym_equipment_ref] = "equipment_ref",
  [sym_ingredient_ref] = "ingredient_ref",
  [sym_note_section] = "note_section",
  [sym_note_line] = "note_line",
  [sym_note_text] = "note_text",
  [aux_sym_metadata_section_repeat1] = "metadata_section_repeat1",
  [aux_sym_ingredient_section_repeat1] = "ingredient_section_repeat1",
  [aux_sym_mapping_list_repeat1] = "mapping_list_repeat1",
  [aux_sym_step_section_repeat1] = "step_section_repeat1",
  [aux_sym_prose_line_repeat1] = "prose_line_repeat1",
  [aux_sym_note_section_repeat1] = "note_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__separator] = sym__separator,
  [sym_comment] = sym_comment,
  [sym__nl] = sym__nl,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_LT_TILDE] = anon_sym_LT_TILDE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT_PLUS] = anon_sym_LT_PLUS,
  [anon_sym_LT] = anon_sym_LT,
  [sym_label_text] = sym_label_text,
  [sym_basis_member] = sym_basis_member,
  [sym_basis_ref] = sym_basis_ref,
  [sym_plain_amount] = sym_plain_amount,
  [sym_recipe_name] = sym_recipe_name,
  [sym_ingredient_name] = sym_ingredient_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_mapping_side] = sym_mapping_side,
  [sym__header_marker] = sym__header_marker,
  [sym_timer] = sym_timer,
  [sym_target] = sym_target,
  [sym_literal] = sym_literal,
  [sym__word] = sym__word,
  [sym__doc_start_meta] = sym__doc_start_meta,
  [sym__doc_start_steps] = sym__doc_start_steps,
  [sym__eof] = sym__eof,
  [sym_file] = sym_file,
  [sym__metadata_document] = sym__metadata_document,
  [sym__eol] = sym__eol,
  [sym_metadata_section] = sym_metadata_section,
  [sym_equipment_line] = sym_equipment_line,
  [sym_kv_line] = sym_kv_line,
  [sym_value] = sym_value,
  [sym_blank_line] = sym_blank_line,
  [sym_ingredient_section] = sym_ingredient_section,
  [sym_basis_decl] = sym_basis_decl,
  [sym_sub_recipe] = sym_sub_recipe,
  [sym_ingredient] = sym_ingredient,
  [sym_group_label] = sym_group_label,
  [sym_amount_block] = sym_amount_block,
  [sym__amount] = sym__amount,
  [sym__basis_amount] = sym__basis_amount,
  [sym_basis_name] = sym_basis_name,
  [sym_mapping_group] = sym_mapping_group,
  [sym_mapping_list] = sym_mapping_list,
  [sym_mapping] = sym_mapping,
  [sym_step_section] = sym_step_section,
  [sym_section_header] = sym_section_header,
  [sym_header_text] = sym_header_text,
  [sym_prose_line] = sym_prose_line,
  [sym__prose_token] = sym__prose_token,
  [sym_ingredient_with_amount] = sym_ingredient_with_amount,
  [sym_sub_recipe_ref] = sym_sub_recipe_ref,
  [sym_equipment_ref] = sym_equipment_ref,
  [sym_ingredient_ref] = sym_ingredient_ref,
  [sym_note_section] = sym_note_section,
  [sym_note_line] = sym_note_line,
  [sym_note_text] = sym_note_text,
  [aux_sym_metadata_section_repeat1] = aux_sym_metadata_section_repeat1,
  [aux_sym_ingredient_section_repeat1] = aux_sym_ingredient_section_repeat1,
  [aux_sym_mapping_list_repeat1] = aux_sym_mapping_list_repeat1,
  [aux_sym_step_section_repeat1] = aux_sym_step_section_repeat1,
  [aux_sym_prose_line_repeat1] = aux_sym_prose_line_repeat1,
  [aux_sym_note_section_repeat1] = aux_sym_note_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_label_text] = {
    .visible = true,
    .named = true,
  },
  [sym_basis_member] = {
    .visible = true,
    .named = true,
  },
  [sym_basis_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe_name] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_mapping_side] = {
    .visible = true,
    .named = true,
  },
  [sym__header_marker] = {
    .visible = false,
    .named = true,
  },
  [sym_timer] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym__doc_start_meta] = {
    .visible = false,
    .named = true,
  },
  [sym__doc_start_steps] = {
    .visible = false,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__metadata_document] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_metadata_section] = {
    .visible = true,
    .named = true,
  },
  [sym_equipment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_kv_line] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient_section] = {
    .visible = true,
    .named = true,
  },
  [sym_basis_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient] = {
    .visible = true,
    .named = true,
  },
  [sym_group_label] = {
    .visible = true,
    .named = true,
  },
  [sym_amount_block] = {
    .visible = true,
    .named = true,
  },
  [sym__amount] = {
    .visible = false,
    .named = true,
  },
  [sym__basis_amount] = {
    .visible = false,
    .named = true,
  },
  [sym_basis_name] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_group] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_list] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping] = {
    .visible = true,
    .named = true,
  },
  [sym_step_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_header_text] = {
    .visible = true,
    .named = true,
  },
  [sym_prose_line] = {
    .visible = true,
    .named = true,
  },
  [sym__prose_token] = {
    .visible = false,
    .named = true,
  },
  [sym_ingredient_with_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_recipe_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_equipment_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_note_section] = {
    .visible = true,
    .named = true,
  },
  [sym_note_line] = {
    .visible = true,
    .named = true,
  },
  [sym_note_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_metadata_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ingredient_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mapping_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prose_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_section_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_amount = 1,
  field_inner = 2,
  field_key = 3,
  field_mappings = 4,
  field_name = 5,
  field_outer = 6,
  field_text = 7,
  field_title = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_amount] = "amount",
  [field_inner] = "inner",
  [field_key] = "key",
  [field_mappings] = "mappings",
  [field_name] = "name",
  [field_outer] = "outer",
  [field_text] = "text",
  [field_title] = "title",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_title, 1},
  [3] =
    {field_key, 0},
    {field_value, 2},
  [5] =
    {field_text, 0},
  [6] =
    {field_amount, 0},
    {field_name, 2},
  [8] =
    {field_amount, 1},
    {field_name, 4},
  [10] =
    {field_amount, 1},
    {field_mappings, 6},
    {field_name, 4},
  [13] =
    {field_inner, 0},
    {field_outer, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 6,
  [7] = 3,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 14,
  [20] = 16,
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 15,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 15,
  [46] = 46,
  [47] = 47,
  [48] = 40,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 54,
  [63] = 63,
  [64] = 15,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 69,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 74,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 99,
  [117] = 117,
};

static TSCharacterRange sym_key_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '$'}, {'&', '\''}, {',', '.'}, {'0', '9'}, {';', ';'}, {'=', '='},
  {'?', '?'}, {'A', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static TSCharacterRange sym_basis_member_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '$'}, {'&', '\''}, {',', '.'}, {'0', ';'}, {'=', '='}, {'?', '?'},
  {'A', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static TSCharacterRange sym_basis_ref_character_set_1[] = {
  {0, '\t'}, {0x0e, ' '}, {'"', '$'}, {'&', '\''}, {',', '.'}, {'0', ';'}, {'=', '='}, {'?', '?'},
  {'A', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static TSCharacterRange sym_recipe_name_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '$'}, {'&', '\''}, {',', ';'}, {'=', '='}, {'?', '?'}, {'A', 'Z'},
  {'\\', '\\'}, {'^', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 36,
        '\r', 37,
        '(', 75,
        ')', 76,
        ',', 77,
        '-', 8,
        '.', 19,
        '/', 12,
        ':', 40,
        '<', 54,
        '=', 18,
        '>', 39,
        '@', 21,
        '[', 49,
        ']', 50,
        '{', 17,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 36,
        '\r', 37,
        '/', 13,
        '<', 53,
        '@', 21,
        '[', 49,
        '{', 17,
        '\t', 90,
        ' ', 90,
      );
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(7);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if ((!eof && set_contains(sym_basis_ref_character_set_1, 13, lookahead))) ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 20:
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(92);
      END_STATE();
    case 23:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 36,
        '\r', 37,
        '-', 88,
        '/', 13,
        '<', 53,
        '=', 91,
        '@', 21,
        '[', 49,
        '{', 17,
        '\t', 86,
        ' ', 86,
      );
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(59);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(44);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 36,
        '\r', 37,
        '/', 13,
        '<', 53,
        '=', 91,
        '@', 21,
        '[', 49,
        '{', 17,
        '\t', 89,
        ' ', 89,
      );
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '>') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(30);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(41);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(42);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_key);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '+') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '~') ADVANCE(48);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_basis_member);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_basis_ref);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_plain_amount);
      ADVANCE_MAP(
        '*', 68,
        '\t', 64,
        ' ', 64,
        0x0b, 69,
        '\f', 69,
        '!', 69,
        '%', 69,
        '(', 69,
        ')', 69,
        '+', 69,
        '/', 69,
        '<', 69,
        '>', 69,
        '@', 69,
        '[', 69,
        '{', 69,
        '}', 69,
        '~', 69,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(61);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_plain_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(60);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_recipe_name);
      if (lookahead == '/') ADVANCE(34);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_recipe_name);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '!' ||
          lookahead == '+') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__header_marker);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_timer);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__word);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(93);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 27, .external_lex_state = 3},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 27, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 27, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__nl] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT_TILDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT_PLUS] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_basis_member] = ACTIONS(1),
    [sym_basis_ref] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym__header_marker] = ACTIONS(1),
    [sym_timer] = ACTIONS(1),
    [sym_target] = ACTIONS(1),
    [sym__doc_start_meta] = ACTIONS(1),
    [sym__doc_start_steps] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(115),
    [sym_comment] = ACTIONS(3),
    [sym__doc_start_meta] = ACTIONS(5),
    [sym__doc_start_steps] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym__separator,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__nl,
    ACTIONS(18), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(24), 1,
      anon_sym_LT_PLUS,
    ACTIONS(27), 1,
      anon_sym_LT,
    ACTIONS(30), 1,
      sym__header_marker,
    STATE(112), 1,
      sym_amount_block,
    ACTIONS(33), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(2), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 6,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [50] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym__separator,
    ACTIONS(40), 1,
      sym__nl,
    ACTIONS(42), 1,
      anon_sym_LT_BANG,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_LT_PLUS,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      sym__header_marker,
    STATE(112), 1,
      sym_amount_block,
    ACTIONS(52), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(2), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 6,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [100] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__nl,
    ACTIONS(42), 1,
      anon_sym_LT_BANG,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_LT_PLUS,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      sym__header_marker,
    STATE(70), 1,
      sym_step_section,
    STATE(112), 1,
      sym_amount_block,
    ACTIONS(52), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(3), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 6,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [147] = 12,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(24), 1,
      anon_sym_LT_PLUS,
    ACTIONS(27), 1,
      anon_sym_LT,
    ACTIONS(54), 1,
      sym__nl,
    ACTIONS(57), 1,
      sym__header_marker,
    STATE(112), 1,
      sym_amount_block,
    ACTIONS(60), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(5), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 6,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [194] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LT_BANG,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_LT_PLUS,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      sym__nl,
    ACTIONS(65), 1,
      sym__header_marker,
    STATE(108), 1,
      sym_step_section,
    STATE(112), 1,
      sym_amount_block,
    ACTIONS(67), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(7), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 6,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [241] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_LT_BANG,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_LT_PLUS,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      sym__nl,
    ACTIONS(65), 1,
      sym__header_marker,
    STATE(112), 1,
      sym_amount_block,
    ACTIONS(67), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(5), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 6,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [288] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LT_BANG,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_LT_PLUS,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      sym__nl,
    ACTIONS(73), 1,
      sym_literal,
    ACTIONS(75), 1,
      sym__eof,
    STATE(19), 1,
      sym__eol,
    STATE(112), 1,
      sym_amount_block,
    ACTIONS(71), 2,
      sym_timer,
      sym_target,
    STATE(10), 6,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [331] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LT_BANG,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_LT_PLUS,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      sym_literal,
    ACTIONS(77), 1,
      sym__nl,
    ACTIONS(79), 1,
      sym__eof,
    STATE(14), 1,
      sym__eol,
    STATE(112), 1,
      sym_amount_block,
    ACTIONS(71), 2,
      sym_timer,
      sym_target,
    STATE(10), 6,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [374] = 11,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__nl,
    ACTIONS(83), 1,
      anon_sym_LT_BANG,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LT_PLUS,
    ACTIONS(92), 1,
      anon_sym_LT,
    ACTIONS(98), 1,
      sym_literal,
    ACTIONS(101), 1,
      sym__eof,
    STATE(112), 1,
      sym_amount_block,
    ACTIONS(95), 2,
      sym_timer,
      sym_target,
    STATE(10), 6,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [414] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__nl,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(111), 1,
      sym_label_text,
    STATE(80), 1,
      sym_amount_block,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(12), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_group_label,
      aux_sym_ingredient_section_repeat1,
  [445] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym__nl,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(124), 1,
      sym_label_text,
    STATE(80), 1,
      sym_amount_block,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(12), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_group_label,
      aux_sym_ingredient_section_repeat1,
  [476] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__nl,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(111), 1,
      sym_label_text,
    STATE(75), 1,
      sym_ingredient_section,
    STATE(80), 1,
      sym_amount_block,
    STATE(11), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_group_label,
      aux_sym_ingredient_section_repeat1,
  [506] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 10,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [525] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 10,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [544] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 10,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [563] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 10,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [582] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [600] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [618] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [636] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [654] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(145), 2,
      sym__eof,
      sym_literal,
    ACTIONS(143), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [671] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym__nl,
    ACTIONS(152), 1,
      anon_sym_LT_BANG,
    ACTIONS(155), 1,
      sym_key,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(23), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [694] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(160), 2,
      sym__eof,
      sym_literal,
    ACTIONS(158), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [711] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym__nl,
    ACTIONS(166), 1,
      anon_sym_LT_BANG,
    ACTIONS(168), 1,
      sym_key,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(23), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [734] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(172), 2,
      sym__eof,
      sym_literal,
    ACTIONS(170), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [751] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(176), 2,
      sym__eof,
      sym_literal,
    ACTIONS(174), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym__nl,
    ACTIONS(166), 1,
      anon_sym_LT_BANG,
    ACTIONS(178), 1,
      sym_key,
    STATE(68), 1,
      sym_metadata_section,
    STATE(108), 1,
      sym__metadata_document,
    STATE(25), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [793] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym__nl,
    ACTIONS(182), 1,
      aux_sym_value_token1,
    STATE(50), 1,
      sym_note_text,
    STATE(52), 1,
      sym_blank_line,
    STATE(114), 1,
      sym_note_section,
    STATE(30), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [816] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym__nl,
    ACTIONS(182), 1,
      aux_sym_value_token1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_note_text,
    STATE(52), 1,
      sym_blank_line,
    STATE(31), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [839] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      sym__nl,
    ACTIONS(191), 1,
      aux_sym_value_token1,
    STATE(50), 1,
      sym_note_text,
    STATE(52), 1,
      sym_blank_line,
    STATE(31), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_label_text,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_label_text,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_label_text,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_label_text,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_label_text,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_label_text,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [946] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    ACTIONS(218), 1,
      sym_plain_amount,
    STATE(86), 1,
      sym__basis_amount,
    STATE(116), 1,
      sym__amount,
    ACTIONS(216), 2,
      sym_basis_member,
      sym_basis_ref,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_label_text,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [980] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__nl,
    ACTIONS(226), 1,
      aux_sym_value_token1,
    ACTIONS(228), 1,
      sym__eof,
    STATE(20), 1,
      sym__eol,
    STATE(54), 1,
      sym_header_text,
  [999] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym__amount,
    ACTIONS(232), 3,
      sym_basis_member,
      sym_basis_ref,
      sym_plain_amount,
  [1014] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__nl,
    ACTIONS(236), 1,
      aux_sym_value_token1,
    ACTIONS(238), 1,
      sym__eof,
    STATE(47), 1,
      sym__eol,
    STATE(63), 1,
      sym_value,
  [1033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__eol,
    STATE(58), 1,
      sym_mapping_group,
    ACTIONS(240), 2,
      sym__eof,
      sym__nl,
  [1050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_key,
    ACTIONS(244), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_key,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_key,
    ACTIONS(248), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_key,
    ACTIONS(252), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1102] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym_value_token1,
    ACTIONS(256), 1,
      sym__nl,
    ACTIONS(258), 1,
      sym__eof,
    STATE(16), 1,
      sym__eol,
    STATE(62), 1,
      sym_header_text,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__eol,
    ACTIONS(260), 2,
      sym__eof,
      sym__nl,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym__eol,
    ACTIONS(262), 2,
      sym__eof,
      sym__nl,
  [1143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym__eol,
    ACTIONS(264), 2,
      sym__eof,
      sym__nl,
  [1154] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 2,
      sym__nl,
      aux_sym_value_token1,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym__eol,
    ACTIONS(240), 2,
      sym__eof,
      sym__nl,
  [1176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym__eol,
    ACTIONS(270), 2,
      sym__eof,
      sym__nl,
  [1187] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 2,
      sym__nl,
      aux_sym_value_token1,
  [1198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      sym__eol,
    ACTIONS(276), 2,
      sym__eof,
      sym__nl,
  [1209] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_mapping_side,
    STATE(59), 1,
      sym_mapping,
    STATE(92), 1,
      sym_mapping_list,
  [1222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      sym__eol,
    ACTIONS(280), 2,
      sym__eof,
      sym__nl,
  [1233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_mapping_list_repeat1,
  [1246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_mapping_list_repeat1,
  [1259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_mapping_list_repeat1,
  [1272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym__eol,
    ACTIONS(293), 2,
      sym__eof,
      sym__nl,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(46), 1,
      sym__eol,
    ACTIONS(295), 2,
      sym__eof,
      sym__nl,
  [1294] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 2,
      sym__nl,
      aux_sym_value_token1,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym__eol,
    ACTIONS(297), 2,
      sym__eof,
      sym__nl,
  [1316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      sym__eol,
    ACTIONS(299), 2,
      sym__eof,
      sym__nl,
  [1327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      sym__eof,
      sym__nl,
  [1335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      sym__separator,
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LT_TILDE,
    ACTIONS(309), 1,
      anon_sym_LT,
  [1355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      sym__separator,
  [1365] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_mapping_side,
    STATE(78), 1,
      sym_mapping,
  [1375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      sym__eof,
      sym__nl,
  [1383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__word,
    STATE(102), 1,
      sym_basis_name,
  [1393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LT_TILDE,
    ACTIONS(321), 1,
      anon_sym_LT,
  [1403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      sym__separator,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 2,
      sym__eof,
      sym__nl,
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 2,
      sym__eof,
      sym__nl,
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LT_TILDE,
    ACTIONS(335), 1,
      anon_sym_LT,
  [1455] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ingredient_name,
  [1462] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ingredient_name,
  [1469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_GT,
  [1476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
  [1483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
  [1490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_GT,
  [1504] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_ingredient_name,
  [1511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_recipe_name,
  [1525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_DASH_GT,
  [1532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [1539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_GT,
  [1546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LT,
  [1553] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_mapping_side,
  [1560] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_ingredient_name,
  [1567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_GT,
  [1574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LT_PLUS,
  [1581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
  [1588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_GT,
  [1595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_GT,
  [1602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_GT,
  [1609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_GT,
  [1616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_recipe_name,
  [1623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_recipe_name,
  [1630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_GT,
  [1637] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_ingredient_name,
  [1644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LT,
  [1658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_GT,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_GT,
  [1672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LT,
  [1679] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_ingredient_name,
  [1686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
  [1693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [1700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
  [1707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LT_PLUS,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 241,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 331,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 414,
  [SMALL_STATE(12)] = 445,
  [SMALL_STATE(13)] = 476,
  [SMALL_STATE(14)] = 506,
  [SMALL_STATE(15)] = 525,
  [SMALL_STATE(16)] = 544,
  [SMALL_STATE(17)] = 563,
  [SMALL_STATE(18)] = 582,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 618,
  [SMALL_STATE(21)] = 636,
  [SMALL_STATE(22)] = 654,
  [SMALL_STATE(23)] = 671,
  [SMALL_STATE(24)] = 694,
  [SMALL_STATE(25)] = 711,
  [SMALL_STATE(26)] = 734,
  [SMALL_STATE(27)] = 751,
  [SMALL_STATE(28)] = 768,
  [SMALL_STATE(29)] = 793,
  [SMALL_STATE(30)] = 816,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 862,
  [SMALL_STATE(33)] = 876,
  [SMALL_STATE(34)] = 890,
  [SMALL_STATE(35)] = 904,
  [SMALL_STATE(36)] = 918,
  [SMALL_STATE(37)] = 932,
  [SMALL_STATE(38)] = 946,
  [SMALL_STATE(39)] = 966,
  [SMALL_STATE(40)] = 980,
  [SMALL_STATE(41)] = 999,
  [SMALL_STATE(42)] = 1014,
  [SMALL_STATE(43)] = 1033,
  [SMALL_STATE(44)] = 1050,
  [SMALL_STATE(45)] = 1063,
  [SMALL_STATE(46)] = 1076,
  [SMALL_STATE(47)] = 1089,
  [SMALL_STATE(48)] = 1102,
  [SMALL_STATE(49)] = 1121,
  [SMALL_STATE(50)] = 1132,
  [SMALL_STATE(51)] = 1143,
  [SMALL_STATE(52)] = 1154,
  [SMALL_STATE(53)] = 1165,
  [SMALL_STATE(54)] = 1176,
  [SMALL_STATE(55)] = 1187,
  [SMALL_STATE(56)] = 1198,
  [SMALL_STATE(57)] = 1209,
  [SMALL_STATE(58)] = 1222,
  [SMALL_STATE(59)] = 1233,
  [SMALL_STATE(60)] = 1246,
  [SMALL_STATE(61)] = 1259,
  [SMALL_STATE(62)] = 1272,
  [SMALL_STATE(63)] = 1283,
  [SMALL_STATE(64)] = 1294,
  [SMALL_STATE(65)] = 1305,
  [SMALL_STATE(66)] = 1316,
  [SMALL_STATE(67)] = 1327,
  [SMALL_STATE(68)] = 1335,
  [SMALL_STATE(69)] = 1345,
  [SMALL_STATE(70)] = 1355,
  [SMALL_STATE(71)] = 1365,
  [SMALL_STATE(72)] = 1375,
  [SMALL_STATE(73)] = 1383,
  [SMALL_STATE(74)] = 1393,
  [SMALL_STATE(75)] = 1403,
  [SMALL_STATE(76)] = 1413,
  [SMALL_STATE(77)] = 1421,
  [SMALL_STATE(78)] = 1429,
  [SMALL_STATE(79)] = 1437,
  [SMALL_STATE(80)] = 1445,
  [SMALL_STATE(81)] = 1455,
  [SMALL_STATE(82)] = 1462,
  [SMALL_STATE(83)] = 1469,
  [SMALL_STATE(84)] = 1476,
  [SMALL_STATE(85)] = 1483,
  [SMALL_STATE(86)] = 1490,
  [SMALL_STATE(87)] = 1497,
  [SMALL_STATE(88)] = 1504,
  [SMALL_STATE(89)] = 1511,
  [SMALL_STATE(90)] = 1518,
  [SMALL_STATE(91)] = 1525,
  [SMALL_STATE(92)] = 1532,
  [SMALL_STATE(93)] = 1539,
  [SMALL_STATE(94)] = 1546,
  [SMALL_STATE(95)] = 1553,
  [SMALL_STATE(96)] = 1560,
  [SMALL_STATE(97)] = 1567,
  [SMALL_STATE(98)] = 1574,
  [SMALL_STATE(99)] = 1581,
  [SMALL_STATE(100)] = 1588,
  [SMALL_STATE(101)] = 1595,
  [SMALL_STATE(102)] = 1602,
  [SMALL_STATE(103)] = 1609,
  [SMALL_STATE(104)] = 1616,
  [SMALL_STATE(105)] = 1623,
  [SMALL_STATE(106)] = 1630,
  [SMALL_STATE(107)] = 1637,
  [SMALL_STATE(108)] = 1644,
  [SMALL_STATE(109)] = 1651,
  [SMALL_STATE(110)] = 1658,
  [SMALL_STATE(111)] = 1665,
  [SMALL_STATE(112)] = 1672,
  [SMALL_STATE(113)] = 1679,
  [SMALL_STATE(114)] = 1686,
  [SMALL_STATE(115)] = 1693,
  [SMALL_STATE(116)] = 1700,
  [SMALL_STATE(117)] = 1707,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_section, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_section, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_section, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose_line, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prose_line, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_section, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_with_amount, 4, 0, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_with_amount, 4, 0, 6),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_section, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_label, 2, 0, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_label, 2, 0, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4, 0, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4, 0, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_decl, 5, 0, 6),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_decl, 5, 0, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 8, 0, 8),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 8, 0, 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 7, 0, 7),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 7, 0, 7),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5, 0, 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5, 0, 6),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 4, 0, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 4, 0, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 3, 0, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 3, 0, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 2, 0, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 2, 0, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_group, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 5, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3, 0, 9),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_text, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), REDUCE(sym__basis_amount, 1, 0, 0),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), SHIFT(117),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_name, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 7, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__doc_start_meta = 0,
  ts_external_token__doc_start_steps = 1,
  ts_external_token__eof = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__doc_start_meta] = sym__doc_start_meta,
  [ts_external_token__doc_start_steps] = sym__doc_start_steps,
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__doc_start_meta] = true,
    [ts_external_token__doc_start_steps] = true,
    [ts_external_token__eof] = true,
  },
  [2] = {
    [ts_external_token__doc_start_meta] = true,
    [ts_external_token__doc_start_steps] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_neep_external_scanner_create(void);
void tree_sitter_neep_external_scanner_destroy(void *);
bool tree_sitter_neep_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_neep_external_scanner_serialize(void *, char *);
void tree_sitter_neep_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_neep(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_neep_external_scanner_create,
      tree_sitter_neep_external_scanner_destroy,
      tree_sitter_neep_external_scanner_scan,
      tree_sitter_neep_external_scanner_serialize,
      tree_sitter_neep_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
