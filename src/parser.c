#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  sym__separator = 1,
  sym_comment = 2,
  sym__nl = 3,
  anon_sym_BANG = 4,
  aux_sym_equipment_text_token1 = 5,
  anon_sym_COLON = 6,
  sym_key = 7,
  anon_sym_LT_TILDE = 8,
  anon_sym_GT = 9,
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
  sym_equipment_text = 37,
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
  sym_recipe_name = 50,
  sym_mapping_group = 51,
  sym_mapping_list = 52,
  sym_mapping = 53,
  sym_step_section = 54,
  sym_section_header = 55,
  sym_header_text = 56,
  sym_prose_line = 57,
  sym__prose_token = 58,
  sym_ingredient_with_amount = 59,
  sym_sub_recipe_ref = 60,
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
  [anon_sym_BANG] = "!",
  [aux_sym_equipment_text_token1] = "equipment_text_token1",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [anon_sym_LT_TILDE] = "<~",
  [anon_sym_GT] = ">",
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
  [sym_equipment_text] = "equipment_text",
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
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_equipment_text_token1] = aux_sym_equipment_text_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [anon_sym_LT_TILDE] = anon_sym_LT_TILDE,
  [anon_sym_GT] = anon_sym_GT,
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
  [sym_equipment_text] = sym_equipment_text,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_equipment_text_token1] = {
    .visible = false,
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
  [anon_sym_LT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [sym_equipment_text] = {
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
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
  [1] =
    {field_key, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_title, 1},
  [4] =
    {field_key, 0},
    {field_value, 2},
  [6] =
    {field_text, 0},
  [7] =
    {field_amount, 0},
    {field_name, 2},
  [9] =
    {field_amount, 1},
    {field_name, 4},
  [11] =
    {field_amount, 1},
    {field_mappings, 6},
    {field_name, 4},
  [14] =
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
  [5] = 3,
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
  [19] = 17,
  [20] = 20,
  [21] = 14,
  [22] = 22,
  [23] = 16,
  [24] = 15,
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
  [35] = 15,
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
  [46] = 43,
  [47] = 15,
  [48] = 48,
  [49] = 15,
  [50] = 50,
  [51] = 48,
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
  [109] = 109,
  [110] = 83,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 80,
  [115] = 90,
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
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 32,
        '\r', 33,
        '!', 34,
        '(', 68,
        ')', 69,
        ',', 70,
        '-', 7,
        '/', 10,
        ':', 38,
        '<', 50,
        '=', 16,
        '>', 44,
        '@', 18,
        '[', 45,
        ']', 46,
        '{', 15,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 32,
        '\r', 33,
        '/', 11,
        '<', 49,
        '@', 18,
        '[', 45,
        '{', 15,
        '\t', 83,
        ' ', 83,
      );
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(17);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 17:
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(85);
      END_STATE();
    case 20:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20);
      if ((!eof && set_contains(sym_key_character_set_1, 14, lookahead))) ADVANCE(42);
      END_STATE();
    case 21:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 32,
        '\r', 33,
        '-', 81,
        '/', 11,
        '<', 49,
        '=', 84,
        '@', 18,
        '[', 45,
        '{', 15,
        '\t', 79,
        ' ', 79,
      );
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(55);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 32,
        '\r', 33,
        '/', 11,
        '<', 49,
        '=', 84,
        '@', 18,
        '[', 45,
        '{', 15,
        '\t', 82,
        ' ', 82,
      );
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '>') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_equipment_text_token1);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_equipment_text_token1);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_equipment_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(27);
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
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_PLUS);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '+') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '~') ADVANCE(43);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_label_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_basis_member);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_basis_ref);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '.') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '%') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_plain_amount);
      ADVANCE_MAP(
        '*', 63,
        '\t', 64,
        0x0b, 64,
        '\f', 64,
        ' ', 64,
        '!', 64,
        '%', 64,
        '(', 64,
        ')', 64,
        '+', 64,
        '/', 64,
        '<', 64,
        '>', 64,
        '@', 64,
        '[', 64,
        '{', 64,
        '}', 64,
        '~', 64,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(57);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 63:
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
          lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(56);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_plain_amount);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_ingredient_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_mapping_side);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '>') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__header_marker);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
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
          lookahead != '?') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(84);
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
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__word);
      if ((!eof && set_contains(sym_basis_member_character_set_1, 13, lookahead))) ADVANCE(86);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 24, .external_lex_state = 3},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 24, .external_lex_state = 3},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 24, .external_lex_state = 3},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__nl] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT_TILDE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
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
    [sym_file] = STATE(109),
    [sym_comment] = ACTIONS(3),
    [sym__doc_start_meta] = ACTIONS(5),
    [sym__doc_start_steps] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym__separator,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__nl,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_PLUS,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__header_marker,
    STATE(106), 1,
      sym_amount_block,
    ACTIONS(25), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(3), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 5,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [46] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__separator,
    ACTIONS(31), 1,
      sym__nl,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LT_PLUS,
    ACTIONS(40), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      sym__header_marker,
    STATE(106), 1,
      sym_amount_block,
    ACTIONS(46), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(3), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 5,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [92] = 11,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__nl,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_PLUS,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__header_marker,
    STATE(79), 1,
      sym_step_section,
    STATE(106), 1,
      sym_amount_block,
    ACTIONS(25), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(2), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(9), 5,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [135] = 11,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LT_PLUS,
    ACTIONS(40), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      sym__nl,
    ACTIONS(52), 1,
      sym__header_marker,
    STATE(106), 1,
      sym_amount_block,
    ACTIONS(55), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(5), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 5,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [178] = 11,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_PLUS,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(58), 1,
      sym__nl,
    ACTIONS(60), 1,
      sym__header_marker,
    STATE(106), 1,
      sym_amount_block,
    ACTIONS(62), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(5), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 5,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [221] = 11,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_PLUS,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(58), 1,
      sym__nl,
    ACTIONS(60), 1,
      sym__header_marker,
    STATE(106), 1,
      sym_amount_block,
    STATE(108), 1,
      sym_step_section,
    ACTIONS(62), 3,
      sym_timer,
      sym_target,
      sym_literal,
    STATE(6), 4,
      sym_blank_line,
      sym_section_header,
      sym_prose_line,
      aux_sym_step_section_repeat1,
    STATE(8), 5,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [264] = 11,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_PLUS,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      sym__nl,
    ACTIONS(68), 1,
      sym_literal,
    ACTIONS(70), 1,
      sym__eof,
    STATE(21), 1,
      sym__eol,
    STATE(106), 1,
      sym_amount_block,
    ACTIONS(66), 2,
      sym_timer,
      sym_target,
    STATE(10), 5,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [303] = 11,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_PLUS,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(68), 1,
      sym_literal,
    ACTIONS(72), 1,
      sym__nl,
    ACTIONS(74), 1,
      sym__eof,
    STATE(14), 1,
      sym__eol,
    STATE(106), 1,
      sym_amount_block,
    ACTIONS(66), 2,
      sym_timer,
      sym_target,
    STATE(10), 5,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [342] = 10,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__nl,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LT_PLUS,
    ACTIONS(84), 1,
      anon_sym_LT,
    ACTIONS(90), 1,
      sym_literal,
    ACTIONS(93), 1,
      sym__eof,
    STATE(106), 1,
      sym_amount_block,
    ACTIONS(87), 2,
      sym_timer,
      sym_target,
    STATE(10), 5,
      sym__prose_token,
      sym_ingredient_with_amount,
      sym_sub_recipe_ref,
      sym_ingredient_ref,
      aux_sym_prose_line_repeat1,
  [378] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym__nl,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      sym_label_text,
    STATE(82), 1,
      sym_amount_block,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(11), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_group_label,
      aux_sym_ingredient_section_repeat1,
  [409] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym__nl,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym_label_text,
    STATE(82), 1,
      sym_amount_block,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(11), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_group_label,
      aux_sym_ingredient_section_repeat1,
  [440] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym__nl,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym_label_text,
    STATE(81), 1,
      sym_ingredient_section,
    STATE(82), 1,
      sym_amount_block,
    STATE(12), 6,
      sym_blank_line,
      sym_basis_decl,
      sym_sub_recipe,
      sym_ingredient,
      sym_group_label,
      aux_sym_ingredient_section_repeat1,
  [470] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 9,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [488] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 9,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [506] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 9,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [524] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 9,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [542] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym__nl,
    ACTIONS(137), 1,
      anon_sym_BANG,
    ACTIONS(139), 1,
      sym_key,
    STATE(71), 1,
      sym_metadata_section,
    STATE(108), 1,
      sym__metadata_document,
    STATE(20), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [567] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 8,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym__nl,
    ACTIONS(137), 1,
      anon_sym_BANG,
    ACTIONS(143), 1,
      sym_key,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(22), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [607] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 8,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [624] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__nl,
    ACTIONS(150), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      sym_key,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__separator,
    STATE(22), 4,
      sym_equipment_line,
      sym_kv_line,
      sym_blank_line,
      aux_sym_metadata_section_repeat1,
  [647] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 8,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [664] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 8,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym__header_marker,
      sym_timer,
      sym_target,
      sym_literal,
  [681] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(158), 2,
      sym__eof,
      sym_literal,
    ACTIONS(156), 6,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [697] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(162), 2,
      sym__eof,
      sym_literal,
    ACTIONS(160), 6,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [713] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym__eof,
      sym_literal,
    ACTIONS(164), 6,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT_PLUS,
      anon_sym_LT,
      sym_timer,
      sym_target,
  [729] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      sym__nl,
    ACTIONS(172), 1,
      aux_sym_equipment_text_token1,
    STATE(54), 1,
      sym_blank_line,
    STATE(55), 1,
      sym_note_text,
    STATE(30), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [752] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym__nl,
    ACTIONS(172), 1,
      aux_sym_equipment_text_token1,
    STATE(54), 1,
      sym_blank_line,
    STATE(55), 1,
      sym_note_text,
    STATE(98), 1,
      sym_note_section,
    STATE(28), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [775] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      sym__nl,
    ACTIONS(179), 1,
      aux_sym_equipment_text_token1,
    STATE(54), 1,
      sym_blank_line,
    STATE(55), 1,
      sym_note_text,
    STATE(30), 2,
      sym_note_line,
      aux_sym_note_section_repeat1,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_label_text,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_label_text,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_label_text,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [840] = 3,
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
  [854] = 3,
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
  [868] = 3,
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
  [882] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    ACTIONS(206), 1,
      sym_plain_amount,
    STATE(113), 1,
      sym__basis_amount,
    STATE(115), 1,
      sym__amount,
    ACTIONS(204), 2,
      sym_basis_member,
      sym_basis_ref,
  [902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_label_text,
    ACTIONS(208), 5,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_LBRACK,
      anon_sym_LT,
  [916] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym__amount,
    ACTIONS(214), 3,
      sym_basis_member,
      sym_basis_ref,
      sym_plain_amount,
  [931] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__nl,
    ACTIONS(218), 1,
      aux_sym_equipment_text_token1,
    ACTIONS(220), 1,
      sym__eof,
    STATE(44), 1,
      sym__eol,
    STATE(62), 1,
      sym_value,
  [950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_key,
    ACTIONS(222), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_BANG,
  [963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_key,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_BANG,
  [976] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__nl,
    ACTIONS(232), 1,
      aux_sym_equipment_text_token1,
    ACTIONS(234), 1,
      sym__eof,
    STATE(23), 1,
      sym__eol,
    STATE(51), 1,
      sym_header_text,
  [995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_key,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_BANG,
  [1008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__eol,
    STATE(58), 1,
      sym_mapping_group,
    ACTIONS(240), 2,
      sym__eof,
      sym__nl,
  [1025] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_equipment_text_token1,
    ACTIONS(244), 1,
      sym__nl,
    ACTIONS(246), 1,
      sym__eof,
    STATE(16), 1,
      sym__eol,
    STATE(48), 1,
      sym_header_text,
  [1044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_key,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      sym__separator,
      sym__nl,
      anon_sym_BANG,
  [1057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym__eol,
    ACTIONS(248), 2,
      sym__eof,
      sym__nl,
  [1068] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 2,
      sym__nl,
      aux_sym_equipment_text_token1,
  [1079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      sym__eol,
    ACTIONS(250), 2,
      sym__eof,
      sym__nl,
  [1090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym__eol,
    ACTIONS(252), 2,
      sym__eof,
      sym__nl,
  [1101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym__eol,
    ACTIONS(254), 2,
      sym__eof,
      sym__nl,
  [1112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      sym__eol,
    ACTIONS(256), 2,
      sym__eof,
      sym__nl,
  [1123] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 2,
      sym__nl,
      aux_sym_equipment_text_token1,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      sym__eol,
    ACTIONS(262), 2,
      sym__eof,
      sym__nl,
  [1145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__eol,
    ACTIONS(240), 2,
      sym__eof,
      sym__nl,
  [1156] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_mapping_side,
    STATE(59), 1,
      sym_mapping,
    STATE(91), 1,
      sym_mapping_list,
  [1169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym__eol,
    ACTIONS(266), 2,
      sym__eof,
      sym__nl,
  [1180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_mapping_list_repeat1,
  [1193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_mapping_list_repeat1,
  [1206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_mapping_list_repeat1,
  [1219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      sym__eol,
    ACTIONS(279), 2,
      sym__eof,
      sym__nl,
  [1230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym__eol,
    ACTIONS(281), 2,
      sym__eof,
      sym__nl,
  [1241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      sym__eol,
    ACTIONS(283), 2,
      sym__eof,
      sym__nl,
  [1252] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 2,
      sym__nl,
      aux_sym_equipment_text_token1,
  [1263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym__word,
    STATE(99), 1,
      sym_recipe_name,
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym__word,
    STATE(92), 1,
      sym_recipe_name,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym__word,
    STATE(93), 1,
      sym_recipe_name,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      sym__eof,
      sym__nl,
  [1301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__word,
    STATE(112), 1,
      sym_basis_name,
  [1311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      sym__separator,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      sym__eof,
      sym__nl,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      sym__eof,
      sym__nl,
  [1337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      sym__eof,
      sym__nl,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      sym__eof,
      sym__nl,
  [1353] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_mapping_side,
    STATE(78), 1,
      sym_mapping,
  [1363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      sym__separator,
  [1389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LT_TILDE,
    ACTIONS(315), 1,
      anon_sym_LT,
  [1399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      sym__separator,
  [1409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LT_TILDE,
    ACTIONS(323), 1,
      anon_sym_LT,
  [1419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LT_TILDE,
    ACTIONS(327), 1,
      anon_sym_LT,
  [1429] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_equipment_text_token1,
    STATE(63), 1,
      sym_equipment_text,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
  [1446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_GT,
  [1453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_GT,
  [1460] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_ingredient_name,
  [1467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_GT,
  [1474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
  [1481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
  [1488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_GT,
  [1495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_GT,
  [1502] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_mapping_side,
  [1509] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_ingredient_name,
  [1516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_GT,
  [1523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LT_PLUS,
  [1530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
  [1537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_GT,
  [1544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LT_PLUS,
  [1551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
  [1558] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_ingredient_name,
  [1565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [1572] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_ingredient_name,
  [1579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_GT,
  [1586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LT,
  [1593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
  [1600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [1607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [1614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LT,
  [1621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_GT,
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_GT,
  [1635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
  [1642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LT,
  [1649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 303,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 409,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 488,
  [SMALL_STATE(16)] = 506,
  [SMALL_STATE(17)] = 524,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 567,
  [SMALL_STATE(20)] = 584,
  [SMALL_STATE(21)] = 607,
  [SMALL_STATE(22)] = 624,
  [SMALL_STATE(23)] = 647,
  [SMALL_STATE(24)] = 664,
  [SMALL_STATE(25)] = 681,
  [SMALL_STATE(26)] = 697,
  [SMALL_STATE(27)] = 713,
  [SMALL_STATE(28)] = 729,
  [SMALL_STATE(29)] = 752,
  [SMALL_STATE(30)] = 775,
  [SMALL_STATE(31)] = 798,
  [SMALL_STATE(32)] = 812,
  [SMALL_STATE(33)] = 826,
  [SMALL_STATE(34)] = 840,
  [SMALL_STATE(35)] = 854,
  [SMALL_STATE(36)] = 868,
  [SMALL_STATE(37)] = 882,
  [SMALL_STATE(38)] = 902,
  [SMALL_STATE(39)] = 916,
  [SMALL_STATE(40)] = 931,
  [SMALL_STATE(41)] = 950,
  [SMALL_STATE(42)] = 963,
  [SMALL_STATE(43)] = 976,
  [SMALL_STATE(44)] = 995,
  [SMALL_STATE(45)] = 1008,
  [SMALL_STATE(46)] = 1025,
  [SMALL_STATE(47)] = 1044,
  [SMALL_STATE(48)] = 1057,
  [SMALL_STATE(49)] = 1068,
  [SMALL_STATE(50)] = 1079,
  [SMALL_STATE(51)] = 1090,
  [SMALL_STATE(52)] = 1101,
  [SMALL_STATE(53)] = 1112,
  [SMALL_STATE(54)] = 1123,
  [SMALL_STATE(55)] = 1134,
  [SMALL_STATE(56)] = 1145,
  [SMALL_STATE(57)] = 1156,
  [SMALL_STATE(58)] = 1169,
  [SMALL_STATE(59)] = 1180,
  [SMALL_STATE(60)] = 1193,
  [SMALL_STATE(61)] = 1206,
  [SMALL_STATE(62)] = 1219,
  [SMALL_STATE(63)] = 1230,
  [SMALL_STATE(64)] = 1241,
  [SMALL_STATE(65)] = 1252,
  [SMALL_STATE(66)] = 1263,
  [SMALL_STATE(67)] = 1273,
  [SMALL_STATE(68)] = 1283,
  [SMALL_STATE(69)] = 1293,
  [SMALL_STATE(70)] = 1301,
  [SMALL_STATE(71)] = 1311,
  [SMALL_STATE(72)] = 1321,
  [SMALL_STATE(73)] = 1329,
  [SMALL_STATE(74)] = 1337,
  [SMALL_STATE(75)] = 1345,
  [SMALL_STATE(76)] = 1353,
  [SMALL_STATE(77)] = 1363,
  [SMALL_STATE(78)] = 1371,
  [SMALL_STATE(79)] = 1379,
  [SMALL_STATE(80)] = 1389,
  [SMALL_STATE(81)] = 1399,
  [SMALL_STATE(82)] = 1409,
  [SMALL_STATE(83)] = 1419,
  [SMALL_STATE(84)] = 1429,
  [SMALL_STATE(85)] = 1439,
  [SMALL_STATE(86)] = 1446,
  [SMALL_STATE(87)] = 1453,
  [SMALL_STATE(88)] = 1460,
  [SMALL_STATE(89)] = 1467,
  [SMALL_STATE(90)] = 1474,
  [SMALL_STATE(91)] = 1481,
  [SMALL_STATE(92)] = 1488,
  [SMALL_STATE(93)] = 1495,
  [SMALL_STATE(94)] = 1502,
  [SMALL_STATE(95)] = 1509,
  [SMALL_STATE(96)] = 1516,
  [SMALL_STATE(97)] = 1523,
  [SMALL_STATE(98)] = 1530,
  [SMALL_STATE(99)] = 1537,
  [SMALL_STATE(100)] = 1544,
  [SMALL_STATE(101)] = 1551,
  [SMALL_STATE(102)] = 1558,
  [SMALL_STATE(103)] = 1565,
  [SMALL_STATE(104)] = 1572,
  [SMALL_STATE(105)] = 1579,
  [SMALL_STATE(106)] = 1586,
  [SMALL_STATE(107)] = 1593,
  [SMALL_STATE(108)] = 1600,
  [SMALL_STATE(109)] = 1607,
  [SMALL_STATE(110)] = 1614,
  [SMALL_STATE(111)] = 1621,
  [SMALL_STATE(112)] = 1628,
  [SMALL_STATE(113)] = 1635,
  [SMALL_STATE(114)] = 1642,
  [SMALL_STATE(115)] = 1649,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_section, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_section, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_section_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_line_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_section_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_section, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose_line, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prose_line, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_section, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_section_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe_ref, 3, 0, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe_ref, 3, 0, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_with_amount, 4, 0, 7),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_with_amount, 4, 0, 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_section, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_section_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_label, 2, 0, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_label, 2, 0, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_decl, 5, 0, 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basis_decl, 5, 0, 7),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4, 0, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4, 0, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5, 0, 7),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5, 0, 7),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 8, 0, 9),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 8, 0, 9),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_recipe, 7, 0, 8),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_recipe, 7, 0, 8),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 4, 0, 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 4, 0, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_line, 3, 0, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equipment_line, 3, 0, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv_line, 3, 0, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv_line, 3, 0, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_list, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_list_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 2, 0, 6),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 2, 0, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_text, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equipment_text, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_group, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3, 0, 10),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 5, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_block, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_block, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_name, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_document, 7, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), REDUCE(sym__basis_amount, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basis_name, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__amount, 1, 0, 0), SHIFT(97),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
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
