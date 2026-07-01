#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

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
  sym_header_text = 26,
  anon_sym_LT_POUND = 27,
  sym_timer = 28,
  sym_target = 29,
  sym_literal = 30,
  sym__word = 31,
  sym__doc_start_meta = 32,
  sym__doc_start_steps = 33,
  sym__eof = 34,
  sym_file = 35,
  sym__metadata_document = 36,
  sym__eol = 37,
  sym_metadata_section = 38,
  sym_equipment_line = 39,
  sym_kv_line = 40,
  sym_value = 41,
  sym_blank_line = 42,
  sym_ingredient_section = 43,
  sym_basis_decl = 44,
  sym_sub_recipe = 45,
  sym_ingredient = 46,
  sym_ingredient_label = 47,
  sym_amount_block = 48,
  sym__amount = 49,
  sym__basis_amount = 50,
  sym_basis_name = 51,
  sym_mapping_group = 52,
  sym_mapping_list = 53,
  sym_mapping = 54,
  sym_step_section = 55,
  sym_section_header = 56,
  sym_header_anchor = 57,
  sym_prose_line = 58,
  sym__prose_token = 59,
  sym_ingredient_with_amount = 60,
  sym_sub_recipe_ref = 61,
  sym_equipment_ref = 62,
  sym_hash_link = 63,
  sym_ingredient_ref = 64,
  sym_note_section = 65,
  sym_note_line = 66,
  sym_note_text = 67,
  aux_sym_metadata_section_repeat1 = 68,
  aux_sym_ingredient_section_repeat1 = 69,
  aux_sym_mapping_list_repeat1 = 70,
  aux_sym_step_section_repeat1 = 71,
  aux_sym_prose_line_repeat1 = 72,
  aux_sym_note_section_repeat1 = 73,
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
  [sym_header_text] = "header_text",
  [anon_sym_LT_POUND] = "<#",
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
  [sym_ingredient_label] = "ingredient_label",
  [sym_amount_block] = "amount_block",
  [sym__amount] = "_amount",
  [sym__basis_amount] = "_basis_amount",
  [sym_basis_name] = "basis_name",
  [sym_mapping_group] = "mapping_group",
  [sym_mapping_list] = "mapping_list",
  [sym_mapping] = "mapping",
  [sym_step_section] = "step_section",
  [sym_section_header] = "section_header",
  [sym_header_anchor] = "header_anchor",
  [sym_prose_line] = "prose_line",
  [sym__prose_token] = "_prose_token",
  [sym_ingredient_with_amount] = "ingredient_with_amount",
  [sym_sub_recipe_ref] = "sub_recipe_ref",
  [sym_equipment_ref] = "equipment_ref",
  [sym_hash_link] = "hash_link",
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
  [sym_header_text] = sym_header_text,
  [anon_sym_LT_POUND] = anon_sym_LT_POUND,
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
  [sym_ingredient_label] = sym_ingredient_label,
  [sym_amount_block] = sym_amount_block,
  [sym__amount] = sym__amount,
  [sym__basis_amount] = sym__basis_amount,
  [sym_basis_name] = sym_basis_name,
  [sym_mapping_group] = sym_mapping_group,
  [sym_mapping_list] = sym_mapping_list,
  [sym_mapping] = sym_mapping,
  [sym_step_section] = sym_step_section,
  [sym_section_header] = sym_section_header,
  [sym_header_anchor] = sym_header_anchor,
  [sym_prose_line] = sym_prose_line,
  [sym__prose_token] = sym__prose_token,
  [sym_ingredient_with_amount] = sym_ingredient_with_amount,
  [sym_sub_recipe_ref] = sym_sub_recipe_ref,
  [sym_equipment_ref] = sym_equipment_ref,
  [sym_hash_link] = sym_hash_link,
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
  [sym_header_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUND] = {
    .visible = true,
    .named = false,
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
  [sym_ingredient_label] = {
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
  [sym_header_anchor] = {
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
  [sym_hash_link] = {
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
  field_anchor = 2,
  field_inner = 3,
  field_key = 4,
  field_mappings = 5,
  field_name = 6,
  field_outer = 7,
  field_text = 8,
  field_title = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_amount] = "amount",
  [field_anchor] = "anchor",
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
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_title, 1},
  [3] =
    {field_anchor, 1},
  [4] =
    {field_key, 0},
    {field_value, 2},
  [6] =
    {field_text, 0},
  [7] =
    {field_anchor, 2},
    {field_title, 1},
  [9] =
    {field_amount, 0},
    {field_name, 2},
  [11] =
    {field_amount, 1},
    {field_name, 4},
  [13] =
    {field_amount, 1},
    {field_mappings, 6},
    {field_name, 4},
  [16] =
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
  [6] = 3,
  [7] = 7,
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
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 18,
  [22] = 19,
  [23] = 14,
  [24] = 17,
  [25] = 15,
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
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 19,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 19,
  [52] = 47,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 19,
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
  [94] = 94,
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
  [109] = 86,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 76,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 112,
  [130] = 130,
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
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 39,
        '\r', 40,
        '(', 78,
        ')', 79,
        ',', 80,
        '-', 10,
        '.', 21,
        '/', 14,
        ':', 43,
        '<', 57,
        '=', 20,
        '>', 42,
        '@', 23,
        '[', 52,
        ']', 53,
        '{', 19,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 39,
        '\r', 40,
        '/', 15,
        '<', 56,
        '@', 23,
        '[', 52,
        '{', 19,
        '\t', 97,
        ' ', 97,
      );
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if ((!eof && set_contains(sym_basis_ref_character_set_1, 13, lookahead))) ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(99);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 22:
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(99);
      END_STATE();
    case 25:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 39,
        '\r', 40,
        '-', 95,
        '/', 15,
        '<', 56,
        '=', 98,
        '@', 23,
        '[', 52,
        '{', 19,
        '\t', 93,
        ' ', 93,
      );
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 26:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(62);
      END_STATE();
    case 27:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(47);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 39,
        '\r', 40,
        '/', 15,
        '<', 56,
        '=', 98,
        '@', 23,
        '[', 52,
        '{', 19,
        '\t', 96,
        ' ', 96,
      );
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '>') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 37:
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
          lookahead == '~') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(32);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(44);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(45);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_key);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '+') ADVANCE(54);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_basis_member);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_basis_ref);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_plain_amount);
      ADVANCE_MAP(
        '*', 71,
        '\t', 67,
        ' ', 67,
        0x0b, 72,
        '\f', 72,
        '!', 72,
        '%', 72,
        '(', 72,
        ')', 72,
        '+', 72,
        '/', 72,
        '<', 72,
        '>', 72,
        '@', 72,
        '[', 72,
        '{', 72,
        '}', 72,
        '~', 72,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_plain_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(72);
      END_STATE();
    case 71:
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
          lookahead == '~') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_recipe_name);
      if (lookahead == '/') ADVANCE(37);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_recipe_name);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__header_marker);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      END_STATE();
    case 90:
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
          lookahead != '?') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__word);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 3},
  [30] = {.lex_state = 1, .external_lex_state = 3},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 3, .external_lex_state = 3},
  [38] = {.lex_state = 3, .external_lex_state = 3},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 29, .external_lex_state = 3},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
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
    [anon_sym_LT_POUND] = ACTIONS(1),
    [sym_timer] = ACTIONS(1),
    [sym_target] = ACTIONS(1),
    [sym__doc_start_meta] = ACTIONS(1),
    [sym__doc_start_steps] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(93),
    [sym_comment] = ACTIONS(3),
    [sym__doc_start_meta] = ACTIONS(5),
    [sym__doc_start_steps] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym__separator,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__nl,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LT_PLUS,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__header_marker,
    ACTIONS(27), 1,
      anon_sym_LT_POUND,
    STATE(91), 1,
      sym_amount_block,
    ACTIONS(29), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(3), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 7,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [54] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym__separator,
    ACTIONS(35), 1,
      sym__nl,
    ACTIONS(38), 1,
      anon_sym_LT_BANG,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_LT_PLUS,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      sym__header_marker,
    ACTIONS(53), 1,
      anon_sym_LT_POUND,
    STATE(91), 1,
      sym_amount_block,
    ACTIONS(56), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(3), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 7,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [108] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LT_PLUS,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_POUND,
    ACTIONS(59), 1,
      sym__nl,
    ACTIONS(61), 1,
      sym__header_marker,
    STATE(91), 1,
      sym_amount_block,
    STATE(122), 1,
      sym_step_section,
    ACTIONS(63), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(5), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 7,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [159] = 13,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LT_PLUS,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_POUND,
    ACTIONS(59), 1,
      sym__nl,
    ACTIONS(61), 1,
      sym__header_marker,
    STATE(91), 1,
      sym_amount_block,
    ACTIONS(63), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(6), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 7,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [210] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_LT_BANG,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_LT_PLUS,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LT_POUND,
    ACTIONS(65), 1,
      sym__nl,
    ACTIONS(68), 1,
      sym__header_marker,
    STATE(91), 1,
      sym_amount_block,
    ACTIONS(71), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(6), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 7,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [261] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__nl,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LT_PLUS,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__header_marker,
    ACTIONS(27), 1,
      anon_sym_LT_POUND,
    STATE(87), 1,
      sym_step_section,
    STATE(91), 1,
      sym_amount_block,
    ACTIONS(29), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(2), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 7,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [312] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LT_PLUS,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_POUND,
    ACTIONS(74), 1,
      sym__nl,
    ACTIONS(78), 1,
      sym_literal,
    ACTIONS(80), 1,
      sym__eof,
    STATE(25), 1,
      sym__eol,
    STATE(91), 1,
      sym_amount_block,
    ACTIONS(76), 2,
      sym_timer,
      sym_target,
    STATE(10), 7,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [359] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LT_PLUS,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_POUND,
    ACTIONS(78), 1,
      sym_literal,
    ACTIONS(82), 1,
      sym__nl,
    ACTIONS(84), 1,
      sym__eof,
    STATE(15), 1,
      sym__eol,
    STATE(91), 1,
      sym_amount_block,
    ACTIONS(76), 2,
      sym_timer,
      sym_target,
    STATE(10), 7,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [406] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym__nl,
    ACTIONS(88), 1,
      anon_sym_LT_BANG,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_LT_PLUS,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      anon_sym_LT_POUND,
    ACTIONS(106), 1,
      sym_literal,
    ACTIONS(109), 1,
      sym__eof,
    STATE(91), 1,
      sym_amount_block,
    ACTIONS(103), 2,
      sym_timer,
      sym_target,
    STATE(10), 7,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [450] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym__nl,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      sym_label_text,
    STATE(85), 1,
      sym_amount_block,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(12), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_ingredient_label,
      aux_sym_ingredient_section_repeat1,
  [481] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym__nl,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(132), 1,
      sym_label_text,
    STATE(85), 1,
      sym_amount_block,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(12), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_ingredient_label,
      aux_sym_ingredient_section_repeat1,
  [512] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym__nl,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      sym_label_text,
    STATE(83), 1,
      sym_ingredient_section,
    STATE(85), 1,
      sym_amount_block,
    STATE(11), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_ingredient_label,
      aux_sym_ingredient_section_repeat1,
  [542] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 11,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [562] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 11,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [582] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 11,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [602] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 11,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [622] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 11,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [642] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 11,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [662] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 10,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [681] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 10,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [700] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 10,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [719] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 10,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [738] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 10,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [757] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 10,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [776] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 2,
      sym__eof,
      sym_literal,
    ACTIONS(159), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [794] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(165), 2,
      sym__eof,
      sym_literal,
    ACTIONS(163), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [812] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(169), 2,
      sym__eof,
      sym_literal,
    ACTIONS(167), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [830] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(173), 2,
      sym__eof,
      sym_literal,
    ACTIONS(171), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [848] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym__eof,
      sym_literal,
    ACTIONS(175), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym__nl,
    ACTIONS(184), 1,
      anon_sym_LT_BANG,
    ACTIONS(187), 1,
      sym_key,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(31), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [889] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__nl,
    ACTIONS(192), 1,
      anon_sym_LT_BANG,
    ACTIONS(194), 1,
      sym_key,
    STATE(78), 1,
      sym_metadata_section,
    STATE(122), 1,
      sym__metadata_document,
    STATE(33), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [914] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__nl,
    ACTIONS(192), 1,
      anon_sym_LT_BANG,
    ACTIONS(198), 1,
      sym_key,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(31), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [937] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__nl,
    ACTIONS(202), 1,
      aux_sym_value_token1,
    STATE(72), 1,
      sym_blank_line,
    STATE(75), 1,
      sym_note_text,
    STATE(127), 1,
      sym_note_section,
    STATE(35), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [960] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__nl,
    ACTIONS(202), 1,
      aux_sym_value_token1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_blank_line,
    STATE(75), 1,
      sym_note_text,
    STATE(36), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [983] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      sym__nl,
    ACTIONS(211), 1,
      aux_sym_value_token1,
    STATE(72), 1,
      sym_blank_line,
    STATE(75), 1,
      sym_note_text,
    STATE(36), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1006] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym__nl,
    ACTIONS(216), 1,
      sym_header_text,
    ACTIONS(218), 1,
      anon_sym_LT_POUND,
    ACTIONS(220), 1,
      sym__eof,
    STATE(23), 1,
      sym__eol,
    STATE(68), 1,
      sym_header_anchor,
  [1028] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LT_POUND,
    ACTIONS(222), 1,
      sym__nl,
    ACTIONS(224), 1,
      sym_header_text,
    ACTIONS(226), 1,
      sym__eof,
    STATE(14), 1,
      sym__eol,
    STATE(69), 1,
      sym_header_anchor,
  [1050] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    ACTIONS(232), 1,
      sym_plain_amount,
    STATE(97), 1,
      sym__basis_amount,
    STATE(129), 1,
      sym__amount,
    ACTIONS(230), 2,
      sym_basis_member,
      sym_basis_ref,
  [1070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_label_text,
    ACTIONS(234), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_label_text,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_label_text,
    ACTIONS(242), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_label_text,
    ACTIONS(246), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_label_text,
    ACTIONS(250), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_label_text,
    ACTIONS(254), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_label_text,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LT_POUND,
    STATE(20), 1,
      sym__eol,
    STATE(73), 1,
      sym_header_anchor,
    ACTIONS(258), 2,
      sym__eof,
      sym__nl,
  [1185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_key,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym__eol,
    STATE(63), 1,
      sym_mapping_group,
    ACTIONS(266), 2,
      sym__eof,
      sym__nl,
  [1215] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym__amount,
    ACTIONS(272), 3,
      sym_basis_member,
      sym_basis_ref,
      sym_plain_amount,
  [1230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_key,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LT_POUND,
    STATE(16), 1,
      sym__eol,
    STATE(71), 1,
      sym_header_anchor,
    ACTIONS(274), 2,
      sym__eof,
      sym__nl,
  [1260] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym__nl,
    ACTIONS(278), 1,
      aux_sym_value_token1,
    ACTIONS(280), 1,
      sym__eof,
    STATE(48), 1,
      sym__eol,
    STATE(60), 1,
      sym_value,
  [1279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_key,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_key,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      sym__eol,
    ACTIONS(290), 2,
      sym__eof,
      sym__nl,
  [1316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym__eol,
    ACTIONS(266), 2,
      sym__eof,
      sym__nl,
  [1327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      sym__eol,
    ACTIONS(292), 2,
      sym__eof,
      sym__nl,
  [1338] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 2,
      sym__nl,
      aux_sym_value_token1,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym__eol,
    ACTIONS(298), 2,
      sym__eof,
      sym__nl,
  [1360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      sym__eol,
    ACTIONS(300), 2,
      sym__eof,
      sym__nl,
  [1371] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_mapping_side,
    STATE(64), 1,
      sym_mapping,
    STATE(101), 1,
      sym_mapping_list,
  [1384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym__eol,
    ACTIONS(304), 2,
      sym__eof,
      sym__nl,
  [1395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_mapping_list_repeat1,
  [1408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym__eol,
    ACTIONS(310), 2,
      sym__eof,
      sym__nl,
  [1419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_mapping_list_repeat1,
  [1432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_mapping_list_repeat1,
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 1,
      sym__eol,
    ACTIONS(319), 2,
      sym__eof,
      sym__nl,
  [1456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym__eol,
    ACTIONS(321), 2,
      sym__eof,
      sym__nl,
  [1467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(54), 1,
      sym__eol,
    ACTIONS(323), 2,
      sym__eof,
      sym__nl,
  [1478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym__eol,
    ACTIONS(325), 2,
      sym__eof,
      sym__nl,
  [1489] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 2,
      sym__nl,
      aux_sym_value_token1,
  [1500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym__eol,
    ACTIONS(331), 2,
      sym__eof,
      sym__nl,
  [1511] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 2,
      sym__nl,
      aux_sym_value_token1,
  [1522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(59), 1,
      sym__eol,
    ACTIONS(333), 2,
      sym__eof,
      sym__nl,
  [1533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LT_TILDE,
    ACTIONS(337), 1,
      anon_sym_LT,
  [1543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__word,
    STATE(115), 1,
      sym_basis_name,
  [1553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      sym__separator,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 2,
      sym__eof,
      sym__nl,
  [1571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 2,
      sym__eof,
      sym__nl,
  [1579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      sym__separator,
  [1605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 2,
      sym__eof,
      sym__nl,
  [1613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LT_TILDE,
    ACTIONS(359), 1,
      anon_sym_LT,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LT_TILDE,
    ACTIONS(363), 1,
      anon_sym_LT,
  [1633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 1,
      sym__separator,
  [1643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      sym__eof,
      sym__nl,
  [1651] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_mapping_side,
    STATE(82), 1,
      sym_mapping,
  [1661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_GT,
  [1668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LT,
  [1675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_GT,
  [1682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
  [1689] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_ingredient_name,
  [1696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
  [1703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
  [1710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
  [1717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_GT,
  [1724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_GT,
  [1731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DASH_GT,
  [1738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [1745] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_ingredient_name,
  [1752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_COLON,
  [1759] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_mapping_side,
  [1766] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_ingredient_name,
  [1773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_recipe_name,
  [1780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_GT,
  [1787] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_ingredient_name,
  [1794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LT,
  [1801] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_ingredient_name,
  [1808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LT_PLUS,
  [1815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_GT,
  [1829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_GT,
  [1836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_GT,
  [1843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_GT,
  [1850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_recipe_name,
  [1857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_recipe_name,
  [1864] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_ingredient_name,
  [1871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LT,
  [1878] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_ingredient_name,
  [1885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
  [1892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_GT,
  [1899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_GT,
  [1906] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_ingredient_name,
  [1913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_GT,
  [1920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
  [1927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_GT,
  [1934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
  [1941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LT_PLUS,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 210,
  [SMALL_STATE(7)] = 261,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 359,
  [SMALL_STATE(10)] = 406,
  [SMALL_STATE(11)] = 450,
  [SMALL_STATE(12)] = 481,
  [SMALL_STATE(13)] = 512,
  [SMALL_STATE(14)] = 542,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 582,
  [SMALL_STATE(17)] = 602,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 642,
  [SMALL_STATE(20)] = 662,
  [SMALL_STATE(21)] = 681,
  [SMALL_STATE(22)] = 700,
  [SMALL_STATE(23)] = 719,
  [SMALL_STATE(24)] = 738,
  [SMALL_STATE(25)] = 757,
  [SMALL_STATE(26)] = 776,
  [SMALL_STATE(27)] = 794,
  [SMALL_STATE(28)] = 812,
  [SMALL_STATE(29)] = 830,
  [SMALL_STATE(30)] = 848,
  [SMALL_STATE(31)] = 866,
  [SMALL_STATE(32)] = 889,
  [SMALL_STATE(33)] = 914,
  [SMALL_STATE(34)] = 937,
  [SMALL_STATE(35)] = 960,
  [SMALL_STATE(36)] = 983,
  [SMALL_STATE(37)] = 1006,
  [SMALL_STATE(38)] = 1028,
  [SMALL_STATE(39)] = 1050,
  [SMALL_STATE(40)] = 1070,
  [SMALL_STATE(41)] = 1084,
  [SMALL_STATE(42)] = 1098,
  [SMALL_STATE(43)] = 1112,
  [SMALL_STATE(44)] = 1126,
  [SMALL_STATE(45)] = 1140,
  [SMALL_STATE(46)] = 1154,
  [SMALL_STATE(47)] = 1168,
  [SMALL_STATE(48)] = 1185,
  [SMALL_STATE(49)] = 1198,
  [SMALL_STATE(50)] = 1215,
  [SMALL_STATE(51)] = 1230,
  [SMALL_STATE(52)] = 1243,
  [SMALL_STATE(53)] = 1260,
  [SMALL_STATE(54)] = 1279,
  [SMALL_STATE(55)] = 1292,
  [SMALL_STATE(56)] = 1305,
  [SMALL_STATE(57)] = 1316,
  [SMALL_STATE(58)] = 1327,
  [SMALL_STATE(59)] = 1338,
  [SMALL_STATE(60)] = 1349,
  [SMALL_STATE(61)] = 1360,
  [SMALL_STATE(62)] = 1371,
  [SMALL_STATE(63)] = 1384,
  [SMALL_STATE(64)] = 1395,
  [SMALL_STATE(65)] = 1408,
  [SMALL_STATE(66)] = 1419,
  [SMALL_STATE(67)] = 1432,
  [SMALL_STATE(68)] = 1445,
  [SMALL_STATE(69)] = 1456,
  [SMALL_STATE(70)] = 1467,
  [SMALL_STATE(71)] = 1478,
  [SMALL_STATE(72)] = 1489,
  [SMALL_STATE(73)] = 1500,
  [SMALL_STATE(74)] = 1511,
  [SMALL_STATE(75)] = 1522,
  [SMALL_STATE(76)] = 1533,
  [SMALL_STATE(77)] = 1543,
  [SMALL_STATE(78)] = 1553,
  [SMALL_STATE(79)] = 1563,
  [SMALL_STATE(80)] = 1571,
  [SMALL_STATE(81)] = 1579,
  [SMALL_STATE(82)] = 1587,
  [SMALL_STATE(83)] = 1595,
  [SMALL_STATE(84)] = 1605,
  [SMALL_STATE(85)] = 1613,
  [SMALL_STATE(86)] = 1623,
  [SMALL_STATE(87)] = 1633,
  [SMALL_STATE(88)] = 1643,
  [SMALL_STATE(89)] = 1651,
  [SMALL_STATE(90)] = 1661,
  [SMALL_STATE(91)] = 1668,
  [SMALL_STATE(92)] = 1675,
  [SMALL_STATE(93)] = 1682,
  [SMALL_STATE(94)] = 1689,
  [SMALL_STATE(95)] = 1696,
  [SMALL_STATE(96)] = 1703,
  [SMALL_STATE(97)] = 1710,
  [SMALL_STATE(98)] = 1717,
  [SMALL_STATE(99)] = 1724,
  [SMALL_STATE(100)] = 1731,
  [SMALL_STATE(101)] = 1738,
  [SMALL_STATE(102)] = 1745,
  [SMALL_STATE(103)] = 1752,
  [SMALL_STATE(104)] = 1759,
  [SMALL_STATE(105)] = 1766,
  [SMALL_STATE(106)] = 1773,
  [SMALL_STATE(107)] = 1780,
  [SMALL_STATE(108)] = 1787,
  [SMALL_STATE(109)] = 1794,
  [SMALL_STATE(110)] = 1801,
  [SMALL_STATE(111)] = 1808,
  [SMALL_STATE(112)] = 1815,
  [SMALL_STATE(113)] = 1822,
  [SMALL_STATE(114)] = 1829,
  [SMALL_STATE(115)] = 1836,
  [SMALL_STATE(116)] = 1843,
  [SMALL_STATE(117)] = 1850,
  [SMALL_STATE(118)] = 1857,
  [SMALL_STATE(119)] = 1864,
  [SMALL_STATE(120)] = 1871,
  [SMALL_STATE(121)] = 1878,
  [SMALL_STATE(122)] = 1885,
  [SMALL_STATE(123)] = 1892,
  [SMALL_STATE(124)] = 1899,
  [SMALL_STATE(125)] = 1906,
  [SMALL_STATE(126)] = 1913,
  [SMALL_STATE(127)] = 1920,
  [SMALL_STATE(128)] = 1927,
  [SMALL_STATE(129)] = 1934,
  [SMALL_STATE(130)] = 1941,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_section, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_section, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_section, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose_line, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prose_line, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, 0, 7),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4, 0, 7),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_with_amount, 4, 0, 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_with_amount, 4, 0, 8),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_link, 3, 0, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_link, 3, 0, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_section, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_section, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4, 0, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4, 0, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_decl, 5, 0, 8),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_decl, 5, 0, 8),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5, 0, 8),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5, 0, 8),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_label, 2, 0, 6),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_label, 2, 0, 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 7, 0, 9),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 7, 0, 9),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 8, 0, 10),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 8, 0, 10),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 3, 0, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 3, 0, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 4, 0, 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 4, 0, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 2, 0, 6),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 2, 0, 6),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3, 0, 11),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_anchor, 3, 0, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 5, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_group, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [377] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), REDUCE(sym__basis_amount, 1, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), SHIFT(130),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_name, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 7, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
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
