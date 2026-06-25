#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  sym_ingredient_name = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_COMMA = 21,
  anon_sym_DASH_GT = 22,
  sym_mapping_side = 23,
  sym__header_marker = 24,
  sym_timer = 25,
  sym_target = 26,
  sym_literal = 27,
  sym__word = 28,
  sym__doc_start_meta = 29,
  sym__doc_start_steps = 30,
  sym__eof = 31,
  sym_file = 32,
  sym__metadata_document = 33,
  sym__eol = 34,
  sym_metadata_section = 35,
  sym_equipment_line = 36,
  sym_kv_line = 37,
  sym_value = 38,
  sym_blank_line = 39,
  sym_ingredient_section = 40,
  sym_basis_decl = 41,
  sym_sub_recipe = 42,
  sym_ingredient = 43,
  sym_group_label = 44,
  sym_amount_block = 45,
  sym__amount = 46,
  sym__basis_amount = 47,
  sym_basis_name = 48,
  sym_recipe_name = 49,
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
  [sym_recipe_name] = "recipe_name",
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
  [sym_recipe_name] = sym_recipe_name,
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
  [sym_recipe_name] = {
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
  [18] = 16,
  [19] = 17,
  [20] = 14,
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
  [37] = 37,
  [38] = 38,
  [39] = 14,
  [40] = 14,
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
  [64] = 14,
  [65] = 58,
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
  [86] = 81,
  [87] = 83,
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
  [117] = 88,
  [118] = 118,
};

