#ifndef LEXER_H
#define LEXER_H

#include "cyclone/library/std/core.h"
#include "stdio.h"
//#include "string.h"
#include "cyclone/library/std/lexing.h"

#include "syntax.h"
#include "parser.h"

using Core {
using Lexing {
using Parser {
namespace Lexer {

extern datatype exn { extern Lexical_error(string_t,int,int); };

extern int lexmain(Lexing::Lexbuf<`a>);
extern int line_num;
extern int line_start_pos;
} // namespace Lexer
}}}

#endif
