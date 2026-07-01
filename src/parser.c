#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

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
  aux_sym_ingredient_name_token1 = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_COMMA = 24,
  anon_sym_DASH_GT = 25,
  sym_mapping_side = 26,
  sym__header_marker = 27,
  sym_header_text = 28,
  anon_sym_LT_POUND = 29,
  sym_timer = 30,
  sym_target = 31,
  sym_literal = 32,
  sym__word = 33,
  sym__doc_start_meta = 34,
  sym__doc_start_steps = 35,
  sym__eof = 36,
  sym_file = 37,
  sym__metadata_document = 38,
  sym__eol = 39,
  sym_metadata_section = 40,
  sym_equipment_line = 41,
  sym_kv_line = 42,
  sym_value = 43,
  sym_blank_line = 44,
  sym_ingredient_section = 45,
  sym_basis_decl = 46,
  sym_sub_recipe = 47,
  sym_ingredient = 48,
  sym_ingredient_label = 49,
  sym_amount_block = 50,
  sym__amount = 51,
  sym_amount_macro = 52,
  sym__basis_amount = 53,
  sym_basis_name = 54,
  sym_ingredient_name = 55,
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
  sym_intermediate_decl = 69,
  sym_macro_block = 70,
  sym_intermediate_name = 71,
  sym_note_section = 72,
  sym_note_line = 73,
  sym_note_text = 74,
  aux_sym_metadata_section_repeat1 = 75,
  aux_sym_ingredient_section_repeat1 = 76,
  aux_sym_mapping_list_repeat1 = 77,
  aux_sym_step_section_repeat1 = 78,
  aux_sym_prose_line_repeat1 = 79,
  aux_sym_note_section_repeat1 = 80,
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
  [aux_sym_ingredient_name_token1] = "ingredient_name_token1",
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
  [sym_amount_macro] = "amount_macro",
  [sym__basis_amount] = "_basis_amount",
  [sym_basis_name] = "basis_name",
  [sym_ingredient_name] = "ingredient_name",
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
  [sym_intermediate_decl] = "intermediate_decl",
  [sym_macro_block] = "macro_block",
  [sym_intermediate_name] = "intermediate_name",
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
  [aux_sym_ingredient_name_token1] = aux_sym_ingredient_name_token1,
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
  [sym_amount_macro] = sym_amount_macro,
  [sym__basis_amount] = sym__basis_amount,
  [sym_basis_name] = sym_basis_name,
  [sym_ingredient_name] = sym_ingredient_name,
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
  [sym_intermediate_decl] = sym_intermediate_decl,
  [sym_macro_block] = sym_macro_block,
  [sym_intermediate_name] = sym_intermediate_name,
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
  [aux_sym_ingredient_name_token1] = {
    .visible = false,
    .named = false,
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
  [sym_ingredient_name] = {
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
  [sym_intermediate_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_block] = {
    .visible = true,
    .named = true,
  },
  [sym_intermediate_name] = {
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
  field_in_amount = 3,
  field_inner = 4,
  field_input = 5,
  field_key = 6,
  field_mappings = 7,
  field_name = 8,
  field_out_macro = 9,
  field_outer = 10,
  field_text = 11,
  field_title = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_amount] = "amount",
  [field_anchor] = "anchor",
  [field_in_amount] = "in_amount",
  [field_inner] = "inner",
  [field_input] = "input",
  [field_key] = "key",
  [field_mappings] = "mappings",
  [field_name] = "name",
  [field_out_macro] = "out_macro",
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
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 3},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 4},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 3},
  [19] = {.index = 36, .length = 2},
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
    {field_name, 2},
  [8] =
    {field_anchor, 2},
    {field_title, 1},
  [10] =
    {field_amount, 0},
    {field_name, 2},
  [12] =
    {field_name, 2},
    {field_out_macro, 4},
  [14] =
    {field_input, 1},
    {field_name, 3},
  [16] =
    {field_in_amount, 0},
    {field_name, 3},
  [18] =
    {field_input, 1},
    {field_name, 3},
    {field_out_macro, 5},
  [21] =
    {field_in_amount, 0},
    {field_name, 3},
    {field_out_macro, 5},
  [24] =
    {field_in_amount, 0},
    {field_input, 2},
    {field_name, 4},
  [27] =
    {field_in_amount, 0},
    {field_input, 2},
    {field_name, 4},
    {field_out_macro, 6},
  [31] =
    {field_amount, 1},
    {field_name, 4},
  [33] =
    {field_amount, 1},
    {field_mappings, 6},
    {field_name, 4},
  [36] =
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
  [20] = 17,
  [21] = 14,
  [22] = 16,
  [23] = 15,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 19,
  [29] = 18,
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 53,
  [56] = 19,
  [57] = 57,
  [58] = 19,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 19,
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
  [86] = 71,
  [87] = 67,
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
  [136] = 109,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 106,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 149,
  [155] = 155,
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
        '(', 81,
        ')', 82,
        '+', 64,
        ',', 83,
        '-', 11,
        '.', 20,
        '/', 14,
        ':', 42,
        '<', 56,
        '=', 62,
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
        '\t', 100,
        ' ', 100,
      );
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(92);
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
      if ((!eof && set_contains(sym_basis_ref_character_set_1, 13, lookahead))) ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(103);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(102);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 21:
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(66);
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
          lookahead != '?') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(102);
      END_STATE();
    case 24:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 38,
        '\r', 39,
        '-', 98,
        '/', 15,
        '<', 55,
        '=', 101,
        '@', 22,
        '[', 51,
        '{', 19,
        '\t', 96,
        ' ', 96,
      );
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(61);
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
        '=', 101,
        '@', 22,
        '[', 51,
        '{', 19,
        '\t', 99,
        ' ', 99,
      );
      if (lookahead != 0) ADVANCE(102);
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
      if (lookahead == ']') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':' ||
          lookahead == '>') ADVANCE(37);
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
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '+') ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '~') ADVANCE(50);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_basis_member);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_basis_ref);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_plain_amount);
      ADVANCE_MAP(
        '*', 74,
        '\t', 70,
        ' ', 70,
        0x0b, 75,
        '\f', 75,
        '!', 75,
        '%', 75,
        '(', 75,
        ')', 75,
        '+', 75,
        '/', 75,
        '<', 75,
        '>', 75,
        '@', 75,
        '[', 75,
        '{', 75,
        '}', 75,
        '~', 75,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_plain_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 74:
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
          lookahead == '~') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(66);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_recipe_name);
      if (lookahead == '/') ADVANCE(36);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_recipe_name);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 12, lookahead))) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_ingredient_name_token1);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':' &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_ingredient_name_token1);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':' &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_ingredient_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':' &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__header_marker);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      END_STATE();
    case 93:
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
          lookahead != '?') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(101);
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
          lookahead != '{') ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__word);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(103);
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
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 1, .external_lex_state = 3},
  [31] = {.lex_state = 1, .external_lex_state = 3},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 1, .external_lex_state = 3},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 1, .external_lex_state = 3},
  [36] = {.lex_state = 1, .external_lex_state = 3},
  [37] = {.lex_state = 1, .external_lex_state = 3},
  [38] = {.lex_state = 1, .external_lex_state = 3},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 3, .external_lex_state = 3},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 3, .external_lex_state = 3},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 28, .external_lex_state = 3},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 25},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 18},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 25},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
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
    [sym_timer] = ACTIONS(1),
    [sym_target] = ACTIONS(1),
    [sym__doc_start_meta] = ACTIONS(1),
    [sym__doc_start_steps] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(134),
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
    STATE(128), 1,
      sym_amount_block,
    ACTIONS(36), 3,
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
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_decl,
      aux_sym_prose_line_repeat1,
  [55] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym__separator,
    ACTIONS(43), 1,
      sym__nl,
    ACTIONS(45), 1,
      anon_sym_LT_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LT_PLUS,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      sym__header_marker,
    ACTIONS(55), 1,
      anon_sym_LT_POUND,
    STATE(128), 1,
      sym_amount_block,
    ACTIONS(57), 3,
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
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_decl,
      aux_sym_prose_line_repeat1,
  [110] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym__nl,
    ACTIONS(45), 1,
      anon_sym_LT_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LT_PLUS,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      sym__header_marker,
    ACTIONS(55), 1,
      anon_sym_LT_POUND,
    STATE(105), 1,
      sym_step_section,
    STATE(128), 1,
      sym_amount_block,
    ACTIONS(57), 3,
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
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_decl,
      aux_sym_prose_line_repeat1,
  [162] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LT_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LT_PLUS,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_LT_POUND,
    ACTIONS(59), 1,
      sym__nl,
    ACTIONS(61), 1,
      sym__header_marker,
    STATE(128), 1,
      sym_amount_block,
    STATE(135), 1,
      sym_step_section,
    ACTIONS(63), 3,
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
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_decl,
      aux_sym_prose_line_repeat1,
  [214] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LT_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LT_PLUS,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_LT_POUND,
    ACTIONS(59), 1,
      sym__nl,
    ACTIONS(61), 1,
      sym__header_marker,
    STATE(128), 1,
      sym_amount_block,
    ACTIONS(63), 3,
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
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_decl,
      aux_sym_prose_line_repeat1,
  [266] = 13,
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
    ACTIONS(65), 1,
      sym__nl,
    ACTIONS(68), 1,
      sym__header_marker,
    STATE(128), 1,
      sym_amount_block,
    ACTIONS(71), 3,
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
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_decl,
      aux_sym_prose_line_repeat1,
  [318] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LT_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LT_PLUS,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_LT_POUND,
    ACTIONS(74), 1,
      sym__nl,
    ACTIONS(78), 1,
      sym_literal,
    ACTIONS(80), 1,
      sym__eof,
    STATE(21), 1,
      sym__eol,
    STATE(128), 1,
      sym_amount_block,
    ACTIONS(76), 2,
      sym_timer,
      sym_target,
    STATE(10), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_decl,
      aux_sym_prose_line_repeat1,
  [366] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LT_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LT_PLUS,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_LT_POUND,
    ACTIONS(78), 1,
      sym_literal,
    ACTIONS(82), 1,
      sym__nl,
    ACTIONS(84), 1,
      sym__eof,
    STATE(14), 1,
      sym__eol,
    STATE(128), 1,
      sym_amount_block,
    ACTIONS(76), 2,
      sym_timer,
      sym_target,
    STATE(10), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_decl,
      aux_sym_prose_line_repeat1,
  [414] = 12,
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
    STATE(128), 1,
      sym_amount_block,
    ACTIONS(103), 2,
      sym_timer,
      sym_target,
    STATE(10), 8,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_equipment_ref,
      sym_hash_link,
      sym_ingredient_ref,
      sym_intermediate_decl,
      aux_sym_prose_line_repeat1,
  [459] = 8,
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
    STATE(94), 1,
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
  [490] = 8,
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
    STATE(94), 1,
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
  [521] = 8,
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
    STATE(92), 1,
      sym_ingredient_section,
    STATE(94), 1,
      sym_amount_block,
    STATE(11), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_ingredient_label,
      aux_sym_ingredient_section_repeat1,
  [551] = 3,
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
  [571] = 3,
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
  [591] = 3,
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
  [611] = 3,
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
  [631] = 3,
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
  [651] = 3,
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
  [671] = 3,
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
  [690] = 3,
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
  [709] = 3,
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
  [728] = 3,
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
  [747] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_macro_block,
    ACTIONS(163), 2,
      sym__eof,
      sym_literal,
    ACTIONS(159), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [770] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_macro_block,
    ACTIONS(167), 2,
      sym__eof,
      sym_literal,
    ACTIONS(165), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [793] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_macro_block,
    ACTIONS(171), 2,
      sym__eof,
      sym_literal,
    ACTIONS(169), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [816] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_macro_block,
    ACTIONS(175), 2,
      sym__eof,
      sym_literal,
    ACTIONS(173), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [839] = 3,
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
  [858] = 3,
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
  [877] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(179), 2,
      sym__eof,
      sym_literal,
    ACTIONS(177), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [895] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(183), 2,
      sym__eof,
      sym_literal,
    ACTIONS(181), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [913] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(187), 2,
      sym__eof,
      sym_literal,
    ACTIONS(185), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [931] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(191), 2,
      sym__eof,
      sym_literal,
    ACTIONS(189), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [949] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(195), 2,
      sym__eof,
      sym_literal,
    ACTIONS(193), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [967] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(199), 2,
      sym__eof,
      sym_literal,
    ACTIONS(197), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [985] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(203), 2,
      sym__eof,
      sym_literal,
    ACTIONS(201), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [1003] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym__eof,
      sym_literal,
    ACTIONS(205), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [1021] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(211), 2,
      sym__eof,
      sym_literal,
    ACTIONS(209), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [1039] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym__eof,
      sym_literal,
    ACTIONS(213), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [1057] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__nl,
    ACTIONS(222), 1,
      anon_sym_LT_BANG,
    ACTIONS(225), 1,
      sym_key,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(40), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1080] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    ACTIONS(234), 1,
      sym_plain_amount,
    STATE(114), 1,
      sym__basis_amount,
    ACTIONS(230), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      sym_basis_member,
      sym_basis_ref,
    STATE(154), 2,
      sym__amount,
      sym_amount_macro,
  [1105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__nl,
    ACTIONS(240), 1,
      anon_sym_LT_BANG,
    ACTIONS(242), 1,
      sym_key,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(40), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1128] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__nl,
    ACTIONS(240), 1,
      anon_sym_LT_BANG,
    ACTIONS(244), 1,
      sym_key,
    STATE(91), 1,
      sym_metadata_section,
    STATE(135), 1,
      sym__metadata_document,
    STATE(42), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1153] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    STATE(149), 2,
      sym__amount,
      sym_amount_macro,
    ACTIONS(248), 3,
      sym_basis_member,
      sym_basis_ref,
      sym_plain_amount,
  [1173] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      sym__nl,
    ACTIONS(254), 1,
      aux_sym_value_token1,
    STATE(75), 1,
      sym_blank_line,
    STATE(76), 1,
      sym_note_text,
    STATE(46), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1196] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      sym__nl,
    ACTIONS(261), 1,
      aux_sym_value_token1,
    STATE(75), 1,
      sym_blank_line,
    STATE(76), 1,
      sym_note_text,
    STATE(46), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1219] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym__nl,
    ACTIONS(254), 1,
      aux_sym_value_token1,
    STATE(75), 1,
      sym_blank_line,
    STATE(76), 1,
      sym_note_text,
    STATE(150), 1,
      sym_note_section,
    STATE(45), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_label_text,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_label_text,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_label_text,
    ACTIONS(272), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_label_text,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_label_text,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1312] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym__nl,
    ACTIONS(286), 1,
      sym_header_text,
    ACTIONS(288), 1,
      anon_sym_LT_POUND,
    ACTIONS(290), 1,
      sym__eof,
    STATE(20), 1,
      sym__eol,
    STATE(71), 1,
      sym_header_anchor,
  [1334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_label_text,
    ACTIONS(292), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1348] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LT_POUND,
    ACTIONS(296), 1,
      sym__nl,
    ACTIONS(298), 1,
      sym_header_text,
    ACTIONS(300), 1,
      sym__eof,
    STATE(17), 1,
      sym__eol,
    STATE(86), 1,
      sym_header_anchor,
  [1370] = 3,
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
  [1384] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__nl,
    ACTIONS(304), 1,
      aux_sym_value_token1,
    ACTIONS(306), 1,
      sym__eof,
    STATE(60), 1,
      sym__eol,
    STATE(77), 1,
      sym_value,
  [1403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_key,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym__eol,
    STATE(82), 1,
      sym_mapping_group,
    ACTIONS(308), 2,
      sym__eof,
      sym__nl,
  [1433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_key,
    ACTIONS(312), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_key,
    ACTIONS(316), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LT_POUND,
    STATE(16), 1,
      sym__eol,
    STATE(67), 1,
      sym_header_anchor,
    ACTIONS(320), 2,
      sym__eof,
      sym__nl,
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_key,
    ACTIONS(324), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LT_POUND,
    STATE(22), 1,
      sym__eol,
    STATE(87), 1,
      sym_header_anchor,
    ACTIONS(328), 2,
      sym__eof,
      sym__nl,
  [1506] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(332), 1,
      aux_sym_ingredient_name_token1,
    STATE(152), 1,
      sym_ingredient_name,
    STATE(153), 1,
      sym_intermediate_name,
  [1522] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_ingredient_name_token1,
    ACTIONS(334), 1,
      anon_sym_COLON,
    STATE(119), 1,
      sym_intermediate_name,
    STATE(138), 1,
      sym_ingredient_name,
  [1538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym__eol,
    ACTIONS(336), 2,
      sym__eof,
      sym__nl,
  [1549] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 2,
      sym__nl,
      aux_sym_value_token1,
  [1560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      sym__eol,
    ACTIONS(338), 2,
      sym__eof,
      sym__nl,
  [1571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(155), 1,
      sym_amount_macro,
    ACTIONS(340), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
  [1582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym__eol,
    ACTIONS(342), 2,
      sym__eof,
      sym__nl,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      sym__eol,
    ACTIONS(344), 2,
      sym__eof,
      sym__nl,
  [1604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      sym__eol,
    ACTIONS(346), 2,
      sym__eof,
      sym__nl,
  [1615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      sym__eol,
    ACTIONS(348), 2,
      sym__eof,
      sym__nl,
  [1626] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 2,
      sym__nl,
      aux_sym_value_token1,
  [1637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(80), 1,
      sym__eol,
    ACTIONS(354), 2,
      sym__eof,
      sym__nl,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(63), 1,
      sym__eol,
    ACTIONS(356), 2,
      sym__eof,
      sym__nl,
  [1659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(54), 1,
      sym__eol,
    ACTIONS(358), 2,
      sym__eof,
      sym__nl,
  [1670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      sym__eol,
    ACTIONS(308), 2,
      sym__eof,
      sym__nl,
  [1681] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 2,
      sym__nl,
      aux_sym_value_token1,
  [1692] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_mapping_side,
    STATE(83), 1,
      sym_mapping,
    STATE(126), 1,
      sym_mapping_list,
  [1705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym__eol,
    ACTIONS(366), 2,
      sym__eof,
      sym__nl,
  [1716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_mapping_list_repeat1,
  [1729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_mapping_list_repeat1,
  [1742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_mapping_list_repeat1,
  [1755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym__eol,
    ACTIONS(379), 2,
      sym__eof,
      sym__nl,
  [1766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 1,
      sym__eol,
    ACTIONS(381), 2,
      sym__eof,
      sym__nl,
  [1777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_GT,
    ACTIONS(387), 1,
      anon_sym_COLON,
  [1795] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_ingredient_name_token1,
    STATE(121), 1,
      sym_ingredient_name,
  [1805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 1,
      sym__separator,
  [1815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 1,
      sym__separator,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym__eof,
      sym__nl,
  [1833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LT_TILDE,
    ACTIONS(403), 1,
      anon_sym_LT,
  [1843] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_ingredient_name_token1,
    STATE(142), 1,
      sym_ingredient_name,
  [1853] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_ingredient_name_token1,
    STATE(123), 1,
      sym_intermediate_name,
  [1863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__word,
    STATE(117), 1,
      sym_basis_name,
  [1873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      sym__eof,
      sym__nl,
  [1881] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_ingredient_name_token1,
    STATE(113), 1,
      sym_ingredient_name,
  [1891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      sym__eof,
      sym__nl,
  [1899] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_mapping_side,
    STATE(104), 1,
      sym_mapping,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      sym__eof,
      sym__nl,
  [1917] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_ingredient_name_token1,
    STATE(140), 1,
      sym_intermediate_name,
  [1927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 1,
      sym__separator,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LT_TILDE,
    ACTIONS(421), 1,
      anon_sym_LT,
  [1955] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_ingredient_name_token1,
    STATE(118), 1,
      sym_ingredient_name,
  [1965] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_ingredient_name_token1,
    STATE(122), 1,
      sym_intermediate_name,
  [1975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LT_TILDE,
    ACTIONS(425), 1,
      anon_sym_LT,
  [1985] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_ingredient_name_token1,
    STATE(147), 1,
      sym_ingredient_name,
  [1995] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_ingredient_name_token1,
    STATE(132), 1,
      sym_intermediate_name,
  [2005] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_ingredient_name_token1,
    STATE(130), 1,
      sym_ingredient_name,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_GT,
  [2022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
  [2029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_GT,
  [2036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_GT,
  [2043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_GT,
  [2050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_GT,
  [2057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_COLON,
  [2071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_GT,
  [2078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_GT,
  [2085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_GT,
  [2092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_recipe_name,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DASH_GT,
  [2106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_recipe_name,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LT,
  [2127] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_mapping_side,
  [2134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_GT,
  [2141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
  [2148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_GT,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_GT,
  [2162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
  [2169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
  [2176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LT,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_recipe_name,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_GT,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_GT,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_GT,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_GT,
  [2218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_GT,
  [2225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_GT,
  [2232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LT_PLUS,
  [2239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LT,
  [2246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LT_PLUS,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_GT,
  [2260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
  [2267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
  [2281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
  [2288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_GT,
  [2295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COLON,
  [2302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
  [2309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 414,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 521,
  [SMALL_STATE(14)] = 551,
  [SMALL_STATE(15)] = 571,
  [SMALL_STATE(16)] = 591,
  [SMALL_STATE(17)] = 611,
  [SMALL_STATE(18)] = 631,
  [SMALL_STATE(19)] = 651,
  [SMALL_STATE(20)] = 671,
  [SMALL_STATE(21)] = 690,
  [SMALL_STATE(22)] = 709,
  [SMALL_STATE(23)] = 728,
  [SMALL_STATE(24)] = 747,
  [SMALL_STATE(25)] = 770,
  [SMALL_STATE(26)] = 793,
  [SMALL_STATE(27)] = 816,
  [SMALL_STATE(28)] = 839,
  [SMALL_STATE(29)] = 858,
  [SMALL_STATE(30)] = 877,
  [SMALL_STATE(31)] = 895,
  [SMALL_STATE(32)] = 913,
  [SMALL_STATE(33)] = 931,
  [SMALL_STATE(34)] = 949,
  [SMALL_STATE(35)] = 967,
  [SMALL_STATE(36)] = 985,
  [SMALL_STATE(37)] = 1003,
  [SMALL_STATE(38)] = 1021,
  [SMALL_STATE(39)] = 1039,
  [SMALL_STATE(40)] = 1057,
  [SMALL_STATE(41)] = 1080,
  [SMALL_STATE(42)] = 1105,
  [SMALL_STATE(43)] = 1128,
  [SMALL_STATE(44)] = 1153,
  [SMALL_STATE(45)] = 1173,
  [SMALL_STATE(46)] = 1196,
  [SMALL_STATE(47)] = 1219,
  [SMALL_STATE(48)] = 1242,
  [SMALL_STATE(49)] = 1256,
  [SMALL_STATE(50)] = 1270,
  [SMALL_STATE(51)] = 1284,
  [SMALL_STATE(52)] = 1298,
  [SMALL_STATE(53)] = 1312,
  [SMALL_STATE(54)] = 1334,
  [SMALL_STATE(55)] = 1348,
  [SMALL_STATE(56)] = 1370,
  [SMALL_STATE(57)] = 1384,
  [SMALL_STATE(58)] = 1403,
  [SMALL_STATE(59)] = 1416,
  [SMALL_STATE(60)] = 1433,
  [SMALL_STATE(61)] = 1446,
  [SMALL_STATE(62)] = 1459,
  [SMALL_STATE(63)] = 1476,
  [SMALL_STATE(64)] = 1489,
  [SMALL_STATE(65)] = 1506,
  [SMALL_STATE(66)] = 1522,
  [SMALL_STATE(67)] = 1538,
  [SMALL_STATE(68)] = 1549,
  [SMALL_STATE(69)] = 1560,
  [SMALL_STATE(70)] = 1571,
  [SMALL_STATE(71)] = 1582,
  [SMALL_STATE(72)] = 1593,
  [SMALL_STATE(73)] = 1604,
  [SMALL_STATE(74)] = 1615,
  [SMALL_STATE(75)] = 1626,
  [SMALL_STATE(76)] = 1637,
  [SMALL_STATE(77)] = 1648,
  [SMALL_STATE(78)] = 1659,
  [SMALL_STATE(79)] = 1670,
  [SMALL_STATE(80)] = 1681,
  [SMALL_STATE(81)] = 1692,
  [SMALL_STATE(82)] = 1705,
  [SMALL_STATE(83)] = 1716,
  [SMALL_STATE(84)] = 1729,
  [SMALL_STATE(85)] = 1742,
  [SMALL_STATE(86)] = 1755,
  [SMALL_STATE(87)] = 1766,
  [SMALL_STATE(88)] = 1777,
  [SMALL_STATE(89)] = 1785,
  [SMALL_STATE(90)] = 1795,
  [SMALL_STATE(91)] = 1805,
  [SMALL_STATE(92)] = 1815,
  [SMALL_STATE(93)] = 1825,
  [SMALL_STATE(94)] = 1833,
  [SMALL_STATE(95)] = 1843,
  [SMALL_STATE(96)] = 1853,
  [SMALL_STATE(97)] = 1863,
  [SMALL_STATE(98)] = 1873,
  [SMALL_STATE(99)] = 1881,
  [SMALL_STATE(100)] = 1891,
  [SMALL_STATE(101)] = 1899,
  [SMALL_STATE(102)] = 1909,
  [SMALL_STATE(103)] = 1917,
  [SMALL_STATE(104)] = 1927,
  [SMALL_STATE(105)] = 1935,
  [SMALL_STATE(106)] = 1945,
  [SMALL_STATE(107)] = 1955,
  [SMALL_STATE(108)] = 1965,
  [SMALL_STATE(109)] = 1975,
  [SMALL_STATE(110)] = 1985,
  [SMALL_STATE(111)] = 1995,
  [SMALL_STATE(112)] = 2005,
  [SMALL_STATE(113)] = 2015,
  [SMALL_STATE(114)] = 2022,
  [SMALL_STATE(115)] = 2029,
  [SMALL_STATE(116)] = 2036,
  [SMALL_STATE(117)] = 2043,
  [SMALL_STATE(118)] = 2050,
  [SMALL_STATE(119)] = 2057,
  [SMALL_STATE(120)] = 2064,
  [SMALL_STATE(121)] = 2071,
  [SMALL_STATE(122)] = 2078,
  [SMALL_STATE(123)] = 2085,
  [SMALL_STATE(124)] = 2092,
  [SMALL_STATE(125)] = 2099,
  [SMALL_STATE(126)] = 2106,
  [SMALL_STATE(127)] = 2113,
  [SMALL_STATE(128)] = 2120,
  [SMALL_STATE(129)] = 2127,
  [SMALL_STATE(130)] = 2134,
  [SMALL_STATE(131)] = 2141,
  [SMALL_STATE(132)] = 2148,
  [SMALL_STATE(133)] = 2155,
  [SMALL_STATE(134)] = 2162,
  [SMALL_STATE(135)] = 2169,
  [SMALL_STATE(136)] = 2176,
  [SMALL_STATE(137)] = 2183,
  [SMALL_STATE(138)] = 2190,
  [SMALL_STATE(139)] = 2197,
  [SMALL_STATE(140)] = 2204,
  [SMALL_STATE(141)] = 2211,
  [SMALL_STATE(142)] = 2218,
  [SMALL_STATE(143)] = 2225,
  [SMALL_STATE(144)] = 2232,
  [SMALL_STATE(145)] = 2239,
  [SMALL_STATE(146)] = 2246,
  [SMALL_STATE(147)] = 2253,
  [SMALL_STATE(148)] = 2260,
  [SMALL_STATE(149)] = 2267,
  [SMALL_STATE(150)] = 2274,
  [SMALL_STATE(151)] = 2281,
  [SMALL_STATE(152)] = 2288,
  [SMALL_STATE(153)] = 2295,
  [SMALL_STATE(154)] = 2302,
  [SMALL_STATE(155)] = 2309,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_section, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_section, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_section, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose_line, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prose_line, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, 0, 8),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4, 0, 8),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 4, 0, 7),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 4, 0, 7),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 5, 0, 12),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 5, 0, 12),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 6, 0, 15),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 6, 0, 15),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 5, 0, 11),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 5, 0, 11),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 5, 0, 10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 5, 0, 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_link, 3, 0, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_link, 3, 0, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_with_amount, 4, 0, 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_with_amount, 4, 0, 9),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 6, 0, 13),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 6, 0, 13),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 6, 0, 14),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 6, 0, 14),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_block, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 7, 0, 16),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 7, 0, 16),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_section, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_section, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 7, 0, 17),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 7, 0, 17),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_decl, 5, 0, 9),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_decl, 5, 0, 9),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5, 0, 9),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5, 0, 9),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 8, 0, 18),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 8, 0, 18),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4, 0, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4, 0, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_label, 2, 0, 6),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_label, 2, 0, 6),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 3, 0, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 3, 0, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 4, 0, 5),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 4, 0, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 2, 0, 6),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 2, 0, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3, 0, 19),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_name, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_name, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_anchor, 3, 0, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_group, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 5, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_name, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), REDUCE(sym__basis_amount, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [468] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_macro, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 7, 0, 0),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), SHIFT(144),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
