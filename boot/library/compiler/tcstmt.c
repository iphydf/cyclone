#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct _tuple0 {
  void * f0;
  void * f1;
};
void * Cyc_Core_fst(struct _tuple0 *);
void * Cyc_Core_snd(struct _tuple0 *);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_list(struct _fat_ptr);
extern int Cyc_List_length(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map(void * (*)(void *),struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map_c(void * (*)(void *,void *),void *,
					     struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
extern long Cyc_List_forall(long (*)(void *),struct Cyc_List_List *);
extern long Cyc_List_exists(long (*)(void *),struct Cyc_List_List *);
 struct _tuple1 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
};
extern struct _tuple1 Cyc_List_split(struct Cyc_List_List *);
extern long Cyc_List_mem(int (*)(void *,void *),struct Cyc_List_List *,void *);
extern struct Cyc_List_List * Cyc_List_filter(long (*)(void *),struct Cyc_List_List *);
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
 struct _tuple2 {
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
 struct _tuple4 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple2 * f1;
  struct Cyc_Core_Opt * f2;
};
 struct _union_AggrInfo_UnknownAggr {
  int tag;
  struct _tuple4 val;
};
 struct _union_AggrInfo_KnownAggr {
  int tag;
  struct Cyc_Absyn_Aggrdecl * * val;
};
 union Cyc_Absyn_AggrInfo {
  struct _union_AggrInfo_UnknownAggr UnknownAggr;
  struct _union_AggrInfo_KnownAggr KnownAggr;
};
union Cyc_Absyn_AggrInfo Cyc_Absyn_UnknownAggr(enum Cyc_Absyn_AggrKind,struct _tuple2 *,
					       struct Cyc_Core_Opt *);
 struct Cyc_Absyn_ArrayInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_Absyn_Exp * num_elts;
  void * zero_term;
  unsigned int zt_loc;
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
 struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct {
  int tag;
};
 struct _union_Cnst_Null_c {
  int tag;
  int val;
};
 struct _tuple5 {
  enum Cyc_Absyn_Sign f0;
  char f1;
};
 struct _union_Cnst_Char_c {
  int tag;
  struct _tuple5 val;
};
 struct _union_Cnst_Wchar_c {
  int tag;
  struct _fat_ptr val;
};
 struct _tuple6 {
  enum Cyc_Absyn_Sign f0;
  short f1;
};
 struct _union_Cnst_Short_c {
  int tag;
  struct _tuple6 val;
};
 struct _tuple7 {
  enum Cyc_Absyn_Sign f0;
  int f1;
};
 struct _union_Cnst_Int_c {
  int tag;
  struct _tuple7 val;
};
 struct _tuple8 {
  enum Cyc_Absyn_Sign f0;
  long long f1;
};
 struct _union_Cnst_LongLong_c {
  int tag;
  struct _tuple8 val;
};
 struct _union_Cnst_Int128_c {
  int tag;
  struct _tuple8 val;
};
 struct _tuple9 {
  struct _fat_ptr f0;
  int f1;
};
 struct _union_Cnst_Float_c {
  int tag;
  struct _tuple9 val;
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
 struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct {
  int tag;
  enum Cyc_Absyn_Primop f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  enum Cyc_Absyn_Incrementor f2;
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
 struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  long f2;
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
 struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
  long f3;
  long f4;
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
  struct _tuple2 * f1;
  struct Cyc_List_List * f2;
  struct Cyc_List_List * f3;
  struct Cyc_Absyn_Aggrdecl * f4;
};
 struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Exp {
  void * topt;
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Stmt * f2;
  struct Cyc_Absyn_Stmt * f3;
};
 struct _tuple11 {
  struct Cyc_Absyn_Exp * f0;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _tuple11 f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _tuple11 f2;
  struct _tuple11 f3;
  struct Cyc_Absyn_Stmt * f4;
};
 struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_List_List * f2;
  void * f3;
};
 struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_List_List * f1;
  struct Cyc_Absyn_Switch_clause * * f2;
};
 struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Decl * f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _fat_ptr * f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
  struct _tuple11 f2;
};
 struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
  struct Cyc_List_List * f2;
  void * f3;
};
 struct Cyc_Absyn_Stmt {
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct {
  int tag;
};
 struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Pat * f2;
};
extern struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct Cyc_Absyn_Wild_p_val;
 struct Cyc_Absyn_Pat {
  void * r;
  void * topt;
  unsigned int loc;
};
 struct Cyc_Absyn_Switch_clause {
  struct Cyc_Absyn_Pat * pattern;
  struct Cyc_Core_Opt * pat_vars;
  struct Cyc_Absyn_Exp * where_clause;
  struct Cyc_Absyn_Stmt * body;
  unsigned int loc;
};
 struct Cyc_Absyn_Local_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Vardecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple2 * name;
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
  struct _tuple2 * name;
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
  struct _tuple2 * name;
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
 struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Pat * f1;
  struct Cyc_Core_Opt * f2;
  struct Cyc_Absyn_Exp * f3;
  void * f4;
};
 struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
  struct Cyc_Absyn_Vardecl * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct {
  int tag;
  struct _fat_ptr * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct {
  int tag;
  struct _tuple2 * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
union Cyc_Absyn_Nmspace Cyc_Absyn_Loc_n();
union Cyc_Absyn_Nmspace Cyc_Absyn_Abs_n(struct Cyc_List_List *,long);
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned int);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned int);
void * Cyc_Absyn_compress(void *);
void * Cyc_Absyn_new_evar(struct Cyc_Core_Opt *,struct Cyc_Core_Opt *);
extern void * Cyc_Absyn_heap_rgn_type;
extern void * Cyc_Absyn_al_qual_type;
extern void * Cyc_Absyn_false_type;
extern void * Cyc_Absyn_void_type;
extern void * Cyc_Absyn_rgn_handle_type(void *);
void * Cyc_Absyn_exn_type();
void * Cyc_Absyn_at_type(void *,void *,void *,struct Cyc_Absyn_Tqual,void *,
			 void *);
