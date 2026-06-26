#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  anon_sym_LT_DOLLAR = 14,
  sym_label_text = 15,
  sym_basis_member = 16,
  sym_basis_ref = 17,
  sym_plain_amount = 18,
  sym_recipe_name = 19,
  sym_ingredient_name = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_COMMA = 23,
  anon_sym_DASH_GT = 24,
  sym_mapping_side = 25,
  sym__header_marker = 26,
  sym_header_text = 27,
  anon_sym_LT_POUND = 28,
  sym_timer = 29,
  sym_target = 30,
  sym_literal = 31,
  sym__word = 32,
  sym__doc_start_meta = 33,
  sym__doc_start_steps = 34,
  sym__eof = 35,
  sym_file = 36,
  sym__metadata_document = 37,
  sym__eol = 38,
  sym_metadata_section = 39,
  sym_equipment_line = 40,
  sym_kv_line = 41,
  sym_value = 42,
  sym_blank_line = 43,
  sym_ingredient_section = 44,
  sym_basis_decl = 45,
  sym_sub_recipe = 46,
  sym_ingredient = 47,
  sym_group_decl = 48,
  sym_group_label = 49,
  sym_amount_block = 50,
  sym__amount = 51,
  sym__basis_amount = 52,
  sym_basis_name = 53,
  sym_mapping_group = 54,
  sym_mapping_list = 55,
  sym_mapping = 56,
  sym_step_section = 57,
  sym_section_header = 58,
  sym_header_anchor = 59,
  sym_prose_line = 60,
  sym__prose_token = 61,
  sym_ingredient_with_amount = 62,
  sym_sub_recipe_ref = 63,
  sym_equipment_ref = 64,
  sym_group_ref = 65,
  sym_hash_link = 66,
  sym_ingredient_ref = 67,
  sym_note_section = 68,
  sym_note_line = 69,
  sym_note_text = 70,
  aux_sym_metadata_section_repeat1 = 71,
  aux_sym_ingredient_section_repeat1 = 72,
  aux_sym_mapping_list_repeat1 = 73,
  aux_sym_step_section_repeat1 = 74,
  aux_sym_prose_line_repeat1 = 75,
  aux_sym_note_section_repeat1 = 76,
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
  [anon_sym_LT_DOLLAR] = "<$",
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
  [sym_group_decl] = "group_decl",
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
  [sym_header_anchor] = "header_anchor",
  [sym_prose_line] = "prose_line",
  [sym__prose_token] = "_prose_token",
  [sym_ingredient_with_amount] = "ingredient_with_amount",
  [sym_sub_recipe_ref] = "sub_recipe_ref",
  [sym_equipment_ref] = "equipment_ref",
  [sym_group_ref] = "group_ref",
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
  [anon_sym_LT_DOLLAR] = anon_sym_LT_DOLLAR,
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
  [sym_group_decl] = sym_group_decl,
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
  [sym_header_anchor] = sym_header_anchor,
  [sym_prose_line] = sym_prose_line,
  [sym__prose_token] = sym__prose_token,
  [sym_ingredient_with_amount] = sym_ingredient_with_amount,
  [sym_sub_recipe_ref] = sym_sub_recipe_ref,
  [sym_equipment_ref] = sym_equipment_ref,
  [sym_group_ref] = sym_group_ref,
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
  [anon_sym_LT_DOLLAR] = {
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
  [sym_group_decl] = {
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
  [sym_group_ref] = {
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
  [5] = 5,
  [6] = 3,
  [7] = 2,
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
  [20] = 15,
  [21] = 17,
  [22] = 18,
  [23] = 14,
  [24] = 16,
  [25] = 19,
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
  [36] = 19,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 19,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 70,
  [76] = 19,
  [77] = 77,
  [78] = 58,
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
  [109] = 109,
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
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 90,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 83,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 124,
  [137] = 137,
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
        '(', 79,
        ')', 80,
        ',', 81,
        '-', 10,
        '.', 21,
        '/', 14,
        ':', 43,
        '<', 56,
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
        '<', 55,
        '@', 23,
        '[', 52,
        '{', 19,
        '\t', 98,
        ' ', 98,
      );
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(90);
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
      if ((!eof && set_contains(sym_basis_ref_character_set_1, 13, lookahead))) ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(85);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 22:
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(64);
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
          lookahead != '?') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(100);
      END_STATE();
    case 25:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 39,
        '\r', 40,
        '-', 96,
        '/', 15,
        '<', 55,
        '=', 99,
        '@', 23,
        '[', 52,
        '{', 19,
        '\t', 94,
        ' ', 94,
      );
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 26:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(63);
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
        '<', 55,
        '=', 99,
        '@', 23,
        '[', 52,
        '{', 19,
        '\t', 97,
        ' ', 97,
      );
      if (lookahead != 0) ADVANCE(100);
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
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '+') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '$') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_DOLLAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_basis_member);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_basis_ref);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_plain_amount);
      ADVANCE_MAP(
        '*', 72,
        '\t', 68,
        ' ', 68,
        0x0b, 73,
        '\f', 73,
        '!', 73,
        '%', 73,
        '(', 73,
        ')', 73,
        '+', 73,
        '/', 73,
        '<', 73,
        '>', 73,
        '@', 73,
        '[', 73,
        '{', 73,
        '}', 73,
        '~', 73,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_plain_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(73);
      END_STATE();
    case 72:
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
          lookahead == '~') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_recipe_name);
      if (lookahead == '/') ADVANCE(37);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_recipe_name);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__header_marker);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      END_STATE();
    case 91:
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
          lookahead != '?') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__word);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(101);
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
  [31] = {.lex_state = 1, .external_lex_state = 3},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 3, .external_lex_state = 3},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 3, .external_lex_state = 3},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 29, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 26},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 18},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
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
    [anon_sym_LT_DOLLAR] = ACTIONS(1),
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
    [sym_file] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [sym__doc_start_meta] = ACTIONS(5),
    [sym__doc_start_steps] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
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
      anon_sym_LT_DOLLAR,
    ACTIONS(33), 1,
      sym__header_marker,
    ACTIONS(36), 1,
      anon_sym_LT_POUND,
    STATE(102), 1,
      sym_amount_block,
    ACTIONS(39), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(2), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_group_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [58] = 15,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym__separator,
    ACTIONS(46), 1,
      sym__nl,
    ACTIONS(48), 1,
      anon_sym_LT_BANG,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_LT_PLUS,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(58), 1,
      sym__header_marker,
    ACTIONS(60), 1,
      anon_sym_LT_POUND,
    STATE(102), 1,
      sym_amount_block,
    ACTIONS(62), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(2), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_group_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [116] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym__nl,
    ACTIONS(48), 1,
      anon_sym_LT_BANG,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_LT_PLUS,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(58), 1,
      sym__header_marker,
    ACTIONS(60), 1,
      anon_sym_LT_POUND,
    STATE(80), 1,
      sym_step_section,
    STATE(102), 1,
      sym_amount_block,
    ACTIONS(62), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(3), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_group_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [171] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LT_BANG,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_LT_PLUS,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_LT_POUND,
    ACTIONS(64), 1,
      sym__nl,
    ACTIONS(66), 1,
      sym__header_marker,
    STATE(96), 1,
      sym_step_section,
    STATE(102), 1,
      sym_amount_block,
    ACTIONS(68), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(6), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_group_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [226] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_LT_BANG,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_LT_PLUS,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_LT_POUND,
    ACTIONS(64), 1,
      sym__nl,
    ACTIONS(66), 1,
      sym__header_marker,
    STATE(102), 1,
      sym_amount_block,
    ACTIONS(68), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(7), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_group_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [281] = 14,
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
    ACTIONS(30), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(36), 1,
      anon_sym_LT_POUND,
    ACTIONS(70), 1,
      sym__nl,
    ACTIONS(73), 1,
      sym__header_marker,
    STATE(102), 1,
      sym_amount_block,
    ACTIONS(76), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(7), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_group_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [336] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LT_BANG,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_LT_PLUS,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_LT_POUND,
    ACTIONS(79), 1,
      sym__nl,
    ACTIONS(83), 1,
      sym_literal,
    ACTIONS(85), 1,
      sym__eof,
    STATE(21), 1,
      sym__eol,
    STATE(102), 1,
      sym_amount_block,
    ACTIONS(81), 2,
      sym_timer,
      sym_target,
    STATE(10), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_group_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [387] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LT_BANG,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_LT_PLUS,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_LT_POUND,
    ACTIONS(83), 1,
      sym_literal,
    ACTIONS(87), 1,
      sym__nl,
    ACTIONS(89), 1,
      sym__eof,
    STATE(17), 1,
      sym__eol,
    STATE(102), 1,
      sym_amount_block,
    ACTIONS(81), 2,
      sym_timer,
      sym_target,
    STATE(10), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_group_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [438] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym__nl,
    ACTIONS(93), 1,
      anon_sym_LT_BANG,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LT_PLUS,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(105), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(108), 1,
      anon_sym_LT_POUND,
    ACTIONS(114), 1,
      sym_literal,
    ACTIONS(117), 1,
      sym__eof,
    STATE(102), 1,
      sym_amount_block,
    ACTIONS(111), 2,
      sym_timer,
      sym_target,
    STATE(10), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_group_ref,
      sym_hash_link,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [486] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym__nl,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(129), 1,
      sym_label_text,
    STATE(89), 1,
      sym_amount_block,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(12), 7,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_group_decl,
      sym_group_label,
      aux_sym_ingredient_section_repeat1,
  [521] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__nl,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(142), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(145), 1,
      sym_label_text,
    STATE(89), 1,
      sym_amount_block,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(12), 7,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_group_decl,
      sym_group_label,
      aux_sym_ingredient_section_repeat1,
  [556] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym__nl,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      anon_sym_LT_DOLLAR,
    ACTIONS(129), 1,
      sym_label_text,
    STATE(79), 1,
      sym_ingredient_section,
    STATE(89), 1,
      sym_amount_block,
    STATE(11), 7,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_group_decl,
      sym_group_label,
      aux_sym_ingredient_section_repeat1,
  [590] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [611] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [632] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [653] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [674] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [695] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [716] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [736] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [756] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [776] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [796] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [816] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      sym__header_marker,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
      sym_literal,
  [836] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(174), 2,
      sym__eof,
      sym_literal,
    ACTIONS(172), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [855] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym__eof,
      sym_literal,
    ACTIONS(176), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [874] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(182), 2,
      sym__eof,
      sym_literal,
    ACTIONS(180), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [893] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(186), 2,
      sym__eof,
      sym_literal,
    ACTIONS(184), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [912] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(190), 2,
      sym__eof,
      sym_literal,
    ACTIONS(188), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [931] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(194), 2,
      sym__eof,
      sym_literal,
    ACTIONS(192), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_DOLLAR,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [950] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym__nl,
    ACTIONS(200), 1,
      anon_sym_LT_BANG,
    ACTIONS(202), 1,
      sym_key,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(33), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [973] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__nl,
    ACTIONS(209), 1,
      anon_sym_LT_BANG,
    ACTIONS(212), 1,
      sym_key,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(33), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [996] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym__nl,
    ACTIONS(200), 1,
      anon_sym_LT_BANG,
    ACTIONS(215), 1,
      sym_key,
    STATE(86), 1,
      sym_metadata_section,
    STATE(96), 1,
      sym__metadata_document,
    STATE(32), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_LT,
      sym_label_text,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_DOLLAR,
  [1036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_LT,
      sym_label_text,
    ACTIONS(168), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_DOLLAR,
  [1051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_LT,
      sym_label_text,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_DOLLAR,
  [1066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_LT,
      sym_label_text,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_DOLLAR,
  [1081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_LT,
      sym_label_text,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_DOLLAR,
  [1096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_LT,
      sym_label_text,
    ACTIONS(233), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_DOLLAR,
  [1111] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__nl,
    ACTIONS(239), 1,
      aux_sym_value_token1,
    STATE(71), 1,
      sym_blank_line,
    STATE(73), 1,
      sym_note_text,
    STATE(95), 1,
      sym_note_section,
    STATE(42), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1134] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__nl,
    ACTIONS(239), 1,
      aux_sym_value_token1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_blank_line,
    STATE(73), 1,
      sym_note_text,
    STATE(44), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_LT,
      sym_label_text,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_DOLLAR,
  [1172] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      sym__nl,
    ACTIONS(252), 1,
      aux_sym_value_token1,
    STATE(71), 1,
      sym_blank_line,
    STATE(73), 1,
      sym_note_text,
    STATE(44), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_LT,
      sym_label_text,
    ACTIONS(255), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_DOLLAR,
  [1210] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__nl,
    ACTIONS(261), 1,
      sym_header_text,
    ACTIONS(263), 1,
      anon_sym_LT_POUND,
    ACTIONS(265), 1,
      sym__eof,
    STATE(20), 1,
      sym__eol,
    STATE(75), 1,
      sym_header_anchor,
  [1232] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      sym_plain_amount,
    STATE(105), 1,
      sym__basis_amount,
    STATE(136), 1,
      sym__amount,
    ACTIONS(269), 2,
      sym_basis_member,
      sym_basis_ref,
  [1252] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT_POUND,
    ACTIONS(273), 1,
      sym__nl,
    ACTIONS(275), 1,
      sym_header_text,
    ACTIONS(277), 1,
      sym__eof,
    STATE(15), 1,
      sym__eol,
    STATE(70), 1,
      sym_header_anchor,
  [1274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_key,
    ACTIONS(279), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1287] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym__nl,
    ACTIONS(285), 1,
      aux_sym_value_token1,
    ACTIONS(287), 1,
      sym__eof,
    STATE(54), 1,
      sym__eol,
    STATE(72), 1,
      sym_value,
  [1306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT_POUND,
    STATE(22), 1,
      sym__eol,
    STATE(78), 1,
      sym_header_anchor,
    ACTIONS(289), 2,
      sym__eof,
      sym__nl,
  [1323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__eol,
    STATE(65), 1,
      sym_mapping_group,
    ACTIONS(293), 2,
      sym__eof,
      sym__nl,
  [1340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT_POUND,
    STATE(18), 1,
      sym__eol,
    STATE(58), 1,
      sym_header_anchor,
    ACTIONS(297), 2,
      sym__eof,
      sym__nl,
  [1357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_key,
    ACTIONS(299), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_key,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_key,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1396] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym__amount,
    ACTIONS(309), 3,
      sym_basis_member,
      sym_basis_ref,
      sym_plain_amount,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym__eol,
    ACTIONS(311), 2,
      sym__eof,
      sym__nl,
  [1422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__eol,
    ACTIONS(293), 2,
      sym__eof,
      sym__nl,
  [1433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      sym__eol,
    ACTIONS(313), 2,
      sym__eof,
      sym__nl,
  [1444] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 2,
      sym__nl,
      aux_sym_value_token1,
  [1455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__eol,
    ACTIONS(319), 2,
      sym__eof,
      sym__nl,
  [1466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      sym__eol,
    ACTIONS(321), 2,
      sym__eof,
      sym__nl,
  [1477] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_mapping_side,
    STATE(66), 1,
      sym_mapping,
    STATE(108), 1,
      sym_mapping_list,
  [1490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym__eol,
    ACTIONS(325), 2,
      sym__eof,
      sym__nl,
  [1501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_mapping_list_repeat1,
  [1514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_mapping_list_repeat1,
  [1527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_mapping_list_repeat1,
  [1540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      sym__eol,
    ACTIONS(338), 2,
      sym__eof,
      sym__nl,
  [1551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym__eol,
    ACTIONS(340), 2,
      sym__eof,
      sym__nl,
  [1562] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 2,
      sym__nl,
      aux_sym_value_token1,
  [1573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym__eol,
    ACTIONS(346), 2,
      sym__eof,
      sym__nl,
  [1584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      sym__eol,
    ACTIONS(348), 2,
      sym__eof,
      sym__nl,
  [1595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      sym__eol,
    ACTIONS(350), 2,
      sym__eof,
      sym__nl,
  [1606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym__eol,
    ACTIONS(352), 2,
      sym__eof,
      sym__nl,
  [1617] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 2,
      sym__nl,
      aux_sym_value_token1,
  [1628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      sym__eol,
    ACTIONS(354), 2,
      sym__eof,
      sym__nl,
  [1639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 1,
      sym__eol,
    ACTIONS(356), 2,
      sym__eof,
      sym__nl,
  [1650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 1,
      sym__separator,
  [1660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      sym__separator,
  [1670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LT_TILDE,
    ACTIONS(370), 1,
      anon_sym_LT,
  [1696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      sym__eof,
      sym__nl,
  [1704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 2,
      sym__eof,
      sym__nl,
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 1,
      sym__separator,
  [1722] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_mapping_side,
    STATE(82), 1,
      sym_mapping,
  [1732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym__word,
    STATE(125), 1,
      sym_basis_name,
  [1742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LT_TILDE,
    ACTIONS(384), 1,
      anon_sym_LT,
  [1752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LT_TILDE,
    ACTIONS(388), 1,
      anon_sym_LT,
  [1762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 2,
      sym__eof,
      sym__nl,
  [1770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      sym__eof,
      sym__nl,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_GT,
  [1785] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_ingredient_name,
  [1792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
  [1799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_GT,
  [1813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_GT,
  [1820] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_ingredient_name,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_GT,
  [1834] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_ingredient_name,
  [1841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LT,
  [1848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
  [1855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
  [1862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
  [1869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_GT,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
  [1883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
  [1890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_GT,
  [1897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
  [1904] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_mapping_side,
  [1911] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_ingredient_name,
  [1918] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_ingredient_name,
  [1925] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_ingredient_name,
  [1932] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_ingredient_name,
  [1939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_COLON,
  [1946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_recipe_name,
  [1953] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_ingredient_name,
  [1960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LT_PLUS,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LT_PLUS,
  [1974] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_ingredient_name,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_GT,
  [1988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LT,
  [1995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
  [2002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_GT,
  [2009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_GT,
  [2016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_recipe_name,
  [2023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_recipe_name,
  [2030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_GT,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_GT,
  [2044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LT,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_GT,
  [2058] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_ingredient_name,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_GT,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_GT,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
  [2086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 226,
  [SMALL_STATE(7)] = 281,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 387,
  [SMALL_STATE(10)] = 438,
  [SMALL_STATE(11)] = 486,
  [SMALL_STATE(12)] = 521,
  [SMALL_STATE(13)] = 556,
  [SMALL_STATE(14)] = 590,
  [SMALL_STATE(15)] = 611,
  [SMALL_STATE(16)] = 632,
  [SMALL_STATE(17)] = 653,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 695,
  [SMALL_STATE(20)] = 716,
  [SMALL_STATE(21)] = 736,
  [SMALL_STATE(22)] = 756,
  [SMALL_STATE(23)] = 776,
  [SMALL_STATE(24)] = 796,
  [SMALL_STATE(25)] = 816,
  [SMALL_STATE(26)] = 836,
  [SMALL_STATE(27)] = 855,
  [SMALL_STATE(28)] = 874,
  [SMALL_STATE(29)] = 893,
  [SMALL_STATE(30)] = 912,
  [SMALL_STATE(31)] = 931,
  [SMALL_STATE(32)] = 950,
  [SMALL_STATE(33)] = 973,
  [SMALL_STATE(34)] = 996,
  [SMALL_STATE(35)] = 1021,
  [SMALL_STATE(36)] = 1036,
  [SMALL_STATE(37)] = 1051,
  [SMALL_STATE(38)] = 1066,
  [SMALL_STATE(39)] = 1081,
  [SMALL_STATE(40)] = 1096,
  [SMALL_STATE(41)] = 1111,
  [SMALL_STATE(42)] = 1134,
  [SMALL_STATE(43)] = 1157,
  [SMALL_STATE(44)] = 1172,
  [SMALL_STATE(45)] = 1195,
  [SMALL_STATE(46)] = 1210,
  [SMALL_STATE(47)] = 1232,
  [SMALL_STATE(48)] = 1252,
  [SMALL_STATE(49)] = 1274,
  [SMALL_STATE(50)] = 1287,
  [SMALL_STATE(51)] = 1306,
  [SMALL_STATE(52)] = 1323,
  [SMALL_STATE(53)] = 1340,
  [SMALL_STATE(54)] = 1357,
  [SMALL_STATE(55)] = 1370,
  [SMALL_STATE(56)] = 1383,
  [SMALL_STATE(57)] = 1396,
  [SMALL_STATE(58)] = 1411,
  [SMALL_STATE(59)] = 1422,
  [SMALL_STATE(60)] = 1433,
  [SMALL_STATE(61)] = 1444,
  [SMALL_STATE(62)] = 1455,
  [SMALL_STATE(63)] = 1466,
  [SMALL_STATE(64)] = 1477,
  [SMALL_STATE(65)] = 1490,
  [SMALL_STATE(66)] = 1501,
  [SMALL_STATE(67)] = 1514,
  [SMALL_STATE(68)] = 1527,
  [SMALL_STATE(69)] = 1540,
  [SMALL_STATE(70)] = 1551,
  [SMALL_STATE(71)] = 1562,
  [SMALL_STATE(72)] = 1573,
  [SMALL_STATE(73)] = 1584,
  [SMALL_STATE(74)] = 1595,
  [SMALL_STATE(75)] = 1606,
  [SMALL_STATE(76)] = 1617,
  [SMALL_STATE(77)] = 1628,
  [SMALL_STATE(78)] = 1639,
  [SMALL_STATE(79)] = 1650,
  [SMALL_STATE(80)] = 1660,
  [SMALL_STATE(81)] = 1670,
  [SMALL_STATE(82)] = 1678,
  [SMALL_STATE(83)] = 1686,
  [SMALL_STATE(84)] = 1696,
  [SMALL_STATE(85)] = 1704,
  [SMALL_STATE(86)] = 1712,
  [SMALL_STATE(87)] = 1722,
  [SMALL_STATE(88)] = 1732,
  [SMALL_STATE(89)] = 1742,
  [SMALL_STATE(90)] = 1752,
  [SMALL_STATE(91)] = 1762,
  [SMALL_STATE(92)] = 1770,
  [SMALL_STATE(93)] = 1778,
  [SMALL_STATE(94)] = 1785,
  [SMALL_STATE(95)] = 1792,
  [SMALL_STATE(96)] = 1799,
  [SMALL_STATE(97)] = 1806,
  [SMALL_STATE(98)] = 1813,
  [SMALL_STATE(99)] = 1820,
  [SMALL_STATE(100)] = 1827,
  [SMALL_STATE(101)] = 1834,
  [SMALL_STATE(102)] = 1841,
  [SMALL_STATE(103)] = 1848,
  [SMALL_STATE(104)] = 1855,
  [SMALL_STATE(105)] = 1862,
  [SMALL_STATE(106)] = 1869,
  [SMALL_STATE(107)] = 1876,
  [SMALL_STATE(108)] = 1883,
  [SMALL_STATE(109)] = 1890,
  [SMALL_STATE(110)] = 1897,
  [SMALL_STATE(111)] = 1904,
  [SMALL_STATE(112)] = 1911,
  [SMALL_STATE(113)] = 1918,
  [SMALL_STATE(114)] = 1925,
  [SMALL_STATE(115)] = 1932,
  [SMALL_STATE(116)] = 1939,
  [SMALL_STATE(117)] = 1946,
  [SMALL_STATE(118)] = 1953,
  [SMALL_STATE(119)] = 1960,
  [SMALL_STATE(120)] = 1967,
  [SMALL_STATE(121)] = 1974,
  [SMALL_STATE(122)] = 1981,
  [SMALL_STATE(123)] = 1988,
  [SMALL_STATE(124)] = 1995,
  [SMALL_STATE(125)] = 2002,
  [SMALL_STATE(126)] = 2009,
  [SMALL_STATE(127)] = 2016,
  [SMALL_STATE(128)] = 2023,
  [SMALL_STATE(129)] = 2030,
  [SMALL_STATE(130)] = 2037,
  [SMALL_STATE(131)] = 2044,
  [SMALL_STATE(132)] = 2051,
  [SMALL_STATE(133)] = 2058,
  [SMALL_STATE(134)] = 2065,
  [SMALL_STATE(135)] = 2072,
  [SMALL_STATE(136)] = 2079,
  [SMALL_STATE(137)] = 2086,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_section, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_section, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_section, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, 0, 7),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4, 0, 7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose_line, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prose_line, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_with_amount, 4, 0, 8),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_with_amount, 4, 0, 8),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_ref, 3, 0, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_ref, 3, 0, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_link, 3, 0, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_link, 3, 0, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_section, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5, 0, 8),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5, 0, 8),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_label, 2, 0, 6),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_label, 2, 0, 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 7, 0, 9),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 7, 0, 9),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4, 0, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4, 0, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_decl, 4, 0, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_decl, 4, 0, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_section, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_decl, 5, 0, 8),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_decl, 5, 0, 8),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 8, 0, 10),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 8, 0, 10),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 3, 0, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 3, 0, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 4, 0, 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 4, 0, 5),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 2, 0, 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 2, 0, 6),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 5, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3, 0, 11),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_group, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_anchor, 3, 0, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_name, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 7, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), REDUCE(sym__basis_amount, 1, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), SHIFT(119),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [430] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
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
