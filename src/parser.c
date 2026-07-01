#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 24

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
  sym_intermediate_name = 70,
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
  field_out_amount = 9,
  field_outer = 10,
  field_sub_input = 11,
  field_text = 12,
  field_title = 13,
  field_value = 14,
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
  [field_out_amount] = "out_amount",
  [field_outer] = "outer",
  [field_sub_input] = "sub_input",
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
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 3},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 4},
  [20] = {.index = 39, .length = 4},
  [21] = {.index = 43, .length = 2},
  [22] = {.index = 45, .length = 3},
  [23] = {.index = 48, .length = 2},
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
    {field_name, 3},
    {field_sub_input, 1},
  [14] =
    {field_name, 2},
    {field_out_amount, 4},
  [16] =
    {field_input, 1},
    {field_name, 3},
  [18] =
    {field_in_amount, 0},
    {field_name, 3},
  [20] =
    {field_name, 3},
    {field_out_amount, 5},
    {field_sub_input, 1},
  [23] =
    {field_input, 1},
    {field_name, 3},
    {field_out_amount, 5},
  [26] =
    {field_in_amount, 0},
    {field_name, 4},
    {field_sub_input, 2},
  [29] =
    {field_in_amount, 0},
    {field_name, 3},
    {field_out_amount, 5},
  [32] =
    {field_in_amount, 0},
    {field_input, 2},
    {field_name, 4},
  [35] =
    {field_in_amount, 0},
    {field_name, 4},
    {field_out_amount, 6},
    {field_sub_input, 2},
  [39] =
    {field_in_amount, 0},
    {field_input, 2},
    {field_name, 4},
    {field_out_amount, 6},
  [43] =
    {field_amount, 1},
    {field_name, 4},
  [45] =
    {field_amount, 1},
    {field_mappings, 6},
    {field_name, 4},
  [48] =
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
  [6] = 2,
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
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 14,
  [22] = 15,
  [23] = 17,
  [24] = 24,
  [25] = 18,
  [26] = 26,
  [27] = 19,
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
  [48] = 48,
  [49] = 49,
  [50] = 49,
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
  [61] = 19,
  [62] = 55,
  [63] = 19,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 65,
  [71] = 71,
  [72] = 72,
  [73] = 73,
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
  [91] = 76,
  [92] = 73,
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
  [109] = 33,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 44,
  [118] = 118,
  [119] = 44,
  [120] = 33,
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
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 155,
  [165] = 155,
  [166] = 166,
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
  {0, 0x08}, {0x0e, 0x1f}, {'"', '$'}, {'&', '\''}, {',', '9'}, {';', ';'}, {'=', '='}, {'?', '?'},
  {'A', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
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
        '\t', 101,
        ' ', 101,
      );
      if (lookahead != 0) ADVANCE(103);
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
      if ((!eof && set_contains(sym_basis_ref_character_set_1, 13, lookahead))) ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(42);
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
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 17:
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
    case 18:
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 13, lookahead))) ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(95);
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
          lookahead != '?') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(103);
      END_STATE();
    case 24:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 38,
        '\r', 39,
        '-', 99,
        '/', 15,
        '<', 55,
        '=', 102,
        '@', 22,
        '[', 51,
        '{', 19,
        '\t', 97,
        ' ', 97,
      );
      if (lookahead != 0) ADVANCE(103);
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
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 13, lookahead))) ADVANCE(46);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 38,
        '\r', 39,
        '/', 15,
        '<', 55,
        '=', 102,
        '@', 22,
        '[', 51,
        '{', 19,
        '\t', 100,
        ' ', 100,
      );
      if (lookahead != 0) ADVANCE(103);
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
          lookahead == ':' ||
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
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '~') ADVANCE(50);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '+') ADVANCE(53);
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
      if (lookahead == '/') ADVANCE(33);
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
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 13, lookahead))) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_recipe_name);
      if ((!eof && set_contains(sym_recipe_name_character_set_1, 13, lookahead))) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_ingredient_name_token1);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_ingredient_name_token1);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_ingredient_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':' &&
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
          lookahead != '?') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(102);
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
          lookahead != '{') ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(103);
      END_STATE();
    case 102:
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
          lookahead != '{') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__word);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(104);
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
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 3},
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
  [40] = {.lex_state = 1, .external_lex_state = 3},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 1, .external_lex_state = 3},
  [44] = {.lex_state = 1, .external_lex_state = 3},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 3, .external_lex_state = 3},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 25},
  [62] = {.lex_state = 3, .external_lex_state = 3},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 28, .external_lex_state = 3},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 25},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 25},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 18},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 18},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
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
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 18},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
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
    [sym_file] = STATE(129),
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
    STATE(97), 1,
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
    STATE(97), 1,
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
    STATE(97), 1,
      sym_amount_block,
    STATE(122), 1,
      sym_step_section,
    ACTIONS(29), 3,
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
  [162] = 13,
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
    STATE(97), 1,
      sym_amount_block,
    STATE(134), 1,
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
    STATE(97), 1,
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
    STATE(97), 1,
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
    STATE(21), 1,
      sym__eol,
    STATE(97), 1,
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
    STATE(14), 1,
      sym__eol,
    STATE(97), 1,
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
    STATE(97), 1,
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
    STATE(93), 1,
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
    STATE(93), 1,
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
    STATE(93), 1,
      sym_amount_block,
    STATE(104), 1,
      sym_ingredient_section,
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
  [728] = 3,
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
  [747] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_amount_block,
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
  [770] = 3,
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
  [789] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_amount_block,
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
  [812] = 3,
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
  [831] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_amount_block,
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
  [854] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_amount_block,
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
  [877] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_amount_block,
    ACTIONS(179), 2,
      sym__eof,
      sym_literal,
    ACTIONS(177), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [900] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_amount_block,
    ACTIONS(183), 2,
      sym__eof,
      sym_literal,
    ACTIONS(181), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [923] = 3,
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
  [941] = 3,
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
  [959] = 3,
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
  [977] = 3,
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
  [995] = 3,
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
  [1013] = 3,
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
  [1031] = 3,
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
  [1049] = 3,
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
  [1067] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym__eof,
      sym_literal,
    ACTIONS(217), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [1085] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(223), 2,
      sym__eof,
      sym_literal,
    ACTIONS(221), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [1103] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym__eof,
      sym_literal,
    ACTIONS(225), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [1121] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(231), 2,
      sym__eof,
      sym_literal,
    ACTIONS(229), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [1139] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(235), 2,
      sym__eof,
      sym_literal,
    ACTIONS(233), 8,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      anon_sym_LT_POUND,
      sym_timer,
      sym_target,
  [1157] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__nl,
    ACTIONS(239), 1,
      anon_sym_LT_BANG,
    ACTIONS(241), 1,
      sym_key,
    STATE(98), 1,
      sym_metadata_section,
    STATE(134), 1,
      sym__metadata_document,
    STATE(48), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1182] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      sym_plain_amount,
    STATE(136), 1,
      sym__basis_amount,
    ACTIONS(245), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      sym_basis_member,
      sym_basis_ref,
    STATE(164), 2,
      sym__amount,
      sym_amount_macro,
  [1207] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym__nl,
    ACTIONS(256), 1,
      anon_sym_LT_BANG,
    ACTIONS(259), 1,
      sym_key,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(47), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1230] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__nl,
    ACTIONS(239), 1,
      anon_sym_LT_BANG,
    ACTIONS(264), 1,
      sym_key,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(47), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [1253] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    ACTIONS(245), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    STATE(165), 2,
      sym__amount,
      sym_amount_macro,
    ACTIONS(268), 3,
      sym_basis_member,
      sym_basis_ref,
      sym_plain_amount,
  [1273] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    ACTIONS(245), 2,
      anon_sym_EQ,
      anon_sym_PLUS,
    STATE(155), 2,
      sym__amount,
      sym_amount_macro,
    ACTIONS(272), 3,
      sym_basis_member,
      sym_basis_ref,
      sym_plain_amount,
  [1293] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      sym__nl,
    ACTIONS(278), 1,
      aux_sym_value_token1,
    STATE(81), 1,
      sym_blank_line,
    STATE(82), 1,
      sym_note_text,
    STATE(52), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1316] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      sym__nl,
    ACTIONS(285), 1,
      aux_sym_value_token1,
    STATE(81), 1,
      sym_blank_line,
    STATE(82), 1,
      sym_note_text,
    STATE(52), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1339] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym__nl,
    ACTIONS(278), 1,
      aux_sym_value_token1,
    STATE(81), 1,
      sym_blank_line,
    STATE(82), 1,
      sym_note_text,
    STATE(149), 1,
      sym_note_section,
    STATE(51), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [1362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_label_text,
    ACTIONS(288), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1376] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__nl,
    ACTIONS(294), 1,
      sym_header_text,
    ACTIONS(296), 1,
      anon_sym_LT_POUND,
    ACTIONS(298), 1,
      sym__eof,
    STATE(20), 1,
      sym__eol,
    STATE(76), 1,
      sym_header_anchor,
  [1398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_label_text,
    ACTIONS(300), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_label_text,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_label_text,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_label_text,
    ACTIONS(312), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_label_text,
    ACTIONS(316), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [1468] = 3,
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
  [1482] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LT_POUND,
    ACTIONS(320), 1,
      sym__nl,
    ACTIONS(322), 1,
      sym_header_text,
    ACTIONS(324), 1,
      sym__eof,
    STATE(16), 1,
      sym__eol,
    STATE(91), 1,
      sym_header_anchor,
  [1504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_key,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1517] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym__eol,
    STATE(87), 1,
      sym_mapping_group,
    ACTIONS(326), 2,
      sym__eof,
      sym__nl,
  [1534] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LT_POUND,
    STATE(15), 1,
      sym__eol,
    STATE(73), 1,
      sym_header_anchor,
    ACTIONS(330), 2,
      sym__eof,
      sym__nl,
  [1551] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__nl,
    ACTIONS(336), 1,
      aux_sym_value_token1,
    ACTIONS(338), 1,
      sym__eof,
    STATE(68), 1,
      sym__eol,
    STATE(80), 1,
      sym_value,
  [1570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_key,
    ACTIONS(340), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_key,
    ACTIONS(344), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_key,
    ACTIONS(348), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LT_POUND,
    STATE(22), 1,
      sym__eol,
    STATE(92), 1,
      sym_header_anchor,
    ACTIONS(352), 2,
      sym__eof,
      sym__nl,
  [1626] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(356), 1,
      aux_sym_ingredient_name_token1,
    STATE(127), 1,
      sym_ingredient_name,
    STATE(139), 1,
      sym_intermediate_name,
  [1642] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_ingredient_name_token1,
    ACTIONS(358), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_ingredient_name,
    STATE(159), 1,
      sym_intermediate_name,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym__eol,
    ACTIONS(360), 2,
      sym__eof,
      sym__nl,
  [1669] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 2,
      sym__nl,
      aux_sym_value_token1,
  [1680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym__eol,
    ACTIONS(362), 2,
      sym__eof,
      sym__nl,
  [1691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym__eol,
    ACTIONS(364), 2,
      sym__eof,
      sym__nl,
  [1702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(54), 1,
      sym__eol,
    ACTIONS(366), 2,
      sym__eof,
      sym__nl,
  [1713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      sym__eol,
    ACTIONS(368), 2,
      sym__eof,
      sym__nl,
  [1724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(67), 1,
      sym__eol,
    ACTIONS(370), 2,
      sym__eof,
      sym__nl,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(69), 1,
      sym__eol,
    ACTIONS(372), 2,
      sym__eof,
      sym__nl,
  [1746] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 2,
      sym__nl,
      aux_sym_value_token1,
  [1757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(85), 1,
      sym__eol,
    ACTIONS(378), 2,
      sym__eof,
      sym__nl,
  [1768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(60), 1,
      sym__eol,
    ACTIONS(380), 2,
      sym__eof,
      sym__nl,
  [1779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym__eol,
    ACTIONS(326), 2,
      sym__eof,
      sym__nl,
  [1790] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 2,
      sym__nl,
      aux_sym_value_token1,
  [1801] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_mapping_side,
    STATE(88), 1,
      sym_mapping,
    STATE(133), 1,
      sym_mapping_list,
  [1814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(59), 1,
      sym__eol,
    ACTIONS(388), 2,
      sym__eof,
      sym__nl,
  [1825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_mapping_list_repeat1,
  [1838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_mapping_list_repeat1,
  [1851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_mapping_list_repeat1,
  [1864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym__eol,
    ACTIONS(401), 2,
      sym__eof,
      sym__nl,
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym__eol,
    ACTIONS(403), 2,
      sym__eof,
      sym__nl,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LT_TILDE,
    ACTIONS(407), 1,
      anon_sym_LT,
  [1896] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_ingredient_name_token1,
    STATE(146), 1,
      sym_intermediate_name,
  [1906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_GT,
    ACTIONS(413), 1,
      anon_sym_COLON,
  [1916] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_ingredient_name_token1,
    STATE(126), 1,
      sym_ingredient_name,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LT_PLUS,
    ACTIONS(419), 1,
      anon_sym_LT,
  [1936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 1,
      sym__separator,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__word,
    STATE(125), 1,
      sym_basis_name,
  [1956] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_ingredient_name_token1,
    STATE(137), 1,
      sym_ingredient_name,
  [1966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      sym__eof,
      sym__nl,
  [1974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      sym__eof,
      sym__nl,
  [1982] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_ingredient_name_token1,
    STATE(152), 1,
      sym_ingredient_name,
  [1992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 1,
      sym__separator,
  [2002] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_ingredient_name_token1,
    STATE(153), 1,
      sym_ingredient_name,
  [2012] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_ingredient_name_token1,
    STATE(147), 1,
      sym_ingredient_name,
  [2022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      sym__eof,
      sym__nl,
  [2030] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_ingredient_name_token1,
    STATE(151), 1,
      sym_ingredient_name,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_LT_PLUS,
  [2050] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_ingredient_name_token1,
    STATE(130), 1,
      sym_intermediate_name,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      sym__eof,
      sym__nl,
  [2068] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_mapping_side,
    STATE(115), 1,
      sym_mapping,
  [2078] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_ingredient_name_token1,
    STATE(143), 1,
      sym_intermediate_name,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2104] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_ingredient_name_token1,
    STATE(145), 1,
      sym_intermediate_name,
  [2114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      anon_sym_LT_TILDE,
  [2124] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_ingredient_name_token1,
    STATE(160), 1,
      sym_intermediate_name,
  [2134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      anon_sym_LT_PLUS,
  [2144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_LT_TILDE,
  [2154] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_ingredient_name_token1,
    STATE(131), 1,
      sym_intermediate_name,
  [2164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 1,
      sym__separator,
  [2174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_GT,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [2184] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_mapping_side,
  [2191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_GT,
  [2198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_GT,
  [2205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_GT,
  [2212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_recipe_name,
  [2219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
  [2226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_GT,
  [2233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_GT,
  [2240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_DASH_GT,
  [2247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [2254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
  [2261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_recipe_name,
  [2268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
  [2275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_GT,
  [2282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_GT,
  [2289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_COLON,
  [2296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_GT,
  [2303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_GT,
  [2310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LT_PLUS,
  [2317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_GT,
  [2324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_GT,
  [2331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_GT,
  [2338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_GT,
  [2345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_GT,
  [2352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LT_PLUS,
  [2359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
  [2366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COLON,
  [2373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_GT,
  [2380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_GT,
  [2387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_GT,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_COLON,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_recipe_name,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_GT,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COLON,
  [2436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_GT,
  [2443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_recipe_name,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
  [2457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
  [2471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_GT,
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
  [SMALL_STATE(26)] = 789,
  [SMALL_STATE(27)] = 812,
  [SMALL_STATE(28)] = 831,
  [SMALL_STATE(29)] = 854,
  [SMALL_STATE(30)] = 877,
  [SMALL_STATE(31)] = 900,
  [SMALL_STATE(32)] = 923,
  [SMALL_STATE(33)] = 941,
  [SMALL_STATE(34)] = 959,
  [SMALL_STATE(35)] = 977,
  [SMALL_STATE(36)] = 995,
  [SMALL_STATE(37)] = 1013,
  [SMALL_STATE(38)] = 1031,
  [SMALL_STATE(39)] = 1049,
  [SMALL_STATE(40)] = 1067,
  [SMALL_STATE(41)] = 1085,
  [SMALL_STATE(42)] = 1103,
  [SMALL_STATE(43)] = 1121,
  [SMALL_STATE(44)] = 1139,
  [SMALL_STATE(45)] = 1157,
  [SMALL_STATE(46)] = 1182,
  [SMALL_STATE(47)] = 1207,
  [SMALL_STATE(48)] = 1230,
  [SMALL_STATE(49)] = 1253,
  [SMALL_STATE(50)] = 1273,
  [SMALL_STATE(51)] = 1293,
  [SMALL_STATE(52)] = 1316,
  [SMALL_STATE(53)] = 1339,
  [SMALL_STATE(54)] = 1362,
  [SMALL_STATE(55)] = 1376,
  [SMALL_STATE(56)] = 1398,
  [SMALL_STATE(57)] = 1412,
  [SMALL_STATE(58)] = 1426,
  [SMALL_STATE(59)] = 1440,
  [SMALL_STATE(60)] = 1454,
  [SMALL_STATE(61)] = 1468,
  [SMALL_STATE(62)] = 1482,
  [SMALL_STATE(63)] = 1504,
  [SMALL_STATE(64)] = 1517,
  [SMALL_STATE(65)] = 1534,
  [SMALL_STATE(66)] = 1551,
  [SMALL_STATE(67)] = 1570,
  [SMALL_STATE(68)] = 1583,
  [SMALL_STATE(69)] = 1596,
  [SMALL_STATE(70)] = 1609,
  [SMALL_STATE(71)] = 1626,
  [SMALL_STATE(72)] = 1642,
  [SMALL_STATE(73)] = 1658,
  [SMALL_STATE(74)] = 1669,
  [SMALL_STATE(75)] = 1680,
  [SMALL_STATE(76)] = 1691,
  [SMALL_STATE(77)] = 1702,
  [SMALL_STATE(78)] = 1713,
  [SMALL_STATE(79)] = 1724,
  [SMALL_STATE(80)] = 1735,
  [SMALL_STATE(81)] = 1746,
  [SMALL_STATE(82)] = 1757,
  [SMALL_STATE(83)] = 1768,
  [SMALL_STATE(84)] = 1779,
  [SMALL_STATE(85)] = 1790,
  [SMALL_STATE(86)] = 1801,
  [SMALL_STATE(87)] = 1814,
  [SMALL_STATE(88)] = 1825,
  [SMALL_STATE(89)] = 1838,
  [SMALL_STATE(90)] = 1851,
  [SMALL_STATE(91)] = 1864,
  [SMALL_STATE(92)] = 1875,
  [SMALL_STATE(93)] = 1886,
  [SMALL_STATE(94)] = 1896,
  [SMALL_STATE(95)] = 1906,
  [SMALL_STATE(96)] = 1916,
  [SMALL_STATE(97)] = 1926,
  [SMALL_STATE(98)] = 1936,
  [SMALL_STATE(99)] = 1946,
  [SMALL_STATE(100)] = 1956,
  [SMALL_STATE(101)] = 1966,
  [SMALL_STATE(102)] = 1974,
  [SMALL_STATE(103)] = 1982,
  [SMALL_STATE(104)] = 1992,
  [SMALL_STATE(105)] = 2002,
  [SMALL_STATE(106)] = 2012,
  [SMALL_STATE(107)] = 2022,
  [SMALL_STATE(108)] = 2030,
  [SMALL_STATE(109)] = 2040,
  [SMALL_STATE(110)] = 2050,
  [SMALL_STATE(111)] = 2060,
  [SMALL_STATE(112)] = 2068,
  [SMALL_STATE(113)] = 2078,
  [SMALL_STATE(114)] = 2088,
  [SMALL_STATE(115)] = 2096,
  [SMALL_STATE(116)] = 2104,
  [SMALL_STATE(117)] = 2114,
  [SMALL_STATE(118)] = 2124,
  [SMALL_STATE(119)] = 2134,
  [SMALL_STATE(120)] = 2144,
  [SMALL_STATE(121)] = 2154,
  [SMALL_STATE(122)] = 2164,
  [SMALL_STATE(123)] = 2174,
  [SMALL_STATE(124)] = 2184,
  [SMALL_STATE(125)] = 2191,
  [SMALL_STATE(126)] = 2198,
  [SMALL_STATE(127)] = 2205,
  [SMALL_STATE(128)] = 2212,
  [SMALL_STATE(129)] = 2219,
  [SMALL_STATE(130)] = 2226,
  [SMALL_STATE(131)] = 2233,
  [SMALL_STATE(132)] = 2240,
  [SMALL_STATE(133)] = 2247,
  [SMALL_STATE(134)] = 2254,
  [SMALL_STATE(135)] = 2261,
  [SMALL_STATE(136)] = 2268,
  [SMALL_STATE(137)] = 2275,
  [SMALL_STATE(138)] = 2282,
  [SMALL_STATE(139)] = 2289,
  [SMALL_STATE(140)] = 2296,
  [SMALL_STATE(141)] = 2303,
  [SMALL_STATE(142)] = 2310,
  [SMALL_STATE(143)] = 2317,
  [SMALL_STATE(144)] = 2324,
  [SMALL_STATE(145)] = 2331,
  [SMALL_STATE(146)] = 2338,
  [SMALL_STATE(147)] = 2345,
  [SMALL_STATE(148)] = 2352,
  [SMALL_STATE(149)] = 2359,
  [SMALL_STATE(150)] = 2366,
  [SMALL_STATE(151)] = 2373,
  [SMALL_STATE(152)] = 2380,
  [SMALL_STATE(153)] = 2387,
  [SMALL_STATE(154)] = 2394,
  [SMALL_STATE(155)] = 2401,
  [SMALL_STATE(156)] = 2408,
  [SMALL_STATE(157)] = 2415,
  [SMALL_STATE(158)] = 2422,
  [SMALL_STATE(159)] = 2429,
  [SMALL_STATE(160)] = 2436,
  [SMALL_STATE(161)] = 2443,
  [SMALL_STATE(162)] = 2450,
  [SMALL_STATE(163)] = 2457,
  [SMALL_STATE(164)] = 2464,
  [SMALL_STATE(165)] = 2471,
  [SMALL_STATE(166)] = 2478,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_section, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_section, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_section, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose_line, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prose_line, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, 0, 8),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4, 0, 8),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 4, 0, 7),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 4, 0, 7),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 6, 0, 16),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 6, 0, 16),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 5, 0, 13),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 5, 0, 13),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 5, 0, 12),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 5, 0, 12),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 6, 0, 18),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 6, 0, 18),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 5, 0, 10),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 5, 0, 10),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 6, 0, 15),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 6, 0, 15),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_with_amount, 4, 0, 9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_with_amount, 4, 0, 9),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 5, 0, 11),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 5, 0, 11),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 6, 0, 14),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 6, 0, 14),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 6, 0, 17),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 6, 0, 17),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 7, 0, 19),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 7, 0, 19),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_decl, 7, 0, 20),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_decl, 7, 0, 20),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_link, 3, 0, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_link, 3, 0, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_section, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_section, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_decl, 5, 0, 9),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_decl, 5, 0, 9),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 7, 0, 21),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 7, 0, 21),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5, 0, 9),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5, 0, 9),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4, 0, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4, 0, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 8, 0, 22),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 8, 0, 22),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_label, 2, 0, 6),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_label, 2, 0, 6),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 3, 0, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 3, 0, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 4, 0, 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 4, 0, 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 2, 0, 6),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 2, 0, 6),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_name, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_name, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_anchor, 3, 0, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_group, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3, 0, 23),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 5, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [459] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_name, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 7, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_macro, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), SHIFT(142),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), REDUCE(sym__basis_amount, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