void * Cyc_Absyn_aggr_type(union Cyc_Absyn_AggrInfo,struct Cyc_List_List *);
struct Cyc_Absyn_Exp * Cyc_Absyn_new_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_uint_exp(unsigned int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_varb_exp(void *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_new_stmt(void *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_skip_stmt(unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Stmt *,
					    unsigned int);
struct Cyc_Absyn_Pat * Cyc_Absyn_new_pat(void *,unsigned int);
struct Cyc_Absyn_Decl * Cyc_Absyn_let_decl(struct Cyc_Absyn_Pat *,struct Cyc_Absyn_Exp *,
					   unsigned int);
struct Cyc_Absyn_Vardecl * Cyc_Absyn_new_vardecl(unsigned int,struct _tuple2 *,
						 void *,struct Cyc_Absyn_Exp *,
						 struct Cyc_Absyn_Exp *);
long Cyc_Absyn_no_side_effects_exp(struct Cyc_Absyn_Exp *);
void Cyc_Absyn_visit_stmt(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									   struct Cyc_Absyn_Stmt *),
			  void *,struct Cyc_Absyn_Stmt *);
extern struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct Cyc_Atts_No_throw_att_val;
struct Cyc_List_List * Cyc_Atts_transfer_fn_type_atts(void *,struct Cyc_List_List *);
void Cyc_Atts_check_fndecl_atts(unsigned int,struct Cyc_List_List *,long);
int Cyc_Atts_attribute_cmp(void *,void *);
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_mk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ek;
extern struct Cyc_Absyn_Kind Cyc_Kinds_aqk;
void * Cyc_Kinds_kind_to_bound(struct Cyc_Absyn_Kind *);
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
enum Cyc_Absyn_Coercion Cyc_Subtype_coercible_exact(unsigned int,void *,void *);
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
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
struct Cyc_Tcenv_Fenv * Cyc_Tcenv_nested_fenv(unsigned int,struct Cyc_Tcenv_Fenv *,
					      struct Cyc_Absyn_Fndecl *);
void * Cyc_Tcenv_return_typ(struct Cyc_Tcenv_Tenv *);
struct Cyc_List_List * Cyc_Tcenv_lookup_type_vars(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_add_type_vars(unsigned int,struct Cyc_Tcenv_Tenv *,
						struct Cyc_List_List *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_set_fallthru(struct Cyc_Tcenv_Tenv *,struct Cyc_List_List *,
					       struct Cyc_List_List *,struct Cyc_Absyn_Switch_clause *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_clear_fallthru(struct Cyc_Tcenv_Tenv *);
long Cyc_Tcenv_in_stmt_exp(struct Cyc_Tcenv_Tenv *);
 struct _tuple15 {
  struct Cyc_Absyn_Switch_clause * f0;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
};
const struct _tuple15 *const  Cyc_Tcenv_process_fallthru(struct Cyc_Tcenv_Tenv *,
							 struct Cyc_Absyn_Stmt *,
							 struct Cyc_Absyn_Switch_clause * * *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_new_block(unsigned int,struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_new_named_block(unsigned int,struct Cyc_Tcenv_Tenv *,
						  struct Cyc_Absyn_Tvar *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_new_effect_constraints(struct Cyc_Tcenv_Tenv *,
							 struct Cyc_List_List *,
							 unsigned int);
void * Cyc_Tcenv_curr_rgn(struct Cyc_Tcenv_Tenv *);
struct Cyc_List_List * Cyc_Tcenv_curr_aquals_bounds(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_add_aquals_bound(struct Cyc_Tcenv_Tenv *,
						   void *,void *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_add_region(struct Cyc_Tcenv_Tenv *,void *,
					     long,long);
void Cyc_Tcenv_check_delayed_effects(struct Cyc_Tcenv_Tenv *);
void Cyc_Tcenv_check_delayed_constraints(struct Cyc_Tcenv_Tenv *);
void * Cyc_Tcexp_tcExp(struct Cyc_Tcenv_Tenv *,void * *,struct Cyc_Absyn_Exp *);
void * Cyc_Tcexp_tcExpInitializer(struct Cyc_Tcenv_Tenv *,void * *,struct Cyc_Absyn_Exp *);
void Cyc_Tcexp_tcTest(struct Cyc_Tcenv_Tenv *,struct Cyc_Absyn_Exp *,struct _fat_ptr);
void Cyc_Tcexp_check_consume(unsigned int,struct Cyc_List_List *,void *,struct Cyc_Absyn_Exp *);
 struct Cyc_Tcpat_TcPatResult {
  struct _tuple1 * tvars_and_effconstr_opt;
  struct Cyc_List_List * patvars;
  struct Cyc_List_List * aquals_bounds;
};
struct Cyc_Tcpat_TcPatResult Cyc_Tcpat_tcPat(struct Cyc_Tcenv_Tenv *,struct Cyc_Absyn_Pat *,
					     void * *,struct Cyc_Absyn_Exp *);
void Cyc_Tcpat_check_pat_regions(struct Cyc_Tcenv_Tenv *,struct Cyc_Absyn_Pat *,
				 struct Cyc_Tcpat_TcPatResult *);
void Cyc_Tcpat_check_switch_exhaustive(unsigned int,struct Cyc_Tcenv_Tenv *,
				       struct Cyc_List_List *,void * *);
long Cyc_Tcpat_check_let_pat_exhaustive(unsigned int,struct Cyc_Tcenv_Tenv *,
					struct Cyc_Absyn_Pat *,void * *);
void Cyc_Tcpat_check_catch_overlap(unsigned int,struct Cyc_Tcenv_Tenv *,struct Cyc_List_List *,
				   void * *);
void Cyc_Tcstmt_tcStmt(struct Cyc_Tcenv_Tenv *,struct Cyc_Absyn_Stmt *,long);
long Cyc_Tcstmt_ensure_no_throw_stmt(struct Cyc_Absyn_Stmt *);
void Cyc_Tctyp_check_fndecl_valid_type(unsigned int,struct Cyc_Tcenv_Tenv *,
				       struct Cyc_Absyn_Fndecl *);
void Cyc_Tctyp_check_type(unsigned int,struct Cyc_Tcenv_Tenv *,struct Cyc_List_List *,
			  struct Cyc_Absyn_Kind *,long,long,void *);
long Cyc_Tcutil_is_void_type(void *);
long Cyc_Tcutil_is_any_int_type(void *);
long Cyc_Tcutil_is_any_float_type(void *);
long Cyc_Tcutil_coerce_arg(struct Cyc_List_List *,struct Cyc_Absyn_Exp *,
			   void *,long *);
long Cyc_Tcutil_coerce_assign(struct Cyc_List_List *,struct Cyc_Absyn_Exp *,
			      void *);
void * Cyc_Tcutil_substitute(struct Cyc_List_List *,void *);
void * Cyc_Tcutil_fndecl2type(struct Cyc_Absyn_Fndecl *);
 struct _tuple16 {
  struct Cyc_Absyn_Tvar * f0;
  void * f1;
};
struct _tuple16 * Cyc_Tcutil_make_inst_var(struct Cyc_List_List *,struct Cyc_Absyn_Tvar *);
int Cyc_Tcutil_new_tvar_id();
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_extract_const_from_typedef(unsigned int,long,void *);
struct Cyc_List_List * Cyc_Tcutil_filter_nulls(struct Cyc_List_List *);
long Cyc_Tcutil_is_aliasable_qual(void *);
void Cyc_Unify_explain_failure();
long Cyc_Unify_unify(void *,void *);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Typ_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_TypOpt_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_Vardecl_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
void Cyc_Warn_err2(unsigned int,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned int,struct _fat_ptr);
void * Cyc_Warn_impos2(struct _fat_ptr);
static void Cyc_Tcstmt_simplify_unused_result_exp(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T3;
  enum Cyc_Absyn_Incrementor _T4;
  int _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T9;
  _T0 = e;
  { void * _TA = _T0->r;
    struct Cyc_Absyn_Exp * _TB;
    _T1 = (int *)_TA;
    _T2 = *_T1;
    if (_T2 != 5) { goto _TL0;
    }
    _T3 = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_TA;
    _T4 = _T3->f2;
    _T5 = (int)_T4;
    switch (_T5) {
    case Cyc_Absyn_PostInc: 
      { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _TC = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_TA;
	_TB = _TC->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _TB;
	_T6 = e;
	{ struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _TC = _cycalloc(sizeof(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct));
	  _TC->tag = 5;
	  _TC->f1 = e1;
	  _TC->f2 = 0U;
	  _T7 = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_TC;
	}_T6->r = (void *)_T7;
	goto _LL0;
      }
    case Cyc_Absyn_PostDec: 
      { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _TC = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_TA;
	_TB = _TC->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _TB;
	_T8 = e;
	{ struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _TC = _cycalloc(sizeof(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct));
	  _TC->tag = 5;
	  _TC->f1 = e1;
	  _TC->f2 = 2U;
	  _T9 = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_TC;
	}_T8->r = (void *)_T9;
	goto _LL0;
      }
    default: 
      goto _LL5;
    }
    goto _TL1;
    _TL0: _LL5: goto _LL0;
    _TL1: _LL0: ;
  }
}
static struct _tuple2 * Cyc_Tcstmt_stmt_temp_var() {
  struct _tuple2 * _T0;
  struct _fat_ptr * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Int_pa_PrintArg_struct _T3;
  int _T4;
  int _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  static int counter = 0;
  { struct _tuple2 * _T8 = _cycalloc(sizeof(struct _tuple2));
    _T8->f0 = Cyc_Absyn_Loc_n();
    { struct _fat_ptr * _T9 = _cycalloc(sizeof(struct _fat_ptr));
      { struct Cyc_Int_pa_PrintArg_struct _TA;
	_TA.tag = 1;
	_T4 = counter;
	counter = _T4 + 1;
	_T5 = _T4;
	_TA.f1 = (unsigned int)_T5;
	_T3 = _TA;
      }{ struct Cyc_Int_pa_PrintArg_struct _TA = _T3;
	void * _TB[1];
	_TB[0] = &_TA;
	_T6 = _tag_fat("_tmpS%X",sizeof(char),8U);
	_T7 = _tag_fat(_TB,sizeof(void *),1);
	_T2 = Cyc_aprintf(_T6,_T7);
      }*_T9 = _T2;
      _T1 = (struct _fat_ptr *)_T9;
    }_T8->f1 = _T1;
    _T0 = (struct _tuple2 *)_T8;
  }return _T0;
}
static long Cyc_Tcstmt_make_var_exp(struct Cyc_Absyn_Exp * * eptr,struct Cyc_Absyn_Stmt * s0) {
  struct Cyc_Absyn_Exp * * _T0;
  long _T1;
  struct Cyc_Absyn_Exp * _T2;
  int * _T3;
  unsigned int _T4;
  struct Cyc_Absyn_Exp * * _T5;
  struct _tuple2 * _T6;
  void * _T7;
  struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T8;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T9;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _TA;
  void * _TB;
  struct Cyc_Absyn_Exp * _TC;
  unsigned int _TD;
  void * _TE;
  struct Cyc_Absyn_Exp * _TF;
  unsigned int _T10;
  struct Cyc_Absyn_Pat * _T11;
  struct Cyc_Absyn_Exp * _T12;
  struct Cyc_Absyn_Stmt * _T13;
  unsigned int _T14;
  struct Cyc_Absyn_Stmt * _T15;
  struct Cyc_Absyn_Decl * _T16;
  struct Cyc_Absyn_Stmt * _T17;
  void * _T18;
  struct Cyc_Absyn_Stmt * _T19;
  unsigned int _T1A;
  struct Cyc_Absyn_Stmt * _T1B;
  struct Cyc_Absyn_Stmt * _T1C;
  unsigned int _T1D;
  struct Cyc_Absyn_Stmt * _T1E;
  struct Cyc_Absyn_Exp * * _T1F;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T20;
  void * _T21;
  struct Cyc_Absyn_Exp * _T22;
  unsigned int _T23;
  _T0 = eptr;
  { struct Cyc_Absyn_Exp * e2 = *_T0;
    long done = 0;
    _TL3: _T1 = done;
    if (_T1) { goto _TL5;
    }else { goto _TL4;
    }
    _TL4: _T2 = e2;
    { void * _T24 = _T2->r;
      struct Cyc_Absyn_Exp * _T25;
      _T3 = (int *)_T24;
      _T4 = *_T3;
      switch (_T4) {
      case 1: 
	return 0;
      case 12: 
	{ struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T26 = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T24;
	  _T25 = _T26->f1;
	}{ struct Cyc_Absyn_Exp * e3 = _T25;
	  _T25 = e3;
	  goto _LL6;
	}
      case 13: 
	{ struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T26 = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T24;
	  _T25 = _T26->f1;
	}_LL6: { struct Cyc_Absyn_Exp * e3 = _T25;
	  e2 = e3;
	  goto _TL3;
	}
      default: 
	done = 1;
      }
      ;
    }goto _TL3;
    _TL5: _T5 = eptr;
    { struct Cyc_Absyn_Exp * e = *_T5;
      _T6 = Cyc_Tcstmt_stmt_temp_var();
      _T7 = Cyc_Absyn_new_evar(0,0);
      { struct Cyc_Absyn_Vardecl * vd = Cyc_Absyn_new_vardecl(0U,_T6,_T7,
							      0,0);
	{ struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T24 = _cycalloc(sizeof(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct));
	  _T24->tag = 1;
	  _T24->f1 = vd;
	  _T9 = &Cyc_Absyn_Wild_p_val;
	  _TA = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T9;
	  _TB = (void *)_TA;
	  _TC = e;
	  _TD = _TC->loc;
	  _T24->f2 = Cyc_Absyn_new_pat(_TB,_TD);
	  _T8 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T24;
	}_TE = (void *)_T8;
	_TF = e;
	_T10 = _TF->loc;
	_T11 = Cyc_Absyn_new_pat(_TE,_T10);
	_T12 = e;
	_T13 = s0;
	_T14 = _T13->loc;
	{ struct Cyc_Absyn_Decl * d = Cyc_Absyn_let_decl(_T11,_T12,_T14);
	  _T15 = s0;
	  _T16 = d;
	  _T17 = s0;
	  _T18 = _T17->r;
	  _T19 = s0;
	  _T1A = _T19->loc;
	  _T1B = Cyc_Absyn_new_stmt(_T18,_T1A);
	  _T1C = s0;
	  _T1D = _T1C->loc;
	  _T1E = Cyc_Absyn_decl_stmt(_T16,_T1B,_T1D);
	  _T15->r = _T1E->r;
	  _T1F = eptr;
	  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T24 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
	    _T24->tag = 4;
	    _T24->f1 = vd;
	    _T20 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T24;
	  }_T21 = (void *)_T20;
	  _T22 = e;
	  _T23 = _T22->loc;
	  *_T1F = Cyc_Absyn_varb_exp(_T21,_T23);
	  return 1;
	}
      }
    }
  }
}
 struct _tuple17 {
  struct Cyc_Absyn_Tvar * f0;
  long f1;
};
 struct _tuple18 {
  struct Cyc_Absyn_Vardecl * * f0;
  struct Cyc_Absyn_Exp * f1;
};
static void Cyc_Tcstmt_pattern_synth(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
				     struct Cyc_Tcpat_TcPatResult pat_res,
				     struct Cyc_Absyn_Stmt * s,struct Cyc_Absyn_Exp * where_opt,
				     long new_block) {
  struct Cyc_Tcpat_TcPatResult _T0;
  struct Cyc_Tcpat_TcPatResult _T1;
  struct Cyc_Tcpat_TcPatResult _T2;
  struct Cyc_List_List * (* _T3)(struct Cyc_Absyn_Vardecl * * (*)(struct _tuple18 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T4)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Vardecl * * (* _T5)(struct _tuple18 *);
  void * (* _T6)(struct _tuple0 *);
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * (* _T9)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _TA)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Tvar * (* _TB)(struct _tuple17 *);
  void * (* _TC)(struct _tuple0 *);
  struct _tuple1 * _TD;
  struct _tuple1 _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  struct _tuple1 * _T11;
  struct _tuple1 _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * (* _T14)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T15)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Tvar * (* _T16)(struct _tuple17 *);
  void * (* _T17)(struct _tuple0 *);
  struct Cyc_List_List * (* _T18)(long (*)(struct _tuple17 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T19)(long (*)(void *),struct Cyc_List_List *);
  long (* _T1A)(struct _tuple17 *);
  void * (* _T1B)(struct _tuple0 *);
  struct _tuple1 * _T1C;
  struct _tuple1 _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_Tcenv_Tenv * _T20;
  struct Cyc_Absyn_VarType_Absyn_Type_struct * _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  void * _T24;
  struct Cyc_List_List * _T25;
  long _T26;
  struct Cyc_List_List * _T27;
  void * _T28;
  struct Cyc_Absyn_Vardecl * * _T29;
  struct Cyc_List_List * _T2A;
  void * _T2B;
  struct Cyc_Absyn_Vardecl * * _T2C;
  struct Cyc_Absyn_Vardecl * _T2D;
  struct Cyc_List_List * _T2E;
  struct Cyc_List_List * _T2F;
  void * _T30;
  int * _T31;
  int _T32;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T33;
  void * _T34;
  int * _T35;
  int _T36;
  struct Cyc_List_List * _T37;
  struct Cyc_Tcenv_Tenv * _T38;
  struct Cyc_Absyn_Exp * _T39;
  struct _fat_ptr _T3A;
  long _T3B;
  struct Cyc_Warn_String_Warn_Warg_struct _T3C;
  struct Cyc_Absyn_Exp * _T3D;
  unsigned int _T3E;
  struct _fat_ptr _T3F;
  struct Cyc_List_List * _T40;
  struct Cyc_List_List * _T41;
  struct _tuple1 * _T42;
  _T0 = pat_res;
  _T42 = _T0.tvars_and_effconstr_opt;
  _T1 = pat_res;
  _T41 = _T1.patvars;
  _T2 = pat_res;
  _T40 = _T2.aquals_bounds;
  { struct _tuple1 * p = _T42;
    struct Cyc_List_List * vse = _T41;
    struct Cyc_List_List * aqb = _T40;
    _T4 = Cyc_List_map;
    { struct Cyc_List_List * (* _T43)(struct Cyc_Absyn_Vardecl * * (*)(struct _tuple18 *),
				      struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Vardecl * * (*)(struct _tuple18 *),
											    struct Cyc_List_List *))_T4;
      _T3 = _T43;
    }_T6 = Cyc_Core_fst;
    { struct Cyc_Absyn_Vardecl * * (* _T43)(struct _tuple18 *) = (struct Cyc_Absyn_Vardecl * * (*)(struct _tuple18 *))_T6;
      _T5 = _T43;
    }_T7 = vse;
    { struct Cyc_List_List * vs = _T3(_T5,_T7);
      if (p != 0) { goto _TL7;
      }
      _T8 = 0;
      goto _TL8;
      _TL7: _TA = Cyc_List_map;
      { struct Cyc_List_List * (* _T43)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
					struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
											      struct Cyc_List_List *))_TA;
	_T9 = _T43;
      }_TC = Cyc_Core_fst;
      { struct Cyc_Absyn_Tvar * (* _T43)(struct _tuple17 *) = (struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *))_TC;
	_TB = _T43;
      }_TD = p;
      _TE = *_TD;
      _TF = _TE.f0;
      _T8 = _T9(_TB,_TF);
      _TL8: { struct Cyc_List_List * tvs = _T8;
	if (p != 0) { goto _TL9;
	}
	_T10 = 0;
	goto _TLA;
	_TL9: _T11 = p;
	_T12 = *_T11;
	_T10 = _T12.f1;
	_TLA: { struct Cyc_List_List * ecs = _T10;
	  if (p != 0) { goto _TLB;
	  }
	  _T13 = 0;
	  goto _TLC;
	  _TLB: _T15 = Cyc_List_map;
	  { struct Cyc_List_List * (* _T43)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
					    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
												  struct Cyc_List_List *))_T15;
	    _T14 = _T43;
	  }_T17 = Cyc_Core_fst;
	  { struct Cyc_Absyn_Tvar * (* _T43)(struct _tuple17 *) = (struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *))_T17;
	    _T16 = _T43;
	  }_T19 = Cyc_List_filter;
	  { struct Cyc_List_List * (* _T43)(long (*)(struct _tuple17 *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(long (*)(struct _tuple17 *),
															      struct Cyc_List_List *))_T19;
	    _T18 = _T43;
	  }_T1B = Cyc_Core_snd;
	  { long (* _T43)(struct _tuple17 *) = (long (*)(struct _tuple17 *))_T1B;
	    _T1A = _T43;
	  }_T1C = p;
	  _T1D = *_T1C;
	  _T1E = _T1D.f0;
	  _T1F = _T18(_T1A,_T1E);
	  _T13 = _T14(_T16,_T1F);
	  _TLC: { struct Cyc_List_List * rgns = _T13;
	    te = Cyc_Tcenv_add_type_vars(loc,te,tvs);
	    _TL10: if (rgns != 0) { goto _TLE;
	    }else { goto _TLF;
	    }
	    _TLE: _T20 = te;
	    { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T43 = _cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));
	      _T43->tag = 2;
	      _T22 = rgns;
	      _T23 = _T22->hd;
	      _T43->f1 = (struct Cyc_Absyn_Tvar *)_T23;
	      _T21 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T43;
	    }_T24 = (void *)_T21;
	    te = Cyc_Tcenv_add_region(_T20,_T24,0,0);
	    _T25 = rgns;
	    rgns = _T25->tl;
	    goto _TL10;
	    _TLF: te = Cyc_Tcenv_new_effect_constraints(te,ecs,loc);
	    _T26 = new_block;
	    if (! _T26) { goto _TL11;
	    }
	    te = Cyc_Tcenv_new_block(loc,te);
	    goto _TL12;
	    _TL11: _TL12: { void * ropt = Cyc_Tcenv_curr_rgn(te);
	      _TL16: if (vs != 0) { goto _TL14;
	      }else { goto _TL15;
	      }
	      _TL14: _T27 = vs;
	      _T28 = _T27->hd;
	      _T29 = (struct Cyc_Absyn_Vardecl * *)_T28;
	      if (_T29 == 0) { goto _TL17;
	      }
	      _T2A = vs;
	      _T2B = _T2A->hd;
	      _T2C = (struct Cyc_Absyn_Vardecl * *)_T2B;
	      _T2D = *_T2C;
	      _T2D->rgn = ropt;
	      goto _TL18;
	      _TL17: _TL18: _T2E = vs;
	      vs = _T2E->tl;
	      goto _TL16;
	      _TL15: _TL1C: if (aqb != 0) { goto _TL1A;
	      }else { goto _TL1B;
	      }
	      _TL1A: _T2F = aqb;
	      _T30 = _T2F->hd;
	      { struct _tuple0 * _T43 = (struct _tuple0 *)_T30;
		void * _T44;
		void * _T45;
		{ struct _tuple0 _T46 = *_T43;
		  _T45 = _T46.f0;
		  _T44 = _T46.f1;
		}{ void * tv = _T45;
		  void * b = _T44;
		  void * _T46 = Cyc_Absyn_compress(tv);
		  _T31 = (int *)_T46;
		  _T32 = *_T31;
		  if (_T32 != 0) { goto _TL1D;
		  }
		  _T33 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T46;
		  _T34 = _T33->f1;
		  _T35 = (int *)_T34;
		  _T36 = *_T35;
		  if (_T36 != 15) { goto _TL1F;
		  }
		  te = Cyc_Tcenv_add_aquals_bound(te,tv,b);
		  goto _LL6;
		  _TL1F: goto _LL9;
		  _TL1D: _LL9: goto _LL6;
		  _LL6: ;
		}
	      }_T37 = aqb;
	      aqb = _T37->tl;
	      goto _TL1C;
	      _TL1B: if (where_opt == 0) { goto _TL21;
	      }
	      _T38 = te;
	      _T39 = where_opt;
	      _T3A = _tag_fat("switch clause guard",sizeof(char),20U);
	      Cyc_Tcexp_tcTest(_T38,_T39,_T3A);
	      _T3B = Cyc_Absyn_no_side_effects_exp(where_opt);
	      if (_T3B) { goto _TL23;
	      }else { goto _TL25;
	      }
	      _TL25: { struct Cyc_Warn_String_Warn_Warg_struct _T43;
		_T43.tag = 0;
		_T43.f1 = _tag_fat("cannot show &&-clause in pattern has no effects",
				   sizeof(char),48U);
		_T3C = _T43;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T43 = _T3C;
		void * _T44[1];
		_T44[0] = &_T43;
		_T3D = where_opt;
		_T3E = _T3D->loc;
		_T3F = _tag_fat(_T44,sizeof(void *),1);
		Cyc_Warn_err2(_T3E,_T3F);
	      }goto _TL24;
	      _TL23: _TL24: goto _TL22;
	      _TL21: _TL22: Cyc_Tcstmt_tcStmt(te,s,0);
	    }
	  }
	}
      }
    }
  }
}
static long Cyc_Tcstmt_is_case_default(struct Cyc_Absyn_Switch_clause * c) {
  struct Cyc_Absyn_Switch_clause * _T0;
  struct Cyc_Absyn_Pat * _T1;
  int * _T2;
  unsigned int _T3;
  struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T4;
  struct Cyc_Absyn_Pat * _T5;
  struct Cyc_Absyn_Pat * _T6;
  void * _T7;
  int * _T8;
  int _T9;
  _T0 = c;
  _T1 = _T0->pattern;
  { void * _TA = _T1->r;
    _T2 = (int *)_TA;
    _T3 = *_T2;
    switch (_T3) {
    case 0: 
      return 1;
    case 1: 
      _T4 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_TA;
      _T5 = _T4->f2;
      _T6 = (struct Cyc_Absyn_Pat *)_T5;
      _T7 = _T6->r;
      _T8 = (int *)_T7;
      _T9 = *_T8;
      if (_T9 != 0) { goto _TL27;
      }
      return 1;
      _TL27: goto _LL5;
    default: 
      _LL5: return 0;
    }
    ;
  }
}
void Cyc_Tcstmt_tcStmt(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Stmt * s0,
		       long new_block) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  long _T3;
  long _T4;
  long _T5;
  long _T6;
  struct Cyc_Warn_String_Warn_Warg_struct _T7;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T8;
  struct Cyc_Absyn_Stmt * _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TD;
  struct Cyc_Absyn_Stmt * _TE;
  unsigned int _TF;
  struct _fat_ptr _T10;
  struct Cyc_Tcenv_Tenv * _T11;
  void * * _T12;
  struct Cyc_Absyn_Exp * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_Absyn_Exp * _T15;
  void * _T16;
  long _T17;
  struct Cyc_Warn_String_Warn_Warg_struct _T18;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T19;
  struct Cyc_Absyn_Exp * _T1A;
  struct Cyc_Warn_String_Warn_Warg_struct _T1B;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T1C;
  struct Cyc_Absyn_Stmt * _T1D;
  unsigned int _T1E;
  struct _fat_ptr _T1F;
  struct Cyc_Absyn_Exp * _T20;
  unsigned int _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  struct Cyc_Absyn_Exp * _T24;
  struct Cyc_Tcenv_Tenv * _T25;
  struct Cyc_Absyn_Exp * _T26;
  struct _fat_ptr _T27;
  struct _tuple11 _T28;
  struct _tuple11 _T29;
  struct Cyc_Tcenv_Tenv * _T2A;
  struct Cyc_Absyn_Exp * _T2B;
  struct _fat_ptr _T2C;
  struct _tuple11 _T2D;
  struct _tuple11 _T2E;
  struct _tuple11 _T2F;
  struct _tuple11 _T30;
  struct Cyc_Tcenv_Tenv * _T31;
  struct Cyc_Absyn_Exp * _T32;
  struct _fat_ptr _T33;
  struct _tuple11 _T34;
  struct _tuple11 _T35;
  struct Cyc_Tcenv_Tenv * _T36;
  struct Cyc_Absyn_Exp * _T37;
  struct _fat_ptr _T38;
  struct Cyc_Absyn_Tvar * _T39;
  struct _fat_ptr * _T3A;
  struct _fat_ptr _T3B;
  struct Cyc_String_pa_PrintArg_struct _T3C;
  struct _fat_ptr * _T3D;
  struct _fat_ptr _T3E;
  struct _fat_ptr _T3F;
  struct Cyc_Absyn_Tvar * _T40;
  struct Cyc_Absyn_Tvar * _T41;
  struct Cyc_Absyn_Kind * _T42;
  struct Cyc_Absyn_Kind * _T43;
  struct Cyc_Absyn_Tvar * _T44;
  struct Cyc_Absyn_Stmt * _T45;
  unsigned int _T46;
  struct Cyc_Tcenv_Tenv * _T47;
  struct Cyc_Absyn_Tvar * _T48;
  struct Cyc_Tcenv_Tenv * _T49;
  struct Cyc_Absyn_Stmt * _T4A;
  struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct * _T4B;
  struct Cyc_Absyn_Switch_clause * * * _T4C;
  struct Cyc_Warn_String_Warn_Warg_struct _T4D;
  struct Cyc_Absyn_Stmt * _T4E;
  unsigned int _T4F;
  struct _fat_ptr _T50;
  const struct _tuple15 * _T51;
  struct Cyc_List_List * (* _T52)(struct _tuple16 * (*)(struct Cyc_List_List *,
							struct Cyc_Absyn_Tvar *),
				  struct Cyc_List_List *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T53)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct _tuple16 * (* _T54)(struct Cyc_List_List *,struct Cyc_Absyn_Tvar *);
  struct Cyc_List_List * _T55;
  struct Cyc_List_List * _T56;
  struct Cyc_List_List * (* _T57)(void * (*)(struct Cyc_List_List *,void *),
				  struct Cyc_List_List *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T58)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  void * (* _T59)(struct Cyc_List_List *,void *);
  struct Cyc_List_List * _T5A;
  struct Cyc_List_List * _T5B;
  struct Cyc_Tcenv_Tenv * _T5C;
  struct Cyc_List_List * _T5D;
  void * _T5E;
  struct Cyc_Absyn_Exp * _T5F;
  struct Cyc_List_List * _T60;
  struct Cyc_List_List * _T61;
  void * _T62;
  struct Cyc_Absyn_Exp * _T63;
  struct Cyc_List_List * _T64;
  void * _T65;
  long _T66;
  struct Cyc_Warn_String_Warn_Warg_struct _T67;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T68;
  struct Cyc_List_List * _T69;
  void * _T6A;
  struct Cyc_Absyn_Exp * _T6B;
  struct Cyc_Warn_String_Warn_Warg_struct _T6C;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T6D;
  struct Cyc_List_List * _T6E;
  struct Cyc_Absyn_Stmt * _T6F;
  unsigned int _T70;
  struct _fat_ptr _T71;
  struct Cyc_List_List * _T72;
  void * _T73;
  struct Cyc_Absyn_Exp * _T74;
  unsigned int _T75;
  struct Cyc_List_List * _T76;
  struct Cyc_List_List * _T77;
  void * _T78;
  struct Cyc_List_List * _T79;
  void * _T7A;
  struct Cyc_Absyn_Exp * _T7B;
  struct Cyc_List_List * _T7C;
  struct Cyc_List_List * _T7D;
  struct Cyc_Warn_String_Warn_Warg_struct _T7E;
  struct Cyc_Absyn_Stmt * _T7F;
  unsigned int _T80;
  struct _fat_ptr _T81;
  struct Cyc_Warn_String_Warn_Warg_struct _T82;
  struct Cyc_Absyn_Stmt * _T83;
  unsigned int _T84;
  struct _fat_ptr _T85;
  struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _T86;
  struct Cyc_Absyn_Exp * * _T87;
  struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _T88;
  void * * _T89;
  long _T8A;
  struct Cyc_Absyn_Exp * * _T8B;
  struct Cyc_Absyn_Exp * _T8C;
  unsigned int _T8D;
  struct Cyc_List_List * _T8E;
  void * _T8F;
  struct Cyc_Absyn_Exp * _T90;
  long _T91;
  struct Cyc_Tcenv_Tenv * _T92;
  struct Cyc_List_List * _T93;
  void * _T94;
  struct Cyc_Absyn_Switch_clause * _T95;
  struct Cyc_Absyn_Pat * _T96;
  void * * _T97;
  struct Cyc_Absyn_Exp * _T98;
  struct Cyc_Tcpat_TcPatResult * _T99;
  struct Cyc_List_List * _T9A;
  struct Cyc_List_List * _T9B;
  struct Cyc_Tcpat_TcPatResult * _T9C;
  struct Cyc_Tcenv_Tenv * _T9D;
  struct Cyc_List_List * _T9E;
  struct Cyc_List_List * _T9F;
  void * _TA0;
  struct Cyc_Absyn_Switch_clause * _TA1;
  struct Cyc_Absyn_Pat * _TA2;
  void * * _TA3;
  struct Cyc_Absyn_Exp * _TA4;
  struct Cyc_Tcpat_TcPatResult * _TA5;
  struct _tuple1 * _TA6;
  struct Cyc_Tcpat_TcPatResult * _TA7;
  struct _tuple1 * _TA8;
  struct _tuple1 _TA9;
  struct Cyc_List_List * _TAA;
  struct Cyc_Tcpat_TcPatResult * _TAB;
  struct Cyc_List_List * _TAC;
  struct _tuple1 _TAD;
  struct Cyc_List_List * _TAE;
  struct Cyc_List_List * _TAF;
  struct Cyc_List_List * _TB0;
  struct Cyc_Tcpat_TcPatResult * _TB1;
  struct _tuple1 * _TB2;
  struct Cyc_List_List * (* _TB3)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TB4)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Tvar * (* _TB5)(struct _tuple17 *);
  void * (* _TB6)(struct _tuple0 *);
  struct Cyc_Tcpat_TcPatResult * _TB7;
  struct _tuple1 * _TB8;
  struct _tuple1 _TB9;
  struct Cyc_List_List * _TBA;
  struct Cyc_Tcenv_Tenv * _TBB;
  struct Cyc_List_List * _TBC;
  struct Cyc_List_List * _TBD;
  struct Cyc_List_List * _TBE;
  struct Cyc_List_List * _TBF;
  struct Cyc_List_List * _TC0;
  void * _TC1;
  struct Cyc_Absyn_Switch_clause * _TC2;
  struct Cyc_List_List * _TC3;
  void * _TC4;
  struct Cyc_Absyn_Switch_clause * _TC5;
  struct Cyc_List_List * _TC6;
  void * _TC7;
  struct Cyc_Absyn_Switch_clause * _TC8;
  unsigned int _TC9;
  void * _TCA;
  struct Cyc_Absyn_Pat * _TCB;
  void * _TCC;
  void * _TCD;
  enum Cyc_Absyn_Coercion _TCE;
  int _TCF;
  struct Cyc_Warn_String_Warn_Warg_struct _TD0;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TD1;
  struct Cyc_Warn_String_Warn_Warg_struct _TD2;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _TD3;
  struct Cyc_Absyn_Pat * _TD4;
  struct Cyc_List_List * _TD5;
  void * _TD6;
  struct Cyc_Absyn_Switch_clause * _TD7;
  unsigned int _TD8;
  struct _fat_ptr _TD9;
  struct Cyc_Tcenv_Tenv * _TDA;
  struct Cyc_Absyn_Pat * _TDB;
  struct Cyc_Tcpat_TcPatResult * _TDC;
  struct Cyc_Tcpat_TcPatResult * _TDD;
  struct Cyc_List_List * _TDE;
  void * _TDF;
  struct Cyc_Absyn_Switch_clause * _TE0;
  struct Cyc_Core_Opt * _TE1;
  struct Cyc_Tcpat_TcPatResult _TE2;
  struct Cyc_List_List * _TE3;
  void * _TE4;
  struct Cyc_Absyn_Switch_clause * _TE5;
  unsigned int _TE6;
  struct Cyc_Tcenv_Tenv * _TE7;
  struct Cyc_Tcpat_TcPatResult _TE8;
  struct Cyc_List_List * _TE9;
  void * _TEA;
  struct Cyc_Absyn_Switch_clause * _TEB;
  struct Cyc_Absyn_Stmt * _TEC;
  struct Cyc_List_List * _TED;
  void * _TEE;
  struct Cyc_Absyn_Switch_clause * _TEF;
  struct Cyc_Absyn_Exp * _TF0;
  struct Cyc_List_List * _TF1;
  struct Cyc_Absyn_Stmt * _TF2;
  unsigned int _TF3;
  struct Cyc_Tcenv_Tenv * _TF4;
  struct Cyc_List_List * _TF5;
  void * * _TF6;
  struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct * _TF7;
  struct Cyc_List_List * * _TF8;
  struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct * _TF9;
  void * * _TFA;
  struct Cyc_Absyn_Stmt * _TFB;
  struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _TFC;
  struct Cyc_Absyn_Stmt * _TFD;
  void * _TFE;
  struct Cyc_Absyn_Stmt * _TFF;
  unsigned int _T100;
  struct Cyc_Absyn_Stmt * _T101;
  unsigned int _T102;
  void * _T103;
  struct Cyc_Absyn_Stmt * _T104;
  unsigned int _T105;
  struct Cyc_Absyn_Stmt * _T106;
  long (* _T107)(long (*)(struct Cyc_Absyn_Switch_clause *),struct Cyc_List_List *);
  long (* _T108)(long (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * * _T109;
  struct Cyc_List_List * _T10A;
  long _T10B;
  struct _tuple2 * _T10C;
  struct _tuple2 * _T10D;
  struct _fat_ptr * _T10E;
  struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T10F;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T110;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T111;
  void * _T112;
  void * _T113;
  struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct * _T114;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T115;
  void * _T116;
  void * _T117;
  struct Cyc_Absyn_Exp * _T118;
  struct Cyc_Absyn_Switch_clause * _T119;
  struct Cyc_Absyn_Switch_clause * _T11A;
  struct Cyc_Absyn_Switch_clause * _T11B;
  struct Cyc_Absyn_Switch_clause * _T11C;
  struct Cyc_Absyn_Switch_clause * _T11D;
  struct Cyc_List_List * * _T11E;
  struct Cyc_List_List * * _T11F;
  struct Cyc_List_List * _T120;
  struct Cyc_List_List * _T121;
  struct _fat_ptr _T122;
  struct Cyc_List_List * * _T123;
  long _T124;
  struct Cyc_Tcenv_Tenv * _T125;
  struct Cyc_List_List * _T126;
  void * _T127;
  struct Cyc_Absyn_Switch_clause * _T128;
  struct Cyc_Absyn_Pat * _T129;
  void * * _T12A;
  struct Cyc_Tcpat_TcPatResult * _T12B;
  struct Cyc_List_List * _T12C;
  struct Cyc_List_List * _T12D;
  struct Cyc_Tcpat_TcPatResult * _T12E;
  struct Cyc_Tcenv_Tenv * _T12F;
  struct Cyc_List_List * _T130;
  struct Cyc_List_List * _T131;
  void * _T132;
  struct Cyc_Absyn_Switch_clause * _T133;
  struct Cyc_Absyn_Pat * _T134;
  void * * _T135;
  struct Cyc_Tcpat_TcPatResult * _T136;
  struct _tuple1 * _T137;
  struct Cyc_Tcpat_TcPatResult * _T138;
  struct _tuple1 * _T139;
  struct _tuple1 _T13A;
  struct Cyc_List_List * _T13B;
  struct Cyc_Tcpat_TcPatResult * _T13C;
  struct Cyc_List_List * _T13D;
  struct _tuple1 _T13E;
  struct Cyc_List_List * _T13F;
  struct Cyc_List_List * _T140;
  struct Cyc_List_List * _T141;
  struct Cyc_Tcpat_TcPatResult * _T142;
  struct _tuple1 * _T143;
  struct Cyc_List_List * (* _T144)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
				   struct Cyc_List_List *);
  struct Cyc_List_List * (* _T145)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Tvar * (* _T146)(struct _tuple17 *);
  void * (* _T147)(struct _tuple0 *);
  struct Cyc_Tcpat_TcPatResult * _T148;
  struct _tuple1 * _T149;
  struct _tuple1 _T14A;
  struct Cyc_List_List * _T14B;
  struct Cyc_Tcenv_Tenv * _T14C;
  struct Cyc_List_List * _T14D;
  struct Cyc_List_List * _T14E;
  struct Cyc_List_List * _T14F;
  struct Cyc_List_List * _T150;
  struct Cyc_List_List * _T151;
  void * _T152;
  struct Cyc_Absyn_Switch_clause * _T153;
  struct Cyc_List_List * _T154;
  void * _T155;
  struct Cyc_Absyn_Switch_clause * _T156;
  struct Cyc_List_List * _T157;
  void * _T158;
  struct Cyc_Absyn_Switch_clause * _T159;
  unsigned int _T15A;
  void * _T15B;
  struct Cyc_Absyn_Pat * _T15C;
  void * _T15D;
  void * _T15E;
  enum Cyc_Absyn_Coercion _T15F;
  int _T160;
  struct Cyc_Warn_String_Warn_Warg_struct _T161;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T162;
  struct Cyc_Warn_String_Warn_Warg_struct _T163;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T164;
  struct Cyc_Absyn_Pat * _T165;
  struct Cyc_List_List * _T166;
  void * _T167;
  struct Cyc_Absyn_Switch_clause * _T168;
  unsigned int _T169;
  struct _fat_ptr _T16A;
  struct Cyc_Tcenv_Tenv * _T16B;
  struct Cyc_Absyn_Pat * _T16C;
  struct Cyc_Tcpat_TcPatResult * _T16D;
  struct Cyc_Tcpat_TcPatResult * _T16E;
  struct Cyc_List_List * _T16F;
  void * _T170;
  struct Cyc_Absyn_Switch_clause * _T171;
  struct Cyc_Core_Opt * _T172;
  struct Cyc_Tcpat_TcPatResult _T173;
  struct Cyc_List_List * _T174;
  void * _T175;
  struct Cyc_Absyn_Switch_clause * _T176;
  unsigned int _T177;
  struct Cyc_Tcenv_Tenv * _T178;
  struct Cyc_Tcpat_TcPatResult _T179;
  struct Cyc_List_List * _T17A;
  void * _T17B;
  struct Cyc_Absyn_Switch_clause * _T17C;
  struct Cyc_Absyn_Stmt * _T17D;
  struct Cyc_List_List * _T17E;
  void * _T17F;
  struct Cyc_Absyn_Switch_clause * _T180;
  struct Cyc_Absyn_Exp * _T181;
  struct Cyc_List_List * _T182;
  struct Cyc_Absyn_Stmt * _T183;
  unsigned int _T184;
  struct Cyc_Tcenv_Tenv * _T185;
  struct Cyc_List_List * * _T186;
  struct Cyc_List_List * _T187;
  void * * _T188;
  struct Cyc_Tcenv_Tenv * _T189;
  long _T18A;
  struct Cyc_Absyn_Stmt * _T18B;
  unsigned int _T18C;
  struct Cyc_Tcenv_Tenv * _T18D;
  struct Cyc_Absyn_Decl * _T18E;
  int * _T18F;
  unsigned int _T190;
  struct Cyc_Absyn_Vardecl * _T191;
  struct Cyc_Absyn_Vardecl * _T192;
  void * * _T193;
  enum Cyc_Absyn_Scope _T194;
  int _T195;
  struct Cyc_Absyn_Vardecl * _T196;
  struct Cyc_Warn_String_Warn_Warg_struct _T197;
  struct Cyc_Absyn_Decl * _T198;
  unsigned int _T199;
  struct _fat_ptr _T19A;
  void * * _T19B;
  void * _T19C;
  long _T19D;
  int * _T19E;
  unsigned int _T19F;
  long _T1A0;
  struct Cyc_Absyn_Vardecl * _T1A1;
  struct Cyc_Absyn_Vardecl * _T1A2;
  struct Cyc_Absyn_Exp * _T1A3;
  struct Cyc_Absyn_ArrayInfo _T1A4;
  struct Cyc_Absyn_Exp * _T1A5;
  struct Cyc_Absyn_Vardecl * _T1A6;
  struct Cyc_Absyn_Exp * _T1A7;
  int * _T1A8;
  unsigned int _T1A9;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T1AA;
  union Cyc_Absyn_Cnst _T1AB;
  struct _union_Cnst_Wstring_c _T1AC;
  unsigned int _T1AD;
  union Cyc_Absyn_Cnst _T1AE;
  struct _union_Cnst_String_c _T1AF;
  struct _fat_ptr _T1B0;
  unsigned int _T1B1;
  union Cyc_Absyn_Cnst _T1B2;
  struct _union_Cnst_Wstring_c _T1B3;
  int _T1B4;
  unsigned int _T1B5;
  struct Cyc_Absyn_Vardecl * _T1B6;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T1B7;
  struct Cyc_List_List * _T1B8;
  long _T1B9;
  struct Cyc_Absyn_Stmt * _T1BA;
  unsigned int _T1BB;
  struct Cyc_Tcenv_Tenv * _T1BC;
  struct Cyc_List_List * _T1BD;
  struct Cyc_Absyn_Kind * _T1BE;
  struct Cyc_Absyn_Kind * _T1BF;
  long _T1C0;
  void * _T1C1;
  struct Cyc_Absyn_Vardecl * _T1C2;
  struct Cyc_Absyn_Stmt * _T1C3;
  unsigned int _T1C4;
  struct Cyc_Absyn_Vardecl * _T1C5;
  struct Cyc_Absyn_Tqual _T1C6;
  long _T1C7;
  void * _T1C8;
  enum Cyc_Absyn_Scope _T1C9;
  int _T1CA;
  enum Cyc_Absyn_Scope _T1CB;
  int _T1CC;
  struct Cyc_Warn_String_Warn_Warg_struct _T1CD;
  struct Cyc_Absyn_Decl * _T1CE;
  unsigned int _T1CF;
  struct _fat_ptr _T1D0;
  struct Cyc_Tcenv_Tenv * _T1D1;
  void * * _T1D2;
  struct Cyc_Absyn_Exp * _T1D3;
  long _T1D4;
  long _T1D5;
  struct Cyc_Warn_String_Warn_Warg_struct _T1D6;
  struct Cyc_Absyn_Decl * _T1D7;
  unsigned int _T1D8;
  struct _fat_ptr _T1D9;
  struct Cyc_List_List * _T1DA;
  struct Cyc_Absyn_Exp * _T1DB;
  void * _T1DC;
  long _T1DD;
  struct Cyc_Warn_Vardecl_Warn_Warg_struct _T1DE;
  struct Cyc_Warn_String_Warn_Warg_struct _T1DF;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T1E0;
  struct Cyc_Warn_String_Warn_Warg_struct _T1E1;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T1E2;
  struct Cyc_Absyn_Exp * _T1E3;
  struct Cyc_Absyn_Decl * _T1E4;
  unsigned int _T1E5;
  struct _fat_ptr _T1E6;
  void * _T1E7;
  struct Cyc_Absyn_Exp * _T1E8;
  void * _T1E9;
  struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T1EA;
  struct Cyc_Core_Opt * * _T1EB;
  struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T1EC;
  struct Cyc_Absyn_Exp * * _T1ED;
  struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T1EE;
  void * * _T1EF;
  struct Cyc_Absyn_Pat * _T1F0;
  int * _T1F1;
  unsigned int _T1F2;
  long _T1F3;
  struct Cyc_Absyn_Exp * * _T1F4;
  struct Cyc_Absyn_Exp * _T1F5;
  void * _T1F6;
  struct Cyc_Tcenv_Tenv * _T1F7;
  struct Cyc_Absyn_Pat * _T1F8;
  void * * _T1F9;
  struct Cyc_Absyn_Exp * _T1FA;
  struct Cyc_Core_Opt * * _T1FB;
  struct Cyc_Core_Opt * _T1FC;
  struct Cyc_Tcpat_TcPatResult _T1FD;
  struct Cyc_Absyn_Pat * _T1FE;
  void * _T1FF;
  struct Cyc_Absyn_Exp * _T200;
  void * _T201;
  long _T202;
  struct Cyc_List_List * _T203;
  struct Cyc_Absyn_Exp * _T204;
  void * _T205;
  long _T206;
  struct Cyc_Warn_String_Warn_Warg_struct _T207;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T208;
  struct Cyc_Warn_String_Warn_Warg_struct _T209;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T20A;
  struct Cyc_Absyn_Decl * _T20B;
  unsigned int _T20C;
  struct _fat_ptr _T20D;
  struct Cyc_Tcenv_Tenv * _T20E;
  struct Cyc_Absyn_Pat * _T20F;
  struct Cyc_Tcpat_TcPatResult * _T210;
  struct Cyc_Tcpat_TcPatResult * _T211;
  struct Cyc_Absyn_Pat * _T212;
  unsigned int _T213;
  struct Cyc_Tcenv_Tenv * _T214;
  struct Cyc_Absyn_Pat * _T215;
  void * * _T216;
  struct Cyc_Absyn_Stmt * _T217;
  unsigned int _T218;
  struct Cyc_Tcenv_Tenv * _T219;
  struct Cyc_Tcpat_TcPatResult _T21A;
  struct Cyc_Absyn_Stmt * _T21B;
  struct Cyc_List_List * _T21C;
  void * _T21D;
  struct Cyc_Absyn_Vardecl * _T21E;
  struct Cyc_Absyn_Stmt * _T21F;
  unsigned int _T220;
  struct Cyc_Tcenv_Tenv * _T221;
  struct Cyc_List_List * _T222;
  struct Cyc_Absyn_Kind * _T223;
  struct Cyc_Absyn_Kind * _T224;
  struct Cyc_List_List * _T225;
  void * _T226;
  struct Cyc_Absyn_Vardecl * _T227;
  void * _T228;
  struct Cyc_List_List * _T229;
  struct Cyc_Absyn_Stmt * _T22A;
  struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T22B;
  struct Cyc_Absyn_Stmt * _T22C;
  void * _T22D;
  struct Cyc_Absyn_Stmt * _T22E;
  unsigned int _T22F;
  struct Cyc_Absyn_Stmt * _T230;
  unsigned int _T231;
  void * _T232;
  struct Cyc_Absyn_Stmt * _T233;
  unsigned int _T234;
  struct Cyc_Absyn_Stmt * _T235;
  struct Cyc_Absyn_Vardecl * _T236;
  struct Cyc_Absyn_Vardecl * _T237;
  void * * _T238;
  struct Cyc_Absyn_Vardecl * _T239;
  void * * _T23A;
  void * * _T23B;
  struct Cyc_Absyn_Exp * _T23C;
  unsigned int _T23D;
  struct _tuple2 * _T23E;
  struct Cyc_List_List * _T23F;
  struct _fat_ptr * _T240;
  struct _fat_ptr _T241;
  struct _tuple2 * _T242;
  struct _fat_ptr * _T243;
  struct Cyc_Core_Opt * _T244;
  struct Cyc_Absyn_Kind * _T245;
  struct Cyc_Core_Opt * _T246;
  struct Cyc_Absyn_Kind * _T247;
  struct Cyc_Core_Opt * _T248;
  struct Cyc_Absyn_Kind * _T249;
  union Cyc_Absyn_AggrInfo _T24A;
  struct Cyc_List_List * _T24B;
  struct _fat_ptr _T24C;
  void * _T24D;
  void * _T24E;
  void * _T24F;
  struct Cyc_Absyn_Tqual _T250;
  void * _T251;
  void * _T252;
  struct Cyc_Absyn_Stmt * _T253;
  unsigned int _T254;
  struct Cyc_Tcenv_Tenv * _T255;
  struct Cyc_List_List * _T256;
  struct Cyc_Absyn_Kind * _T257;
  struct Cyc_Absyn_Kind * _T258;
  void * _T259;
  struct Cyc_Tcenv_Tenv * _T25A;
  void * * _T25B;
  struct Cyc_Absyn_Exp * _T25C;
  long _T25D;
  struct Cyc_List_List * _T25E;
  struct Cyc_Absyn_Exp * _T25F;
  void * _T260;
  long _T261;
  struct Cyc_Warn_String_Warn_Warg_struct _T262;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T263;
  struct Cyc_Warn_String_Warn_Warg_struct _T264;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T265;
  struct Cyc_Absyn_Stmt * _T266;
  unsigned int _T267;
  struct _fat_ptr _T268;
  long _T269;
  struct Cyc_Warn_String_Warn_Warg_struct _T26A;
  struct Cyc_Absyn_Stmt * _T26B;
  unsigned int _T26C;
  struct _fat_ptr _T26D;
  void * * _T26E;
  struct Cyc_Absyn_VarType_Absyn_Type_struct * _T26F;
  struct Cyc_Absyn_Stmt * _T270;
  unsigned int _T271;
  struct Cyc_Tcenv_Tenv * _T272;
  struct Cyc_List_List * _T273;
  struct Cyc_Absyn_Stmt * _T274;
  unsigned int _T275;
  struct Cyc_Tcenv_Tenv * _T276;
  struct Cyc_List_List * _T277;
  struct Cyc_Absyn_Kind * _T278;
  struct Cyc_Absyn_Kind * _T279;
  void * * _T27A;
  void * _T27B;
  void * * _T27C;
  void * _T27D;
  void * _T27E;
  long _T27F;
  int (* _T280)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T281)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T282;
  struct _fat_ptr _T283;
  struct Cyc_Absyn_Fndecl * _T284;
  enum Cyc_Absyn_Scope _T285;
  int _T286;
  struct Cyc_Warn_String_Warn_Warg_struct _T287;
  struct Cyc_Absyn_Decl * _T288;
  unsigned int _T289;
  struct _fat_ptr _T28A;
  struct Cyc_Absyn_Decl * _T28B;
  unsigned int _T28C;
  struct Cyc_Absyn_Fndecl * _T28D;
  struct Cyc_Absyn_FnInfo _T28E;
  struct Cyc_List_List * _T28F;
  struct Cyc_Absyn_Decl * _T290;
  unsigned int _T291;
  struct Cyc_Tcenv_Tenv * _T292;
  struct Cyc_Absyn_Fndecl * _T293;
  struct Cyc_Absyn_Fndecl * _T294;
  void * _T295;
  struct Cyc_Absyn_Fndecl * _T296;
  struct Cyc_Absyn_FnInfo _T297;
  struct Cyc_List_List * _T298;
  struct Cyc_Absyn_Vardecl * _T299;
  struct Cyc_Absyn_Fndecl * _T29A;
  struct Cyc_Absyn_Vardecl * _T29B;
  struct Cyc_Absyn_Fndecl * _T29C;
  struct Cyc_Absyn_Vardecl * _T29D;
  struct Cyc_Absyn_Vardecl * _T29E;
  struct Cyc_Absyn_Vardecl * _T29F;
  void * _T2A0;
  void * _T2A1;
  void * _T2A2;
  struct Cyc_Absyn_Tqual _T2A3;
  void * _T2A4;
  void * _T2A5;
  struct Cyc_Absyn_Vardecl * _T2A6;
  struct Cyc_Absyn_Vardecl * _T2A7;
  struct Cyc_Absyn_Vardecl * _T2A8;
  struct Cyc_Absyn_Vardecl * _T2A9;
  struct Cyc_Absyn_Vardecl * _T2AA;
  struct Cyc_Absyn_Fndecl * _T2AB;
  struct Cyc_Absyn_Stmt * _T2AC;
  struct Cyc_Absyn_Vardecl * _T2AD;
  struct Cyc_Absyn_Fndecl * _T2AE;
  struct Cyc_Tcenv_Tenv * _T2AF;
  struct Cyc_Tcenv_Fenv * _T2B0;
  struct Cyc_Tcenv_Tenv * _T2B1;
  struct Cyc_Absyn_Decl * _T2B2;
  unsigned int _T2B3;
  struct Cyc_Tcenv_Fenv * _T2B4;
  struct Cyc_Absyn_Fndecl * _T2B5;
  struct Cyc_Tcenv_Tenv * _T2B6;
  struct Cyc_Absyn_Fndecl * _T2B7;
  struct Cyc_Absyn_Stmt * _T2B8;
  struct Cyc_Tcenv_Tenv * _T2B9;
  struct Cyc_Warn_String_Warn_Warg_struct _T2BA;
  struct Cyc_Warn_String_Warn_Warg_struct _T2BB;
  struct Cyc_Warn_String_Warn_Warg_struct _T2BC;
  int (* _T2BD)(struct _fat_ptr);
  void * (* _T2BE)(struct _fat_ptr);
  struct _fat_ptr _T2BF;
  _T0 = s0;
  { void * _T2C0 = _T0->r;
    struct Cyc_Absyn_Decl * _T2C1;
    struct Cyc_Absyn_Stmt * _T2C2;
    struct Cyc_Absyn_Stmt * _T2C3;
    struct Cyc_Absyn_Exp * _T2C4;
    void * _T2C5;
    void * _T2C6;
    void * _T2C7;
    _T1 = (int *)_T2C0;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      return;
    case 1: 
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C7 = _T2C8->f1;
      }{ struct Cyc_Absyn_Exp * e = _T2C7;
	Cyc_Tcexp_tcExp(te,0,e);
	_T3 = Cyc_Tcenv_in_stmt_exp(te);
	if (_T3) { goto _TL2A;
	}else { goto _TL2C;
	}
	_TL2C: Cyc_Tcstmt_simplify_unused_result_exp(e);
	goto _TL2B;
	_TL2A: _TL2B: return;
      }
    case 2: 
      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C7 = _T2C8->f1;
	_T2C6 = _T2C8->f2;
      }{ struct Cyc_Absyn_Stmt * s1 = _T2C7;
	struct Cyc_Absyn_Stmt * s2 = _T2C6;
	Cyc_Tcstmt_tcStmt(te,s1,1);
	Cyc_Tcstmt_tcStmt(te,s2,1);
	return;
      }
    case 3: 
      { struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C7 = _T2C8->f1;
      }{ struct Cyc_Absyn_Exp * eopt = _T2C7;
	void * t = Cyc_Tcenv_return_typ(te);
	if (eopt != 0) { goto _TL2D;
	}
	_T4 = Cyc_Tcutil_is_void_type(t);
	if (_T4) { goto _TL2F;
	}else { goto _TL31;
	}
	_TL31: _T5 = Cyc_Tcutil_is_any_float_type(t);
	if (_T5) { goto _TL34;
	}else { goto _TL35;
	}
	_TL35: _T6 = Cyc_Tcutil_is_any_int_type(t);
	if (_T6) { goto _TL34;
	}else { goto _TL32;
	}
	_TL34: { struct Cyc_Warn_String_Warn_Warg_struct _T2C8;
	  _T2C8.tag = 0;
	  _T2C8.f1 = _tag_fat("should return a value of type ",sizeof(char),
			      31U);
	  _T7 = _T2C8;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2C8 = _T7;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T2C9;
	    _T2C9.tag = 2;
	    _T2C9.f1 = t;
	    _T8 = _T2C9;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2C9 = _T8;
	    void * _T2CA[2];
	    _T2CA[0] = &_T2C8;
	    _T2CA[1] = &_T2C9;
	    _T9 = s0;
	    _TA = _T9->loc;
	    _TB = _tag_fat(_T2CA,sizeof(void *),2);
	    Cyc_Warn_warn2(_TA,_TB);
	  }
	}goto _TL33;
	_TL32: { struct Cyc_Warn_String_Warn_Warg_struct _T2C8;
	  _T2C8.tag = 0;
	  _T2C8.f1 = _tag_fat("must return a value of type ",sizeof(char),
			      29U);
	  _TC = _T2C8;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2C8 = _TC;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T2C9;
	    _T2C9.tag = 2;
	    _T2C9.f1 = t;
	    _TD = _T2C9;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2C9 = _TD;
	    void * _T2CA[2];
	    _T2CA[0] = &_T2C8;
	    _T2CA[1] = &_T2C9;
	    _TE = s0;
	    _TF = _TE->loc;
	    _T10 = _tag_fat(_T2CA,sizeof(void *),2);
	    Cyc_Warn_err2(_TF,_T10);
	  }
	}_TL33: goto _TL30;
	_TL2F: _TL30: return;
	_TL2D: _T11 = te;
	_T12 = &t;
	_T13 = eopt;
	Cyc_Tcexp_tcExp(_T11,_T12,_T13);
	_T14 = Cyc_Tcenv_curr_aquals_bounds(te);
	_T15 = eopt;
	_T16 = t;
	_T17 = Cyc_Tcutil_coerce_arg(_T14,_T15,_T16,0);
	if (_T17) { goto _TL36;
	}else { goto _TL38;
	}
	_TL38: { struct Cyc_Warn_String_Warn_Warg_struct _T2C8;
	  _T2C8.tag = 0;
	  _T2C8.f1 = _tag_fat("returns value of type ",sizeof(char),23U);
	  _T18 = _T2C8;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2C8 = _T18;
	  { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2C9;
	    _T2C9.tag = 3;
	    _T1A = eopt;
	    _T2C9.f1 = _T1A->topt;
	    _T19 = _T2C9;
	  }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2C9 = _T19;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T2CA;
	      _T2CA.tag = 0;
	      _T2CA.f1 = _tag_fat(" but requires ",sizeof(char),15U);
	      _T1B = _T2CA;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T2CA = _T1B;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T2CB;
		_T2CB.tag = 2;
		_T2CB.f1 = t;
		_T1C = _T2CB;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2CB = _T1C;
		void * _T2CC[4];
		_T2CC[0] = &_T2C8;
		_T2CC[1] = &_T2C9;
		_T2CC[2] = &_T2CA;
		_T2CC[3] = &_T2CB;
		_T1D = s0;
		_T1E = _T1D->loc;
		_T1F = _tag_fat(_T2CC,sizeof(void *),4);
		Cyc_Warn_err2(_T1E,_T1F);
	      }
	    }
	  }
	}Cyc_Unify_explain_failure();
	goto _TL37;
	_TL36: _TL37: _T20 = eopt;
	_T21 = _T20->loc;
	_T22 = Cyc_Tcenv_curr_aquals_bounds(te);
	_T23 = t;
	_T24 = eopt;
	Cyc_Tcexp_check_consume(_T21,_T22,_T23,_T24);
	return;
      }
    case 4: 
      { struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C7 = _T2C8->f1;
	_T2C6 = _T2C8->f2;
	_T2C5 = _T2C8->f3;
      }{ struct Cyc_Absyn_Exp * e = _T2C7;
	struct Cyc_Absyn_Stmt * s1 = _T2C6;
	struct Cyc_Absyn_Stmt * s2 = _T2C5;
	_T25 = te;
	_T26 = e;
	_T27 = _tag_fat("if statement",sizeof(char),13U);
	Cyc_Tcexp_tcTest(_T25,_T26,_T27);
	Cyc_Tcstmt_tcStmt(te,s1,1);
	Cyc_Tcstmt_tcStmt(te,s2,1);
	return;
      }
    case 5: 
      { struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T28 = _T2C8->f1;
	_T2C7 = _T28.f0;
	_T29 = _T2C8->f1;
	_T2C6 = _T29.f1;
	_T2C5 = _T2C8->f2;
      }{ struct Cyc_Absyn_Exp * e = _T2C7;
	struct Cyc_Absyn_Stmt * cont_s = _T2C6;
	struct Cyc_Absyn_Stmt * s = _T2C5;
	_T2A = te;
	_T2B = e;
	_T2C = _tag_fat("while loop",sizeof(char),11U);
	Cyc_Tcexp_tcTest(_T2A,_T2B,_T2C);
	Cyc_Tcstmt_tcStmt(te,s,1);
	return;
      }
    case 9: 
      { struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C7 = _T2C8->f1;
	_T2D = _T2C8->f2;
	_T2C6 = _T2D.f0;
	_T2E = _T2C8->f2;
	_T2C5 = _T2E.f1;
	_T2F = _T2C8->f3;
	_T2C4 = _T2F.f0;
	_T30 = _T2C8->f3;
	_T2C3 = _T30.f1;
	_T2C2 = _T2C8->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T2C7;
	struct Cyc_Absyn_Exp * e2 = _T2C6;
	struct Cyc_Absyn_Stmt * guard_s = _T2C5;
	struct Cyc_Absyn_Exp * e3 = _T2C4;
	struct Cyc_Absyn_Stmt * cont_s = _T2C3;
	struct Cyc_Absyn_Stmt * s = _T2C2;
	Cyc_Tcexp_tcExp(te,0,e1);
	_T31 = te;
	_T32 = e2;
	_T33 = _tag_fat("for loop",sizeof(char),9U);
	Cyc_Tcexp_tcTest(_T31,_T32,_T33);
	Cyc_Tcstmt_tcStmt(te,s,1);
	Cyc_Tcexp_tcExp(te,0,e3);
	Cyc_Tcstmt_simplify_unused_result_exp(e3);
	return;
      }
    case 14: 
      { struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C7 = _T2C8->f1;
	_T34 = _T2C8->f2;
	_T2C6 = _T34.f0;
	_T35 = _T2C8->f2;
	_T2C5 = _T35.f1;
      }{ struct Cyc_Absyn_Stmt * s = _T2C7;
	struct Cyc_Absyn_Exp * e = _T2C6;
	struct Cyc_Absyn_Stmt * cont_s = _T2C5;
	Cyc_Tcstmt_tcStmt(te,s,1);
	_T36 = te;
	_T37 = e;
	_T38 = _tag_fat("do loop",sizeof(char),8U);
	Cyc_Tcexp_tcTest(_T36,_T37,_T38);
	return;
      }
    case 6: 
      goto _LL14;
    case 7: 
      _LL14: goto _LL16;
    case 8: 
      _LL16: return;
    case 13: 
      { struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C7 = _T2C8->f1;
	_T2C6 = _T2C8->f2;
      }{ struct _fat_ptr * l = _T2C7;
	struct Cyc_Absyn_Stmt * s = _T2C6;
	struct Cyc_Absyn_Tvar * tv;
	tv = _cycalloc(sizeof(struct Cyc_Absyn_Tvar));
	_T39 = tv;
	{ struct _fat_ptr * _T2C8 = _cycalloc(sizeof(struct _fat_ptr));
	  { struct Cyc_String_pa_PrintArg_struct _T2C9;
	    _T2C9.tag = 0;
	    _T3D = l;
	    _T2C9.f1 = *_T3D;
	    _T3C = _T2C9;
	  }{ struct Cyc_String_pa_PrintArg_struct _T2C9 = _T3C;
	    void * _T2CA[1];
	    _T2CA[0] = &_T2C9;
	    _T3E = _tag_fat("`%s",sizeof(char),4U);
	    _T3F = _tag_fat(_T2CA,sizeof(void *),1);
	    _T3B = Cyc_aprintf(_T3E,_T3F);
	  }*_T2C8 = _T3B;
	  _T3A = (struct _fat_ptr *)_T2C8;
	}_T39->name = _T3A;
	_T40 = tv;
	_T40->identity = Cyc_Tcutil_new_tvar_id();
	_T41 = tv;
	_T42 = &Cyc_Kinds_ek;
	_T43 = (struct Cyc_Absyn_Kind *)_T42;
	_T41->kind = Cyc_Kinds_kind_to_bound(_T43);
	_T44 = tv;
	_T44->aquals_bound = 0;
	_T45 = s0;
	_T46 = _T45->loc;
	_T47 = te;
	_T48 = tv;
	_T49 = Cyc_Tcenv_new_named_block(_T46,_T47,_T48);
	_T4A = s;
	Cyc_Tcstmt_tcStmt(_T49,_T4A,0);
	return;
      }
    case 11: 
      { struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C7 = _T2C8->f1;
	_T4B = (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T4C = &_T4B->f2;
	_T2C6 = (struct Cyc_Absyn_Switch_clause * * *)_T4C;
      }{ struct Cyc_List_List * es = _T2C7;
	struct Cyc_Absyn_Switch_clause * * * clauseopt = _T2C6;
	const struct _tuple15 * trip_opt = Cyc_Tcenv_process_fallthru(te,
								      s0,
								      clauseopt);
	if (trip_opt != 0) { goto _TL39;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T2C8;
	  _T2C8.tag = 0;
	  _T2C8.f1 = _tag_fat("fallthru in a last case",sizeof(char),24U);
	  _T4D = _T2C8;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2C8 = _T4D;
	  void * _T2C9[1];
	  _T2C9[0] = &_T2C8;
	  _T4E = s0;
	  _T4F = _T4E->loc;
	  _T50 = _tag_fat(_T2C9,sizeof(void *),1);
	  Cyc_Warn_err2(_T4F,_T50);
	}return;
	_TL39: _T51 = trip_opt;
	{ struct _tuple15 _T2C8 = *_T51;
	  struct Cyc_List_List * _T2C9;
	  struct Cyc_List_List * _T2CA;
	  _T2CA = _T2C8.f1;
	  _T2C9 = _T2C8.f2;
	  { struct Cyc_List_List * tvs = _T2CA;
	    struct Cyc_List_List * ts_orig = _T2C9;
	    _T53 = Cyc_List_map_c;
	    { struct Cyc_List_List * (* _T2CB)(struct _tuple16 * (*)(struct Cyc_List_List *,
								     struct Cyc_Absyn_Tvar *),
					       struct Cyc_List_List *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple16 * (*)(struct Cyc_List_List *,
																		  struct Cyc_Absyn_Tvar *),
															    struct Cyc_List_List *,
															    struct Cyc_List_List *))_T53;
	      _T52 = _T2CB;
	    }_T54 = Cyc_Tcutil_make_inst_var;
	    _T55 = Cyc_Tcenv_lookup_type_vars(te);
	    _T56 = tvs;
	    { struct Cyc_List_List * instantiation = _T52(_T54,_T55,_T56);
	      _T58 = Cyc_List_map_c;
	      { struct Cyc_List_List * (* _T2CB)(void * (*)(struct Cyc_List_List *,
							    void *),struct Cyc_List_List *,
						 struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct Cyc_List_List *,
														  void *),
												       struct Cyc_List_List *,
												       struct Cyc_List_List *))_T58;
		_T57 = _T2CB;
	      }_T59 = Cyc_Tcutil_substitute;
	      _T5A = instantiation;
	      _T5B = ts_orig;
	      { struct Cyc_List_List * ts = _T57(_T59,_T5A,_T5B);
		_TL3E: if (ts != 0) { goto _TL3F;
		}else { goto _TL3D;
		}
		_TL3F: if (es != 0) { goto _TL3C;
		}else { goto _TL3D;
		}
		_TL3C: _T5C = te;
		_T5D = es;
		_T5E = _T5D->hd;
		_T5F = (struct Cyc_Absyn_Exp *)_T5E;
		Cyc_Tcexp_tcExp(_T5C,0,_T5F);
		_T60 = Cyc_Tcenv_curr_aquals_bounds(te);
		_T61 = es;
		_T62 = _T61->hd;
		_T63 = (struct Cyc_Absyn_Exp *)_T62;
		_T64 = ts;
		_T65 = _T64->hd;
		_T66 = Cyc_Tcutil_coerce_arg(_T60,_T63,_T65,0);
		if (_T66) { goto _TL40;
		}else { goto _TL42;
		}
		_TL42: { struct Cyc_Warn_String_Warn_Warg_struct _T2CB;
		  _T2CB.tag = 0;
		  _T2CB.f1 = _tag_fat("fallthru argument has type ",sizeof(char),
				      28U);
		  _T67 = _T2CB;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T2CB = _T67;
		  { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2CC;
		    _T2CC.tag = 3;
		    _T69 = es;
		    _T6A = _T69->hd;
		    _T6B = (struct Cyc_Absyn_Exp *)_T6A;
		    _T2CC.f1 = _T6B->topt;
		    _T68 = _T2CC;
		  }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2CC = _T68;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T2CD;
		      _T2CD.tag = 0;
		      _T2CD.f1 = _tag_fat("but pattern variable has type ",
					  sizeof(char),31U);
		      _T6C = _T2CD;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T2CD = _T6C;
		      { struct Cyc_Warn_Typ_Warn_Warg_struct _T2CE;
			_T2CE.tag = 2;
			_T6E = ts;
			_T2CE.f1 = _T6E->hd;
			_T6D = _T2CE;
		      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2CE = _T6D;
			void * _T2CF[4];
			_T2CF[0] = &_T2CB;
			_T2CF[1] = &_T2CC;
			_T2CF[2] = &_T2CD;
			_T2CF[3] = &_T2CE;
			_T6F = s0;
			_T70 = _T6F->loc;
			_T71 = _tag_fat(_T2CF,sizeof(void *),4);
			Cyc_Warn_err2(_T70,_T71);
		      }
		    }
		  }
		}Cyc_Unify_explain_failure();
		goto _TL41;
		_TL40: _TL41: _T72 = es;
		_T73 = _T72->hd;
		_T74 = (struct Cyc_Absyn_Exp *)_T73;
		_T75 = _T74->loc;
		_T76 = Cyc_Tcenv_curr_aquals_bounds(te);
		_T77 = ts;
		_T78 = _T77->hd;
		_T79 = es;
		_T7A = _T79->hd;
		_T7B = (struct Cyc_Absyn_Exp *)_T7A;
		Cyc_Tcexp_check_consume(_T75,_T76,_T78,_T7B);
		_T7C = ts;
		ts = _T7C->tl;
		_T7D = es;
		es = _T7D->tl;
		goto _TL3E;
		_TL3D: if (es == 0) { goto _TL43;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T2CB;
		  _T2CB.tag = 0;
		  _T2CB.f1 = _tag_fat("too many arguments in explicit fallthru",
				      sizeof(char),40U);
		  _T7E = _T2CB;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T2CB = _T7E;
		  void * _T2CC[1];
		  _T2CC[0] = &_T2CB;
		  _T7F = s0;
		  _T80 = _T7F->loc;
		  _T81 = _tag_fat(_T2CC,sizeof(void *),1);
		  Cyc_Warn_err2(_T80,_T81);
		}goto _TL44;
		_TL43: _TL44: if (ts == 0) { goto _TL45;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T2CB;
		  _T2CB.tag = 0;
		  _T2CB.f1 = _tag_fat("too few arguments in explicit fallthru",
				      sizeof(char),39U);
		  _T82 = _T2CB;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T2CB = _T82;
		  void * _T2CC[1];
		  _T2CC[0] = &_T2CB;
		  _T83 = s0;
		  _T84 = _T83->loc;
		  _T85 = _tag_fat(_T2CC,sizeof(void *),1);
		  Cyc_Warn_err2(_T84,_T85);
		}goto _TL46;
		_TL45: _TL46: return;
	      }
	    }
	  }
	}
      }
    case 10: 
      { struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T86 = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T87 = &_T86->f1;
	_T2C7 = (struct Cyc_Absyn_Exp * *)_T87;
	_T2C6 = _T2C8->f2;
	_T88 = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T89 = &_T88->f3;
	_T2C5 = (void * *)_T89;
      }{ struct Cyc_Absyn_Exp * * exp = _T2C7;
	struct Cyc_List_List * scs0 = _T2C6;
	void * * dtp = (void * *)_T2C5;
	_T8A = Cyc_Tcstmt_make_var_exp(exp,s0);
	if (! _T8A) { goto _TL47;
	}
	Cyc_Tcstmt_tcStmt(te,s0,new_block);
	return;
	_TL47: _T8B = exp;
	{ struct Cyc_Absyn_Exp * e = *_T8B;
	  void * t = Cyc_Tcexp_tcExp(te,0,e);
	  _T8C = e;
	  _T8D = _T8C->loc;
	  _T8E = Cyc_Tcenv_curr_aquals_bounds(te);
	  _T8F = t;
	  _T90 = e;
	  Cyc_Tcexp_check_consume(_T8D,_T8E,_T8F,_T90);
	  { struct Cyc_Tcpat_TcPatResult this_pattern;
	    struct Cyc_Tcpat_TcPatResult * next_pattern = 0;
	    long first_case = 1;
	    { struct Cyc_List_List * scs = scs0;
	      _TL4C: if (scs != 0) { goto _TL4A;
	      }else { goto _TL4B;
	      }
	      _TL4A: _T91 = first_case;
	      if (! _T91) { goto _TL4D;
	      }
	      first_case = 0;
	      _T92 = te;
	      _T93 = scs;
	      _T94 = _T93->hd;
	      _T95 = (struct Cyc_Absyn_Switch_clause *)_T94;
	      _T96 = _T95->pattern;
	      _T97 = &t;
	      _T98 = e;
	      this_pattern = Cyc_Tcpat_tcPat(_T92,_T96,_T97,_T98);
	      goto _TL4E;
	      _TL4D: _T99 = _check_null(next_pattern);
	      this_pattern = *_T99;
	      _TL4E: _T9A = scs;
	      _T9B = _T9A->tl;
	      if (_T9B == 0) { goto _TL4F;
	      }
	      { struct Cyc_Tcpat_TcPatResult * _T2C8 = _cycalloc(sizeof(struct Cyc_Tcpat_TcPatResult));
		_T9D = te;
		_T9E = scs;
		_T9F = _T9E->tl;
		_TA0 = _T9F->hd;
		_TA1 = (struct Cyc_Absyn_Switch_clause *)_TA0;
		_TA2 = _TA1->pattern;
		_TA3 = &t;
		_TA4 = e;
		*_T2C8 = Cyc_Tcpat_tcPat(_T9D,_TA2,_TA3,_TA4);
		_T9C = (struct Cyc_Tcpat_TcPatResult *)_T2C8;
	      }next_pattern = _T9C;
	      _TA5 = next_pattern;
	      _TA6 = _TA5->tvars_and_effconstr_opt;
	      if (_TA6 == 0) { goto _TL51;
	      }
	      _TA7 = next_pattern;
	      _TA8 = _TA7->tvars_and_effconstr_opt;
	      _TA9 = *_TA8;
	      _TAA = _TA9.f1;
	      if (_TAA == 0) { goto _TL51;
	      }
	      te = Cyc_Tcenv_clear_fallthru(te);
	      goto _TL52;
	      _TL51: _TAB = next_pattern;
	      _TAC = _TAB->patvars;
	      _TAD = Cyc_List_split(_TAC);
	      _TAE = _TAD.f0;
	      _TAF = Cyc_Tcutil_filter_nulls(_TAE);
	      { struct Cyc_List_List * vs = Cyc_List_imp_rev(_TAF);
		_TB1 = next_pattern;
		_TB2 = _TB1->tvars_and_effconstr_opt;
		if (_TB2 != 0) { goto _TL53;
		}
		_TB0 = 0;
		goto _TL54;
		_TL53: _TB4 = Cyc_List_map;
		{ struct Cyc_List_List * (* _T2C8)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
						   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
													 struct Cyc_List_List *))_TB4;
		  _TB3 = _T2C8;
		}_TB6 = Cyc_Core_fst;
		{ struct Cyc_Absyn_Tvar * (* _T2C8)(struct _tuple17 *) = (struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *))_TB6;
		  _TB5 = _T2C8;
		}_TB7 = next_pattern;
		_TB8 = _TB7->tvars_and_effconstr_opt;
		_TB9 = *_TB8;
		_TBA = _TB9.f0;
		_TB0 = _TB3(_TB5,_TBA);
		_TL54: { struct Cyc_List_List * new_tvs = _TB0;
		  _TBB = te;
		  _TBC = new_tvs;
		  _TBD = vs;
		  _TBE = scs;
		  _TBF = _TBE->tl;
		  _TC0 = _check_null(_TBF);
		  _TC1 = _TC0->hd;
		  _TC2 = (struct Cyc_Absyn_Switch_clause *)_TC1;
		  te = Cyc_Tcenv_set_fallthru(_TBB,_TBC,_TBD,_TC2);
		}
	      }_TL52: goto _TL50;
	      _TL4F: te = Cyc_Tcenv_clear_fallthru(te);
	      _TL50: _TC3 = scs;
	      _TC4 = _TC3->hd;
	      _TC5 = (struct Cyc_Absyn_Switch_clause *)_TC4;
	      { struct Cyc_Absyn_Pat * p = _TC5->pattern;
		_TC6 = scs;
		_TC7 = _TC6->hd;
		_TC8 = (struct Cyc_Absyn_Switch_clause *)_TC7;
		_TC9 = _TC8->loc;
		_TCA = t;
		_TCB = p;
		_TCC = _TCB->topt;
		_TCD = _check_null(_TCC);
		{ enum Cyc_Absyn_Coercion _c = Cyc_Subtype_coercible_exact(_TC9,
									   _TCA,
									   _TCD);
		  _TCE = _c;
		  _TCF = (int)_TCE;
		  if (_TCF != 0) { goto _TL55;
		  }
		  { struct Cyc_Warn_String_Warn_Warg_struct _T2C8;
		    _T2C8.tag = 0;
		    _T2C8.f1 = _tag_fat("switch on type ",sizeof(char),16U);
		    _TD0 = _T2C8;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T2C8 = _TD0;
		    { struct Cyc_Warn_Typ_Warn_Warg_struct _T2C9;
		      _T2C9.tag = 2;
		      _T2C9.f1 = t;
		      _TD1 = _T2C9;
		    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2C9 = _TD1;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T2CA;
			_T2CA.tag = 0;
			_T2CA.f1 = _tag_fat(" but case expects type ",sizeof(char),
					    24U);
			_TD2 = _T2CA;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T2CA = _TD2;
			{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2CB;
			  _T2CB.tag = 3;
			  _TD4 = p;
			  _T2CB.f1 = _TD4->topt;
			  _TD3 = _T2CB;
			}{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2CB = _TD3;
			  void * _T2CC[4];
			  _T2CC[0] = &_T2C8;
			  _T2CC[1] = &_T2C9;
			  _T2CC[2] = &_T2CA;
			  _T2CC[3] = &_T2CB;
			  _TD5 = scs;
			  _TD6 = _TD5->hd;
			  _TD7 = (struct Cyc_Absyn_Switch_clause *)_TD6;
			  _TD8 = _TD7->loc;
			  _TD9 = _tag_fat(_T2CC,sizeof(void *),4);
			  Cyc_Warn_err2(_TD8,_TD9);
			}
		      }
		    }
		  }Cyc_Unify_explain_failure();
		  goto _TL56;
		  _TL55: _TDA = te;
		  _TDB = p;
		  _TDC = &this_pattern;
		  _TDD = (struct Cyc_Tcpat_TcPatResult *)_TDC;
		  Cyc_Tcpat_check_pat_regions(_TDA,_TDB,_TDD);
		  _TL56: _TDE = scs;
		  _TDF = _TDE->hd;
		  _TE0 = (struct Cyc_Absyn_Switch_clause *)_TDF;
		  { struct Cyc_Core_Opt * _T2C8 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		    _TE2 = this_pattern;
		    _T2C8->v = _TE2.patvars;
		    _TE1 = (struct Cyc_Core_Opt *)_T2C8;
		  }_TE0->pat_vars = _TE1;
		  _TE3 = scs;
		  _TE4 = _TE3->hd;
		  _TE5 = (struct Cyc_Absyn_Switch_clause *)_TE4;
		  _TE6 = _TE5->loc;
		  _TE7 = te;
		  _TE8 = this_pattern;
		  _TE9 = scs;
		  _TEA = _TE9->hd;
		  _TEB = (struct Cyc_Absyn_Switch_clause *)_TEA;
		  _TEC = _TEB->body;
		  _TED = scs;
		  _TEE = _TED->hd;
		  _TEF = (struct Cyc_Absyn_Switch_clause *)_TEE;
		  _TF0 = _TEF->where_clause;
		  Cyc_Tcstmt_pattern_synth(_TE6,_TE7,_TE8,_TEC,_TF0,1);
		}
	      }_TF1 = scs;
	      scs = _TF1->tl;
	      goto _TL4C;
	      _TL4B: ;
	    }_TF2 = s0;
	    _TF3 = _TF2->loc;
	    _TF4 = te;
	    _TF5 = scs0;
	    _TF6 = dtp;
	    Cyc_Tcpat_check_switch_exhaustive(_TF3,_TF4,_TF5,_TF6);
	    return;
	  }
	}
      }
    case 15: 
      { struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C3 = _T2C8->f1;
	_TF7 = (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct *)_T2C0;
	_TF8 = &_TF7->f2;
	_T2C7 = (struct Cyc_List_List * *)_TF8;
	_TF9 = (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct *)_T2C0;
	_TFA = &_TF9->f3;
	_T2C6 = (void * *)_TFA;
      }{ struct Cyc_Absyn_Stmt * s = _T2C3;
	struct Cyc_List_List * * scs0 = (struct Cyc_List_List * *)_T2C7;
	void * * dtp = (void * *)_T2C6;
	_TFB = s;
	{ struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T2C8 = _cycalloc(sizeof(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct));
	  _T2C8->tag = 2;
	  _TFD = s;
	  _TFE = _TFD->r;
	  _TFF = s;
	  _T100 = _TFF->loc;
	  _T2C8->f1 = Cyc_Absyn_new_stmt(_TFE,_T100);
	  _T101 = s;
	  _T102 = _T101->loc;
	  _T2C8->f2 = Cyc_Absyn_skip_stmt(_T102);
	  _TFC = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T2C8;
	}_T103 = (void *)_TFC;
	_T104 = s;
	_T105 = _T104->loc;
	_T106 = Cyc_Absyn_new_stmt(_T103,_T105);
	_TFB->r = _T106->r;
	Cyc_Tcstmt_tcStmt(te,s,1);
	_T108 = Cyc_List_exists;
	{ long (* _T2C8)(long (*)(struct Cyc_Absyn_Switch_clause *),struct Cyc_List_List *) = (long (*)(long (*)(struct Cyc_Absyn_Switch_clause *),
													struct Cyc_List_List *))_T108;
	  _T107 = _T2C8;
	}_T109 = scs0;
	_T10A = *_T109;
	_T10B = _T107(Cyc_Tcstmt_is_case_default,_T10A);
	if (_T10B) { goto _TL57;
	}else { goto _TL59;
	}
	_TL59: { struct _tuple2 * def_v;
	  def_v = _cycalloc(sizeof(struct _tuple2));
	  _T10C = def_v;
	  _T10C->f0 = Cyc_Absyn_Loc_n();
	  _T10D = def_v;
	  { struct _fat_ptr * _T2C8 = _cycalloc(sizeof(struct _fat_ptr));
	    *_T2C8 = _tag_fat("exn",sizeof(char),4U);
	    _T10E = (struct _fat_ptr *)_T2C8;
	  }_T10D->f1 = _T10E;
	  { struct Cyc_Absyn_Vardecl * vd = Cyc_Absyn_new_vardecl(0U,def_v,
								  Cyc_Absyn_void_type,
								  0,0);
	    { struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T2C8 = _cycalloc(sizeof(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct));
	      _T2C8->tag = 1;
	      _T2C8->f1 = vd;
	      _T110 = &Cyc_Absyn_Wild_p_val;
	      _T111 = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T110;
	      _T112 = (void *)_T111;
	      _T2C8->f2 = Cyc_Absyn_new_pat(_T112,0U);
	      _T10F = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T2C8;
	    }_T113 = (void *)_T10F;
	    { struct Cyc_Absyn_Pat * def_pat = Cyc_Absyn_new_pat(_T113,0U);
	      { struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct * _T2C8 = _cycalloc(sizeof(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct));
		_T2C8->tag = 11;
		{ struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T2C9 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		  _T2C9->tag = 4;
		  _T2C9->f1 = vd;
		  _T115 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T2C9;
		}_T116 = (void *)_T115;
		_T2C8->f1 = Cyc_Absyn_varb_exp(_T116,0U);
		_T2C8->f2 = 1;
		_T114 = (struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct *)_T2C8;
	      }_T117 = (void *)_T114;
	      _T118 = Cyc_Absyn_new_exp(_T117,0U);
	      { struct Cyc_Absyn_Stmt * def_stmt = Cyc_Absyn_exp_stmt(_T118,
								      0U);
		struct Cyc_Absyn_Switch_clause * def_clause;
		def_clause = _cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));
		_T119 = def_clause;
		_T119->pattern = def_pat;
		_T11A = def_clause;
		_T11A->pat_vars = 0;
		_T11B = def_clause;
		_T11B->where_clause = 0;
		_T11C = def_clause;
		_T11C->body = def_stmt;
		_T11D = def_clause;
		_T11D->loc = 0U;
		_T11E = scs0;
		_T11F = scs0;
		_T120 = *_T11F;
		{ struct Cyc_Absyn_Switch_clause * _T2C8[1];
		  _T2C8[0] = def_clause;
		  _T122 = _tag_fat(_T2C8,sizeof(struct Cyc_Absyn_Switch_clause *),
				   1);
		  _T121 = Cyc_List_list(_T122);
		}*_T11E = Cyc_List_append(_T120,_T121);
	      }
	    }
	  }
	}goto _TL58;
	_TL57: _TL58: { void * exception_type = Cyc_Absyn_exn_type();
	  struct Cyc_Tcpat_TcPatResult this_pattern;
	  struct Cyc_Tcpat_TcPatResult * next_pattern = 0;
	  long first_case = 1;
	  _T123 = scs0;
	  { struct Cyc_List_List * scs = *_T123;
	    _TL5D: if (scs != 0) { goto _TL5B;
	    }else { goto _TL5C;
	    }
	    _TL5B: _T124 = first_case;
	    if (! _T124) { goto _TL5E;
	    }
	    first_case = 0;
	    _T125 = te;
	    _T126 = scs;
	    _T127 = _T126->hd;
	    _T128 = (struct Cyc_Absyn_Switch_clause *)_T127;
	    _T129 = _T128->pattern;
	    _T12A = &exception_type;
	    this_pattern = Cyc_Tcpat_tcPat(_T125,_T129,_T12A,0);
	    goto _TL5F;
	    _TL5E: _T12B = _check_null(next_pattern);
	    this_pattern = *_T12B;
	    _TL5F: _T12C = scs;
	    _T12D = _T12C->tl;
	    if (_T12D == 0) { goto _TL60;
	    }
	    { struct Cyc_Tcpat_TcPatResult * _T2C8 = _cycalloc(sizeof(struct Cyc_Tcpat_TcPatResult));
	      _T12F = te;
	      _T130 = scs;
	      _T131 = _T130->tl;
	      _T132 = _T131->hd;
	      _T133 = (struct Cyc_Absyn_Switch_clause *)_T132;
	      _T134 = _T133->pattern;
	      _T135 = &exception_type;
	      *_T2C8 = Cyc_Tcpat_tcPat(_T12F,_T134,_T135,0);
	      _T12E = (struct Cyc_Tcpat_TcPatResult *)_T2C8;
	    }next_pattern = _T12E;
	    _T136 = next_pattern;
	    _T137 = _T136->tvars_and_effconstr_opt;
	    if (_T137 == 0) { goto _TL62;
	    }
	    _T138 = next_pattern;
	    _T139 = _T138->tvars_and_effconstr_opt;
	    _T13A = *_T139;
	    _T13B = _T13A.f1;
	    if (_T13B == 0) { goto _TL62;
	    }
	    te = Cyc_Tcenv_clear_fallthru(te);
	    goto _TL63;
	    _TL62: _T13C = next_pattern;
	    _T13D = _T13C->patvars;
	    _T13E = Cyc_List_split(_T13D);
	    _T13F = _T13E.f0;
	    _T140 = Cyc_Tcutil_filter_nulls(_T13F);
	    { struct Cyc_List_List * vs = Cyc_List_imp_rev(_T140);
	      _T142 = next_pattern;
	      _T143 = _T142->tvars_and_effconstr_opt;
	      if (_T143 != 0) { goto _TL64;
	      }
	      _T141 = 0;
	      goto _TL65;
	      _TL64: _T145 = Cyc_List_map;
	      { struct Cyc_List_List * (* _T2C8)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
						 struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *),
												       struct Cyc_List_List *))_T145;
		_T144 = _T2C8;
	      }_T147 = Cyc_Core_fst;
	      { struct Cyc_Absyn_Tvar * (* _T2C8)(struct _tuple17 *) = (struct Cyc_Absyn_Tvar * (*)(struct _tuple17 *))_T147;
		_T146 = _T2C8;
	      }_T148 = next_pattern;
	      _T149 = _T148->tvars_and_effconstr_opt;
	      _T14A = *_T149;
	      _T14B = _T14A.f0;
	      _T141 = _T144(_T146,_T14B);
	      _TL65: { struct Cyc_List_List * new_tvs = _T141;
		_T14C = te;
		_T14D = new_tvs;
		_T14E = vs;
		_T14F = scs;
		_T150 = _T14F->tl;
		_T151 = _check_null(_T150);
		_T152 = _T151->hd;
		_T153 = (struct Cyc_Absyn_Switch_clause *)_T152;
		te = Cyc_Tcenv_set_fallthru(_T14C,_T14D,_T14E,_T153);
	      }
	    }_TL63: goto _TL61;
	    _TL60: te = Cyc_Tcenv_clear_fallthru(te);
	    _TL61: _T154 = scs;
	    _T155 = _T154->hd;
	    _T156 = (struct Cyc_Absyn_Switch_clause *)_T155;
	    { struct Cyc_Absyn_Pat * p = _T156->pattern;
	      _T157 = scs;
	      _T158 = _T157->hd;
	      _T159 = (struct Cyc_Absyn_Switch_clause *)_T158;
	      _T15A = _T159->loc;
	      _T15B = exception_type;
	      _T15C = p;
	      _T15D = _T15C->topt;
	      _T15E = _check_null(_T15D);
	      { enum Cyc_Absyn_Coercion _c = Cyc_Subtype_coercible_exact(_T15A,
									 _T15B,
									 _T15E);
		_T15F = _c;
		_T160 = (int)_T15F;
		if (_T160 != 0) { goto _TL66;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T2C8;
		  _T2C8.tag = 0;
		  _T2C8.f1 = _tag_fat("switch on type ",sizeof(char),16U);
		  _T161 = _T2C8;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T2C8 = _T161;
		  { struct Cyc_Warn_Typ_Warn_Warg_struct _T2C9;
		    _T2C9.tag = 2;
		    _T2C9.f1 = exception_type;
		    _T162 = _T2C9;
		  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2C9 = _T162;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T2CA;
		      _T2CA.tag = 0;
		      _T2CA.f1 = _tag_fat(" but case expects type ",sizeof(char),
					  24U);
		      _T163 = _T2CA;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T2CA = _T163;
		      { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2CB;
			_T2CB.tag = 3;
			_T165 = p;
			_T2CB.f1 = _T165->topt;
			_T164 = _T2CB;
		      }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2CB = _T164;
			void * _T2CC[4];
			_T2CC[0] = &_T2C8;
			_T2CC[1] = &_T2C9;
			_T2CC[2] = &_T2CA;
			_T2CC[3] = &_T2CB;
			_T166 = scs;
			_T167 = _T166->hd;
			_T168 = (struct Cyc_Absyn_Switch_clause *)_T167;
			_T169 = _T168->loc;
			_T16A = _tag_fat(_T2CC,sizeof(void *),4);
			Cyc_Warn_err2(_T169,_T16A);
		      }
		    }
		  }
		}Cyc_Unify_explain_failure();
		goto _TL67;
		_TL66: _T16B = te;
		_T16C = p;
		_T16D = &this_pattern;
		_T16E = (struct Cyc_Tcpat_TcPatResult *)_T16D;
		Cyc_Tcpat_check_pat_regions(_T16B,_T16C,_T16E);
		_TL67: _T16F = scs;
		_T170 = _T16F->hd;
		_T171 = (struct Cyc_Absyn_Switch_clause *)_T170;
		{ struct Cyc_Core_Opt * _T2C8 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		  _T173 = this_pattern;
		  _T2C8->v = _T173.patvars;
		  _T172 = (struct Cyc_Core_Opt *)_T2C8;
		}_T171->pat_vars = _T172;
		_T174 = scs;
		_T175 = _T174->hd;
		_T176 = (struct Cyc_Absyn_Switch_clause *)_T175;
		_T177 = _T176->loc;
		_T178 = te;
		_T179 = this_pattern;
		_T17A = scs;
		_T17B = _T17A->hd;
		_T17C = (struct Cyc_Absyn_Switch_clause *)_T17B;
		_T17D = _T17C->body;
		_T17E = scs;
		_T17F = _T17E->hd;
		_T180 = (struct Cyc_Absyn_Switch_clause *)_T17F;
		_T181 = _T180->where_clause;
		Cyc_Tcstmt_pattern_synth(_T177,_T178,_T179,_T17D,_T181,1);
	      }
	    }_T182 = scs;
	    scs = _T182->tl;
	    goto _TL5D;
	    _TL5C: ;
	  }_T183 = s0;
	  _T184 = _T183->loc;
	  _T185 = te;
	  _T186 = scs0;
	  _T187 = *_T186;
	  _T188 = dtp;
	  Cyc_Tcpat_check_catch_overlap(_T184,_T185,_T187,_T188);
	  return;
	}
      }
    default: 
      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T2C8 = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T2C0;
	_T2C1 = _T2C8->f1;
	_T2C3 = _T2C8->f2;
      }{ struct Cyc_Absyn_Decl * d = _T2C1;
	struct Cyc_Absyn_Stmt * s = _T2C3;
	struct _fat_ptr unimp_msg_part;
	_T18A = new_block;
	if (! _T18A) { goto _TL68;
	}
	_T18B = s0;
	_T18C = _T18B->loc;
	_T18D = te;
	_T189 = Cyc_Tcenv_new_block(_T18C,_T18D);
	goto _TL69;
	_TL68: _T189 = te;
	_TL69: { struct Cyc_Tcenv_Tenv * _T2C8 = _T189;
	  struct Cyc_Tcenv_Tenv * te = _T2C8;
	  _T18E = d;
	  { void * _T2C9 = _T18E->r;
	    struct _tuple2 * _T2CA;
	    struct _fat_ptr * _T2CB;
	    struct Cyc_Absyn_Fndecl * _T2CC;
	    struct Cyc_Absyn_Exp * _T2CD;
	    struct Cyc_Absyn_Vardecl * _T2CE;
	    struct Cyc_Absyn_Tvar * _T2CF;
	    struct Cyc_List_List * _T2D0;
	    void * _T2D1;
	    void * _T2D2;
	    struct Cyc_Absyn_Pat * _T2D3;
	    void * _T2D4;
	    _T18F = (int *)_T2C9;
	    _T190 = *_T18F;
	    switch (_T190) {
	    case 0: 
	      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T2D5 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T2C9;
		_T2D4 = _T2D5->f1;
	      }{ struct Cyc_Absyn_Vardecl * vd = _T2D4;
		void * _T2D5;
		struct Cyc_Absyn_Exp * _T2D6;
		void * _T2D7;
		struct Cyc_Absyn_Tqual _T2D8;
		enum Cyc_Absyn_Scope _T2D9;
		_T191 = vd;
		{ struct Cyc_Absyn_Vardecl _T2DA = *_T191;
		  _T2D9 = _T2DA.sc;
		  _T2D8 = _T2DA.tq;
		  _T2D7 = _T2DA.type;
		  _T2D6 = _T2DA.initializer;
		  _T192 = vd;
		  _T193 = &_T192->rgn;
		  _T2D5 = (void * *)_T193;
		}{ enum Cyc_Absyn_Scope sc = _T2D9;
		  struct Cyc_Absyn_Tqual tq = _T2D8;
		  void * t = _T2D7;
		  struct Cyc_Absyn_Exp * initializer = _T2D6;
		  void * * rgn_ptr = (void * *)_T2D5;
		  void * curr_bl = Cyc_Tcenv_curr_rgn(te);
		  long is_local;
		  _T194 = sc;
		  _T195 = (int)_T194;
		  switch (_T195) {
		  case Cyc_Absyn_Static: 
		    goto _LL4E;
		  case Cyc_Absyn_Extern: 
		    _LL4E: goto _LL50;
		  case Cyc_Absyn_ExternC: 
		    _LL50: _T196 = vd;
		    _T196->escapes = 1;
		    is_local = 0;
		    goto _LL4A;
		  case Cyc_Absyn_Abstract: 
		    { struct Cyc_Warn_String_Warn_Warg_struct _T2DA;
		      _T2DA.tag = 0;
		      _T2DA.f1 = _tag_fat("bad abstract scope for local variable",
					  sizeof(char),38U);
		      _T197 = _T2DA;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T2DA = _T197;
		      void * _T2DB[1];
		      _T2DB[0] = &_T2DA;
		      _T198 = d;
		      _T199 = _T198->loc;
		      _T19A = _tag_fat(_T2DB,sizeof(void *),1);
		      Cyc_Warn_err2(_T199,_T19A);
		    }goto _LL54;
		  case Cyc_Absyn_Register: 
		    _LL54: goto _LL56;
		  case Cyc_Absyn_Public: 
		    _LL56: goto _LL58;
		  default: 
		    _LL58: is_local = 1;
		    goto _LL4A;
		  }
		  _LL4A: _T19B = rgn_ptr;
		  _T19D = is_local;
		  if (! _T19D) { goto _TL6C;
		  }
		  _T19C = curr_bl;
		  goto _TL6D;
		  _TL6C: _T19C = Cyc_Absyn_heap_rgn_type;
		  _TL6D: *_T19B = _T19C;
		  { void * _T2DA = Cyc_Absyn_compress(t);
		    struct Cyc_Absyn_ArrayInfo _T2DB;
		    _T19E = (int *)_T2DA;
		    _T19F = *_T19E;
		    switch (_T19F) {
		    case 6: 
		      _T1A0 = is_local;
		      if (! _T1A0) { goto _TL6F;
		      }
		      _T1A1 = vd;
		      _T1A1->escapes = 1;
		      sc = 3U;
		      is_local = 0;
		      goto _LL59;
		      _TL6F: goto _LL5E;
		    case 5: 
		      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T2DC = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T2DA;
			_T2DB = _T2DC->f1;
		      }{ struct Cyc_Absyn_ArrayInfo ai = _T2DB;
			_T1A2 = vd;
			_T1A3 = _T1A2->initializer;
			if (_T1A3 == 0) { goto _TL73;
			}else { goto _TL74;
			}
			_TL74: _T1A4 = ai;
			_T1A5 = _T1A4.num_elts;
			if (_T1A5 != 0) { goto _TL73;
			}else { goto _TL71;
			}
			_TL73: goto _LL59;
			_TL71: { struct Cyc_Absyn_Exp * len;
			  _T1A6 = vd;
			  _T1A7 = _T1A6->initializer;
			  { void * _T2DC = _T1A7->r;
			    struct Cyc_List_List * _T2DD;
			    struct Cyc_Absyn_Exp * _T2DE;
			    struct _fat_ptr _T2DF;
			    _T1A8 = (int *)_T2DC;
			    _T1A9 = *_T1A8;
			    switch (_T1A9) {
			    case 0: 
			      _T1AA = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T2DC;
			      _T1AB = _T1AA->f1;
			      _T1AC = _T1AB.Wstring_c;
			      _T1AD = _T1AC.tag;
			      switch (_T1AD) {
			      case 9: 
				{ struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T2E0 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T2DC;
				  _T1AE = _T2E0->f1;
				  _T1AF = _T1AE.String_c;
				  _T2DF = _T1AF.val;
				}{ struct _fat_ptr s = _T2DF;
				  _T1B0 = s;
				  _T1B1 = _get_fat_size(_T1B0,sizeof(char));
				  len = Cyc_Absyn_uint_exp(_T1B1,0U);
				  goto _LL60;
				}
			      case 10: 
				{ struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T2E0 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T2DC;
				  _T1B2 = _T2E0->f1;
				  _T1B3 = _T1B2.Wstring_c;
				  _T2DF = _T1B3.val;
				}{ struct _fat_ptr s = _T2DF;
				  len = Cyc_Absyn_uint_exp(1U,0U);
				  goto _LL60;
				}
			      default: 
				goto _LL6D;
			      }
			      ;
			    case 26: 
			      { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T2E0 = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T2DC;
				_T2DE = _T2E0->f2;
			      }{ struct Cyc_Absyn_Exp * e = _T2DE;
				_T2DE = e;
				goto _LL68;
			      }
			    case 27: 
			      { struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T2E0 = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T2DC;
				_T2DE = _T2E0->f1;
			      }_LL68: { struct Cyc_Absyn_Exp * e = _T2DE;
				len = e;
				goto _LL60;
			      }
			    case 35: 
			      { struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T2E0 = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T2DC;
				_T2DD = _T2E0->f2;
			      }{ struct Cyc_List_List * es = _T2DD;
				_T2DD = es;
				goto _LL6C;
			      }
			    case 25: 
			      { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T2E0 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T2DC;
				_T2DD = _T2E0->f1;
			      }_LL6C: { struct Cyc_List_List * es = _T2DD;
				_T1B4 = Cyc_List_length(es);
				_T1B5 = (unsigned int)_T1B4;
				len = Cyc_Absyn_uint_exp(_T1B5,0U);
				goto _LL60;
			      }
			    default: 
			      _LL6D: len = 0;
			      goto _LL60;
			    }
			    _LL60: ;
			  }ai.num_elts = len;
			  _T1B6 = vd;
			  { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T2DC = _cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));
			    _T2DC->tag = 5;
			    _T2DC->f1 = ai;
			    _T1B7 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T2DC;
			  }_T1B6->type = (void *)_T1B7;
			  t = _T1B6->type;
			  goto _LL59;
			}
		      }
		    default: 
		      _LL5E: goto _LL59;
		    }
		    _LL59: ;
		  }_T1B9 = is_local;
		  if (_T1B9) { goto _TL77;
		  }else { goto _TL79;
		  }
		  _TL79: _T1B8 = 0;
		  goto _TL78;
		  _TL77: _T1B8 = Cyc_Tcenv_lookup_type_vars(te);
		  _TL78: { struct Cyc_List_List * bound_vars = _T1B8;
		    long allow_evars = is_local;
		    _T1BA = s0;
		    _T1BB = _T1BA->loc;
		    _T1BC = te;
		    _T1BD = bound_vars;
		    _T1BE = &Cyc_Kinds_mk;
		    _T1BF = (struct Cyc_Absyn_Kind *)_T1BE;
		    _T1C0 = allow_evars;
		    _T1C1 = t;
		    Cyc_Tctyp_check_type(_T1BB,_T1BC,_T1BD,_T1BF,_T1C0,1,
					 _T1C1);
		    _T1C2 = vd;
		    _T1C3 = s0;
		    _T1C4 = _T1C3->loc;
		    _T1C5 = vd;
		    _T1C6 = _T1C5->tq;
		    _T1C7 = _T1C6.print_const;
		    _T1C8 = t;
		    (_T1C2->tq).real_const = Cyc_Tcutil_extract_const_from_typedef(_T1C4,
										   _T1C7,
										   _T1C8);
		    _T1C9 = sc;
		    _T1CA = (int)_T1C9;
		    if (_T1CA == 3) { goto _TL7C;
		    }else { goto _TL7D;
		    }
		    _TL7D: _T1CB = sc;
		    _T1CC = (int)_T1CB;
		    if (_T1CC == 4) { goto _TL7C;
		    }else { goto _TL7A;
		    }
		    _TL7C: { struct Cyc_Warn_String_Warn_Warg_struct _T2DA;
		      _T2DA.tag = 0;
		      _T2DA.f1 = _tag_fat("extern declarations are not yet supported within functions",
					  sizeof(char),59U);
		      _T1CD = _T2DA;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T2DA = _T1CD;
		      void * _T2DB[1];
		      _T2DB[0] = &_T2DA;
		      _T1CE = d;
		      _T1CF = _T1CE->loc;
		      _T1D0 = _tag_fat(_T2DB,sizeof(void *),1);
		      Cyc_Warn_err2(_T1CF,_T1D0);
		    }goto _TL7B;
		    _TL7A: _TL7B: if (initializer == 0) { goto _TL7E;
		    }
		    _T1D1 = te;
		    _T1D2 = &t;
		    _T1D3 = initializer;
		    Cyc_Tcexp_tcExpInitializer(_T1D1,_T1D2,_T1D3);
		    _T1D4 = is_local;
		    if (_T1D4) { goto _TL80;
		    }else { goto _TL82;
		    }
		    _TL82: _T1D5 = Cyc_Tcutil_is_const_exp(initializer);
		    if (_T1D5) { goto _TL80;
		    }else { goto _TL83;
		    }
		    _TL83: { struct Cyc_Warn_String_Warn_Warg_struct _T2DA;
		      _T2DA.tag = 0;
		      _T2DA.f1 = _tag_fat("initializer for static variable needs to be a constant expression",
					  sizeof(char),66U);
		      _T1D6 = _T2DA;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T2DA = _T1D6;
		      void * _T2DB[1];
		      _T2DB[0] = &_T2DA;
		      _T1D7 = d;
		      _T1D8 = _T1D7->loc;
		      _T1D9 = _tag_fat(_T2DB,sizeof(void *),1);
		      Cyc_Warn_err2(_T1D8,_T1D9);
		    }goto _TL81;
		    _TL80: _TL81: _T1DA = Cyc_Tcenv_curr_aquals_bounds(te);
		    _T1DB = initializer;
		    _T1DC = t;
		    _T1DD = Cyc_Tcutil_coerce_assign(_T1DA,_T1DB,_T1DC);
		    if (_T1DD) { goto _TL84;
		    }else { goto _TL86;
		    }
		    _TL86: { struct Cyc_Warn_Vardecl_Warn_Warg_struct _T2DA;
		      _T2DA.tag = 11;
		      _T2DA.f1 = vd;
		      _T1DE = _T2DA;
		    }{ struct Cyc_Warn_Vardecl_Warn_Warg_struct _T2DA = _T1DE;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T2DB;
			_T2DB.tag = 0;
			_T2DB.f1 = _tag_fat(" was declared with type ",sizeof(char),
					    25U);
			_T1DF = _T2DB;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T2DB = _T1DF;
			{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2DC;
			  _T2DC.tag = 2;
			  _T2DC.f1 = t;
			  _T1E0 = _T2DC;
			}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2DC = _T1E0;
			  { struct Cyc_Warn_String_Warn_Warg_struct _T2DD;
			    _T2DD.tag = 0;
			    _T2DD.f1 = _tag_fat(" but initialized with type ",
						sizeof(char),28U);
			    _T1E1 = _T2DD;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T2DD = _T1E1;
			    { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2DE;
			      _T2DE.tag = 3;
			      _T1E3 = initializer;
			      _T2DE.f1 = _T1E3->topt;
			      _T1E2 = _T2DE;
			    }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2DE = _T1E2;
			      void * _T2DF[5];
			      _T2DF[0] = &_T2DA;
			      _T2DF[1] = &_T2DB;
			      _T2DF[2] = &_T2DC;
			      _T2DF[3] = &_T2DD;
			      _T2DF[4] = &_T2DE;
			      _T1E4 = d;
			      _T1E5 = _T1E4->loc;
			      _T1E6 = _tag_fat(_T2DF,sizeof(void *),5);
			      Cyc_Warn_err2(_T1E5,_T1E6);
			    }
			  }
			}
		      }
		    }_T1E7 = t;
		    _T1E8 = initializer;
		    _T1E9 = _T1E8->topt;
		    Cyc_Unify_unify(_T1E7,_T1E9);
		    Cyc_Unify_explain_failure();
		    goto _TL85;
		    _TL84: _TL85: goto _TL7F;
		    _TL7E: _TL7F: Cyc_Tcstmt_tcStmt(te,s,0);
		    return;
		  }
		}
	      }
	    case 2: 
	      { struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T2D5 = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_T2C9;
		_T2D3 = _T2D5->f1;
		_T1EA = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_T2C9;
		_T1EB = &_T1EA->f2;
		_T2D4 = (struct Cyc_Core_Opt * *)_T1EB;
		_T1EC = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_T2C9;
		_T1ED = &_T1EC->f3;
		_T2D2 = (struct Cyc_Absyn_Exp * *)_T1ED;
		_T1EE = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_T2C9;
		_T1EF = &_T1EE->f4;
		_T2D1 = (void * *)_T1EF;
	      }{ struct Cyc_Absyn_Pat * p = _T2D3;
		struct Cyc_Core_Opt * * vds = (struct Cyc_Core_Opt * *)_T2D4;
		struct Cyc_Absyn_Exp * * exp = (struct Cyc_Absyn_Exp * *)_T2D2;
		void * * dtp = (void * *)_T2D1;
		_T1F0 = p;
		{ void * _T2D5 = _T1F0->r;
		  _T1F1 = (int *)_T2D5;
		  _T1F2 = *_T1F1;
		  switch (_T1F2) {
		  case 1: 
		    goto _LL73;
		  case 2: 
		    _LL73: goto _LL75;
		  case 14: 
		    _LL75: goto _LL6F;
		  default: 
		    _T1F3 = Cyc_Tcstmt_make_var_exp(exp,s0);
		    if (! _T1F3) { goto _TL88;
		    }
		    Cyc_Tcstmt_tcStmt(te,s0,new_block);
		    return;
		    _TL88: ;
		  }
		  _LL6F: ;
		}_T1F4 = exp;
		{ struct Cyc_Absyn_Exp * e = *_T1F4;
		  Cyc_Tcexp_tcExpInitializer(te,0,e);
		  _T1F5 = e;
		  _T1F6 = _T1F5->topt;
		  { void * pat_type = _check_null(_T1F6);
		    _T1F7 = te;
		    _T1F8 = p;
		    _T1F9 = &pat_type;
		    _T1FA = e;
		    { struct Cyc_Tcpat_TcPatResult pat_res = Cyc_Tcpat_tcPat(_T1F7,
									     _T1F8,
									     _T1F9,
									     _T1FA);
		      _T1FB = vds;
		      { struct Cyc_Core_Opt * _T2D5 = _cycalloc(sizeof(struct Cyc_Core_Opt));
			_T1FD = pat_res;
			_T2D5->v = _T1FD.patvars;
			_T1FC = (struct Cyc_Core_Opt *)_T2D5;
		      }*_T1FB = _T1FC;
		      _T1FE = p;
		      _T1FF = _T1FE->topt;
		      { void * pt = _check_null(_T1FF);
			_T200 = e;
			_T201 = _T200->topt;
			{ void * et = _check_null(_T201);
			  _T202 = Cyc_Unify_unify(pt,et);
			  if (_T202) { goto _TL8A;
			  }else { goto _TL8C;
			  }
			  _TL8C: _T203 = Cyc_Tcenv_curr_aquals_bounds(te);
			  _T204 = e;
			  _T205 = pt;
			  _T206 = Cyc_Tcutil_coerce_assign(_T203,_T204,_T205);
			  if (_T206) { goto _TL8A;
			  }else { goto _TL8D;
			  }
			  _TL8D: { struct Cyc_Warn_String_Warn_Warg_struct _T2D5;
			    _T2D5.tag = 0;
			    _T2D5.f1 = _tag_fat("pattern type ",sizeof(char),
						14U);
			    _T207 = _T2D5;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T2D5 = _T207;
			    { struct Cyc_Warn_Typ_Warn_Warg_struct _T2D6;
			      _T2D6.tag = 2;
			      _T2D6.f1 = pt;
			      _T208 = _T2D6;
			    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2D6 = _T208;
			      { struct Cyc_Warn_String_Warn_Warg_struct _T2D7;
				_T2D7.tag = 0;
				_T2D7.f1 = _tag_fat(" does not match definition type ",
						    sizeof(char),33U);
				_T209 = _T2D7;
			      }{ struct Cyc_Warn_String_Warn_Warg_struct _T2D7 = _T209;
				{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2D8;
				  _T2D8.tag = 2;
				  _T2D8.f1 = et;
				  _T20A = _T2D8;
				}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2D8 = _T20A;
				  void * _T2D9[4];
				  _T2D9[0] = &_T2D5;
				  _T2D9[1] = &_T2D6;
				  _T2D9[2] = &_T2D7;
				  _T2D9[3] = &_T2D8;
				  _T20B = d;
				  _T20C = _T20B->loc;
				  _T20D = _tag_fat(_T2D9,sizeof(void *),4);
				  Cyc_Warn_err2(_T20C,_T20D);
				}
			      }
			    }
			  }Cyc_Unify_unify(pt,et);
			  Cyc_Unify_explain_failure();
			  goto _TL8B;
			  _TL8A: _T20E = te;
			  _T20F = p;
			  _T210 = &pat_res;
			  _T211 = (struct Cyc_Tcpat_TcPatResult *)_T210;
			  Cyc_Tcpat_check_pat_regions(_T20E,_T20F,_T211);
			  _TL8B: _T212 = p;
			  _T213 = _T212->loc;
			  _T214 = te;
			  _T215 = p;
			  _T216 = dtp;
			  Cyc_Tcpat_check_let_pat_exhaustive(_T213,_T214,
							     _T215,_T216);
			  _T217 = s0;
			  _T218 = _T217->loc;
			  _T219 = te;
			  _T21A = pat_res;
			  _T21B = s;
			  Cyc_Tcstmt_pattern_synth(_T218,_T219,_T21A,_T21B,
						   0,0);
			  return;
			}
		      }
		    }
		  }
		}
	      }
	    case 3: 
	      { struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct * _T2D5 = (struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct *)_T2C9;
		_T2D0 = _T2D5->f1;
	      }{ struct Cyc_List_List * vds = _T2D0;
		void * curr_bl = Cyc_Tcenv_curr_rgn(te);
		_TL91: if (vds != 0) { goto _TL8F;
		}else { goto _TL90;
		}
		_TL8F: _T21C = vds;
		_T21D = _T21C->hd;
		_T21E = (struct Cyc_Absyn_Vardecl *)_T21D;
		_T21E->rgn = curr_bl;
		_T21F = s0;
		_T220 = _T21F->loc;
		_T221 = te;
		_T222 = Cyc_Tcenv_lookup_type_vars(te);
		_T223 = &Cyc_Kinds_mk;
		_T224 = (struct Cyc_Absyn_Kind *)_T223;
		_T225 = vds;
		_T226 = _T225->hd;
		_T227 = (struct Cyc_Absyn_Vardecl *)_T226;
		_T228 = _T227->type;
		Cyc_Tctyp_check_type(_T220,_T221,_T222,_T224,1,1,_T228);
		_T229 = vds;
		vds = _T229->tl;
		goto _TL91;
		_TL90: Cyc_Tcstmt_tcStmt(te,s,0);
		return;
	      }
	    case 4: 
	      { struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct * _T2D5 = (struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct *)_T2C9;
		_T2CF = _T2D5->f1;
		_T2CE = _T2D5->f2;
		_T2CD = _T2D5->f3;
	      }{ struct Cyc_Absyn_Tvar * tv = _T2CF;
		struct Cyc_Absyn_Vardecl * vd = _T2CE;
		struct Cyc_Absyn_Exp * open_exp_opt = _T2CD;
		_T22A = s;
		{ struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T2D5 = _cycalloc(sizeof(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct));
		  _T2D5->tag = 2;
		  _T22C = s;
		  _T22D = _T22C->r;
		  _T22E = s;
		  _T22F = _T22E->loc;
		  _T2D5->f1 = Cyc_Absyn_new_stmt(_T22D,_T22F);
		  _T230 = s;
		  _T231 = _T230->loc;
		  _T2D5->f2 = Cyc_Absyn_skip_stmt(_T231);
		  _T22B = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T2D5;
		}_T232 = (void *)_T22B;
		_T233 = s;
		_T234 = _T233->loc;
		_T235 = Cyc_Absyn_new_stmt(_T232,_T234);
		_T22A->r = _T235->r;
		{ struct Cyc_Tcenv_Tenv * te2 = te;
		  void * _T2D5;
		  void * _T2D6;
		  _T236 = vd;
		  { struct Cyc_Absyn_Vardecl _T2D7 = *_T236;
		    _T237 = vd;
		    _T238 = &_T237->type;
		    _T2D6 = (void * *)_T238;
		    _T239 = vd;
		    _T23A = &_T239->rgn;
		    _T2D5 = (void * *)_T23A;
		  }{ void * * t = (void * *)_T2D6;
		    void * * rgn_ptr = (void * *)_T2D5;
		    void * curr_bl = Cyc_Tcenv_curr_rgn(te);
		    _T23B = rgn_ptr;
		    *_T23B = curr_bl;
		    { void * rgn_typ;
		      _T23C = open_exp_opt;
		      _T23D = (unsigned int)_T23C;
		      if (! _T23D) { goto _TL92;
		      }
		      { struct _tuple2 * drname;
			drname = _cycalloc(sizeof(struct _tuple2));
			_T23E = drname;
			{ struct _fat_ptr * _T2D7[1];
			  { struct _fat_ptr * _T2D8 = _cycalloc(sizeof(struct _fat_ptr));
			    *_T2D8 = _tag_fat("Core",sizeof(char),5U);
			    _T240 = (struct _fat_ptr *)_T2D8;
			  }_T2D7[0] = _T240;
			  _T241 = _tag_fat(_T2D7,sizeof(struct _fat_ptr *),
					   1);
			  _T23F = Cyc_List_list(_T241);
			}_T23E->f0 = Cyc_Absyn_Abs_n(_T23F,0);
			_T242 = drname;
			{ struct _fat_ptr * _T2D7 = _cycalloc(sizeof(struct _fat_ptr));
			  *_T2D7 = _tag_fat("DynamicRegion",sizeof(char),
					    14U);
			  _T243 = (struct _fat_ptr *)_T2D7;
			}_T242->f1 = _T243;
			{ struct Cyc_Core_Opt * _T2D7 = _cycalloc(sizeof(struct Cyc_Core_Opt));
			  _T245 = &Cyc_Kinds_ek;
			  _T2D7->v = (struct Cyc_Absyn_Kind *)_T245;
			  _T244 = (struct Cyc_Core_Opt *)_T2D7;
			}{ void * outer_rgn = Cyc_Absyn_new_evar(_T244,0);
			  { struct Cyc_Core_Opt * _T2D7 = _cycalloc(sizeof(struct Cyc_Core_Opt));
			    _T247 = &Cyc_Kinds_ek;
			    _T2D7->v = (struct Cyc_Absyn_Kind *)_T247;
			    _T246 = (struct Cyc_Core_Opt *)_T2D7;
			  }rgn_typ = Cyc_Absyn_new_evar(_T246,0);
			  { struct Cyc_Core_Opt * _T2D7 = _cycalloc(sizeof(struct Cyc_Core_Opt));
			    _T249 = &Cyc_Kinds_aqk;
			    _T2D7->v = (struct Cyc_Absyn_Kind *)_T249;
			    _T248 = (struct Cyc_Core_Opt *)_T2D7;
			  }{ void * aq = Cyc_Absyn_new_evar(_T248,0);
			    _T24A = Cyc_Absyn_UnknownAggr(0U,drname,0);
			    { void * _T2D7[1];
			      _T2D7[0] = rgn_typ;
			      _T24C = _tag_fat(_T2D7,sizeof(void *),1);
			      _T24B = Cyc_List_list(_T24C);
			    }{ void * dr_type = Cyc_Absyn_aggr_type(_T24A,
								    _T24B);
			      _T24D = dr_type;
			      _T24E = outer_rgn;
			      _T24F = aq;
			      _T250 = Cyc_Absyn_empty_tqual(0U);
			      _T251 = Cyc_Absyn_false_type;
			      _T252 = Cyc_Absyn_false_type;
			      { void * exp_type = Cyc_Absyn_at_type(_T24D,
								    _T24E,
								    _T24F,
								    _T250,
								    _T251,
								    _T252);
				_T253 = s0;
				_T254 = _T253->loc;
				_T255 = te;
				_T256 = Cyc_Tcenv_lookup_type_vars(te);
				_T257 = &Cyc_Kinds_mk;
				_T258 = (struct Cyc_Absyn_Kind *)_T257;
				_T259 = exp_type;
				Cyc_Tctyp_check_type(_T254,_T255,_T256,_T258,
						     1,0,_T259);
				_T25A = te;
				_T25B = &exp_type;
				_T25C = open_exp_opt;
				{ void * key_typ = Cyc_Tcexp_tcExp(_T25A,
								   _T25B,
								   _T25C);
				  _T25D = Cyc_Unify_unify(exp_type,key_typ);
				  if (_T25D) { goto _TL94;
				  }else { goto _TL96;
				  }
				  _TL96: _T25E = Cyc_Tcenv_curr_aquals_bounds(te);
				  _T25F = open_exp_opt;
				  _T260 = exp_type;
				  _T261 = Cyc_Tcutil_coerce_assign(_T25E,
								   _T25F,
								   _T260);
				  if (_T261) { goto _TL94;
				  }else { goto _TL97;
				  }
				  _TL97: { struct Cyc_Warn_String_Warn_Warg_struct _T2D7;
				    _T2D7.tag = 0;
				    _T2D7.f1 = _tag_fat("expected ",sizeof(char),
							10U);
				    _T262 = _T2D7;
				  }{ struct Cyc_Warn_String_Warn_Warg_struct _T2D7 = _T262;
				    { struct Cyc_Warn_Typ_Warn_Warg_struct _T2D8;
				      _T2D8.tag = 2;
				      _T2D8.f1 = exp_type;
				      _T263 = _T2D8;
				    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2D8 = _T263;
				      { struct Cyc_Warn_String_Warn_Warg_struct _T2D9;
					_T2D9.tag = 0;
					_T2D9.f1 = _tag_fat(" but found ",
							    sizeof(char),
							    12U);
					_T264 = _T2D9;
				      }{ struct Cyc_Warn_String_Warn_Warg_struct _T2D9 = _T264;
					{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2DA;
					  _T2DA.tag = 2;
					  _T2DA.f1 = key_typ;
					  _T265 = _T2DA;
					}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T2DA = _T265;
					  void * _T2DB[4];
					  _T2DB[0] = &_T2D7;
					  _T2DB[1] = &_T2D8;
					  _T2DB[2] = &_T2D9;
					  _T2DB[3] = &_T2DA;
					  _T266 = s0;
					  _T267 = _T266->loc;
					  _T268 = _tag_fat(_T2DB,sizeof(void *),
							   4);
					  Cyc_Warn_err2(_T267,_T268);
					}
				      }
				    }
				  }goto _TL95;
				  _TL94: _TL95: _T269 = Cyc_Tcutil_is_aliasable_qual(aq);
				  if (! _T269) { goto _TL98;
				  }
				  { struct Cyc_Warn_String_Warn_Warg_struct _T2D7;
				    _T2D7.tag = 0;
				    _T2D7.f1 = _tag_fat("open is allowed only on unique or reference-counted keys",
							sizeof(char),57U);
				    _T26A = _T2D7;
				  }{ struct Cyc_Warn_String_Warn_Warg_struct _T2D7 = _T26A;
				    void * _T2D8[1];
				    _T2D8[0] = &_T2D7;
				    _T26B = s0;
				    _T26C = _T26B->loc;
				    _T26D = _tag_fat(_T2D8,sizeof(void *),
						     1);
				    Cyc_Warn_err2(_T26C,_T26D);
				  }goto _TL99;
				  _TL98: _TL99: _T26E = t;
				  *_T26E = Cyc_Absyn_rgn_handle_type(rgn_typ);
				  te2 = Cyc_Tcenv_add_region(te2,rgn_typ,
							     1,0);
				}
			      }
			    }
			  }
			}
		      }goto _TL93;
		      _TL92: { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T2D7 = _cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));
			_T2D7->tag = 2;
			_T2D7->f1 = tv;
			_T26F = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T2D7;
		      }rgn_typ = (void *)_T26F;
		      _T270 = s0;
		      _T271 = _T270->loc;
		      _T272 = te2;
		      { struct Cyc_List_List * _T2D7 = _cycalloc(sizeof(struct Cyc_List_List));
			_T2D7->hd = tv;
			_T2D7->tl = 0;
			_T273 = (struct Cyc_List_List *)_T2D7;
		      }te2 = Cyc_Tcenv_add_type_vars(_T271,_T272,_T273);
		      te2 = Cyc_Tcenv_add_region(te2,rgn_typ,0,1);
		      _TL93: _T274 = s0;
		      _T275 = _T274->loc;
		      _T276 = te;
		      _T277 = Cyc_Tcenv_lookup_type_vars(te2);
		      _T278 = &Cyc_Kinds_bk;
		      _T279 = (struct Cyc_Absyn_Kind *)_T278;
		      _T27A = t;
		      _T27B = *_T27A;
		      Cyc_Tctyp_check_type(_T275,_T276,_T277,_T279,1,0,_T27B);
		      _T27C = t;
		      _T27D = *_T27C;
		      _T27E = Cyc_Absyn_rgn_handle_type(rgn_typ);
		      _T27F = Cyc_Unify_unify(_T27D,_T27E);
		      if (_T27F) { goto _TL9A;
		      }else { goto _TL9C;
		      }
		      _TL9C: _T281 = Cyc_Warn_impos;
		      { int (* _T2D7)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
										  struct _fat_ptr))_T281;
			_T280 = _T2D7;
		      }_T282 = _tag_fat("region stmt: type of region handle is wrong!",
					sizeof(char),45U);
		      _T283 = _tag_fat(0U,sizeof(void *),0);
		      _T280(_T282,_T283);
		      goto _TL9B;
		      _TL9A: _TL9B: Cyc_Tcstmt_tcStmt(te2,s,0);
		      return;
		    }
		  }
		}
	      }
	    case 1: 
	      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T2D5 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T2C9;
		_T2CC = _T2D5->f1;
	      }{ struct Cyc_Absyn_Fndecl * fd = _T2CC;
		_T284 = fd;
		_T285 = _T284->sc;
		_T286 = (int)_T285;
		if (_T286 == 2) { goto _TL9D;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T2D5;
		  _T2D5.tag = 0;
		  _T2D5.f1 = _tag_fat("bad storage class for inner function",
				      sizeof(char),37U);
		  _T287 = _T2D5;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T2D5 = _T287;
		  void * _T2D6[1];
		  _T2D6[0] = &_T2D5;
		  _T288 = d;
		  _T289 = _T288->loc;
		  _T28A = _tag_fat(_T2D6,sizeof(void *),1);
		  Cyc_Warn_err2(_T289,_T28A);
		}goto _TL9E;
		_TL9D: _TL9E: _T28B = d;
		_T28C = _T28B->loc;
		_T28D = fd;
		_T28E = _T28D->i;
		_T28F = _T28E.attributes;
		Cyc_Atts_check_fndecl_atts(_T28C,_T28F,1);
		_T290 = d;
		_T291 = _T290->loc;
		_T292 = te;
		_T293 = fd;
		Cyc_Tctyp_check_fndecl_valid_type(_T291,_T292,_T293);
		{ void * t = Cyc_Tcutil_fndecl2type(fd);
		  _T294 = fd;
		  _T295 = t;
		  _T296 = fd;
		  _T297 = _T296->i;
		  _T298 = _T297.attributes;
		  (_T294->i).attributes = Cyc_Atts_transfer_fn_type_atts(_T295,
									 _T298);
		  { void * curr_bl = Cyc_Tcenv_curr_rgn(te);
		    struct Cyc_Absyn_Vardecl * vd;
		    vd = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
		    _T299 = vd;
		    _T29A = fd;
		    _T299->sc = _T29A->sc;
		    _T29B = vd;
		    _T29C = fd;
		    _T29B->name = _T29C->name;
		    _T29D = vd;
		    _T29D->varloc = 0U;
		    _T29E = vd;
		    _T29E->tq = Cyc_Absyn_const_tqual(0U);
		    _T29F = vd;
		    _T2A0 = t;
		    _T2A1 = curr_bl;
		    _T2A2 = Cyc_Absyn_al_qual_type;
		    _T2A3 = Cyc_Absyn_empty_tqual(0U);
		    _T2A4 = Cyc_Absyn_false_type;
		    _T2A5 = Cyc_Absyn_false_type;
		    _T29F->type = Cyc_Absyn_at_type(_T2A0,_T2A1,_T2A2,_T2A3,
						    _T2A4,_T2A5);
		    _T2A6 = vd;
		    _T2A6->initializer = 0;
		    _T2A7 = vd;
		    _T2A7->rgn = curr_bl;
		    _T2A8 = vd;
		    _T2A8->attributes = 0;
		    _T2A9 = vd;
		    _T2A9->escapes = 0;
		    _T2AA = vd;
		    _T2AB = fd;
		    _T2AC = _T2AB->body;
		    _T2AA->is_proto = _T2AC != 0;
		    _T2AD = vd;
		    _T2AD->rename = 0;
		    _T2AE = fd;
		    _T2AE->fn_vardecl = vd;
		    _T2AF = te;
		    _T2B0 = _T2AF->le;
		    { struct Cyc_Tcenv_Fenv * old_fenv = _check_null(_T2B0);
		      _T2B1 = te;
		      _T2B2 = d;
		      _T2B3 = _T2B2->loc;
		      _T2B4 = old_fenv;
		      _T2B5 = fd;
		      _T2B1->le = Cyc_Tcenv_nested_fenv(_T2B3,_T2B4,_T2B5);
		      _T2B6 = te;
		      _T2B7 = fd;
		      _T2B8 = _T2B7->body;
		      Cyc_Tcstmt_tcStmt(_T2B6,_T2B8,0);
		      Cyc_Tcenv_check_delayed_effects(te);
		      Cyc_Tcenv_check_delayed_constraints(te);
		      _T2B9 = te;
		      _T2B9->le = old_fenv;
		      Cyc_Tcstmt_tcStmt(te,s,0);
		      return;
		    }
		  }
		}
	      }
	    case 9: 
	      { struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T2D5 = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T2C9;
		_T2CB = _T2D5->f1;
		_T2D0 = _T2D5->f2;
	      }{ struct _fat_ptr * n = _T2CB;
		struct Cyc_List_List * tds = _T2D0;
		unimp_msg_part = _tag_fat("namespace",sizeof(char),10U);
		goto _LL24;
	      }
	    case 10: 
	      { struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct * _T2D5 = (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct *)_T2C9;
		_T2CA = _T2D5->f1;
		_T2D0 = _T2D5->f2;
	      }{ struct _tuple2 * q = _T2CA;
		struct Cyc_List_List * tds = _T2D0;
		unimp_msg_part = _tag_fat("using",sizeof(char),6U);
		goto _LL24;
	      }
	    case 5: 
	      unimp_msg_part = _tag_fat("type",sizeof(char),5U);
	      goto _LL24;
	    case 6: 
	      unimp_msg_part = _tag_fat("datatype",sizeof(char),9U);
	      goto _LL24;
	    case 7: 
	      unimp_msg_part = _tag_fat("enum",sizeof(char),5U);
	      goto _LL24;
	    case 8: 
	      unimp_msg_part = _tag_fat("typedef",sizeof(char),8U);
	      goto _LL24;
	    case 11: 
	      unimp_msg_part = _tag_fat("extern \"C\"",sizeof(char),11U);
	      goto _LL24;
	    case 12: 
	      unimp_msg_part = _tag_fat("extern \"C include\"",sizeof(char),
					19U);
	      goto _LL24;
	    case 13: 
	      unimp_msg_part = _tag_fat("__cyclone_port_on__",sizeof(char),
					20U);
	      goto _LL24;
	    case 14: 
	      unimp_msg_part = _tag_fat("__cyclone_port_off__",sizeof(char),
					21U);
	      goto _LL24;
	    case 15: 
	      unimp_msg_part = _tag_fat("__tempest_on__",sizeof(char),15U);
	      goto _LL24;
	    default: 
	      unimp_msg_part = _tag_fat("__tempest_off__",sizeof(char),16U);
	      goto _LL24;
	    }
	    _LL24: ;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T2C9;
	    _T2C9.tag = 0;
	    _T2C9.f1 = _tag_fat("tcStmt: nested ",sizeof(char),16U);
	    _T2BA = _T2C9;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T2C9 = _T2BA;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T2CA;
	      _T2CA.tag = 0;
	      _T2CA.f1 = unimp_msg_part;
	      _T2BB = _T2CA;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T2CA = _T2BB;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T2CB;
		_T2CB.tag = 0;
		_T2CB.f1 = _tag_fat(" declarations not allowed",sizeof(char),
				    26U);
		_T2BC = _T2CB;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T2CB = _T2BC;
		void * _T2CC[3];
		_T2CC[0] = &_T2C9;
		_T2CC[1] = &_T2CA;
		_T2CC[2] = &_T2CB;
		_T2BE = Cyc_Warn_impos2;
		{ int (* _T2CD)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T2BE;
		  _T2BD = _T2CD;
		}_T2BF = _tag_fat(_T2CC,sizeof(void *),3);
		_T2BD(_T2BF);
	      }
	    }
	  }
	}
      }
    }
    ;
  }
}
static long Cyc_Tcstmt_check_catchall_handler(struct Cyc_Absyn_Stmt * b) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  int _T2;
  struct Cyc_List_List * _T3;
  unsigned int _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  struct Cyc_Absyn_Switch_clause * _T7;
  struct Cyc_Absyn_Pat * _T8;
  int * _T9;
  int _TA;
  struct Cyc_Absyn_Switch_clause * _TB;
  struct Cyc_Absyn_Stmt * _TC;
  long _TD;
  struct Cyc_List_List * _TE;
  long _TF;
  _T0 = b;
  { void * _T10 = _T0->r;
    struct Cyc_List_List * _T11;
    _T1 = (int *)_T10;
    _T2 = *_T1;
    if (_T2 != 15) { goto _TL9F;
    }
    { struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct * _T12 = (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct *)_T10;
      _T11 = _T12->f2;
    }{ struct Cyc_List_List * case_list = _T11;
      long found_wild = 0;
      _TLA4: _T3 = case_list;
      _T4 = (unsigned int)_T3;
      if (_T4) { goto _TLA2;
      }else { goto _TLA3;
      }
      _TLA2: _T5 = case_list;
      _T6 = _T5->hd;
      { struct Cyc_Absyn_Switch_clause * clause = (struct Cyc_Absyn_Switch_clause *)_T6;
	_T7 = clause;
	_T8 = _T7->pattern;
	{ void * _T12 = _T8->r;
	  _T9 = (int *)_T12;
	  _TA = *_T9;
	  if (_TA != 0) { goto _TLA5;
	  }
	  found_wild = 1;
	  goto _LL5;
	  _TLA5: goto _LL5;
	  _LL5: ;
	}_TB = clause;
	_TC = _TB->body;
	_TD = Cyc_Tcstmt_ensure_no_throw_stmt(_TC);
	if (_TD) { goto _TLA7;
	}else { goto _TLA9;
	}
	_TLA9: return 0;
	_TLA7: ;
      }_TE = case_list;
      case_list = _TE->tl;
      goto _TLA4;
      _TLA3: _TF = found_wild;
      return _TF;
    }_TL9F: return 0;
    ;
  }
}
 struct _tuple19 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Exp * f1;
};
static long Cyc_Tcstmt_ensure_no_throw_exp(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  long (* _T3)(long (*)(struct Cyc_Absyn_Exp *),struct Cyc_List_List *);
  long (* _T4)(long (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T5;
  long _T6;
  int _T7;
  long _T8;
  long _T9;
  struct Cyc_Absyn_Exp * _TA;
  int * _TB;
  unsigned int _TC;
  void * _TD;
  long _TE;
  struct Cyc_Absyn_Exp * _TF;
  int * _T10;
  int _T11;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T12;
  struct Cyc_Absyn_PtrInfo _T13;
  void * _T14;
  int * _T15;
  int _T16;
  struct Cyc_Absyn_PtrInfo _T17;
  void * _T18;
  int (* _T19)(void *,void *);
  struct Cyc_Absyn_FnInfo _T1A;
  struct Cyc_List_List * _T1B;
  struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct * _T1C;
  struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct * _T1D;
  void * _T1E;
  struct Cyc_Warn_String_Warn_Warg_struct _T1F;
  int (* _T20)(struct _fat_ptr);
  void * (* _T21)(struct _fat_ptr);
  struct _fat_ptr _T22;
  int _T23;
  long _T24;
  long (* _T25)(long (*)(struct Cyc_Absyn_Exp *),struct Cyc_List_List *);
  long (* _T26)(long (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T27;
  void * _T28;
  void * _T29;
  int * _T2A;
  unsigned int _T2B;
  long _T2C;
  long (* _T2D)(long (*)(struct Cyc_Absyn_Exp *),struct Cyc_List_List *);
  long (* _T2E)(long (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T2F)(struct Cyc_Absyn_Exp * (*)(struct _tuple19 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T30)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Exp * (* _T31)(struct _tuple19 *);
  void * (* _T32)(struct _tuple0 *);
  struct Cyc_List_List * _T33;
  struct Cyc_List_List * _T34;
  long _T35;
  void * _T36;
  int _T37;
  long _T38;
  struct Cyc_Absyn_Exp * _T39;
  int * _T3A;
  int _T3B;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T3C;
  struct Cyc_Absyn_PtrInfo * _T3D;
  struct Cyc_Absyn_PtrInfo * _T3E;
  struct Cyc_Absyn_PtrAtts _T3F;
  void * _T40;
  unsigned int _T41;
  int _T42;
  _T0 = e;
  { void * _T43 = _T0->r;
    enum Cyc_Absyn_Coercion _T44;
    long _T45;
    struct Cyc_Absyn_VarargCallInfo * _T46;
    struct Cyc_List_List * _T47;
    struct Cyc_Absyn_Exp * _T48;
    void * _T49;
    _T1 = (int *)_T43;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      return 1;
    case 3: 
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T43;
	_T49 = _T4A->f2;
      }{ struct Cyc_List_List * es = _T49;
	_T4 = Cyc_List_forall;
	{ long (* _T4A)(long (*)(struct Cyc_Absyn_Exp *),struct Cyc_List_List *) = (long (*)(long (*)(struct Cyc_Absyn_Exp *),
											     struct Cyc_List_List *))_T4;
	  _T3 = _T4A;
	}_T5 = es;
	_T6 = _T3(Cyc_Tcstmt_ensure_no_throw_exp,_T5);
	return _T6;
      }
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T43;
	_T49 = _T4A->f1;
	_T48 = _T4A->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T49;
	struct Cyc_Absyn_Exp * e2 = _T48;
	_T49 = e1;
	_T48 = e2;
	goto _LL8;
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T43;
	_T49 = _T4A->f1;
	_T48 = _T4A->f2;
      }_LL8: { struct Cyc_Absyn_Exp * e1 = _T49;
	struct Cyc_Absyn_Exp * e2 = _T48;
	_T49 = e1;
	_T48 = e2;
	goto _LLA;
      }
    case 34: 
      { struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct *)_T43;
	_T49 = _T4A->f1;
	_T48 = _T4A->f2;
      }_LLA: { struct Cyc_Absyn_Exp * e1 = _T49;
	struct Cyc_Absyn_Exp * e2 = _T48;
	_T49 = e1;
	_T48 = e2;
	goto _LLC;
      }
    case 9: 
      { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T43;
	_T49 = _T4A->f1;
	_T48 = _T4A->f2;
      }_LLC: { struct Cyc_Absyn_Exp * e1 = _T49;
	struct Cyc_Absyn_Exp * e2 = _T48;
	_T8 = Cyc_Tcstmt_ensure_no_throw_exp(e1);
	if (! _T8) { goto _TLAB;
	}
	_T7 = Cyc_Tcstmt_ensure_no_throw_exp(e2);
	goto _TLAC;
	_TLAB: _T7 = 0;
	_TLAC: return _T7;
      }
    case 10: 
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T43;
	_T49 = _T4A->f1;
	_T47 = _T4A->f2;
	_T46 = _T4A->f3;
	_T45 = _T4A->f4;
      }{ struct Cyc_Absyn_Exp * fname = _T49;
	struct Cyc_List_List * args = _T47;
	struct Cyc_Absyn_VarargCallInfo * vargs = _T46;
	long res = _T45;
	_T9 = res;
	if (_T9) { goto _TLAD;
	}else { goto _TLAF;
	}
	_TLAF: return 0;
	_TLAD: { long fname_ok = 0;
	  _TA = fname;
	  { void * _T4A = _TA->r;
	    struct Cyc_List_List * _T4B;
	    void * _T4C;
	    _TB = (int *)_T4A;
	    _TC = *_TB;
	    switch (_TC) {
	    case 13: 
	      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T4D = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T4A;
		_T4C = _T4D->f1;
		_T4B = _T4D->f2;
	      }{ struct Cyc_Absyn_Exp * e1 = _T4C;
		struct Cyc_List_List * ts = _T4B;
		fname_ok = Cyc_Tcstmt_ensure_no_throw_exp(e1);
		goto _LL1D;
	      }
	    case 1: 
	      { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T4D = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T4A;
		_TD = _T4D->f1;
		_T4C = (void *)_TD;
	      }{ void * b = _T4C;
		fname_ok = Cyc_Tcstmt_ensure_no_throw_exp(fname);
		goto _LL1D;
	      }
	    default: 
	      goto _LL1D;
	    }
	    _LL1D: ;
	  }_TE = fname_ok;
	  if (! _TE) { goto _TLB1;
	  }
	  _TF = fname;
	  { void * _T4A = _TF->topt;
	    struct Cyc_Absyn_FnInfo _T4B;
	    if (_T4A == 0) { goto _TLB3;
	    }
	    _T10 = (int *)_T4A;
	    _T11 = *_T10;
	    if (_T11 != 4) { goto _TLB5;
	    }
	    _T12 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T4A;
	    _T13 = _T12->f1;
	    _T14 = _T13.elt_type;
	    _T15 = (int *)_T14;
	    _T16 = *_T15;
	    if (_T16 != 6) { goto _TLB7;
	    }
	    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T4C = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T4A;
	      _T17 = _T4C->f1;
	      _T18 = _T17.elt_type;
	      { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T4D = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T18;
		_T4B = _T4D->f1;
	      }
	    }{ struct Cyc_Absyn_FnInfo fi = _T4B;
	      _T19 = Cyc_Atts_attribute_cmp;
	      _T1A = fi;
	      _T1B = _T1A.attributes;
	      _T1C = &Cyc_Atts_No_throw_att_val;
	      _T1D = (struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct *)_T1C;
	      _T1E = (void *)_T1D;
	      fname_ok = Cyc_List_mem(_T19,_T1B,_T1E);
	      goto _LL24;
	    }_TLB7: goto _LL27;
	    _TLB5: goto _LL27;
	    _TLB3: _LL27: { struct Cyc_Warn_String_Warn_Warg_struct _T4C;
	      _T4C.tag = 0;
	      _T4C.f1 = _tag_fat("Expected function pointer type",sizeof(char),
				 31U);
	      _T1F = _T4C;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T4C = _T1F;
	      void * _T4D[1];
	      _T4D[0] = &_T4C;
	      _T21 = Cyc_Warn_impos2;
	      { int (* _T4E)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T21;
		_T20 = _T4E;
	      }_T22 = _tag_fat(_T4D,sizeof(void *),1);
	      _T20(_T22);
	    }_LL24: ;
	  }goto _TLB2;
	  _TLB1: _TLB2: _T24 = fname_ok;
	  if (! _T24) { goto _TLB9;
	  }
	  _T26 = Cyc_List_forall;
	  { long (* _T4A)(long (*)(struct Cyc_Absyn_Exp *),struct Cyc_List_List *) = (long (*)(long (*)(struct Cyc_Absyn_Exp *),
											       struct Cyc_List_List *))_T26;
	    _T25 = _T4A;
	  }_T27 = args;
	  _T23 = _T25(Cyc_Tcstmt_ensure_no_throw_exp,_T27);
	  goto _TLBA;
	  _TLB9: _T23 = 0;
	  _TLBA: return _T23;
	}
      }
    case 1: 
      { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T43;
	_T28 = _T4A->f1;
	_T49 = (void *)_T28;
      }{ void * b = _T49;
	_T29 = b;
	_T2A = (int *)_T29;
	_T2B = *_T2A;
	switch (_T2B) {
	case 3: 
	  goto _LL2D;
	case 4: 
	  _LL2D: return 1;
	default: 
	  return 0;
	}
	;
      }
    case 15: 
      { struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T43;
	_T49 = _T4A->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T49;
	_T2C = Cyc_Tcstmt_ensure_no_throw_exp(e1);
	return _T2C;
      }
    case 28: 
      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T43;
	_T49 = _T4A->f3;
      }{ struct Cyc_List_List * exps = _T49;
	_T2E = Cyc_List_forall;
	{ long (* _T4A)(long (*)(struct Cyc_Absyn_Exp *),struct Cyc_List_List *) = (long (*)(long (*)(struct Cyc_Absyn_Exp *),
											     struct Cyc_List_List *))_T2E;
	  _T2D = _T4A;
	}_T30 = Cyc_List_map;
	{ struct Cyc_List_List * (* _T4A)(struct Cyc_Absyn_Exp * (*)(struct _tuple19 *),
					  struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Exp * (*)(struct _tuple19 *),
												struct Cyc_List_List *))_T30;
	  _T2F = _T4A;
	}_T32 = Cyc_Core_snd;
	{ struct Cyc_Absyn_Exp * (* _T4A)(struct _tuple19 *) = (struct Cyc_Absyn_Exp * (*)(struct _tuple19 *))_T32;
	  _T31 = _T4A;
	}_T33 = exps;
	_T34 = _T2F(_T31,_T33);
	_T35 = _T2D(Cyc_Tcstmt_ensure_no_throw_exp,_T34);
	return _T35;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T43;
	_T36 = _T4A->f1;
	_T49 = (void *)_T36;
	_T48 = _T4A->f2;
	_T45 = _T4A->f3;
	_T44 = _T4A->f4;
      }{ void * ct = _T49;
	struct Cyc_Absyn_Exp * e1 = _T48;
	long b = _T45;
	enum Cyc_Absyn_Coercion c = _T44;
	_T38 = b;
	if (_T38) { goto _TLBC;
	}else { goto _TLBE;
	}
	_TLBE: _T37 = Cyc_Tcstmt_ensure_no_throw_exp(e1);
	goto _TLBD;
	_TLBC: _T37 = 0;
	_TLBD: return _T37;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T43;
	_T48 = _T4A->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T48;
	_T48 = e1;
	goto _LL1A;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T43;
	_T48 = _T4A->f1;
      }_LL1A: { struct Cyc_Absyn_Exp * e1 = _T48;
	_T39 = e1;
	{ void * _T4A = _T39->topt;
	  void * _T4B;
	  if (_T4A == 0) { goto _TLBF;
	  }
	  _T3A = (int *)_T4A;
	  _T3B = *_T3A;
	  if (_T3B != 4) { goto _TLC1;
	  }
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T4C = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T4A;
	    _T3C = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T4A;
	    _T3D = &_T3C->f1;
	    _T4B = (struct Cyc_Absyn_PtrInfo *)_T3D;
	  }{ struct Cyc_Absyn_PtrInfo * pi = (struct Cyc_Absyn_PtrInfo *)_T4B;
	    _T3E = pi;
	    _T3F = _T3E->ptr_atts;
	    _T40 = _T3F.nullable;
	    _T41 = (unsigned int)_T40;
	    _T42 = ! _T41;
	    return _T42;
	  }_TLC1: goto _LL33;
	  _TLBF: _LL33: return 0;
	  ;
	}
      }
    default: 
      return 0;
    }
    ;
  }
}
static long Cyc_Tcstmt_nothrow_visit_f1(long * env,struct Cyc_Absyn_Exp * e) {
  long * _T0;
  _T0 = env;
  *_T0 = Cyc_Tcstmt_ensure_no_throw_exp(e);
  return 0;
}
static long Cyc_Tcstmt_nothrow_visit_f2(long * env,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  int _T2;
  long * _T3;
  int _T4;
  long * _T5;
  long _T6;
  _T0 = s;
  { void * _T7 = _T0->r;
    _T1 = (int *)_T7;
    _T2 = *_T1;
    if (_T2 != 15) { goto _TLC3;
    }
    _T3 = env;
    _T5 = env;
    _T6 = *_T5;
    if (! _T6) { goto _TLC5;
    }
    _T4 = Cyc_Tcstmt_check_catchall_handler(s);
    goto _TLC6;
    _TLC5: _T4 = 0;
    _TLC6: *_T3 = _T4;
    return 0;
    _TLC3: return 1;
    ;
  }
}
long Cyc_Tcstmt_ensure_no_throw_stmt(struct Cyc_Absyn_Stmt * s) {
  void (* _T0)(long (*)(long *,struct Cyc_Absyn_Exp *),long (*)(long *,struct Cyc_Absyn_Stmt *),
	       long *,struct Cyc_Absyn_Stmt *);
  void (* _T1)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Stmt *);
  long * _T2;
  struct Cyc_Absyn_Stmt * _T3;
  long _T4;
  long env = 1;
  _T1 = Cyc_Absyn_visit_stmt;
  { void (* _T5)(long (*)(long *,struct Cyc_Absyn_Exp *),long (*)(long *,
								  struct Cyc_Absyn_Stmt *),
		 long *,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(long *,
								      struct Cyc_Absyn_Exp *),
							     long (*)(long *,
								      struct Cyc_Absyn_Stmt *),
							     long *,struct Cyc_Absyn_Stmt *))_T1;
    _T0 = _T5;
  }_T2 = &env;
  _T3 = s;
  _T0(Cyc_Tcstmt_nothrow_visit_f1,Cyc_Tcstmt_nothrow_visit_f2,_T2,_T3);
  _T4 = env;
  return _T4;
}