static TSCharacterRange sym_key_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '$'}, {'&', '\''}, {',', '.'}, {'0', '9'}, {';', ';'}, {'=', '='},
  {'?', '?'}, {'A', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static TSCharacterRange sym_basis_member_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '$'}, {'&', '\''}, {',', '.'}, {'0', ';'}, {'=', '='}, {'?', '?'},
  {'A', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 34,
        '\r', 35,
        '(', 71,
        ')', 72,
        ',', 73,
        '-', 8,
        '.', 18,
        '/', 12,
        ':', 38,
        '<', 52,
        '=', 17,
        '>', 37,
        '@', 20,
        '[', 47,
        ']', 48,
        '{', 16,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 34,
        '\r', 35,
        '/', 13,
        '<', 51,
        '@', 20,
        '[', 47,
        '{', 16,
        '\t', 86,
        ' ', 86,
      );
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(36);
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
      if (lookahead == '*') ADVANCE(19);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 19:
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?') ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(88);
      END_STATE();
    case 22:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 34,
        '\r', 35,
        '-', 84,
        '/', 13,
        '<', 51,
        '=', 87,
        '@', 20,
        '[', 47,
        '{', 16,
        '\t', 82,
        ' ', 82,
      );
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 23:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(57);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(42);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 34,
        '\r', 35,
        '/', 13,
        '<', 51,
        '=', 87,
        '@', 20,
        '[', 47,
        '{', 16,
        '\t', 85,
        ' ', 85,
      );
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '>') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead == '\n') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(29);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(39);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(40);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_key);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_PLUS);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '+') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == '~') ADVANCE(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_basis_member);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_basis_ref);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '.') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_plain_amount);
      ADVANCE_MAP(
        '*', 66,
        '\t', 67,
        0x0b, 67,
        '\f', 67,
        ' ', 67,
        '!', 67,
        '%', 67,
        '(', 67,
        ')', 67,
        '+', 67,
        '/', 67,
        '<', 67,
        '>', 67,
        '@', 67,
        '[', 67,
        '{', 67,
        '}', 67,
        '~', 67,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(59);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_plain_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 66:
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
          lookahead == '~') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '+') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__header_marker);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 79:
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
          lookahead != '?') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__word);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 26, .external_lex_state = 3},
  [46] = {.lex_state = 26, .external_lex_state = 3},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 26, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 15},
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
    [sym_file] = STATE(116),
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
    STATE(68), 1,
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
    STATE(112), 1,
      sym_amount_block,
    STATE(115), 1,
      sym_step_section,
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
    STATE(18), 1,
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
    STATE(16), 1,
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
    STATE(75), 1,
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
    STATE(75), 1,
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
    STATE(74), 1,
      sym_ingredient_section,
    STATE(75), 1,
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
  [600] = 3,
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
  [618] = 3,
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
  [654] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym__nl,
    ACTIONS(145), 1,
      anon_sym_LT_BANG,
    ACTIONS(147), 1,
      sym_key,
    STATE(71), 1,
      sym_metadata_section,
    STATE(115), 1,
      sym__metadata_document,
    STATE(27), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [679] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(151), 2,
      sym__eof,
      sym_literal,
    ACTIONS(149), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [696] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(155), 2,
      sym__eof,
      sym_literal,
    ACTIONS(153), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym__nl,
    ACTIONS(162), 1,
      anon_sym_LT_BANG,
    ACTIONS(165), 1,
      sym_key,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(25), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [736] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(170), 2,
      sym__eof,
      sym_literal,
    ACTIONS(168), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym__nl,
    ACTIONS(145), 1,
      anon_sym_LT_BANG,
    ACTIONS(174), 1,
      sym_key,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(25), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [776] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym__eof,
      sym_literal,
    ACTIONS(176), 7,
      sym__nl,
      anon_sym_LT_BANG,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [793] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym__nl,
    ACTIONS(182), 1,
      aux_sym_value_token1,
    STATE(62), 1,
      sym_blank_line,
    STATE(66), 1,
      sym_note_text,
    STATE(101), 1,
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
    STATE(62), 1,
      sym_blank_line,
    STATE(66), 1,
      sym_note_text,
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
    STATE(62), 1,
      sym_blank_line,
    STATE(66), 1,
      sym_note_text,
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
    ACTIONS(216), 1,
      sym_label_text,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [946] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    ACTIONS(222), 1,
      sym_plain_amount,
    STATE(103), 1,
      sym__basis_amount,
    STATE(117), 1,
      sym__amount,
    ACTIONS(220), 2,
      sym_basis_member,
      sym_basis_ref,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_label_text,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_key,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [993] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym__amount,
    ACTIONS(226), 3,
      sym_basis_member,
      sym_basis_ref,
      sym_plain_amount,
  [1008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_key,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_key,
    ACTIONS(232), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LT_BANG,
  [1034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__eol,
    STATE(53), 1,
      sym_mapping_group,
    ACTIONS(236), 2,
      sym__eof,
      sym__nl,
  [1051] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__nl,
    ACTIONS(242), 1,
      aux_sym_value_token1,
    ACTIONS(244), 1,
      sym__eof,
    STATE(47), 1,
      sym__eol,
    STATE(63), 1,
      sym_value,
  [1070] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__nl,
    ACTIONS(248), 1,
      aux_sym_value_token1,
    ACTIONS(250), 1,
      sym__eof,
    STATE(15), 1,
      sym__eol,
    STATE(58), 1,
      sym_header_text,
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
    ACTIONS(248), 1,
      aux_sym_value_token1,
    ACTIONS(256), 1,
      sym__nl,
    ACTIONS(258), 1,
      sym__eof,
    STATE(21), 1,
      sym__eol,
    STATE(65), 1,
      sym_header_text,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym__eol,
    ACTIONS(236), 2,
      sym__eof,
      sym__nl,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym__eol,
    ACTIONS(260), 2,
      sym__eof,
      sym__nl,
  [1143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym__eol,
    ACTIONS(262), 2,
      sym__eof,
      sym__nl,
  [1154] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_mapping_side,
    STATE(54), 1,
      sym_mapping,
    STATE(93), 1,
      sym_mapping_list,
  [1167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      sym__eol,
    ACTIONS(266), 2,
      sym__eof,
      sym__nl,
  [1178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_mapping_list_repeat1,
  [1191] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 2,
      sym__nl,
      aux_sym_value_token1,
  [1202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_mapping_list_repeat1,
  [1215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      sym__eol,
    ACTIONS(278), 2,
      sym__eof,
      sym__nl,
  [1226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym__eol,
    ACTIONS(280), 2,
      sym__eof,
      sym__nl,
  [1237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_mapping_list_repeat1,
  [1250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      sym__eol,
    ACTIONS(287), 2,
      sym__eof,
      sym__nl,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      sym__eol,
    ACTIONS(289), 2,
      sym__eof,
      sym__nl,
  [1272] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 2,
      sym__nl,
      aux_sym_value_token1,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      sym__eol,
    ACTIONS(295), 2,
      sym__eof,
      sym__nl,
  [1294] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 2,
      sym__nl,
      aux_sym_value_token1,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym__eol,
    ACTIONS(297), 2,
      sym__eof,
      sym__nl,
  [1316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym__eol,
    ACTIONS(299), 2,
      sym__eof,
      sym__nl,
  [1327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__word,
    STATE(100), 1,
      sym_basis_name,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      sym__separator,
  [1347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__word,
    STATE(95), 1,
      sym_recipe_name,
  [1357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__word,
    STATE(97), 1,
      sym_recipe_name,
  [1367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      sym__separator,
  [1377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      sym__eof,
      sym__nl,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      sym__eof,
      sym__nl,
  [1393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      sym__separator,
  [1403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LT_TILDE,
    ACTIONS(323), 1,
      anon_sym_LT,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      sym__eof,
      sym__nl,
  [1421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 2,
      sym__eof,
      sym__nl,
  [1429] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_mapping_side,
    STATE(80), 1,
      sym_mapping,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LT_TILDE,
    ACTIONS(333), 1,
      anon_sym_LT,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__word,
    STATE(90), 1,
      sym_recipe_name,
  [1475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LT_TILDE,
    ACTIONS(337), 1,
      anon_sym_LT,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_GT,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_GT,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LT,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LT,
  [1513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
  [1520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_GT,
  [1527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_GT,
  [1534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_GT,
  [1541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DASH_GT,
  [1548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
  [1555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_GT,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_GT,
  [1569] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_mapping_side,
  [1576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_GT,
  [1583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_GT,
  [1590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_GT,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
  [1618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_GT,
  [1632] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_ingredient_name,
  [1639] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_ingredient_name,
  [1646] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_ingredient_name,
  [1653] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_ingredient_name,
  [1660] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_ingredient_name,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_GT,
  [1674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_COLON,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LT,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LT_PLUS,
  [1695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LT_PLUS,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [1709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
  [1723] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_ingredient_name,
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
  [SMALL_STATE(23)] = 679,
  [SMALL_STATE(24)] = 696,
  [SMALL_STATE(25)] = 713,
  [SMALL_STATE(26)] = 736,
  [SMALL_STATE(27)] = 753,
  [SMALL_STATE(28)] = 776,
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
  [SMALL_STATE(41)] = 993,
  [SMALL_STATE(42)] = 1008,
  [SMALL_STATE(43)] = 1021,
  [SMALL_STATE(44)] = 1034,
  [SMALL_STATE(45)] = 1051,
  [SMALL_STATE(46)] = 1070,
  [SMALL_STATE(47)] = 1089,
  [SMALL_STATE(48)] = 1102,
  [SMALL_STATE(49)] = 1121,
  [SMALL_STATE(50)] = 1132,
  [SMALL_STATE(51)] = 1143,
  [SMALL_STATE(52)] = 1154,
  [SMALL_STATE(53)] = 1167,
  [SMALL_STATE(54)] = 1178,
  [SMALL_STATE(55)] = 1191,
  [SMALL_STATE(56)] = 1202,
  [SMALL_STATE(57)] = 1215,
  [SMALL_STATE(58)] = 1226,
  [SMALL_STATE(59)] = 1237,
  [SMALL_STATE(60)] = 1250,
  [SMALL_STATE(61)] = 1261,
  [SMALL_STATE(62)] = 1272,
  [SMALL_STATE(63)] = 1283,
  [SMALL_STATE(64)] = 1294,
  [SMALL_STATE(65)] = 1305,
  [SMALL_STATE(66)] = 1316,
  [SMALL_STATE(67)] = 1327,
  [SMALL_STATE(68)] = 1337,
  [SMALL_STATE(69)] = 1347,
  [SMALL_STATE(70)] = 1357,
  [SMALL_STATE(71)] = 1367,
  [SMALL_STATE(72)] = 1377,
  [SMALL_STATE(73)] = 1385,
  [SMALL_STATE(74)] = 1393,
  [SMALL_STATE(75)] = 1403,
  [SMALL_STATE(76)] = 1413,
  [SMALL_STATE(77)] = 1421,
  [SMALL_STATE(78)] = 1429,
  [SMALL_STATE(79)] = 1439,
  [SMALL_STATE(80)] = 1447,
  [SMALL_STATE(81)] = 1455,
  [SMALL_STATE(82)] = 1465,
  [SMALL_STATE(83)] = 1475,
  [SMALL_STATE(84)] = 1485,
  [SMALL_STATE(85)] = 1492,
  [SMALL_STATE(86)] = 1499,
  [SMALL_STATE(87)] = 1506,
  [SMALL_STATE(88)] = 1513,
  [SMALL_STATE(89)] = 1520,
  [SMALL_STATE(90)] = 1527,
  [SMALL_STATE(91)] = 1534,
  [SMALL_STATE(92)] = 1541,
  [SMALL_STATE(93)] = 1548,
  [SMALL_STATE(94)] = 1555,
  [SMALL_STATE(95)] = 1562,
  [SMALL_STATE(96)] = 1569,
  [SMALL_STATE(97)] = 1576,
  [SMALL_STATE(98)] = 1583,
  [SMALL_STATE(99)] = 1590,
  [SMALL_STATE(100)] = 1597,
  [SMALL_STATE(101)] = 1604,
  [SMALL_STATE(102)] = 1611,
  [SMALL_STATE(103)] = 1618,
  [SMALL_STATE(104)] = 1625,
  [SMALL_STATE(105)] = 1632,
  [SMALL_STATE(106)] = 1639,
  [SMALL_STATE(107)] = 1646,
  [SMALL_STATE(108)] = 1653,
  [SMALL_STATE(109)] = 1660,
  [SMALL_STATE(110)] = 1667,
  [SMALL_STATE(111)] = 1674,
  [SMALL_STATE(112)] = 1681,
  [SMALL_STATE(113)] = 1688,
  [SMALL_STATE(114)] = 1695,
  [SMALL_STATE(115)] = 1702,
  [SMALL_STATE(116)] = 1709,
  [SMALL_STATE(117)] = 1716,
  [SMALL_STATE(118)] = 1723,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_section, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_section, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_section, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose_line, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prose_line, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe_ref, 3, 0, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_with_amount, 4, 0, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_with_amount, 4, 0, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_section, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_ref, 3, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_section, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4, 0, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4, 0, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_label, 2, 0, 5),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_label, 2, 0, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5, 0, 6),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5, 0, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_decl, 5, 0, 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_decl, 5, 0, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 7, 0, 7),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 7, 0, 7),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 8, 0, 8),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 8, 0, 8),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_line, 4, 0, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 4, 0, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 4, 0, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 3, 0, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 3, 0, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 2, 0, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 2, 0, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 5, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_text, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_group, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3, 0, 9),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_name, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_name, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), REDUCE(sym__basis_amount, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 7, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), SHIFT(113),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
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
