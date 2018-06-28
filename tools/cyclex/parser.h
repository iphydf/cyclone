#ifndef PARSER_H
#define PARSER_H

#include "cyclone/library/std/core.h"
#include "stdio.h"
#include "cyclone/library/std/list.h"
#include "cyclone/library/std/lexing.h"
#include "syntax.h"

using Core {
using List {
using Lexing {
using Syntax {
namespace Parser {
extern lexer_definition_t parse_file(FILE @f);
extern opt_t<Lexbuf<Function_lexbuf_state<FILE@>>> lbuf;
extern datatype exn {extern Parser_error(string_t)};
}
#include "cyclone/tools/cyclex/parser_tab.h"
}}}}

#endif
