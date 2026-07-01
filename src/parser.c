#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  anon_sym_EQ = 15,
  anon_sym_PLUS = 16,
  sym_basis_member = 17,
  sym_basis_ref = 18,
  sym_plain_amount = 19,
  sym_recipe_name = 20,
  sym_ingredient_name = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_COMMA = 24,
  anon_sym_DASH_GT = 25,
  sym_mapping_side = 26,
  sym__header_marker = 27,
  sym_header_text = 28,
  anon_sym_LT_POUND = 29,
  anon_sym_LT_COLON = 30,
  sym_timer = 31,
  sym_target = 32,
  sym_literal = 33,
  sym__word = 34,
  sym__doc_start_meta = 35,
  sym__doc_start_steps = 36,
  sym__eof = 37,
  sym_file = 38,
  sym__metadata_document = 39,
  sym__eol = 40,
  sym_metadata_section = 41,
  sym_equipment_line = 42,
  sym_kv_line = 43,
  sym_value = 44,
  sym_blank_line = 45,
  sym_ingredient_section = 46,
  sym_basis_decl = 47,
  sym_sub_recipe = 48,
  sym_ingredient = 49,
  sym_ingredient_label = 50,
  sym_amount_block = 51,
  sym__amount = 52,
  sym_amount_macro = 53,
  sym__basis_amount = 54,
  sym_basis_name = 55,
  sym_mapping_group = 56,
  sym_mapping_list = 57,
  sym_mapping = 58,
  sym_step_section = 59,
  sym_section_header = 60,
  sym_header_anchor = 61,
  sym_prose_line = 62,
  sym__prose_token = 63,
  sym_ingredient_with_amount = 64,
  sym_sub_recipe_ref = 65,
  sym_equipment_ref = 66,
  sym_hash_link = 67,
  sym_ingredient_ref = 68,
  sym_intermediate_with_amount = 69,
  sym_intermediate_ref = 70,
  sym_note_section = 71,
  sym_note_line = 72,
  sym_note_text = 73,
  aux_sym_metadata_section_repeat1 = 74,
  aux_sym_ingredient_section_repeat1 = 75,
  aux_sym_mapping_list_repeat1 = 76,
  aux_sym_step_section_repeat1 = 77,
  aux_sym_prose_line_repeat1 = 78,
  aux_sym_note_section_repeat1 = 79,
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
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
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
  [anon_sym_LT_COLON] = "<:",
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
  [sym_amount_macro] = "amount_macro",
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
  [sym_intermediate_with_amount] = "intermediate_with_amount",
  [sym_intermediate_ref] = "intermediate_ref",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
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
  [sym_amount_macro] = sym_amount_macro,
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
  [sym_intermediate_with_amount] = sym_intermediate_with_amount,
  [sym_intermediate_ref] = sym_intermediate_ref,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LT_COLON] = {
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
  [sym_amount_macro] = {
    .visible = true,
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
  [sym_intermediate_with_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_intermediate_ref] = {
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
  [4] = 3,
  [5] = 5,
  [6] = 2,
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
  [19] = 18,
  [20] = 12,
  [21] = 14,
  [22] = 22,
  [23] = 17,
  [24] = 15,
  [25] = 11,
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
  [48] = 12,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 12,
  [54] = 50,
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
  [68] = 61,
  [69] = 69,
  [70] = 59,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 12,
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
  [92] = 87,
  [93] = 86,
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
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 104,
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
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 38,
        '\r', 39,
        '(', 82,
        ')', 83,
        '+', 65,
        ',', 84,
        '-', 11,
        '.', 20,
        '/', 14,
        ':', 42,
        '<', 56,
        '=', 63,
        '>', 41,
        '@', 22,
        '[', 51,
        ']', 52,
        '{', 19,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 38,
        '\r', 39,
        '/', 15,
        '<', 55,
        '@', 22,
        '[', 51,
        '{', 19,
        '\t', 102,
        ' ', 102,
      );
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(93);
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
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if ((!eof && set_contains(sym_basis_ref_character_set_1, 13, lookahead))) ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(104);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 21:
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?') ADVANCE(95);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(104);
      END_STATE();
    case 24:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 38,
        '\r', 39,
        '-', 100,
        '/', 15,
        '<', 55,
        '=', 103,
        '@', 22,
        '[', 51,
        '{', 19,
        '\t', 98,
        ' ', 98,
      );
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(62);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(46);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 38,
        '\r', 39,
        '/', 15,
        '<', 55,
        '=', 103,
        '@', 22,
        '[', 51,
        '{', 19,
        '\t', 101,
        ' ', 101,
      );
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '>') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 36:
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
          lookahead == '~') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead == '\n') ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(31);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(43);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(44);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_key);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_PLUS);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ':') ADVANCE(94);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '~') ADVANCE(50);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(94);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(31);
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
      if (lookahead == '/') ADVANCE(37);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_basis_member);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_basis_ref);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_plain_amount);
      ADVANCE_MAP(
        '*', 75,
        '\t', 71,
        ' ', 71,
        0x0b, 76,
        '\f', 76,
        '!', 76,
        '%', 76,
        '(', 76,
        ')', 76,
        '+', 76,
        '/', 76,
        '<', 76,
        '>', 76,
        '@', 76,
        '[', 76,
        '{', 76,
        '}', 76,
        '~', 76,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(68);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_plain_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 75:
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
          lookahead == '~') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_recipe_name);
      if (lookahead == '/') ADVANCE(36);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_recipe_name);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+' ||
          lookahead == ':') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__header_marker);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 95:
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
          lookahead != '?') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__word);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 3},
  [30] = {.lex_state = 1, .external_lex_state = 3},
  [31] = {.lex_state = 1, .external_lex_state = 3},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 3, .external_lex_state = 3},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 3, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 28, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 25},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 17},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_basis_member] = ACTIONS(1),
    [sym_basis_ref] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_POUND] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [sym_timer] = ACTIONS(1),
    [sym_target] = ACTIONS(1),
    [sym__doc_start_meta] = ACTIONS(1),
    [sym__doc_start_steps] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(137),
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
      sym__header_marker,
    ACTIONS(33), 1,
      anon_sym_LT_POUND,
    ACTIONS(36), 1,
      anon_sym_LT_COLON,
    STATE(79), 1,
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
    STATE(9), 9,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_with_amount,
      sym_intermediate_ref,
      aux_sym_prose_line_repeat1,
  [59] = 15,
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
      sym__header_marker,
    ACTIONS(58), 1,
      anon_sym_LT_POUND,
    ACTIONS(60), 1,
      anon_sym_LT_COLON,
    STATE(79), 1,
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
    STATE(9), 9,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_with_amount,
      sym_intermediate_ref,
      aux_sym_prose_line_repeat1,
  [118] = 14,
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
    ACTIONS(58), 1,
      anon_sym_LT_POUND,
    ACTIONS(60), 1,
      anon_sym_LT_COLON,
    ACTIONS(64), 1,
      sym__nl,
    ACTIONS(66), 1,
      sym__header_marker,
    STATE(79), 1,
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
    STATE(8), 9,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_with_amount,
      sym_intermediate_ref,
      aux_sym_prose_line_repeat1,
  [174] = 14,
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
    ACTIONS(58), 1,
      anon_sym_LT_POUND,
    ACTIONS(60), 1,
      anon_sym_LT_COLON,
    ACTIONS(64), 1,
      sym__nl,
    ACTIONS(66), 1,
      sym__header_marker,
    STATE(79), 1,
      sym_amount_block,
    STATE(102), 1,
      sym_step_section,
    ACTIONS(68), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(4), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 9,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_with_amount,
      sym_intermediate_ref,
      aux_sym_prose_line_repeat1,
  [230] = 14,
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
    ACTIONS(33), 1,
      anon_sym_LT_POUND,
    ACTIONS(36), 1,
      anon_sym_LT_COLON,
    ACTIONS(70), 1,
      sym__nl,
    ACTIONS(73), 1,
      sym__header_marker,
    STATE(79), 1,
      sym_amount_block,
    ACTIONS(76), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(6), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 9,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_with_amount,
      sym_intermediate_ref,
      aux_sym_prose_line_repeat1,
  [286] = 14,
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
      sym__header_marker,
    ACTIONS(58), 1,
      anon_sym_LT_POUND,
    ACTIONS(60), 1,
      anon_sym_LT_COLON,
    STATE(79), 1,
      sym_amount_block,
    STATE(80), 1,
      sym_step_section,
    ACTIONS(62), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(3), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 9,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_with_amount,
      sym_intermediate_ref,
      aux_sym_prose_line_repeat1,
  [342] = 14,
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
    ACTIONS(58), 1,
      anon_sym_LT_POUND,
    ACTIONS(60), 1,
      anon_sym_LT_COLON,
    ACTIONS(79), 1,
      sym__nl,
    ACTIONS(83), 1,
      sym_literal,
    ACTIONS(85), 1,
      sym__eof,
    STATE(24), 1,
      sym__eol,
    STATE(79), 1,
      sym_amount_block,
    ACTIONS(81), 2,
      sym_timer,
      sym_target,
    STATE(10), 9,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_with_amount,
      sym_intermediate_ref,
      aux_sym_prose_line_repeat1,
  [394] = 14,
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
    ACTIONS(58), 1,
      anon_sym_LT_POUND,
    ACTIONS(60), 1,
      anon_sym_LT_COLON,
    ACTIONS(83), 1,
      sym_literal,
    ACTIONS(87), 1,
      sym__nl,
    ACTIONS(89), 1,
      sym__eof,
    STATE(15), 1,
      sym__eol,
    STATE(79), 1,
      sym_amount_block,
    ACTIONS(81), 2,
      sym_timer,
      sym_target,
    STATE(10), 9,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_with_amount,
      sym_intermediate_ref,
      aux_sym_prose_line_repeat1,
  [446] = 13,
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
      anon_sym_LT_POUND,
    ACTIONS(108), 1,
      anon_sym_LT_COLON,
    ACTIONS(114), 1,
      sym_literal,
    ACTIONS(117), 1,
      sym__eof,
    STATE(79), 1,
      sym_amount_block,
    ACTIONS(111), 2,
      sym_timer,
      sym_target,
    STATE(10), 9,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_with_amount,
      sym_intermediate_ref,
      aux_sym_prose_line_repeat1,
  [495] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [516] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [537] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym__nl,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      sym_label_text,
    STATE(85), 1,
      sym_amount_block,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(16), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_ingredient_label,
      aux_sym_ingredient_section_repeat1,
  [568] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [589] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [610] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__nl,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(156), 1,
      sym_label_text,
    STATE(85), 1,
      sym_amount_block,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(16), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_ingredient_label,
      aux_sym_ingredient_section_repeat1,
  [641] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [662] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 12,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [683] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [703] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [723] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [743] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym__nl,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      sym_label_text,
    STATE(84), 1,
      sym_ingredient_section,
    STATE(85), 1,
      sym_amount_block,
    STATE(13), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_ingredient_label,
      aux_sym_ingredient_section_repeat1,
  [773] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [793] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [813] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 11,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
      sym_literal,
  [833] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(169), 2,
      sym__eof,
      sym_literal,
    ACTIONS(167), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
  [852] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(173), 2,
      sym__eof,
      sym_literal,
    ACTIONS(171), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
  [871] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym__eof,
      sym_literal,
    ACTIONS(175), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
  [890] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym__eof,
      sym_literal,
    ACTIONS(179), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
  [909] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(185), 2,
      sym__eof,
      sym_literal,
    ACTIONS(183), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
  [928] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(189), 2,
      sym__eof,
      sym_literal,
    ACTIONS(187), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
  [947] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(193), 2,
      sym__eof,
      sym_literal,
    ACTIONS(191), 9,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      anon_sym_LT_COLON,
      sym_timer,
      sym_target,
  [966] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    ACTIONS(201), 1,
      sym_plain_amount,
    STATE(124), 1,
      sym__basis_amount,
    ACTIONS(197), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(199), 2,
      sym_basis_member,
      sym_basis_ref,
    STATE(136), 2,
      sym__amount,
      sym_amount_macro,
  [991] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__nl,
    ACTIONS(208), 1,
      anon_sym_LT_BANG,
    ACTIONS(211), 1,
      sym_key,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(34), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__nl,
    ACTIONS(218), 1,
      anon_sym_LT_BANG,
    ACTIONS(220), 1,
      sym_key,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(34), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__nl,
    ACTIONS(218), 1,
      anon_sym_LT_BANG,
    ACTIONS(222), 1,
      sym_key,
    STATE(82), 1,
      sym_metadata_section,
    STATE(102), 1,
      sym__metadata_document,
    STATE(35), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1062] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    ACTIONS(197), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    STATE(104), 2,
      sym__amount,
      sym_amount_macro,
    ACTIONS(226), 3,
      sym_basis_member,
      sym_basis_ref,
      sym_plain_amount,
  [1082] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      sym__nl,
    ACTIONS(233), 1,
      aux_sym_value_token1,
    STATE(73), 1,
      sym_note_text,
    STATE(75), 1,
      sym_blank_line,
    STATE(38), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1105] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym__nl,
    ACTIONS(238), 1,
      aux_sym_value_token1,
    STATE(73), 1,
      sym_note_text,
    STATE(75), 1,
      sym_blank_line,
    STATE(135), 1,
      sym_note_section,
    STATE(40), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1128] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym__nl,
    ACTIONS(238), 1,
      aux_sym_value_token1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_note_text,
    STATE(75), 1,
      sym_blank_line,
    STATE(38), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1151] = 3,
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
  [1165] = 3,
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
  [1179] = 3,
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
  [1193] = 3,
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
  [1207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_label_text,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1221] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__nl,
    ACTIONS(264), 1,
      sym_header_text,
    ACTIONS(266), 1,
      anon_sym_LT_POUND,
    ACTIONS(268), 1,
      sym__eof,
    STATE(25), 1,
      sym__eol,
    STATE(61), 1,
      sym_header_anchor,
  [1243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_label_text,
    ACTIONS(270), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_label_text,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1271] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LT_POUND,
    ACTIONS(274), 1,
      sym__nl,
    ACTIONS(276), 1,
      sym_header_text,
    ACTIONS(278), 1,
      sym__eof,
    STATE(11), 1,
      sym__eol,
    STATE(68), 1,
      sym_header_anchor,
  [1293] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LT_POUND,
    STATE(21), 1,
      sym__eol,
    STATE(59), 1,
      sym_header_anchor,
    ACTIONS(280), 2,
      sym__eof,
      sym__nl,
  [1310] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym__nl,
    ACTIONS(286), 1,
      aux_sym_value_token1,
    ACTIONS(288), 1,
      sym__eof,
    STATE(57), 1,
      sym__eol,
    STATE(77), 1,
      sym_value,
  [1329] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym__eol,
    STATE(63), 1,
      sym_mapping_group,
    ACTIONS(290), 2,
      sym__eof,
      sym__nl,
  [1346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_key,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LT_POUND,
    STATE(14), 1,
      sym__eol,
    STATE(70), 1,
      sym_header_anchor,
    ACTIONS(294), 2,
      sym__eof,
      sym__nl,
  [1376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_key,
    ACTIONS(296), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_key,
    ACTIONS(300), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_key,
    ACTIONS(304), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1415] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 2,
      sym__nl,
      aux_sym_value_token1,
  [1426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym__eol,
    ACTIONS(312), 2,
      sym__eof,
      sym__nl,
  [1437] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_mapping_side,
    STATE(62), 1,
      sym_mapping,
    STATE(108), 1,
      sym_mapping_list,
  [1450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym__eol,
    ACTIONS(316), 2,
      sym__eof,
      sym__nl,
  [1461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_mapping_list_repeat1,
  [1474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym__eol,
    ACTIONS(322), 2,
      sym__eof,
      sym__nl,
  [1485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_mapping_list_repeat1,
  [1498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_mapping_list_repeat1,
  [1511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      sym__eol,
    ACTIONS(331), 2,
      sym__eof,
      sym__nl,
  [1522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym__eol,
    ACTIONS(290), 2,
      sym__eof,
      sym__nl,
  [1533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym__eol,
    ACTIONS(333), 2,
      sym__eof,
      sym__nl,
  [1544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      sym__eol,
    ACTIONS(335), 2,
      sym__eof,
      sym__nl,
  [1555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym__eol,
    ACTIONS(337), 2,
      sym__eof,
      sym__nl,
  [1566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym__eol,
    ACTIONS(339), 2,
      sym__eof,
      sym__nl,
  [1577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym__eol,
    ACTIONS(341), 2,
      sym__eof,
      sym__nl,
  [1588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym__eol,
    ACTIONS(343), 2,
      sym__eof,
      sym__nl,
  [1599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      sym__eol,
    ACTIONS(345), 2,
      sym__eof,
      sym__nl,
  [1610] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 2,
      sym__nl,
      aux_sym_value_token1,
  [1621] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 2,
      sym__nl,
      aux_sym_value_token1,
  [1632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym__eol,
    ACTIONS(351), 2,
      sym__eof,
      sym__nl,
  [1643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 2,
      sym__eof,
      sym__nl,
  [1651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LT,
    ACTIONS(357), 1,
      anon_sym_LT_COLON,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      sym__separator,
  [1671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      sym__eof,
      sym__nl,
  [1679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 1,
      sym__separator,
  [1689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      sym__eof,
      sym__nl,
  [1697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      sym__separator,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LT_TILDE,
    ACTIONS(377), 1,
      anon_sym_LT,
  [1717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LT,
    ACTIONS(381), 1,
      anon_sym_LT_COLON,
  [1727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_LT_COLON,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      sym__eof,
      sym__nl,
  [1745] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_mapping_side,
    STATE(91), 1,
      sym_mapping,
  [1755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_LT_TILDE,
  [1781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LT,
    ACTIONS(381), 1,
      anon_sym_LT_TILDE,
  [1791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__word,
    STATE(126), 1,
      sym_basis_name,
  [1801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_GT,
  [1808] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ingredient_name,
  [1815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_GT,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_recipe_name,
  [1829] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_ingredient_name,
  [1836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_GT,
  [1843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_recipe_name,
  [1850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [1857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
  [1864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
  [1871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_GT,
  [1878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LT_PLUS,
  [1885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_DASH_GT,
  [1892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
  [1899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_GT,
  [1906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_recipe_name,
  [1913] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_mapping_side,
  [1920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_GT,
  [1927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_GT,
  [1934] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_ingredient_name,
  [1941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LT_PLUS,
  [1948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_GT,
  [1955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_GT,
  [1962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_GT,
  [1969] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_ingredient_name,
  [1976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_GT,
  [1983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COLON,
  [1990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
  [1997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
  [2004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_GT,
  [2018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_GT,
  [2025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_GT,
  [2032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_GT,
  [2039] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_ingredient_name,
  [2046] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_ingredient_name,
  [2053] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_ingredient_name,
  [2060] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_ingredient_name,
  [2067] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_ingredient_name,
  [2074] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_ingredient_name,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 394,
  [SMALL_STATE(10)] = 446,
  [SMALL_STATE(11)] = 495,
  [SMALL_STATE(12)] = 516,
  [SMALL_STATE(13)] = 537,
  [SMALL_STATE(14)] = 568,
  [SMALL_STATE(15)] = 589,
  [SMALL_STATE(16)] = 610,
  [SMALL_STATE(17)] = 641,
  [SMALL_STATE(18)] = 662,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 703,
  [SMALL_STATE(21)] = 723,
  [SMALL_STATE(22)] = 743,
  [SMALL_STATE(23)] = 773,
  [SMALL_STATE(24)] = 793,
  [SMALL_STATE(25)] = 813,
  [SMALL_STATE(26)] = 833,
  [SMALL_STATE(27)] = 852,
  [SMALL_STATE(28)] = 871,
  [SMALL_STATE(29)] = 890,
  [SMALL_STATE(30)] = 909,
  [SMALL_STATE(31)] = 928,
  [SMALL_STATE(32)] = 947,
  [SMALL_STATE(33)] = 966,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1014,
  [SMALL_STATE(36)] = 1037,
  [SMALL_STATE(37)] = 1062,
  [SMALL_STATE(38)] = 1082,
  [SMALL_STATE(39)] = 1105,
  [SMALL_STATE(40)] = 1128,
  [SMALL_STATE(41)] = 1151,
  [SMALL_STATE(42)] = 1165,
  [SMALL_STATE(43)] = 1179,
  [SMALL_STATE(44)] = 1193,
  [SMALL_STATE(45)] = 1207,
  [SMALL_STATE(46)] = 1221,
  [SMALL_STATE(47)] = 1243,
  [SMALL_STATE(48)] = 1257,
  [SMALL_STATE(49)] = 1271,
  [SMALL_STATE(50)] = 1293,
  [SMALL_STATE(51)] = 1310,
  [SMALL_STATE(52)] = 1329,
  [SMALL_STATE(53)] = 1346,
  [SMALL_STATE(54)] = 1359,
  [SMALL_STATE(55)] = 1376,
  [SMALL_STATE(56)] = 1389,
  [SMALL_STATE(57)] = 1402,
  [SMALL_STATE(58)] = 1415,
  [SMALL_STATE(59)] = 1426,
  [SMALL_STATE(60)] = 1437,
  [SMALL_STATE(61)] = 1450,
  [SMALL_STATE(62)] = 1461,
  [SMALL_STATE(63)] = 1474,
  [SMALL_STATE(64)] = 1485,
  [SMALL_STATE(65)] = 1498,
  [SMALL_STATE(66)] = 1511,
  [SMALL_STATE(67)] = 1522,
  [SMALL_STATE(68)] = 1533,
  [SMALL_STATE(69)] = 1544,
  [SMALL_STATE(70)] = 1555,
  [SMALL_STATE(71)] = 1566,
  [SMALL_STATE(72)] = 1577,
  [SMALL_STATE(73)] = 1588,
  [SMALL_STATE(74)] = 1599,
  [SMALL_STATE(75)] = 1610,
  [SMALL_STATE(76)] = 1621,
  [SMALL_STATE(77)] = 1632,
  [SMALL_STATE(78)] = 1643,
  [SMALL_STATE(79)] = 1651,
  [SMALL_STATE(80)] = 1661,
  [SMALL_STATE(81)] = 1671,
  [SMALL_STATE(82)] = 1679,
  [SMALL_STATE(83)] = 1689,
  [SMALL_STATE(84)] = 1697,
  [SMALL_STATE(85)] = 1707,
  [SMALL_STATE(86)] = 1717,
  [SMALL_STATE(87)] = 1727,
  [SMALL_STATE(88)] = 1737,
  [SMALL_STATE(89)] = 1745,
  [SMALL_STATE(90)] = 1755,
  [SMALL_STATE(91)] = 1763,
  [SMALL_STATE(92)] = 1771,
  [SMALL_STATE(93)] = 1781,
  [SMALL_STATE(94)] = 1791,
  [SMALL_STATE(95)] = 1801,
  [SMALL_STATE(96)] = 1808,
  [SMALL_STATE(97)] = 1815,
  [SMALL_STATE(98)] = 1822,
  [SMALL_STATE(99)] = 1829,
  [SMALL_STATE(100)] = 1836,
  [SMALL_STATE(101)] = 1843,
  [SMALL_STATE(102)] = 1850,
  [SMALL_STATE(103)] = 1857,
  [SMALL_STATE(104)] = 1864,
  [SMALL_STATE(105)] = 1871,
  [SMALL_STATE(106)] = 1878,
  [SMALL_STATE(107)] = 1885,
  [SMALL_STATE(108)] = 1892,
  [SMALL_STATE(109)] = 1899,
  [SMALL_STATE(110)] = 1906,
  [SMALL_STATE(111)] = 1913,
  [SMALL_STATE(112)] = 1920,
  [SMALL_STATE(113)] = 1927,
  [SMALL_STATE(114)] = 1934,
  [SMALL_STATE(115)] = 1941,
  [SMALL_STATE(116)] = 1948,
  [SMALL_STATE(117)] = 1955,
  [SMALL_STATE(118)] = 1962,
  [SMALL_STATE(119)] = 1969,
  [SMALL_STATE(120)] = 1976,
  [SMALL_STATE(121)] = 1983,
  [SMALL_STATE(122)] = 1990,
  [SMALL_STATE(123)] = 1997,
  [SMALL_STATE(124)] = 2004,
  [SMALL_STATE(125)] = 2011,
  [SMALL_STATE(126)] = 2018,
  [SMALL_STATE(127)] = 2025,
  [SMALL_STATE(128)] = 2032,
  [SMALL_STATE(129)] = 2039,
  [SMALL_STATE(130)] = 2046,
  [SMALL_STATE(131)] = 2053,
  [SMALL_STATE(132)] = 2060,
  [SMALL_STATE(133)] = 2067,
  [SMALL_STATE(134)] = 2074,
  [SMALL_STATE(135)] = 2081,
  [SMALL_STATE(136)] = 2088,
  [SMALL_STATE(137)] = 2095,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_section, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_section, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_section, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose_line, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prose_line, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, 0, 7),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4, 0, 7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_with_amount, 4, 0, 8),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_with_amount, 4, 0, 8),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_with_amount, 4, 0, 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_with_amount, 4, 0, 8),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_link, 3, 0, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_link, 3, 0, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_ref, 3, 0, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_ref, 3, 0, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_section, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_section, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_decl, 5, 0, 8),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_decl, 5, 0, 8),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5, 0, 8),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5, 0, 8),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4, 0, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4, 0, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 7, 0, 9),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 7, 0, 9),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 8, 0, 10),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 8, 0, 10),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_label, 2, 0, 6),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_label, 2, 0, 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 4, 0, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 4, 0, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 3, 0, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 3, 0, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 2, 0, 6),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 2, 0, 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_anchor, 3, 0, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 5, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_group, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3, 0, 11),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_macro, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_name, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), REDUCE(sym__basis_amount, 1, 0, 0),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), SHIFT(106),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 7, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [479] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
