/* Parser.
   Copyright (C) 2001 Greg Morrisett, AT&T
   This file is part of the Cyclone compiler.

   The Cyclone compiler is free software; you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2 of
   the License, or (at your option) any later version.

   The Cyclone compiler is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with the Cyclone compiler; see the file COPYING. If not,
   write to the Free Software Foundation, Inc., 59 Temple Place -
   Suite 330, Boston, MA 02111-1307, USA. */

void yyprint(int i, union YYSTYPE<`yy> v) {
  switch (v) {
    case {.Int_tok = c}:
      fprintf(stderr, "%s", Absynpp::cnst2string(c));
      break;
    case {.Char_tok = c}:
      fprintf(stderr, "%c", c);
      break;
    case {.String_tok = s}:
      fprintf(stderr, "\"%s\"", s);
      break;
    case {.QualId_tok = q}:
      fprintf(stderr, "%s", Absynpp::qvar2string(q));
      break;
    case {.Exp_tok = e}:
      fprintf(stderr, "%s", Absynpp::exp2string(e));
      break;
    case {.Stmt_tok = s}:
      fprintf(stderr, "%s", Absynpp::stmt2string(s));
      break;
    default:
      fprintf(stderr, "?");
      break;
  }
}

string_t token2string(int token) {
  if (token <= 0)
    return "end-of-file";
  if (token == IDENTIFIER)
    return Lex::token_string;
  if (token == QUAL_IDENTIFIER)
    return Absynpp::qvar2string(Lex::token_qvar);
  int z = YYTRANSLATE(token);
  if ((unsigned)z < numelts(yytname))
    return yytname[z];
  return NULL;
}

namespace Parse {
  list_t<decl_t> parse_file(FILE @`H f) {
    parse_result = NULL;
    region yyr;
    yyparse(yyr, Lexing::from_file(f));
    return parse_result;
  }

  list_t<$(type_t, list_t<BansheeIf::constraint_t>) @> parse_constraint_file(FILE @`H f) {
    constraint_graph = NULL;
    region yyr;
    yyparse(yyr, Lexing::from_file(f));
    return constraint_graph;
  }
}  // namespace Parse
