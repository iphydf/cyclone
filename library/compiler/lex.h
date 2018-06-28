#ifndef LEX_H
#define LEX_H

#include "absyn.h"

// Typedef processing must be split between the parser and lexer.
// These functions are called by the parser to communicate typedefs
// to the lexer, so the lexer can distinguish typedefs from identifiers.
namespace Lex {
  void register_typedef(Absyn::qvar_t);
  void enter_namespace(Absyn::var_t);
  void leave_namespace();
  void enter_using(Absyn::qvar_t);
  void leave_using();
  void enter_extern_c();
  void leave_extern_c();

  extern Absyn::qvar_t token_qvar;
  extern string_t token_string;
}  // namespace Lex

namespace Lex {
  void pos_init();
  void lex_init(bool include_cyclone_keywords);
  extern $(const char ?, unsigned int) xlate_pos (Position::seg_t);
}  // namespace Lex

#endif /* LEX_H */
