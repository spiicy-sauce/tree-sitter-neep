//! Rust bindings for the Neep tree-sitter grammar.
//!
//! ```
//! let mut parser = tree_sitter::Parser::new();
//! parser.set_language(&tree_sitter_neep::LANGUAGE.into()).unwrap();
//! ```

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_neep() -> *const ();
}

/// The tree-sitter [`LanguageFn`] for Neep.
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_neep) };

/// The syntax-highlighting query for Neep.
pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");

/// The language-injection query for Neep.
pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");
