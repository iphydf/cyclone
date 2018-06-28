#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
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
enum Cyc_Absyn_Sign {
  Cyc_Absyn_Signed = 0U,
  Cyc_Absyn_Unsigned = 1U,
  Cyc_Absyn_None = 2U
};
enum Cyc_Absyn_AggrKind {
  Cyc_Absyn_StructA = 0U,
  Cyc_Absyn_UnionA = 1U
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
 struct Cyc_Absyn_ArrayInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_Absyn_Exp * num_elts;
  void * zero_term;
  unsigned int zt_loc;
};
 struct Cyc_Absyn_ArrayType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_ArrayInfo f1;
};
 struct _union_Cnst_Null_c {
  int tag;
  int val;
};
 struct _tuple3 {
  enum Cyc_Absyn_Sign f0;
  char f1;
};
 struct _union_Cnst_Char_c {
  int tag;
  struct _tuple3 val;
};
 struct _union_Cnst_Wchar_c {
  int tag;
  struct _fat_ptr val;
};
 struct _tuple4 {
  enum Cyc_Absyn_Sign f0;
  short f1;
};
 struct _union_Cnst_Short_c {
  int tag;
  struct _tuple4 val;
};
 struct _tuple5 {
  enum Cyc_Absyn_Sign f0;
  int f1;
};
 struct _union_Cnst_Int_c {
  int tag;
  struct _tuple5 val;
};
 struct _tuple6 {
  enum Cyc_Absyn_Sign f0;
  long long f1;
};
 struct _union_Cnst_LongLong_c {
  int tag;
  struct _tuple6 val;
};
 struct _union_Cnst_Int128_c {
  int tag;
  struct _tuple6 val;
};
 struct _tuple7 {
  struct _fat_ptr f0;
  int f1;
};
 struct _union_Cnst_Float_c {
  int tag;
  struct _tuple7 val;
};
 struct _union_Cnst_String_c {
  int tag;
  struct _fat_ptr val;
};
 struct _union_Cnst_Wstring_c {
  int tag;
  struct _fat_ptr val;
};
 union Cyc_Absyn_Cnst {
  struct _union_Cnst_Null_c Null_c;
  struct _union_Cnst_Char_c Char_c;
  struct _union_Cnst_Wchar_c Wchar_c;
  struct _union_Cnst_Short_c Short_c;
  struct _union_Cnst_Int_c Int_c;
  struct _union_Cnst_LongLong_c LongLong_c;
  struct _union_Cnst_Int128_c Int128_c;
  struct _union_Cnst_Float_c Float_c;
  struct _union_Cnst_String_c String_c;
  struct _union_Cnst_Wstring_c Wstring_c;
};
enum Cyc_Absyn_Primop {
  Cyc_Absyn_Plus = 0U,
  Cyc_Absyn_Times = 1U,
  Cyc_Absyn_Minus = 2U,
  Cyc_Absyn_Div = 3U,
  Cyc_Absyn_Mod = 4U,
  Cyc_Absyn_Eq = 5U,
  Cyc_Absyn_Neq = 6U,
  Cyc_Absyn_Gt = 7U,
  Cyc_Absyn_Lt = 8U,
  Cyc_Absyn_Gte = 9U,
  Cyc_Absyn_Lte = 10U,
  Cyc_Absyn_Not = 11U,
  Cyc_Absyn_Bitnot = 12U,
  Cyc_Absyn_Bitand = 13U,
  Cyc_Absyn_Bitor = 14U,
  Cyc_Absyn_Bitxor = 15U,
  Cyc_Absyn_Bitlshift = 16U,
  Cyc_Absyn_Bitlrshift = 17U,
  Cyc_Absyn_Numelts = 18U,
  Cyc_Absyn_Tagof = 19U,
  Cyc_Absyn_UDiv = 20U,
  Cyc_Absyn_UMod = 21U,
  Cyc_Absyn_UGt = 22U,
  Cyc_Absyn_ULt = 23U,
  Cyc_Absyn_UGte = 24U,
  Cyc_Absyn_ULte = 25U
};
 struct Cyc_Absyn_PrimopOpt {
  enum Cyc_Absyn_Primop v;
};
enum Cyc_Absyn_Incrementor {
  Cyc_Absyn_PreInc = 0U,
  Cyc_Absyn_PostInc = 1U,
  Cyc_Absyn_PreDec = 2U,
  Cyc_Absyn_PostDec = 3U
};
 struct Cyc_Absyn_VarargCallInfo {
  int num_varargs;
  struct Cyc_List_List * injectors;
  struct Cyc_Absyn_VarargInfo * vai;
};
enum Cyc_Absyn_Coercion {
  Cyc_Absyn_Unknown_coercion = 0U,
  Cyc_Absyn_No_coercion = 1U,
  Cyc_Absyn_Null_to_NonNull = 2U,
  Cyc_Absyn_Subset_coercion = 3U,
  Cyc_Absyn_Other_coercion = 4U
};
 struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct {
  int tag;
  union Cyc_Absyn_Cnst f1;
};
 struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct {
  int tag;
  enum Cyc_Absyn_Primop f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_PrimopOpt * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  enum Cyc_Absyn_Incrementor f2;
};
 struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_List_List * f2;
  struct Cyc_Absyn_VarargCallInfo * f3;
  long f4;
};
 struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Exp * f2;
  long f3;
  enum Cyc_Absyn_Coercion f4;
};
 struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
  long f3;
  long f4;
};
 struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
  long f3;
  long f4;
};
 struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
  long f4;
};
 struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  void * f2;
  long f3;
};
 struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct {
  int tag;
  struct _tuple0 * f1;
  struct Cyc_List_List * f2;
  struct Cyc_List_List * f3;
  struct Cyc_Absyn_Aggrdecl * f4;
};
 struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Absyn_Exp {
  void * topt;
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Decl * f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Stmt {
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Local_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
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
 struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Fndecl * f1;
};
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
void * Cyc_Absyn_compress(void *);
extern void * Cyc_Absyn_char_type;
extern void * Cyc_Absyn_uint_type;
extern void * Cyc_Absyn_sint_type;
void * Cyc_Absyn_cstar_type(void *,struct Cyc_Absyn_Tqual);
void * Cyc_Absyn_strctq(struct _tuple0 *);
void * Cyc_Absyn_unionq_type(struct _tuple0 *);
struct Cyc_Absyn_Exp * Cyc_Absyn_signed_int_exp(int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_char_exp(char,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_var_exp(struct _tuple0 *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_varb_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_lt_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_assign_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					    unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_increment_exp(struct Cyc_Absyn_Exp *,enum Cyc_Absyn_Incrementor,
					       unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_seq_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					 unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_cast_exp(void *,struct Cyc_Absyn_Exp *,long,
					  enum Cyc_Absyn_Coercion,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_deref_exp(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_aggrmember_exp(struct Cyc_Absyn_Exp *,struct _fat_ptr *,
						unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_aggrarrow_exp(struct Cyc_Absyn_Exp *,struct _fat_ptr *,
					       unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_subscript_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					       unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_stmt_exp(struct Cyc_Absyn_Stmt *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_set_type(struct Cyc_Absyn_Exp *,void *);
struct Cyc_Absyn_Stmt * Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_seq_stmt(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *,
					   unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_for_stmt(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					   struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Stmt *,
					   unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Stmt *,
					    unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_declare_stmt(struct _tuple0 *,void *,struct Cyc_Absyn_Exp *,
					       struct Cyc_Absyn_Stmt *,unsigned int);
struct _fat_ptr * Cyc_Absyn_designatorlist_to_fieldname(struct Cyc_List_List *);
void Cyc_Absyn_visit_stmt(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									   struct Cyc_Absyn_Stmt *),
			  void *,struct Cyc_Absyn_Stmt *);
long Cyc_Tcutil_is_array_type(void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_deep_copy_exp(long,struct Cyc_Absyn_Exp *);
int Cyc_Tcutil_typecmp(void *,void *);
struct _tuple0 * Cyc_Toc_temp_var();
extern char Cyc_Toc_NewInfo[8U];
 struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct {
  char * tag;
  struct Cyc_Absyn_Exp * f1;
  void * f2;
};
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Exp_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
void * Cyc_Warn_impos2(struct _fat_ptr);
static struct Cyc_Absyn_Exp * Cyc_RemoveAggrs_deep_copy(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  _T0 = Cyc_Tcutil_deep_copy_exp(1,e);
  return _T0;
}
static struct Cyc_Absyn_Exp * Cyc_RemoveAggrs_member_exp(struct Cyc_Absyn_Exp * e,
							 struct _fat_ptr * f,
							 unsigned int loc) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct Cyc_Absyn_Exp * _T4;
  _T0 = e;
  { void * _T5 = _T0->r;
    struct Cyc_Absyn_Exp * _T6;
    _T1 = (int *)_T5;
    _T2 = *_T1;
    if (_T2 != 20) { goto _TL0;
    }
    { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T7 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T5;
      _T6 = _T7->f1;
    }{ struct Cyc_Absyn_Exp * e1 = _T6;
      _T3 = Cyc_Absyn_aggrarrow_exp(e1,f,loc);
      return _T3;
    }_TL0: _T4 = Cyc_Absyn_aggrmember_exp(e,f,loc);
    return _T4;
    ;
  }
}
enum Cyc_RemoveAggrs_ExpContext {
  Cyc_RemoveAggrs_Initializer = 0U,
  Cyc_RemoveAggrs_NewDest = 1U,
  Cyc_RemoveAggrs_AggrField = 2U,
  Cyc_RemoveAggrs_Other = 3U
};
 struct Cyc_RemoveAggrs_Env {
  enum Cyc_RemoveAggrs_ExpContext ctxt;
  struct Cyc_Absyn_Exp * dest;
};
static struct Cyc_RemoveAggrs_Env Cyc_RemoveAggrs_other_env = {Cyc_RemoveAggrs_Other,
							       0};
static struct Cyc_RemoveAggrs_Env Cyc_RemoveAggrs_no_init(struct Cyc_RemoveAggrs_Env env) {
  struct Cyc_RemoveAggrs_Env _T0;
  struct Cyc_RemoveAggrs_Env _T1;
  enum Cyc_RemoveAggrs_ExpContext _T2;
  int _T3;
  _T1 = env;
  _T2 = _T1.ctxt;
  _T3 = (int)_T2;
  if (_T3 != 0) { goto _TL2;
  }
  _T0 = Cyc_RemoveAggrs_other_env;
  goto _TL3;
  _TL2: _T0 = env;
  _TL3: return _T0;
}
enum Cyc_RemoveAggrs_ExpResult {
  Cyc_RemoveAggrs_WasArray = 0U,
  Cyc_RemoveAggrs_UsedInitializer = 1U,
  Cyc_RemoveAggrs_OtherRes = 2U
};
 struct Cyc_RemoveAggrs_Result {
  enum Cyc_RemoveAggrs_ExpResult res;
};
static struct Cyc_RemoveAggrs_Result Cyc_RemoveAggrs_remove_aggrs_exp(struct Cyc_RemoveAggrs_Env,
								      struct Cyc_Absyn_Exp *);
static void Cyc_RemoveAggrs_remove_aggrs_stmt(struct Cyc_Absyn_Stmt *);
static void Cyc_RemoveAggrs_noarray_remove_aggrs_exp(struct Cyc_RemoveAggrs_Env env,
						     struct Cyc_Absyn_Exp * e) {
  enum Cyc_RemoveAggrs_ExpResult _T0;
  int _T1;
  struct Cyc_Warn_String_Warn_Warg_struct _T2;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T3;
  int (* _T4)(struct _fat_ptr);
  void * (* _T5)(struct _fat_ptr);
  struct _fat_ptr _T6;
  struct Cyc_RemoveAggrs_Result _T7 = Cyc_RemoveAggrs_remove_aggrs_exp(env,
								       e);
  enum Cyc_RemoveAggrs_ExpResult _T8;
  _T8 = _T7.res;
  { enum Cyc_RemoveAggrs_ExpResult r = _T8;
    _T0 = r;
    _T1 = (int)_T0;
    if (_T1 != 0) { goto _TL4;
    }
    { struct Cyc_Warn_String_Warn_Warg_struct _T9;
      _T9.tag = 0;
      _T9.f1 = _tag_fat("remove_aggrs_exp -- unexpected array or comprehension: ",
			sizeof(char),56U);
      _T2 = _T9;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T9 = _T2;
      { struct Cyc_Warn_Exp_Warn_Warg_struct _TA;
	_TA.tag = 4;
	_TA.f1 = e;
	_T3 = _TA;
      }{ struct Cyc_Warn_Exp_Warn_Warg_struct _TA = _T3;
	void * _TB[2];
	_TB[0] = &_T9;
	_TB[1] = &_TA;
	_T5 = Cyc_Warn_impos2;
	{ int (* _TC)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T5;
	  _T4 = _TC;
	}_T6 = _tag_fat(_TB,sizeof(void *),2);
	_T4(_T6);
      }
    }goto _TL5;
    _TL4: _TL5: ;
  }
}
static long Cyc_RemoveAggrs_can_use_initializer(struct Cyc_Absyn_Exp * e,
						void * t) {
  int _T0;
  struct Cyc_Absyn_Exp * _T1;
  void * _T2;
  unsigned int _T3;
  struct Cyc_Absyn_Exp * _T4;
  void * _T5;
  long _T6;
  struct Cyc_Absyn_Exp * _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  int _TB;
  _T1 = e;
  _T2 = _T1->topt;
  _T3 = (unsigned int)_T2;
  if (! _T3) { goto _TL6;
  }
  _T4 = e;
  _T5 = _T4->topt;
  _T6 = Cyc_Tcutil_is_array_type(_T5);
  if (_T6) { goto _TL6;
  }else { goto _TL8;
  }
  _TL8: _T7 = e;
  _T8 = _T7->topt;
  _T9 = _check_null(_T8);
  _TA = t;
  _TB = Cyc_Tcutil_typecmp(_T9,_TA);
  _T0 = _TB == 0;
  goto _TL7;
  _TL6: _T0 = 0;
  _TL7: return _T0;
}
 struct _tuple13 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Exp * f1;
};
static struct Cyc_RemoveAggrs_Result Cyc_RemoveAggrs_remove_aggrs_exp(struct Cyc_RemoveAggrs_Env env,
								      struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T3;
  union Cyc_Absyn_Cnst _T4;
  struct _union_Cnst_String_c _T5;
  unsigned int _T6;
  union Cyc_Absyn_Cnst _T7;
  struct _union_Cnst_String_c _T8;
  struct Cyc_RemoveAggrs_Env _T9;
  enum Cyc_RemoveAggrs_ExpContext _TA;
  int _TB;
  struct Cyc_Absyn_Exp * _TC;
  void * _TD;
  void * _TE;
  long _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  unsigned char * _T12;
  const char * _T13;
  const char * _T14;
  unsigned int _T15;
  int _T16;
  char _T17;
  struct Cyc_Absyn_Exp * _T18;
  struct Cyc_List_List * _T19;
  struct _tuple13 * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T1C;
  struct Cyc_RemoveAggrs_Result _T1D;
  struct Cyc_Absyn_Exp * _T1E;
  struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct * _T1F;
  char * _T20;
  char * _T21;
  void * _T22;
  struct Cyc_RemoveAggrs_Env _T23;
  enum Cyc_RemoveAggrs_ExpContext _T24;
  int _T25;
  struct Cyc_RemoveAggrs_Env _T26;
  struct Cyc_Absyn_Exp * _T27;
  struct Cyc_Absyn_Exp * _T28;
  void * _T29;
  long _T2A;
  struct Cyc_RemoveAggrs_Env _T2B;
  struct Cyc_RemoveAggrs_Env _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  struct Cyc_Absyn_Exp * _T2E;
  struct Cyc_RemoveAggrs_Env _T2F;
  struct Cyc_Absyn_Exp * _T30;
  struct Cyc_Absyn_Exp * _T31;
  struct Cyc_Absyn_Exp * _T32;
  struct Cyc_RemoveAggrs_Env _T33;
  struct Cyc_Absyn_Exp * _T34;
  void * _T35;
  void * _T36;
  struct Cyc_Absyn_Exp * _T37;
  struct Cyc_Absyn_Exp * _T38;
  struct Cyc_Absyn_Exp * _T39;
  struct Cyc_Absyn_Exp * _T3A;
  struct Cyc_Absyn_Exp * _T3B;
  struct Cyc_Absyn_Exp * _T3C;
  void * _T3D;
  struct Cyc_RemoveAggrs_Env _T3E;
  struct Cyc_Absyn_Exp * _T3F;
  struct Cyc_Absyn_Exp * _T40;
  void * _T41;
  struct Cyc_Absyn_Exp * _T42;
  void * _T43;
  struct Cyc_Absyn_Exp * _T44;
  struct Cyc_Absyn_Exp * _T45;
  struct Cyc_Absyn_Exp * _T46;
  void * _T47;
  void * _T48;
  struct _tuple0 * _T49;
  void * _T4A;
  struct Cyc_Absyn_Exp * _T4B;
  struct Cyc_Absyn_Stmt * _T4C;
  struct Cyc_Absyn_Stmt * _T4D;
  struct Cyc_Absyn_Stmt * _T4E;
  struct Cyc_Absyn_Exp * _T4F;
  struct Cyc_Absyn_Exp * _T50;
  int (* _T51)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T52)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T53;
  struct _fat_ptr _T54;
  int _T55;
  struct Cyc_RemoveAggrs_Env _T56;
  enum Cyc_RemoveAggrs_ExpContext _T57;
  int _T58;
  struct Cyc_RemoveAggrs_Env _T59;
  enum Cyc_RemoveAggrs_ExpContext _T5A;
  int _T5B;
  void * (* _T5C)(struct _tuple0 *);
  struct Cyc_Absyn_Aggrdecl * _T5D;
  unsigned int _T5E;
  struct Cyc_Absyn_Aggrdecl * _T5F;
  enum Cyc_Absyn_AggrKind _T60;
  int _T61;
  long _T62;
  struct _tuple0 * * _T63;
  struct _tuple0 * * _T64;
  struct _tuple0 * _T65;
  struct Cyc_Absyn_Exp * _T66;
  void * _T67;
  struct Cyc_RemoveAggrs_Env _T68;
  struct Cyc_Absyn_Exp * _T69;
  struct Cyc_RemoveAggrs_Env _T6A;
  enum Cyc_RemoveAggrs_ExpContext _T6B;
  int _T6C;
  struct Cyc_Absyn_Exp * _T6D;
  void * _T6E;
  struct Cyc_List_List * _T6F;
  void * _T70;
  struct Cyc_Absyn_Exp * _T71;
  struct _fat_ptr * _T72;
  struct Cyc_Absyn_Exp * _T73;
  struct Cyc_Absyn_Exp * _T74;
  void * _T75;
  void * _T76;
  struct Cyc_RemoveAggrs_Env _T77;
  struct Cyc_Absyn_Exp * _T78;
  struct Cyc_List_List * _T79;
  int (* _T7A)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T7B)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T7C;
  struct _fat_ptr _T7D;
  struct Cyc_List_List * _T7E;
  void * _T7F;
  struct _tuple13 * _T80;
  struct _tuple13 _T81;
  struct Cyc_List_List * _T82;
  struct Cyc_List_List * _T83;
  void * _T84;
  struct _tuple13 * _T85;
  struct _tuple13 _T86;
  struct Cyc_Absyn_Exp * _T87;
  void * _T88;
  struct Cyc_Warn_String_Warn_Warg_struct _T89;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T8A;
  struct Cyc_Warn_String_Warn_Warg_struct _T8B;
  int (* _T8C)(struct _fat_ptr);
  void * (* _T8D)(struct _fat_ptr);
  struct _fat_ptr _T8E;
  struct Cyc_Absyn_Exp * _T8F;
  struct Cyc_Absyn_Exp * _T90;
  void * _T91;
  void * _T92;
  struct Cyc_List_List * _T93;
  long _T94;
  struct Cyc_Absyn_Exp * _T95;
  struct _tuple0 * * _T96;
  struct _tuple0 * _T97;
  void * _T98;
  struct Cyc_Absyn_Stmt * _T99;
  struct Cyc_Absyn_Stmt * _T9A;
  struct Cyc_Absyn_Stmt * _T9B;
  struct Cyc_Absyn_Stmt * _T9C;
  struct Cyc_Absyn_Exp * _T9D;
  struct Cyc_Absyn_Exp * _T9E;
  struct Cyc_Absyn_Exp * _T9F;
  struct Cyc_Absyn_Exp * _TA0;
  struct Cyc_Absyn_Exp * _TA1;
  struct Cyc_Absyn_Exp * _TA2;
  struct Cyc_Absyn_Exp * _TA3;
  void * _TA4;
  struct Cyc_Absyn_Exp * _TA5;
  struct Cyc_RemoveAggrs_Env _TA6;
  int (* _TA7)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TA8)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TA9;
  struct _fat_ptr _TAA;
  struct Cyc_RemoveAggrs_Env _TAB;
  struct Cyc_Absyn_Exp * _TAC;
  struct Cyc_Absyn_Exp * _TAD;
  void * _TAE;
  void * _TAF;
  int * _TB0;
  int _TB1;
  struct Cyc_Absyn_ArrayInfo _TB2;
  void * _TB3;
  struct Cyc_Absyn_ArrayInfo _TB4;
  struct Cyc_Absyn_Tqual _TB5;
  struct Cyc_Absyn_Exp * _TB6;
  void * _TB7;
  struct Cyc_List_List * _TB8;
  void * _TB9;
  struct Cyc_Absyn_Exp * _TBA;
  struct Cyc_Absyn_Exp * _TBB;
  void * _TBC;
  struct Cyc_Absyn_Exp * _TBD;
  struct Cyc_Absyn_Exp * _TBE;
  void * _TBF;
  struct Cyc_RemoveAggrs_Env _TC0;
  struct Cyc_Absyn_Exp * _TC1;
  struct Cyc_List_List * _TC2;
  struct Cyc_List_List * _TC3;
  void * _TC4;
  struct _tuple13 * _TC5;
  struct _tuple13 _TC6;
  struct Cyc_List_List * _TC7;
  struct Cyc_List_List * _TC8;
  void * _TC9;
  struct _tuple13 * _TCA;
  struct _tuple13 _TCB;
  struct Cyc_Absyn_Exp * _TCC;
  struct Cyc_Absyn_Exp * _TCD;
  void * _TCE;
  void * _TCF;
  struct Cyc_List_List * _TD0;
  struct Cyc_Absyn_Exp * _TD1;
  struct Cyc_Absyn_Exp * _TD2;
  struct Cyc_Absyn_Exp * _TD3;
  struct Cyc_Absyn_Exp * _TD4;
  struct Cyc_RemoveAggrs_Env _TD5;
  int (* _TD6)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TD7)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TD8;
  struct _fat_ptr _TD9;
  struct Cyc_Absyn_Vardecl * _TDA;
  struct Cyc_Absyn_Exp * _TDB;
  void * _TDC;
  struct Cyc_Absyn_Exp * _TDD;
  struct Cyc_Absyn_Exp * _TDE;
  void * _TDF;
  struct Cyc_Absyn_Exp * _TE0;
  struct Cyc_Absyn_Exp * _TE1;
  void * _TE2;
  struct Cyc_Absyn_Exp * _TE3;
  struct Cyc_Absyn_Exp * _TE4;
  void * _TE5;
  struct Cyc_Absyn_Exp * _TE6;
  struct Cyc_Absyn_Exp * _TE7;
  void * _TE8;
  struct Cyc_Absyn_Exp * _TE9;
  struct Cyc_RemoveAggrs_Env _TEA;
  struct Cyc_Absyn_Exp * _TEB;
  struct Cyc_Absyn_Exp * _TEC;
  void * _TED;
  void * _TEE;
  int * _TEF;
  int _TF0;
  struct Cyc_Absyn_ArrayInfo _TF1;
  void * _TF2;
  struct Cyc_Absyn_ArrayInfo _TF3;
  struct Cyc_Absyn_Tqual _TF4;
  struct Cyc_Absyn_Exp * _TF5;
  void * _TF6;
  struct Cyc_RemoveAggrs_Env _TF7;
  struct Cyc_Absyn_Exp * _TF8;
  struct Cyc_Absyn_Exp * _TF9;
  void * _TFA;
  struct Cyc_Absyn_Exp * _TFB;
  struct Cyc_RemoveAggrs_Env _TFC;
  struct Cyc_Absyn_Exp * _TFD;
  struct Cyc_Absyn_Exp * _TFE;
  struct Cyc_Absyn_Exp * _TFF;
  struct Cyc_Absyn_Exp * _T100;
  struct Cyc_Absyn_Stmt * _T101;
  long _T102;
  struct Cyc_RemoveAggrs_Env _T103;
  struct Cyc_Absyn_Exp * _T104;
  struct Cyc_Absyn_Exp * _T105;
  struct Cyc_Absyn_Exp * _T106;
  void * _T107;
  struct Cyc_Absyn_Exp * _T108;
  struct Cyc_Absyn_Exp * _T109;
  struct Cyc_Absyn_Exp * _T10A;
  void * _T10B;
  struct Cyc_Absyn_Exp * _T10C;
  struct Cyc_Absyn_Stmt * _T10D;
  struct Cyc_Absyn_Stmt * _T10E;
  struct Cyc_Absyn_Exp * _T10F;
  struct _tuple0 * _T110;
  void * _T111;
  struct Cyc_Absyn_Exp * _T112;
  struct Cyc_Absyn_Stmt * _T113;
  struct Cyc_Absyn_Stmt * _T114;
  struct Cyc_Absyn_Exp * _T115;
  void * _T116;
  struct Cyc_Absyn_Exp * _T117;
  struct Cyc_Absyn_Stmt * _T118;
  struct Cyc_Absyn_Stmt * _T119;
  struct Cyc_Absyn_Exp * _T11A;
  struct Cyc_Absyn_Exp * _T11B;
  struct Cyc_RemoveAggrs_Env _T11C;
  struct Cyc_Warn_String_Warn_Warg_struct _T11D;
  int (* _T11E)(struct _fat_ptr);
  void * (* _T11F)(struct _fat_ptr);
  struct _fat_ptr _T120;
  struct Cyc_Absyn_Exp * _T121;
  struct Cyc_Absyn_Exp * _T122;
  struct Cyc_RemoveAggrs_Env _T123;
  struct Cyc_Absyn_Exp * _T124;
  struct Cyc_RemoveAggrs_Env _T125;
  struct Cyc_Absyn_Exp * _T126;
  struct Cyc_RemoveAggrs_Env _T127;
  struct Cyc_RemoveAggrs_Env _T128;
  struct Cyc_RemoveAggrs_Env _T129;
  struct Cyc_Absyn_Exp * _T12A;
  struct Cyc_RemoveAggrs_Env _T12B;
  struct Cyc_Absyn_Exp * _T12C;
  struct Cyc_RemoveAggrs_Env _T12D;
  struct Cyc_Absyn_Exp * _T12E;
  struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T12F;
  struct Cyc_Absyn_VarargCallInfo * _T130;
  struct Cyc_RemoveAggrs_Env _T131;
  struct Cyc_List_List * _T132;
  void * _T133;
  struct Cyc_Absyn_Exp * _T134;
  struct Cyc_List_List * _T135;
  struct Cyc_Warn_String_Warn_Warg_struct _T136;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T137;
  int (* _T138)(struct _fat_ptr);
  void * (* _T139)(struct _fat_ptr);
  struct _fat_ptr _T13A;
  struct Cyc_RemoveAggrs_Env _T13B;
  enum Cyc_RemoveAggrs_ExpContext _T13C;
  int _T13D;
  long _T13E;
  struct Cyc_Absyn_Exp * _T13F;
  struct Cyc_RemoveAggrs_Env _T140;
  struct Cyc_Absyn_Exp * _T141;
  struct Cyc_Absyn_Exp * _T142;
  struct Cyc_Absyn_Exp * _T143;
  struct Cyc_RemoveAggrs_Env _T144;
  enum Cyc_RemoveAggrs_ExpContext _T145;
  int _T146;
  long _T147;
  struct Cyc_Absyn_Exp * _T148;
  struct Cyc_RemoveAggrs_Env _T149;
  struct Cyc_Absyn_Exp * _T14A;
  struct Cyc_Absyn_Exp * _T14B;
  struct Cyc_Absyn_Exp * _T14C;
  void * _T14D;
  struct Cyc_Absyn_Exp * _T14E;
  struct Cyc_Absyn_Exp * _T14F;
  struct Cyc_Absyn_Exp * _T150;
  struct Cyc_RemoveAggrs_Result _T151;
  enum Cyc_RemoveAggrs_ExpResult res = 2U;
  long did_assign = 0;
  _T0 = e;
  { void * _T152 = _T0->r;
    struct Cyc_Absyn_Stmt * _T153;
    struct Cyc_Absyn_Exp * _T154;
    long _T155;
    struct Cyc_Absyn_Exp * _T156;
    struct Cyc_Absyn_Vardecl * _T157;
    struct Cyc_Absyn_Aggrdecl * _T158;
    struct Cyc_List_List * _T159;
    struct _tuple0 * _T15A;
    struct Cyc_Absyn_Exp * _T15B;
    struct _fat_ptr _T15C;
    _T1 = (int *)_T152;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      _T3 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T152;
      _T4 = _T3->f1;
      _T5 = _T4.String_c;
      _T6 = _T5.tag;
      if (_T6 != 9) { goto _TLA;
      }
      { struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T152;
	_T7 = _T15D->f1;
	_T8 = _T7.String_c;
	_T15C = _T8.val;
      }{ struct _fat_ptr s = _T15C;
	_T9 = env;
	_TA = _T9.ctxt;
	_TB = (int)_TA;
	if (_TB != 2) { goto _TLC;
	}
	_TC = e;
	_TD = _TC->topt;
	_TE = _check_null(_TD);
	_TF = Cyc_Tcutil_is_array_type(_TE);
	if (! _TF) { goto _TLC;
	}
	{ struct Cyc_List_List * dles = 0;
	  _T10 = s;
	  { unsigned int n = _get_fat_size(_T10,sizeof(char));
	    { unsigned int i = 0U;
	      _TL11: if (i < n) { goto _TLF;
	      }else { goto _TL10;
	      }
	      _TLF: _T11 = s;
	      _T12 = _T11.curr;
	      _T13 = (const char *)_T12;
	      _T14 = _check_null(_T13);
	      _T15 = i;
	      _T16 = (int)_T15;
	      _T17 = _T14[_T16];
	      { struct Cyc_Absyn_Exp * c = Cyc_Absyn_char_exp(_T17,0U);
		_T18 = c;
		_T18->topt = Cyc_Absyn_char_type;
		{ struct Cyc_List_List * _T15D = _cycalloc(sizeof(struct Cyc_List_List));
		  { struct _tuple13 * _T15E = _cycalloc(sizeof(struct _tuple13));
		    _T15E->f0 = 0;
		    _T15E->f1 = c;
		    _T1A = (struct _tuple13 *)_T15E;
		  }_T15D->hd = _T1A;
		  _T15D->tl = dles;
		  _T19 = (struct Cyc_List_List *)_T15D;
		}dles = _T19;
	      }i = i + 1;
	      goto _TL11;
	      _TL10: ;
	    }dles = Cyc_List_imp_rev(dles);
	    _T1B = e;
	    { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T15D = _cycalloc(sizeof(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct));
	      _T15D->tag = 25;
	      _T15D->f1 = dles;
	      _T1C = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T15D;
	    }_T1B->r = (void *)_T1C;
	    _T1D = Cyc_RemoveAggrs_remove_aggrs_exp(env,e);
	    return _T1D;
	  }
	}_TLC: goto _LL0;
      }_TLA: goto _LL6;
    case 17: 
      _LL6: goto _LL8;
    case 19: 
      _LL8: goto _LLA;
    case 32: 
      _LLA: goto _LLC;
    case 31: 
      _LLC: goto _LLE;
    case 39: 
      _LLE: goto _LL10;
    case 1: 
      _LL10: goto _LL0;
    case 16: 
      { struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T15B;
	_T1E = e;
	{ void * _T15D = _T1E->annot;
	  void * _T15E;
	  struct Cyc_Absyn_Exp * _T15F;
	  _T1F = (struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct *)_T15D;
	  _T20 = _T1F->tag;
	  _T21 = Cyc_Toc_NewInfo;
	  if (_T20 != _T21) { goto _TL12;
	  }
	  { struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct * _T160 = (struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct *)_T15D;
	    _T15F = _T160->f1;
	    _T22 = _T160->f2;
	    _T15E = (void *)_T22;
	  }{ struct Cyc_Absyn_Exp * mexp = _T15F;
	    void * typ = _T15E;
	    _T23 = env;
	    _T24 = _T23.ctxt;
	    _T25 = (int)_T24;
	    if (_T25 != 0) { goto _TL14;
	    }
	    _T26 = env;
	    _T27 = _T26.dest;
	    _T28 = _check_null(_T27);
	    _T29 = typ;
	    _T2A = Cyc_RemoveAggrs_can_use_initializer(_T28,_T29);
	    if (! _T2A) { goto _TL14;
	    }
	    { struct Cyc_RemoveAggrs_Env _T160;
	      _T160.ctxt = 1U;
	      _T2C = env;
	      _T160.dest = _T2C.dest;
	      _T2B = _T160;
	    }_T2D = e1;
	    Cyc_RemoveAggrs_remove_aggrs_exp(_T2B,_T2D);
	    _T2E = e;
	    _T2F = env;
	    _T30 = _T2F.dest;
	    _T31 = mexp;
	    _T32 = Cyc_Absyn_assign_exp(_T30,_T31,0U);
	    _T33 = env;
	    _T34 = _T33.dest;
	    _T35 = _T34->topt;
	    _T36 = _check_null(_T35);
	    _T37 = Cyc_Absyn_set_type(_T32,_T36);
	    _T38 = e1;
	    _T39 = Cyc_Absyn_seq_exp(_T37,_T38,0U);
	    _T2E->r = _T39->r;
	    _T3A = e;
	    _T3B = e1;
	    _T3A->topt = _T3B->topt;
	    res = 1U;
	    goto _LL41;
	    _TL14: { struct _tuple0 * xvar = Cyc_Toc_temp_var();
	      _T3C = Cyc_Absyn_var_exp(xvar,0U);
	      _T3D = typ;
	      { struct Cyc_Absyn_Exp * xexp = Cyc_Absyn_set_type(_T3C,_T3D);
		{ struct Cyc_RemoveAggrs_Env _T160;
		  _T160.ctxt = 1U;
		  _T160.dest = xexp;
		  _T3E = _T160;
		}_T3F = e1;
		Cyc_RemoveAggrs_remove_aggrs_exp(_T3E,_T3F);
		{ struct Cyc_Absyn_Exp * body_exp = xexp;
		  _T40 = e;
		  _T41 = _T40->topt;
		  if (_T41 == 0) { goto _TL16;
		  }
		  _T42 = e;
		  _T43 = _T42->topt;
		  _T44 = xexp;
		  _T45 = Cyc_Absyn_cast_exp(_T43,_T44,0,1U,0U);
		  _T46 = e;
		  _T47 = _T46->topt;
		  _T48 = _check_null(_T47);
		  body_exp = Cyc_Absyn_set_type(_T45,_T48);
		  goto _TL17;
		  _TL16: _TL17: _T49 = xvar;
		  _T4A = typ;
		  _T4B = mexp;
		  _T4C = Cyc_Absyn_exp_stmt(e1,0U);
		  _T4D = Cyc_Absyn_exp_stmt(body_exp,0U);
		  _T4E = Cyc_Absyn_seq_stmt(_T4C,_T4D,0U);
		  { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_declare_stmt(_T49,
								       _T4A,
								       _T4B,
								       _T4E,
								       0U);
		    _T4F = e;
		    _T50 = Cyc_Absyn_stmt_exp(s,0U);
		    _T4F->r = _T50->r;
		    goto _LL41;
		  }
		}
	      }
	    }
	  }_TL12: _T52 = Cyc_Warn_impos;
	  { int (* _T160)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								      struct _fat_ptr))_T52;
	    _T51 = _T160;
	  }_T53 = _tag_fat("removeAggrs: toc did not set a new-destination",
			   sizeof(char),47U);
	  _T54 = _tag_fat(0U,sizeof(void *),0);
	  _T51(_T53,_T54);
	  _LL41: ;
	}goto _LL0;
      }
    case 28: 
      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T152;
	_T15A = _T15D->f1;
	_T159 = _T15D->f3;
	_T158 = _T15D->f4;
      }{ struct _tuple0 * tdn = _T15A;
	struct Cyc_List_List * dles = _T159;
	struct Cyc_Absyn_Aggrdecl * sdopt = _T158;
	did_assign = 1;
	_T56 = env;
	_T57 = _T56.ctxt;
	_T58 = (int)_T57;
	if (_T58 == 2) { goto _TL18;
	}
	_T59 = env;
	_T5A = _T59.ctxt;
	_T5B = (int)_T5A;
	_T55 = _T5B != 1;
	goto _TL19;
	_TL18: _T55 = 0;
	_TL19: { long do_stmt_exp = _T55;
	  struct Cyc_Absyn_Exp * dest;
	  struct _tuple0 * * v;
	  _T5D = sdopt;
	  _T5E = (unsigned int)_T5D;
	  if (! _T5E) { goto _TL1A;
	  }
	  _T5F = sdopt;
	  _T60 = _T5F->kind;
	  _T61 = (int)_T60;
	  if (_T61 != 1) { goto _TL1A;
	  }
	  _T5C = Cyc_Absyn_unionq_type;
	  goto _TL1B;
	  _TL1A: _T5C = Cyc_Absyn_strctq;
	  _TL1B: { void * (* f)(struct _tuple0 *) = _T5C;
	    void * ty = f(tdn);
	    _T62 = do_stmt_exp;
	    if (! _T62) { goto _TL1C;
	    }
	    { struct _tuple0 * * _T15D = _cycalloc(sizeof(struct _tuple0 *));
	      *_T15D = Cyc_Toc_temp_var();
	      _T63 = (struct _tuple0 * *)_T15D;
	    }v = _T63;
	    _T64 = v;
	    _T65 = *_T64;
	    _T66 = Cyc_Absyn_var_exp(_T65,0U);
	    _T67 = ty;
	    dest = Cyc_Absyn_set_type(_T66,_T67);
	    goto _TL1D;
	    _TL1C: v = 0;
	    _T68 = env;
	    _T69 = _T68.dest;
	    dest = _check_null(_T69);
	    _T6A = env;
	    _T6B = _T6A.ctxt;
	    _T6C = (int)_T6B;
	    if (_T6C != 1) { goto _TL1E;
	    }
	    _T6D = Cyc_Absyn_deref_exp(dest,0U);
	    _T6E = ty;
	    dest = Cyc_Absyn_set_type(_T6D,_T6E);
	    goto _TL1F;
	    _TL1E: _TL1F: _TL1D: { struct Cyc_List_List * dles2 = dles;
	      _TL23: if (dles2 != 0) { goto _TL21;
	      }else { goto _TL22;
	      }
	      _TL21: _T6F = dles2;
	      _T70 = _T6F->hd;
	      { struct _tuple13 * _T15D = (struct _tuple13 *)_T70;
		struct Cyc_Absyn_Exp * _T15E;
		struct Cyc_List_List * _T15F;
		{ struct _tuple13 _T160 = *_T15D;
		  _T15F = _T160.f0;
		  _T15E = _T160.f1;
		}{ struct Cyc_List_List * ds = _T15F;
		  struct Cyc_Absyn_Exp * field_exp = _T15E;
		  struct _fat_ptr * f = Cyc_Absyn_designatorlist_to_fieldname(ds);
		  _T71 = Cyc_RemoveAggrs_deep_copy(dest);
		  _T72 = f;
		  _T73 = Cyc_RemoveAggrs_member_exp(_T71,_T72,0U);
		  _T74 = field_exp;
		  _T75 = _T74->topt;
		  _T76 = _check_null(_T75);
		  { struct Cyc_Absyn_Exp * field_dest = Cyc_Absyn_set_type(_T73,
									   _T76);
		    { struct Cyc_RemoveAggrs_Env _T160;
		      _T160.ctxt = 2U;
		      _T160.dest = field_dest;
		      _T77 = _T160;
		    }_T78 = field_exp;
		    Cyc_RemoveAggrs_remove_aggrs_exp(_T77,_T78);
		  }
		}
	      }_T79 = dles2;
	      dles2 = _T79->tl;
	      goto _TL23;
	      _TL22: ;
	    }if (dles != 0) { goto _TL24;
	    }
	    _T7B = Cyc_Warn_impos;
	    { int (* _T15D)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									struct _fat_ptr))_T7B;
	      _T7A = _T15D;
	    }_T7C = _tag_fat("zero-field aggregate",sizeof(char),21U);
	    _T7D = _tag_fat(0U,sizeof(void *),0);
	    _T7A(_T7C,_T7D);
	    goto _TL25;
	    _TL24: _TL25: _T7E = dles;
	    _T7F = _T7E->hd;
	    _T80 = (struct _tuple13 *)_T7F;
	    _T81 = *_T80;
	    { struct Cyc_Absyn_Exp * init_e = _T81.f1;
	      _T82 = dles;
	      dles = _T82->tl;
	      _TL29: if (dles != 0) { goto _TL27;
	      }else { goto _TL28;
	      }
	      _TL27: _T83 = dles;
	      _T84 = _T83->hd;
	      _T85 = (struct _tuple13 *)_T84;
	      _T86 = *_T85;
	      { struct Cyc_Absyn_Exp * e2 = _T86.f1;
		_T87 = e2;
		_T88 = _T87->topt;
		if (_T88 != 0) { goto _TL2A;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T15D;
		  _T15D.tag = 0;
		  _T15D.f1 = _tag_fat("expression ",sizeof(char),12U);
		  _T89 = _T15D;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T15D = _T89;
		  { struct Cyc_Warn_Exp_Warn_Warg_struct _T15E;
		    _T15E.tag = 4;
		    _T15E.f1 = e2;
		    _T8A = _T15E;
		  }{ struct Cyc_Warn_Exp_Warn_Warg_struct _T15E = _T8A;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T15F;
		      _T15F.tag = 0;
		      _T15F.f1 = _tag_fat(" missing type!",sizeof(char),15U);
		      _T8B = _T15F;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T15F = _T8B;
		      void * _T160[3];
		      _T160[0] = &_T15D;
		      _T160[1] = &_T15E;
		      _T160[2] = &_T15F;
		      _T8D = Cyc_Warn_impos2;
		      { int (* _T161)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T8D;
			_T8C = _T161;
		      }_T8E = _tag_fat(_T160,sizeof(void *),3);
		      _T8C(_T8E);
		    }
		  }
		}goto _TL2B;
		_TL2A: _TL2B: _T8F = Cyc_Absyn_seq_exp(init_e,e2,0U);
		_T90 = e2;
		_T91 = _T90->topt;
		_T92 = _check_null(_T91);
		init_e = Cyc_Absyn_set_type(_T8F,_T92);
	      }_T93 = dles;
	      dles = _T93->tl;
	      goto _TL29;
	      _TL28: _T94 = do_stmt_exp;
	      if (! _T94) { goto _TL2C;
	      }
	      _T95 = e;
	      _T96 = _check_null(v);
	      _T97 = *_T96;
	      _T98 = ty;
	      _T99 = Cyc_Absyn_exp_stmt(init_e,0U);
	      _T9A = Cyc_Absyn_exp_stmt(dest,0U);
	      _T9B = Cyc_Absyn_seq_stmt(_T99,_T9A,0U);
	      _T9C = Cyc_Absyn_declare_stmt(_T97,_T98,0,_T9B,0U);
	      _T9D = Cyc_Absyn_stmt_exp(_T9C,0U);
	      _T95->r = _T9D->r;
	      goto _TL2D;
	      _TL2C: _T9E = e;
	      _T9F = init_e;
	      _T9E->r = _T9F->r;
	      _TA0 = e;
	      _TA1 = init_e;
	      _TA0->topt = _TA1->topt;
	      _TL2D: goto _LL0;
	    }
	  }
	}
      }
    case 25: 
      { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T152;
	_T159 = _T15D->f1;
      }{ struct Cyc_List_List * dles = _T159;
	res = 0U;
	if (dles != 0) { goto _TL2E;
	}
	_TA2 = e;
	_TA3 = Cyc_Absyn_signed_int_exp(0,0U);
	_TA4 = Cyc_Absyn_sint_type;
	_TA5 = Cyc_Absyn_set_type(_TA3,_TA4);
	*_TA2 = *_TA5;
	goto _LL0;
	_TL2E: _TA6 = env;
	{ enum Cyc_RemoveAggrs_ExpContext _T15D = _TA6.ctxt;
	  if (_T15D != Cyc_RemoveAggrs_Other) { goto _TL30;
	  }
	  _TA8 = Cyc_Warn_impos;
	  { int (* _T15E)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								      struct _fat_ptr))_TA8;
	    _TA7 = _T15E;
	  }_TA9 = _tag_fat("remove-aggrs: Array_e in bad position",sizeof(char),
			   38U);
	  _TAA = _tag_fat(0U,sizeof(void *),0);
	  _TA7(_TA9,_TAA);
	  goto _TL31;
	  _TL30: goto _LL49;
	  _TL31: _LL49: ;
	}did_assign = 1;
	_TAB = env;
	_TAC = _TAB.dest;
	{ struct Cyc_Absyn_Exp * dest = _check_null(_TAC);
	  void * dest_type;
	  _TAD = dest;
	  _TAE = _TAD->topt;
	  _TAF = _check_null(_TAE);
	  { void * _T15D = Cyc_Absyn_compress(_TAF);
	    struct Cyc_Absyn_ArrayInfo _T15E;
	    _TB0 = (int *)_T15D;
	    _TB1 = *_TB0;
	    if (_TB1 != 5) { goto _TL32;
	    }
	    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T15F = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T15D;
	      _T15E = _T15F->f1;
	    }{ struct Cyc_Absyn_ArrayInfo ai = _T15E;
	      _TB2 = ai;
	      _TB3 = _TB2.elt_type;
	      _TB4 = ai;
	      _TB5 = _TB4.tq;
	      dest_type = Cyc_Absyn_cstar_type(_TB3,_TB5);
	      goto _LL4E;
	    }_TL32: _TB6 = dest;
	    _TB7 = _TB6->topt;
	    dest_type = _check_null(_TB7);
	    goto _LL4E;
	    _LL4E: ;
	  }{ int i = 0;
	    { struct Cyc_List_List * dles2 = dles;
	      _TL37: if (dles2 != 0) { goto _TL35;
	      }else { goto _TL36;
	      }
	      _TL35: _TB8 = dles2;
	      _TB9 = _TB8->hd;
	      { struct _tuple13 * _T15D = (struct _tuple13 *)_TB9;
		struct Cyc_Absyn_Exp * _T15E;
		{ struct _tuple13 _T15F = *_T15D;
		  _T15E = _T15F.f1;
		}{ struct Cyc_Absyn_Exp * field_exp = _T15E;
		  _TBA = Cyc_RemoveAggrs_deep_copy(dest);
		  _TBB = Cyc_Absyn_signed_int_exp(i,0U);
		  _TBC = Cyc_Absyn_sint_type;
		  _TBD = Cyc_Absyn_set_type(_TBB,_TBC);
		  _TBE = Cyc_Absyn_subscript_exp(_TBA,_TBD,0U);
		  _TBF = dest_type;
		  { struct Cyc_Absyn_Exp * fielddest = Cyc_Absyn_set_type(_TBE,
									  _TBF);
		    { struct Cyc_RemoveAggrs_Env _T15F;
		      _T15F.ctxt = 2U;
		      _T15F.dest = fielddest;
		      _TC0 = _T15F;
		    }_TC1 = field_exp;
		    Cyc_RemoveAggrs_remove_aggrs_exp(_TC0,_TC1);
		  }
		}
	      }_TC2 = dles2;
	      dles2 = _TC2->tl;
	      i = i + 1;
	      goto _TL37;
	      _TL36: ;
	    }_TC3 = dles;
	    _TC4 = _TC3->hd;
	    _TC5 = (struct _tuple13 *)_TC4;
	    _TC6 = *_TC5;
	    { struct Cyc_Absyn_Exp * init_e = _TC6.f1;
	      _TC7 = dles;
	      dles = _TC7->tl;
	      _TL3B: if (dles != 0) { goto _TL39;
	      }else { goto _TL3A;
	      }
	      _TL39: _TC8 = dles;
	      _TC9 = _TC8->hd;
	      _TCA = (struct _tuple13 *)_TC9;
	      _TCB = *_TCA;
	      { struct Cyc_Absyn_Exp * e2 = _TCB.f1;
		_TCC = Cyc_Absyn_seq_exp(init_e,e2,0U);
		_TCD = e2;
		_TCE = _TCD->topt;
		_TCF = _check_null(_TCE);
		init_e = Cyc_Absyn_set_type(_TCC,_TCF);
	      }_TD0 = dles;
	      dles = _TD0->tl;
	      goto _TL3B;
	      _TL3A: _TD1 = e;
	      _TD2 = init_e;
	      _TD1->r = _TD2->r;
	      _TD3 = e;
	      _TD4 = init_e;
	      _TD3->topt = _TD4->topt;
	      goto _LL0;
	    }
	  }
	}
      }
    case 26: 
      { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T152;
	_T157 = _T15D->f1;
	_T15B = _T15D->f2;
	_T156 = _T15D->f3;
	_T155 = _T15D->f4;
      }{ struct Cyc_Absyn_Vardecl * vd = _T157;
	struct Cyc_Absyn_Exp * bd = _T15B;
	struct Cyc_Absyn_Exp * body = _T156;
	long zero_term = _T155;
	did_assign = 1;
	res = 0U;
	_TD5 = env;
	{ enum Cyc_RemoveAggrs_ExpContext _T15D = _TD5.ctxt;
	  if (_T15D != Cyc_RemoveAggrs_Other) { goto _TL3C;
	  }
	  _TD7 = Cyc_Warn_impos;
	  { int (* _T15E)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								      struct _fat_ptr))_TD7;
	    _TD6 = _T15E;
	  }_TD8 = _tag_fat("remove-aggrs: comprehension in bad position",
			   sizeof(char),44U);
	  _TD9 = _tag_fat(0U,sizeof(void *),0);
	  _TD6(_TD8,_TD9);
	  goto _TL3D;
	  _TL3C: goto _LL56;
	  _TL3D: _LL56: ;
	}{ struct _tuple0 * max = Cyc_Toc_temp_var();
	  _TDA = vd;
	  { struct _tuple0 * i = _TDA->name;
	    _TDB = Cyc_Absyn_var_exp(i,0U);
	    _TDC = Cyc_Absyn_sint_type;
	    _TDD = Cyc_Absyn_set_type(_TDB,_TDC);
	    _TDE = Cyc_Absyn_signed_int_exp(0,0U);
	    _TDF = Cyc_Absyn_sint_type;
	    _TE0 = Cyc_Absyn_set_type(_TDE,_TDF);
	    { struct Cyc_Absyn_Exp * ea = Cyc_Absyn_assign_exp(_TDD,_TE0,
							       0U);
	      _TE1 = Cyc_Absyn_var_exp(i,0U);
	      _TE2 = Cyc_Absyn_uint_type;
	      _TE3 = Cyc_Absyn_set_type(_TE1,_TE2);
	      _TE4 = Cyc_Absyn_var_exp(max,0U);
	      _TE5 = Cyc_Absyn_uint_type;
	      _TE6 = Cyc_Absyn_set_type(_TE4,_TE5);
	      { struct Cyc_Absyn_Exp * eb = Cyc_Absyn_lt_exp(_TE3,_TE6,0U);
		_TE7 = Cyc_Absyn_var_exp(i,0U);
		_TE8 = Cyc_Absyn_uint_type;
		_TE9 = Cyc_Absyn_set_type(_TE7,_TE8);
		{ struct Cyc_Absyn_Exp * ec = Cyc_Absyn_increment_exp(_TE9,
								      0U,
								      0U);
		  _TEA = env;
		  _TEB = _TEA.dest;
		  { struct Cyc_Absyn_Exp * dest = _check_null(_TEB);
		    void * dest_type;
		    _TEC = dest;
		    _TED = _TEC->topt;
		    _TEE = _check_null(_TED);
		    { void * _T15D = Cyc_Absyn_compress(_TEE);
		      struct Cyc_Absyn_ArrayInfo _T15E;
		      _TEF = (int *)_T15D;
		      _TF0 = *_TEF;
		      if (_TF0 != 5) { goto _TL3E;
		      }
		      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T15F = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T15D;
			_T15E = _T15F->f1;
		      }{ struct Cyc_Absyn_ArrayInfo ai = _T15E;
			_TF1 = ai;
			_TF2 = _TF1.elt_type;
			_TF3 = ai;
			_TF4 = _TF3.tq;
			dest_type = Cyc_Absyn_cstar_type(_TF2,_TF4);
			goto _LL5B;
		      }_TL3E: _TF5 = dest;
		      _TF6 = _TF5->topt;
		      dest_type = _check_null(_TF6);
		      _LL5B: ;
		    }_TF7 = env;
		    _TF8 = _TF7.dest;
		    _TF9 = Cyc_Absyn_var_exp(i,0U);
		    _TFA = Cyc_Absyn_uint_type;
		    _TFB = Cyc_Absyn_set_type(_TF9,_TFA);
		    { struct Cyc_Absyn_Exp * lval = Cyc_Absyn_subscript_exp(_TF8,
									    _TFB,
									    0U);
		      Cyc_Absyn_set_type(lval,dest_type);
		      { struct Cyc_RemoveAggrs_Env _T15D;
			_T15D.ctxt = 2U;
			_T15D.dest = Cyc_RemoveAggrs_deep_copy(lval);
			_TFC = _T15D;
		      }_TFD = body;
		      Cyc_RemoveAggrs_remove_aggrs_exp(_TFC,_TFD);
		      _TFE = ea;
		      _TFF = eb;
		      _T100 = ec;
		      _T101 = Cyc_Absyn_exp_stmt(body,0U);
		      { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_for_stmt(_TFE,
								       _TFF,
								       _T100,
								       _T101,
								       0U);
			_T102 = zero_term;
			if (! _T102) { goto _TL40;
			}
			_T103 = env;
			_T104 = _T103.dest;
			_T105 = Cyc_RemoveAggrs_deep_copy(_T104);
			_T106 = Cyc_Absyn_var_exp(max,0U);
			_T107 = Cyc_Absyn_sint_type;
			_T108 = Cyc_Absyn_set_type(_T106,_T107);
			_T109 = Cyc_Absyn_subscript_exp(_T105,_T108,0U);
			_T10A = Cyc_Absyn_signed_int_exp(0,0U);
			_T10B = Cyc_Absyn_sint_type;
			_T10C = Cyc_Absyn_set_type(_T10A,_T10B);
			{ struct Cyc_Absyn_Exp * ex = Cyc_Absyn_assign_exp(_T109,
									   _T10C,
									   0U);
			  _T10D = s;
			  _T10E = Cyc_Absyn_exp_stmt(ex,0U);
			  s = Cyc_Absyn_seq_stmt(_T10D,_T10E,0U);
			}goto _TL41;
			_TL40: _TL41: Cyc_RemoveAggrs_noarray_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,
									       bd);
			_T10F = e;
			_T110 = max;
			_T111 = Cyc_Absyn_uint_type;
			_T112 = bd;
			_T113 = Cyc_Absyn_declare_stmt(i,Cyc_Absyn_uint_type,
						       0,s,0U);
			_T114 = Cyc_Absyn_declare_stmt(_T110,_T111,_T112,
						       _T113,0U);
			_T115 = Cyc_Absyn_signed_int_exp(0,0U);
			_T116 = Cyc_Absyn_sint_type;
			_T117 = Cyc_Absyn_set_type(_T115,_T116);
			_T118 = Cyc_Absyn_exp_stmt(_T117,0U);
			_T119 = Cyc_Absyn_seq_stmt(_T114,_T118,0U);
			_T11A = Cyc_Absyn_stmt_exp(_T119,0U);
			_T10F->r = _T11A->r;
			_T11B = e;
			_T11B->topt = Cyc_Absyn_sint_type;
			goto _LL0;
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    case 27: 
      { struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
      }{ struct Cyc_Absyn_Exp * bd = _T15B;
	did_assign = 1;
	res = 0U;
	_T11C = env;
	{ enum Cyc_RemoveAggrs_ExpContext _T15D = _T11C.ctxt;
	  if (_T15D != Cyc_RemoveAggrs_Other) { goto _TL42;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T15E;
	    _T15E.tag = 0;
	    _T15E.f1 = _tag_fat("remove-aggrs: no-init-comp in bad position",
				sizeof(char),43U);
	    _T11D = _T15E;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T15E = _T11D;
	    void * _T15F[1];
	    _T15F[0] = &_T15E;
	    _T11F = Cyc_Warn_impos2;
	    { int (* _T160)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T11F;
	      _T11E = _T160;
	    }_T120 = _tag_fat(_T15F,sizeof(void *),1);
	    _T11E(_T120);
	  }goto _TL43;
	  _TL42: goto _LL60;
	  _TL43: _LL60: ;
	}_T121 = e;
	_T122 = bd;
	*_T121 = *_T122;
	goto _LL0;
      }
    case 4: 
      { struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
	_T156 = _T15D->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T15B;
	struct Cyc_Absyn_Exp * e2 = _T156;
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,
						 e1);
	Cyc_RemoveAggrs_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,e2);
	goto _LL0;
      }
    case 9: 
      { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
	_T156 = _T15D->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T15B;
	struct Cyc_Absyn_Exp * e2 = _T156;
	did_assign = 1;
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,
						 e1);
	_T123 = Cyc_RemoveAggrs_no_init(env);
	_T124 = e2;
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(_T123,_T124);
	goto _LL0;
      }
    case 6: 
      { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
	_T156 = _T15D->f2;
	_T154 = _T15D->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T15B;
	struct Cyc_Absyn_Exp * e2 = _T156;
	struct Cyc_Absyn_Exp * e3 = _T154;
	did_assign = 1;
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,
						 e1);
	_T125 = Cyc_RemoveAggrs_no_init(env);
	_T126 = e2;
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(_T125,_T126);
	{ struct Cyc_RemoveAggrs_Env _T15D;
	  _T128 = env;
	  _T15D.ctxt = _T128.ctxt;
	  _T129 = env;
	  _T12A = _T129.dest;
	  if (_T12A != 0) { goto _TL44;
	  }
	  _T15D.dest = 0;
	  goto _TL45;
	  _TL44: _T12B = env;
	  _T12C = _T12B.dest;
	  _T15D.dest = Cyc_RemoveAggrs_deep_copy(_T12C);
	  _TL45: _T127 = _T15D;
	}{ struct Cyc_RemoveAggrs_Env env3 = _T127;
	  _T12D = Cyc_RemoveAggrs_no_init(env3);
	  _T12E = e3;
	  Cyc_RemoveAggrs_noarray_remove_aggrs_exp(_T12D,_T12E);
	  goto _LL0;
	}
      }
    case 10: 
      _T12F = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T152;
      _T130 = _T12F->f3;
      if (_T130 != 0) { goto _TL46;
      }
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
	_T159 = _T15D->f2;
      }{ struct Cyc_Absyn_Exp * e = _T15B;
	struct Cyc_List_List * es = _T159;
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,
						 e);
	_T159 = es;
	goto _LL24;
      }_TL46: goto _LL3F;
    case 3: 
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T152;
	_T159 = _T15D->f2;
      }_LL24: { struct Cyc_List_List * es = _T159;
	_TL4B: if (es != 0) { goto _TL49;
	}else { goto _TL4A;
	}
	_TL49: _T131 = Cyc_RemoveAggrs_other_env;
	_T132 = es;
	_T133 = _T132->hd;
	_T134 = (struct Cyc_Absyn_Exp *)_T133;
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(_T131,_T134);
	_T135 = es;
	es = _T135->tl;
	goto _TL4B;
	_TL4A: goto _LL0;
      }
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
	_T156 = _T15D->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T15B;
	struct Cyc_Absyn_Exp * e2 = _T156;
	_T15B = e1;
	_T156 = e2;
	goto _LL28;
      }
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
	_T156 = _T15D->f2;
      }_LL28: { struct Cyc_Absyn_Exp * e1 = _T15B;
	struct Cyc_Absyn_Exp * e2 = _T156;
	_T15B = e1;
	_T156 = e2;
	goto _LL2A;
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
	_T156 = _T15D->f2;
      }_LL2A: { struct Cyc_Absyn_Exp * e1 = _T15B;
	struct Cyc_Absyn_Exp * e2 = _T156;
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,
						 e1);
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,
						 e2);
	goto _LL0;
      }
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T15B;
	_T15B = e1;
	goto _LL2E;
      }
    case 12: 
      { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
      }_LL2E: { struct Cyc_Absyn_Exp * e1 = _T15B;
	_T15B = e1;
	goto _LL30;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f2;
      }_LL30: { struct Cyc_Absyn_Exp * e1 = _T15B;
	_T15B = e1;
	goto _LL32;
      }
    case 15: 
      { struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
      }_LL32: { struct Cyc_Absyn_Exp * e1 = _T15B;
	_T15B = e1;
	goto _LL34;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
      }_LL34: { struct Cyc_Absyn_Exp * e1 = _T15B;
	_T15B = e1;
	goto _LL36;
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
      }_LL36: { struct Cyc_Absyn_Exp * e1 = _T15B;
	_T15B = e1;
	goto _LL38;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
      }_LL38: { struct Cyc_Absyn_Exp * e1 = _T15B;
	_T15B = e1;
	goto _LL3A;
      }
    case 18: 
      { struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
      }_LL3A: { struct Cyc_Absyn_Exp * e1 = _T15B;
	_T15B = e1;
	goto _LL3C;
      }
    case 5: 
      { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_T152;
	_T15B = _T15D->f1;
      }_LL3C: { struct Cyc_Absyn_Exp * e1 = _T15B;
	Cyc_RemoveAggrs_noarray_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,
						 e1);
	goto _LL0;
      }
    case 36: 
      { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T15D = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T152;
	_T153 = _T15D->f1;
      }{ struct Cyc_Absyn_Stmt * s = _T153;
	Cyc_RemoveAggrs_remove_aggrs_stmt(s);
	goto _LL0;
      }
    default: 
      _LL3F: { struct Cyc_Warn_String_Warn_Warg_struct _T15D;
	_T15D.tag = 0;
	_T15D.f1 = _tag_fat("bad exp after translation to C: ",sizeof(char),
			    33U);
	_T136 = _T15D;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T15D = _T136;
	{ struct Cyc_Warn_Exp_Warn_Warg_struct _T15E;
	  _T15E.tag = 4;
	  _T15E.f1 = e;
	  _T137 = _T15E;
	}{ struct Cyc_Warn_Exp_Warn_Warg_struct _T15E = _T137;
	  void * _T15F[2];
	  _T15F[0] = &_T15D;
	  _T15F[1] = &_T15E;
	  _T139 = Cyc_Warn_impos2;
	  { int (* _T160)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T139;
	    _T138 = _T160;
	  }_T13A = _tag_fat(_T15F,sizeof(void *),2);
	  _T138(_T13A);
	}
      }
    }
    _LL0: ;
  }_T13B = env;
  _T13C = _T13B.ctxt;
  _T13D = (int)_T13C;
  if (_T13D != 2) { goto _TL4C;
  }
  _T13E = did_assign;
  if (_T13E) { goto _TL4C;
  }else { goto _TL4E;
  }
  _TL4E: _T13F = e;
  _T140 = env;
  _T141 = _T140.dest;
  _T142 = Cyc_RemoveAggrs_deep_copy(e);
  _T143 = Cyc_Absyn_assign_exp(_T141,_T142,0U);
  _T13F->r = _T143->r;
  goto _TL4D;
  _TL4C: _TL4D: _T144 = env;
  _T145 = _T144.ctxt;
  _T146 = (int)_T145;
  if (_T146 != 1) { goto _TL4F;
  }
  _T147 = did_assign;
  if (_T147) { goto _TL4F;
  }else { goto _TL51;
  }
  _TL51: _T148 = e;
  _T149 = env;
  _T14A = _T149.dest;
  _T14B = Cyc_Absyn_deref_exp(_T14A,0U);
  _T14C = e;
  _T14D = _T14C->topt;
  _T14E = Cyc_Absyn_set_type(_T14B,_T14D);
  _T14F = Cyc_RemoveAggrs_deep_copy(e);
  _T150 = Cyc_Absyn_assign_exp(_T14E,_T14F,0U);
  _T148->r = _T150->r;
  goto _TL50;
  _TL4F: _TL50: { struct Cyc_RemoveAggrs_Result _T152;
    _T152.res = res;
    _T151 = _T152;
  }return _T151;
}
static long Cyc_RemoveAggrs_remove_aggrs_stmt_f1(int bogus,struct Cyc_Absyn_Exp * e) {
  Cyc_RemoveAggrs_remove_aggrs_exp(Cyc_RemoveAggrs_other_env,e);
  return 0;
}
static long Cyc_RemoveAggrs_remove_aggrs_stmt_f2(int bogus,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Decl * _T3;
  int * _T4;
  unsigned int _T5;
  struct Cyc_Absyn_Vardecl * _T6;
  enum Cyc_Absyn_Scope _T7;
  int _T8;
  struct Cyc_Absyn_Vardecl * _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _TB;
  void * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct Cyc_Absyn_Vardecl * _TE;
  struct Cyc_RemoveAggrs_Env _TF;
  struct Cyc_Absyn_Vardecl * _T10;
  struct Cyc_Absyn_Exp * _T11;
  struct Cyc_Absyn_Exp * _T12;
  enum Cyc_RemoveAggrs_ExpResult _T13;
  int _T14;
  enum Cyc_RemoveAggrs_ExpResult _T15;
  int _T16;
  struct Cyc_Absyn_Stmt * _T17;
  struct Cyc_Absyn_Decl * _T18;
  struct Cyc_Absyn_Vardecl * _T19;
  struct Cyc_Absyn_Exp * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  struct Cyc_Absyn_Stmt * _T1C;
  struct Cyc_Absyn_Stmt * _T1D;
  struct Cyc_Absyn_Stmt * _T1E;
  struct Cyc_Absyn_Stmt * _T1F;
  struct Cyc_Absyn_Vardecl * _T20;
  struct Cyc_Absyn_Fndecl * _T21;
  struct Cyc_Absyn_Stmt * _T22;
  int (* _T23)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T24)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T25;
  struct _fat_ptr _T26;
  _T0 = s;
  { void * _T27 = _T0->r;
    struct Cyc_Absyn_Stmt * _T28;
    struct Cyc_Absyn_Decl * _T29;
    _T1 = (int *)_T27;
    _T2 = *_T1;
    if (_T2 != 12) { goto _TL52;
    }
    { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T2A = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T27;
      _T29 = _T2A->f1;
      _T28 = _T2A->f2;
    }{ struct Cyc_Absyn_Decl * d = _T29;
      struct Cyc_Absyn_Stmt * s2 = _T28;
      Cyc_RemoveAggrs_remove_aggrs_stmt(s2);
      _T3 = d;
      { void * _T2A = _T3->r;
	struct Cyc_Absyn_Fndecl * _T2B;
	struct Cyc_Absyn_Vardecl * _T2C;
	_T4 = (int *)_T2A;
	_T5 = *_T4;
	switch (_T5) {
	case 0: 
	  { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T2D = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T2A;
	    _T2C = _T2D->f1;
	  }{ struct Cyc_Absyn_Vardecl * vd = _T2C;
	    _T6 = vd;
	    _T7 = _T6->sc;
	    _T8 = (int)_T7;
	    if (_T8 != 0) { goto _TL55;
	    }
	    return 0;
	    _TL55: _T9 = vd;
	    _TA = _T9->initializer;
	    if (_TA == 0) { goto _TL57;
	    }
	    { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T2D = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
	      _T2D->tag = 4;
	      _T2D->f1 = vd;
	      _TB = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T2D;
	    }_TC = (void *)_TB;
	    { struct Cyc_Absyn_Exp * var_exp = Cyc_Absyn_varb_exp(_TC,0U);
	      _TD = var_exp;
	      _TE = vd;
	      _TD->topt = _TE->type;
	      { struct Cyc_RemoveAggrs_Env _T2D;
		_T2D.ctxt = 0U;
		_T2D.dest = var_exp;
		_TF = _T2D;
	      }_T10 = vd;
	      _T11 = _T10->initializer;
	      _T12 = _check_null(_T11);
	      { struct Cyc_RemoveAggrs_Result _T2D = Cyc_RemoveAggrs_remove_aggrs_exp(_TF,
										      _T12);
		enum Cyc_RemoveAggrs_ExpResult _T2E;
		_T2E = _T2D.res;
		{ enum Cyc_RemoveAggrs_ExpResult r = _T2E;
		  _T13 = r;
		  _T14 = (int)_T13;
		  if (_T14 == 0) { goto _TL5B;
		  }else { goto _TL5C;
		  }
		  _TL5C: _T15 = r;
		  _T16 = (int)_T15;
		  if (_T16 == 1) { goto _TL5B;
		  }else { goto _TL59;
		  }
		  _TL5B: _T17 = s;
		  _T18 = d;
		  _T19 = vd;
		  _T1A = _T19->initializer;
		  _T1B = _check_null(_T1A);
		  _T1C = Cyc_Absyn_exp_stmt(_T1B,0U);
		  _T1D = s2;
		  _T1E = Cyc_Absyn_seq_stmt(_T1C,_T1D,0U);
		  _T1F = Cyc_Absyn_decl_stmt(_T18,_T1E,0U);
		  _T17->r = _T1F->r;
		  _T20 = vd;
		  _T20->initializer = 0;
		  goto _TL5A;
		  _TL59: _TL5A: ;
		}
	      }
	    }goto _TL58;
	    _TL57: _TL58: return 0;
	  }
	case 1: 
	  { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T2D = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T2A;
	    _T2B = _T2D->f1;
	  }{ struct Cyc_Absyn_Fndecl * fd = _T2B;
	    _T21 = fd;
	    _T22 = _T21->body;
	    Cyc_RemoveAggrs_remove_aggrs_stmt(_T22);
	    return 0;
	  }
	default: 
	  _T24 = Cyc_Warn_impos;
	  { int (* _T2D)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								     struct _fat_ptr))_T24;
	    _T23 = _T2D;
	  }_T25 = _tag_fat("bad local declaration after xlation to C",sizeof(char),
			   41U);
	  _T26 = _tag_fat(0U,sizeof(void *),0);
	  _T23(_T25,_T26);
	}
	;
      }
    }goto _TL53;
    _TL52: return 1;
    _TL53: ;
  }
}
static void Cyc_RemoveAggrs_remove_aggrs_stmt(struct Cyc_Absyn_Stmt * s) {
  void (* _T0)(long (*)(int,struct Cyc_Absyn_Exp *),long (*)(int,struct Cyc_Absyn_Stmt *),
	       int,struct Cyc_Absyn_Stmt *);
  void (* _T1)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Stmt *);
  struct Cyc_Absyn_Stmt * _T2;
  _T1 = Cyc_Absyn_visit_stmt;
  { void (* _T3)(long (*)(int,struct Cyc_Absyn_Exp *),long (*)(int,struct Cyc_Absyn_Stmt *),
		 int,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(int,struct Cyc_Absyn_Exp *),
							  long (*)(int,struct Cyc_Absyn_Stmt *),
							  int,struct Cyc_Absyn_Stmt *))_T1;
    _T0 = _T3;
  }_T2 = s;
  _T0(Cyc_RemoveAggrs_remove_aggrs_stmt_f1,Cyc_RemoveAggrs_remove_aggrs_stmt_f2,
      0,_T2);
}
struct Cyc_List_List * Cyc_RemoveAggrs_remove_aggrs(struct Cyc_List_List * ds) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Decl * _T2;
  int * _T3;
  unsigned int _T4;
  struct Cyc_Absyn_Fndecl * _T5;
  enum Cyc_Absyn_Scope _T6;
  int _T7;
  struct Cyc_Absyn_Fndecl * _T8;
  struct Cyc_Absyn_Stmt * _T9;
  int (* _TA)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TB)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  int (* _TE)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TF)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  { struct Cyc_List_List * ds2 = ds;
    _TL60: if (ds2 != 0) { goto _TL5E;
    }else { goto _TL5F;
    }
    _TL5E: _T0 = ds2;
    _T1 = _T0->hd;
    _T2 = (struct Cyc_Absyn_Decl *)_T1;
    { void * _T14 = _T2->r;
      struct Cyc_Absyn_Fndecl * _T15;
      _T3 = (int *)_T14;
      _T4 = *_T3;
      switch (_T4) {
      case 1: 
	{ struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T16 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T14;
	  _T15 = _T16->f1;
	}{ struct Cyc_Absyn_Fndecl * fd = _T15;
	  _T5 = fd;
	  _T6 = _T5->orig_scope;
	  _T7 = (int)_T6;
	  if (_T7 == 4) { goto _TL62;
	  }
	  _T8 = fd;
	  _T9 = _T8->body;
	  Cyc_RemoveAggrs_remove_aggrs_stmt(_T9);
	  goto _TL63;
	  _TL62: _TL63: goto _LL0;
	}
      case 0: 
	goto _LL6;
      case 5: 
	_LL6: goto _LL8;
      case 7: 
	_LL8: goto _LLA;
      case 8: 
	_LLA: goto _LL0;
      case 4: 
	goto _LLE;
      case 6: 
	_LLE: goto _LL10;
      case 2: 
	_LL10: goto _LL12;
      case 3: 
	_LL12: _TB = Cyc_Warn_impos;
	{ int (* _T16)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_TB;
	  _TA = _T16;
	}_TC = _tag_fat("Cyclone decl after xlation to C",sizeof(char),32U);
	_TD = _tag_fat(0U,sizeof(void *),0);
	_TA(_TC,_TD);
      case 9: 
	goto _LL16;
      case 10: 
	_LL16: goto _LL18;
      case 11: 
	_LL18: goto _LL1A;
      case 12: 
	_LL1A: goto _LL1C;
      case 13: 
	_LL1C: goto _LL1E;
      case 14: 
	_LL1E: goto _LL20;
      case 15: 
	_LL20: goto _LL22;
      default: 
	_LL22: _TF = Cyc_Warn_impos;
	{ int (* _T16)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_TF;
	  _TE = _T16;
	}_T10 = _tag_fat("translation unit after xlation to C",sizeof(char),
			 36U);
	_T11 = _tag_fat(0U,sizeof(void *),0);
	_TE(_T10,_T11);
      }
      _LL0: ;
    }_T12 = ds2;
    ds2 = _T12->tl;
    goto _TL60;
    _TL5F: ;
  }_T13 = ds;
  return _T13;
}
