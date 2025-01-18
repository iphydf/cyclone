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

#define YYDEBUG 1  // 1 to debug, 0 otherwise
#define YYPRINT yyprint
#define YYERROR_VERBOSE
#define YYMAXDEPTH 30000

#if YYDEBUG
extern @tagged union YYSTYPE<`yy::E>;
extern void yyprint(int, union YYSTYPE<`yy>);
#endif

#define IS_PARSE_Y
#define ALL_PARSE_H
#include <string.h>

#include "cyclone/library/compiler/absynpp.h"
#include "cyclone/library/compiler/attributes.h"
#include "cyclone/library/compiler/bansheeif.h"
#include "cyclone/library/compiler/currgn.h"
#include "cyclone/library/compiler/flags.h"
#include "cyclone/library/compiler/kinds.h"
#include "cyclone/library/compiler/lex.h"
#include "cyclone/library/compiler/parse.h"
#include "cyclone/library/compiler/tcutil.h"
#include "cyclone/library/compiler/warn.h"
#include "cyclone/library/std/hashtable.h"
#include "cyclone/library/std/lexing.h"
#include "cyclone/library/std/position.h"

using Absyn;
using Core;
using Hashtable;
using List;

typedef Lexing::Lexbuf<Lexing::Function_lexbuf_state<FILE @>> lexbuf_t;

// State that we thread through the lexer and parser.
#define YYLEX_PARAM_ARG lexbuf_t yylex_buf, union YYSTYPE<`yy> @yylval_ptr, YYLTYPE @yylloc
#define YYLEX_ARG yylex_buf, &yylval, &yylloc
#define YYPARSE_PARAM_ARG region_t<`yy> yyr, lexbuf_t yylex_buf

#define LOC(s, e) (Position::loc_to_seg(s.first_line))
#define SLOC(s) (Position::loc_to_seg(s.first_line))
#define DL 0

namespace Parse {

  // Flag that's turned on when processing tempest code instead of cyclone.
  // We interpreter "*" as a fat pointer there and intend for regions to
  // default to the heap (along with some other trickery).
  static bool parsing_tempest = false;  // FLAG

  // flattened lists
  struct FlatList<`a::A, `r> {
    struct FlatList<`a, `r> *`r tl;
    `a hd;
  };

  // imperatively reverse a flattened list
  flat_list_t<`a, `r> flat_imp_rev(flat_list_t<`a, `r> x) {
    if (x == NULL)
      return x;
    flat_list_t first = x;
    flat_list_t second = x->tl;
    x->tl = NULL;
    while (second != NULL) {
      flat_list_t temp = second->tl;
      second->tl = first;
      first = second;
      second = temp;
    }
    return first;
  }

  datatype exn{Exit};

  ////////////////////// Type definitions needed only during parsing ///////////
  struct Type_specifier {
    bool Signed_spec : 1;
    bool Unsigned_spec : 1;
    bool Short_spec : 1;
    bool Long_spec : 1;
    bool Long_Long_spec : 1;
    bool Complex_spec : 1;
    bool Valid_type_spec : 1;
    type_t Type_spec;
    seg_t loc;
  };

#if 0
enum Storage_class
{
  Typedef_sc, Extern_sc, ExternC_sc, Static_sc, Auto_sc, Register_sc, Abstract_sc,
  None_sc
};
#endif

  struct Declaration_spec {
    storage_class_t sc;
    tqual_t tq;
    type_specifier_t type_specs;
    bool is_inline;
    attributes_t attributes;
  };

  struct Declarator<`yy> {
    qvar_t id;
    seg_t varloc;
    list_t<type_modifier_t<`yy>, `yy> tms;
  };

  datatype Pointer_qual {
    Numelts_ptrqual(exp_t);
    Region_ptrqual(type_t);
    Effect_ptrqual(types_t);
    Thin_ptrqual;
    Fat_ptrqual;
    Zeroterm_ptrqual;
    Nozeroterm_ptrqual;
    Autoreleased_ptrqual;
    Notnull_ptrqual;
    Nullable_ptrqual;
    Alias_ptrqual(aqualtype_t);
  };

  struct Abstractdeclarator<`yy> {
    list_t<type_modifier_t<`yy>, `yy> tms;
  };

  struct Tms {
    seg_t varloc;
    qvar_t x;
    tqual_t tq;
    type_t typ;
    list_t<tvar_t> tvs;
    list_t<attribute_t> atts;
  };
  typedef struct Tms @`r tms_t<`r>;

  ////////////////////////// forward references //////////////////////
  static type_t collapse_type_specifiers(type_specifier_t, seg_t);
  static $(tqual_t, type_t, list_t<tvar_t>, list_t<attribute_t>)
      apply_tms(tqual_t, type_t, list_t<attribute_t, `H>, list_t<type_modifier_t>);

  ////////////////// global state (we're not re-entrant) ////////////////
  static list_t<decl_t> parse_result = NULL;
  static list_t<$(type_t, list_t<BansheeIf::constraint_t, `H>) @`H, `H> constraint_graph = NULL;
  static bool inside_function_definition = false;
  static int inside_noinference_block = 0;

