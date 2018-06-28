#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
extern char Cyc_Core_Impossible[11U];
 struct Cyc_Core_Impossible_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Not_found[10U];
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_list(struct _fat_ptr);
extern struct Cyc_List_List * Cyc_List_copy(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
extern long Cyc_List_exists_c(long (*)(void *,void *),void *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_delete(struct Cyc_List_List *,void *);
extern struct Cyc_List_List * Cyc_List_delete_cmp(int (*)(void *,void *),
						  struct Cyc_List_List *,
						  void *);
extern struct Cyc_List_List * Cyc_List_filter_c(long (*)(void *,void *),void *,
						struct Cyc_List_List *);
struct Cyc_AssnDef_ExistAssnFn;
 struct _union_Nmspace_Abs_n {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_Nmspace_Rel_n {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_Nmspace_C_n {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_Nmspace_Loc_n {
  int tag;
  int val;
};
 union Cyc_Absyn_Nmspace {
  struct _union_Nmspace_Abs_n Abs_n;
  struct _union_Nmspace_Rel_n Rel_n;
  struct _union_Nmspace_C_n C_n;
  struct _union_Nmspace_Loc_n Loc_n;
};
 struct _tuple0 {
  union Cyc_Absyn_Nmspace f0;
  struct _fat_ptr * f1;
};
enum Cyc_Absyn_Scope {
  Cyc_Absyn_Static = 0U,
  Cyc_Absyn_Abstract = 1U,
  Cyc_Absyn_Public = 2U,
  Cyc_Absyn_Extern = 3U,
  Cyc_Absyn_ExternC = 4U,
  Cyc_Absyn_Register = 5U
};
 struct Cyc_Absyn_Tqual {
  long print_const:1;
  long q_volatile:1;
  long q_restrict:1;
  long real_const:1;
  unsigned int loc;
};
enum Cyc_Absyn_Size_of {
  Cyc_Absyn_Char_sz = 0U,
  Cyc_Absyn_Short_sz = 1U,
  Cyc_Absyn_Int_sz = 2U,
  Cyc_Absyn_Long_sz = 3U,
  Cyc_Absyn_LongLong_sz = 4U,
  Cyc_Absyn_Int128_sz = 5U
};
enum Cyc_Absyn_Sign {
  Cyc_Absyn_Signed = 0U,
  Cyc_Absyn_Unsigned = 1U,
  Cyc_Absyn_None = 2U
};
enum Cyc_Absyn_AggrKind {
  Cyc_Absyn_StructA = 0U,
  Cyc_Absyn_UnionA = 1U
};
enum Cyc_Absyn_AliasHint {
  Cyc_Absyn_UniqueHint = 0U,
  Cyc_Absyn_RefcntHint = 1U,
  Cyc_Absyn_RestrictedHint = 2U,
  Cyc_Absyn_NoHint = 3U
};
enum Cyc_Absyn_KindQual {
  Cyc_Absyn_AnyKind = 0U,
  Cyc_Absyn_MemKind = 1U,
  Cyc_Absyn_BoxKind = 2U,
  Cyc_Absyn_EffKind = 3U,
  Cyc_Absyn_IntKind = 4U,
  Cyc_Absyn_BoolKind = 5U,
  Cyc_Absyn_PtrBndKind = 6U,
  Cyc_Absyn_AqualKind = 7U
};
 struct Cyc_Absyn_Kind {
  enum Cyc_Absyn_KindQual kind;
  enum Cyc_Absyn_AliasHint aliashint;
};
 struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct {
  int tag;
  struct Cyc_Absyn_Kind * f1;
};
 struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
};
 struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
  struct Cyc_Absyn_Kind * f2;
};
 struct Cyc_Absyn_Tvar {
  struct _fat_ptr * name;
  int identity;
  void * kind;
  void * aquals_bound;
};
 struct Cyc_Absyn_PtrLoc {
  unsigned int ptr_loc;
  unsigned int rgn_loc;
  unsigned int zt_loc;
};
 struct Cyc_Absyn_PtrAtts {
  void * eff;
  void * nullable;
  void * bounds;
  void * zero_term;
  struct Cyc_Absyn_PtrLoc * ptrloc;
  void * autoreleased;
  void * aqual;
};
 struct Cyc_Absyn_PtrInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual elt_tq;
  struct Cyc_Absyn_PtrAtts ptr_atts;
};
 struct Cyc_Absyn_VarargInfo {
  struct _fat_ptr * name;
  struct Cyc_Absyn_Tqual tq;
  void * type;
  long inject;
};
 struct Cyc_Absyn_FnInfo {
  struct Cyc_List_List * tvars;
  void * effect;
  struct Cyc_Absyn_Tqual ret_tqual;
  void * ret_type;
  struct Cyc_List_List * args;
  long c_varargs;
  struct Cyc_Absyn_VarargInfo * cyc_varargs;
  struct Cyc_List_List * qual_bnd;
  struct Cyc_List_List * attributes;
  struct Cyc_Absyn_Exp * checks_clause;
  struct Cyc_AssnDef_ExistAssnFn * checks_assn;
  struct Cyc_Absyn_Exp * requires_clause;
  struct Cyc_AssnDef_ExistAssnFn * requires_assn;
  struct Cyc_Absyn_Exp * ensures_clause;
  struct Cyc_AssnDef_ExistAssnFn * ensures_assn;
  struct Cyc_Absyn_Exp * throws_clause;
  struct Cyc_AssnDef_ExistAssnFn * throws_assn;
  struct Cyc_Absyn_Vardecl * return_value;
  struct Cyc_List_List * arg_vardecls;
  struct Cyc_List_List * effconstr;
};
 struct _tuple2 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple0 * f1;
  struct Cyc_Core_Opt * f2;
};
 struct _union_AggrInfo_UnknownAggr {
  int tag;
  struct _tuple2 val;
};
 struct _union_AggrInfo_KnownAggr {
  int tag;
  struct Cyc_Absyn_Aggrdecl * * val;
};
 union Cyc_Absyn_AggrInfo {
  struct _union_AggrInfo_UnknownAggr UnknownAggr;
  struct _union_AggrInfo_KnownAggr KnownAggr;
};
 struct Cyc_Absyn_ArrayInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_Absyn_Exp * num_elts;
  void * zero_term;
  unsigned int zt_loc;
};
 struct Cyc_Absyn_TypeDecl {
  void * r;
  unsigned int loc;
};
 struct Cyc_Absyn_IntCon_Absyn_TyCon_struct {
  int tag;
  enum Cyc_Absyn_Sign f1;
  enum Cyc_Absyn_Size_of f2;
};
 struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_AggrInfo f1;
};
 struct Cyc_Absyn_AppType_Absyn_Type_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_VarType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
};
 struct Cyc_Absyn_PointerType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_PtrInfo f1;
};
 struct Cyc_Absyn_ArrayType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_ArrayInfo f1;
};
 struct Cyc_Absyn_FnType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_FnInfo f1;
};
 struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct {
  int tag;
  enum Cyc_Absyn_AggrKind f1;
  long f2;
  struct Cyc_List_List * f3;
};
 struct Cyc_Absyn_TypedefType_Absyn_Type_struct {
  int tag;
  struct _tuple0 * f1;
  struct Cyc_List_List * f2;
  struct Cyc_Absyn_Typedefdecl * f3;
  void * f4;
};
 struct Cyc_Absyn_ValueofType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_TypeDecl * f1;
  void * * f2;
};
 struct Cyc_Absyn_TypeofType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_SubsetType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_AssnDef_ExistAssnFn * f3;
};
 struct _tuple8 {
  struct _fat_ptr * f0;
  struct Cyc_Absyn_Tqual f1;
  void * f2;
};
 struct Cyc_Absyn_Exp {
  void * topt;
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Stmt {
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Vardecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  unsigned int varloc;
  struct Cyc_Absyn_Tqual tq;
  void * type;
  struct Cyc_Absyn_Exp * initializer;
  void * rgn;
  struct Cyc_List_List * attributes;
  long escapes;
  long is_proto;
  struct Cyc_Absyn_Exp * rename;
};
 struct Cyc_Absyn_Fndecl {
  enum Cyc_Absyn_Scope sc;
  long is_inline;
  struct _tuple0 * name;
  struct Cyc_Absyn_Stmt * body;
  struct Cyc_Absyn_FnInfo i;
  void * cached_type;
  struct Cyc_Core_Opt * param_vardecls;
  struct Cyc_Absyn_Vardecl * fn_vardecl;
  enum Cyc_Absyn_Scope orig_scope;
  long escapes;
};
 struct Cyc_Absyn_Aggrfield {
  struct _fat_ptr * name;
  struct Cyc_Absyn_Tqual tq;
  void * type;
  struct Cyc_Absyn_Exp * width;
  struct Cyc_List_List * attributes;
  struct Cyc_Absyn_Exp * requires_clause;
};
 struct Cyc_Absyn_AggrdeclImpl {
  struct Cyc_List_List * exist_vars;
  struct Cyc_List_List * qual_bnd;
  struct Cyc_List_List * fields;
  long tagged;
  struct Cyc_List_List * effconstr;
};
 struct Cyc_Absyn_Aggrdecl {
  enum Cyc_Absyn_AggrKind kind;
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Absyn_AggrdeclImpl * impl;
  struct Cyc_List_List * attributes;
  long expected_mem_kind;
};
 struct Cyc_Absyn_Enumdecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  struct Cyc_Core_Opt * fields;
};
 struct Cyc_Absyn_Typedefdecl {
  struct _tuple0 * name;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_List_List * tvs;
  struct Cyc_Core_Opt * kind;
  void * defn;
  struct Cyc_List_List * atts;
  long extern_c;
};
 struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Fndecl * f1;
};
 struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Aggrdecl * f1;
};
 struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
};
 struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Typedefdecl * f1;
};
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
int Cyc_Absyn_tvar_cmp(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned int);
extern void * Cyc_Absyn_heap_rgn_type;
extern void * Cyc_Absyn_void_type;
void * Cyc_Absyn_cstar_type(void *,struct Cyc_Absyn_Tqual);
struct Cyc_Absyn_Decl * Cyc_Absyn_new_decl(void *,unsigned int);
struct Cyc_Absyn_Aggrfield * Cyc_Absyn_lookup_field(struct Cyc_List_List *,
						    struct _fat_ptr *);
struct Cyc_Absyn_Decl * Cyc_Absyn_lookup_decl(struct Cyc_List_List *,struct _fat_ptr *);
struct _fat_ptr * Cyc_Absyn_decl_name(struct Cyc_Absyn_Decl *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
 struct Cyc_Tcenv_Genv {
  struct Cyc_Dict_Dict aggrdecls;
  struct Cyc_Dict_Dict datatypedecls;
  struct Cyc_Dict_Dict enumdecls;
  struct Cyc_Dict_Dict typedefs;
  struct Cyc_Dict_Dict ordinaries;
};
struct Cyc_Tcenv_Fenv;
 struct Cyc_Tcenv_Tenv {
  struct Cyc_List_List * ns;
  struct Cyc_Tcenv_Genv * ae;
  struct Cyc_Tcenv_Fenv * le;
  long allow_valueof:1;
  long in_extern_c_include:1;
  long in_tempest:1;
  long tempest_generalize:1;
  long in_extern_c_inc_repeat:1;
};
struct _fat_ptr Cyc_Absynpp_typ2string(void *);
struct _fat_ptr Cyc_Absynpp_kindbound2string(void *);
struct _fat_ptr Cyc_Absynpp_qvar2string(struct _tuple0 *);
struct _fat_ptr Cyc_Absynpp_decllist2string(struct Cyc_List_List *);
struct _fat_ptr Cyc_Absynpp_tvar2string(struct Cyc_Absyn_Tvar *);
struct Cyc_List_List * Cyc_Atts_merge_attributes(struct Cyc_List_List *,struct Cyc_List_List *);
long Cyc_Kinds_kind_eq(struct Cyc_Absyn_Kind *,struct Cyc_Absyn_Kind *);
void Cyc_Tctyp_check_valid_toplevel_type(unsigned int,struct Cyc_Tcenv_Tenv *,
					 void *);
long Cyc_Tcutil_is_function_type(void *);
void * Cyc_Tcutil_copy_type(void *);
void * Cyc_Toc_typ_to_c(void *);
long Cyc_Unify_unify(void *,void *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
void Cyc_Warn_warn(unsigned int,struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Qvar_Warn_Warg_struct {
  int tag;
  struct _tuple0 * f1;
};
void Cyc_Warn_err2(unsigned int,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned int,struct _fat_ptr);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
static int Cyc_Cifc_glob_tvar_id = 0;
static long Cyc_Cifc_opt_inst_tvar = 0;
static struct _fat_ptr Cyc_Cifc_get_type_kind(void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 3: 
    _T3 = _tag_fat("Cvar",sizeof(char),5U);
    return _T3;
  case 0: 
    _T4 = _tag_fat("AppType",sizeof(char),8U);
    return _T4;
  case 1: 
    _T5 = _tag_fat("Evar",sizeof(char),5U);
    return _T5;
  case 2: 
    _T6 = _tag_fat("Vartype",sizeof(char),8U);
    return _T6;
  case 4: 
    _T7 = _tag_fat("Pointertype",sizeof(char),12U);
    return _T7;
  case 5: 
    _T8 = _tag_fat("ArrayType",sizeof(char),10U);
    return _T8;
  case 6: 
    _T9 = _tag_fat("FnType",sizeof(char),7U);
    return _T9;
  case 7: 
    _TA = _tag_fat("AnonAggrType",sizeof(char),13U);
    return _TA;
  case 8: 
    _TB = _tag_fat("Typedeftype",sizeof(char),12U);
    return _TB;
  case 9: 
    _TC = _tag_fat("Valueoftype",sizeof(char),12U);
    return _TC;
  case 10: 
    _TD = _tag_fat("Typedecltype",sizeof(char),13U);
    return _TD;
  case 11: 
    _TE = _tag_fat("Typeoftype",sizeof(char),11U);
    return _TE;
  default: 
    _TF = _tag_fat("Subsettype",sizeof(char),11U);
    return _TF;
  }
  ;
}
static long Cyc_Cifc_is_concrete(struct Cyc_Absyn_Decl * d) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Aggrdecl * _T3;
  struct Cyc_Absyn_AggrdeclImpl * _T4;
  int _T5;
  struct Cyc_Absyn_Enumdecl * _T6;
  struct Cyc_Core_Opt * _T7;
  int _T8;
  _T0 = d;
  { void * _T9 = _T0->r;
    struct Cyc_Absyn_Enumdecl * _TA;
    struct Cyc_Absyn_Aggrdecl * _TB;
    _T1 = (int *)_T9;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      goto _LL4;
    case 8: 
      _LL4: return 1;
    case 5: 
      { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _TC = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T9;
	_TB = _TC->f1;
      }{ struct Cyc_Absyn_Aggrdecl * ad = _TB;
	_T3 = ad;
	_T4 = _T3->impl;
	_T5 = _T4 != 0;
	return _T5;
      }
    case 7: 
      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _TC = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T9;
	_TA = _TC->f1;
      }{ struct Cyc_Absyn_Enumdecl * ed = _TA;
	_T6 = ed;
	_T7 = _T6->fields;
	_T8 = _T7 != 0;
	return _T8;
      }
    default: 
      return 0;
    }
    ;
  }
}
static struct Cyc_Absyn_Decl * Cyc_Cifc_lookup_concrete_decl(struct Cyc_List_List * decls,
							     struct _fat_ptr * name) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Decl * _T2;
  struct _fat_ptr * _T3;
  unsigned int _T4;
  int _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct Cyc_Absyn_Decl * _T8;
  long _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_Absyn_Decl * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_Absyn_Decl * _TE;
  struct Cyc_List_List * indecls = decls;
  _TL5: if (decls != 0) { goto _TL3;
  }else { goto _TL4;
  }
  _TL3: _T0 = decls;
  _T1 = _T0->hd;
  _T2 = (struct Cyc_Absyn_Decl *)_T1;
  { struct _fat_ptr * dname = Cyc_Absyn_decl_name(_T2);
    _T3 = dname;
    _T4 = (unsigned int)_T3;
    if (! _T4) { goto _TL6;
    }
    _T5 = Cyc_strptrcmp(dname,name);
    if (_T5) { goto _TL6;
    }else { goto _TL8;
    }
    _TL8: _T6 = decls;
    _T7 = _T6->hd;
    _T8 = (struct Cyc_Absyn_Decl *)_T7;
    _T9 = Cyc_Cifc_is_concrete(_T8);
    if (! _T9) { goto _TL6;
    }
    _TA = decls;
    _TB = _TA->hd;
    _TC = (struct Cyc_Absyn_Decl *)_TB;
    return _TC;
    _TL6: ;
  }_TD = decls;
  decls = _TD->tl;
  goto _TL5;
  _TL4: _TE = Cyc_Absyn_lookup_decl(indecls,name);
  return _TE;
}
void Cyc_Cifc_set_inst_tvar() {
  Cyc_Cifc_opt_inst_tvar = 1;
}
struct _fat_ptr Cyc_Cifc_list2string(struct Cyc_List_List * l,struct _fat_ptr (* tostr)(void *)) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  struct Cyc_List_List * _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  struct Cyc_String_pa_PrintArg_struct _T5;
  struct Cyc_String_pa_PrintArg_struct _T6;
  struct _fat_ptr (* _T7)(void *);
  struct _fat_ptr (* _T8)(void *);
  struct Cyc_List_List * _T9;
  void * _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct Cyc_List_List * _TD;
  struct _fat_ptr _TE;
  struct Cyc_String_pa_PrintArg_struct _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  _T0 = _tag_fat("(",sizeof(char),2U);
  _T1 = _tag_fat(0U,sizeof(void *),0);
  { struct _fat_ptr ret = Cyc_aprintf(_T0,_T1);
    _TLC: _T2 = l;
    _T3 = (unsigned int)_T2;
    if (_T3) { goto _TLA;
    }else { goto _TLB;
    }
    _TLA: { struct Cyc_String_pa_PrintArg_struct _T12;
      _T12.tag = 0;
      _T12.f1 = ret;
      _T5 = _T12;
    }{ struct Cyc_String_pa_PrintArg_struct _T12 = _T5;
      { struct Cyc_String_pa_PrintArg_struct _T13;
	_T13.tag = 0;
	_T7 = tostr;
	_T8 = _check_null(_T7);
	_T9 = l;
	_TA = _T9->hd;
	_T13.f1 = _T8(_TA);
	_T6 = _T13;
      }{ struct Cyc_String_pa_PrintArg_struct _T13 = _T6;
	void * _T14[2];
	_T14[0] = &_T12;
	_T14[1] = &_T13;
	_TB = _tag_fat("%s %s,",sizeof(char),7U);
	_TC = _tag_fat(_T14,sizeof(void *),2);
	_T4 = Cyc_aprintf(_TB,_TC);
      }
    }ret = _T4;
    _TD = l;
    l = _TD->tl;
    goto _TLC;
    _TLB: { struct Cyc_String_pa_PrintArg_struct _T12;
      _T12.tag = 0;
      _T12.f1 = ret;
      _TF = _T12;
    }{ struct Cyc_String_pa_PrintArg_struct _T12 = _TF;
      void * _T13[1];
      _T13[0] = &_T12;
      _T10 = _tag_fat("%s)",sizeof(char),4U);
      _T11 = _tag_fat(_T13,sizeof(void *),1);
      _TE = Cyc_aprintf(_T10,_T11);
    }return _TE;
  }
}
static void Cyc_Cifc_fail_merge(long warn,unsigned int loc,long is_buildlib,
				struct _tuple0 * n,struct _fat_ptr s) {
  long _T0;
  struct _fat_ptr _T1;
  long _T2;
  struct Cyc_String_pa_PrintArg_struct _T3;
  struct Cyc_String_pa_PrintArg_struct _T4;
  struct Cyc_String_pa_PrintArg_struct _T5;
  struct Cyc___cycFILE * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  long _T9;
  struct Cyc_Warn_String_Warn_Warg_struct _TA;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  struct Cyc_Warn_String_Warn_Warg_struct _TD;
  unsigned int _TE;
  struct _fat_ptr _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T11;
  struct Cyc_Warn_String_Warn_Warg_struct _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  unsigned int _T14;
  struct _fat_ptr _T15;
  _T0 = is_buildlib;
  if (! _T0) { goto _TLD;
  }
  _T2 = warn;
  if (! _T2) { goto _TLF;
  }
  _T1 = _tag_fat("Warning: user-defined",sizeof(char),22U);
  goto _TL10;
  _TLF: _T1 = _tag_fat("User-defined",sizeof(char),13U);
  _TL10: { struct _fat_ptr preamble = _T1;
    { struct Cyc_String_pa_PrintArg_struct _T16;
      _T16.tag = 0;
      _T16.f1 = preamble;
      _T3 = _T16;
    }{ struct Cyc_String_pa_PrintArg_struct _T16 = _T3;
      { struct Cyc_String_pa_PrintArg_struct _T17;
	_T17.tag = 0;
	_T17.f1 = Cyc_Absynpp_qvar2string(n);
	_T4 = _T17;
      }{ struct Cyc_String_pa_PrintArg_struct _T17 = _T4;
	{ struct Cyc_String_pa_PrintArg_struct _T18;
	  _T18.tag = 0;
	  _T18.f1 = s;
	  _T5 = _T18;
	}{ struct Cyc_String_pa_PrintArg_struct _T18 = _T5;
	  void * _T19[3];
	  _T19[0] = &_T16;
	  _T19[1] = &_T17;
	  _T19[2] = &_T18;
	  _T6 = Cyc_stderr;
	  _T7 = _tag_fat("%s type for %s incompatible with system version %s\n",
			 sizeof(char),52U);
	  _T8 = _tag_fat(_T19,sizeof(void *),3);
	  Cyc_fprintf(_T6,_T7,_T8);
	}
      }
    }
  }goto _TLE;
  _TLD: _T9 = warn;
  if (! _T9) { goto _TL11;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _T16;
    _T16.tag = 0;
    _T16.f1 = _tag_fat("User-defined type for ",sizeof(char),23U);
    _TA = _T16;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T16 = _TA;
    { struct Cyc_Warn_Qvar_Warn_Warg_struct _T17;
      _T17.tag = 1;
      _T17.f1 = n;
      _TB = _T17;
    }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T17 = _TB;
      { struct Cyc_Warn_String_Warn_Warg_struct _T18;
	_T18.tag = 0;
	_T18.f1 = _tag_fat(" incompatible with system version ",sizeof(char),
			   35U);
	_TC = _T18;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T18 = _TC;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T19;
	  _T19.tag = 0;
	  _T19.f1 = s;
	  _TD = _T19;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T19 = _TD;
	  void * _T1A[4];
	  _T1A[0] = &_T16;
	  _T1A[1] = &_T17;
	  _T1A[2] = &_T18;
	  _T1A[3] = &_T19;
	  _TE = loc;
	  _TF = _tag_fat(_T1A,sizeof(void *),4);
	  Cyc_Warn_warn2(_TE,_TF);
	}
      }
    }
  }goto _TL12;
  _TL11: { struct Cyc_Warn_String_Warn_Warg_struct _T16;
    _T16.tag = 0;
    _T16.f1 = _tag_fat("User-defined type for ",sizeof(char),23U);
    _T10 = _T16;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T16 = _T10;
    { struct Cyc_Warn_Qvar_Warn_Warg_struct _T17;
      _T17.tag = 1;
      _T17.f1 = n;
      _T11 = _T17;
    }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T17 = _T11;
      { struct Cyc_Warn_String_Warn_Warg_struct _T18;
	_T18.tag = 0;
	_T18.f1 = _tag_fat(" incompatible with system version ",sizeof(char),
			   35U);
	_T12 = _T18;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T18 = _T12;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T19;
	  _T19.tag = 0;
	  _T19.f1 = s;
	  _T13 = _T19;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T19 = _T13;
	  void * _T1A[4];
	  _T1A[0] = &_T16;
	  _T1A[1] = &_T17;
	  _T1A[2] = &_T18;
	  _T1A[3] = &_T19;
	  _T14 = loc;
	  _T15 = _tag_fat(_T1A,sizeof(void *),4);
	  Cyc_Warn_err2(_T14,_T15);
	}
      }
    }
  }_TL12: _TLE: ;
}
static void * Cyc_Cifc_expand_c_type(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
				     void * ctyp) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  int * _T4;
  int _T5;
  void * _T6;
  void * _T7;
  void * _T8;
  struct Cyc_Warn_String_Warn_Warg_struct _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  void * _TC;
  void * _TD;
  void * _TE;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _TF;
  struct Cyc_Absyn_FnInfo * _T10;
  struct Cyc_Absyn_FnInfo * _T11;
  unsigned int _T12;
  struct Cyc_Tcenv_Tenv * _T13;
  struct Cyc_Absyn_FnInfo * _T14;
  void * _T15;
  void * _T16;
  struct Cyc_Absyn_FnInfo * _T17;
  struct Cyc_List_List * _T18;
  unsigned int _T19;
  struct Cyc_List_List * _T1A;
  void * _T1B;
  void * * _T1C;
  void * * _T1D;
  unsigned int _T1E;
  struct Cyc_Tcenv_Tenv * _T1F;
  void * * _T20;
  void * _T21;
  void * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_Absyn_FnInfo * _T24;
  struct Cyc_Absyn_FnInfo * _T25;
  void * _T26;
  void * _T27;
  void * _T28;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T29;
  struct Cyc_Absyn_PtrInfo * _T2A;
  struct Cyc_Absyn_PtrInfo * _T2B;
  unsigned int _T2C;
  struct Cyc_Tcenv_Tenv * _T2D;
  struct Cyc_Absyn_PtrInfo * _T2E;
  void * _T2F;
  void * _T30;
  void * _T31;
  void * _T32;
  void * _T33;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T34;
  struct Cyc_Absyn_ArrayInfo * _T35;
  struct Cyc_Absyn_ArrayInfo * _T36;
  unsigned int _T37;
  struct Cyc_Tcenv_Tenv * _T38;
  struct Cyc_Absyn_ArrayInfo * _T39;
  void * _T3A;
  void * _T3B;
  void * _T3C;
  void * _T3D;
  long _T3E;
  struct Cyc_List_List * _T3F;
  void * _T40;
  struct Cyc_Absyn_Aggrfield * _T41;
  void * * _T42;
  unsigned int _T43;
  struct Cyc_Tcenv_Tenv * _T44;
  void * * _T45;
  void * _T46;
  void * _T47;
  struct Cyc_List_List * _T48;
  struct Cyc_List_List * _T49;
  void * _T4A;
  void * _T4B;
  void * _T4C;
  void * _T4D;
  void * _T4E;
  void * _T4F;
  void * _T50;
  void * _T51;
  void * _T52;
  void * _T53;
  void * _T54;
  struct Cyc_Absyn_Vardecl * _T55;
  unsigned int _T56;
  struct Cyc_Tcenv_Tenv * _T57;
  struct Cyc_Absyn_Vardecl * _T58;
  void * _T59;
  void * _T5A;
  void * _T5B;
  void * _T5C;
  struct Cyc_Absyn_Vardecl * _T5D;
  struct Cyc_Absyn_Exp * _T5E;
  void * * _T5F;
  struct Cyc_Absyn_TypeDecl * _T60;
  struct Cyc_List_List * _T61;
  long _T62;
  enum Cyc_Absyn_AggrKind _T63;
  void * _T64;
  _T0 = ctyp;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 8: 
    Cyc_Tctyp_check_valid_toplevel_type(loc,te,ctyp);
    { void * _T65;
      _T3 = ctyp;
      _T4 = (int *)_T3;
      _T5 = *_T4;
      if (_T5 != 8) { goto _TL14;
      }
      _T6 = ctyp;
      { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T66 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T6;
	_T7 = _T66->f4;
	_T65 = (void *)_T7;
      }{ void * to = _T65;
	_T8 = _check_null(to);
	return _T8;
      }_TL14: { struct Cyc_Warn_String_Warn_Warg_struct _T66;
	_T66.tag = 0;
	_T66.f1 = _tag_fat("Impos",sizeof(char),6U);
	_T9 = _T66;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T66 = _T9;
	void * _T67[1];
	_T67[0] = &_T66;
	_TA = loc;
	_TB = _tag_fat(_T67,sizeof(void *),1);
	Cyc_Warn_err2(_TA,_TB);
      }goto _LL1B;
      _LL1B: ;
    }_TC = ctyp;
    return _TC;
  case 6: 
    _TD = ctyp;
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T65 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_TD;
      _TE = ctyp;
      _TF = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_TE;
      _T10 = &_TF->f1;
      _T64 = (struct Cyc_Absyn_FnInfo *)_T10;
    }{ struct Cyc_Absyn_FnInfo * finfo = _T64;
      Cyc_Tctyp_check_valid_toplevel_type(loc,te,ctyp);
      _T11 = finfo;
      _T12 = loc;
      _T13 = te;
      _T14 = finfo;
      _T15 = _T14->ret_type;
      _T16 = Cyc_Toc_typ_to_c(_T15);
      _T11->ret_type = Cyc_Cifc_expand_c_type(_T12,_T13,_T16);
      _T17 = finfo;
      { struct Cyc_List_List * args = _T17->args;
	_TL16: _T18 = args;
	_T19 = (unsigned int)_T18;
	if (_T19) { goto _TL17;
	}else { goto _TL18;
	}
	_TL17: _T1A = args;
	_T1B = _T1A->hd;
	{ struct _tuple8 * _T65 = (struct _tuple8 *)_T1B;
	  void * _T66;
	  { struct _tuple8 _T67 = *_T65;
	    _T1C = &_T65->f2;
	    _T66 = (void * *)_T1C;
	  }{ void * * argType = (void * *)_T66;
	    _T1D = argType;
	    _T1E = loc;
	    _T1F = te;
	    _T20 = argType;
	    _T21 = *_T20;
	    _T22 = Cyc_Toc_typ_to_c(_T21);
	    *_T1D = Cyc_Cifc_expand_c_type(_T1E,_T1F,_T22);
	    _T23 = args;
	    args = _T23->tl;
	  }
	}goto _TL16;
	_TL18: _T24 = finfo;
	_T24->tvars = 0;
	_T25 = finfo;
	_T25->effect = 0;
	_T26 = ctyp;
	return _T26;
      }
    }
  case 4: 
    _T27 = ctyp;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T65 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T27;
      _T28 = ctyp;
      _T29 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T28;
      _T2A = &_T29->f1;
      _T64 = (struct Cyc_Absyn_PtrInfo *)_T2A;
    }{ struct Cyc_Absyn_PtrInfo * pinfo = _T64;
      _T2B = pinfo;
      _T2C = loc;
      _T2D = te;
      _T2E = pinfo;
      _T2F = _T2E->elt_type;
      _T30 = Cyc_Toc_typ_to_c(_T2F);
      _T2B->elt_type = Cyc_Cifc_expand_c_type(_T2C,_T2D,_T30);
      _T31 = ctyp;
      return _T31;
    }
  case 5: 
    _T32 = ctyp;
    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T65 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T32;
      _T33 = ctyp;
      _T34 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T33;
      _T35 = &_T34->f1;
      _T64 = (struct Cyc_Absyn_ArrayInfo *)_T35;
    }{ struct Cyc_Absyn_ArrayInfo * ainfo = (struct Cyc_Absyn_ArrayInfo *)_T64;
      Cyc_Tctyp_check_valid_toplevel_type(loc,te,ctyp);
      _T36 = ainfo;
      _T37 = loc;
      _T38 = te;
      _T39 = ainfo;
      _T3A = _T39->elt_type;
      _T3B = Cyc_Toc_typ_to_c(_T3A);
      _T36->elt_type = Cyc_Cifc_expand_c_type(_T37,_T38,_T3B);
      _T3C = ctyp;
      return _T3C;
    }
  case 7: 
    _T3D = ctyp;
    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T65 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T3D;
      _T63 = _T65->f1;
      _T62 = _T65->f2;
      _T61 = _T65->f3;
    }{ enum Cyc_Absyn_AggrKind knd = _T63;
      long is_tuple = _T62;
      struct Cyc_List_List * flst = _T61;
      _T3E = is_tuple;
      if (! _T3E) { goto _TL19;
      }
      Cyc_Tctyp_check_valid_toplevel_type(loc,te,ctyp);
      _TL1E: if (flst != 0) { goto _TL1C;
      }else { goto _TL1D;
      }
      _TL1C: _T3F = flst;
      _T40 = _T3F->hd;
      _T41 = (struct Cyc_Absyn_Aggrfield *)_T40;
      { void * * elt_type = &_T41->type;
	_T42 = elt_type;
	_T43 = loc;
	_T44 = te;
	_T45 = elt_type;
	_T46 = *_T45;
	_T47 = Cyc_Toc_typ_to_c(_T46);
	*_T42 = Cyc_Cifc_expand_c_type(_T43,_T44,_T47);
	_T48 = flst;
	flst = _T48->tl;
      }_T49 = _check_null(flst);
      flst = _T49->tl;
      goto _TL1E;
      _TL1D: goto _TL1A;
      _TL19: _TL1A: _T4A = ctyp;
      return _T4A;
    }
  case 10: 
    _T4B = ctyp;
    { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T65 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T4B;
      _T60 = _T65->f1;
      _T5F = _T65->f2;
    }{ struct Cyc_Absyn_TypeDecl * td = _T60;
      void * * tptr = _T5F;
      _T4C = ctyp;
      return _T4C;
    }
  case 9: 
    _T4D = ctyp;
    { struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _T65 = (struct Cyc_Absyn_ValueofType_Absyn_Type_struct *)_T4D;
      _T5E = _T65->f1;
    }{ struct Cyc_Absyn_Exp * e = _T5E;
      _T4E = ctyp;
      return _T4E;
    }
  case 11: 
    _T4F = ctyp;
    { struct Cyc_Absyn_TypeofType_Absyn_Type_struct * _T65 = (struct Cyc_Absyn_TypeofType_Absyn_Type_struct *)_T4F;
      _T5E = _T65->f1;
    }{ struct Cyc_Absyn_Exp * e = _T5E;
      _T50 = ctyp;
      return _T50;
    }
  case 0: 
    _T51 = ctyp;
    return _T51;
  case 1: 
    _T52 = ctyp;
    return _T52;
  case 2: 
    _T53 = ctyp;
    return _T53;
  case 12: 
    _T54 = ctyp;
    { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T65 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T54;
      _T5D = _T65->f1;
    }{ struct Cyc_Absyn_Vardecl * vd = _T5D;
      Cyc_Tctyp_check_valid_toplevel_type(loc,te,ctyp);
      _T55 = vd;
      _T56 = loc;
      _T57 = te;
      _T58 = vd;
      _T59 = _T58->type;
      _T5A = Cyc_Toc_typ_to_c(_T59);
      _T55->type = Cyc_Cifc_expand_c_type(_T56,_T57,_T5A);
      _T5B = ctyp;
      return _T5B;
    }
  default: 
    _T5C = ctyp;
    return _T5C;
  }
  ;
}
static long Cyc_Cifc_is_boxed_kind(void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  int * _T6;
  unsigned int _T7;
  void * _T8;
  int _T9;
  enum Cyc_Absyn_Size_of _TA;
  int _TB;
  enum Cyc_Absyn_Size_of _TC;
  int _TD;
  void * _TE;
  void * _TF;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T10;
  struct Cyc_Absyn_PtrInfo * _T11;
  struct Cyc_Absyn_PtrInfo * _T12;
  struct Cyc_Absyn_PtrAtts _T13;
  int * _T14;
  int _T15;
  void * _T16;
  void * _T17;
  int * _T18;
  int _T19;
  int (* _T1A)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T1B)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  void * _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  struct Cyc_List_List * _T20;
  void * _T21;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = t;
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T22 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3;
      _T4 = _T22->f1;
      _T21 = (void *)_T4;
      _T20 = _T22->f2;
    }{ void * tc = _T21;
      struct Cyc_List_List * ts = _T20;
      { enum Cyc_Absyn_Size_of _T22;
	_T5 = tc;
	_T6 = (int *)_T5;
	_T7 = *_T6;
	switch (_T7) {
	case 1: 
	  _T8 = tc;
	  { struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T23 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T8;
	    _T22 = _T23->f2;
	  }{ enum Cyc_Absyn_Size_of sz = _T22;
	    _TA = sz;
	    _TB = (int)_TA;
	    if (_TB != 2) { goto _TL21;
	    }
	    _T9 = 1;
	    goto _TL22;
	    _TL21: _TC = sz;
	    _TD = (int)_TC;
	    _T9 = _TD == 3;
	    _TL22: return _T9;
	  }
	case 4: 
	  goto _LLF;
	case 5: 
	  _LLF: return 1;
	default: 
	  return 0;
	}
	;
      }goto _LL0;
    }
  case 4: 
    _TE = t;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T22 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TE;
      _TF = t;
      _T10 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TF;
      _T11 = &_T10->f1;
      _T21 = (struct Cyc_Absyn_PtrInfo *)_T11;
    }{ struct Cyc_Absyn_PtrInfo * pi = (struct Cyc_Absyn_PtrInfo *)_T21;
      _T12 = pi;
      _T13 = _T12->ptr_atts;
      { void * _T22 = _T13.bounds;
	void * _T23;
	_T14 = (int *)_T22;
	_T15 = *_T14;
	if (_T15 != 0) { goto _TL23;
	}
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T24 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T22;
	  _T16 = _T24->f1;
	  _T23 = (void *)_T16;
	}{ void * tc = _T23;
	  _T17 = tc;
	  _T18 = (int *)_T17;
	  _T19 = *_T18;
	  if (_T19 != 14) { goto _TL25;
	  }
	  return 0;
	  _TL25: return 1;
	  ;
	}goto _TL24;
	_TL23: _T1B = Cyc_Warn_impos;
	{ int (* _T24)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_T1B;
	  _T1A = _T24;
	}_T1C = _tag_fat("ptrbound_t must have an AppType",sizeof(char),32U);
	_T1D = _tag_fat(0U,sizeof(void *),0);
	_T1A(_T1C,_T1D);
	_TL24: ;
      }goto _LL0;
    }
  case 9: 
    _T1E = t;
    { struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _T22 = (struct Cyc_Absyn_ValueofType_Absyn_Type_struct *)_T1E;
      _T1F = _T22->f1;
    }{ struct Cyc_Absyn_Exp * e = _T1F;
      return 1;
    }
  default: 
    return 0;
  }
  _LL0: ;
}
static long Cyc_Cifc_check_fntype_kinds(unsigned int,struct Cyc_Tcenv_Tenv *,
					void *,void *);
