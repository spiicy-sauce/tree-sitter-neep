#include "tree_sitter/parser.h"

// External scanner for Neep.
//
// Its sole job is to disambiguate, once at the start of the file, between a
// metadata-led document and a steps-only document. Both lack a distinguishing
// prefix token, and the same first physical line can lex two different ways
// (e.g. `title: Foo` is a kv-line in metadata but a prose literal in steps),
// so a context-free lexer cannot keep both interpretations alive. The scanner
// looks ahead to the first content line and emits one of two zero-width
// marker tokens to force the correct branch.

enum TokenType {
  DOC_START_META,
  DOC_START_STEPS,
  LINE_EOF,
};

void *tree_sitter_neep_external_scanner_create(void) { return NULL; }
void tree_sitter_neep_external_scanner_destroy(void *payload) {}
void tree_sitter_neep_external_scanner_reset(void *payload) {}
unsigned tree_sitter_neep_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_neep_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

static inline bool is_space(int32_t c) { return c == ' ' || c == '\t'; }
static inline bool is_eol(int32_t c) { return c == '\n' || c == '\r'; }

// Called positioned at the first key character of the first content line.
// Returns true if the line is shaped like a metadata kv-line: a run of
// key characters followed by optional spaces and a colon.
static bool looks_like_kv(TSLexer *lexer) {
  bool any = false;
  for (;;) {
    int32_t c = lexer->lookahead;
    if (c == 0 || is_eol(c) || is_space(c) || c == ':') break;
    any = true;
    lexer->advance(lexer, false);
  }
  if (!any) return false;
  while (is_space(lexer->lookahead)) lexer->advance(lexer, false);
  return lexer->lookahead == ':';
}

bool tree_sitter_neep_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  // Allow a line to be terminated by end-of-file as well as by a newline,
  // so the final line need not carry a trailing newline.
  if (valid_symbols[LINE_EOF] && lexer->eof(lexer)) {
    lexer->result_symbol = LINE_EOF;
    return true;
  }

  if (!valid_symbols[DOC_START_META] && !valid_symbols[DOC_START_STEPS]) {
    return false;
  }

  // Emit a zero-width token: fix the end at the start position, then advance
  // freely for look-ahead without extending the token.
  lexer->mark_end(lexer);

  bool meta = false;
  for (;;) {
    while (is_space(lexer->lookahead)) lexer->advance(lexer, false);
    int32_t c = lexer->lookahead;

    if (c == 0) { meta = false; break; }          // empty document
    if (is_eol(c)) { lexer->advance(lexer, false); continue; }  // blank line

    if (c == '/') {                                // possible comment line
      lexer->advance(lexer, false);
      if (lexer->lookahead == '/') {
        while (lexer->lookahead != 0 && !is_eol(lexer->lookahead)) {
          lexer->advance(lexer, false);
        }
        continue;
      }
      meta = false;                                // line starts with a lone '/'
      break;
    }

    if (c == '<') {
      // A metadata equipment declaration is a line that is just `<!...>`;
      // anything more (or a `<ingredient>`/`<+sub>` ref) makes it a step.
      lexer->advance(lexer, false);
      if (lexer->lookahead == '!') {
        lexer->advance(lexer, false);
        while (lexer->lookahead != 0 && !is_eol(lexer->lookahead) &&
               lexer->lookahead != '>') {
          lexer->advance(lexer, false);
        }
        if (lexer->lookahead == '>') {
          lexer->advance(lexer, false);
          while (is_space(lexer->lookahead)) lexer->advance(lexer, false);
          meta = is_eol(lexer->lookahead) || lexer->lookahead == 0;
        }
      }
      break;
    }
    meta = looks_like_kv(lexer);
    break;
  }

  lexer->result_symbol = meta ? DOC_START_META : DOC_START_STEPS;
  return true;
}