  static `a parse_abort(seg_t loc, string_t<`H> msg) __attribute__((noreturn)) {
    Warn::err2(loc, msg);
    throw new Exit;
  }

  static type_t type_name_to_type($(var_opt_t, tqual_t, type_t) @tqt, seg_t loc) {
    let &$(_, tq, t) = tqt;
    if (tq.print_const || tq.q_volatile || tq.q_restrict) {
      if (tq.loc != 0)
        loc = tq.loc;
      Warn::warn(loc, "qualifier on type is ignored");
    }
    return t;
  }

  ////////////////// Collapsing pointer qualifiers ///////////////////////////
  static type_modifier_t<`r> make_pointer_mod(region_t<`r> r, ptrloc_t loc, booltype_t nullable,
                                              ptrbound_t bound, type_t eff, pointer_quals_t pqs,
                                              tqual_t tqs) {
    // for now, the last qualifier wins and overrides previous ones
    booltype_t zeroterm = Tcutil::any_bool(NULL);
    booltype_t autoreleased = Tcutil::any_bool(NULL);
    type_opt_t aqual = NULL;  // default determined by usage -- non-functions are `q <= RESTRICTED

    for (; pqs != NULL; pqs = pqs->tl)
      switch (pqs->hd) {
        case &Zeroterm_ptrqual:
          zeroterm = true_type;
          break;
        case &Nozeroterm_ptrqual:
          zeroterm = false_type;
          break;
        case &Autoreleased_ptrqual:
          autoreleased = true_type;
          break;
        case &Nullable_ptrqual:
          nullable = true_type;
          break;
        case &Notnull_ptrqual:
          nullable = false_type;
          break;
        case &Fat_ptrqual:
          bound = fat_bound_type;
          break;
        case &Thin_ptrqual:
          bound = bounds_one();
          break;
        case &Numelts_ptrqual(e):
          bound = thin_bounds_exp(e);
          break;
        case &Alias_ptrqual(aq):
          aqual = aq;
          break;
        case &Effect_ptrqual(ts):
          eff = join_eff(ts);
          break;
        case &Region_ptrqual(t):
          Warn::impos("Found region pointer qual");
          break;
      }
    return rnew(r) Pointer_mod(
        PtrAtts(
            eff, nullable, bound, zeroterm, loc, autoreleased,
            aqual != NULL ? aqual : aqual_var_type(new_evar(&Kinds::aqko, NULL), rtd_qual_type)),
        tqs);
  }

  ////////////////// Functions for creating abstract syntax //////////////////
  static void check_single_constraint(seg_t loc, string_t id) {
    if (zstrcmp(id, "single"))
      Warn::err(loc, id, " is not a valid effect constraint");
  }

  static type_t effect_from_atomic(types_t effs) {
    if (List::length(effs) == 1)
      return effs->hd;
    else
      return join_eff(effs);
  }

  static qvar_t gensym_enum() {
    // a way to gensym an enum name
    static int enum_counter = 0;

    return new $(Rel_n(NULL), new (string_t) aprintf("__anonymous_enum_%d__", enum_counter++));
  }

  static aggrfield_t make_aggr_field(seg_t loc, $(tms_t, $(exp_opt_t, exp_opt_t) @) @field_info) {
    let &$(&$(varloc, qid, tq, t, tvs, atts), &$(widthopt, reqopt)) = field_info;
    if (tvs != NULL)
      Warn::err(loc, "bad type params in struct field");
    if (is_qvar_qualified(qid))
      Warn::err(loc, "struct or union field cannot be qualified with a namespace");
    return new Aggrfield{
        .name = (*qid)[1],
        .tq = tq,
        .type = t,
        .width = widthopt,
        .attributes = atts,
        .requires_clause = reqopt,
    };
  }

  static type_specifier_t empty_spec(seg_t loc) {
    return Type_specifier{
        .Signed_spec = false,
        .Unsigned_spec = false,
        .Short_spec = false,
        .Long_spec = false,
        .Long_Long_spec = false,
        .Complex_spec = false,
        .Valid_type_spec = false,
        .Type_spec = sint_type,
        .loc = loc,
    };
  }

  static type_specifier_t type_spec(type_t t, seg_t loc) {
    let s = empty_spec(loc);

    s.Type_spec = t;
    s.Valid_type_spec = true;
    return s;
  }

  static type_specifier_t signed_spec(seg_t loc) {
    let s = empty_spec(loc);

    s.Signed_spec = true;
    return s;
  }

  static type_specifier_t unsigned_spec(seg_t loc) {
    let s = empty_spec(loc);

    s.Unsigned_spec = true;
    return s;
  }

  static type_specifier_t short_spec(seg_t loc) {
    let s = empty_spec(loc);

    s.Short_spec = true;
    return s;
  }

  static type_specifier_t long_spec(seg_t loc) {
    let s = empty_spec(loc);

    s.Long_spec = true;
    return s;
  }

  static type_specifier_t complex_spec(seg_t loc) {
    let s = empty_spec(loc);

    s.Complex_spec = true;
    return s;
  }

  // convert any array types to pointer types
  static type_t array2ptr(type_t t, bool argposn) {
    // FIX: don't lose zero-term location
    return Tcutil::is_array_type(t)
               ? Tcutil::promote_array(t, argposn ? new_evar(&Kinds::eko, NULL) : heap_rgn_type,
                                       al_qual_type, false)
               : t;
  }

  // The next few functions are used when we have a function (or aggregate)
  // where the type of one parameter appears to depend on the value of
  // another.  Specifically, when we have:
  //    void foo (tag_t<`i> x, int arr[x])
  // we want to rewrite it to:
  //    void foo (tag_t<`i> x, int arr[valueof (`i)])

  // given a list of arguments, pull out those that have names and
  // are given tag_t's
  static list_t<$(var_t, type_t) @> get_arg_tags(list_t<$(var_opt_t, tqual_t, type_t) @> x) {
    let res = NULL;

    for (; x != NULL; x = x->tl)
      switch (x->hd) {
        case &$(v, _, &AppType(&TagCon, &List{i, NULL})) && v != NULL:
          switch (i) {
            case &Evar(_, *z, _, _):
              // using an evar here will mess things up since the evar will be
              // duplicated.  So, we pin the evar down to a type variable instead.
              stringptr_t nm = new ((string_t)aprintf("`%s", *(var_t)v));
              *z = var_type(new Tvar{nm, -1, new Eq_kb(&Kinds::ik), NULL});
              break;
            default:
              break;
          }
          res = new List(new $((var_t)v, i), res);
          break;
        // while we're at it, give any anonymous regions_t's a name that
        // corresponds to the variable.
        case &$(&v, _, &AppType(&RgnHandleCon, &List{&Evar(_, *z, _, _), NULL})):
          stringptr_t nm = new ((string_t)aprintf("`%s", v));
          *z = var_type(new Tvar{nm, -1, new Eq_kb(&Kinds::ek), NULL});
          break;
        default:
          break;
      }
    return res;
  }

  // same as above, but for a list of aggregate fields
  static list_t<$(var_t, type_t) @> get_aggrfield_tags(list_t<aggrfield_t> x) {
    let res = NULL;

    for (; x != NULL; x = x->tl)
      switch (x->hd->type) {
        case &AppType(&TagCon, &List{i, NULL}):
          res = new List(new $(x->hd->name, i), res);
          break;
        default:
          break;
      }
    return res;
  }

  // given a mapping of variables to tags (x->`i), replace the variable x with `i
  static exp_t substitute_tags_exp(list_t<$(var_t, type_t) @> tags, exp_t e) {
    switch (e->r) {
      case &Var_e(&Unresolved_b(&$({.Rel_n = NULL}, y))):
        for (let ts = tags; ts != NULL; ts = ts->tl) {
          let &$(x, i) = ts->hd;
          if (strptrcmp(x, y) == 0)
            return new_exp(new Valueof_e(Tcutil::copy_type(i)), e->loc);
        }
        break;
      default:
        break;
    }
    return e;
  }

  // we have a variable x in scope with type tag_t<`i> -- look for
  // array or pointer bounds involving x and replace with valueof (`i).
  static type_t substitute_tags(list_t<$(var_t, type_t) @> tags, type_t t) {
    switch (t) {
      case &ArrayType(ArrayInfo{et, tq, nelts, zt, ztloc}):
        exp_opt_t nelts2 = nelts;
        if (nelts != 0)
          nelts2 = substitute_tags_exp(tags, nelts);
        let et2 = substitute_tags(tags, et);
        if (nelts != nelts2 || et != et2)
          return array_type(et2, tq, nelts2, zt, ztloc);
        break;
      case &PointerType(PtrInfo{et, tq, PtrAtts { r, n, b, zt, pl, rel, aq }}):
        let et2 = substitute_tags(tags, et);
        let b2 = substitute_tags(tags, b);
        if (et2 != et || b2 != b)
          return pointer_type(PtrInfo{et2, tq, PtrAtts{r, n, b2, zt, pl, rel, aq}});
        break;
      case &AppType(&ThinCon, &List{t, NULL}):
        let t2 = substitute_tags(tags, t);
        if (t != t2)
          return thin_bounds_type(t2);
        break;
      case &ValueofType(e):
        let e2 = substitute_tags_exp(tags, e);
        if (e2 != e)
          return valueof_type(e2);
        break;
      default:
        break;  // FIX: should go into other types too
    }
    return t;
  }

  // eliminate dependencies on tag fields by substituting the type-level
  // value for the associated field name.
  static void substitute_aggrfield_tags(list_t<$(var_t, type_t) @> tags, aggrfield_t x) {
    x->type = substitute_tags(tags, x->type);
  }

  // given an optional variable, tqual, type, and list of type
  // variables, return the tqual and type and check that the type
  // variables are NULL -- used when we have a tuple type specification.
  static $(tqual_t, type_t) @get_tqual_typ(seg_t loc, $(`a, tqual_t, type_t) @t) {
    return new $((*t)[1], (*t)[2]);
  }

  static bool is_typeparam(type_modifier_t tm) {
    switch (tm) {
      case &TypeParams_mod(...):
        return true;
      default:
        return false;
    }
  }

  // convert an identifier to a type -- if it's the special identifier
  // `H then return HeapRgn, otherwise, return a type variable.
  static type_t id2type(string_t<`H> s, kindbound_t k, type_opt_t aliashint, seg_t loc) {
    if (zstrcmp(s, "`H") == 0)
      return heap_rgn_type;
    // eventually parse these as regular type vars
    if (zstrcmp(s, "`U") == 0)
      return unique_rgn_shorthand_type;
    if (zstrcmp(s, "`RC") == 0)
      return refcnt_rgn_shorthand_type;
    if (zstrcmp(s, CurRgn::curr_rgn_name) == 0)
      return CurRgn::curr_rgn_type();
    aliashint = Kinds::consistent_aliashint(loc, k, aliashint);
    return var_type(new Tvar(new s, -1, k, aliashint));
  }

  static type_t id2aqual(seg_t loc, string_t<`H> s) {
    if (strlen(s) == 2) {
      switch (s[1]) {
        case 'A':
          return al_qual_type;
        case 'U':
          return un_qual_type;
        case 'T':
          return rtd_qual_type;
        default:
          break;
      }
    } else if (strlen(s) == 3)
      if (s[1] == 'R' && s[2] == 'C')
        return rc_qual_type;
    Warn::err2(loc, "bad aqual bound ", s);
    return al_qual_type;
  }

  static pointer_quals_t<`yy> insert_aqual(region_t<`yy> yy, pointer_quals_t<`yy> qlist,
                                           aqualtype_t aq, seg_t loc) {
    for (_ l = qlist; l != NULL; l = l->tl) {
      switch (l->hd) {
        case &Alias_ptrqual(...):
          Warn::err2(loc, "Multiple alias qualifiers");
          return qlist;
        default:
          break;
      }
    }
    return rnew(yy) List{rnew(yy) Alias_ptrqual(aq), qlist};
  }

  static void tvar_ok(string_t<`H> s, seg_t loc) {
    if (zstrcmp(s, "`H") == 0)
      Warn::err(loc, "bad occurrence of heap region");
    if (zstrcmp(s, "`U") == 0)
      Warn::err(loc, "bad occurrence of unique region");
    if (zstrcmp(s, "`RC") == 0)
      Warn::err(loc, "bad occurrence of refcounted region");
    if (zstrcmp(s, CurRgn::curr_rgn_name) == 0)
      Warn::err(loc, "bad occurrence of \"current\" region");
  }

  // convert a list of types to a list of typevars -- the parser can't
  // tell lists of types apart from lists of typevars easily so we parse
  // them as types and then convert them back to typevars.  See
  // productions "struct_or_union_specifier" and "datatype_specifier";
  static tvar_t typ2tvar(seg_t loc, type_t t) {
    switch (t) {
      case &VarType(pr):
        return pr;
      default:
        parse_abort(loc, "expecting a list of type variables, not types");
    }
  }

  // if tvar's kind is unconstrained, set it to k
  static void set_vartyp_kind(type_t t, kind_t k, bool leq) {
    switch (compress(t)) {
      case &VarType(&Tvar(_, _, *cptr, _)):
        switch (Kinds::compress_kb(*cptr)) {
          case &Unknown_kb(_):
            *cptr = leq ? new Less_kb(NULL, k) : Kinds::kind_to_bound(k);
            return;
          default:
            return;
        }
      default:
        return;
    }
  }

  // Convert an old-style function into a new-style function
  static list_t<type_modifier_t<`yy>, `yy> oldstyle2newstyle(region_t<`yy> yy,
                                                             list_t<type_modifier_t<`yy>, `yy> tms,
                                                             List_t<decl_t> tds, seg_t loc) {
    // If no function is found, or the function is not innermost, then
    // this is not a function definition; it is an error.  But, we
    // return silently.  The error will be caught by make_function below.
    if (tms == NULL)
      return NULL;

    switch (tms->hd) {
      case &Function_mod(args):
        // Is this the innermost function??
        if (tms->tl == NULL || (is_typeparam(tms->tl->hd) && tms->tl->tl == NULL)) {
          // Yes
          switch (args) {
            case &WithTypes(...):
              Warn::warn(loc,
                         "function declaration with both new- and old-style "
                         "parameter declarations; ignoring old-style");
              return tms;
            case &NoTypes(ids, _):
              if (length(ids) != length(tds))
                parse_abort(loc,
                            "wrong number of parameter declarations in old-style "
                            "function declaration");
              // replace each parameter with the right typed version
              list_t<$(var_opt_t, tqual_t, type_t) @> rev_new_params = NULL;
              for (; ids != NULL; ids = ids->tl) {
                list_t tds2 = tds;
                for (; tds2 != NULL; tds2 = tds2->tl) {
                  let x = tds2->hd;
                  switch (x->r) {
                    case &Var_d(vd):
                      if (zstrptrcmp((*vd->name)[1], ids->hd) != 0)
                        continue;
                      if (vd->initializer != NULL)
                        parse_abort(x->loc, "initializer found in parameter declaration");
                      if (is_qvar_qualified(vd->name))
                        parse_abort(x->loc, "namespaces forbidden in parameter declarations");
                      rev_new_params =
                          new List(new $((*vd->name)[1], vd->tq, vd->type), rev_new_params);
                      goto L;
                    default:
                      parse_abort(x->loc, "nonvariable declaration in parameter type");
                  }
                }
              L:
                if (tds2 == NULL)
                  parse_abort(loc, strconcat(*ids->hd, " is not given a type"));
              }
              return rnew(yy) List(rnew(yy) Function_mod(rnew(yy) WithTypes(
                                       imp_rev(rev_new_params), false, NULL, NULL, NULL, NULL, NULL,
                                       NULL, NULL, NULL)),
                                   NULL);
          }
        }
        // No, keep looking for the innermost function
        fallthru;
      default:
        return rnew(yy) List(tms->hd, oldstyle2newstyle(yy, tms->tl, tds, loc));
    }
  }

  // make a top-level function declaration out of a declaration-specifier
  // (return type, etc.), a declarator (the function name and args),
  // a declaration list (for old-style function definitions), and a statement.
  static fndecl_t make_function(region_t<`yy> yy, decl_spec_t *dso, declarator_t<`yy> d,
                                list_t<decl_t> tds, stmt_t body, seg_t loc) {
    // Handle old-style parameter declarations
    if (tds != NULL)
      d = Declarator(d.id, d.varloc, oldstyle2newstyle(yy, d.tms, tds, loc));
    scope_t sc = Public;
    type_specifier_t tss = empty_spec(loc);
    tqual_t tq = empty_tqual(0);
    bool is_inline = false;
    list_t<attribute_t> atts = NULL;

    if (dso != NULL) {
      tss = dso->type_specs;
      tq = dso->tq;
      is_inline = dso->is_inline;
      atts = dso->attributes;
      // Examine storage class; like C, we allow static and extern
      switch (dso->sc) {
        case None_sc:
          break;
        case Extern_sc:
          sc = Extern;
          break;
        case Static_sc:
          sc = Static;
          break;
        default:
          Warn::err(loc, "bad storage class on function");
          break;
      }
    }

    let t = collapse_type_specifiers(tss, loc);
    let $(fn_tqual, fn_type, x, out_atts) = apply_tms(tq, t, atts, d.tms);
    // what to do with the left-over attributes out_atts?  I'm just
    // going to append them to the function declaration and let the
    // type-checker deal with it.
    if (x != NULL)  // Example:   `a f<`b><`a>(`a x) {...}
      Warn::warn(loc, "bad type params, ignoring");

    switch (fn_type)  // fn_type had better be a FnType
    {
      case &FnType(i):
        for (let args2 = i.args; args2 != NULL; args2 = args2->tl)
          if ((*args2->hd)[0] == NULL) {
            Warn::err(loc, "missing argument variable in function prototype");
            (*args2->hd)[0] = new "?";
          }

#if 0
      if (Flags::interproc)
	Tcutil::introduce_cvars (fn_type);
#endif
        // We don't fill in the cached type here because we may need
        // to figure out the bound type variables and the effect.
        i.attributes = append(i.attributes, out_atts);
        return new Fndecl{.sc = sc,
                          .is_inline = is_inline,
                          .name = d.id,
                          .body = body,
                          .i = i,
                          .cached_type = NULL,
                          .param_vardecls = NULL,
                          .fn_vardecl = NULL,
                          .orig_scope = sc,
                          .escapes = false};
      default:
        parse_abort(loc, "declarator is not a function prototype");
    }
  }

  static string_t sign_msg =
      "sign specifier may appear only once within a type specifier \n\t(missing ';' or ','?)";

  // Given two partial type-specifiers, combine their information
  // to produce a new type specifier.  Warns when you have duplicates
  // such as "signed signed" but ignores conflicts such as "signed unsigned".
  // These are caught when collapse_type_specifiers is called.
  static type_specifier_t combine_specifiers(seg_t loc, type_specifier_t s1, type_specifier_t s2) {
    if (s1.Signed_spec && s2.Signed_spec)
      Warn::warn(loc, sign_msg);
    s1.Signed_spec |= s2.Signed_spec;
    if (s1.Unsigned_spec && s2.Unsigned_spec)
      Warn::warn(loc, sign_msg);
    s1.Unsigned_spec |= s2.Unsigned_spec;
    if (s1.Short_spec && s2.Short_spec)
      Warn::warn(loc, "too many occurrences of short in specifiers");
    s1.Short_spec |= s2.Short_spec;
    if (s1.Complex_spec && s2.Complex_spec)
      Warn::warn(loc, "too many occurrences of _Complex or __complex__ in specifiers");
    s1.Complex_spec |= s2.Complex_spec;
    if ((s1.Long_Long_spec && s2.Long_Long_spec) || (s1.Long_Long_spec && s2.Long_spec) ||
        (s2.Long_Long_spec && s1.Long_spec))
      Warn::warn(loc, "too many occurrences of long in specifiers");
    s1.Long_Long_spec = (s1.Long_Long_spec || s2.Long_Long_spec || (s1.Long_spec && s2.Long_spec));
    s1.Long_spec = !s1.Long_Long_spec && (s1.Long_spec || s2.Long_spec);
    if (s1.Valid_type_spec && s2.Valid_type_spec)
      Warn::err(loc,
                "at most one type may appear within a type specifier \n\t(missing ';' or ','?)");
    else if (s2.Valid_type_spec) {
      s1.Type_spec = s2.Type_spec;
      s1.Valid_type_spec = true;
    }
    return s1;
  }

  // Given a type-specifier, determines the type.  This just really
  // needs to look for conflicts (e.g., "signed unsigned") and collapse
  // the specifier down to a type.
  static type_t collapse_type_specifiers(type_specifier_t ts, seg_t loc) {
    bool seen_type = ts.Valid_type_spec;
    bool seen_sign = ts.Signed_spec || ts.Unsigned_spec;
    bool seen_size = ts.Short_spec || ts.Long_spec || ts.Long_Long_spec;
    type_t t = seen_type ? ts.Type_spec : void_type;
    size_of_t sz = Int_sz;
    sign_t sgn = Signed;

    if (seen_size || seen_sign)  // optimization: avoid these for non-ints
    {
      if (ts.Signed_spec && ts.Unsigned_spec)
        Warn::err(loc, sign_msg);
      if (ts.Unsigned_spec)
        sgn = Unsigned;
      if ((ts.Short_spec && (ts.Long_spec || ts.Long_Long_spec)) ||
          (ts.Long_spec && ts.Long_Long_spec))
        Warn::err(loc, sign_msg);
      if (ts.Short_spec)
        sz = Short_sz;
      if (ts.Long_spec)
        sz = Long_sz;
      if (ts.Long_Long_spec)
        sz = LongLong_sz;
    }
    // it's okay to not have an explicit type as long as we have some
    // combination of signed, unsigned, short, long, longlong, or complex
    if (!seen_type) {
      if (!seen_sign && !seen_size) {
        if (ts.Complex_spec)
          return complex_type(double_type);
        Warn::warn(loc, "missing type within specifier");
      }
      if (ts.Complex_spec)
        return complex_type(int_type(sgn, sz));
      else
        return int_type(sgn, sz);
    }
    switch (t) {
      case &AppType(&IntCon(sgn2, sz2), _):
        if (seen_sign && sgn2 != sgn) {
          sgn2 = sgn;
          t = int_type(sgn, sz2);
        }
        if (seen_size && sz2 != sz)
          t = int_type(sgn2, sz);
        if (ts.Complex_spec)
          t = complex_type(t);
        break;
      case &AppType(&FloatCon(_), _):
        if (seen_size)  // hack: if we've seen "long" then sz will be long_double_type
          t = long_double_type;
        if (ts.Complex_spec)
          t = complex_type(t);
        break;
      default:
        if (seen_sign)
          Warn::err(loc, "sign specification on non-integral type");
        if (seen_size)
          Warn::err(loc, "size qualifier on non-integral type");
        break;
    }
    return t;
  }

  static list_t<tms_t<`r>, `r> apply_tmss(region_t<`r> r, tqual_t tq, type_t t,
                                          declarators_t<`r> ds, attributes_t shared_atts) {
    if (ds == NULL)
      return NULL;
    declarator_t d = ds->hd;
    let q = d.id;
    let varloc = d.varloc;
    let $(tq2, new_typ, tvs, atts) = apply_tms(tq, t, shared_atts, d.tms);
    // NB: we copy the type here to avoid sharing definitions
    // but we avoid the copy when ds->tl is NULL
    let tl = (ds->tl == NULL) ? NULL : apply_tmss(r, tq, Tcutil::copy_type(t), ds->tl, shared_atts);
    return rnew(r) List(rnew(r) Tms(varloc, q, tq2, new_typ, tvs, atts), tl);
  }

  static $(tqual_t, type_t, list_t<tvar_t>, list_t<attribute_t>)
      apply_tms(tqual_t tq, type_t t, list_t<attribute_t, `H> atts, list_t<type_modifier_t> tms) {
    if (tms == NULL)
      return $(tq, t, NULL, atts);
    switch (tms->hd) {
      case &Carray_mod(zeroterm, ztloc):
        return apply_tms(empty_tqual(0), array_type(t, tq, NULL, zeroterm, ztloc), atts, tms->tl);
      case &ConstArray_mod(e, zeroterm, ztloc):
        return apply_tms(empty_tqual(0), array_type(t, tq, e, zeroterm, ztloc), atts, tms->tl);
      case &Function_mod(args): {
        switch (args) {
          case &WithTypes(args2, c_vararg, cyc_vararg, eff, effc, qb, chks, req, ens, thrw):
            list_t<tvar_t> typvars = NULL;
            // function type attributes seen thus far get put in the function type
            attributes_t fn_atts = NULL, new_atts = NULL;
            for (_ as = atts; as != NULL; as = as->tl)
              if (Atts::fntype_att(as->hd))
                fn_atts = new List(as->hd, fn_atts);
              else
                new_atts = new List(as->hd, new_atts);
            // functions consume type parameters
            if (tms->tl != NULL)
              switch (tms->tl->hd) {
                case &TypeParams_mod(ts, _, _):
                  typvars = ts;
                  tms = tms->tl;  // skip TypeParams on call of apply_tms below
                  break;
                default:
                  break;
              }
            // special case where the parameters are void, e.g., int f (void)
            if (!c_vararg && cyc_vararg == NULL  // not vararg function
                && args2 != NULL                 // not empty arg list
                && args2->tl == NULL             // not >1 arg
                && (*args2->hd)[0] == NULL       // not f (void x)
                && (*args2->hd)[2] == void_type)
              args2 = NULL;
            // eliminate C99 dependencies e.g., int f (int n, int a[n]) by
            // adding in a requires clause e.g.,
            // int f (int n, int a @) @requires (n <= numelts (a))
            list_t<exp_t> new_requires = NULL;
            for (let a = args2; a != NULL; a = a->tl) {
              let &$(vopt, tq, *t) = a->hd;
              switch (*t) {
                case &ArrayType(ArrayInfo{et, tq, neltsopt, zt, ztloc}):
                  if (neltsopt != NULL && vopt != NULL) {
                    qvar_t v = new $(Nmspace{.Loc_n = 0}, (var_t)vopt);
                    exp_t nelts = copy_exp((exp_t)neltsopt);
                    exp_t e2 = primop_exp(Numelts, list(var_exp(v, DL)), DL);
                    exp_t new_req = lte_exp(nelts, e2, DL);
                    new_requires = new List{new_req, new_requires};
                  }
                  break;
                default:
                  break;
              }
            }
            if (new_requires != NULL) {
              exp_t r;
              if (req != NULL)
                r = req;
              else {
                r = new_requires->hd;
                new_requires = new_requires->tl;
              }
              for (; new_requires != NULL; new_requires = new_requires->tl)
                r = and_exp(r, new_requires->hd, DL);
              req = r;
            }

            // pull out any tag_t variables and their associated tag_t types
            let tags = get_arg_tags(args2);
            // convert result type from array to pointer result
            if (tags != NULL)
              t = substitute_tags(tags, t);
            t = array2ptr(t, false);
            // convert any array arguments to suitable	pointer arguments
            // and substitute away any implicit tag arguments.
            for (let a = args2; a != NULL; a = a->tl) {
              let &$(vopt, tq, *t) = a->hd;
              if (tags != NULL)
                *t = substitute_tags(tags, *t);
              *t = array2ptr(*t, true);
            }
            // Note, we throw away the tqual argument.	An example where
            // this comes up is "const int f (char c)"; it doesn't really
            // make sense to think of the function as returning a const
            // (or volatile, or restrict).  The result will be copied
            // anyway.	TODO: maybe we should issue a warning.	But right
            // now we don't have a loc so the warning will be confusing.
            return apply_tms(empty_tqual(tq.loc),
                             function_type(typvars, eff, tq, t, args2, c_vararg, cyc_vararg, effc,
                                           qb, fn_atts, chks, req, ens, thrw),
                             new_atts, tms->tl);
          case &NoTypes(_, loc):
            parse_abort(loc, "function declaration without parameter types");
        }
      }
      case &TypeParams_mod(ts, loc, _):
        // If we are the last type modifier, this could be the list of
        // type parameters to a typedef:
        // typedef struct foo<`a,int> foo_t<`a>
        if (tms->tl == NULL)
          return $(tq, t, ts, atts);
        // Otherwise, it is an error in the program if we get here;
        // TypeParams should already have been consumed by an outer
        // Function (see last case).
        parse_abort(loc,
                    "type parameters must appear before function arguments "
                    "in declarator");
      case &Pointer_mod(ptratts, tq2):
        return apply_tms(tq2, pointer_type(PtrInfo(t, tq, ptratts)), atts, tms->tl);
      case &Attributes_mod(loc, atts2):
        // FIX: get this in line with GCC
        // attributes get attached to function types -- I doubt that this
        // is GCC's behavior but what else to do?
        return apply_tms(tq, t, List::append(atts, atts2), tms->tl);
    }
  }

  // given a specifier-qualifier list, warn and ignore about any nested type
  // definitions and return the collapsed type.
  type_t speclist2typ(type_specifier_t tss, seg_t loc) {
    return collapse_type_specifiers(tss, loc);
  }

  // convert an (optional) variable, tqual, type, and type
  // parameters to a typedef declaration.  As a side effect, register
  // the typedef with the lexer.
  // TJ: FIX the tqual should make it into the typedef as well,
  // e.g., typedef const int CI;
  static decl_t v_typ_to_typedef(seg_t loc, tms_t<`r> t) {
    let &$(varloc, x, tq, typ, tvs, atts) = t;
    // tell the lexer that x is a typedef identifier
    Lex::register_typedef(x);
    // if the "type" is an evar, then the typedef is abstract
    opt_t<kind_t> kind;
    type_opt_t type;
    switch (typ) {
      case &Evar(kopt, ...):
        type = NULL;
        kind = (kopt == NULL) ? &Kinds::bko : kopt;
        break;
      default:
        kind = NULL;
        type = typ;
        break;
    }
    return new_decl(new Typedef_d(new Typedefdecl{.name = x,
                                                  .tvs = tvs,
                                                  .kind = kind,
                                                  .defn = type,
                                                  .atts = atts,
                                                  .tq = tq,
                                                  .extern_c = false}),
                    loc);
  }

  // given a local declaration and a statement produce a decl statement
  static stmt_t flatten_decl(decl_t d, stmt_t s) { return new_stmt(new Decl_s(d, s), d->loc); }

  // given a list of local declarations & a statement, produce a big decl statement
  static stmt_t flatten_declarations(list_t<decl_t> ds, stmt_t s) {
    return List::fold_right(flatten_decl, ds, s);
  }

  static void decl_split(region_t<`r> r, declarator_list_t<`yy> ds, declarators_t<`r, `yy> @decls,
                         list_t<exp_opt_t, `r> @es, list_t<exp_opt_t, `r> @rs) {
    declarators_t<`r, `yy> declarators = NULL;
    list_t<exp_opt_t, `r> exprs = NULL;
    list_t<exp_opt_t, `r> renames = NULL;
    for (; ds != NULL; ds = ds->tl) {
      let $(d, e, rename) = ds->hd;
      declarators = rnew(r) FlatList{declarators, d};
      exprs = rnew(r) List(e, exprs);
      renames = rnew(r) List(rename, renames);
    }
    *es = imp_rev(exprs);
    *rs = imp_rev(renames);
    *decls = flat_imp_rev(declarators);
  }

  // Given a declaration specifier list (a combination of storage class
  // [typedef, extern, static, etc.] and type specifiers (signed, int,
  // `a, const, etc.), and a list of declarators and initializers,
  // produce a list of top-level declarations.  By far, this is the most
  // involved function and thus I expect a number of subtle errors.
  static list_t<decl_t> make_declarations(decl_spec_t ds, declarator_list_t ids, seg_t tqual_loc,
                                          seg_t loc) {
    region mkrgn;
    let Declaration_spec(_, tq, tss, _, atts) = ds;

    if (tq.loc == 0)
      tq.loc = tqual_loc;
    if (ds.is_inline)
      Warn::warn(loc, "inline qualifier on non-function definition");

    scope_t s = Public;
    bool istypedef = false;
    switch (ds.sc) {
      case Typedef_sc:
        istypedef = true;
        break;
      case Extern_sc:
        s = Extern;
        break;
      case ExternC_sc:
        s = ExternC;
        break;
      case Static_sc:
        s = Static;
        break;
      case Auto_sc:
        s = Public;
        break;
      case Register_sc:
        s = Flags::no_register ? Public : Register;
        break;
      case Abstract_sc:
        s = Abstract;
        break;
      default:
        break;
    }

    // separate the declarators from their initializers
    // FIX: should abstract this out, but the code generator produces
    // bad code due to tuple return type.
    declarators_t<`mkrgn> declarators = NULL;
    list_t<exp_opt_t, `mkrgn> exprs = NULL;
    list_t<exp_opt_t, `mkrgn> renames = NULL;
    decl_split(mkrgn, ids, &declarators, &exprs, &renames);
    // check to see if there are no initializers -- useful later on
    bool exps_empty = true;
    for (list_t<exp_opt_t> es = exprs; es != NULL; es = es->tl)
      if (es->hd != NULL) {
        exps_empty = false;
        break;
      }

    // Collapse the type specifiers to get the base type.
    let base_type = collapse_type_specifiers(tss, loc);
    if (declarators == NULL)
      // here we should have a type declaration -- either a struct, union,
      // enum, or datatype as in: "struct Foo { ... };"
      switch (base_type) {
        case &TypeDeclType(&{.r = &Aggr_td(ad), ...}, _):
          ad->attributes = List::append(ad->attributes, atts);
          ad->sc = s;
          return new List(new_decl(new Aggr_d(ad), loc), NULL);
        case &TypeDeclType(&{.r = &Enum_td(ed), ...}, _):
          if (atts != NULL)
            Warn::err(loc, "attributes on enum not supported");
          ed->sc = s;
          return new List(new_decl(new Enum_d(ed), loc), NULL);
        case &TypeDeclType(&{.r = &Datatype_td(dd), ...}, _):
          if (atts != NULL)
            Warn::err(loc, "attributes on datatypes not supported");
          dd->sc = s;
          return new List(new_decl(new Datatype_d(dd), loc), NULL);
        case &AppType(&AggrCon({.UnknownAggr = $(k, n, _)}), ts):
          let ts2 = List::map_c(typ2tvar, loc, ts);
          let ad = new Aggrdecl(k, s, n, ts2, NULL, NULL, false);
          if (atts != NULL)
            Warn::err(loc, "bad attributes on type declaration");
          return new List(new_decl(new Aggr_d(ad), loc), NULL);
        case &AppType(&DatatypeCon({.KnownDatatype = tudp}), _):
          if (atts != NULL)
            Warn::err(loc, "bad attributes on datatype");
          return new List(new_decl(new Datatype_d(*tudp), loc), NULL);
        case &AppType(&DatatypeCon({.UnknownDatatype = UnknownDatatypeInfo(n, isx)}), ts):
          let ts2 = List::map_c(typ2tvar, loc, ts);
          let tud = datatype_decl(s, n, ts2, NULL, isx, loc);
          if (atts != NULL)
            Warn::err(loc, "bad attributes on datatype");
          return new List(tud, NULL);
        case &AppType(&EnumCon(n, _), _):
          let ed = new Enumdecl{s, n, NULL};
          if (atts != NULL)
            Warn::err(loc, "bad attributes on enum");
          return new List(new Decl(new Enum_d(ed), loc), NULL);
        case &AppType(&AnonEnumCon(fs), _):
          // someone's written:  enum {A,B,C}; which is a perfectly good
          // way to declare symbolic constants A, B, and C.
          let ed = new Enumdecl{s, gensym_enum(), new Opt(fs)};
          if (atts != NULL)
            Warn::err(loc, "bad attributes on enum");
          return new List(new Decl(new Enum_d(ed), loc), NULL);
        default:
          Warn::err(loc, "missing declarator");
          return NULL;
      }

    // declarators != NULL
    let fields = apply_tmss(mkrgn, tq, base_type, declarators, atts);
    if (istypedef) {
      // we can have a nested struct, union, or datatype
      // declaration within the typedef as in:
      // typedef struct Foo {...} t;
      if (!exps_empty)
        Warn::err(loc, "initializer in typedef declaration");
      list_t<decl_t> decls = List::map_c(v_typ_to_typedef, loc, fields);
      return decls;
    }
    // here, we have a bunch of variable declarations
    list_t<decl_t> decls = NULL;
    for (let ds = fields; ds != NULL; ds = ds->tl, exprs = exprs->tl, renames = renames->tl) {
      let &$(varloc, x, tq2, t2, tvs2, atts2) = ds->hd;
      if (tvs2 != NULL)
        Warn::warn(loc, "bad type params, ignoring");
      if (exprs == NULL)
        parse_abort(loc, "unexpected NULL in parse!");
      if (renames == NULL)
        parse_abort(loc, "unexpected NULL in parse!");
      let vd = new_vardecl(varloc, x, t2, exprs->hd, renames->hd);
      vd->tq = tq2;
      vd->sc = s;
      vd->attributes = atts2;
      decls = new List(new Decl(new Var_d(vd), loc), decls);
    }
    return List::imp_rev(decls);
  }

  // extract an unsigned integer from a cnst_t
  static unsigned cnst2uint(seg_t loc, cnst_t x) {
    switch (x) {
      case {.Int_c = $(_, i)}:
        return i;
      case {.Char_c = $(_, c)}:
        return (unsigned)c;
      case {.LongLong_c = $(_, x)}:
        unsigned long long y = x;
        if (y > 0xffffffff)
          Warn::err(loc, "integer constant too large");
        return (unsigned)x;
      default:
        Warn::err(loc, "expected integer constant but found %s", Absynpp::cnst2string(x));
        return 0;
    }
  }

  // convert a pattern back into an expression
  static exp_t pat2exp(pat_t p) {
    switch (p->r) {
      case &UnknownId_p(x):
        return unknownid_exp(x, p->loc);
      case &Reference_p(vd, &Pat{.r = &Wild_p, ...}):
        return deref_exp(unknownid_exp(vd->name, p->loc), p->loc);
      case &Pointer_p(p2):
        return address_exp(pat2exp(p2), p->loc);
      case &Null_p:
        return null_exp(p->loc);
      case &Int_p(s, i):
        return int_exp(s, i, p->loc);
      case &Char_p(c):
        return char_exp(c, p->loc);
      case &Float_p(s, i):
        return float_exp(s, i, p->loc);
      case &UnknownCall_p(x, ps, false):
        exp_t e1 = unknownid_exp(x, p->loc);
        list_t<exp_t> es = List::map(pat2exp, ps);
        return unknowncall_exp(e1, es, p->loc);
      case &Exp_p(e):
        return e;
      default:
        Warn::err(p->loc, "cannot mix patterns and expressions in case");
        return null_exp(p->loc);
    }
  }

  static $(exp_t, exp_opt_t) split_seq(exp_t maybe_seq) {
    switch (maybe_seq->r) {
      case &SeqExp_e(e1, e2):
        return $(e1, e2);
      default:
        return $(maybe_seq, NULL);
    }
  }

  static exp_opt_t join_assn(exp_opt_t e1, exp_opt_t e2) {
    if (e1 != NULL && e2 != NULL)
      return and_exp((exp_t)e1, (exp_t)e2, 0);
    else if (e1 != NULL)
      return e1;
    else
      return e2;
  }

  static $(exp_opt_t, exp_opt_t, exp_opt_t, exp_opt_t)
      join_assns($(exp_opt_t, exp_opt_t, exp_opt_t, exp_opt_t) a1,
                 $(exp_opt_t, exp_opt_t, exp_opt_t, exp_opt_t) a2) {
    let $(c1, r1, e1, t1) = a1;
    let $(c2, r2, e2, t2) = a2;
    let c = join_assn(c1, c2);
    let r = join_assn(r1, r2);
    let e = join_assn(e1, e2);
    let t = join_assn(t1, t2);
    return $(c, r, e, t);
  }

  static type_t assign_cvar_pos(string_t<`H> posstr, bool ovfat, type_t cv) {
    switch (cv) {
      case &Cvar(_, _, _, _, _, *pos, *ov):
        *pos = (const char *)posstr;
        *ov = ovfat;
        return cv;
      default:
        return cv;
    }
  }

  static type_t typevar2cvar(string_t<`H> s) {
    //`C_<kind>_<name>
    // hash consing for Cvars
    static struct Table<stringptr_t, type_t> *cvmap = NULL;
    if (!cvmap)
      cvmap = create(101, strptrcmp, hash_stringptr);
    try  // sharing of Cvars is important
    {
      return Hashtable::lookup(cvmap, new s);
    } catch {
      case &Not_found:
        let kind = strchr(s, '_');
        let name = strchr(kind + 1, '_');
        name++;
        if (!strncmp(kind, "_PTRBND", 7)) {
          let t = cvar_type_name(&Kinds::ptrbko, name);
          Hashtable::insert((_ @)cvmap, new s, t);
          return t;
        } else  // unknown kind for now
          parse_abort(0, "Constraint variable unknown kind");
    }
  }

  // cvar constants
  static type_t str2type(seg_t loc, string_t<`H> s) {
    if (!strcmp(s, "@fat"))
      return (type_t)Tcutil::ptrbnd_cvar_equivalent(fat_bound_type);
    else if (!strcmp(s, "@thin @numelts{valueof_t(1U)}"))
      return (type_t)Tcutil::ptrbnd_cvar_equivalent(bounds_one());
    parse_abort(loc, aprintf("Unknown type constant:: %s", s));
  }

  static BansheeIf::constraint_t composite_constraint(enum ConstraintOps op,
                                                      BansheeIf::constraint_t t1,
                                                      BansheeIf::constraint_opt_t t2) {
    switch (op) {
      case C_AND_OP:
        return BansheeIf::and_constraint(t1, (BansheeIf::constraint_t)t2);
      case C_OR_OP:
        return BansheeIf::or_constraint(t1, (BansheeIf::constraint_t)t2);
      case C_NOT_OP:
        return BansheeIf::not_constraint(t1);
      default:  // bad op
        parse_abort(0, "Unexpected operator for composite constraint");
    }
  }

  static BansheeIf::constraint_t comparison_constraint(enum ConstraintOps op, type_t t1,
                                                       type_t t2) {
    switch (op) {
      case C_EQ_OP:
        return BansheeIf::cmpeq_constraint(t1, t2);
      case C_INCL_OP:
        return BansheeIf::inclusion_constraint(t1, t2);
      default:  // bad op
        parse_abort(0, "Unexpected operator for composite constraint");
    }
  }

}  // end namespace Parse