static long Cyc_Cifc_c_types_ok(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
				void * ctyp,void * cyctyp) {
  long _T0;
  long _T1;
  long _T2;
  long _T3;
  int _T4;
  long _T5;
  struct Cyc_Absyn_Tqual tq;
  void * ctyp_cp = Cyc_Tcutil_copy_type(ctyp);
  void * utyp_cp = Cyc_Tcutil_copy_type(cyctyp);
  void * c_typ = Cyc_Toc_typ_to_c(ctyp_cp);
  void * u_typ = Cyc_Toc_typ_to_c(utyp_cp);
  _T0 = Cyc_Unify_unify(c_typ,u_typ);
  if (_T0) { goto _TL27;
  }else { goto _TL29;
  }
  _TL29: c_typ = Cyc_Cifc_expand_c_type(loc,te,c_typ);
  u_typ = Cyc_Cifc_expand_c_type(loc,te,u_typ);
  _T1 = Cyc_Unify_unify(c_typ,u_typ);
  if (_T1) { goto _TL2A;
  }else { goto _TL2C;
  }
  _TL2C: _T2 = Cyc_Tcutil_is_function_type(c_typ);
  if (! _T2) { goto _TL2D;
  }
  _T3 = Cyc_Cifc_check_fntype_kinds(loc,te,c_typ,u_typ);
  return _T3;
  _TL2D: _T5 = Cyc_Cifc_is_boxed_kind(c_typ);
  if (! _T5) { goto _TL2F;
  }
  _T4 = Cyc_Cifc_is_boxed_kind(u_typ);
  goto _TL30;
  _TL2F: _T4 = 0;
  _TL30: return _T4;
  _TL2A: goto _TL28;
  _TL27: _TL28: return 1;
}
 struct _tuple13 {
  void * f0;
  void * f1;
};
static long Cyc_Cifc_check_fntype_kinds(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
					void * c_typ,void * u_typ) {
  struct _tuple13 _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  void * _T8;
  unsigned int _T9;
  struct Cyc_Tcenv_Tenv * _TA;
  struct Cyc_Absyn_FnInfo _TB;
  void * _TC;
  struct Cyc_Absyn_FnInfo _TD;
  void * _TE;
  long _TF;
  struct Cyc_Absyn_FnInfo _T10;
  struct Cyc_Absyn_FnInfo _T11;
  struct Cyc_List_List * _T12;
  unsigned int _T13;
  long _T14;
  struct Cyc_List_List * _T15;
  unsigned int _T16;
  unsigned int _T17;
  struct Cyc_Tcenv_Tenv * _T18;
  struct Cyc_List_List * _T19;
  void * _T1A;
  struct _tuple8 * _T1B;
  struct _tuple8 _T1C;
  void * _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  struct _tuple8 * _T20;
  struct _tuple8 _T21;
  void * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_List_List * _T24;
  long _T25;
  { struct _tuple13 _T26;
    _T26.f0 = c_typ;
    _T26.f1 = u_typ;
    _T0 = _T26;
  }{ struct _tuple13 _T26 = _T0;
    struct Cyc_Absyn_FnInfo _T27;
    struct Cyc_Absyn_FnInfo _T28;
    _T1 = _T26.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 6) { goto _TL31;
    }
    _T4 = _T26.f1;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    if (_T6 != 6) { goto _TL33;
    }
    _T7 = _T26.f0;
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T29 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T7;
      _T28 = _T29->f1;
    }_T8 = _T26.f1;
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T29 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T8;
      _T27 = _T29->f1;
    }{ struct Cyc_Absyn_FnInfo cfi = _T28;
      struct Cyc_Absyn_FnInfo ufi = _T27;
      _T9 = loc;
      _TA = te;
      _TB = cfi;
      _TC = _TB.ret_type;
      _TD = ufi;
      _TE = _TD.ret_type;
      { long typesOk = Cyc_Cifc_c_types_ok(_T9,_TA,_TC,_TE);
	_TF = typesOk;
	if (! _TF) { goto _TL35;
	}
	_T10 = cfi;
	{ struct Cyc_List_List * ca = _T10.args;
	  _T11 = ufi;
	  { struct Cyc_List_List * ua = _T11.args;
	    _TL37: _T12 = ca;
	    _T13 = (unsigned int)_T12;
	    if (_T13) { goto _TL3A;
	    }else { goto _TL39;
	    }
	    _TL3A: _T14 = typesOk;
	    if (_T14) { goto _TL38;
	    }else { goto _TL39;
	    }
	    _TL38: _T15 = ua;
	    _T16 = (unsigned int)_T15;
	    if (_T16) { goto _TL3B;
	    }else { goto _TL3D;
	    }
	    _TL3D: return 0;
	    _TL3B: _T17 = loc;
	    _T18 = te;
	    _T19 = ca;
	    _T1A = _T19->hd;
	    _T1B = (struct _tuple8 *)_T1A;
	    _T1C = *_T1B;
	    _T1D = _T1C.f2;
	    _T1E = ua;
	    _T1F = _T1E->hd;
	    _T20 = (struct _tuple8 *)_T1F;
	    _T21 = *_T20;
	    _T22 = _T21.f2;
	    typesOk = Cyc_Cifc_c_types_ok(_T17,_T18,_T1D,_T22);
	    _T23 = ca;
	    ca = _T23->tl;
	    _T24 = ua;
	    ua = _T24->tl;
	    goto _TL37;
	    _TL39: ;
	  }
	}goto _TL36;
	_TL35: _TL36: _T25 = typesOk;
	return _T25;
	goto _LL0;
      }
    }_TL33: goto _LL3;
    _TL31: _LL3: return 0;
    _LL0: ;
  }
}
 struct _tuple14 {
  struct Cyc_Absyn_AggrdeclImpl * f0;
  struct Cyc_Absyn_AggrdeclImpl * f1;
};
void Cyc_Cifc_merge_sys_user_decl(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
				  long is_buildlib,struct Cyc_Absyn_Decl * user_decl,
				  struct Cyc_Absyn_Decl * c_decl) {
  struct _tuple13 _T0;
  struct Cyc_Absyn_Decl * _T1;
  struct Cyc_Absyn_Decl * _T2;
  void * _T3;
  int * _T4;
  unsigned int _T5;
  void * _T6;
  int * _T7;
  int _T8;
  void * _T9;
  void * _TA;
  unsigned int _TB;
  struct Cyc_Tcenv_Tenv * _TC;
  struct Cyc_Absyn_Vardecl * _TD;
  void * _TE;
  struct Cyc_Absyn_Vardecl * _TF;
  void * _T10;
  long _T11;
  unsigned int _T12;
  long _T13;
  struct Cyc_Absyn_Vardecl * _T14;
  struct _tuple0 * _T15;
  struct _fat_ptr _T16;
  struct Cyc_String_pa_PrintArg_struct _T17;
  struct Cyc_Absyn_Vardecl * _T18;
  void * _T19;
  struct Cyc_String_pa_PrintArg_struct _T1A;
  struct Cyc_Absyn_Vardecl * _T1B;
  void * _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  struct Cyc_Absyn_Vardecl * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_Absyn_Vardecl * _T21;
  struct Cyc_Absyn_Vardecl * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_Absyn_Vardecl * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_Absyn_Vardecl * _T26;
  struct Cyc_Absyn_Vardecl * _T27;
  struct Cyc_Absyn_Vardecl * _T28;
  struct Cyc_Absyn_Vardecl * _T29;
  void * _T2A;
  int * _T2B;
  int _T2C;
  void * _T2D;
  void * _T2E;
  struct Cyc_Absyn_Vardecl * _T2F;
  void * _T30;
  long _T31;
  unsigned int _T32;
  long _T33;
  struct Cyc_Absyn_Vardecl * _T34;
  struct _tuple0 * _T35;
  struct _fat_ptr _T36;
  struct Cyc_Absyn_Fndecl * _T37;
  void * _T38;
  struct Cyc_Absyn_Fndecl * _T39;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T3A;
  struct Cyc_Absyn_Fndecl * _T3B;
  unsigned int _T3C;
  struct Cyc_Tcenv_Tenv * _T3D;
  void * _T3E;
  struct Cyc_Absyn_Vardecl * _T3F;
  void * _T40;
  long _T41;
  unsigned int _T42;
  long _T43;
  struct Cyc_Absyn_Vardecl * _T44;
  struct _tuple0 * _T45;
  struct _fat_ptr _T46;
  struct Cyc_String_pa_PrintArg_struct _T47;
  struct Cyc_String_pa_PrintArg_struct _T48;
  struct Cyc_Absyn_Vardecl * _T49;
  void * _T4A;
  struct _fat_ptr _T4B;
  struct _fat_ptr _T4C;
  struct Cyc_Absyn_Vardecl * _T4D;
  int * _T4E;
  int _T4F;
  struct Cyc_Absyn_FnInfo _T50;
  unsigned int _T51;
  struct Cyc_Tcenv_Tenv * _T52;
  struct Cyc_Absyn_Vardecl * _T53;
  void * _T54;
  struct Cyc_Absyn_Fndecl * _T55;
  struct Cyc_Absyn_FnInfo _T56;
  struct Cyc_List_List * _T57;
  struct Cyc_Absyn_FnInfo _T58;
  struct Cyc_List_List * _T59;
  struct Cyc_Absyn_Fndecl * _T5A;
  struct Cyc_Absyn_FnInfo _T5B;
  struct Cyc_List_List * _T5C;
  struct Cyc_Absyn_Fndecl * _T5D;
  struct Cyc_Warn_String_Warn_Warg_struct _T5E;
  struct _fat_ptr _T5F;
  void * _T60;
  int * _T61;
  int _T62;
  void * _T63;
  void * _T64;
  struct Cyc_Absyn_Aggrdecl * _T65;
  enum Cyc_Absyn_Scope _T66;
  int _T67;
  struct Cyc_Absyn_Aggrdecl * _T68;
  enum Cyc_Absyn_Scope _T69;
  int _T6A;
  unsigned int _T6B;
  long _T6C;
  struct Cyc_Absyn_Aggrdecl * _T6D;
  struct _tuple0 * _T6E;
  struct _fat_ptr _T6F;
  struct Cyc_Absyn_Aggrdecl * _T70;
  struct Cyc_Absyn_AggrdeclImpl * _T71;
  unsigned int _T72;
  long _T73;
  struct Cyc_Absyn_Aggrdecl * _T74;
  struct _tuple0 * _T75;
  struct _fat_ptr _T76;
  struct Cyc_Absyn_Aggrdecl * _T77;
  struct Cyc_Absyn_AggrdeclImpl * _T78;
  unsigned int _T79;
  long _T7A;
  struct Cyc_Absyn_Aggrdecl * _T7B;
  struct _tuple0 * _T7C;
  struct _fat_ptr _T7D;
  struct Cyc_Absyn_Decl * _T7E;
  struct Cyc_Absyn_Decl * _T7F;
  struct _tuple14 _T80;
  struct Cyc_Absyn_Aggrdecl * _T81;
  struct Cyc_Absyn_Aggrdecl * _T82;
  struct Cyc_Absyn_AggrdeclImpl * _T83;
  struct Cyc_Absyn_AggrdeclImpl * _T84;
  struct Cyc_Absyn_AggrdeclImpl * _T85;
  struct Cyc_Absyn_AggrdeclImpl * _T86;
  struct Cyc_List_List * * _T87;
  struct Cyc_Absyn_AggrdeclImpl * _T88;
  struct Cyc_List_List * * _T89;
  struct Cyc_Absyn_AggrdeclImpl * _T8A;
  struct Cyc_List_List * * _T8B;
  struct Cyc_Absyn_AggrdeclImpl * _T8C;
  long _T8D;
  unsigned int _T8E;
  long _T8F;
  struct Cyc_Absyn_Aggrdecl * _T90;
  struct _tuple0 * _T91;
  struct _fat_ptr _T92;
  struct Cyc_List_List * _T93;
  void * _T94;
  struct Cyc_List_List * _T95;
  struct Cyc_Absyn_Aggrfield * _T96;
  struct _fat_ptr * _T97;
  unsigned int _T98;
  struct Cyc_Tcenv_Tenv * _T99;
  struct Cyc_Absyn_Aggrfield * _T9A;
  void * _T9B;
  struct Cyc_Absyn_Aggrfield * _T9C;
  void * _T9D;
  long _T9E;
  unsigned int _T9F;
  long _TA0;
  struct Cyc_Absyn_Aggrdecl * _TA1;
  struct _tuple0 * _TA2;
  struct _fat_ptr _TA3;
  struct Cyc_String_pa_PrintArg_struct _TA4;
  struct Cyc_Absyn_Aggrfield * _TA5;
  void * _TA6;
  struct Cyc_String_pa_PrintArg_struct _TA7;
  struct Cyc_Absyn_Aggrfield * _TA8;
  struct _fat_ptr * _TA9;
  struct Cyc_String_pa_PrintArg_struct _TAA;
  struct Cyc_Absyn_Aggrfield * _TAB;
  void * _TAC;
  struct _fat_ptr _TAD;
  struct _fat_ptr _TAE;
  struct Cyc_Absyn_Aggrfield * _TAF;
  struct Cyc_Absyn_Exp * _TB0;
  unsigned int _TB1;
  long _TB2;
  struct Cyc_Absyn_Aggrdecl * _TB3;
  struct _tuple0 * _TB4;
  struct _fat_ptr _TB5;
  struct Cyc_String_pa_PrintArg_struct _TB6;
  struct Cyc_Absyn_Aggrfield * _TB7;
  void * _TB8;
  struct _fat_ptr _TB9;
  struct _fat_ptr _TBA;
  struct Cyc_Absyn_Aggrfield * _TBB;
  struct Cyc_List_List * _TBC;
  struct Cyc_Absyn_Aggrfield * _TBD;
  struct Cyc_Absyn_Aggrfield * _TBE;
  struct Cyc_List_List * _TBF;
  struct Cyc_Absyn_Aggrfield * _TC0;
  struct Cyc_List_List * _TC1;
  struct Cyc_Absyn_Aggrfield * _TC2;
  struct Cyc_Absyn_Aggrfield * _TC3;
  struct Cyc_Absyn_Aggrfield * _TC4;
  struct Cyc_Absyn_Aggrfield * _TC5;
  struct Cyc_Absyn_Aggrfield * _TC6;
  struct Cyc_Absyn_Aggrfield * _TC7;
  struct Cyc_List_List * _TC8;
  struct Cyc_Absyn_Aggrdecl * _TC9;
  struct Cyc_List_List * _TCA;
  struct Cyc_Absyn_Aggrdecl * _TCB;
  struct Cyc_Absyn_Aggrdecl * _TCC;
  struct Cyc_List_List * _TCD;
  unsigned int _TCE;
  struct Cyc_List_List * * _TCF;
  struct Cyc_List_List * _TD0;
  unsigned int _TD1;
  struct Cyc_List_List * * _TD2;
  struct Cyc_List_List * _TD3;
  unsigned int _TD4;
  struct Cyc_List_List * * _TD5;
  struct Cyc_List_List * _TD6;
  struct Cyc_List_List * _TD7;
  void * _TD8;
  struct Cyc_Absyn_Aggrfield * _TD9;
  struct _fat_ptr * _TDA;
  unsigned int _TDB;
  long _TDC;
  struct Cyc_Absyn_Aggrdecl * _TDD;
  struct _tuple0 * _TDE;
  struct _fat_ptr _TDF;
  struct Cyc_String_pa_PrintArg_struct _TE0;
  struct Cyc_List_List * _TE1;
  void * _TE2;
  struct Cyc_Absyn_Aggrfield * _TE3;
  struct _fat_ptr * _TE4;
  struct _fat_ptr _TE5;
  struct _fat_ptr _TE6;
  struct Cyc_List_List * _TE7;
  struct Cyc_Core_Impossible_exn_struct * _TE8;
  void * _TE9;
  void * _TEA;
  int * _TEB;
  int _TEC;
  void * _TED;
  void * _TEE;
  unsigned int _TEF;
  long _TF0;
  struct Cyc_Absyn_Enumdecl * _TF1;
  struct _tuple0 * _TF2;
  struct _fat_ptr _TF3;
  void * _TF4;
  int * _TF5;
  int _TF6;
  void * _TF7;
  void * _TF8;
  struct Cyc_Absyn_Typedefdecl * _TF9;
  void * _TFA;
  unsigned int _TFB;
  long _TFC;
  struct Cyc_Absyn_Typedefdecl * _TFD;
  struct _tuple0 * _TFE;
  struct _fat_ptr _TFF;
  struct Cyc_Absyn_Typedefdecl * _T100;
  void * _T101;
  unsigned int _T102;
  long _T103;
  struct Cyc_Absyn_Typedefdecl * _T104;
  struct _tuple0 * _T105;
  struct _fat_ptr _T106;
  struct Cyc_Absyn_Decl * _T107;
  struct Cyc_Absyn_Decl * _T108;
  unsigned int _T109;
  struct Cyc_Tcenv_Tenv * _T10A;
  struct Cyc_Absyn_Typedefdecl * _T10B;
  void * _T10C;
  struct Cyc_Absyn_Typedefdecl * _T10D;
  void * _T10E;
  long _T10F;
  unsigned int _T110;
  long _T111;
  struct Cyc_Absyn_Typedefdecl * _T112;
  struct _tuple0 * _T113;
  struct _fat_ptr _T114;
  struct Cyc_String_pa_PrintArg_struct _T115;
  struct Cyc_Absyn_Typedefdecl * _T116;
  void * _T117;
  struct Cyc_String_pa_PrintArg_struct _T118;
  struct Cyc_Absyn_Typedefdecl * _T119;
  void * _T11A;
  struct _fat_ptr _T11B;
  struct _fat_ptr _T11C;
  struct Cyc_Absyn_Typedefdecl * _T11D;
  struct Cyc_Absyn_Typedefdecl * _T11E;
  struct Cyc_Absyn_Typedefdecl * _T11F;
  struct Cyc_Absyn_Typedefdecl * _T120;
  struct Cyc_Absyn_Typedefdecl * _T121;
  struct Cyc_Absyn_Typedefdecl * _T122;
  struct Cyc_Absyn_Typedefdecl * _T123;
  struct Cyc_List_List * _T124;
  struct Cyc_Absyn_Typedefdecl * _T125;
  struct Cyc_Absyn_Typedefdecl * _T126;
  struct Cyc_List_List * _T127;
  struct Cyc_Absyn_Typedefdecl * _T128;
  struct Cyc_List_List * _T129;
  long _T12A;
  struct Cyc_String_pa_PrintArg_struct _T12B;
  struct Cyc_List_List * _T12C;
  struct _fat_ptr _T12D;
  struct Cyc___cycFILE * _T12E;
  struct _fat_ptr _T12F;
  struct _fat_ptr _T130;
  struct Cyc_Warn_String_Warn_Warg_struct _T131;
  struct Cyc_Warn_String_Warn_Warg_struct _T132;
  struct Cyc_List_List * _T133;
  struct _fat_ptr _T134;
  unsigned int _T135;
  struct _fat_ptr _T136;
  { struct _tuple13 _T137;
    _T1 = c_decl;
    _T137.f0 = _T1->r;
    _T2 = user_decl;
    _T137.f1 = _T2->r;
    _T0 = _T137;
  }{ struct _tuple13 _T137 = _T0;
    struct Cyc_Absyn_Typedefdecl * _T138;
    struct Cyc_Absyn_Typedefdecl * _T139;
    struct Cyc_Absyn_Enumdecl * _T13A;
    struct Cyc_Absyn_Enumdecl * _T13B;
    struct Cyc_Absyn_Aggrdecl * _T13C;
    struct Cyc_Absyn_Aggrdecl * _T13D;
    struct Cyc_Absyn_Fndecl * _T13E;
    struct Cyc_Absyn_Vardecl * _T13F;
    struct Cyc_Absyn_Vardecl * _T140;
    _T3 = _T137.f0;
    _T4 = (int *)_T3;
    _T5 = *_T4;
    switch (_T5) {
    case 0: 
      _T6 = _T137.f1;
      _T7 = (int *)_T6;
      _T8 = *_T7;
      if (_T8 != 0) { goto _TL3F;
      }
      _T9 = _T137.f0;
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T9;
	_T140 = _T141->f1;
      }_TA = _T137.f1;
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TA;
	_T13F = _T141->f1;
      }{ struct Cyc_Absyn_Vardecl * cd = _T140;
	struct Cyc_Absyn_Vardecl * ud = _T13F;
	_TB = loc;
	_TC = te;
	_TD = cd;
	_TE = _TD->type;
	_TF = ud;
	_T10 = _TF->type;
	_T11 = Cyc_Cifc_c_types_ok(_TB,_TC,_TE,_T10);
	if (_T11) { goto _TL41;
	}else { goto _TL43;
	}
	_TL43: _TL44: _T12 = loc;
	_T13 = is_buildlib;
	_T14 = cd;
	_T15 = _T14->name;
	{ struct Cyc_String_pa_PrintArg_struct _T141;
	  _T141.tag = 0;
	  _T18 = ud;
	  _T19 = _T18->type;
	  _T141.f1 = Cyc_Absynpp_typ2string(_T19);
	  _T17 = _T141;
	}{ struct Cyc_String_pa_PrintArg_struct _T141 = _T17;
	  { struct Cyc_String_pa_PrintArg_struct _T142;
	    _T142.tag = 0;
	    _T1B = cd;
	    _T1C = _T1B->type;
	    _T142.f1 = Cyc_Absynpp_typ2string(_T1C);
	    _T1A = _T142;
	  }{ struct Cyc_String_pa_PrintArg_struct _T142 = _T1A;
	    void * _T143[2];
	    _T143[0] = &_T141;
	    _T143[1] = &_T142;
	    _T1D = _tag_fat(": type %s != %s",sizeof(char),16U);
	    _T1E = _tag_fat(_T143,sizeof(void *),2);
	    _T16 = Cyc_aprintf(_T1D,_T1E);
	  }
	}Cyc_Cifc_fail_merge(0,_T12,_T13,_T15,_T16);
	if (0) { goto _TL46;
	}else { goto _TL48;
	}
	_TL48: return;
	_TL46: if (0) { goto _TL44;
	}else { goto _TL45;
	}
	_TL45: goto _TL42;
	_TL41: _T1F = ud;
	_T20 = _T1F->attributes;
	if (_T20 == 0) { goto _TL49;
	}
	_T21 = cd;
	_T22 = cd;
	_T23 = _T22->attributes;
	_T24 = ud;
	_T25 = _T24->attributes;
	_T21->attributes = Cyc_Atts_merge_attributes(_T23,_T25);
	goto _TL4A;
	_TL49: _TL4A: _T26 = cd;
	_T27 = ud;
	_T26->type = _T27->type;
	_T28 = cd;
	_T29 = ud;
	_T28->tq = _T29->tq;
	_TL42: goto _LL0;
      }_TL3F: goto _LLB;
    case 1: 
      _T2A = _T137.f1;
      _T2B = (int *)_T2A;
      _T2C = *_T2B;
      if (_T2C != 0) { goto _TL4B;
      }
      _T2D = _T137.f0;
      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T2D;
	_T13E = _T141->f1;
      }_T2E = _T137.f1;
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T2E;
	_T140 = _T141->f1;
      }{ struct Cyc_Absyn_Fndecl * cd = _T13E;
	struct Cyc_Absyn_Vardecl * ud = _T140;
	_T2F = ud;
	_T30 = _T2F->type;
	_T31 = Cyc_Tcutil_is_function_type(_T30);
	if (_T31) { goto _TL4D;
	}else { goto _TL4F;
	}
	_TL4F: _TL50: _T32 = loc;
	_T33 = is_buildlib;
	_T34 = ud;
	_T35 = _T34->name;
	_T36 = _tag_fat(": type must be a function type to match decl\n",
			sizeof(char),46U);
	Cyc_Cifc_fail_merge(0,_T32,_T33,_T35,_T36);
	if (0) { goto _TL52;
	}else { goto _TL54;
	}
	_TL54: return;
	_TL52: if (0) { goto _TL50;
	}else { goto _TL51;
	}
	_TL51: goto _TL4E;
	_TL4D: _TL4E: { void * cdtype;
	  _T37 = cd;
	  _T38 = _T37->cached_type;
	  if (_T38 == 0) { goto _TL55;
	  }
	  _T39 = cd;
	  cdtype = _T39->cached_type;
	  goto _TL56;
	  _TL55: { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T141 = _cycalloc(sizeof(struct Cyc_Absyn_FnType_Absyn_Type_struct));
	    _T141->tag = 6;
	    _T3B = cd;
	    _T141->f1 = _T3B->i;
	    _T3A = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T141;
	  }cdtype = (void *)_T3A;
	  _TL56: _T3C = loc;
	  _T3D = te;
	  _T3E = cdtype;
	  _T3F = ud;
	  _T40 = _T3F->type;
	  _T41 = Cyc_Cifc_c_types_ok(_T3C,_T3D,_T3E,_T40);
	  if (_T41) { goto _TL57;
	  }else { goto _TL59;
	  }
	  _TL59: _TL5A: _T42 = loc;
	  _T43 = is_buildlib;
	  _T44 = ud;
	  _T45 = _T44->name;
	  { struct Cyc_String_pa_PrintArg_struct _T141;
	    _T141.tag = 0;
	    _T141.f1 = Cyc_Absynpp_typ2string(cdtype);
	    _T47 = _T141;
	  }{ struct Cyc_String_pa_PrintArg_struct _T141 = _T47;
	    { struct Cyc_String_pa_PrintArg_struct _T142;
	      _T142.tag = 0;
	      _T49 = ud;
	      _T4A = _T49->type;
	      _T142.f1 = Cyc_Absynpp_typ2string(_T4A);
	      _T48 = _T142;
	    }{ struct Cyc_String_pa_PrintArg_struct _T142 = _T48;
	      void * _T143[2];
	      _T143[0] = &_T141;
	      _T143[1] = &_T142;
	      _T4B = _tag_fat(": type %s != %s",sizeof(char),16U);
	      _T4C = _tag_fat(_T143,sizeof(void *),2);
	      _T46 = Cyc_aprintf(_T4B,_T4C);
	    }
	  }Cyc_Cifc_fail_merge(0,_T42,_T43,_T45,_T46);
	  if (0) { goto _TL5C;
	  }else { goto _TL5E;
	  }
	  _TL5E: return;
	  _TL5C: if (0) { goto _TL5A;
	  }else { goto _TL5B;
	  }
	  _TL5B: goto _TL58;
	  _TL57: _T4D = ud;
	  { void * _T141 = _T4D->type;
	    struct Cyc_Absyn_FnInfo _T142;
	    _T4E = (int *)_T141;
	    _T4F = *_T4E;
	    if (_T4F != 6) { goto _TL5F;
	    }
	    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T143 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T141;
	      _T142 = _T143->f1;
	    }{ struct Cyc_Absyn_FnInfo fi = _T142;
	      _T50 = fi;
	      { struct Cyc_List_List * old_tvars = _T50.tvars;
		_T51 = loc;
		_T52 = te;
		_T53 = ud;
		_T54 = _T53->type;
		Cyc_Tctyp_check_valid_toplevel_type(_T51,_T52,_T54);
		_T55 = cd;
		_T56 = _T55->i;
		_T57 = _T56.attributes;
		if (_T57 == 0) { goto _TL61;
		}
		_T58 = fi;
		_T59 = _T58.attributes;
		_T5A = cd;
		_T5B = _T5A->i;
		_T5C = _T5B.attributes;
		fi.attributes = Cyc_Atts_merge_attributes(_T59,_T5C);
		goto _TL62;
		_TL61: _TL62: _T5D = cd;
		_T5D->i = fi;
		goto _LLD;
	      }
	    }_TL5F: { struct Cyc_Warn_String_Warn_Warg_struct _T143;
	      _T143.tag = 0;
	      _T143.f1 = _tag_fat("oops!\n",sizeof(char),7U);
	      _T5E = _T143;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T143 = _T5E;
	      void * _T144[1];
	      _T144[0] = &_T143;
	      _T5F = _tag_fat(_T144,sizeof(void *),1);
	      Cyc_Warn_err2(0U,_T5F);
	    }_LLD: ;
	  }_TL58: goto _LL0;
	}
      }_TL4B: goto _LLB;
    case 5: 
      _T60 = _T137.f1;
      _T61 = (int *)_T60;
      _T62 = *_T61;
      if (_T62 != 5) { goto _TL63;
      }
      _T63 = _T137.f0;
      { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T63;
	_T13D = _T141->f1;
      }_T64 = _T137.f1;
      { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T64;
	_T13C = _T141->f1;
      }{ struct Cyc_Absyn_Aggrdecl * cd = _T13D;
	struct Cyc_Absyn_Aggrdecl * ud = _T13C;
	_T65 = ud;
	_T66 = _T65->sc;
	_T67 = (int)_T66;
	_T68 = cd;
	_T69 = _T68->sc;
	_T6A = (int)_T69;
	if (_T67 == _T6A) { goto _TL65;
	}
	_TL67: _T6B = loc;
	_T6C = is_buildlib;
	_T6D = cd;
	_T6E = _T6D->name;
	_T6F = _tag_fat(": scopes don't match (ignoring)",sizeof(char),32U);
	Cyc_Cifc_fail_merge(1,_T6B,_T6C,_T6E,_T6F);
	if (1) { goto _TL69;
	}else { goto _TL6B;
	}
	_TL6B: return;
	_TL69: if (0) { goto _TL67;
	}else { goto _TL68;
	}
	_TL68: goto _TL66;
	_TL65: _TL66: _T70 = ud;
	_T71 = _T70->impl;
	if (_T71 != 0) { goto _TL6C;
	}
	_TL6E: _T72 = loc;
	_T73 = is_buildlib;
	_T74 = cd;
	_T75 = _T74->name;
	_T76 = _tag_fat(": no user definition",sizeof(char),21U);
	Cyc_Cifc_fail_merge(0,_T72,_T73,_T75,_T76);
	if (0) { goto _TL70;
	}else { goto _TL72;
	}
	_TL72: return;
	_TL70: if (0) { goto _TL6E;
	}else { goto _TL6F;
	}
	_TL6F: goto _TL6D;
	_TL6C: _TL6D: _T77 = cd;
	_T78 = _T77->impl;
	if (_T78 != 0) { goto _TL73;
	}
	_TL75: _T79 = loc;
	_T7A = is_buildlib;
	_T7B = cd;
	_T7C = _T7B->name;
	_T7D = _tag_fat(": no definition for system version",sizeof(char),
			35U);
	Cyc_Cifc_fail_merge(1,_T79,_T7A,_T7C,_T7D);
	if (1) { goto _TL77;
	}else { goto _TL79;
	}
	_TL79: return;
	_TL77: if (0) { goto _TL75;
	}else { goto _TL76;
	}
	_TL76: _T7E = c_decl;
	_T7F = user_decl;
	_T7E->r = _T7F->r;
	return;
	_TL73: { struct _tuple14 _T141;
	  _T81 = cd;
	  _T141.f0 = _T81->impl;
	  _T82 = ud;
	  _T141.f1 = _T82->impl;
	  _T80 = _T141;
	}{ struct _tuple14 _T141 = _T80;
	  struct Cyc_List_List * _T142;
	  long _T143;
	  struct Cyc_List_List * _T144;
	  struct Cyc_List_List * _T145;
	  struct Cyc_List_List * _T146;
	  void * _T147;
	  struct Cyc_List_List * _T148;
	  void * _T149;
	  void * _T14A;
	  _T83 = _T141.f0;
	  if (_T83 == 0) { goto _TL7A;
	  }
	  _T84 = _T141.f1;
	  if (_T84 == 0) { goto _TL7C;
	  }
	  _T85 = _T141.f0;
	  { struct Cyc_Absyn_AggrdeclImpl _T14B = *_T85;
	    _T86 = _T141.f0;
	    _T87 = &_T86->exist_vars;
	    _T14A = (struct Cyc_List_List * *)_T87;
	    _T88 = _T141.f0;
	    _T89 = &_T88->qual_bnd;
	    _T149 = (struct Cyc_List_List * *)_T89;
	    _T148 = _T14B.fields;
	    _T8A = _T141.f0;
	    _T8B = &_T8A->effconstr;
	    _T147 = (struct Cyc_List_List * *)_T8B;
	  }_T8C = _T141.f1;
	  { struct Cyc_Absyn_AggrdeclImpl _T14B = *_T8C;
	    _T146 = _T14B.exist_vars;
	    _T145 = _T14B.qual_bnd;
	    _T144 = _T14B.fields;
	    _T143 = _T14B.tagged;
	    _T142 = _T14B.effconstr;
	  }{ struct Cyc_List_List * * tvarsC = (struct Cyc_List_List * *)_T14A;
	    struct Cyc_List_List * * qbC = (struct Cyc_List_List * *)_T149;
	    struct Cyc_List_List * cfields = _T148;
	    struct Cyc_List_List * * effcC = (struct Cyc_List_List * *)_T147;
	    struct Cyc_List_List * tvars = _T146;
	    struct Cyc_List_List * qb = _T145;
	    struct Cyc_List_List * ufields = _T144;
	    long tagged = _T143;
	    struct Cyc_List_List * effc = _T142;
	    _T8D = tagged;
	    if (! _T8D) { goto _TL7E;
	    }
	    _TL80: _T8E = loc;
	    _T8F = is_buildlib;
	    _T90 = cd;
	    _T91 = _T90->name;
	    _T92 = _tag_fat(": user @tagged annotation not allowed (ignoring)",
			    sizeof(char),49U);
	    Cyc_Cifc_fail_merge(0,_T8E,_T8F,_T91,_T92);
	    if (0) { goto _TL82;
	    }else { goto _TL84;
	    }
	    _TL84: return;
	    _TL82: if (0) { goto _TL80;
	    }else { goto _TL81;
	    }
	    _TL81: goto _TL7F;
	    _TL7E: _TL7F: { struct Cyc_List_List * x = cfields;
	      _TL85: if (x != 0) { goto _TL86;
	      }else { goto _TL87;
	      }
	      _TL86: _T93 = x;
	      _T94 = _T93->hd;
	      { struct Cyc_Absyn_Aggrfield * cfield = (struct Cyc_Absyn_Aggrfield *)_T94;
		_T95 = ufields;
		_T96 = cfield;
		_T97 = _T96->name;
		{ struct Cyc_Absyn_Aggrfield * ufield = Cyc_Absyn_lookup_field(_T95,
									       _T97);
		  if (ufield == 0) { goto _TL88;
		  }
		  _T98 = loc;
		  _T99 = te;
		  _T9A = cfield;
		  _T9B = _T9A->type;
		  _T9C = ufield;
		  _T9D = _T9C->type;
		  _T9E = Cyc_Cifc_c_types_ok(_T98,_T99,_T9B,_T9D);
		  if (_T9E) { goto _TL8A;
		  }else { goto _TL8C;
		  }
		  _TL8C: _TL8D: _T9F = loc;
		  _TA0 = is_buildlib;
		  _TA1 = cd;
		  _TA2 = _TA1->name;
		  { struct Cyc_String_pa_PrintArg_struct _T14B;
		    _T14B.tag = 0;
		    _TA5 = ufield;
		    _TA6 = _TA5->type;
		    _T14B.f1 = Cyc_Absynpp_typ2string(_TA6);
		    _TA4 = _T14B;
		  }{ struct Cyc_String_pa_PrintArg_struct _T14B = _TA4;
		    { struct Cyc_String_pa_PrintArg_struct _T14C;
		      _T14C.tag = 0;
		      _TA8 = cfield;
		      _TA9 = _TA8->name;
		      _T14C.f1 = *_TA9;
		      _TA7 = _T14C;
		    }{ struct Cyc_String_pa_PrintArg_struct _T14C = _TA7;
		      { struct Cyc_String_pa_PrintArg_struct _T14D;
			_T14D.tag = 0;
			_TAB = cfield;
			_TAC = _TAB->type;
			_T14D.f1 = Cyc_Absynpp_typ2string(_TAC);
			_TAA = _T14D;
		      }{ struct Cyc_String_pa_PrintArg_struct _T14D = _TAA;
			void * _T14E[3];
			_T14E[0] = &_T14B;
			_T14E[1] = &_T14C;
			_T14E[2] = &_T14D;
			_TAD = _tag_fat(": type %s of user definition of field %s != %s",
					sizeof(char),47U);
			_TAE = _tag_fat(_T14E,sizeof(void *),3);
			_TA3 = Cyc_aprintf(_TAD,_TAE);
		      }
		    }
		  }Cyc_Cifc_fail_merge(0,_T9F,_TA0,_TA2,_TA3);
		  if (0) { goto _TL8F;
		  }else { goto _TL91;
		  }
		  _TL91: return;
		  _TL8F: if (0) { goto _TL8D;
		  }else { goto _TL8E;
		  }
		  _TL8E: goto _TL8B;
		  _TL8A: _TAF = ufield;
		  _TB0 = _TAF->width;
		  if (_TB0 == 0) { goto _TL92;
		  }
		  _TL94: _TB1 = loc;
		  _TB2 = is_buildlib;
		  _TB3 = cd;
		  _TB4 = _TB3->name;
		  { struct Cyc_String_pa_PrintArg_struct _T14B;
		    _T14B.tag = 0;
		    _TB7 = ufield;
		    _TB8 = _TB7->type;
		    _T14B.f1 = Cyc_Absynpp_typ2string(_TB8);
		    _TB6 = _T14B;
		  }{ struct Cyc_String_pa_PrintArg_struct _T14B = _TB6;
		    void * _T14C[1];
		    _T14C[0] = &_T14B;
		    _TB9 = _tag_fat(": ignoring width of user definition of field %s",
				    sizeof(char),48U);
		    _TBA = _tag_fat(_T14C,sizeof(void *),1);
		    _TB5 = Cyc_aprintf(_TB9,_TBA);
		  }Cyc_Cifc_fail_merge(1,_TB1,_TB2,_TB4,_TB5);
		  if (1) { goto _TL96;
		  }else { goto _TL98;
		  }
		  _TL98: return;
		  _TL96: if (0) { goto _TL94;
		  }else { goto _TL95;
		  }
		  _TL95: goto _TL93;
		  _TL92: _TL93: _TBB = ufield;
		  _TBC = _TBB->attributes;
		  if (_TBC == 0) { goto _TL99;
		  }
		  _TBD = cfield;
		  _TBE = cfield;
		  _TBF = _TBE->attributes;
		  _TC0 = ufield;
		  _TC1 = _TC0->attributes;
		  _TBD->attributes = Cyc_Atts_merge_attributes(_TBF,_TC1);
		  goto _TL9A;
		  _TL99: _TL9A: _TC2 = cfield;
		  _TC3 = ufield;
		  _TC2->type = _TC3->type;
		  _TC4 = cfield;
		  _TC5 = ufield;
		  _TC4->tq = _TC5->tq;
		  _TC6 = cfield;
		  _TC7 = ufield;
		  _TC6->requires_clause = _TC7->requires_clause;
		  _TL8B: goto _TL89;
		  _TL88: _TL89: _TC8 = x;
		  x = _TC8->tl;
		}
	      }goto _TL85;
	      _TL87: _TC9 = ud;
	      _TCA = _TC9->tvs;
	      if (_TCA == 0) { goto _TL9B;
	      }
	      _TCB = cd;
	      _TCC = ud;
	      _TCB->tvs = _TCC->tvs;
	      goto _TL9C;
	      _TL9B: _TL9C: _TCD = tvars;
	      _TCE = (unsigned int)_TCD;
	      if (! _TCE) { goto _TL9D;
	      }
	      _TCF = tvarsC;
	      *_TCF = tvars;
	      goto _TL9E;
	      _TL9D: _TL9E: _TD0 = effc;
	      _TD1 = (unsigned int)_TD0;
	      if (! _TD1) { goto _TL9F;
	      }
	      _TD2 = effcC;
	      *_TD2 = effc;
	      goto _TLA0;
	      _TL9F: _TLA0: _TD3 = qb;
	      _TD4 = (unsigned int)_TD3;
	      if (! _TD4) { goto _TLA1;
	      }
	      _TD5 = qbC;
	      *_TD5 = qb;
	      goto _TLA2;
	      _TLA1: _TLA2: x = ufields;
	      { long missing_fields = 0;
		_TLA3: if (x != 0) { goto _TLA4;
		}else { goto _TLA5;
		}
		_TLA4: _TD6 = cfields;
		_TD7 = x;
		_TD8 = _TD7->hd;
		_TD9 = (struct Cyc_Absyn_Aggrfield *)_TD8;
		_TDA = _TD9->name;
		{ struct Cyc_Absyn_Aggrfield * cfield = Cyc_Absyn_lookup_field(_TD6,
									       _TDA);
		  if (cfield != 0) { goto _TLA6;
		  }
		  missing_fields = 1;
		  _TLA8: _TDB = loc;
		  _TDC = is_buildlib;
		  _TDD = cd;
		  _TDE = _TDD->name;
		  { struct Cyc_String_pa_PrintArg_struct _T14B;
		    _T14B.tag = 0;
		    _TE1 = x;
		    _TE2 = _TE1->hd;
		    _TE3 = (struct Cyc_Absyn_Aggrfield *)_TE2;
		    _TE4 = _TE3->name;
		    _T14B.f1 = *_TE4;
		    _TE0 = _T14B;
		  }{ struct Cyc_String_pa_PrintArg_struct _T14B = _TE0;
		    void * _T14C[1];
		    _T14C[0] = &_T14B;
		    _TE5 = _tag_fat(": no definition of field %s in system version",
				    sizeof(char),46U);
		    _TE6 = _tag_fat(_T14C,sizeof(void *),1);
		    _TDF = Cyc_aprintf(_TE5,_TE6);
		  }Cyc_Cifc_fail_merge(1,_TDB,_TDC,_TDE,_TDF);
		  if (1) { goto _TLAA;
		  }else { goto _TLAC;
		  }
		  _TLAC: return;
		  _TLAA: if (0) { goto _TLA8;
		  }else { goto _TLA9;
		  }
		  _TLA9: goto _TLA7;
		  _TLA6: _TLA7: _TE7 = x;
		  x = _TE7->tl;
		}goto _TLA3;
		_TLA5: goto _LL12;
	      }
	    }
	  }_TL7C: goto _LL15;
	  _TL7A: _LL15: { struct Cyc_Core_Impossible_exn_struct * _T14B = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
	    _T14B->tag = Cyc_Core_Impossible;
	    _T14B->f1 = _tag_fat("Internal Error: NULL cases not possible",
				 sizeof(char),40U);
	    _TE8 = (struct Cyc_Core_Impossible_exn_struct *)_T14B;
	  }_TE9 = (void *)_TE8;
	  _throw(_TE9);
	  _LL12: ;
	}goto _LL0;
      }_TL63: goto _LLB;
    case 7: 
      _TEA = _T137.f1;
      _TEB = (int *)_TEA;
      _TEC = *_TEB;
      if (_TEC != 7) { goto _TLAD;
      }
      _TED = _T137.f0;
      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_TED;
	_T13B = _T141->f1;
      }_TEE = _T137.f1;
      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_TEE;
	_T13A = _T141->f1;
      }{ struct Cyc_Absyn_Enumdecl * cd = _T13B;
	struct Cyc_Absyn_Enumdecl * ud = _T13A;
	_TLAF: _TEF = loc;
	_TF0 = is_buildlib;
	_TF1 = cd;
	_TF2 = _TF1->name;
	_TF3 = _tag_fat(": enum merging not currently supported",sizeof(char),
			39U);
	Cyc_Cifc_fail_merge(0,_TEF,_TF0,_TF2,_TF3);
	if (0) { goto _TLB1;
	}else { goto _TLB3;
	}
	_TLB3: return;
	_TLB1: if (0) { goto _TLAF;
	}else { goto _TLB0;
	}
	_TLB0: ;
      }goto _TLAE;
      _TLAD: goto _LLB;
      _TLAE: ;
    case 8: 
      _TF4 = _T137.f1;
      _TF5 = (int *)_TF4;
      _TF6 = *_TF5;
      if (_TF6 != 8) { goto _TLB4;
      }
      _TF7 = _T137.f0;
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_TF7;
	_T139 = _T141->f1;
      }_TF8 = _T137.f1;
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T141 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_TF8;
	_T138 = _T141->f1;
      }{ struct Cyc_Absyn_Typedefdecl * cd = _T139;
	struct Cyc_Absyn_Typedefdecl * ud = _T138;
	_TF9 = ud;
	_TFA = _TF9->defn;
	if (_TFA != 0) { goto _TLB6;
	}
	_TLB8: _TFB = loc;
	_TFC = is_buildlib;
	_TFD = cd;
	_TFE = _TFD->name;
	_TFF = _tag_fat(": no user definition",sizeof(char),21U);
	Cyc_Cifc_fail_merge(0,_TFB,_TFC,_TFE,_TFF);
	if (0) { goto _TLBA;
	}else { goto _TLBC;
	}
	_TLBC: return;
	_TLBA: if (0) { goto _TLB8;
	}else { goto _TLB9;
	}
	_TLB9: goto _TLB7;
	_TLB6: _TLB7: _T100 = cd;
	_T101 = _T100->defn;
	if (_T101 != 0) { goto _TLBD;
	}
	_TLBF: _T102 = loc;
	_T103 = is_buildlib;
	_T104 = cd;
	_T105 = _T104->name;
	_T106 = _tag_fat(": no definition for system version",sizeof(char),
			 35U);
	Cyc_Cifc_fail_merge(1,_T102,_T103,_T105,_T106);
	if (1) { goto _TLC1;
	}else { goto _TLC3;
	}
	_TLC3: return;
	_TLC1: if (0) { goto _TLBF;
	}else { goto _TLC0;
	}
	_TLC0: _T107 = c_decl;
	_T108 = user_decl;
	_T107->r = _T108->r;
	return;
	_TLBD: _T109 = loc;
	_T10A = te;
	_T10B = cd;
	_T10C = _T10B->defn;
	_T10D = ud;
	_T10E = _T10D->defn;
	_T10F = Cyc_Cifc_c_types_ok(_T109,_T10A,_T10C,_T10E);
	if (_T10F) { goto _TLC4;
	}else { goto _TLC6;
	}
	_TLC6: _TLC7: _T110 = loc;
	_T111 = is_buildlib;
	_T112 = cd;
	_T113 = _T112->name;
	{ struct Cyc_String_pa_PrintArg_struct _T141;
	  _T141.tag = 0;
	  _T116 = ud;
	  _T117 = _T116->defn;
	  _T141.f1 = Cyc_Absynpp_typ2string(_T117);
	  _T115 = _T141;
	}{ struct Cyc_String_pa_PrintArg_struct _T141 = _T115;
	  { struct Cyc_String_pa_PrintArg_struct _T142;
	    _T142.tag = 0;
	    _T119 = cd;
	    _T11A = _T119->defn;
	    _T142.f1 = Cyc_Absynpp_typ2string(_T11A);
	    _T118 = _T142;
	  }{ struct Cyc_String_pa_PrintArg_struct _T142 = _T118;
	    void * _T143[2];
	    _T143[0] = &_T141;
	    _T143[1] = &_T142;
	    _T11B = _tag_fat(": type definition %s of user definition != %s",
			     sizeof(char),46U);
	    _T11C = _tag_fat(_T143,sizeof(void *),2);
	    _T114 = Cyc_aprintf(_T11B,_T11C);
	  }
	}Cyc_Cifc_fail_merge(0,_T110,_T111,_T113,_T114);
	if (0) { goto _TLC9;
	}else { goto _TLCB;
	}
	_TLCB: return;
	_TLC9: if (0) { goto _TLC7;
	}else { goto _TLC8;
	}
	_TLC8: goto _TLC5;
	_TLC4: _T11D = cd;
	_T11E = ud;
	_T11D->tvs = _T11E->tvs;
	_T11F = cd;
	_T120 = ud;
	_T11F->defn = _T120->defn;
	_T121 = cd;
	_T122 = ud;
	_T121->tq = _T122->tq;
	_T123 = ud;
	_T124 = _T123->atts;
	if (_T124 == 0) { goto _TLCC;
	}
	_T125 = cd;
	_T126 = cd;
	_T127 = _T126->atts;
	_T128 = ud;
	_T129 = _T128->atts;
	_T125->atts = Cyc_Atts_merge_attributes(_T127,_T129);
	goto _TLCD;
	_TLCC: _TLCD: _TLC5: goto _LL0;
      }_TLB4: goto _LLB;
    default: 
      _LLB: _T12A = is_buildlib;
      if (! _T12A) { goto _TLCE;
      }
      { struct Cyc_String_pa_PrintArg_struct _T141;
	_T141.tag = 0;
	{ struct Cyc_Absyn_Decl * _T142[1];
	  _T142[0] = user_decl;
	  _T12D = _tag_fat(_T142,sizeof(struct Cyc_Absyn_Decl *),1);
	  _T12C = Cyc_List_list(_T12D);
	}_T141.f1 = Cyc_Absynpp_decllist2string(_T12C);
	_T12B = _T141;
      }{ struct Cyc_String_pa_PrintArg_struct _T141 = _T12B;
	void * _T142[1];
	_T142[0] = &_T141;
	_T12E = Cyc_stderr;
	_T12F = _tag_fat("Error in .cys file: bad (or unsupported) user-defined type %s\n",
			 sizeof(char),63U);
	_T130 = _tag_fat(_T142,sizeof(void *),1);
	Cyc_fprintf(_T12E,_T12F,_T130);
      }goto _TLCF;
      _TLCE: { struct Cyc_Warn_String_Warn_Warg_struct _T141;
	_T141.tag = 0;
	_T141.f1 = _tag_fat("bad (or unsupported) user-defined type %s",sizeof(char),
			    42U);
	_T131 = _T141;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T141 = _T131;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T142;
	  _T142.tag = 0;
	  { struct Cyc_Absyn_Decl * _T143[1];
	    _T143[0] = user_decl;
	    _T134 = _tag_fat(_T143,sizeof(struct Cyc_Absyn_Decl *),1);
	    _T133 = Cyc_List_list(_T134);
	  }_T142.f1 = Cyc_Absynpp_decllist2string(_T133);
	  _T132 = _T142;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T142 = _T132;
	  void * _T143[2];
	  _T143[0] = &_T141;
	  _T143[1] = &_T142;
	  _T135 = loc;
	  _T136 = _tag_fat(_T143,sizeof(void *),2);
	  Cyc_Warn_err2(_T135,_T136);
	}
      }_TLCF: return;
    }
    _LL0: ;
  }
}
static long Cyc_Cifc_contains_type_vars(struct Cyc_Absyn_Decl * ud) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Aggrdecl * _T3;
  struct Cyc_List_List * _T4;
  int _T5;
  _T0 = ud;
  { void * _T6 = _T0->r;
    struct Cyc_Absyn_Aggrdecl * _T7;
    _T1 = (int *)_T6;
    _T2 = *_T1;
    if (_T2 != 5) { goto _TLD0;
    }
    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T8 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T6;
      _T7 = _T8->f1;
    }{ struct Cyc_Absyn_Aggrdecl * ad = _T7;
      _T3 = ad;
      _T4 = _T3->tvs;
      _T5 = _T4 != 0;
      return _T5;
    }_TLD0: goto _LL0;
    _LL0: ;
  }return 0;
}
static struct Cyc_Absyn_Decl * Cyc_Cifc_make_abstract_decl(struct Cyc_Absyn_Decl * ud) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Aggrdecl * _T3;
  struct Cyc_Absyn_Aggrdecl * _T4;
  struct Cyc_Absyn_Aggrdecl * _T5;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T6;
  void * _T7;
  struct Cyc_Absyn_Decl * _T8;
  unsigned int _T9;
  struct Cyc_Absyn_Decl * _TA;
  int (* _TB)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TC)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  _T0 = ud;
  { void * _TF = _T0->r;
    struct Cyc_Absyn_Aggrdecl * _T10;
    _T1 = (int *)_TF;
    _T2 = *_T1;
    if (_T2 != 5) { goto _TLD2;
    }
    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T11 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_TF;
      _T10 = _T11->f1;
    }{ struct Cyc_Absyn_Aggrdecl * ad = _T10;
      struct Cyc_Absyn_Aggrdecl * absad;
      absad = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
      _T3 = absad;
      _T4 = ad;
      *_T3 = *_T4;
      _T5 = absad;
      _T5->impl = 0;
      { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T11 = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
	_T11->tag = 5;
	_T11->f1 = absad;
	_T6 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T11;
      }_T7 = (void *)_T6;
      _T8 = ud;
      _T9 = _T8->loc;
      { struct Cyc_Absyn_Decl * nd = Cyc_Absyn_new_decl(_T7,_T9);
	_TA = nd;
	return _TA;
      }
    }_TLD2: _TC = Cyc_Warn_impos;
    { int (* _T11)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							       struct _fat_ptr))_TC;
      _TB = _T11;
    }_TD = _tag_fat("Only aggrdecls",sizeof(char),15U);
    _TE = _tag_fat(0U,sizeof(void *),0);
    _TB(_TD,_TE);
    ;
  }
}
static long Cyc_Cifc_kindbound_subsumed(void * kb1,void * kb2) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  long _T8;
  void * _T9;
  struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _TA;
  struct Cyc_Core_Opt * _TB;
  void * _TC;
  struct Cyc_Core_Opt * _TD;
  void * _TE;
  void * _TF;
  int * _T10;
  int _T11;
  void * _T12;
  struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T13;
  struct Cyc_Core_Opt * _T14;
  void * _T15;
  struct Cyc_Core_Opt * _T16;
  void * _T17;
  long _T18;
  void * _T19;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T1A;
  struct Cyc_Core_Opt * _T1B;
  void * _T1C;
  struct Cyc_Core_Opt * _T1D;
  void * _T1E;
  void * _T1F;
  int * _T20;
  int _T21;
  void * _T22;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T23;
  struct Cyc_Core_Opt * _T24;
  void * _T25;
  struct Cyc_Core_Opt * _T26;
  void * _T27;
  int _T28;
  long _T29;
  void * _T2A;
  void * _T2B;
  int * _T2C;
  int _T2D;
  void * _T2E;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T2F;
  struct Cyc_Core_Opt * _T30;
  void * _T31;
  long _T32;
  struct Cyc_Absyn_Kind * _T33;
  void * _T34;
  _T0 = kb1;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = kb1;
    { struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T35 = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T3;
      _T34 = _T35->f1;
    }{ struct Cyc_Absyn_Kind * k1 = _T34;
      struct Cyc_Absyn_Kind * _T35;
      _T4 = kb2;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      if (_T6 != 0) { goto _TLD5;
      }
      _T7 = kb2;
      { struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T36 = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T7;
	_T35 = _T36->f1;
      }{ struct Cyc_Absyn_Kind * k2 = _T35;
	_T8 = Cyc_Kinds_kind_eq(k1,k2);
	return _T8;
      }_TLD5: return 0;
      ;
    }
  case 1: 
    _T9 = kb1;
    _TA = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T9;
    _TB = _TA->f1;
    if (_TB == 0) { goto _TLD7;
    }
    _TC = kb1;
    { struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T35 = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_TC;
      _TD = _T35->f1;
      { struct Cyc_Core_Opt _T36 = *_TD;
	_TE = _T36.v;
	_T34 = (void *)_TE;
      }
    }{ void * kbb1 = _T34;
      void * _T35;
      _TF = kb2;
      _T10 = (int *)_TF;
      _T11 = *_T10;
      if (_T11 != 1) { goto _TLD9;
      }
      _T12 = kb2;
      _T13 = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T12;
      _T14 = _T13->f1;
      if (_T14 == 0) { goto _TLDB;
      }
      _T15 = kb2;
      { struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T36 = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T15;
	_T16 = _T36->f1;
	{ struct Cyc_Core_Opt _T37 = *_T16;
	  _T17 = _T37.v;
	  _T35 = (void *)_T17;
	}
      }{ void * kbb2 = _T35;
	_T18 = Cyc_Cifc_kindbound_subsumed(kbb1,kbb2);
	return _T18;
      }_TLDB: goto _LL13;
      _TLD9: _LL13: return 1;
      ;
    }goto _TLD8;
    _TLD7: return 1;
    _TLD8: ;
  default: 
    _T19 = kb1;
    _T1A = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T19;
    _T1B = _T1A->f1;
    if (_T1B == 0) { goto _TLDD;
    }
    _T1C = kb1;
    { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T35 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T1C;
      _T1D = _T35->f1;
      { struct Cyc_Core_Opt _T36 = *_T1D;
	_T1E = _T36.v;
	_T34 = (void *)_T1E;
      }_T33 = _T35->f2;
    }{ void * kbb1 = _T34;
      struct Cyc_Absyn_Kind * k1 = _T33;
      struct Cyc_Absyn_Kind * _T35;
      void * _T36;
      _T1F = kb2;
      _T20 = (int *)_T1F;
      _T21 = *_T20;
      if (_T21 != 2) { goto _TLDF;
      }
      _T22 = kb2;
      _T23 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T22;
      _T24 = _T23->f1;
      if (_T24 == 0) { goto _TLE1;
      }
      _T25 = kb2;
      { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T37 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T25;
	_T26 = _T37->f1;
	{ struct Cyc_Core_Opt _T38 = *_T26;
	  _T27 = _T38.v;
	  _T36 = (void *)_T27;
	}_T35 = _T37->f2;
      }{ void * kbb2 = _T36;
	struct Cyc_Absyn_Kind * k2 = _T35;
	_T29 = Cyc_Kinds_kind_eq(k1,k2);
	if (! _T29) { goto _TLE3;
	}
	_T28 = Cyc_Cifc_kindbound_subsumed(kbb1,kbb2);
	goto _TLE4;
	_TLE3: _T28 = 0;
	_TLE4: return _T28;
      }_TLE1: goto _LL18;
      _TLDF: _LL18: return 0;
      ;
    }goto _TLDE;
    _TLDD: _T2A = kb1;
    { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T35 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T2A;
      _T33 = _T35->f2;
    }{ struct Cyc_Absyn_Kind * k1 = _T33;
      struct Cyc_Absyn_Kind * _T35;
      _T2B = kb2;
      _T2C = (int *)_T2B;
      _T2D = *_T2C;
      if (_T2D != 2) { goto _TLE5;
      }
      _T2E = kb2;
      _T2F = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T2E;
      _T30 = _T2F->f1;
      if (_T30 != 0) { goto _TLE7;
      }
      _T31 = kb2;
      { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T36 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T31;
	_T35 = _T36->f2;
      }{ struct Cyc_Absyn_Kind * k2 = _T35;
	_T32 = Cyc_Kinds_kind_eq(k1,k2);
	return _T32;
      }_TLE7: goto _LL1D;
      _TLE5: _LL1D: return 0;
      ;
    }_TLDE: ;
  }
  ;
}
static long Cyc_Cifc_find_and_remove(struct Cyc_List_List * * lst,void * kind) {
  struct Cyc_List_List * * _T0;
  struct Cyc_List_List * _T1;
  unsigned int _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  struct Cyc_Absyn_Tvar * _T8;
  void * _T9;
  void * _TA;
  long _TB;
  struct Cyc_List_List * _TC;
  unsigned int _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_String_pa_PrintArg_struct _T13;
  struct Cyc_String_pa_PrintArg_struct _T14;
  int (* _T15)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T16)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  struct Cyc_List_List * _T19;
  _T0 = lst;
  { struct Cyc_List_List * cur = *_T0;
    struct Cyc_List_List * prev = 0;
    _TLE9: _T1 = cur;
    _T2 = (unsigned int)_T1;
    if (_T2) { goto _TLEA;
    }else { goto _TLEB;
    }
    _TLEA: _T3 = cur;
    { void * t = _T3->hd;
      { struct Cyc_Absyn_Tvar * _T1A;
	_T4 = t;
	_T5 = (int *)_T4;
	_T6 = *_T5;
	if (_T6 != 2) { goto _TLEC;
	}
	_T7 = t;
	{ struct Cyc_Absyn_VarType_Absyn_Type_struct * _T1B = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T7;
	  _T1A = _T1B->f1;
	}{ struct Cyc_Absyn_Tvar * tv = _T1A;
	  _T8 = tv;
	  _T9 = _T8->kind;
	  _TA = kind;
	  _TB = Cyc_Cifc_kindbound_subsumed(_T9,_TA);
	  if (! _TB) { goto _TLEE;
	  }
	  _TC = prev;
	  _TD = (unsigned int)_TC;
	  if (! _TD) { goto _TLF0;
	  }
	  _TE = prev;
	  _TF = cur;
	  _TE->tl = _TF->tl;
	  goto _TLF1;
	  _TLF0: _T10 = lst;
	  _T11 = cur;
	  *_T10 = _T11->tl;
	  _TLF1: _T12 = cur;
	  _T12->tl = 0;
	  return 1;
	  _TLEE: goto _LL0;
	}_TLEC: { struct Cyc_String_pa_PrintArg_struct _T1B;
	  _T1B.tag = 0;
	  _T1B.f1 = Cyc_Absynpp_typ2string(t);
	  _T13 = _T1B;
	}{ struct Cyc_String_pa_PrintArg_struct _T1B = _T13;
	  { struct Cyc_String_pa_PrintArg_struct _T1C;
	    _T1C.tag = 0;
	    _T1C.f1 = Cyc_Cifc_get_type_kind(t);
	    _T14 = _T1C;
	  }{ struct Cyc_String_pa_PrintArg_struct _T1C = _T14;
	    void * _T1D[2];
	    _T1D[0] = &_T1B;
	    _T1D[1] = &_T1C;
	    _T16 = Cyc_Warn_impos;
	    { int (* _T1E)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_T16;
	      _T15 = _T1E;
	    }_T17 = _tag_fat("expects a VarType list only -- got %s(%s)",
			     sizeof(char),42U);
	    _T18 = _tag_fat(_T1D,sizeof(void *),2);
	    _T15(_T17,_T18);
	  }
	}_LL0: ;
      }prev = cur;
      _T19 = cur;
      cur = _T19->tl;
    }goto _TLE9;
    _TLEB: return 0;
  }
}
static struct Cyc_List_List * Cyc_Cifc_get_tvar_difference(struct Cyc_List_List * tvs,
							   struct Cyc_List_List * remove) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * * _T4;
  struct Cyc_Absyn_Tvar * _T5;
  void * _T6;
  long _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * ret = 0;
  _TLF2: _T0 = tvs;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TLF3;
  }else { goto _TLF4;
  }
  _TLF3: _T2 = tvs;
  _T3 = _T2->hd;
  { struct Cyc_Absyn_Tvar * can = (struct Cyc_Absyn_Tvar *)_T3;
    _T4 = &remove;
    _T5 = can;
    _T6 = _T5->kind;
    _T7 = Cyc_Cifc_find_and_remove(_T4,_T6);
    if (_T7) { goto _TLF5;
    }else { goto _TLF7;
    }
    _TLF7: { struct Cyc_List_List * _TB = _cycalloc(sizeof(struct Cyc_List_List));
      _TB->hd = can;
      _TB->tl = ret;
      _T8 = (struct Cyc_List_List *)_TB;
    }ret = _T8;
    goto _TLF6;
    _TLF5: _TLF6: _T9 = tvs;
    tvs = _T9->tl;
  }goto _TLF2;
  _TLF4: _TA = ret;
  return _TA;
}
static char Cyc_Cifc_Contains_nontvar[17U] = "Contains_nontvar";
 struct Cyc_Cifc_Contains_nontvar_exn_struct {
  char * tag;
};
static struct Cyc_Cifc_Contains_nontvar_exn_struct Cyc_Cifc_Contains_nontvar_val = {Cyc_Cifc_Contains_nontvar};
static struct Cyc_List_List * Cyc_Cifc_extract_tvars(struct Cyc_List_List * ts) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  int * _T4;
  int _T5;
  void * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Cifc_Contains_nontvar_exn_struct * _T8;
  struct Cyc_Cifc_Contains_nontvar_exn_struct * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * res = 0;
  _TLF8: _T0 = ts;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TLF9;
  }else { goto _TLFA;
  }
  _TLF9: _T2 = ts;
  { void * t = _T2->hd;
    { struct Cyc_Absyn_Tvar * _TC;
      _T3 = t;
      _T4 = (int *)_T3;
      _T5 = *_T4;
      if (_T5 != 2) { goto _TLFB;
      }
      _T6 = t;
      { struct Cyc_Absyn_VarType_Absyn_Type_struct * _TD = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T6;
	_TC = _TD->f1;
      }{ struct Cyc_Absyn_Tvar * tv = _TC;
	{ struct Cyc_List_List * _TD = _cycalloc(sizeof(struct Cyc_List_List));
	  _TD->hd = tv;
	  _TD->tl = res;
	  _T7 = (struct Cyc_List_List *)_TD;
	}res = _T7;
	goto _LL0;
      }_TLFB: _T8 = &Cyc_Cifc_Contains_nontvar_val;
      _T9 = (struct Cyc_Cifc_Contains_nontvar_exn_struct *)_T8;
      _throw(_T9);
      _LL0: ;
    }_TA = ts;
    ts = _TA->tl;
  }goto _TLF8;
  _TLFA: _TB = res;
  return _TB;
}
static void * Cyc_Cifc_instantiate_tvar(unsigned int loc,struct Cyc_Absyn_Tvar * tv) {
  struct Cyc_Absyn_Tvar * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Kind * _T3;
  enum Cyc_Absyn_KindQual _T4;
  int _T5;
  struct Cyc_Absyn_Kind * _T6;
  enum Cyc_Absyn_KindQual _T7;
  int _T8;
  void * _T9;
  struct Cyc_Absyn_Tqual _TA;
  void * _TB;
  struct Cyc_Absyn_Kind * _TC;
  enum Cyc_Absyn_KindQual _TD;
  int _TE;
  void * _TF;
  void * _T10;
  struct Cyc_Absyn_Tqual _T11;
  void * _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  struct Cyc_Warn_String_Warn_Warg_struct _T14;
  unsigned int _T15;
  struct _fat_ptr _T16;
  void * _T17;
  _T0 = tv;
  { void * _T18 = _T0->kind;
    struct Cyc_Absyn_Kind * _T19;
    _T1 = (int *)_T18;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      { struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T1A = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T18;
	_T19 = _T1A->f1;
      }{ struct Cyc_Absyn_Kind * k = _T19;
	_T19 = k;
	goto _LL4;
      }
    case 2: 
      { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T1A = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T18;
	_T19 = _T1A->f2;
      }_LL4: { struct Cyc_Absyn_Kind * k = _T19;
	_T3 = k;
	_T4 = _T3->kind;
	_T5 = (int)_T4;
	if (_T5 == 2) { goto _TL100;
	}else { goto _TL101;
	}
	_TL101: _T6 = k;
	_T7 = _T6->kind;
	_T8 = (int)_T7;
	if (_T8 == 0) { goto _TL100;
	}else { goto _TLFE;
	}
	_TL100: _T9 = Cyc_Absyn_void_type;
	_TA = Cyc_Absyn_empty_tqual(loc);
	_TB = Cyc_Absyn_cstar_type(_T9,_TA);
	return _TB;
	_TLFE: _TC = k;
	_TD = _TC->kind;
	_TE = (int)_TD;
	if (_TE != 3) { goto _TL102;
	}
	_TF = Cyc_Absyn_heap_rgn_type;
	return _TF;
	_TL102: goto _LL0;
      }
    default: 
      _T10 = Cyc_Absyn_void_type;
      _T11 = Cyc_Absyn_empty_tqual(loc);
      _T12 = Cyc_Absyn_cstar_type(_T10,_T11);
      return _T12;
    }
    _LL0: ;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T18;
    _T18.tag = 0;
    _T18.f1 = _tag_fat("Unable to instantiate tvar ",sizeof(char),28U);
    _T13 = _T18;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T18 = _T13;
    { struct Cyc_Warn_String_Warn_Warg_struct _T19;
      _T19.tag = 0;
      _T19.f1 = Cyc_Absynpp_tvar2string(tv);
      _T14 = _T19;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T19 = _T14;
      void * _T1A[2];
      _T1A[0] = &_T18;
      _T1A[1] = &_T19;
      _T15 = loc;
      _T16 = _tag_fat(_T1A,sizeof(void *),2);
      Cyc_Warn_err2(_T15,_T16);
    }
  }_T17 = Cyc_Absyn_void_type;
  return _T17;
}
 struct _tuple15 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
};
static struct _tuple15 * Cyc_Cifc_update_tvars(struct Cyc_Tcenv_Tenv * te,
					       struct Cyc_List_List * tv_ovrs,
					       void * t,struct Cyc_Absyn_Decl * enclosing_decl,
					       long instantiate) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6;
  struct Cyc_List_List * * _T7;
  void * _T8;
  int * _T9;
  int _TA;
  void * _TB;
  union Cyc_Absyn_AggrInfo _TC;
  struct _union_AggrInfo_KnownAggr _TD;
  unsigned int _TE;
  union Cyc_Absyn_AggrInfo _TF;
  struct _union_AggrInfo_KnownAggr _T10;
  struct Cyc_Absyn_Aggrdecl * * _T11;
  struct Cyc_Absyn_Aggrdecl * _T12;
  struct Cyc_Absyn_Decl * _T13;
  unsigned int _T14;
  struct Cyc_Absyn_Decl * _T15;
  int * _T16;
  int _T17;
  struct _handler_cons * _T18;
  int _T19;
  struct Cyc_List_List * * _T1A;
  struct Cyc_List_List * _T1B;
  void * _T1C;
  struct Cyc_Cifc_Contains_nontvar_exn_struct * _T1D;
  char * _T1E;
  char * _T1F;
  struct Cyc_List_List * * _T20;
  struct Cyc_Absyn_Aggrdecl * _T21;
  struct Cyc_List_List * _T22;
  unsigned int _T23;
  struct Cyc_List_List * _T24;
  void * _T25;
  struct Cyc_List_List * * _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_Absyn_VarType_Absyn_Type_struct * _T28;
  struct Cyc_List_List * * _T29;
  long _T2A;
  long _T2B;
  struct Cyc_List_List * * _T2C;
  struct Cyc_List_List * _T2D;
  struct Cyc_Absyn_Decl * _T2E;
  unsigned int _T2F;
  struct Cyc_Absyn_Tvar * _T30;
  struct Cyc_List_List * * _T31;
  struct Cyc_Absyn_Tvar * _T32;
  struct Cyc_Absyn_Tvar * _T33;
  struct _fat_ptr * _T34;
  struct _fat_ptr _T35;
  struct Cyc_Int_pa_PrintArg_struct _T36;
  int _T37;
  struct _fat_ptr _T38;
  struct _fat_ptr _T39;
  struct Cyc_Absyn_Tvar * _T3A;
  struct Cyc_List_List * _T3B;
  struct Cyc_List_List * * _T3C;
  struct Cyc_List_List * _T3D;
  struct Cyc_Absyn_VarType_Absyn_Type_struct * _T3E;
  struct Cyc_List_List * * _T3F;
  struct Cyc_List_List * _T40;
  struct Cyc_List_List * * _T41;
  struct Cyc_List_List * * _T42;
  struct Cyc_List_List * _T43;
  struct _tuple15 * _T44;
  long _T45;
  long _T46;
  struct _tuple15 * _T47;
  int (* _T48)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T49)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T4A;
  struct _fat_ptr _T4B;
  union Cyc_Absyn_AggrInfo _T4C;
  struct _union_AggrInfo_UnknownAggr _T4D;
  void * _T4E;
  void * _T4F;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T50;
  struct Cyc_Absyn_PtrInfo * _T51;
  struct Cyc_Tcenv_Tenv * _T52;
  struct Cyc_List_List * _T53;
  struct Cyc_Absyn_PtrInfo * _T54;
  void * _T55;
  struct Cyc_Absyn_Decl * _T56;
  long _T57;
  struct _tuple15 * _T58;
  void * _T59;
  long _T5A;
  struct Cyc_Tcenv_Tenv * _T5B;
  struct Cyc_List_List * _T5C;
  struct Cyc_Absyn_FnInfo _T5D;
  void * _T5E;
  struct Cyc_Absyn_Decl * _T5F;
  long _T60;
  struct Cyc_Absyn_FnInfo _T61;
  struct Cyc_List_List * _T62;
  unsigned int _T63;
  struct Cyc_List_List * _T64;
  void * _T65;
  struct _tuple15 * _T66;
  unsigned int _T67;
  struct _tuple15 * _T68;
  struct _tuple15 _T69;
  struct Cyc_List_List * _T6A;
  unsigned int _T6B;
  struct _tuple15 * _T6C;
  struct _tuple15 _T6D;
  struct Cyc_List_List * _T6E;
  struct Cyc_List_List * _T6F;
  struct _tuple15 * _T70;
  struct _tuple15 _T71;
  struct Cyc_List_List * _T72;
  unsigned int _T73;
  struct _tuple15 * _T74;
  struct _tuple15 _T75;
  struct Cyc_List_List * _T76;
  struct Cyc_List_List * _T77;
  struct Cyc_List_List * _T78;
  struct Cyc_List_List * _T79;
  unsigned int _T7A;
  struct Cyc_List_List * _T7B;
  unsigned int _T7C;
  struct _tuple15 * _T7D;
  void * _T7E;
  void * _T7F;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T80;
  struct Cyc_Absyn_ArrayInfo * _T81;
  struct Cyc_Tcenv_Tenv * _T82;
  struct Cyc_List_List * _T83;
  struct Cyc_Absyn_ArrayInfo * _T84;
  void * _T85;
  struct Cyc_Absyn_Decl * _T86;
  long _T87;
  struct _tuple15 * _T88;
  { struct Cyc_Absyn_FnInfo _T89;
    void * _T8A;
    void * _T8B;
    _T0 = t;
    _T1 = (int *)_T0;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      _T3 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T8C = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3;
	_T4 = _T8C->f1;
	_T8B = (void *)_T4;
	_T5 = t;
	_T6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5;
	_T7 = &_T6->f2;
	_T8A = (struct Cyc_List_List * *)_T7;
      }{ void * tc = _T8B;
	struct Cyc_List_List * * ts = (struct Cyc_List_List * *)_T8A;
	{ union Cyc_Absyn_AggrInfo _T8C;
	  _T8 = tc;
	  _T9 = (int *)_T8;
	  _TA = *_T9;
	  if (_TA != 24) { goto _TL105;
	  }
	  _TB = tc;
	  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T8D = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TB;
	    _T8C = _T8D->f1;
	  }{ union Cyc_Absyn_AggrInfo ai = _T8C;
	    struct _tuple2 _T8D;
	    struct Cyc_Absyn_Aggrdecl * _T8E;
	    _TC = ai;
	    _TD = _TC.KnownAggr;
	    _TE = _TD.tag;
	    if (_TE != 2) { goto _TL107;
	    }
	    _TF = ai;
	    _T10 = _TF.KnownAggr;
	    _T11 = _T10.val;
	    { struct Cyc_Absyn_Aggrdecl * _T8F = *_T11;
	      _T8E = _T8F;
	    }{ struct Cyc_Absyn_Aggrdecl * ad = _T8E;
	      _T12 = ad;
	      { struct _tuple0 * _T8F = _T12->name;
		struct _fat_ptr * _T90;
		union Cyc_Absyn_Nmspace _T91;
		{ struct _tuple0 _T92 = *_T8F;
		  _T91 = _T92.f0;
		  _T90 = _T92.f1;
		}{ union Cyc_Absyn_Nmspace ns = _T91;
		  struct _fat_ptr * name = _T90;
		  struct Cyc_Absyn_Decl * ovd = Cyc_Absyn_lookup_decl(tv_ovrs,
								      name);
		  _T13 = ovd;
		  _T14 = (unsigned int)_T13;
		  if (! _T14) { goto _TL109;
		  }
		  _T15 = ovd;
		  { void * _T92 = _T15->r;
		    struct Cyc_Absyn_Aggrdecl * _T93;
		    _T16 = (int *)_T92;
		    _T17 = *_T16;
		    if (_T17 != 5) { goto _TL10B;
		    }
		    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T94 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T92;
		      _T93 = _T94->f1;
		    }{ struct Cyc_Absyn_Aggrdecl * ad = _T93;
		      struct Cyc_List_List * removed_tvars = 0;
		      { struct _handler_cons _T94;
			_T18 = &_T94;
			_push_handler(_T18);
			{ int _T95 = 0;
			  _T19 = setjmp(_T94.handler);
			  if (! _T19) { goto _TL10D;
			  }
			  _T95 = 1;
			  goto _TL10E;
			  _TL10D: _TL10E: if (_T95) { goto _TL10F;
			  }else { goto _TL111;
			  }
			  _TL111: _T1A = ts;
			  _T1B = *_T1A;
			  removed_tvars = Cyc_Cifc_extract_tvars(_T1B);
			  _pop_handler();
			  goto _TL110;
			  _TL10F: _T1C = Cyc_Core_get_exn_thrown();
			  { void * _T96 = (void *)_T1C;
			    void * _T97;
			    _T1D = (struct Cyc_Cifc_Contains_nontvar_exn_struct *)_T96;
			    _T1E = _T1D->tag;
			    _T1F = Cyc_Cifc_Contains_nontvar;
			    if (_T1E != _T1F) { goto _TL112;
			    }
			    return 0;
			    _TL112: _T97 = _T96;
			    { void * exn = _T97;
			      _rethrow(exn);
			    };
			  }_TL110: ;
			}
		      }_T20 = ts;
		      *_T20 = 0;
		      { struct Cyc_List_List * added_tvars = 0;
			_T21 = ad;
			{ struct Cyc_List_List * tvs = _T21->tvs;
			  _TL114: _T22 = tvs;
			  _T23 = (unsigned int)_T22;
			  if (_T23) { goto _TL115;
			  }else { goto _TL116;
			  }
			  _TL115: _T24 = tvs;
			  _T25 = _T24->hd;
			  { struct Cyc_Absyn_Tvar * tv = (struct Cyc_Absyn_Tvar *)_T25;
			    if (enclosing_decl != ovd) { goto _TL117;
			    }
			    _T26 = ts;
			    { struct Cyc_List_List * _T94 = _cycalloc(sizeof(struct Cyc_List_List));
			      { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T95 = _cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));
				_T95->tag = 2;
				_T95->f1 = tv;
				_T28 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T95;
			      }_T94->hd = (void *)_T28;
			      _T29 = ts;
			      _T94->tl = *_T29;
			      _T27 = (struct Cyc_List_List *)_T94;
			    }*_T26 = _T27;
			    goto _TL118;
			    _TL117: _T2A = instantiate;
			    if (_T2A) { goto _TL11B;
			    }else { goto _TL11C;
			    }
			    _TL11C: _T2B = Cyc_Cifc_opt_inst_tvar;
			    if (_T2B) { goto _TL11B;
			    }else { goto _TL119;
			    }
			    _TL11B: _T2C = ts;
			    { struct Cyc_List_List * _T94 = _cycalloc(sizeof(struct Cyc_List_List));
			      _T2E = enclosing_decl;
			      _T2F = _T2E->loc;
			      _T30 = tv;
			      _T94->hd = Cyc_Cifc_instantiate_tvar(_T2F,_T30);
			      _T31 = ts;
			      _T94->tl = *_T31;
			      _T2D = (struct Cyc_List_List *)_T94;
			    }*_T2C = _T2D;
			    goto _TL11A;
			    _TL119: { struct Cyc_Absyn_Tvar * tvcpy;
			      tvcpy = _cycalloc(sizeof(struct Cyc_Absyn_Tvar));
			      _T32 = tvcpy;
			      _T33 = tv;
			      *_T32 = *_T33;
			      { struct _fat_ptr * tvn;
				tvn = _cycalloc(sizeof(struct _fat_ptr));
				_T34 = tvn;
				{ struct Cyc_Int_pa_PrintArg_struct _T94;
				  _T94.tag = 1;
				  Cyc_Cifc_glob_tvar_id = Cyc_Cifc_glob_tvar_id + 1;
				  _T37 = Cyc_Cifc_glob_tvar_id;
				  _T94.f1 = (unsigned long)_T37;
				  _T36 = _T94;
				}{ struct Cyc_Int_pa_PrintArg_struct _T94 = _T36;
				  void * _T95[1];
				  _T95[0] = &_T94;
				  _T38 = _tag_fat("`ovr_%d",sizeof(char),
						  8U);
				  _T39 = _tag_fat(_T95,sizeof(void *),1);
				  _T35 = Cyc_aprintf(_T38,_T39);
				}*_T34 = _T35;
				_T3A = tvcpy;
				_T3A->name = tvn;
				{ struct Cyc_List_List * _T94 = _cycalloc(sizeof(struct Cyc_List_List));
				  _T94->hd = tvcpy;
				  _T94->tl = added_tvars;
				  _T3B = (struct Cyc_List_List *)_T94;
				}added_tvars = _T3B;
				_T3C = ts;
				{ struct Cyc_List_List * _T94 = _cycalloc(sizeof(struct Cyc_List_List));
				  { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T95 = _cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));
				    _T95->tag = 2;
				    _T95->f1 = tvcpy;
				    _T3E = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T95;
				  }_T94->hd = (void *)_T3E;
				  _T3F = ts;
				  _T94->tl = *_T3F;
				  _T3D = (struct Cyc_List_List *)_T94;
				}*_T3C = _T3D;
			      }
			    }_TL11A: _TL118: _T40 = tvs;
			    tvs = _T40->tl;
			  }goto _TL114;
			  _TL116: _T41 = ts;
			  _T42 = ts;
			  _T43 = *_T42;
			  *_T41 = Cyc_List_imp_rev(_T43);
			  if (enclosing_decl == ovd) { goto _TL11F;
			  }else { goto _TL121;
			  }
			  _TL121: _T45 = Cyc_Cifc_opt_inst_tvar;
			  if (_T45) { goto _TL11F;
			  }else { goto _TL120;
			  }
			  _TL120: _T46 = instantiate;
			  if (_T46) { goto _TL11F;
			  }else { goto _TL11D;
			  }
			  _TL11F: _T44 = 0;
			  goto _TL11E;
			  _TL11D: { struct _tuple15 * _T94 = _cycalloc(sizeof(struct _tuple15));
			    _T94->f0 = added_tvars;
			    _T94->f1 = removed_tvars;
			    _T47 = (struct _tuple15 *)_T94;
			  }_T44 = _T47;
			  _TL11E: return _T44;
			}
		      }
		    }_TL10B: _T49 = Cyc_Warn_impos;
		    { int (* _T94)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									       struct _fat_ptr))_T49;
		      _T48 = _T94;
		    }_T4A = _tag_fat("ovd must be an aggr type",sizeof(char),
				     25U);
		    _T4B = _tag_fat(0U,sizeof(void *),0);
		    _T48(_T4A,_T4B);
		    ;
		  }goto _TL10A;
		  _TL109: return 0;
		  _TL10A: ;
		}
	      }
	    }goto _TL108;
	    _TL107: _T4C = ai;
	    _T4D = _T4C.UnknownAggr;
	    _T8D = _T4D.val;
	    { struct _tuple2 ua = _T8D;
	      return 0;
	    }_TL108: ;
	  }goto _TL106;
	  _TL105: goto _LLB;
	  _TL106: _LLB: ;
	}return 0;
      }
    case 4: 
      _T4E = t;
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T8C = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T4E;
	_T4F = t;
	_T50 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T4F;
	_T51 = &_T50->f1;
	_T8B = (struct Cyc_Absyn_PtrInfo *)_T51;
      }{ struct Cyc_Absyn_PtrInfo * pi = _T8B;
	_T52 = te;
	_T53 = tv_ovrs;
	_T54 = pi;
	_T55 = _T54->elt_type;
	_T56 = enclosing_decl;
	_T57 = instantiate;
	_T58 = Cyc_Cifc_update_tvars(_T52,_T53,_T55,_T56,_T57);
	return _T58;
      }
    case 6: 
      _T59 = t;
      { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T8C = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T59;
	_T89 = _T8C->f1;
      }{ struct Cyc_Absyn_FnInfo fi = _T89;
	struct Cyc_List_List * added_tvars = 0;
	struct Cyc_List_List * removed_tvars = 0;
	_T5A = Cyc_Cifc_opt_inst_tvar;
	if (! _T5A) { goto _TL122;
	}
	_T5B = te;
	_T5C = tv_ovrs;
	_T5D = fi;
	_T5E = _T5D.ret_type;
	_T5F = enclosing_decl;
	_T60 = instantiate;
	Cyc_Cifc_update_tvars(_T5B,_T5C,_T5E,_T5F,_T60);
	goto _TL123;
	_TL122: _TL123: _T61 = fi;
	{ struct Cyc_List_List * argit = _T61.args;
	  _TL124: _T62 = argit;
	  _T63 = (unsigned int)_T62;
	  if (_T63) { goto _TL125;
	  }else { goto _TL126;
	  }
	  _TL125: _T64 = argit;
	  _T65 = _T64->hd;
	  { struct _tuple8 * _T8C = (struct _tuple8 *)_T65;
	    void * _T8D;
	    { struct _tuple8 _T8E = *_T8C;
	      _T8D = _T8E.f2;
	    }{ void * at = _T8D;
	      struct _tuple15 * ar_tup = Cyc_Cifc_update_tvars(te,tv_ovrs,
							       at,enclosing_decl,
							       instantiate);
	      _T66 = ar_tup;
	      _T67 = (unsigned int)_T66;
	      if (! _T67) { goto _TL127;
	      }
	      _T68 = ar_tup;
	      _T69 = *_T68;
	      _T6A = _T69.f0;
	      _T6B = (unsigned int)_T6A;
	      if (! _T6B) { goto _TL129;
	      }
	      _T6C = ar_tup;
	      _T6D = *_T6C;
	      _T6E = _T6D.f0;
	      _T6F = added_tvars;
	      added_tvars = Cyc_List_append(_T6E,_T6F);
	      goto _TL12A;
	      _TL129: _TL12A: _T70 = ar_tup;
	      _T71 = *_T70;
	      _T72 = _T71.f1;
	      _T73 = (unsigned int)_T72;
	      if (! _T73) { goto _TL12B;
	      }
	      _T74 = ar_tup;
	      _T75 = *_T74;
	      _T76 = _T75.f1;
	      _T77 = removed_tvars;
	      removed_tvars = Cyc_List_append(_T76,_T77);
	      goto _TL12C;
	      _TL12B: _TL12C: goto _TL128;
	      _TL127: _TL128: _T78 = argit;
	      argit = _T78->tl;
	    }
	  }goto _TL124;
	  _TL126: _T79 = added_tvars;
	  _T7A = (unsigned int)_T79;
	  if (_T7A) { goto _TL12F;
	  }else { goto _TL130;
	  }
	  _TL130: _T7B = removed_tvars;
	  _T7C = (unsigned int)_T7B;
	  if (_T7C) { goto _TL12F;
	  }else { goto _TL12D;
	  }
	  _TL12F: { struct _tuple15 * _T8C = _cycalloc(sizeof(struct _tuple15));
	    _T8C->f0 = added_tvars;
	    _T8C->f1 = removed_tvars;
	    _T7D = (struct _tuple15 *)_T8C;
	  }return _T7D;
	  _TL12D: return 0;
	}
      }
    case 5: 
      _T7E = t;
      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T8C = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T7E;
	_T7F = t;
	_T80 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T7F;
	_T81 = &_T80->f1;
	_T8B = (struct Cyc_Absyn_ArrayInfo *)_T81;
      }{ struct Cyc_Absyn_ArrayInfo * ai = (struct Cyc_Absyn_ArrayInfo *)_T8B;
	_T82 = te;
	_T83 = tv_ovrs;
	_T84 = ai;
	_T85 = _T84->elt_type;
	_T86 = enclosing_decl;
	_T87 = instantiate;
	_T88 = Cyc_Cifc_update_tvars(_T82,_T83,_T85,_T86,_T87);
	return _T88;
      }
    default: 
      return 0;
    }
    ;
  }return 0;
}
static long Cyc_Cifc_update_fninfo_usage(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
					 struct Cyc_List_List * tv_ovrs,struct Cyc_Absyn_FnInfo * fi,
					 struct Cyc_Absyn_Decl * enclosing_decl) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_Absyn_FnInfo * _T2;
  void * _T3;
  struct Cyc_Absyn_Decl * _T4;
  struct Cyc_Absyn_FnInfo * _T5;
  struct Cyc_List_List * _T6;
  struct _tuple15 * _T7;
  unsigned int _T8;
  struct _tuple15 * _T9;
  struct _tuple15 _TA;
  struct Cyc_List_List * _TB;
  struct _tuple15 * _TC;
  unsigned int _TD;
  struct _tuple15 * _TE;
  struct _tuple15 _TF;
  struct Cyc_List_List * _T10;
  unsigned int _T11;
  struct Cyc_List_List * _T12;
  void * _T13;
  void * * _T14;
  struct Cyc_Tcenv_Tenv * _T15;
  struct Cyc_List_List * _T16;
  void * * _T17;
  void * _T18;
  struct Cyc_Absyn_Decl * _T19;
  struct _tuple15 * _T1A;
  unsigned int _T1B;
  struct _tuple15 * _T1C;
  struct _tuple15 _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct _tuple15 * _T20;
  struct _tuple15 _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_List_List * _T24;
  struct Cyc_List_List * _T25;
  unsigned int _T26;
  struct Cyc_List_List * _T27;
  void * _T28;
  struct _handler_cons * _T29;
  int _T2A;
  struct Cyc_Absyn_FnInfo * _T2B;
  struct Cyc_List_List * (* _T2C)(struct Cyc_List_List *,struct Cyc_Absyn_Tvar *);
  struct Cyc_List_List * (* _T2D)(struct Cyc_List_List *,void *);
  struct Cyc_Absyn_FnInfo * _T2E;
  struct Cyc_List_List * _T2F;
  struct Cyc_Absyn_Tvar * _T30;
  void * _T31;
  struct Cyc_Core_Not_found_exn_struct * _T32;
  char * _T33;
  char * _T34;
  struct Cyc_String_pa_PrintArg_struct _T35;
  unsigned int _T36;
  struct _fat_ptr _T37;
  struct _fat_ptr _T38;
  struct Cyc_List_List * _T39;
  struct Cyc_List_List * _T3A;
  unsigned int _T3B;
  struct Cyc_Absyn_FnInfo * _T3C;
  struct Cyc_List_List * _T3D;
  struct Cyc_Absyn_FnInfo * _T3E;
  struct Cyc_List_List * _T3F;
  struct Cyc_Absyn_FnInfo * _T40;
  long _T41;
  _T0 = te;
  _T1 = tv_ovrs;
  _T2 = _check_null(fi);
  _T3 = _T2->ret_type;
  _T4 = enclosing_decl;
  { struct _tuple15 * ad = Cyc_Cifc_update_tvars(_T0,_T1,_T3,_T4,0);
    _T5 = fi;
    { struct Cyc_List_List * argit = _T5->args;
      _T7 = ad;
      _T8 = (unsigned int)_T7;
      if (! _T8) { goto _TL131;
      }
      _T9 = ad;
      _TA = *_T9;
      _T6 = _TA.f0;
      goto _TL132;
      _TL131: _T6 = 0;
      _TL132: { struct Cyc_List_List * added_tvars = _T6;
	_TC = ad;
	_TD = (unsigned int)_TC;
	if (! _TD) { goto _TL133;
	}
	_TE = ad;
	_TF = *_TE;
	_TB = _TF.f1;
	goto _TL134;
	_TL133: _TB = 0;
	_TL134: { struct Cyc_List_List * removed_tvars = _TB;
	  long change = 0;
	  _TL135: _T10 = argit;
	  _T11 = (unsigned int)_T10;
	  if (_T11) { goto _TL136;
	  }else { goto _TL137;
	  }
	  _TL136: _T12 = argit;
	  _T13 = _T12->hd;
	  { struct _tuple8 * _T42 = (struct _tuple8 *)_T13;
	    void * _T43;
	    { struct _tuple8 _T44 = *_T42;
	      _T14 = &_T42->f2;
	      _T43 = (void * *)_T14;
	    }{ void * * at = (void * *)_T43;
	      _T15 = te;
	      _T16 = tv_ovrs;
	      _T17 = at;
	      _T18 = *_T17;
	      _T19 = enclosing_decl;
	      { struct _tuple15 * ad = Cyc_Cifc_update_tvars(_T15,_T16,_T18,
							     _T19,0);
		_T1A = ad;
		_T1B = (unsigned int)_T1A;
		if (! _T1B) { goto _TL138;
		}
		_T1C = ad;
		_T1D = *_T1C;
		_T1E = _T1D.f0;
		_T1F = added_tvars;
		added_tvars = Cyc_List_append(_T1E,_T1F);
		_T20 = ad;
		_T21 = *_T20;
		_T22 = _T21.f1;
		_T23 = removed_tvars;
		removed_tvars = Cyc_List_append(_T22,_T23);
		goto _TL139;
		_TL138: _TL139: _T24 = argit;
		argit = _T24->tl;
	      }
	    }
	  }goto _TL135;
	  _TL137: _TL13A: _T25 = removed_tvars;
	  _T26 = (unsigned int)_T25;
	  if (_T26) { goto _TL13B;
	  }else { goto _TL13C;
	  }
	  _TL13B: change = 1;
	  _T27 = removed_tvars;
	  _T28 = _T27->hd;
	  { struct Cyc_Absyn_Tvar * rtv = (struct Cyc_Absyn_Tvar *)_T28;
	    { struct _handler_cons _T42;
	      _T29 = &_T42;
	      _push_handler(_T29);
	      { int _T43 = 0;
		_T2A = setjmp(_T42.handler);
		if (! _T2A) { goto _TL13D;
		}
		_T43 = 1;
		goto _TL13E;
		_TL13D: _TL13E: if (_T43) { goto _TL13F;
		}else { goto _TL141;
		}
		_TL141: _T2B = fi;
		_T2D = Cyc_List_delete;
		{ struct Cyc_List_List * (* _T44)(struct Cyc_List_List *,
						  struct Cyc_Absyn_Tvar *) = (struct Cyc_List_List * (*)(struct Cyc_List_List *,
													 struct Cyc_Absyn_Tvar *))_T2D;
		  _T2C = _T44;
		}_T2E = fi;
		_T2F = _T2E->tvars;
		_T30 = rtv;
		_T2B->tvars = _T2C(_T2F,_T30);
		_pop_handler();
		goto _TL140;
		_TL13F: _T31 = Cyc_Core_get_exn_thrown();
		{ void * _T44 = (void *)_T31;
		  void * _T45;
		  _T32 = (struct Cyc_Core_Not_found_exn_struct *)_T44;
		  _T33 = _T32->tag;
		  _T34 = Cyc_Core_Not_found;
		  if (_T33 != _T34) { goto _TL142;
		  }
		  { struct Cyc_String_pa_PrintArg_struct _T46;
		    _T46.tag = 0;
		    _T46.f1 = Cyc_Absynpp_tvar2string(rtv);
		    _T35 = _T46;
		  }{ struct Cyc_String_pa_PrintArg_struct _T46 = _T35;
		    void * _T47[1];
		    _T47[0] = &_T46;
		    _T36 = loc;
		    _T37 = _tag_fat("Removed tvar %s not found",sizeof(char),
				    26U);
		    _T38 = _tag_fat(_T47,sizeof(void *),1);
		    Cyc_Warn_warn(_T36,_T37,_T38);
		  }goto _LL3;
		  _TL142: _T45 = _T44;
		  { void * exn = _T45;
		    _rethrow(exn);
		  }_LL3: ;
		}_TL140: ;
	      }
	    }_T39 = removed_tvars;
	    removed_tvars = _T39->tl;
	  }goto _TL13A;
	  _TL13C: _T3A = added_tvars;
	  _T3B = (unsigned int)_T3A;
	  if (! _T3B) { goto _TL144;
	  }
	  change = 1;
	  _T3C = fi;
	  _T3D = added_tvars;
	  _T3E = fi;
	  _T3F = _T3E->tvars;
	  _T3C->tvars = Cyc_List_append(_T3D,_T3F);
	  goto _TL145;
	  _TL144: _TL145: _T40 = fi;
	  _T40->effect = 0;
	  _T41 = change;
	  return _T41;
	}
      }
    }
  }
}
static struct Cyc_List_List * Cyc_Cifc_remove_cur(struct Cyc_List_List * head,
						  struct Cyc_List_List * cur,
						  struct Cyc_List_List * prev) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  _T0 = prev;
  _T1 = (unsigned int)_T0;
  if (! _T1) { goto _TL146;
  }
  _T2 = prev;
  _T3 = _check_null(cur);
  _T2->tl = _T3->tl;
  goto _TL147;
  _TL146: _T4 = _check_null(cur);
  head = _T4->tl;
  _TL147: _T5 = head;
  return _T5;
}
static int Cyc_Cifc_decl_name_cmp(struct Cyc_Absyn_Decl * a,struct Cyc_Absyn_Decl * b) {
  int _T0;
  int _T1;
  struct _fat_ptr * _T2;
  unsigned int _T3;
  struct _fat_ptr * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  int _T8;
  struct _fat_ptr * na = Cyc_Absyn_decl_name(a);
  struct _fat_ptr * nb = Cyc_Absyn_decl_name(b);
  _T0 = na == 0;
  _T1 = nb == 0;
  if (! (_T0 ^ _T1)) { goto _TL148;
  }
  return 1;
  _TL148: _T2 = na;
  _T3 = (unsigned int)_T2;
  if (! _T3) { goto _TL14A;
  }
  _T4 = na;
  _T5 = *_T4;
  _T6 = _check_null(nb);
  _T7 = *_T6;
  _T8 = Cyc_strcmp(_T5,_T7);
  return _T8;
  _TL14A: return 1;
}
static void Cyc_Cifc_deconstruct_type(void * t) {
  struct Cyc_String_pa_PrintArg_struct _T0;
  struct Cyc___cycFILE * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  void * _T4;
  int * _T5;
  unsigned int _T6;
  void * _T7;
  void * _T8;
  struct Cyc___cycFILE * _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct Cyc_List_List * _TC;
  unsigned int _TD;
  struct Cyc_List_List * _TE;
  void * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc___cycFILE * _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc___cycFILE * _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct Cyc___cycFILE * _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  void * _T1A;
  struct Cyc_String_pa_PrintArg_struct _T1B;
  struct Cyc_Absyn_Tvar * _T1C;
  void * _T1D;
  struct Cyc___cycFILE * _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  void * _T21;
  void * _T22;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T23;
  struct Cyc_Absyn_PtrInfo * _T24;
  struct Cyc___cycFILE * _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  struct Cyc_Absyn_PtrInfo * _T28;
  void * _T29;
  struct Cyc___cycFILE * _T2A;
  struct _fat_ptr _T2B;
  struct _fat_ptr _T2C;
  void * _T2D;
  void * _T2E;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T2F;
  struct Cyc_Absyn_FnInfo * _T30;
  struct Cyc___cycFILE * _T31;
  struct _fat_ptr _T32;
  struct _fat_ptr _T33;
  struct Cyc_Absyn_FnInfo * _T34;
  struct Cyc_List_List * _T35;
  unsigned int _T36;
  struct Cyc_String_pa_PrintArg_struct _T37;
  struct Cyc_List_List * _T38;
  void * _T39;
  struct Cyc_Absyn_Tvar * _T3A;
  struct Cyc___cycFILE * _T3B;
  struct _fat_ptr _T3C;
  struct _fat_ptr _T3D;
  struct Cyc_List_List * _T3E;
  struct Cyc_Absyn_FnInfo * _T3F;
  struct Cyc_List_List * _T40;
  unsigned int _T41;
  struct Cyc_List_List * _T42;
  void * _T43;
  struct Cyc___cycFILE * _T44;
  struct _fat_ptr _T45;
  struct _fat_ptr _T46;
  struct Cyc_List_List * _T47;
  struct Cyc___cycFILE * _T48;
  struct _fat_ptr _T49;
  struct _fat_ptr _T4A;
  void * _T4B;
  void * _T4C;
  struct Cyc___cycFILE * _T4D;
  struct _fat_ptr _T4E;
  struct _fat_ptr _T4F;
  struct Cyc_List_List * _T50;
  unsigned int _T51;
  struct Cyc_String_pa_PrintArg_struct _T52;
  struct Cyc_List_List * _T53;
  void * _T54;
  struct Cyc___cycFILE * _T55;
  struct _fat_ptr _T56;
  struct _fat_ptr _T57;
  struct Cyc_List_List * _T58;
  void * _T59;
  unsigned int _T5A;
  struct Cyc_String_pa_PrintArg_struct _T5B;
  struct Cyc___cycFILE * _T5C;
  struct _fat_ptr _T5D;
  struct _fat_ptr _T5E;
  struct Cyc___cycFILE * _T5F;
  struct _fat_ptr _T60;
  struct _fat_ptr _T61;
  struct Cyc___cycFILE * _T62;
  struct _fat_ptr _T63;
  struct _fat_ptr _T64;
  struct Cyc___cycFILE * _T65;
  struct _fat_ptr _T66;
  struct _fat_ptr _T67;
  struct Cyc___cycFILE * _T68;
  struct _fat_ptr _T69;
  struct _fat_ptr _T6A;
  { struct Cyc_String_pa_PrintArg_struct _T6B;
    _T6B.tag = 0;
    _T6B.f1 = Cyc_Absynpp_typ2string(t);
    _T0 = _T6B;
  }{ struct Cyc_String_pa_PrintArg_struct _T6B = _T0;
    void * _T6C[1];
    _T6C[0] = &_T6B;
    _T1 = Cyc_stderr;
    _T2 = _tag_fat("Type is %s\n",sizeof(char),12U);
    _T3 = _tag_fat(_T6C,sizeof(void *),1);
    Cyc_fprintf(_T1,_T2,_T3);
  }{ struct Cyc_Absyn_Typedefdecl * _T6B;
    struct _tuple0 * _T6C;
    struct Cyc_List_List * _T6D;
    void * _T6E;
    _T4 = t;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    switch (_T6) {
    case 0: 
      _T7 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6F = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T7;
	_T8 = _T6F->f1;
	_T6E = (void *)_T8;
	_T6D = _T6F->f2;
      }{ void * tc = _T6E;
	struct Cyc_List_List * ts = _T6D;
	_T9 = Cyc_stderr;
	_TA = _tag_fat("Got AppType ... <\n",sizeof(char),19U);
	_TB = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T9,_TA,_TB);
	_TL14D: _TC = ts;
	_TD = (unsigned int)_TC;
	if (_TD) { goto _TL14E;
	}else { goto _TL14F;
	}
	_TL14E: _TE = ts;
	_TF = _TE->hd;
	Cyc_Cifc_deconstruct_type(_TF);
	_T10 = ts;
	ts = _T10->tl;
	goto _TL14D;
	_TL14F: _T11 = Cyc_stderr;
	_T12 = _tag_fat(">\n",sizeof(char),3U);
	_T13 = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T11,_T12,_T13);
	goto _LL0;
      }
    case 3: 
      _T14 = Cyc_stderr;
      _T15 = _tag_fat("Got Cvar\n",sizeof(char),10U);
      _T16 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T14,_T15,_T16);
      goto _LL0;
    case 1: 
      _T17 = Cyc_stderr;
      _T18 = _tag_fat("Got Evar\n",sizeof(char),10U);
      _T19 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T17,_T18,_T19);
      goto _LL0;
    case 2: 
      _T1A = t;
      { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T6F = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T1A;
	_T6E = _T6F->f1;
      }{ struct Cyc_Absyn_Tvar * tv = _T6E;
	{ struct Cyc_String_pa_PrintArg_struct _T6F;
	  _T6F.tag = 0;
	  _T1C = tv;
	  _T1D = _T1C->kind;
	  _T6F.f1 = Cyc_Absynpp_kindbound2string(_T1D);
	  _T1B = _T6F;
	}{ struct Cyc_String_pa_PrintArg_struct _T6F = _T1B;
	  void * _T70[1];
	  _T70[0] = &_T6F;
	  _T1E = Cyc_stderr;
	  _T1F = _tag_fat("Got VarType -- kindbnd is %s\n",sizeof(char),30U);
	  _T20 = _tag_fat(_T70,sizeof(void *),1);
	  Cyc_fprintf(_T1E,_T1F,_T20);
	}goto _LL0;
      }
    case 4: 
      _T21 = t;
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T6F = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T21;
	_T22 = t;
	_T23 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T22;
	_T24 = &_T23->f1;
	_T6E = (struct Cyc_Absyn_PtrInfo *)_T24;
      }{ struct Cyc_Absyn_PtrInfo * pi = _T6E;
	_T25 = Cyc_stderr;
	_T26 = _tag_fat("Got PointerType\n",sizeof(char),17U);
	_T27 = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T25,_T26,_T27);
	_T28 = pi;
	_T29 = _T28->elt_type;
	Cyc_Cifc_deconstruct_type(_T29);
	goto _LL0;
      }
    case 5: 
      _T2A = Cyc_stderr;
      _T2B = _tag_fat("Got ArrayType\n",sizeof(char),15U);
      _T2C = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T2A,_T2B,_T2C);
      goto _LL0;
    case 6: 
      _T2D = t;
      { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T6F = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T2D;
	_T2E = t;
	_T2F = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T2E;
	_T30 = &_T2F->f1;
	_T6E = (struct Cyc_Absyn_FnInfo *)_T30;
      }{ struct Cyc_Absyn_FnInfo * fi = _T6E;
	_T31 = Cyc_stderr;
	_T32 = _tag_fat("Got FnType\n",sizeof(char),12U);
	_T33 = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T31,_T32,_T33);
	_T34 = fi;
	{ struct Cyc_List_List * tvit = _T34->tvars;
	  _TL150: _T35 = tvit;
	  _T36 = (unsigned int)_T35;
	  if (_T36) { goto _TL151;
	  }else { goto _TL152;
	  }
	  _TL151: { struct Cyc_String_pa_PrintArg_struct _T6F;
	    _T6F.tag = 0;
	    _T38 = tvit;
	    _T39 = _T38->hd;
	    _T3A = (struct Cyc_Absyn_Tvar *)_T39;
	    _T6F.f1 = Cyc_Absynpp_tvar2string(_T3A);
	    _T37 = _T6F;
	  }{ struct Cyc_String_pa_PrintArg_struct _T6F = _T37;
	    void * _T70[1];
	    _T70[0] = &_T6F;
	    _T3B = Cyc_stderr;
	    _T3C = _tag_fat("tvar(%s), ",sizeof(char),11U);
	    _T3D = _tag_fat(_T70,sizeof(void *),1);
	    Cyc_fprintf(_T3B,_T3C,_T3D);
	  }_T3E = tvit;
	  tvit = _T3E->tl;
	  goto _TL150;
	  _TL152: _T3F = fi;
	  { struct Cyc_List_List * argit = _T3F->args;
	    _TL153: _T40 = argit;
	    _T41 = (unsigned int)_T40;
	    if (_T41) { goto _TL154;
	    }else { goto _TL155;
	    }
	    _TL154: _T42 = argit;
	    _T43 = _T42->hd;
	    { struct _tuple8 * _T6F = (struct _tuple8 *)_T43;
	      void * _T70;
	      { struct _tuple8 _T71 = *_T6F;
		_T70 = _T71.f2;
	      }{ void * t = _T70;
		_T44 = Cyc_stderr;
		_T45 = _tag_fat("Arg::",sizeof(char),6U);
		_T46 = _tag_fat(0U,sizeof(void *),0);
		Cyc_fprintf(_T44,_T45,_T46);
		Cyc_Cifc_deconstruct_type(t);
		_T47 = argit;
		argit = _T47->tl;
	      }
	    }goto _TL153;
	    _TL155: goto _LL0;
	  }
	}
      }
    case 7: 
      _T48 = Cyc_stderr;
      _T49 = _tag_fat("Got AnonAggrType\n",sizeof(char),18U);
      _T4A = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T48,_T49,_T4A);
      goto _LL0;
    case 8: 
      _T4B = t;
      { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T6F = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T4B;
	_T6C = _T6F->f1;
	_T6D = _T6F->f2;
	_T6B = _T6F->f3;
	_T4C = _T6F->f4;
	_T6E = (void *)_T4C;
      }{ struct _tuple0 * n = _T6C;
	struct Cyc_List_List * ts = _T6D;
	struct Cyc_Absyn_Typedefdecl * d = _T6B;
	void * topt = _T6E;
	_T4D = Cyc_stderr;
	_T4E = _tag_fat("Got TypedefType\n",sizeof(char),17U);
	_T4F = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T4D,_T4E,_T4F);
	_TL156: _T50 = ts;
	_T51 = (unsigned int)_T50;
	if (_T51) { goto _TL157;
	}else { goto _TL158;
	}
	_TL157: { struct Cyc_String_pa_PrintArg_struct _T6F;
	  _T6F.tag = 0;
	  _T53 = ts;
	  _T54 = _T53->hd;
	  _T6F.f1 = Cyc_Absynpp_typ2string(_T54);
	  _T52 = _T6F;
	}{ struct Cyc_String_pa_PrintArg_struct _T6F = _T52;
	  void * _T70[1];
	  _T70[0] = &_T6F;
	  _T55 = Cyc_stderr;
	  _T56 = _tag_fat("Types(i) = %s\n",sizeof(char),15U);
	  _T57 = _tag_fat(_T70,sizeof(void *),1);
	  Cyc_fprintf(_T55,_T56,_T57);
	}_T58 = ts;
	ts = _T58->tl;
	goto _TL156;
	_TL158: _T59 = topt;
	_T5A = (unsigned int)_T59;
	if (! _T5A) { goto _TL159;
	}
	{ struct Cyc_String_pa_PrintArg_struct _T6F;
	  _T6F.tag = 0;
	  _T6F.f1 = Cyc_Absynpp_typ2string(topt);
	  _T5B = _T6F;
	}{ struct Cyc_String_pa_PrintArg_struct _T6F = _T5B;
	  void * _T70[1];
	  _T70[0] = &_T6F;
	  _T5C = Cyc_stderr;
	  _T5D = _tag_fat("topt = %s\n",sizeof(char),11U);
	  _T5E = _tag_fat(_T70,sizeof(void *),1);
	  Cyc_fprintf(_T5C,_T5D,_T5E);
	}goto _TL15A;
	_TL159: _TL15A: goto _LL0;
      }
    case 9: 
      _T5F = Cyc_stderr;
      _T60 = _tag_fat("Got ValueofType\n",sizeof(char),17U);
      _T61 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T5F,_T60,_T61);
      goto _LL0;
    case 10: 
      _T62 = Cyc_stderr;
      _T63 = _tag_fat("Got TypeDeclType\n",sizeof(char),18U);
      _T64 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T62,_T63,_T64);
      goto _LL0;
    case 11: 
      _T65 = Cyc_stderr;
      _T66 = _tag_fat("Got TypeofType\n",sizeof(char),16U);
      _T67 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T65,_T66,_T67);
      goto _LL0;
    default: 
      _T68 = Cyc_stderr;
      _T69 = _tag_fat("Got SubsetType\n",sizeof(char),16U);
      _T6A = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T68,_T69,_T6A);
      goto _LL0;
    }
    _LL0: ;
  }
}
static struct _tuple15 * Cyc_Cifc_add_tvars_to_type(struct Cyc_Tcenv_Tenv * te,
						    struct Cyc_Absyn_Decl * encloser,
						    void * t,struct Cyc_List_List * tv_ovrs) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  struct _tuple15 * _T5;
  void * _T6;
  void * _T7;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T8;
  struct Cyc_Absyn_PtrInfo * _T9;
  struct Cyc_Tcenv_Tenv * _TA;
  struct Cyc_Absyn_Decl * _TB;
  struct Cyc_Absyn_PtrInfo * _TC;
  void * _TD;
  struct Cyc_List_List * _TE;
  struct _tuple15 * _TF;
  void * _T10;
  void * _T11;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T12;
  struct Cyc_Absyn_FnInfo * _T13;
  struct Cyc_Absyn_FnInfo * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_Absyn_Decl * _T16;
  unsigned int _T17;
  struct Cyc_Tcenv_Tenv * _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_Absyn_FnInfo * _T1A;
  struct Cyc_Absyn_Decl * _T1B;
  long _T1C;
  struct _tuple15 * _T1D;
  struct Cyc_Absyn_FnInfo * _T1E;
  void * _T1F;
  void * _T20;
  void * _T21;
  { struct Cyc_Absyn_Typedefdecl * _T22;
    struct _tuple0 * _T23;
    long _T24;
    enum Cyc_Absyn_AggrKind _T25;
    struct Cyc_List_List * _T26;
    void * _T27;
    _T0 = t;
    _T1 = (int *)_T0;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      _T3 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T28 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3;
	_T4 = _T28->f1;
	_T27 = (void *)_T4;
	_T26 = _T28->f2;
      }{ void * tc = _T27;
	struct Cyc_List_List * ts = _T26;
	_T5 = Cyc_Cifc_update_tvars(te,tv_ovrs,t,encloser,0);
	return _T5;
      }
    case 4: 
      _T6 = t;
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T28 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T6;
	_T7 = t;
	_T8 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T7;
	_T9 = &_T8->f1;
	_T27 = (struct Cyc_Absyn_PtrInfo *)_T9;
      }{ struct Cyc_Absyn_PtrInfo * pi = _T27;
	_TA = te;
	_TB = encloser;
	_TC = pi;
	_TD = _TC->elt_type;
	_TE = tv_ovrs;
	_TF = Cyc_Cifc_add_tvars_to_type(_TA,_TB,_TD,_TE);
	return _TF;
      }
    case 5: 
      goto _LL0;
    case 6: 
      _T10 = t;
      { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T28 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T10;
	_T11 = t;
	_T12 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T11;
	_T13 = &_T12->f1;
	_T27 = (struct Cyc_Absyn_FnInfo *)_T13;
      }{ struct Cyc_Absyn_FnInfo * fi = _T27;
	_T14 = fi;
	_T15 = _T14->tvars;
	{ struct Cyc_List_List * old_tvars = Cyc_List_copy(_T15);
	  _T16 = encloser;
	  _T17 = _T16->loc;
	  _T18 = te;
	  _T19 = tv_ovrs;
	  _T1A = fi;
	  _T1B = encloser;
	  { long changed = Cyc_Cifc_update_fninfo_usage(_T17,_T18,_T19,_T1A,
							_T1B);
	    _T1C = changed;
	    if (! _T1C) { goto _TL15C;
	    }
	    { struct _tuple15 * _T28 = _cycalloc(sizeof(struct _tuple15));
	      _T1E = fi;
	      _T28->f0 = _T1E->tvars;
	      _T28->f1 = old_tvars;
	      _T1D = (struct _tuple15 *)_T28;
	    }return _T1D;
	    _TL15C: goto _LL0;
	  }
	}
      }
    case 7: 
      _T1F = t;
      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T28 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T1F;
	_T25 = _T28->f1;
	_T24 = _T28->f2;
	_T26 = _T28->f3;
      }{ enum Cyc_Absyn_AggrKind knd = _T25;
	long is_tuple = _T24;
	struct Cyc_List_List * flst = _T26;
	goto _LL0;
      }
    case 8: 
      _T20 = t;
      { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T28 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T20;
	_T23 = _T28->f1;
	_T26 = _T28->f2;
	_T22 = _T28->f3;
	_T21 = _T28->f4;
	_T27 = (void *)_T21;
      }{ struct _tuple0 * n = _T23;
	struct Cyc_List_List * ts = _T26;
	struct Cyc_Absyn_Typedefdecl * d = _T22;
	void * topt = _T27;
	goto _LL0;
      }
    case 10: 
      goto _LL0;
    default: 
      return 0;
    }
    _LL0: ;
  }return 0;
}
static long Cyc_Cifc_update_typedef_decl(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Decl * encloser,
					 struct Cyc_List_List * tv_ovrs) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Tcenv_Tenv * _T3;
  struct Cyc_Absyn_Decl * _T4;
  struct Cyc_Absyn_Typedefdecl * _T5;
  void * _T6;
  void * _T7;
  struct Cyc_List_List * _T8;
  struct _tuple15 * _T9;
  struct Cyc_List_List * _TA;
  unsigned int _TB;
  struct Cyc_Absyn_Typedefdecl * _TC;
  struct Cyc_List_List * (* _TD)(int (*)(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *),
				 struct Cyc_List_List *,struct Cyc_Absyn_Tvar *);
  struct Cyc_List_List * (* _TE)(int (*)(void *,void *),struct Cyc_List_List *,
				 void *);
  int (* _TF)(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *);
  struct Cyc_Absyn_Typedefdecl * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  void * _T13;
  struct Cyc_Absyn_Tvar * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_Absyn_Typedefdecl * _T16;
  struct Cyc_Absyn_Typedefdecl * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_List_List * _T19;
  int (* _T1A)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T1B)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  long _T1E;
  long opt_inst_tvar_sav = Cyc_Cifc_opt_inst_tvar;
  Cyc_Cifc_opt_inst_tvar = 0;
  { long changed = 0;
    _T0 = encloser;
    { void * _T1F = _T0->r;
      struct Cyc_Absyn_Typedefdecl * _T20;
      _T1 = (int *)_T1F;
      _T2 = *_T1;
      if (_T2 != 8) { goto _TL15E;
      }
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T21 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T1F;
	_T20 = _T21->f1;
      }{ struct Cyc_Absyn_Typedefdecl * td_decl = _T20;
	_T3 = te;
	_T4 = encloser;
	_T5 = td_decl;
	_T6 = _T5->defn;
	_T7 = _check_null(_T6);
	_T8 = tv_ovrs;
	{ struct _tuple15 * new_old_tvars = Cyc_Cifc_add_tvars_to_type(_T3,
								       _T4,
								       _T7,
								       _T8);
	  { struct Cyc_List_List * _T21;
	    struct Cyc_List_List * _T22;
	    if (new_old_tvars == 0) { goto _TL160;
	    }
	    _T9 = new_old_tvars;
	    { struct _tuple15 _T23 = *_T9;
	      _T22 = _T23.f0;
	      _T21 = _T23.f1;
	    }{ struct Cyc_List_List * nt = _T22;
	      struct Cyc_List_List * ot = _T21;
	      _TL162: _TA = ot;
	      _TB = (unsigned int)_TA;
	      if (_TB) { goto _TL163;
	      }else { goto _TL164;
	      }
	      _TL163: _TC = td_decl;
	      _TE = Cyc_List_delete_cmp;
	      { struct Cyc_List_List * (* _T23)(int (*)(struct Cyc_Absyn_Tvar *,
							struct Cyc_Absyn_Tvar *),
						struct Cyc_List_List *,struct Cyc_Absyn_Tvar *) = (struct Cyc_List_List * (*)(int (*)(struct Cyc_Absyn_Tvar *,
																      struct Cyc_Absyn_Tvar *),
															      struct Cyc_List_List *,
															      struct Cyc_Absyn_Tvar *))_TE;
		_TD = _T23;
	      }_TF = Cyc_Absyn_tvar_cmp;
	      _T10 = td_decl;
	      _T11 = _T10->tvs;
	      _T12 = ot;
	      _T13 = _T12->hd;
	      _T14 = (struct Cyc_Absyn_Tvar *)_T13;
	      _TC->tvs = _TD(_TF,_T11,_T14);
	      _T15 = ot;
	      ot = _T15->tl;
	      goto _TL162;
	      _TL164: _T16 = td_decl;
	      _T17 = td_decl;
	      _T18 = _T17->tvs;
	      _T19 = nt;
	      _T16->tvs = Cyc_List_append(_T18,_T19);
	      changed = 1;
	      goto _LL5;
	    }_TL160: goto _LL5;
	    _LL5: ;
	  }goto _LL0;
	}
      }_TL15E: _T1B = Cyc_Warn_impos;
      { int (* _T21)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_T1B;
	_T1A = _T21;
      }_T1C = _tag_fat("expect only a typedef_d",sizeof(char),24U);
      _T1D = _tag_fat(0U,sizeof(void *),0);
      _T1A(_T1C,_T1D);
      _LL0: ;
    }Cyc_Cifc_opt_inst_tvar = opt_inst_tvar_sav;
    _T1E = changed;
    return _T1E;
  }
}
static struct Cyc_List_List * Cyc_Cifc_update_usages(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
						     struct Cyc_List_List * in_tv_ovrs,
						     struct Cyc_List_List * dsmm) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_Absyn_Decl * _T4;
  int * _T5;
  unsigned int _T6;
  struct Cyc_Absyn_Vardecl * _T7;
  int * _T8;
  unsigned int _T9;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _TA;
  struct Cyc_Absyn_FnInfo * _TB;
  void * _TC;
  struct Cyc_Tcenv_Tenv * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_Absyn_Vardecl * _TF;
  void * _T10;
  struct Cyc_Absyn_Decl * _T11;
  struct _tuple15 * _T12;
  struct Cyc_Absyn_PtrInfo _T13;
  struct Cyc_Absyn_ArrayInfo _T14;
  struct _tuple15 * _T15;
  unsigned int _T16;
  struct Cyc_Tcenv_Tenv * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_Absyn_Fndecl * _T19;
  struct Cyc_Absyn_FnInfo * _T1A;
  struct Cyc_Absyn_FnInfo * _T1B;
  struct Cyc_Absyn_Decl * _T1C;
  struct Cyc_Absyn_Aggrdecl * _T1D;
  struct Cyc_Absyn_AggrdeclImpl * _T1E;
  unsigned int _T1F;
  struct Cyc_Absyn_Aggrdecl * _T20;
  struct Cyc_Absyn_AggrdeclImpl * _T21;
  struct Cyc_List_List * _T22;
  unsigned int _T23;
  struct Cyc_List_List * _T24;
  void * _T25;
  struct Cyc_Tcenv_Tenv * _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_Absyn_Aggrfield * _T28;
  void * _T29;
  struct Cyc_Absyn_Decl * _T2A;
  struct _tuple15 * _T2B;
  unsigned int _T2C;
  struct _tuple15 * _T2D;
  struct _tuple15 _T2E;
  struct Cyc_List_List * _T2F;
  unsigned int _T30;
  struct _tuple15 * _T31;
  struct _tuple15 _T32;
  struct Cyc_List_List * _T33;
  unsigned int _T34;
  struct Cyc_List_List * _T35;
  struct Cyc_List_List * _T36;
  unsigned int _T37;
  struct Cyc_List_List * _T38;
  void * _T39;
  struct _handler_cons * _T3A;
  int _T3B;
  struct Cyc_Absyn_Aggrdecl * _T3C;
  struct Cyc_List_List * (* _T3D)(struct Cyc_List_List *,struct Cyc_Absyn_Tvar *);
  struct Cyc_List_List * (* _T3E)(struct Cyc_List_List *,void *);
  struct Cyc_Absyn_Aggrdecl * _T3F;
  struct Cyc_List_List * _T40;
  struct Cyc_Absyn_Tvar * _T41;
  void * _T42;
  struct Cyc_Core_Not_found_exn_struct * _T43;
  char * _T44;
  char * _T45;
  struct Cyc_String_pa_PrintArg_struct _T46;
  unsigned int _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  struct Cyc_List_List * _T4A;
  struct Cyc_List_List * _T4B;
  unsigned int _T4C;
  struct Cyc_Absyn_Aggrdecl * _T4D;
  struct Cyc_List_List * _T4E;
  struct Cyc_Absyn_Aggrdecl * _T4F;
  struct Cyc_List_List * _T50;
  struct _handler_cons * _T51;
  int _T52;
  struct Cyc_List_List * (* _T53)(int (*)(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Decl *),
				  struct Cyc_List_List *,struct Cyc_Absyn_Decl *);
  struct Cyc_List_List * (* _T54)(int (*)(void *,void *),struct Cyc_List_List *,
				  void *);
  struct Cyc_List_List * _T55;
  struct Cyc_Absyn_Decl * _T56;
  void * _T57;
  struct Cyc_Core_Not_found_exn_struct * _T58;
  char * _T59;
  char * _T5A;
  struct Cyc_List_List * _T5B;
  long _T5C;
  struct Cyc_List_List * _T5D;
  struct Cyc_Absyn_Aggrdecl * _T5E;
  struct Cyc_Absyn_Decl * _T5F;
  unsigned int _T60;
  struct Cyc_Absyn_Decl * _T61;
  int * _T62;
  int _T63;
  struct Cyc_Absyn_Aggrdecl * _T64;
  struct Cyc_List_List * _T65;
  unsigned int _T66;
  struct Cyc_List_List * _T67;
  void * _T68;
  struct Cyc_Absyn_Tvar * _T69;
  struct Cyc_Absyn_Tvar * _T6A;
  struct _fat_ptr * _T6B;
  struct _fat_ptr _T6C;
  struct Cyc_Int_pa_PrintArg_struct _T6D;
  int _T6E;
  struct _fat_ptr _T6F;
  struct _fat_ptr _T70;
  struct Cyc_Absyn_Tvar * _T71;
  struct Cyc_Absyn_Aggrdecl * _T72;
  struct Cyc_List_List * _T73;
  struct Cyc_Absyn_Aggrdecl * _T74;
  struct Cyc_List_List * _T75;
  struct Cyc_Absyn_Aggrdecl * _T76;
  struct Cyc_Absyn_Aggrdecl * _T77;
  struct Cyc_List_List * _T78;
  int (* _T79)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T7A)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T7B;
  struct _fat_ptr _T7C;
  struct Cyc_List_List * _T7D;
  long _T7E;
  long _T7F;
  unsigned int _T80;
  struct Cyc_String_pa_PrintArg_struct _T81;
  struct Cyc___cycFILE * _T82;
  struct _fat_ptr _T83;
  struct _fat_ptr _T84;
  struct Cyc_Warn_String_Warn_Warg_struct _T85;
  unsigned int _T86;
  struct _fat_ptr _T87;
  struct Cyc_List_List * _T88;
  unsigned int niter = 0U;
  struct Cyc_List_List * abs_decls = 0;
  long some_change = 0;
  struct Cyc_List_List * tv_ovrs = in_tv_ovrs;
  struct Cyc_List_List * dsm = Cyc_List_copy(dsmm);
  struct Cyc_List_List * changed_decls = 0;
  _TL165: changed_decls = 0;
  { struct Cyc_List_List * ds = dsm;
    struct Cyc_List_List * prev = 0;
    some_change = 0;
    _TL167: _T0 = ds;
    _T1 = (unsigned int)_T0;
    if (_T1) { goto _TL168;
    }else { goto _TL169;
    }
    _TL168: { long changed = 0;
      _T2 = ds;
      _T3 = _T2->hd;
      { struct Cyc_Absyn_Decl * d = (struct Cyc_Absyn_Decl *)_T3;
	struct _fat_ptr * dname = Cyc_Absyn_decl_name(d);
	_T4 = d;
	{ void * _T89 = _T4->r;
	  struct Cyc_Absyn_Typedefdecl * _T8A;
	  struct Cyc_Absyn_Aggrdecl * _T8B;
	  struct Cyc_Absyn_Fndecl * _T8C;
	  struct Cyc_Absyn_Vardecl * _T8D;
	  _T5 = (int *)_T89;
	  _T6 = *_T5;
	  switch (_T6) {
	  case 0: 
	    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T8E = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T89;
	      _T8D = _T8E->f1;
	    }{ struct Cyc_Absyn_Vardecl * vd = _T8D;
	      _T7 = vd;
	      { void * _T8E = _T7->type;
		struct Cyc_List_List * _T8F;
		void * _T90;
		_T8 = (int *)_T8E;
		_T9 = *_T8;
		switch (_T9) {
		case 6: 
		  { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T91 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T8E;
		    _TA = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T8E;
		    _TB = &_TA->f1;
		    _T90 = (struct Cyc_Absyn_FnInfo *)_TB;
		  }{ struct Cyc_Absyn_FnInfo * fi = _T90;
		    changed = Cyc_Cifc_update_fninfo_usage(loc,te,tv_ovrs,
							   fi,d);
		    goto _LLB;
		  }
		case 0: 
		  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T91 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T8E;
		    _TC = _T91->f1;
		    _T90 = (void *)_TC;
		    _T8F = _T91->f2;
		  }{ void * tc = _T90;
		    struct Cyc_List_List * ts = _T8F;
		    _TD = te;
		    _TE = tv_ovrs;
		    _TF = vd;
		    _T10 = _TF->type;
		    _T11 = d;
		    _T12 = Cyc_Cifc_update_tvars(_TD,_TE,_T10,_T11,1);
		    changed = _T12 != 0;
		    goto _LLB;
		  }
		case 4: 
		  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T91 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T8E;
		    _T13 = _T91->f1;
		    _T90 = _T13.elt_type;
		  }{ void * et = _T90;
		    _T90 = et;
		    goto _LL13;
		  }
		case 5: 
		  { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T91 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T8E;
		    _T14 = _T91->f1;
		    _T90 = _T14.elt_type;
		  }_LL13: { void * et = _T90;
		    _T15 = Cyc_Cifc_update_tvars(te,tv_ovrs,et,d,1);
		    changed = _T15 != 0;
		    goto _LLB;
		  }
		default: 
		  goto _LLB;
		}
		_LLB: ;
	      }goto _LL0;
	    }
	  case 1: 
	    { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T8E = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T89;
	      _T8C = _T8E->f1;
	    }{ struct Cyc_Absyn_Fndecl * fd = _T8C;
	      _T16 = loc;
	      _T17 = te;
	      _T18 = tv_ovrs;
	      _T19 = fd;
	      _T1A = &_T19->i;
	      _T1B = (struct Cyc_Absyn_FnInfo *)_T1A;
	      _T1C = d;
	      changed = Cyc_Cifc_update_fninfo_usage(_T16,_T17,_T18,_T1B,
						     _T1C);
	      goto _LL0;
	    }
	  case 5: 
	    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T8E = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T89;
	      _T8B = _T8E->f1;
	    }{ struct Cyc_Absyn_Aggrdecl * ad = _T8B;
	      _T1D = ad;
	      _T1E = _T1D->impl;
	      _T1F = (unsigned int)_T1E;
	      if (! _T1F) { goto _TL16C;
	      }
	      _T20 = ad;
	      _T21 = _T20->impl;
	      { struct Cyc_List_List * fit = _T21->fields;
		struct Cyc_List_List * added_tvars = 0;
		struct Cyc_List_List * removed_tvars = 0;
		_TL16E: _T22 = fit;
		_T23 = (unsigned int)_T22;
		if (_T23) { goto _TL16F;
		}else { goto _TL170;
		}
		_TL16F: _T24 = fit;
		_T25 = _T24->hd;
		{ struct Cyc_Absyn_Aggrfield * fld = (struct Cyc_Absyn_Aggrfield *)_T25;
		  _T26 = te;
		  _T27 = tv_ovrs;
		  _T28 = fld;
		  _T29 = _T28->type;
		  _T2A = d;
		  { struct _tuple15 * tvtup = Cyc_Cifc_update_tvars(_T26,
								    _T27,
								    _T29,
								    _T2A,
								    0);
		    _T2B = tvtup;
		    _T2C = (unsigned int)_T2B;
		    if (! _T2C) { goto _TL171;
		    }
		    changed = 1;
		    _T2D = tvtup;
		    _T2E = *_T2D;
		    { struct Cyc_List_List * ad = _T2E.f0;
		      _T2F = ad;
		      _T30 = (unsigned int)_T2F;
		      if (! _T30) { goto _TL173;
		      }
		      added_tvars = Cyc_List_append(ad,added_tvars);
		      goto _TL174;
		      _TL173: _TL174: _T31 = tvtup;
		      _T32 = *_T31;
		      { struct Cyc_List_List * rm = _T32.f1;
			_T33 = rm;
			_T34 = (unsigned int)_T33;
			if (! _T34) { goto _TL175;
			}
			removed_tvars = Cyc_List_append(rm,removed_tvars);
			goto _TL176;
			_TL175: _TL176: ;
		      }
		    }goto _TL172;
		    _TL171: _TL172: _T35 = fit;
		    fit = _T35->tl;
		  }
		}goto _TL16E;
		_TL170: _TL177: _T36 = removed_tvars;
		_T37 = (unsigned int)_T36;
		if (_T37) { goto _TL178;
		}else { goto _TL179;
		}
		_TL178: _T38 = removed_tvars;
		_T39 = _T38->hd;
		{ struct Cyc_Absyn_Tvar * rtv = (struct Cyc_Absyn_Tvar *)_T39;
		  { struct _handler_cons _T8E;
		    _T3A = &_T8E;
		    _push_handler(_T3A);
		    { int _T8F = 0;
		      _T3B = setjmp(_T8E.handler);
		      if (! _T3B) { goto _TL17A;
		      }
		      _T8F = 1;
		      goto _TL17B;
		      _TL17A: _TL17B: if (_T8F) { goto _TL17C;
		      }else { goto _TL17E;
		      }
		      _TL17E: _T3C = ad;
		      _T3E = Cyc_List_delete;
		      { struct Cyc_List_List * (* _T90)(struct Cyc_List_List *,
							struct Cyc_Absyn_Tvar *) = (struct Cyc_List_List * (*)(struct Cyc_List_List *,
													       struct Cyc_Absyn_Tvar *))_T3E;
			_T3D = _T90;
		      }_T3F = ad;
		      _T40 = _T3F->tvs;
		      _T41 = rtv;
		      _T3C->tvs = _T3D(_T40,_T41);
		      _pop_handler();
		      goto _TL17D;
		      _TL17C: _T42 = Cyc_Core_get_exn_thrown();
		      { void * _T90 = (void *)_T42;
			void * _T91;
			_T43 = (struct Cyc_Core_Not_found_exn_struct *)_T90;
			_T44 = _T43->tag;
			_T45 = Cyc_Core_Not_found;
			if (_T44 != _T45) { goto _TL17F;
			}
			{ struct Cyc_String_pa_PrintArg_struct _T92;
			  _T92.tag = 0;
			  _T92.f1 = Cyc_Absynpp_tvar2string(rtv);
			  _T46 = _T92;
			}{ struct Cyc_String_pa_PrintArg_struct _T92 = _T46;
			  void * _T93[1];
			  _T93[0] = &_T92;
			  _T47 = loc;
			  _T48 = _tag_fat("Removed tvar %s not found",sizeof(char),
					  26U);
			  _T49 = _tag_fat(_T93,sizeof(void *),1);
			  Cyc_Warn_warn(_T47,_T48,_T49);
			}goto _LL16;
			_TL17F: _T91 = _T90;
			{ void * exn = _T91;
			  _rethrow(exn);
			}_LL16: ;
		      }_TL17D: ;
		    }
		  }_T4A = removed_tvars;
		  removed_tvars = _T4A->tl;
		}goto _TL177;
		_TL179: _T4B = added_tvars;
		_T4C = (unsigned int)_T4B;
		if (! _T4C) { goto _TL181;
		}
		_T4D = ad;
		_T4E = added_tvars;
		_T4F = ad;
		_T50 = _T4F->tvs;
		_T4D->tvs = Cyc_List_append(_T4E,_T50);
		{ struct Cyc_Absyn_Decl * absdecl = Cyc_Cifc_make_abstract_decl(d);
		  { struct _handler_cons _T8E;
		    _T51 = &_T8E;
		    _push_handler(_T51);
		    { int _T8F = 0;
		      _T52 = setjmp(_T8E.handler);
		      if (! _T52) { goto _TL183;
		      }
		      _T8F = 1;
		      goto _TL184;
		      _TL183: _TL184: if (_T8F) { goto _TL185;
		      }else { goto _TL187;
		      }
		      _TL187: _T54 = Cyc_List_delete_cmp;
		      { struct Cyc_List_List * (* _T90)(int (*)(struct Cyc_Absyn_Decl *,
								struct Cyc_Absyn_Decl *),
							struct Cyc_List_List *,
							struct Cyc_Absyn_Decl *) = (struct Cyc_List_List * (*)(int (*)(struct Cyc_Absyn_Decl *,
														       struct Cyc_Absyn_Decl *),
													       struct Cyc_List_List *,
													       struct Cyc_Absyn_Decl *))_T54;
			_T53 = _T90;
		      }_T55 = abs_decls;
		      _T56 = absdecl;
		      abs_decls = _T53(Cyc_Cifc_decl_name_cmp,_T55,_T56);
		      _pop_handler();
		      goto _TL186;
		      _TL185: _T57 = Cyc_Core_get_exn_thrown();
		      { void * _T90 = (void *)_T57;
			void * _T91;
			_T58 = (struct Cyc_Core_Not_found_exn_struct *)_T90;
			_T59 = _T58->tag;
			_T5A = Cyc_Core_Not_found;
			if (_T59 != _T5A) { goto _TL188;
			}
			goto _LL1B;
			_TL188: _T91 = _T90;
			{ void * exn = _T91;
			  _rethrow(exn);
			}_LL1B: ;
		      }_TL186: ;
		    }
		  }{ struct Cyc_List_List * _T8E = _cycalloc(sizeof(struct Cyc_List_List));
		    _T8E->hd = absdecl;
		    _T8E->tl = abs_decls;
		    _T5B = (struct Cyc_List_List *)_T8E;
		  }abs_decls = _T5B;
		}goto _TL182;
		_TL181: _TL182: _T5C = changed;
		if (! _T5C) { goto _TL18A;
		}
		{ struct Cyc_List_List * _T8E = _cycalloc(sizeof(struct Cyc_List_List));
		  _T8E->hd = d;
		  _T8E->tl = changed_decls;
		  _T5D = (struct Cyc_List_List *)_T8E;
		}changed_decls = _T5D;
		goto _TL18B;
		_TL18A: _TL18B: ;
	      }goto _TL16D;
	      _TL16C: _T5E = ad;
	      { struct _tuple0 * _T8E = _T5E->name;
		struct _fat_ptr * _T8F;
		{ struct _tuple0 _T90 = *_T8E;
		  _T8F = _T90.f1;
		}{ struct _fat_ptr * name = _T8F;
		  struct Cyc_Absyn_Decl * ovd = Cyc_Absyn_lookup_decl(tv_ovrs,
								      name);
		  _T5F = ovd;
		  _T60 = (unsigned int)_T5F;
		  if (! _T60) { goto _TL18C;
		  }
		  changed = 1;
		  _T61 = ovd;
		  { void * _T90 = _T61->r;
		    struct Cyc_Absyn_Aggrdecl * _T91;
		    _T62 = (int *)_T90;
		    _T63 = *_T62;
		    if (_T63 != 5) { goto _TL18E;
		    }
		    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T92 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T90;
		      _T91 = _T92->f1;
		    }{ struct Cyc_Absyn_Aggrdecl * ovd_ad = _T91;
		      struct Cyc_List_List * added_tvars = 0;
		      _T64 = ovd_ad;
		      { struct Cyc_List_List * tvs = _T64->tvs;
			_TL190: _T65 = tvs;
			_T66 = (unsigned int)_T65;
			if (_T66) { goto _TL191;
			}else { goto _TL192;
			}
			_TL191: _T67 = tvs;
			_T68 = _T67->hd;
			{ struct Cyc_Absyn_Tvar * tv = (struct Cyc_Absyn_Tvar *)_T68;
			  struct Cyc_Absyn_Tvar * tvcpy;
			  tvcpy = _cycalloc(sizeof(struct Cyc_Absyn_Tvar));
			  _T69 = tvcpy;
			  _T6A = tv;
			  *_T69 = *_T6A;
			  { struct _fat_ptr * tvn;
			    tvn = _cycalloc(sizeof(struct _fat_ptr));
			    _T6B = tvn;
			    { struct Cyc_Int_pa_PrintArg_struct _T92;
			      _T92.tag = 1;
			      Cyc_Cifc_glob_tvar_id = Cyc_Cifc_glob_tvar_id + 1;
			      _T6E = Cyc_Cifc_glob_tvar_id;
			      _T92.f1 = (unsigned long)_T6E;
			      _T6D = _T92;
			    }{ struct Cyc_Int_pa_PrintArg_struct _T92 = _T6D;
			      void * _T93[1];
			      _T93[0] = &_T92;
			      _T6F = _tag_fat("`ovr_%d",sizeof(char),8U);
			      _T70 = _tag_fat(_T93,sizeof(void *),1);
			      _T6C = Cyc_aprintf(_T6F,_T70);
			    }*_T6B = _T6C;
			    _T71 = tvcpy;
			    _T71->name = tvn;
			    _T72 = ad;
			    { struct Cyc_List_List * _T92 = _cycalloc(sizeof(struct Cyc_List_List));
			      _T92->hd = tvcpy;
			      _T74 = ad;
			      _T92->tl = _T74->tvs;
			      _T73 = (struct Cyc_List_List *)_T92;
			    }_T72->tvs = _T73;
			    _T75 = tvs;
			    tvs = _T75->tl;
			  }
			}goto _TL190;
			_TL192: _T76 = ad;
			_T77 = ad;
			_T78 = _T77->tvs;
			_T76->tvs = Cyc_List_imp_rev(_T78);
			goto _LL23;
		      }
		    }_TL18E: _T7A = Cyc_Warn_impos;
		    { int (* _T92)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									       struct _fat_ptr))_T7A;
		      _T79 = _T92;
		    }_T7B = _tag_fat("ovd must be an aggr type",sizeof(char),
				     25U);
		    _T7C = _tag_fat(0U,sizeof(void *),0);
		    _T79(_T7B,_T7C);
		    _LL23: ;
		  }goto _TL18D;
		  _TL18C: _TL18D: ;
		}
	      }_TL16D: goto _LL0;
	    }
	  case 8: 
	    { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T8E = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T89;
	      _T8A = _T8E->f1;
	    }{ struct Cyc_Absyn_Typedefdecl * td = _T8A;
	      changed = Cyc_Cifc_update_typedef_decl(te,d,tv_ovrs);
	      goto _LL0;
	    }
	  default: 
	    goto _LL0;
	  }
	  _LL0: ;
	}prev = ds;
	_T7D = ds;
	ds = _T7D->tl;
	_T7E = changed;
	if (! _T7E) { goto _TL193;
	}
	some_change = 1;
	goto _TL194;
	_TL193: _TL194: ;
      }
    }goto _TL167;
    _TL169: tv_ovrs = changed_decls;
  }_T7F = some_change;
  if (_T7F) { goto _TL195;
  }else { goto _TL166;
  }
  _TL195: niter = niter + 1;
  _T80 = niter;
  if (_T80 < 10U) { goto _TL165;
  }else { goto _TL166;
  }
  _TL166: if (niter < 10U) { goto _TL196;
  }
  { struct Cyc_String_pa_PrintArg_struct _T89;
    _T89.tag = 0;
    _T89.f1 = Cyc_Absynpp_decllist2string(changed_decls);
    _T81 = _T89;
  }{ struct Cyc_String_pa_PrintArg_struct _T89 = _T81;
    void * _T8A[1];
    _T8A[0] = &_T89;
    _T82 = Cyc_stderr;
    _T83 = _tag_fat("Suspected mutually recursive structs involving the following decls\n %s",
		    sizeof(char),71U);
    _T84 = _tag_fat(_T8A,sizeof(void *),1);
    Cyc_fprintf(_T82,_T83,_T84);
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T89;
    _T89.tag = 0;
    _T89.f1 = _tag_fat("Suspected mutually recursive structs -- abandoning cifc",
		       sizeof(char),56U);
    _T85 = _T89;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T89 = _T85;
    void * _T8A[1];
    _T8A[0] = &_T89;
    _T86 = loc;
    _T87 = _tag_fat(_T8A,sizeof(void *),1);
    Cyc_Warn_err2(_T86,_T87);
  }goto _TL197;
  _TL196: _TL197: _T88 = abs_decls;
  return _T88;
}
static void Cyc_Cifc_i_clear_vartype_ids(void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Absyn_Tvar * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  unsigned int _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_Absyn_PtrInfo _TC;
  void * _TD;
  void * _TE;
  struct Cyc_Absyn_ArrayInfo _TF;
  void * _T10;
  void * _T11;
  struct Cyc_Absyn_FnInfo _T12;
  void * _T13;
  struct Cyc_Absyn_FnInfo _T14;
  struct Cyc_List_List * _T15;
  unsigned int _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  struct Cyc_List_List * _T19;
  void * _T1A;
  void * _T1B;
  struct Cyc_List_List * _T1C;
  unsigned int _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_Absyn_FnInfo _T21;
  struct Cyc_Absyn_ArrayInfo _T22;
  struct Cyc_Absyn_PtrInfo _T23;
  struct Cyc_List_List * _T24;
  void * _T25;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 2: 
    _T3 = t;
    { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T26 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T3;
      _T25 = _T26->f1;
    }{ struct Cyc_Absyn_Tvar * tv = _T25;
      _T4 = tv;
      _T4->identity = - 1;
      goto _LL0;
    }
  case 0: 
    _T5 = t;
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T26 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5;
      _T24 = _T26->f2;
    }{ struct Cyc_List_List * ts = _T24;
      _TL199: _T6 = ts;
      _T7 = (unsigned int)_T6;
      if (_T7) { goto _TL19A;
      }else { goto _TL19B;
      }
      _TL19A: _T8 = ts;
      _T9 = _T8->hd;
      Cyc_Cifc_i_clear_vartype_ids(_T9);
      _TA = ts;
      ts = _TA->tl;
      goto _TL199;
      _TL19B: goto _LL0;
    }
  case 4: 
    _TB = t;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T26 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TB;
      _T23 = _T26->f1;
    }{ struct Cyc_Absyn_PtrInfo pi = _T23;
      _TC = pi;
      _TD = _TC.elt_type;
      Cyc_Cifc_i_clear_vartype_ids(_TD);
      goto _LL0;
    }
  case 5: 
    _TE = t;
    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T26 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_TE;
      _T22 = _T26->f1;
    }{ struct Cyc_Absyn_ArrayInfo ai = _T22;
      _TF = ai;
      _T10 = _TF.elt_type;
      Cyc_Cifc_i_clear_vartype_ids(_T10);
      goto _LL0;
    }
  case 6: 
    _T11 = t;
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T26 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T11;
      _T21 = _T26->f1;
    }{ struct Cyc_Absyn_FnInfo fi = _T21;
      _T12 = fi;
      _T13 = _T12.ret_type;
      Cyc_Cifc_i_clear_vartype_ids(_T13);
      _T14 = fi;
      { struct Cyc_List_List * argit = _T14.args;
	_TL19C: _T15 = argit;
	_T16 = (unsigned int)_T15;
	if (_T16) { goto _TL19D;
	}else { goto _TL19E;
	}
	_TL19D: _T17 = argit;
	_T18 = _T17->hd;
	{ struct _tuple8 * _T26 = (struct _tuple8 *)_T18;
	  void * _T27;
	  { struct _tuple8 _T28 = *_T26;
	    _T27 = _T28.f2;
	  }{ void * at = _T27;
	    Cyc_Cifc_i_clear_vartype_ids(at);
	    _T19 = argit;
	    argit = _T19->tl;
	  }
	}goto _TL19C;
	_TL19E: goto _LL0;
      }
    }
  case 8: 
    _T1A = t;
    { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T26 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T1A;
      _T24 = _T26->f2;
      _T1B = _T26->f4;
      _T25 = (void *)_T1B;
    }{ struct Cyc_List_List * ts = _T24;
      void * to = _T25;
      _TL19F: _T1C = ts;
      _T1D = (unsigned int)_T1C;
      if (_T1D) { goto _TL1A0;
      }else { goto _TL1A1;
      }
      _TL1A0: _T1E = ts;
      _T1F = _T1E->hd;
      Cyc_Cifc_i_clear_vartype_ids(_T1F);
      _T20 = ts;
      ts = _T20->tl;
      goto _TL19F;
      _TL1A1: goto _LL0;
    }
  default: 
    goto _LL0;
  }
  _LL0: ;
}
static void Cyc_Cifc_clear_vartype_ids(struct Cyc_Absyn_Decl * d) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Vardecl * _T3;
  void * _T4;
  struct Cyc_Absyn_Fndecl * _T5;
  struct Cyc_Absyn_FnInfo _T6;
  void * _T7;
  struct Cyc_Absyn_Fndecl * _T8;
  struct Cyc_Absyn_FnInfo _T9;
  struct Cyc_List_List * _TA;
  unsigned int _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  struct _tuple8 * _TE;
  struct _tuple8 _TF;
  void * _T10;
  struct Cyc_Absyn_Fndecl * _T11;
  _T0 = d;
  { void * _T12 = _T0->r;
    struct Cyc_Absyn_Typedefdecl * _T13;
    struct Cyc_Absyn_Aggrdecl * _T14;
    struct Cyc_Absyn_Fndecl * _T15;
    struct Cyc_Absyn_Vardecl * _T16;
    _T1 = (int *)_T12;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T17 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T12;
	_T16 = _T17->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T16;
	_T3 = vd;
	_T4 = _T3->type;
	Cyc_Cifc_i_clear_vartype_ids(_T4);
	goto _LL0;
      }
    case 1: 
      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T17 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T12;
	_T15 = _T17->f1;
      }{ struct Cyc_Absyn_Fndecl * fd = _T15;
	_T5 = fd;
	_T6 = _T5->i;
	_T7 = _T6.ret_type;
	Cyc_Cifc_i_clear_vartype_ids(_T7);
	_T8 = fd;
	_T9 = _T8->i;
	{ struct Cyc_List_List * ai = _T9.args;
	  _TL1A3: _TA = ai;
	  _TB = (unsigned int)_TA;
	  if (_TB) { goto _TL1A4;
	  }else { goto _TL1A5;
	  }
	  _TL1A4: _TC = ai;
	  _TD = _TC->hd;
	  _TE = (struct _tuple8 *)_TD;
	  _TF = *_TE;
	  _T10 = _TF.f2;
	  Cyc_Cifc_i_clear_vartype_ids(_T10);
	  goto _TL1A3;
	  _TL1A5: _T11 = fd;
	  (_T11->i).tvars = 0;
	  goto _LL0;
	}
      }
    case 5: 
      { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T17 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T12;
	_T14 = _T17->f1;
      }{ struct Cyc_Absyn_Aggrdecl * ad = _T14;
	goto _LL0;
      }
    case 8: 
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T17 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T12;
	_T13 = _T17->f1;
      }{ struct Cyc_Absyn_Typedefdecl * td = _T13;
	goto _LL0;
      }
    default: 
      goto _LL0;
    }
    _LL0: ;
  }
}
static long Cyc_Cifc_eq(void * a,void * b) {
  int _T0;
  _T0 = a == b;
  return _T0;
}
static long Cyc_Cifc_decl_not_present(struct Cyc_List_List * l,struct Cyc_Absyn_Decl * a) {
  long (* _T0)(long (*)(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Decl *),
	       struct Cyc_Absyn_Decl *,struct Cyc_List_List *);
  long (* _T1)(long (*)(void *,void *),void *,struct Cyc_List_List *);
  long (* _T2)(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Decl *);
  struct Cyc_Absyn_Decl * _T3;
  struct Cyc_List_List * _T4;
  long _T5;
  int _T6;
  _T1 = Cyc_List_exists_c;
  { long (* _T7)(long (*)(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Decl *),
		 struct Cyc_Absyn_Decl *,struct Cyc_List_List *) = (long (*)(long (*)(struct Cyc_Absyn_Decl *,
										      struct Cyc_Absyn_Decl *),
									     struct Cyc_Absyn_Decl *,
									     struct Cyc_List_List *))_T1;
    _T0 = _T7;
  }{ long (* _T7)(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Decl *) = (long (*)(struct Cyc_Absyn_Decl *,
									       struct Cyc_Absyn_Decl *))Cyc_Cifc_eq;
    _T2 = _T7;
  }_T3 = a;
  _T4 = l;
  _T5 = _T0(_T2,_T3,_T4);
  _T6 = ! _T5;
  return _T6;
}
void Cyc_Cifc_user_overrides(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
			     struct Cyc_List_List * * ds,struct Cyc_List_List * ovrs) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _fat_ptr * _T2;
  unsigned int _T3;
  struct Cyc_Absyn_Decl * _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct Cyc_List_List * * _T8;
  struct Cyc_List_List * _T9;
  struct _fat_ptr * _TA;
  struct Cyc_Absyn_Decl * _TB;
  unsigned int _TC;
  struct Cyc_String_pa_PrintArg_struct _TD;
  struct _fat_ptr * _TE;
  struct Cyc_Absyn_Decl * _TF;
  unsigned int _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  struct Cyc_List_List * _T13;
  long _T14;
  long _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_List_List * (* _T19)(long (*)(struct Cyc_List_List *,struct Cyc_Absyn_Decl *),
				  struct Cyc_List_List *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T1A)(long (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_List_List * _T1B;
  struct Cyc_List_List * * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  unsigned int _T21;
  struct Cyc_List_List * * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_List_List * * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_List_List * type_overrides = 0;
  struct Cyc_List_List * overriden_decls = 0;
  struct Cyc_List_List * abs_decls = 0;
  { struct Cyc_List_List * x = ovrs;
    _TL1A9: if (x != 0) { goto _TL1A7;
    }else { goto _TL1A8;
    }
    _TL1A7: _T0 = x;
    _T1 = _T0->hd;
    { struct Cyc_Absyn_Decl * ud = (struct Cyc_Absyn_Decl *)_T1;
      struct _fat_ptr * un = Cyc_Absyn_decl_name(ud);
      _T2 = un;
      _T3 = (unsigned int)_T2;
      if (_T3) { goto _TL1AA;
      }else { goto _TL1AC;
      }
      _TL1AC: _T4 = ud;
      _T5 = _T4->loc;
      _T6 = _tag_fat("Overriding decl without a name\n",sizeof(char),32U);
      _T7 = _tag_fat(0U,sizeof(void *),0);
      Cyc_Warn_warn(_T5,_T6,_T7);
      goto _TL1AB;
      _TL1AA: _T8 = _check_null(ds);
      _T9 = *_T8;
      _TA = un;
      { struct Cyc_Absyn_Decl * d = Cyc_Cifc_lookup_concrete_decl(_T9,_TA);
	_TB = d;
	_TC = (unsigned int)_TB;
	if (_TC) { goto _TL1AD;
	}else { goto _TL1AF;
	}
	_TL1AF: { struct Cyc_String_pa_PrintArg_struct _T26;
	  _T26.tag = 0;
	  _TE = un;
	  _T26.f1 = *_TE;
	  _TD = _T26;
	}{ struct Cyc_String_pa_PrintArg_struct _T26 = _TD;
	  void * _T27[1];
	  _T27[0] = &_T26;
	  _TF = ud;
	  _T10 = _TF->loc;
	  _T11 = _tag_fat("%s is overridden but not defined",sizeof(char),
			  33U);
	  _T12 = _tag_fat(_T27,sizeof(void *),1);
	  Cyc_Warn_warn(_T10,_T11,_T12);
	}goto _TL1AE;
	_TL1AD: { struct Cyc_List_List * _T26 = _cycalloc(sizeof(struct Cyc_List_List));
	  _T26->hd = d;
	  _T26->tl = overriden_decls;
	  _T13 = (struct Cyc_List_List *)_T26;
	}overriden_decls = _T13;
	{ long pre_tvars_d = Cyc_Cifc_contains_type_vars(d);
	  Cyc_Cifc_merge_sys_user_decl(loc,te,0,ud,d);
	  Cyc_Cifc_clear_vartype_ids(ud);
	  _T14 = Cyc_Cifc_contains_type_vars(ud);
	  if (! _T14) { goto _TL1B0;
	  }
	  _T15 = pre_tvars_d;
	  if (_T15) { goto _TL1B0;
	  }else { goto _TL1B2;
	  }
	  _TL1B2: { struct Cyc_List_List * _T26 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T26->hd = Cyc_Cifc_make_abstract_decl(ud);
	    _T26->tl = abs_decls;
	    _T16 = (struct Cyc_List_List *)_T26;
	  }abs_decls = _T16;
	  { struct Cyc_List_List * _T26 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T26->hd = d;
	    _T26->tl = type_overrides;
	    _T17 = (struct Cyc_List_List *)_T26;
	  }type_overrides = _T17;
	  goto _TL1B1;
	  _TL1B0: _TL1B1: ;
	}_TL1AE: ;
      }_TL1AB: ;
    }_T18 = x;
    x = _T18->tl;
    goto _TL1A9;
    _TL1A8: ;
  }_T1A = Cyc_List_filter_c;
  { struct Cyc_List_List * (* _T26)(long (*)(struct Cyc_List_List *,struct Cyc_Absyn_Decl *),
				    struct Cyc_List_List *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(long (*)(struct Cyc_List_List *,
															  struct Cyc_Absyn_Decl *),
														 struct Cyc_List_List *,
														 struct Cyc_List_List *))_T1A;
    _T19 = _T26;
  }_T1B = overriden_decls;
  _T1C = _check_null(ds);
  _T1D = *_T1C;
  { struct Cyc_List_List * unoverriden_decls = _T19(Cyc_Cifc_decl_not_present,
						    _T1B,_T1D);
    _T1E = abs_decls;
    _T1F = Cyc_Cifc_update_usages(loc,te,type_overrides,unoverriden_decls);
    abs_decls = Cyc_List_append(_T1E,_T1F);
    _T20 = abs_decls;
    _T21 = (unsigned int)_T20;
    if (! _T21) { goto _TL1B3;
    }
    _T22 = ds;
    _T23 = abs_decls;
    _T24 = ds;
    _T25 = *_T24;
    *_T22 = Cyc_List_append(_T23,_T25);
    goto _TL1B4;
    _TL1B3: _TL1B4: ;
  }
}
