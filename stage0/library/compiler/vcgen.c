#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct _tuple0 {
  void * f0;
  void * f1;
};
void * Cyc_Core_snd(struct _tuple0 *);
int Cyc_Core_ptrcmp(void *,void *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern int Cyc_List_length(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map(void * (*)(void *),struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rimp_merge_sort(int (*)(void *,void *),
						       struct Cyc_List_List *);
 struct _tuple1 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
};
extern struct _tuple1 Cyc_List_split(struct Cyc_List_List *);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_Position_string_of_segment(unsigned int);
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
 struct Cyc_Absyn_ArrayInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_Absyn_Exp * num_elts;
  void * zero_term;
  unsigned int zt_loc;
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
 struct Cyc_Absyn_SubsetType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_AssnDef_ExistAssnFn * f3;
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
 struct Cyc_Absyn_FieldName_Absyn_Designator_struct {
  int tag;
  struct _fat_ptr * f1;
};
enum Cyc_Absyn_MallocKind {
  Cyc_Absyn_Malloc = 0U,
  Cyc_Absyn_Calloc = 1U,
  Cyc_Absyn_Vmalloc = 2U
};
 struct Cyc_Absyn_MallocInfo {
  enum Cyc_Absyn_MallocKind mknd;
  struct Cyc_Absyn_Exp * rgn;
  struct Cyc_Absyn_Exp * aqual;
  void * * elt_type;
  struct Cyc_Absyn_Exp * num_elts;
  long fat_result;
  long inline_call;
};
 struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct {
  int tag;
  union Cyc_Absyn_Cnst f1;
};
 struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct {
  int tag;
  struct _fat_ptr f1;
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
 struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
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
 struct _tuple10 {
  struct _fat_ptr * f0;
  struct Cyc_Absyn_Tqual f1;
  void * f2;
};
 struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct {
  int tag;
  struct _tuple10 * f1;
  struct Cyc_List_List * f2;
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
 struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  long f2;
  struct Cyc_List_List * f3;
};
 struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_List_List * f1;
  struct Cyc_Absyn_Datatypedecl * f2;
  struct Cyc_Absyn_Datatypefield * f3;
};
 struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_MallocInfo f1;
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
 struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
};
 struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  long f2;
  long f3;
};
 struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
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
 struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
  struct Cyc_Absyn_Vardecl * f2;
};
 struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Pat * f2;
};
 struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
  struct Cyc_Absyn_Vardecl * f2;
};
 struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Pat * f1;
};
 struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct {
  int tag;
  void * f1;
  long f2;
  struct Cyc_List_List * f3;
  struct Cyc_List_List * f4;
  long f5;
};
 struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
  struct Cyc_Absyn_Datatypefield * f2;
  struct Cyc_List_List * f3;
  long f4;
};
 struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct {
  int tag;
  enum Cyc_Absyn_Sign f1;
  int f2;
};
 struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct {
  int tag;
  char f1;
};
 struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct {
  int tag;
  struct _fat_ptr f1;
  int f2;
};
 struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Enumfield * f2;
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
 struct Cyc_Absyn_Global_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Funname_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Fndecl * f1;
};
 struct Cyc_Absyn_Param_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Local_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Pat_b_Absyn_Binding_struct {
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
 struct Cyc_Absyn_Datatypefield {
  struct _tuple2 * name;
  struct Cyc_List_List * typs;
  unsigned int loc;
  enum Cyc_Absyn_Scope sc;
};
 struct Cyc_Absyn_Datatypedecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple2 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Core_Opt * fields;
  long is_extensible;
};
 struct Cyc_Absyn_Enumfield {
  struct _tuple2 * name;
  struct Cyc_Absyn_Exp * tag;
  unsigned int loc;
};
 struct Cyc_Absyn_Enumdecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple2 * name;
  struct Cyc_Core_Opt * fields;
};
 struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
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
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
int Cyc_Absyn_qvar_cmp(struct _tuple2 *,struct _tuple2 *);
int Cyc_Absyn_hash_qvar(struct _tuple2 *);
union Cyc_Absyn_Nmspace Cyc_Absyn_Loc_n();
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned int);
void * Cyc_Absyn_compress(void *);
extern void * Cyc_Absyn_uint_type;
extern void * Cyc_Absyn_sint_type;
void * Cyc_Absyn_gen_float_type(unsigned int);
extern void * Cyc_Absyn_heap_rgn_type;
extern void * Cyc_Absyn_al_qual_type;
extern void * Cyc_Absyn_false_type;
void * Cyc_Absyn_exn_type();
void * Cyc_Absyn_bounds_one();
void * Cyc_Absyn_at_type(void *,void *,void *,struct Cyc_Absyn_Tqual,void *,
			 void *);
struct Cyc_Absyn_Exp * Cyc_Absyn_new_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_uint_exp(unsigned int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_float_exp(struct _fat_ptr,int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_valueof_exp(void *,unsigned int);
struct Cyc_Absyn_Vardecl * Cyc_Absyn_new_vardecl(unsigned int,struct _tuple2 *,
						 void *,struct Cyc_Absyn_Exp *,
						 struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Aggrdecl * Cyc_Absyn_get_known_aggrdecl(union Cyc_Absyn_AggrInfo);
struct _fat_ptr * Cyc_Absyn_designatorlist_to_fieldname(struct Cyc_List_List *);
void Cyc_Absyn_visit_exp(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									  struct Cyc_Absyn_Stmt *),
			 void *,struct Cyc_Absyn_Exp *);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void *,void *);
struct Cyc_Hashtable_Table;
extern struct Cyc_Hashtable_Table * Cyc_Hashtable_create(int,int (*)(void *,
								     void *),
							 int (*)(void *));
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table *,void *,void *);
extern void * Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table *,void *);
extern void * * Cyc_Hashtable_lookup_opt(struct Cyc_Hashtable_Table *,void *);
struct Cyc_Set_Set;
extern struct Cyc_Set_Set * Cyc_Set_union_two(struct Cyc_Set_Set *,struct Cyc_Set_Set *);
extern int Cyc_Set_cardinality(struct Cyc_Set_Set *);
 struct Cyc_AssnDef_Uint_AssnDef_Term_struct {
  int tag;
  unsigned int f1;
  void * f2;
};
 struct Cyc_AssnDef_Addr_AssnDef_Term_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  void * f2;
  void * f3;
};
 struct Cyc_AssnDef_Alloc_AssnDef_Term_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  int f2;
  void * f3;
  void * f4;
  void * f5;
};
 struct Cyc_AssnDef_Offseti_AssnDef_Term_struct {
  int tag;
  void * f1;
  void * f2;
  void * f3;
};
extern struct Cyc_Absyn_Vardecl * Cyc_AssnDef_memory;
extern struct Cyc_Absyn_Vardecl * Cyc_AssnDef_pre_memory;
extern struct Cyc_Absyn_Vardecl * Cyc_AssnDef_exception_vardecl();
extern void * Cyc_AssnDef_zero();
extern void * Cyc_AssnDef_one();
extern void * Cyc_AssnDef_uint(unsigned int);
extern void * Cyc_AssnDef_cnst(struct Cyc_Absyn_Exp *);
extern void * Cyc_AssnDef_select(void *,void *,void *);
extern void * Cyc_AssnDef_update(void *,void *,void *);
extern void * Cyc_AssnDef_unop(enum Cyc_Absyn_Primop,void *,void *);
extern void * Cyc_AssnDef_binop(enum Cyc_Absyn_Primop,void *,void *,void *);
extern void * Cyc_AssnDef_cast(void *,void *);
extern void * Cyc_AssnDef_tagof_tm(void *);
extern void * Cyc_AssnDef_proj(void *,unsigned int,void *);
extern void * Cyc_AssnDef_addr(struct Cyc_Absyn_Vardecl *,void *);
extern void * Cyc_AssnDef_alloc(struct Cyc_Absyn_Exp *,void *,void *,void *);
extern void * Cyc_AssnDef_offsetf(void *,unsigned int,void *);
extern void * Cyc_AssnDef_offseti(void *,void *,void *);
extern void * Cyc_AssnDef_numelts_term(void *);
extern void * Cyc_AssnDef_plus(void *,void *,void *);
extern void * Cyc_AssnDef_struct_aggr(struct Cyc_List_List *,void *);
extern void * Cyc_AssnDef_datatype_aggr(unsigned int,struct Cyc_List_List *,
					void *);
extern void * Cyc_AssnDef_union_aggr(unsigned int,struct Cyc_List_List *,
				     void *);
extern void * Cyc_AssnDef_fresh_var(struct Cyc_Absyn_Vardecl *,void *);
 struct _tuple13 {
  void * f0;
  struct Cyc_List_List * f1;
};
extern struct _tuple13 Cyc_AssnDef_split_addr(void *);
extern void * Cyc_AssnDef_apply_aggr_update(void *,struct Cyc_List_List *,
					    void *);
extern void * Cyc_AssnDef_get_term_type(void *);
 struct Cyc_AssnDef_True_AssnDef_Assn_struct {
  int tag;
};
 struct Cyc_AssnDef_False_AssnDef_Assn_struct {
  int tag;
};
extern struct _fat_ptr Cyc_AssnDef_assn2string(void *);
extern struct Cyc_AssnDef_True_AssnDef_Assn_struct Cyc_AssnDef_true_assn;
extern struct Cyc_AssnDef_False_AssnDef_Assn_struct Cyc_AssnDef_false_assn;
extern void * Cyc_AssnDef_and(void *,void *);
extern void * Cyc_AssnDef_or(void *,void *);
extern void * Cyc_AssnDef_not(void *);
extern void * Cyc_AssnDef_eq(void *,void *);
extern void * Cyc_AssnDef_neq(void *,void *);
extern void * Cyc_AssnDef_slt(void *,void *);
extern void * Cyc_AssnDef_slte(void *,void *);
extern void * Cyc_AssnDef_ult(void *,void *);
extern void * Cyc_AssnDef_ulte(void *,void *);
 struct Cyc_AssnDef_AssnFn {
  struct Cyc_List_List * actuals;
  void * assn;
};
 struct Cyc_AssnDef_ExistAssnFn {
  struct Cyc_AssnDef_AssnFn * af;
  struct Cyc_Set_Set * existvars;
};
 struct Cyc_AssnDef_AssnMap {
  void * assn;
  struct Cyc_Dict_Dict map;
};
extern struct Cyc_AssnDef_ExistAssnFn * Cyc_AssnDef_bound_ts_in_assn(void *,
								     struct Cyc_List_List *);
extern void * Cyc_AssnDef_existassnfn2assn(struct Cyc_AssnDef_ExistAssnFn *,
					   struct Cyc_List_List *);
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_false_assnmap();
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_true_assnmap();
extern struct _fat_ptr Cyc_AssnDef_assnmap2dag(struct Cyc_AssnDef_AssnMap);
extern struct _fat_ptr Cyc_AssnDef_assnmap2string(struct Cyc_AssnDef_AssnMap);
 struct _tuple14 {
  void * f0;
  struct Cyc_AssnDef_AssnMap f1;
};
extern struct _tuple14 Cyc_AssnDef_lookup_var_map(struct Cyc_Absyn_Vardecl *,
						  struct Cyc_AssnDef_AssnMap);
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_update_var_map(struct Cyc_Absyn_Vardecl *,
							     void *,struct Cyc_AssnDef_AssnMap);
 struct _tuple15 {
  void * f0;
  void * f1;
  struct Cyc_Dict_Dict f2;
};
extern struct _tuple15 Cyc_AssnDef_unify_var_maps_subst(struct Cyc_AssnDef_AssnMap,
							struct Cyc_AssnDef_AssnMap);
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_canonical_assnmap(struct Cyc_AssnDef_AssnMap);
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_force_canonical(struct Cyc_Set_Set *,
							      struct Cyc_AssnDef_AssnMap);
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_or_assnmap_assnmap(struct Cyc_AssnDef_AssnMap,
								 struct Cyc_AssnDef_AssnMap);
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_widen_assnmap(struct Cyc_AssnDef_AssnMap);
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_or_assnmap_assn(struct Cyc_AssnDef_AssnMap,
							      void *);
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_and_assnmap_assn(struct Cyc_AssnDef_AssnMap,
							       void *);
extern long Cyc_AssnDef_simple_prove(void *,void *);
extern long Cyc_AssnDef_better_prove(void *,void *);
extern void * Cyc_AssnDef_widen(void *);
extern struct Cyc_Set_Set * Cyc_AssnDef_assn_fr_logicvar(void *);
extern struct Cyc_Set_Set * Cyc_AssnDef_calc_changed_vars_stmt(struct Cyc_Absyn_Stmt *);
extern struct Cyc_Set_Set * Cyc_AssnDef_calc_changed_vars_exp(struct Cyc_Absyn_Exp *);
long Cyc_Atts_is_noreturn_fn_type(void *);
extern int Cyc_CfFlowInfo_get_field_index(void *,struct _fat_ptr *);
 struct _tuple16 {
  unsigned int f0;
  long f1;
};
extern struct _tuple16 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp *);
extern long Cyc_Flags_warn_assert;
extern long Cyc_Flags_allpaths;
extern unsigned int Cyc_Flags_max_vc_summary;
long Cyc_Tcutil_is_pointer_type(void *);
long Cyc_Tcutil_is_zeroterm_pointer_type(void *);
long Cyc_Tcutil_is_nullable_pointer_type(void *,long);
long Cyc_Tcutil_is_fat_pointer_type(void *);
void * Cyc_Tcutil_pointer_elt_type(void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_get_bounds_exp_constrain(void *,void *,
							   long);
struct Cyc_Absyn_Exp * Cyc_Tcutil_get_type_bound(void *);
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp *);
struct Cyc_List_List * Cyc_Tcutil_filter_nulls(struct Cyc_List_List *);
void * Cyc_Tcutil_promote_array(void *,void *,void *,long);
long Cyc_Tcutil_force_type2bool(long,void *);
long Cyc_Unify_unify(void *,void *);
 struct Cyc_JumpAnalysis_Jump_Anal_Result {
  struct Cyc_Hashtable_Table * pop_tables;
  struct Cyc_Hashtable_Table * succ_tables;
  struct Cyc_Hashtable_Table * pat_pop_tables;
};
 struct Cyc_Vcgen_ExpChecks {
  struct Cyc_AssnDef_AssnMap ctxt;
  void * bounds_check;
  void * null_check;
};
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
void Cyc_Warn_err(unsigned int,struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Exp_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
void Cyc_Warn_warn2(unsigned int,struct _fat_ptr);
static struct Cyc_Hashtable_Table * Cyc_Vcgen_fn_ens_info_table;
static void Cyc_Vcgen_insert_fn_info(struct Cyc_Absyn_Fndecl * fd,struct Cyc_List_List * pre_memory_and_actuals,
				     void * result_term,void * final_memory,
				     void * a) {
  int _T0;
  unsigned int _T1;
  unsigned int _T2;
  struct Cyc_Hashtable_Table * (* _T3)(int,int (*)(struct _tuple2 *,struct _tuple2 *),
				       int (*)(struct _tuple2 *));
  struct Cyc_Hashtable_Table * (* _T4)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T5)(struct _tuple2 *,struct _tuple2 *);
  int (* _T6)(struct _tuple2 *);
  void (* _T7)(struct Cyc_Hashtable_Table *,struct _tuple2 *,struct Cyc_AssnDef_ExistAssnFn *);
  void (* _T8)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Hashtable_Table * _T9;
  struct Cyc_Absyn_Fndecl * _TA;
  struct _tuple2 * _TB;
  void * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_AssnDef_ExistAssnFn * _TF;
  struct Cyc_Set_Set * fvs = Cyc_AssnDef_assn_fr_logicvar(a);
  _T0 = Cyc_Set_cardinality(fvs);
  _T1 = (unsigned int)_T0;
  _T2 = Cyc_Flags_max_vc_summary;
  if (_T1 <= _T2) { goto _TL0;
  }
  a = Cyc_AssnDef_widen(a);
  goto _TL1;
  _TL0: _TL1: { struct Cyc_Hashtable_Table * h;
    if (Cyc_Vcgen_fn_ens_info_table != 0) { goto _TL2;
    }
    _T4 = Cyc_Hashtable_create;
    { struct Cyc_Hashtable_Table * (* _T10)(int,int (*)(struct _tuple2 *,
							struct _tuple2 *),
					    int (*)(struct _tuple2 *)) = (struct Cyc_Hashtable_Table * (*)(int,
													   int (*)(struct _tuple2 *,
														   struct _tuple2 *),
													   int (*)(struct _tuple2 *)))_T4;
      _T3 = _T10;
    }_T5 = Cyc_Absyn_qvar_cmp;
    _T6 = Cyc_Absyn_hash_qvar;
    h = _T3(37,_T5,_T6);
    Cyc_Vcgen_fn_ens_info_table = h;
    goto _TL3;
    _TL2: h = Cyc_Vcgen_fn_ens_info_table;
    _TL3: _T8 = Cyc_Hashtable_insert;
    { void (* _T10)(struct Cyc_Hashtable_Table *,struct _tuple2 *,struct Cyc_AssnDef_ExistAssnFn *) = (void (*)(struct Cyc_Hashtable_Table *,
														struct _tuple2 *,
														struct Cyc_AssnDef_ExistAssnFn *))_T8;
      _T7 = _T10;
    }_T9 = h;
    _TA = fd;
    _TB = _TA->name;
    _TC = a;
    { struct Cyc_List_List * _T10 = _cycalloc(sizeof(struct Cyc_List_List));
      _T10->hd = result_term;
      { struct Cyc_List_List * _T11 = _cycalloc(sizeof(struct Cyc_List_List));
	_T11->hd = final_memory;
	_T11->tl = pre_memory_and_actuals;
	_TE = (struct Cyc_List_List *)_T11;
      }_T10->tl = _TE;
      _TD = (struct Cyc_List_List *)_T10;
    }_TF = Cyc_AssnDef_bound_ts_in_assn(_TC,_TD);
    _T7(_T9,_TB,_TF);
  }
}
static void Cyc_Vcgen_insert_fn_precond_info(struct Cyc_Hashtable_Table * fn_precond_info,
					     struct Cyc_Absyn_Exp * e,void * a,
					     void * mem,struct Cyc_List_List * actuals) {
  int _T0;
  unsigned int _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_Absyn_Exp * _T5;
  int * _T6;
  unsigned int _T7;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T8;
  void * _T9;
  int * _TA;
  int _TB;
  void * _TC;
  struct Cyc_Absyn_Fndecl * _TD;
  long _TE;
  struct Cyc_List_List * * (* _TF)(struct Cyc_Hashtable_Table *,struct _tuple2 *);
  void * * (* _T10)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Hashtable_Table * _T11;
  struct Cyc_Absyn_Fndecl * _T12;
  struct _tuple2 * _T13;
  void (* _T14)(struct Cyc_Hashtable_Table *,struct _tuple2 *,struct Cyc_List_List *);
  void (* _T15)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Hashtable_Table * _T16;
  struct Cyc_Absyn_Fndecl * _T17;
  struct _tuple2 * _T18;
  struct Cyc_List_List * _T19;
  void (* _T1A)(struct Cyc_Hashtable_Table *,struct _tuple2 *,struct Cyc_List_List *);
  void (* _T1B)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Hashtable_Table * _T1C;
  struct Cyc_Absyn_Fndecl * _T1D;
  struct _tuple2 * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * * _T20;
  struct Cyc_Set_Set * fvs = Cyc_AssnDef_assn_fr_logicvar(a);
  _T0 = Cyc_Set_cardinality(fvs);
  _T1 = (unsigned int)_T0;
  _T2 = Cyc_Flags_max_vc_summary;
  if (_T1 <= _T2) { goto _TL4;
  }
  a = Cyc_AssnDef_widen(a);
  goto _TL5;
  _TL4: _TL5: _T3 = a;
  { struct Cyc_List_List * _T21 = _cycalloc(sizeof(struct Cyc_List_List));
    _T21->hd = mem;
    _T21->tl = actuals;
    _T4 = (struct Cyc_List_List *)_T21;
  }{ struct Cyc_AssnDef_ExistAssnFn * eaf = Cyc_AssnDef_bound_ts_in_assn(_T3,
									 _T4);
    struct Cyc_Hashtable_Table * h = fn_precond_info;
    _T5 = e;
    { void * _T21 = _T5->r;
      struct Cyc_Absyn_Exp * _T22;
      struct Cyc_Absyn_Fndecl * _T23;
      _T6 = (int *)_T21;
      _T7 = *_T6;
      switch (_T7) {
      case 1: 
	_T8 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T21;
	_T9 = _T8->f1;
	_TA = (int *)_T9;
	_TB = *_TA;
	if (_TB != 2) { goto _TL7;
	}
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T24 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T21;
	  _TC = _T24->f1;
	  { struct Cyc_Absyn_Funname_b_Absyn_Binding_struct * _T25 = (struct Cyc_Absyn_Funname_b_Absyn_Binding_struct *)_TC;
	    _T23 = _T25->f1;
	  }
	}{ struct Cyc_Absyn_Fndecl * fd = _T23;
	  _TD = fd;
	  _TE = _TD->escapes;
	  if (! _TE) { goto _TL9;
	  }
	  goto _LL0;
	  _TL9: _T10 = Cyc_Hashtable_lookup_opt;
	  { struct Cyc_List_List * * (* _T24)(struct Cyc_Hashtable_Table *,
					      struct _tuple2 *) = (struct Cyc_List_List * * (*)(struct Cyc_Hashtable_Table *,
												struct _tuple2 *))_T10;
	    _TF = _T24;
	  }_T11 = h;
	  _T12 = fd;
	  _T13 = _T12->name;
	  { struct Cyc_List_List * * eafs_opt = _TF(_T11,_T13);
	    if (eafs_opt != 0) { goto _TLB;
	    }
	    _T15 = Cyc_Hashtable_insert;
	    { void (* _T24)(struct Cyc_Hashtable_Table *,struct _tuple2 *,
			    struct Cyc_List_List *) = (void (*)(struct Cyc_Hashtable_Table *,
								struct _tuple2 *,
								struct Cyc_List_List *))_T15;
	      _T14 = _T24;
	    }_T16 = h;
	    _T17 = fd;
	    _T18 = _T17->name;
	    { struct Cyc_List_List * _T24 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T24->hd = eaf;
	      _T24->tl = 0;
	      _T19 = (struct Cyc_List_List *)_T24;
	    }_T14(_T16,_T18,_T19);
	    goto _TLC;
	    _TLB: _T1B = Cyc_Hashtable_insert;
	    { void (* _T24)(struct Cyc_Hashtable_Table *,struct _tuple2 *,
			    struct Cyc_List_List *) = (void (*)(struct Cyc_Hashtable_Table *,
								struct _tuple2 *,
								struct Cyc_List_List *))_T1B;
	      _T1A = _T24;
	    }_T1C = h;
	    _T1D = fd;
	    _T1E = _T1D->name;
	    { struct Cyc_List_List * _T24 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T24->hd = eaf;
	      _T20 = eafs_opt;
	      _T24->tl = *_T20;
	      _T1F = (struct Cyc_List_List *)_T24;
	    }_T1A(_T1C,_T1E,_T1F);
	    _TLC: goto _LL0;
	  }
	}_TL7: goto _LL7;
      case 13: 
	{ struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T24 = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T21;
	  _T22 = _T24->f1;
	}{ struct Cyc_Absyn_Exp * e1 = _T22;
	  Cyc_Vcgen_insert_fn_precond_info(h,e1,a,mem,actuals);
	  goto _LL0;
	}
      case 12: 
	{ struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T24 = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T21;
	  _T22 = _T24->f1;
	}{ struct Cyc_Absyn_Exp * e1 = _T22;
	  Cyc_Vcgen_insert_fn_precond_info(h,e1,a,mem,actuals);
	  goto _LL0;
	}
      default: 
	_LL7: goto _LL0;
      }
      _LL0: ;
    }
  }
}
static void Cyc_Vcgen_add_free_var(struct Cyc_Dict_Dict * S,void * x) {
  struct Cyc_Dict_Dict * _T0;
  struct Cyc_Dict_Dict * _T1;
  struct Cyc_Dict_Dict _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  _T0 = S;
  _T1 = S;
  _T2 = *_T1;
  _T3 = x;
  _T4 = Cyc_AssnDef_get_term_type(x);
  _T5 = Cyc_AssnDef_fresh_var(0,_T4);
  *_T0 = Cyc_Dict_insert(_T2,_T3,_T5);
}
static struct Cyc_AssnDef_ExistAssnFn * Cyc_Vcgen_lookup_fn_summary_info(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T3;
  void * _T4;
  int * _T5;
  unsigned int _T6;
  void * _T7;
  struct Cyc_AssnDef_ExistAssnFn * * (* _T8)(struct Cyc_Hashtable_Table *,
					     struct _tuple2 *);
  void * * (* _T9)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Hashtable_Table * _TA;
  struct Cyc_Absyn_Fndecl * _TB;
  struct _tuple2 * _TC;
  struct Cyc_AssnDef_ExistAssnFn * * _TD;
  struct Cyc_AssnDef_ExistAssnFn * _TE;
  void * _TF;
  struct Cyc_AssnDef_ExistAssnFn * * (* _T10)(struct Cyc_Hashtable_Table *,
					      struct _tuple2 *);
  void * * (* _T11)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Hashtable_Table * _T12;
  struct Cyc_Absyn_Vardecl * _T13;
  struct _tuple2 * _T14;
  struct Cyc_AssnDef_ExistAssnFn * * _T15;
  struct Cyc_AssnDef_ExistAssnFn * _T16;
  struct Cyc_AssnDef_ExistAssnFn * _T17;
  if (Cyc_Vcgen_fn_ens_info_table != 0) { goto _TLD;
  }
  return 0;
  _TLD: { struct Cyc_Hashtable_Table * h = Cyc_Vcgen_fn_ens_info_table;
    _T0 = e;
    { void * _T18 = _T0->r;
      struct Cyc_Absyn_Exp * _T19;
      struct Cyc_Absyn_Vardecl * _T1A;
      struct Cyc_Absyn_Fndecl * _T1B;
      _T1 = (int *)_T18;
      _T2 = *_T1;
      switch (_T2) {
      case 1: 
	_T3 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T18;
	_T4 = _T3->f1;
	_T5 = (int *)_T4;
	_T6 = *_T5;
	switch (_T6) {
	case 2: 
	  { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T1C = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T18;
	    _T7 = _T1C->f1;
	    { struct Cyc_Absyn_Funname_b_Absyn_Binding_struct * _T1D = (struct Cyc_Absyn_Funname_b_Absyn_Binding_struct *)_T7;
	      _T1B = _T1D->f1;
	    }
	  }{ struct Cyc_Absyn_Fndecl * fd = _T1B;
	    _T9 = Cyc_Hashtable_lookup_opt;
	    { struct Cyc_AssnDef_ExistAssnFn * * (* _T1C)(struct Cyc_Hashtable_Table *,
							  struct _tuple2 *) = (struct Cyc_AssnDef_ExistAssnFn * * (*)(struct Cyc_Hashtable_Table *,
														      struct _tuple2 *))_T9;
	      _T8 = _T1C;
	    }_TA = h;
	    _TB = fd;
	    _TC = _TB->name;
	    { struct Cyc_AssnDef_ExistAssnFn * * fensinfo_opt = _T8(_TA,_TC);
	      if (fensinfo_opt != 0) { goto _TL11;
	      }
	      return 0;
	      _TL11: _TD = fensinfo_opt;
	      _TE = *_TD;
	      return _TE;
	    }
	  }
	case 1: 
	  { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T1C = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T18;
	    _TF = _T1C->f1;
	    { struct Cyc_Absyn_Global_b_Absyn_Binding_struct * _T1D = (struct Cyc_Absyn_Global_b_Absyn_Binding_struct *)_TF;
	      _T1A = _T1D->f1;
	    }
	  }{ struct Cyc_Absyn_Vardecl * vd = _T1A;
	    _T11 = Cyc_Hashtable_lookup_opt;
	    { struct Cyc_AssnDef_ExistAssnFn * * (* _T1C)(struct Cyc_Hashtable_Table *,
							  struct _tuple2 *) = (struct Cyc_AssnDef_ExistAssnFn * * (*)(struct Cyc_Hashtable_Table *,
														      struct _tuple2 *))_T11;
	      _T10 = _T1C;
	    }_T12 = h;
	    _T13 = vd;
	    _T14 = _T13->name;
	    { struct Cyc_AssnDef_ExistAssnFn * * fensinfo_opt = _T10(_T12,
								     _T14);
	      if (fensinfo_opt != 0) { goto _TL13;
	      }
	      return 0;
	      _TL13: _T15 = fensinfo_opt;
	      _T16 = *_T15;
	      return _T16;
	    }
	  }
	default: 
	  goto _LL7;
	}
	;
      case 13: 
	{ struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T1C = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T18;
	  _T19 = _T1C->f1;
	}{ struct Cyc_Absyn_Exp * e1 = _T19;
	  _T17 = Cyc_Vcgen_lookup_fn_summary_info(e1);
	  return _T17;
	}
      default: 
	_LL7: return 0;
      }
      ;
    }
  }
}
 struct Cyc_Vcgen_Env {
  struct Cyc_Hashtable_Table * assn_table;
  struct Cyc_Hashtable_Table * succ_table;
  struct Cyc_Hashtable_Table * * assn_info;
  struct Cyc_Hashtable_Table * fn_precond_info;
  struct Cyc_AssnDef_AssnMap * try_assnmap;
  void * * exp_stmt;
  struct Cyc_Absyn_Vardecl * result;
  struct Cyc_AssnDef_AssnMap * res_assnmap;
  struct Cyc_AssnDef_AssnMap * continue_assnmap;
  long widen_paths;
  long pure_exp;
  void * invoke;
};
static int Cyc_Vcgen_hash_ptr(void * s) {
  void * _T0;
  int _T1;
  _T0 = s;
  _T1 = (int)_T0;
  return _T1;
}
static struct Cyc_Vcgen_Env * Cyc_Vcgen_initial_env(struct Cyc_JumpAnalysis_Jump_Anal_Result * tables,
						    struct Cyc_Absyn_Fndecl * fd,
						    struct Cyc_Hashtable_Table * * assn_info,
						    struct Cyc_Hashtable_Table * fn_precond_info,
						    struct Cyc_AssnDef_AssnMap * res_assnmap,
						    struct Cyc_AssnDef_AssnMap * try_assnmap,
						    struct Cyc_Absyn_Vardecl * result) {
  struct Cyc_Hashtable_Table * (* _T0)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Fndecl *);
  void * (* _T1)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_JumpAnalysis_Jump_Anal_Result * _T2;
  struct Cyc_Hashtable_Table * _T3;
  struct Cyc_Absyn_Fndecl * _T4;
  struct Cyc_Hashtable_Table * (* _T5)(int,int (*)(struct Cyc_Absyn_Stmt *,
						   struct Cyc_Absyn_Stmt *),
				       int (*)(struct Cyc_Absyn_Stmt *));
  struct Cyc_Hashtable_Table * (* _T6)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T7)(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *);
  int (* _T8)(void *,void *);
  int (* _T9)(struct Cyc_Absyn_Stmt *);
  struct Cyc_Vcgen_Env * _TA;
  struct Cyc_Vcgen_Env * _TB;
  struct Cyc_Vcgen_Env * _TC;
  struct Cyc_Vcgen_Env * _TD;
  struct Cyc_Vcgen_Env * _TE;
  struct Cyc_Vcgen_Env * _TF;
  struct Cyc_Vcgen_Env * _T10;
  struct Cyc_Vcgen_Env * _T11;
  struct Cyc_Vcgen_Env * _T12;
  struct Cyc_Vcgen_Env * _T13;
  struct Cyc_Vcgen_Env * _T14;
  struct Cyc_Vcgen_Env * _T15;
  struct Cyc_Vcgen_Env * _T16;
  _T1 = Cyc_Hashtable_lookup;
  { struct Cyc_Hashtable_Table * (* _T17)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Fndecl *) = (struct Cyc_Hashtable_Table * (*)(struct Cyc_Hashtable_Table *,
																      struct Cyc_Absyn_Fndecl *))_T1;
    _T0 = _T17;
  }_T2 = tables;
  _T3 = _T2->succ_tables;
  _T4 = fd;
  { struct Cyc_Hashtable_Table * succ_table = _T0(_T3,_T4);
    _T6 = Cyc_Hashtable_create;
    { struct Cyc_Hashtable_Table * (* _T17)(int,int (*)(struct Cyc_Absyn_Stmt *,
							struct Cyc_Absyn_Stmt *),
					    int (*)(struct Cyc_Absyn_Stmt *)) = (struct Cyc_Hashtable_Table * (*)(int,
														  int (*)(struct Cyc_Absyn_Stmt *,
															  struct Cyc_Absyn_Stmt *),
														  int (*)(struct Cyc_Absyn_Stmt *)))_T6;
      _T5 = _T17;
    }_T8 = Cyc_Core_ptrcmp;
    { int (* _T17)(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *) = (int (*)(struct Cyc_Absyn_Stmt *,
									       struct Cyc_Absyn_Stmt *))_T8;
      _T7 = _T17;
    }{ int (* _T17)(struct Cyc_Absyn_Stmt *) = (int (*)(struct Cyc_Absyn_Stmt *))Cyc_Vcgen_hash_ptr;
      _T9 = _T17;
    }{ struct Cyc_Hashtable_Table * assn_table = _T5(57,_T7,_T9);
      struct Cyc_Vcgen_Env * env;
      env = _cycalloc(sizeof(struct Cyc_Vcgen_Env));
      _TA = env;
      _TA->assn_table = assn_table;
      _TB = env;
      _TB->succ_table = succ_table;
      _TC = env;
      _TC->assn_info = assn_info;
      _TD = env;
      _TD->fn_precond_info = fn_precond_info;
      _TE = env;
      _TE->try_assnmap = try_assnmap;
      _TF = env;
      _TF->exp_stmt = 0;
      _T10 = env;
      _T10->result = result;
      _T11 = env;
      _T11->res_assnmap = res_assnmap;
      _T12 = env;
      _T12->continue_assnmap = 0;
      _T13 = env;
      _T13->widen_paths = ! Cyc_Flags_allpaths;
      _T14 = env;
      _T14->pure_exp = 0;
      _T15 = env;
      _T15->invoke = Cyc_AssnDef_fresh_var(0,0);
      _T16 = env;
      return _T16;
    }
  }
}
static struct Cyc_Vcgen_Env * Cyc_Vcgen_bogus_env() {
  struct Cyc_Hashtable_Table * (* _T0)(int,int (*)(struct Cyc_Absyn_Stmt *,
						   struct Cyc_Absyn_Stmt *),
				       int (*)(struct Cyc_Absyn_Stmt *));
  struct Cyc_Hashtable_Table * (* _T1)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T2)(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *);
  int (* _T3)(void *,void *);
  int (* _T4)(struct Cyc_Absyn_Stmt *);
  struct Cyc_Hashtable_Table * (* _T5)(int,int (*)(struct Cyc_Absyn_Stmt *,
						   struct Cyc_Absyn_Stmt *),
				       int (*)(struct Cyc_Absyn_Stmt *));
  struct Cyc_Hashtable_Table * (* _T6)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T7)(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *);
  int (* _T8)(void *,void *);
  int (* _T9)(struct Cyc_Absyn_Stmt *);
  struct Cyc_Hashtable_Table * * _TA;
  struct Cyc_Hashtable_Table * (* _TB)(int,int (*)(struct Cyc_Absyn_Exp *,
						   struct Cyc_Absyn_Exp *),
				       int (*)(struct Cyc_Absyn_Exp *));
  struct Cyc_Hashtable_Table * (* _TC)(int,int (*)(void *,void *),int (*)(void *));
  int (* _TD)(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *);
  int (* _TE)(void *,void *);
  int (* _TF)(struct Cyc_Absyn_Exp *);
  struct Cyc_Hashtable_Table * (* _T10)(int,int (*)(struct _tuple2 *,struct _tuple2 *),
					int (*)(struct _tuple2 *));
  struct Cyc_Hashtable_Table * (* _T11)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T12)(struct _tuple2 *,struct _tuple2 *);
  int (* _T13)(void *,void *);
  int (* _T14)(struct _tuple2 *);
  struct Cyc_Vcgen_Env * _T15;
  struct Cyc_Vcgen_Env * _T16;
  struct Cyc_Vcgen_Env * _T17;
  struct Cyc_Vcgen_Env * _T18;
  struct Cyc_Vcgen_Env * _T19;
  struct Cyc_Vcgen_Env * _T1A;
  struct Cyc_Vcgen_Env * _T1B;
  struct Cyc_Vcgen_Env * _T1C;
  struct Cyc_Vcgen_Env * _T1D;
  struct Cyc_Vcgen_Env * _T1E;
  struct Cyc_Vcgen_Env * _T1F;
  struct Cyc_Vcgen_Env * _T20;
  struct Cyc_Vcgen_Env * _T21;
  _T1 = Cyc_Hashtable_create;
  { struct Cyc_Hashtable_Table * (* _T22)(int,int (*)(struct Cyc_Absyn_Stmt *,
						      struct Cyc_Absyn_Stmt *),
					  int (*)(struct Cyc_Absyn_Stmt *)) = (struct Cyc_Hashtable_Table * (*)(int,
														int (*)(struct Cyc_Absyn_Stmt *,
															struct Cyc_Absyn_Stmt *),
														int (*)(struct Cyc_Absyn_Stmt *)))_T1;
    _T0 = _T22;
  }_T3 = Cyc_Core_ptrcmp;
  { int (* _T22)(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *) = (int (*)(struct Cyc_Absyn_Stmt *,
									     struct Cyc_Absyn_Stmt *))_T3;
    _T2 = _T22;
  }{ int (* _T22)(struct Cyc_Absyn_Stmt *) = (int (*)(struct Cyc_Absyn_Stmt *))Cyc_Vcgen_hash_ptr;
    _T4 = _T22;
  }{ struct Cyc_Hashtable_Table * succ_table = _T0(1,_T2,_T4);
    _T6 = Cyc_Hashtable_create;
    { struct Cyc_Hashtable_Table * (* _T22)(int,int (*)(struct Cyc_Absyn_Stmt *,
							struct Cyc_Absyn_Stmt *),
					    int (*)(struct Cyc_Absyn_Stmt *)) = (struct Cyc_Hashtable_Table * (*)(int,
														  int (*)(struct Cyc_Absyn_Stmt *,
															  struct Cyc_Absyn_Stmt *),
														  int (*)(struct Cyc_Absyn_Stmt *)))_T6;
      _T5 = _T22;
    }_T8 = Cyc_Core_ptrcmp;
    { int (* _T22)(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *) = (int (*)(struct Cyc_Absyn_Stmt *,
									       struct Cyc_Absyn_Stmt *))_T8;
      _T7 = _T22;
    }{ int (* _T22)(struct Cyc_Absyn_Stmt *) = (int (*)(struct Cyc_Absyn_Stmt *))Cyc_Vcgen_hash_ptr;
      _T9 = _T22;
    }{ struct Cyc_Hashtable_Table * assn_table = _T5(1,_T7,_T9);
      struct Cyc_Hashtable_Table * * assn_info;
      assn_info = _cycalloc(sizeof(struct Cyc_Hashtable_Table *));
      _TA = assn_info;
      _TC = Cyc_Hashtable_create;
      { struct Cyc_Hashtable_Table * (* _T22)(int,int (*)(struct Cyc_Absyn_Exp *,
							  struct Cyc_Absyn_Exp *),
					      int (*)(struct Cyc_Absyn_Exp *)) = (struct Cyc_Hashtable_Table * (*)(int,
														   int (*)(struct Cyc_Absyn_Exp *,
															   struct Cyc_Absyn_Exp *),
														   int (*)(struct Cyc_Absyn_Exp *)))_TC;
	_TB = _T22;
      }_TE = Cyc_Core_ptrcmp;
      { int (* _T22)(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *) = (int (*)(struct Cyc_Absyn_Exp *,
									       struct Cyc_Absyn_Exp *))_TE;
	_TD = _T22;
      }{ int (* _T22)(struct Cyc_Absyn_Exp *) = (int (*)(struct Cyc_Absyn_Exp *))Cyc_Vcgen_hash_ptr;
	_TF = _T22;
      }*_TA = _TB(1,_TD,_TF);
      _T11 = Cyc_Hashtable_create;
      { struct Cyc_Hashtable_Table * (* _T22)(int,int (*)(struct _tuple2 *,
							  struct _tuple2 *),
					      int (*)(struct _tuple2 *)) = (struct Cyc_Hashtable_Table * (*)(int,
													     int (*)(struct _tuple2 *,
														     struct _tuple2 *),
													     int (*)(struct _tuple2 *)))_T11;
	_T10 = _T22;
      }_T13 = Cyc_Core_ptrcmp;
      { int (* _T22)(struct _tuple2 *,struct _tuple2 *) = (int (*)(struct _tuple2 *,
								   struct _tuple2 *))_T13;
	_T12 = _T22;
      }{ int (* _T22)(struct _tuple2 *) = (int (*)(struct _tuple2 *))Cyc_Vcgen_hash_ptr;
	_T14 = _T22;
      }{ struct Cyc_Hashtable_Table * fn_precond_info = _T10(1,_T12,_T14);
	struct Cyc_Vcgen_Env * env;
	env = _cycalloc(sizeof(struct Cyc_Vcgen_Env));
	_T15 = env;
	_T15->assn_table = assn_table;
	_T16 = env;
	_T16->succ_table = succ_table;
	_T17 = env;
	_T17->assn_info = assn_info;
	_T18 = env;
	_T18->fn_precond_info = fn_precond_info;
	_T19 = env;
	_T19->try_assnmap = 0;
	_T1A = env;
	_T1A->exp_stmt = 0;
	_T1B = env;
	_T1B->result = 0;
	_T1C = env;
	_T1C->res_assnmap = 0;
	_T1D = env;
	_T1D->continue_assnmap = 0;
	_T1E = env;
	_T1E->widen_paths = 0;
	_T1F = env;
	_T1F->pure_exp = 1;
	_T20 = env;
	_T20->invoke = Cyc_AssnDef_fresh_var(0,0);
	_T21 = env;
	return _T21;
      }
    }
  }
}
static void * Cyc_Vcgen_myaddr(struct Cyc_Vcgen_Env * env,struct Cyc_Absyn_Vardecl * vd) {
  struct Cyc_Absyn_Vardecl * _T0;
  struct Cyc_Vcgen_Env * _T1;
  void * _T2;
  void * _T3;
  _T0 = vd;
  _T1 = env;
  _T2 = _T1->invoke;
  _T3 = Cyc_AssnDef_addr(_T0,_T2);
  return _T3;
}
static void * Cyc_Vcgen_myalloc(struct Cyc_Vcgen_Env * env,struct Cyc_Absyn_Exp * e,
				void * nelts,void * tp) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Vcgen_Env * _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  _T0 = e;
  _T1 = nelts;
  _T2 = env;
  _T3 = _T2->invoke;
  _T4 = tp;
  _T5 = Cyc_AssnDef_alloc(_T0,_T1,_T3,_T4);
  return _T5;
}
static struct Cyc_AssnDef_AssnMap Cyc_Vcgen_may_widen(struct Cyc_Vcgen_Env * env,
						      struct Cyc_AssnDef_AssnMap am) {
  struct Cyc_Vcgen_Env * _T0;
  long _T1;
  struct Cyc_AssnDef_AssnMap _T2;
  struct Cyc_AssnDef_AssnMap _T3;
  _T0 = env;
  _T1 = _T0->widen_paths;
  if (! _T1) { goto _TL15;
  }
  _T2 = Cyc_AssnDef_widen_assnmap(am);
  return _T2;
  _TL15: _T3 = am;
  return _T3;
}
static struct Cyc_AssnDef_AssnMap Cyc_Vcgen_lookup_stmt_assnmap(struct Cyc_Vcgen_Env * env,
								struct Cyc_Absyn_Stmt * s) {
  struct Cyc_AssnDef_AssnMap * * (* _T0)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *);
  void * * (* _T1)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Vcgen_Env * _T2;
  struct Cyc_Hashtable_Table * _T3;
  struct Cyc_Absyn_Stmt * _T4;
  struct Cyc_AssnDef_AssnMap * * _T5;
  struct Cyc_AssnDef_AssnMap * _T6;
  struct Cyc_AssnDef_AssnMap _T7;
  struct Cyc_AssnDef_AssnMap _T8;
  _T1 = Cyc_Hashtable_lookup_opt;
  { struct Cyc_AssnDef_AssnMap * * (* _T9)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *) = (struct Cyc_AssnDef_AssnMap * * (*)(struct Cyc_Hashtable_Table *,
																       struct Cyc_Absyn_Stmt *))_T1;
    _T0 = _T9;
  }_T2 = env;
  _T3 = _T2->assn_table;
  _T4 = s;
  { struct Cyc_AssnDef_AssnMap * * preconopt = _T0(_T3,_T4);
    if (preconopt == 0) { goto _TL17;
    }
    _T5 = preconopt;
    _T6 = *_T5;
    _T7 = *_T6;
    return _T7;
    _TL17: _T8 = Cyc_AssnDef_false_assnmap();
    return _T8;
  }
}
static void Cyc_Vcgen_update_stmt_assnmap(struct Cyc_Vcgen_Env * env,struct Cyc_Absyn_Stmt * s,
					  struct Cyc_AssnDef_AssnMap newam) {
  struct Cyc_AssnDef_AssnMap * * (* _T0)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *);
  void * * (* _T1)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Vcgen_Env * _T2;
  struct Cyc_Hashtable_Table * _T3;
  struct Cyc_Absyn_Stmt * _T4;
  struct Cyc_AssnDef_AssnMap * * _T5;
  struct Cyc_AssnDef_AssnMap * _T6;
  struct Cyc_Vcgen_Env * _T7;
  struct Cyc_AssnDef_AssnMap * * _T8;
  struct Cyc_AssnDef_AssnMap * _T9;
  struct Cyc_AssnDef_AssnMap _TA;
  struct Cyc_AssnDef_AssnMap _TB;
  struct Cyc_AssnDef_AssnMap _TC;
  void (* _TD)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *,struct Cyc_AssnDef_AssnMap *);
  void (* _TE)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Vcgen_Env * _TF;
  struct Cyc_Hashtable_Table * _T10;
  struct Cyc_Absyn_Stmt * _T11;
  struct Cyc_AssnDef_AssnMap * _T12;
  _T1 = Cyc_Hashtable_lookup_opt;
  { struct Cyc_AssnDef_AssnMap * * (* _T13)(struct Cyc_Hashtable_Table *,
					    struct Cyc_Absyn_Stmt *) = (struct Cyc_AssnDef_AssnMap * * (*)(struct Cyc_Hashtable_Table *,
													   struct Cyc_Absyn_Stmt *))_T1;
    _T0 = _T13;
  }_T2 = env;
  _T3 = _T2->assn_table;
  _T4 = s;
  { struct Cyc_AssnDef_AssnMap * * preconopt = _T0(_T3,_T4);
    if (preconopt == 0) { goto _TL19;
    }
    _T5 = preconopt;
    _T6 = *_T5;
    _T7 = env;
    _T8 = preconopt;
    _T9 = *_T8;
    _TA = *_T9;
    _TB = newam;
    _TC = Cyc_AssnDef_or_assnmap_assnmap(_TA,_TB);
    *_T6 = Cyc_Vcgen_may_widen(_T7,_TC);
    goto _TL1A;
    _TL19: _TE = Cyc_Hashtable_insert;
    { void (* _T13)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *,
		    struct Cyc_AssnDef_AssnMap *) = (void (*)(struct Cyc_Hashtable_Table *,
							      struct Cyc_Absyn_Stmt *,
							      struct Cyc_AssnDef_AssnMap *))_TE;
      _TD = _T13;
    }_TF = env;
    _T10 = _TF->assn_table;
    _T11 = s;
    { struct Cyc_AssnDef_AssnMap * _T13 = _cycalloc(sizeof(struct Cyc_AssnDef_AssnMap));
      *_T13 = newam;
      _T12 = (struct Cyc_AssnDef_AssnMap *)_T13;
    }_TD(_T10,_T11,_T12);
    _TL1A: ;
  }
}
static void Cyc_Vcgen_replace_stmt_assnmap(struct Cyc_Vcgen_Env * env,struct Cyc_Absyn_Stmt * s,
					   struct Cyc_AssnDef_AssnMap newam) {
  void (* _T0)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *,struct Cyc_AssnDef_AssnMap *);
  void (* _T1)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Vcgen_Env * _T2;
  struct Cyc_Hashtable_Table * _T3;
  struct Cyc_Absyn_Stmt * _T4;
  struct Cyc_AssnDef_AssnMap * _T5;
  _T1 = Cyc_Hashtable_insert;
  { void (* _T6)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *,struct Cyc_AssnDef_AssnMap *) = (void (*)(struct Cyc_Hashtable_Table *,
														struct Cyc_Absyn_Stmt *,
														struct Cyc_AssnDef_AssnMap *))_T1;
    _T0 = _T6;
  }_T2 = env;
  _T3 = _T2->assn_table;
  _T4 = s;
  { struct Cyc_AssnDef_AssnMap * _T6 = _cycalloc(sizeof(struct Cyc_AssnDef_AssnMap));
    *_T6 = newam;
    _T5 = (struct Cyc_AssnDef_AssnMap *)_T6;
  }_T0(_T3,_T4,_T5);
}
static struct Cyc_AssnDef_AssnMap Cyc_Vcgen_vcgen_stmt(struct Cyc_Vcgen_Env *,
						       struct Cyc_Absyn_Stmt *,
						       struct Cyc_AssnDef_AssnMap);
static struct _tuple14 Cyc_Vcgen_vcgen_rexp(struct Cyc_Vcgen_Env *,struct Cyc_Absyn_Exp *,
					    struct Cyc_AssnDef_AssnMap);
 struct _tuple19 {
  struct Cyc_List_List * f0;
  struct Cyc_AssnDef_AssnMap f1;
};
static struct _tuple19 Cyc_Vcgen_vcgen_rexps(struct Cyc_Vcgen_Env *,struct Cyc_List_List *,
					     struct Cyc_AssnDef_AssnMap);
static struct _tuple14 Cyc_Vcgen_vcgen_lexp(struct Cyc_Vcgen_Env *,struct Cyc_Absyn_Exp *,
					    struct Cyc_AssnDef_AssnMap);
 struct _tuple20 {
  struct Cyc_AssnDef_AssnMap f0;
  struct Cyc_AssnDef_AssnMap f1;
};
static struct _tuple20 Cyc_Vcgen_vcgen_test(struct Cyc_Vcgen_Env *,struct Cyc_Absyn_Exp *,
					    struct Cyc_AssnDef_AssnMap);
static struct _tuple20 Cyc_Vcgen_vcgen_pat(struct Cyc_Vcgen_Env *,struct Cyc_Absyn_Pat *,
					   void *,void *,struct Cyc_AssnDef_AssnMap);
static struct Cyc_AssnDef_AssnMap Cyc_Vcgen_vcgen_switch(struct Cyc_Vcgen_Env *,
							 void *,struct Cyc_List_List *,
							 struct Cyc_AssnDef_AssnMap);
static long Cyc_Vcgen_implies(void * a1,void * a2) {
  int _T0;
  long _T1;
  _T1 = Cyc_AssnDef_simple_prove(a1,a2);
  if (! _T1) { goto _TL1B;
  }
  _T0 = 1;
  goto _TL1C;
  _TL1B: _T0 = Cyc_AssnDef_better_prove(a1,a2);
  _TL1C: return _T0;
}
static struct Cyc_Absyn_Vardecl * Cyc_Vcgen_bind2vardecl(void * b) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Absyn_Vardecl * _T4;
  void * _T5;
  struct Cyc_Absyn_Fndecl * _T6;
  struct Cyc_Absyn_Vardecl * _T7;
  int (* _T8)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T9)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  void * _TC;
  struct Cyc_Absyn_Vardecl * _TD;
  void * _TE;
  struct Cyc_Absyn_Vardecl * _TF;
  void * _T10;
  struct Cyc_Absyn_Vardecl * _T11;
  struct Cyc_Absyn_Fndecl * _T12;
  struct Cyc_Absyn_Vardecl * _T13;
  _T0 = b;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 1: 
    _T3 = b;
    { struct Cyc_Absyn_Global_b_Absyn_Binding_struct * _T14 = (struct Cyc_Absyn_Global_b_Absyn_Binding_struct *)_T3;
      _T13 = _T14->f1;
    }{ struct Cyc_Absyn_Vardecl * vd = _T13;
      _T4 = vd;
      return _T4;
    }
  case 2: 
    _T5 = b;
    { struct Cyc_Absyn_Funname_b_Absyn_Binding_struct * _T14 = (struct Cyc_Absyn_Funname_b_Absyn_Binding_struct *)_T5;
      _T12 = _T14->f1;
    }{ struct Cyc_Absyn_Fndecl * fd = _T12;
      _T6 = fd;
      _T7 = _T6->fn_vardecl;
      return _T7;
    }
  case 0: 
    _T9 = Cyc_Warn_impos;
    { int (* _T14)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							       struct _fat_ptr))_T9;
      _T8 = _T14;
    }_TA = _tag_fat("vcgen bind2vardecl",sizeof(char),19U);
    _TB = _tag_fat(0U,sizeof(void *),0);
    _T8(_TA,_TB);
  case 3: 
    _TC = b;
    { struct Cyc_Absyn_Param_b_Absyn_Binding_struct * _T14 = (struct Cyc_Absyn_Param_b_Absyn_Binding_struct *)_TC;
      _T13 = _T14->f1;
    }{ struct Cyc_Absyn_Vardecl * vd = _T13;
      _TD = vd;
      return _TD;
    }
  case 4: 
    _TE = b;
    { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T14 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_TE;
      _T13 = _T14->f1;
    }{ struct Cyc_Absyn_Vardecl * vd = _T13;
      _TF = vd;
      return _TF;
    }
  default: 
    _T10 = b;
    { struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T14 = (struct Cyc_Absyn_Pat_b_Absyn_Binding_struct *)_T10;
      _T13 = _T14->f1;
    }{ struct Cyc_Absyn_Vardecl * vd = _T13;
      _T11 = vd;
      return _T11;
    }
  }
  ;
}
static long Cyc_Vcgen_is_unsigned_int_exp(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5;
  void * _T6;
  int * _T7;
  int _T8;
  void * _T9;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA;
  void * _TB;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _TC;
  enum Cyc_Absyn_Sign _TD;
  void * _TE;
  void * _TF;
  enum Cyc_Absyn_Size_of _T10;
  int _T11;
  enum Cyc_Absyn_Size_of _T12;
  int _T13;
  _T0 = e;
  { void * t = _T0->topt;
    if (t != 0) { goto _TL1E;
    }
    return 0;
    _TL1E: { enum Cyc_Absyn_Size_of _T14;
      if (t == 0) { goto _TL20;
      }
      _T1 = t;
      _T2 = (int *)_T1;
      _T3 = *_T2;
      if (_T3 != 0) { goto _TL22;
      }
      _T4 = t;
      _T5 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T4;
      _T6 = _T5->f1;
      _T7 = (int *)_T6;
      _T8 = *_T7;
      if (_T8 != 1) { goto _TL24;
      }
      _T9 = t;
      _TA = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T9;
      _TB = _TA->f1;
      _TC = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_TB;
      _TD = _TC->f1;
      if (_TD != Cyc_Absyn_Unsigned) { goto _TL26;
      }
      _TE = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T15 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TE;
	_TF = _T15->f1;
	{ struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T16 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_TF;
	  _T14 = _T16->f2;
	}
      }{ enum Cyc_Absyn_Size_of sz = _T14;
	_T10 = sz;
	_T11 = (int)_T10;
	if (_T11 == 3) { goto _TL2A;
	}else { goto _TL2B;
	}
	_TL2B: _T12 = sz;
	_T13 = (int)_T12;
	if (_T13 == 2) { goto _TL2A;
	}else { goto _TL28;
	}
	_TL2A: return 1;
	_TL28: return 0;
      }_TL26: goto _LL3;
      _TL24: goto _LL3;
      _TL22: goto _LL3;
      _TL20: _LL3: return 0;
      ;
    }
  }
}
static struct _tuple14 Cyc_Vcgen_deref_lterm(struct Cyc_Vcgen_Env * env,void * lt,
					     struct Cyc_AssnDef_AssnMap am) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Absyn_Vardecl * _T4;
  long _T5;
  struct _tuple14 _T6;
  struct _tuple14 _T7;
  struct Cyc_Absyn_Vardecl * _T8;
  _T0 = lt;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 11) { goto _TL2C;
  }
  _T3 = lt;
  { struct Cyc_AssnDef_Addr_AssnDef_Term_struct * _T9 = (struct Cyc_AssnDef_Addr_AssnDef_Term_struct *)_T3;
    _T8 = _T9->f1;
  }{ struct Cyc_Absyn_Vardecl * vd = _T8;
    _T4 = vd;
    _T5 = _T4->escapes;
    if (_T5) { goto _TL2E;
    }else { goto _TL30;
    }
    _TL30: _T6 = Cyc_AssnDef_lookup_var_map(vd,am);
    return _T6;
    _TL2E: goto _LL4;
  }_TL2C: _LL4: { struct _tuple14 _T9 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
								   am);
    struct Cyc_AssnDef_AssnMap _TA;
    void * _TB;
    _TB = _T9.f0;
    _TA = _T9.f1;
    { void * mem = _TB;
      struct Cyc_AssnDef_AssnMap am1 = _TA;
      { struct _tuple14 _TC;
	_TC.f0 = Cyc_AssnDef_select(mem,lt,0);
	_TC.f1 = am1;
	_T7 = _TC;
      }return _T7;
    }
  };
}
static struct Cyc_AssnDef_AssnMap Cyc_Vcgen_do_assign(struct Cyc_Vcgen_Env * env,
						      struct Cyc_AssnDef_AssnMap am,
						      void * lt,void * t) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Absyn_Vardecl * _T4;
  long _T5;
  struct Cyc_Absyn_Vardecl * _T6;
  void * _T7;
  struct Cyc_AssnDef_AssnMap _T8;
  struct Cyc_AssnDef_AssnMap _T9;
  struct Cyc_Absyn_Vardecl * _TA;
  void * _TB;
  struct Cyc_AssnDef_AssnMap _TC;
  struct Cyc_AssnDef_AssnMap _TD;
  struct _tuple13 _TE = Cyc_AssnDef_split_addr(lt);
  struct Cyc_List_List * _TF;
  void * _T10;
  _T10 = _TE.f0;
  _TF = _TE.f1;
  { void * root = _T10;
    struct Cyc_List_List * fields = _TF;
    struct Cyc_Absyn_Vardecl * _T11;
    _T0 = root;
    _T1 = (int *)_T0;
    _T2 = *_T1;
    if (_T2 != 11) { goto _TL31;
    }
    _T3 = root;
    { struct Cyc_AssnDef_Addr_AssnDef_Term_struct * _T12 = (struct Cyc_AssnDef_Addr_AssnDef_Term_struct *)_T3;
      _T11 = _T12->f1;
    }_T4 = (struct Cyc_Absyn_Vardecl *)_T11;
    _T5 = _T4->escapes;
    if (_T5) { goto _TL33;
    }else { goto _TL35;
    }
    _TL35: { struct Cyc_Absyn_Vardecl * vd = _T11;
      struct _tuple14 _T12 = Cyc_AssnDef_lookup_var_map(vd,am);
      struct Cyc_AssnDef_AssnMap _T13;
      void * _T14;
      _T14 = _T12.f0;
      _T13 = _T12.f1;
      { void * oldv = _T14;
	struct Cyc_AssnDef_AssnMap am1 = _T13;
	_T6 = vd;
	_T7 = Cyc_AssnDef_apply_aggr_update(oldv,fields,t);
	_T8 = am1;
	_T9 = Cyc_AssnDef_update_var_map(_T6,_T7,_T8);
	return _T9;
      }
    }_TL33: goto _LL6;
    _TL31: _LL6: { struct _tuple14 _T12 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
								     am);
      struct Cyc_AssnDef_AssnMap _T13;
      void * _T14;
      _T14 = _T12.f0;
      _T13 = _T12.f1;
      { void * mem = _T14;
	struct Cyc_AssnDef_AssnMap am1 = _T13;
	_TA = Cyc_AssnDef_memory;
	_TB = Cyc_AssnDef_update(mem,lt,t);
	_TC = am1;
	_TD = Cyc_AssnDef_update_var_map(_TA,_TB,_TC);
	return _TD;
      }
    };
  }
}
static void Cyc_Vcgen_update_try_assnmap(struct Cyc_Vcgen_Env * env,struct Cyc_AssnDef_AssnMap am,
					 void * exn_value) {
  struct Cyc_Vcgen_Env * _T0;
  struct Cyc_AssnDef_AssnMap * _T1;
  struct Cyc_Vcgen_Env * _T2;
  struct Cyc_AssnDef_AssnMap _T3;
  struct Cyc_Vcgen_Env * _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  void * _T6;
  void * _T7;
  struct Cyc_Vcgen_Env * _T8;
  struct Cyc_Vcgen_Env * _T9;
  struct Cyc_AssnDef_AssnMap * _TA;
  struct Cyc_AssnDef_AssnMap * _TB;
  struct Cyc_AssnDef_AssnMap _TC;
  struct Cyc_AssnDef_AssnMap _TD;
  struct Cyc_AssnDef_AssnMap _TE;
  struct Cyc_Vcgen_Env * _TF;
  struct Cyc_AssnDef_AssnMap * _T10;
  struct Cyc_AssnDef_AssnMap * _T11;
  _T0 = env;
  _T1 = _T0->try_assnmap;
  if (_T1 != 0) { goto _TL36;
  }
  return;
  _TL36: _T2 = env;
  _T3 = am;
  _T4 = env;
  _T5 = Cyc_AssnDef_exception_vardecl();
  _T6 = Cyc_Vcgen_myaddr(_T4,_T5);
  _T7 = exn_value;
  am = Cyc_Vcgen_do_assign(_T2,_T3,_T6,_T7);
  _T8 = env;
  _T9 = env;
  _TA = _T9->try_assnmap;
  _TB = _check_null(_TA);
  _TC = *_TB;
  _TD = am;
  _TE = Cyc_AssnDef_or_assnmap_assnmap(_TC,_TD);
  am = Cyc_Vcgen_may_widen(_T8,_TE);
  _TF = env;
  _T10 = _TF->try_assnmap;
  _T11 = _check_null(_T10);
  *_T11 = am;
}
static struct Cyc_AssnDef_AssnMap Cyc_Vcgen_vcgen_local_decl(struct Cyc_Vcgen_Env * env,
							     struct Cyc_Absyn_Decl * d,
							     struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Vcgen_Env * _T3;
  struct Cyc_AssnDef_AssnMap _T4;
  void * _T5;
  struct Cyc_Absyn_Vardecl * _T6;
  struct Cyc_Absyn_Vardecl * _T7;
  void * _T8;
  void * _T9;
  struct Cyc_Absyn_Vardecl * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_Vcgen_Env * _TC;
  struct Cyc_Absyn_Vardecl * _TD;
  struct Cyc_Absyn_Exp * _TE;
  struct Cyc_AssnDef_AssnMap _TF;
  struct Cyc_Vcgen_Env * _T10;
  struct Cyc_AssnDef_AssnMap _T11;
  void * _T12;
  void * _T13;
  struct Cyc_AssnDef_AssnMap _T14;
  struct Cyc_AssnDef_AssnMap _T15;
  void * _T16;
  struct Cyc_AssnDef_AssnMap _T17;
  void * _T18;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T19;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T1A;
  void * _T1B;
  struct Cyc_Vcgen_Env * _T1C;
  struct Cyc_AssnDef_AssnMap _T1D;
  void * _T1E;
  void * _T1F;
  struct Cyc_AssnDef_AssnMap _T20;
  struct Cyc_AssnDef_AssnMap _T21;
  struct Cyc_Vcgen_Env * _T22;
  struct Cyc_AssnDef_AssnMap _T23;
  void * _T24;
  void * _T25;
  struct Cyc_AssnDef_AssnMap _T26;
  struct Cyc_AssnDef_AssnMap _T27;
  struct Cyc_AssnDef_AssnMap _T28;
  _T0 = d;
  { void * _T29 = _T0->r;
    struct Cyc_Absyn_Vardecl * _T2A;
    struct Cyc_List_List * _T2B;
    struct Cyc_Absyn_Exp * _T2C;
    struct Cyc_Absyn_Pat * _T2D;
    void * _T2E;
    _T1 = (int *)_T29;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T2F = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T29;
	_T2E = _T2F->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T2E;
	_T3 = env;
	_T4 = amin;
	_T5 = Cyc_Vcgen_myaddr(env,vd);
	_T6 = vd;
	_T7 = vd;
	_T8 = _T7->type;
	_T9 = Cyc_AssnDef_fresh_var(_T6,_T8);
	amin = Cyc_Vcgen_do_assign(_T3,_T4,_T5,_T9);
	_TA = vd;
	_TB = _TA->initializer;
	if (_TB == 0) { goto _TL39;
	}
	_TC = env;
	_TD = vd;
	_TE = _TD->initializer;
	_TF = amin;
	{ struct _tuple14 _T2F = Cyc_Vcgen_vcgen_rexp(_TC,_TE,_TF);
	  struct Cyc_AssnDef_AssnMap _T30;
	  void * _T31;
	  _T31 = _T2F.f0;
	  _T30 = _T2F.f1;
	  { void * t = _T31;
	    struct Cyc_AssnDef_AssnMap am = _T30;
	    _T10 = env;
	    _T11 = am;
	    _T12 = Cyc_Vcgen_myaddr(env,vd);
	    _T13 = t;
	    am = Cyc_Vcgen_do_assign(_T10,_T11,_T12,_T13);
	    _T14 = am;
	    return _T14;
	  }
	}_TL39: _T15 = amin;
	return _T15;
      }
    case 2: 
      { struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T2F = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_T29;
	_T2D = _T2F->f1;
	_T2C = _T2F->f3;
	_T16 = _T2F->f4;
	_T2E = (void *)_T16;
      }{ struct Cyc_Absyn_Pat * p = _T2D;
	struct Cyc_Absyn_Exp * e = _T2C;
	void * dtree = _T2E;
	struct _tuple14 _T2F = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	struct Cyc_AssnDef_AssnMap _T30;
	void * _T31;
	_T31 = _T2F.f0;
	_T30 = _T2F.f1;
	{ void * v = _T31;
	  struct Cyc_AssnDef_AssnMap am = _T30;
	  struct _tuple20 _T32 = Cyc_Vcgen_vcgen_pat(env,p,0,v,am);
	  struct Cyc_AssnDef_AssnMap _T33;
	  struct Cyc_AssnDef_AssnMap _T34;
	  _T34 = _T32.f0;
	  _T33 = _T32.f1;
	  { struct Cyc_AssnDef_AssnMap amt = _T34;
	    struct Cyc_AssnDef_AssnMap amf = _T33;
	    _T17 = amf;
	    _T18 = _T17.assn;
	    _T19 = &Cyc_AssnDef_false_assn;
	    _T1A = (struct Cyc_AssnDef_False_AssnDef_Assn_struct *)_T19;
	    _T1B = (void *)_T1A;
	    if (_T18 == _T1B) { goto _TL3B;
	    }
	    _T1C = env;
	    _T1D = amf;
	    _T1E = Cyc_Absyn_exn_type();
	    _T1F = Cyc_AssnDef_fresh_var(0,_T1E);
	    Cyc_Vcgen_update_try_assnmap(_T1C,_T1D,_T1F);
	    goto _TL3C;
	    _TL3B: _TL3C: _T20 = amt;
	    return _T20;
	  }
	}
      }
    case 3: 
      { struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct * _T2F = (struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct *)_T29;
	_T2B = _T2F->f1;
      }{ struct Cyc_List_List * vds = _T2B;
	_T21 = amin;
	return _T21;
      }
    case 4: 
      { struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct * _T2F = (struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct *)_T29;
	_T2A = _T2F->f2;
	_T2C = _T2F->f3;
      }{ struct Cyc_Absyn_Vardecl * vd = _T2A;
	struct Cyc_Absyn_Exp * eopt = _T2C;
	if (eopt == 0) { goto _TL3D;
	}
	{ struct _tuple14 _T2F = Cyc_Vcgen_vcgen_rexp(env,eopt,amin);
	  struct Cyc_AssnDef_AssnMap _T30;
	  void * _T31;
	  _T31 = _T2F.f0;
	  _T30 = _T2F.f1;
	  { void * t = _T31;
	    struct Cyc_AssnDef_AssnMap am = _T30;
	    _T22 = env;
	    _T23 = am;
	    _T24 = Cyc_Vcgen_myaddr(env,vd);
	    _T25 = t;
	    am = Cyc_Vcgen_do_assign(_T22,_T23,_T24,_T25);
	    _T26 = am;
	    return _T26;
	  }
	}_TL3D: _T27 = amin;
	return _T27;
      }
    default: 
      _T28 = amin;
      return _T28;
    }
    ;
  }
}
 struct _tuple21 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
  struct Cyc_AssnDef_ExistAssnFn * f2;
  struct Cyc_AssnDef_ExistAssnFn * f3;
  struct Cyc_AssnDef_ExistAssnFn * f4;
  struct Cyc_AssnDef_ExistAssnFn * f5;
  struct Cyc_Absyn_Vardecl * f6;
};
static struct _tuple21 Cyc_Vcgen_get_requires_and_ensures_info(struct Cyc_Absyn_FnInfo * fi) {
  struct _tuple21 _T0;
  struct Cyc_Absyn_FnInfo * _T1;
  struct Cyc_Absyn_FnInfo * _T2;
  struct Cyc_Absyn_FnInfo * _T3;
  struct Cyc_Absyn_FnInfo * _T4;
  struct Cyc_Absyn_FnInfo * _T5;
  struct Cyc_Absyn_FnInfo * _T6;
  struct Cyc_Absyn_FnInfo * _T7;
  { struct _tuple21 _T8;
    _T1 = fi;
    _T8.f0 = _T1->args;
    _T2 = fi;
    _T8.f1 = _T2->arg_vardecls;
    _T3 = fi;
    _T8.f2 = _T3->checks_assn;
    _T4 = fi;
    _T8.f3 = _T4->requires_assn;
    _T5 = fi;
    _T8.f4 = _T5->ensures_assn;
    _T6 = fi;
    _T8.f5 = _T6->throws_assn;
    _T7 = fi;
    _T8.f6 = _T7->return_value;
    _T0 = _T8;
  }return _T0;
}
static struct _tuple21 Cyc_Vcgen_get_requires_and_ensures(void * topt) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  void * _T4;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T5;
  struct Cyc_Absyn_FnInfo * _T6;
  struct _tuple21 _T7;
  struct _tuple21 _T8;
  if (topt == 0) { goto _TL3F;
  }
  { void * t = Cyc_Tcutil_pointer_elt_type(topt);
    void * _T9;
    _T0 = t;
    _T1 = (int *)_T0;
    _T2 = *_T1;
    if (_T2 != 6) { goto _TL41;
    }
    _T3 = t;
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _TA = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3;
      _T4 = t;
      _T5 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T4;
      _T6 = &_T5->f1;
      _T9 = (struct Cyc_Absyn_FnInfo *)_T6;
    }{ struct Cyc_Absyn_FnInfo * fi = (struct Cyc_Absyn_FnInfo *)_T9;
      _T7 = Cyc_Vcgen_get_requires_and_ensures_info(fi);
      return _T7;
    }_TL41: goto _LL0;
    _LL0: ;
  }goto _TL40;
  _TL3F: _TL40: { struct _tuple21 _T9;
    _T9.f0 = 0;
    _T9.f1 = 0;
    _T9.f2 = 0;
    _T9.f3 = 0;
    _T9.f4 = 0;
    _T9.f5 = 0;
    _T9.f6 = 0;
    _T8 = _T9;
  }return _T8;
}
static unsigned int Cyc_Vcgen_datatype_constructor_index(struct Cyc_Absyn_Datatypedecl * dd,
							 struct Cyc_Absyn_Datatypefield * df) {
  struct Cyc_Absyn_Datatypedecl * _T0;
  struct Cyc_Core_Opt * _T1;
  struct Cyc_Core_Opt * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_Absyn_Datatypefield * _T6;
  struct Cyc_Absyn_Datatypefield * _T7;
  unsigned int _T8;
  struct Cyc_Absyn_Datatypefield * _T9;
  struct _tuple2 * _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  struct Cyc_Absyn_Datatypefield * _TD;
  struct _tuple2 * _TE;
  int _TF;
  unsigned int _T10;
  struct Cyc_List_List * _T11;
  int (* _T12)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T13)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  unsigned int i = 0U;
  _T0 = dd;
  _T1 = _T0->fields;
  _T2 = _check_null(_T1);
  _T3 = _T2->v;
  { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T3;
    _TL46: if (fs != 0) { goto _TL44;
    }else { goto _TL45;
    }
    _TL44: _T4 = fs;
    _T5 = _T4->hd;
    _T6 = (struct Cyc_Absyn_Datatypefield *)_T5;
    _T7 = df;
    if (_T6 != _T7) { goto _TL47;
    }
    _T8 = i;
    return _T8;
    _TL47: _T9 = df;
    _TA = _T9->name;
    _TB = fs;
    _TC = _TB->hd;
    _TD = (struct Cyc_Absyn_Datatypefield *)_TC;
    _TE = _TD->name;
    _TF = Cyc_Absyn_qvar_cmp(_TA,_TE);
    if (_TF != 0) { goto _TL49;
    }
    _T10 = i;
    return _T10;
    _TL49: _T11 = fs;
    fs = _T11->tl;
    i = i + 1;
    goto _TL46;
    _TL45: _T13 = Cyc_Warn_impos;
    { int (* _T16)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							       struct _fat_ptr))_T13;
      _T12 = _T16;
    }_T14 = _tag_fat("vcgen: datatype_constructor_index",sizeof(char),34U);
    _T15 = _tag_fat(0U,sizeof(void *),0);
    _T12(_T14,_T15);
  }
}
 struct _tuple22 {
  long f0;
  enum Cyc_Absyn_AggrKind f1;
  struct Cyc_List_List * f2;
};
static struct _tuple22 Cyc_Vcgen_get_aggr_info(void * t) {
  int * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_Vardecl * _T2;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  struct _tuple22 _T8;
  struct Cyc_Absyn_Aggrdecl * _T9;
  struct Cyc_Absyn_AggrdeclImpl * _TA;
  struct Cyc_Absyn_AggrdeclImpl * _TB;
  struct Cyc_Absyn_Aggrdecl * _TC;
  struct Cyc_Absyn_Aggrdecl * _TD;
  struct Cyc_Absyn_AggrdeclImpl * _TE;
  struct _tuple22 _TF;
  int (* _T10)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T11)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  loop: { void * _T14 = Cyc_Absyn_compress(t);
    struct Cyc_List_List * _T15;
    long _T16;
    enum Cyc_Absyn_AggrKind _T17;
    union Cyc_Absyn_AggrInfo _T18;
    struct Cyc_Absyn_Vardecl * _T19;
    _T0 = (int *)_T14;
    _T1 = *_T0;
    switch (_T1) {
    case 12: 
      { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T1A = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T14;
	_T19 = _T1A->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T19;
	_T2 = vd;
	t = _T2->type;
	goto loop;
      }
    case 0: 
      _T3 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T14;
      _T4 = _T3->f1;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      if (_T6 != 24) { goto _TL4C;
      }
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1A = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T14;
	_T7 = _T1A->f1;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T1B = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T7;
	  _T18 = _T1B->f1;
	}
      }{ union Cyc_Absyn_AggrInfo info = _T18;
	struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
	{ struct _tuple22 _T1A;
	  _T9 = ad;
	  _TA = _T9->impl;
	  _TB = _check_null(_TA);
	  _T1A.f0 = _TB->tagged;
	  _TC = ad;
	  _T1A.f1 = _TC->kind;
	  _TD = ad;
	  _TE = _TD->impl;
	  _T1A.f2 = _TE->fields;
	  _T8 = _T1A;
	}return _T8;
      }_TL4C: goto _LL7;
    case 7: 
      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T1A = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T14;
	_T17 = _T1A->f1;
	_T16 = _T1A->f2;
	_T15 = _T1A->f3;
      }{ enum Cyc_Absyn_AggrKind ak = _T17;
	long is_tuple = _T16;
	struct Cyc_List_List * fs = _T15;
	{ struct _tuple22 _T1A;
	  _T1A.f0 = 0;
	  _T1A.f1 = ak;
	  _T1A.f2 = fs;
	  _TF = _T1A;
	}return _TF;
      }
    default: 
      _LL7: _T11 = Cyc_Warn_impos;
      { int (* _T1A)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_T11;
	_T10 = _T1A;
      }_T12 = _tag_fat("vcgen: bad type in get_aggr_info",sizeof(char),33U);
      _T13 = _tag_fat(0U,sizeof(void *),0);
      _T10(_T12,_T13);
    }
    ;
  }
}
 struct _tuple23 {
  int f0;
  void * f1;
};
static int Cyc_Vcgen_cmp_index(struct _tuple23 * x,struct _tuple23 * y) {
  struct _tuple23 * _T0;
  int _T1;
  struct _tuple23 * _T2;
  int _T3;
  int _T4;
  _T0 = x;
  _T1 = _T0->f0;
  _T2 = y;
  _T3 = _T2->f0;
  _T4 = _T1 - _T3;
  return _T4;
}
struct Cyc_Vcgen_ExpChecks * Cyc_Vcgen_exp2ctxt_checks(struct Cyc_Hashtable_Table * * assn_info,
						       struct Cyc_Absyn_Exp * e) {
  struct Cyc_Vcgen_ExpChecks * * (* _T0)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *);
  void * * (* _T1)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Hashtable_Table * * _T2;
  struct Cyc_Hashtable_Table * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Vcgen_ExpChecks * _T5;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T6;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T7;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T8;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T9;
  struct Cyc_Vcgen_ExpChecks * _TA;
  struct Cyc_Vcgen_ExpChecks * * _TB;
  struct Cyc_Vcgen_ExpChecks * _TC;
  _T1 = Cyc_Hashtable_lookup_opt;
  { struct Cyc_Vcgen_ExpChecks * * (* _TD)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *) = (struct Cyc_Vcgen_ExpChecks * * (*)(struct Cyc_Hashtable_Table *,
																      struct Cyc_Absyn_Exp *))_T1;
    _T0 = _TD;
  }_T2 = _check_null(assn_info);
  _T3 = *_T2;
  _T4 = e;
  { struct Cyc_Vcgen_ExpChecks * * result = _T0(_T3,_T4);
    if (result != 0) { goto _TL4E;
    }
    { static struct Cyc_Vcgen_ExpChecks * b = 0;
      if (b != 0) { goto _TL50;
      }
      { struct Cyc_Vcgen_ExpChecks * _TD = _cycalloc(sizeof(struct Cyc_Vcgen_ExpChecks));
	_TD->ctxt = Cyc_AssnDef_true_assnmap();
	_T6 = &Cyc_AssnDef_false_assn;
	_T7 = (struct Cyc_AssnDef_False_AssnDef_Assn_struct *)_T6;
	_TD->bounds_check = (void *)_T7;
	_T8 = &Cyc_AssnDef_false_assn;
	_T9 = (struct Cyc_AssnDef_False_AssnDef_Assn_struct *)_T8;
	_TD->null_check = (void *)_T9;
	_T5 = (struct Cyc_Vcgen_ExpChecks *)_TD;
      }b = _T5;
      goto _TL51;
      _TL50: _TL51: _TA = b;
      return _TA;
    }_TL4E: _TB = result;
    _TC = *_TB;
    return _TC;
  }
}
static void Cyc_Vcgen_insert_exp_checks(struct Cyc_Hashtable_Table * * assn_info,
					struct Cyc_Absyn_Exp * e,struct Cyc_Vcgen_ExpChecks * exp_check) {
  void (* _T0)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *,struct Cyc_Vcgen_ExpChecks *);
  void (* _T1)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Hashtable_Table * * _T2;
  struct Cyc_Hashtable_Table * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Vcgen_ExpChecks * _T5;
  _T1 = Cyc_Hashtable_insert;
  { void (* _T6)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *,struct Cyc_Vcgen_ExpChecks *) = (void (*)(struct Cyc_Hashtable_Table *,
													       struct Cyc_Absyn_Exp *,
													       struct Cyc_Vcgen_ExpChecks *))_T1;
    _T0 = _T6;
  }_T2 = _check_null(assn_info);
  _T3 = *_T2;
  _T4 = e;
  _T5 = exp_check;
  _T0(_T3,_T4,_T5);
  return;
}
static struct Cyc_Absyn_Exp * Cyc_Vcgen_zero_exp() {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct Cyc_Absyn_Exp * ans = Cyc_Absyn_uint_exp(0U,0U);
  _T0 = ans;
  _T0->topt = Cyc_Absyn_uint_type;
  _T1 = ans;
  return _T1;
}
static struct _tuple0 Cyc_Vcgen_okderef(void * root,void * i) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  struct _tuple0 _T5;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T6;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  void * _TB;
  void * _TC;
  struct _tuple0 _TD;
  void * _TE;
  void * _TF;
  void * _T10;
  void * _T11;
  void * _T12;
  void * _T13;
  void * _T14;
  void * _T15;
  void * _T16;
  struct Cyc_Absyn_Vardecl * _T17;
  void * _T18;
  int * _T19;
  int _T1A;
  struct Cyc_Absyn_ArrayInfo _T1B;
  struct Cyc_Absyn_Exp * _T1C;
  struct Cyc_Vcgen_Env * _T1D;
  struct Cyc_Absyn_ArrayInfo _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  struct Cyc_AssnDef_AssnMap _T20;
  struct _tuple0 _T21;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T22;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T23;
  struct _tuple0 _T24;
  void * _T25;
  void * _T26;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T27;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T28;
  int * _T29;
  int _T2A;
  void * _T2B;
  struct Cyc_Absyn_PtrInfo _T2C;
  struct Cyc_Absyn_PtrAtts _T2D;
  void * _T2E;
  void * _T2F;
  long _T30;
  void * _T31;
  void * _T32;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T33;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T34;
  struct _tuple0 _T35;
  void * _T36;
  void * _T37;
  void * _T38;
  void * _T39;
  void * _T3A;
  void * _T3B;
  struct _tuple0 _T3C;
  void * _T3D;
  void * _T3E;
  void * _T3F;
  void * _T40;
  { struct Cyc_Absyn_Vardecl * _T41;
    void * _T42;
    void * _T43;
    _T0 = root;
    _T1 = (int *)_T0;
    _T2 = *_T1;
    switch (_T2) {
    case 12: 
      _T3 = root;
      { struct Cyc_AssnDef_Alloc_AssnDef_Term_struct * _T44 = (struct Cyc_AssnDef_Alloc_AssnDef_Term_struct *)_T3;
	_T4 = _T44->f3;
	_T43 = (void *)_T4;
      }{ void * size = _T43;
	{ struct _tuple0 _T44;
	  _T44.f0 = Cyc_AssnDef_ult(i,size);
	  _T6 = &Cyc_AssnDef_true_assn;
	  _T7 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T6;
	  _T44.f1 = (void *)_T7;
	  _T5 = _T44;
	}return _T5;
      }
    case 14: 
      _T8 = root;
      { struct Cyc_AssnDef_Offseti_AssnDef_Term_struct * _T44 = (struct Cyc_AssnDef_Offseti_AssnDef_Term_struct *)_T8;
	_T9 = _T44->f1;
	_T43 = (void *)_T9;
	_TA = _T44->f2;
	_T42 = (void *)_TA;
      }{ void * r = _T43;
	void * i0 = _T42;
	_TB = r;
	_TC = Cyc_AssnDef_plus(i,i0,0);
	{ struct _tuple0 _T44 = Cyc_Vcgen_okderef(_TB,_TC);
	  void * _T45;
	  void * _T46;
	  _T46 = _T44.f0;
	  _T45 = _T44.f1;
	  { void * bndck = _T46;
	    void * nullck = _T45;
	    { struct _tuple0 _T47;
	      _TE = i;
	      _TF = Cyc_AssnDef_numelts_term(root);
	      _T10 = Cyc_AssnDef_ult(_TE,_TF);
	      _T11 = bndck;
	      _T47.f0 = Cyc_AssnDef_or(_T10,_T11);
	      _T12 = root;
	      _T13 = Cyc_AssnDef_zero();
	      _T14 = Cyc_AssnDef_neq(_T12,_T13);
	      _T15 = nullck;
	      _T47.f1 = Cyc_AssnDef_or(_T14,_T15);
	      _TD = _T47;
	    }return _TD;
	  }
	}
      }
    case 11: 
      _T16 = root;
      { struct Cyc_AssnDef_Addr_AssnDef_Term_struct * _T44 = (struct Cyc_AssnDef_Addr_AssnDef_Term_struct *)_T16;
	_T41 = _T44->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T41;
	_T17 = vd;
	_T18 = _T17->type;
	{ void * _T44 = Cyc_Absyn_compress(_T18);
	  struct Cyc_Absyn_ArrayInfo _T45;
	  _T19 = (int *)_T44;
	  _T1A = *_T19;
	  if (_T1A != 5) { goto _TL53;
	  }
	  { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T46 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T44;
	    _T45 = _T46->f1;
	  }{ struct Cyc_Absyn_ArrayInfo ai = _T45;
	    _T1B = ai;
	    _T1C = _T1B.num_elts;
	    if (_T1C == 0) { goto _TL55;
	    }
	    _T1D = Cyc_Vcgen_bogus_env();
	    _T1E = ai;
	    _T1F = _T1E.num_elts;
	    _T20 = Cyc_AssnDef_true_assnmap();
	    { struct _tuple14 _T46 = Cyc_Vcgen_vcgen_rexp(_T1D,_T1F,_T20);
	      void * _T47;
	      _T47 = _T46.f0;
	      { void * size = _T47;
		{ struct _tuple0 _T48;
		  _T48.f0 = Cyc_AssnDef_ult(i,size);
		  _T22 = &Cyc_AssnDef_true_assn;
		  _T23 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T22;
		  _T48.f1 = (void *)_T23;
		  _T21 = _T48;
		}return _T21;
	      }
	    }_TL55: goto _LLC;
	  }_TL53: goto _LLC;
	  _LLC: ;
	}{ struct _tuple0 _T44;
	  _T25 = i;
	  _T26 = Cyc_AssnDef_numelts_term(root);
	  _T44.f0 = Cyc_AssnDef_ult(_T25,_T26);
	  _T27 = &Cyc_AssnDef_true_assn;
	  _T28 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T27;
	  _T44.f1 = (void *)_T28;
	  _T24 = _T44;
	}return _T24;
      }
    default: 
      { void * tp = Cyc_AssnDef_get_term_type(root);
	if (tp == 0) { goto _TL57;
	}
	{ void * _T44 = Cyc_Absyn_compress(tp);
	  struct Cyc_Absyn_PtrInfo _T45;
	  _T29 = (int *)_T44;
	  _T2A = *_T29;
	  if (_T2A != 4) { goto _TL59;
	  }
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T46 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T44;
	    _T45 = _T46->f1;
	  }{ struct Cyc_Absyn_PtrInfo p1 = _T45;
	    _T2B = Cyc_Absyn_bounds_one();
	    _T2C = p1;
	    _T2D = _T2C.ptr_atts;
	    _T2E = _T2D.bounds;
	    { struct Cyc_Absyn_Exp * b1 = Cyc_Tcutil_get_bounds_exp_constrain(_T2B,
									      _T2E,
									      1);
	      long b2 = Cyc_Tcutil_is_nullable_pointer_type(tp,0);
	      _T30 = b2;
	      if (! _T30) { goto _TL5B;
	      }
	      _T31 = root;
	      _T32 = Cyc_AssnDef_zero();
	      _T2F = Cyc_AssnDef_neq(_T31,_T32);
	      goto _TL5C;
	      _TL5B: _T33 = &Cyc_AssnDef_true_assn;
	      _T34 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T33;
	      _T2F = (void *)_T34;
	      _TL5C: { void * nullck = _T2F;
		if (b1 == 0) { goto _TL5D;
		}
		{ struct _tuple0 _T46;
		  _T36 = i;
		  _T37 = Cyc_AssnDef_cnst(b1);
		  _T38 = Cyc_AssnDef_ult(_T36,_T37);
		  _T39 = i;
		  _T3A = Cyc_AssnDef_numelts_term(root);
		  _T3B = Cyc_AssnDef_ult(_T39,_T3A);
		  _T46.f0 = Cyc_AssnDef_or(_T38,_T3B);
		  _T46.f1 = nullck;
		  _T35 = _T46;
		}return _T35;
		_TL5D: goto _LL14;
	      }
	    }
	  }_TL59: goto _LL14;
	  _LL14: ;
	}goto _TL58;
	_TL57: _TL58: goto _LL0;
      }
    }
    _LL0: ;
  }{ struct _tuple0 _T41;
    _T3D = i;
    _T3E = Cyc_AssnDef_numelts_term(root);
    _T41.f0 = Cyc_AssnDef_ult(_T3D,_T3E);
    _T3F = root;
    _T40 = Cyc_AssnDef_zero();
    _T41.f1 = Cyc_AssnDef_neq(_T3F,_T40);
    _T3C = _T41;
  }return _T3C;
}
 struct _tuple24 {
  void * f0;
  void * f1;
  struct Cyc_AssnDef_AssnMap f2;
};
static struct _tuple24 Cyc_Vcgen_vcgen_deref(struct Cyc_Vcgen_Env * env,struct Cyc_Absyn_Exp * root,
					     struct Cyc_Absyn_Exp * index,
					     struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Vcgen_Env * _T0;
  long _T1;
  struct Cyc_Absyn_Exp * _T2;
  void * _T3;
  void * _T4;
  struct Cyc_Vcgen_Env * _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct Cyc_AssnDef_AssnMap _T7;
  struct _tuple14 _T8;
  struct Cyc_Vcgen_Env * _T9;
  struct Cyc_AssnDef_AssnMap _TA;
  void * _TB;
  void * _TC;
  void * _TD;
  struct Cyc_AssnDef_AssnMap _TE;
  void * _TF;
  void * _T10;
  struct Cyc_Vcgen_ExpChecks * _T11;
  struct Cyc_Vcgen_ExpChecks * _T12;
  struct Cyc_Vcgen_ExpChecks * _T13;
  struct Cyc_Vcgen_Env * _T14;
  struct Cyc_Hashtable_Table * * _T15;
  struct Cyc_Absyn_Exp * _T16;
  struct Cyc_Vcgen_ExpChecks * _T17;
  struct Cyc_AssnDef_AssnMap _T18;
  void * _T19;
  struct _tuple24 _T1A;
  struct _tuple14 _T1B = Cyc_Vcgen_vcgen_rexp(env,root,amin);
  struct Cyc_AssnDef_AssnMap _T1C;
  void * _T1D;
  _T1D = _T1B.f0;
  _T1C = _T1B.f1;
  { void * t1 = _T1D;
    struct Cyc_AssnDef_AssnMap am1 = _T1C;
    struct _tuple14 _T1E = Cyc_Vcgen_vcgen_rexp(env,index,am1);
    struct Cyc_AssnDef_AssnMap _T1F;
    void * _T20;
    _T20 = _T1E.f0;
    _T1F = _T1E.f1;
    { void * t2 = _T20;
      struct Cyc_AssnDef_AssnMap am2 = _T1F;
      _T0 = env;
      _T1 = _T0->pure_exp;
      if (_T1) { goto _TL5F;
      }else { goto _TL61;
      }
      _TL61: { struct _tuple0 _T21 = Cyc_Vcgen_okderef(t1,t2);
	void * _T22;
	void * _T23;
	_T23 = _T21.f0;
	_T22 = _T21.f1;
	{ void * bnds_check = _T23;
	  void * null_check = _T22;
	  _T2 = root;
	  _T3 = _T2->topt;
	  _T4 = _check_null(_T3);
	  { struct Cyc_Absyn_Exp * eopt = Cyc_Tcutil_get_type_bound(_T4);
	    void * term_numelts;
	    void * bnds_check_sufficient;
	    if (eopt != 0) { goto _TL62;
	    }
	    term_numelts = Cyc_AssnDef_numelts_term(t1);
	    bnds_check_sufficient = Cyc_AssnDef_ult(t2,term_numelts);
	    goto _TL63;
	    _TL62: _T5 = env;
	    _T6 = eopt;
	    _T7 = Cyc_AssnDef_true_assnmap();
	    _T8 = Cyc_Vcgen_vcgen_rexp(_T5,_T6,_T7);
	    term_numelts = _T8.f0;
	    bnds_check_sufficient = Cyc_AssnDef_ult(t2,term_numelts);
	    _TL63: _T9 = env;
	    _TA = am2;
	    _TB = Cyc_AssnDef_not(bnds_check_sufficient);
	    _TC = Cyc_AssnDef_not(null_check);
	    _TD = Cyc_AssnDef_or(_TB,_TC);
	    _TE = Cyc_AssnDef_and_assnmap_assn(_TA,_TD);
	    _TF = Cyc_Absyn_exn_type();
	    _T10 = Cyc_AssnDef_fresh_var(0,_TF);
	    Cyc_Vcgen_update_try_assnmap(_T9,_TE,_T10);
	    { struct Cyc_Vcgen_ExpChecks * exp_checks;
	      exp_checks = _cycalloc(sizeof(struct Cyc_Vcgen_ExpChecks));
	      _T11 = exp_checks;
	      _T11->ctxt = am2;
	      _T12 = exp_checks;
	      _T12->bounds_check = bnds_check;
	      _T13 = exp_checks;
	      _T13->null_check = null_check;
	      _T14 = env;
	      _T15 = _T14->assn_info;
	      _T16 = root;
	      _T17 = exp_checks;
	      Cyc_Vcgen_insert_exp_checks(_T15,_T16,_T17);
	      _T18 = am2;
	      _T19 = Cyc_AssnDef_and(bnds_check,null_check);
	      am2 = Cyc_AssnDef_and_assnmap_assn(_T18,_T19);
	    }
	  }
	}
      }goto _TL60;
      _TL5F: _TL60: { struct _tuple24 _T21;
	_T21.f0 = t1;
	_T21.f1 = t2;
	_T21.f2 = am2;
	_T1A = _T21;
      }return _T1A;
    }
  }
}
static struct _tuple14 Cyc_Vcgen_vcgen_comprehension(struct Cyc_Vcgen_Env * env,
						     struct Cyc_Absyn_Vardecl * vd,
						     struct Cyc_Absyn_Exp * e1,
						     struct Cyc_Absyn_Exp * e2,
						     void * res_type,struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Vcgen_Env * _T0;
  struct Cyc_AssnDef_AssnMap _T1;
  void * _T2;
  void * _T3;
  struct Cyc_AssnDef_AssnMap _T4;
  void * _T5;
  struct Cyc_AssnDef_AssnMap _T6;
  void * _T7;
  struct Cyc_Vcgen_Env * _T8;
  struct Cyc_AssnDef_AssnMap _T9;
  void * _TA;
  void * _TB;
  void * _TC;
  void * _TD;
  void * _TE;
  long _TF;
  struct Cyc_AssnDef_AssnMap _T10;
  struct Cyc_AssnDef_AssnMap _T11;
  void * _T12;
  void * _T13;
  void * _T14;
  struct _tuple14 _T15;
  struct _tuple14 _T16 = Cyc_Vcgen_vcgen_rexp(env,e1,amin);
  struct Cyc_AssnDef_AssnMap _T17;
  void * _T18;
  _T18 = _T16.f0;
  _T17 = _T16.f1;
  { void * t1 = _T18;
    struct Cyc_AssnDef_AssnMap amin = _T17;
    void * v = Cyc_AssnDef_zero();
    _T0 = env;
    _T1 = amin;
    _T2 = Cyc_Vcgen_myaddr(env,vd);
    _T3 = v;
    amin = Cyc_Vcgen_do_assign(_T0,_T1,_T2,_T3);
    _TL64: if (1) { goto _TL65;
    }else { goto _TL66;
    }
    _TL65: amin = Cyc_AssnDef_canonical_assnmap(amin);
    { struct _tuple14 _T19 = Cyc_AssnDef_lookup_var_map(vd,amin);
      struct Cyc_AssnDef_AssnMap _T1A;
      void * _T1B;
      _T1B = _T19.f0;
      _T1A = _T19.f1;
      { void * v2 = _T1B;
	struct Cyc_AssnDef_AssnMap am2 = _T1A;
	v = v2;
	amin = am2;
	_T4 = amin;
	_T5 = Cyc_AssnDef_ult(v,t1);
	{ struct Cyc_AssnDef_AssnMap amt = Cyc_AssnDef_and_assnmap_assn(_T4,
									_T5);
	  _T6 = amin;
	  _T7 = Cyc_AssnDef_ulte(t1,v);
	  { struct Cyc_AssnDef_AssnMap amf = Cyc_AssnDef_and_assnmap_assn(_T6,
									  _T7);
	    struct _tuple14 _T1C = Cyc_Vcgen_vcgen_rexp(env,e2,amt);
	    struct Cyc_AssnDef_AssnMap _T1D;
	    _T1D = _T1C.f1;
	    { struct Cyc_AssnDef_AssnMap ambody = _T1D;
	      struct _tuple14 _T1E = Cyc_AssnDef_lookup_var_map(vd,ambody);
	      struct Cyc_AssnDef_AssnMap _T1F;
	      void * _T20;
	      _T20 = _T1E.f0;
	      _T1F = _T1E.f1;
	      { void * v2 = _T20;
		struct Cyc_AssnDef_AssnMap am2 = _T1F;
		_T8 = env;
		_T9 = am2;
		_TA = Cyc_Vcgen_myaddr(env,vd);
		_TB = v2;
		_TC = Cyc_AssnDef_one();
		_TD = Cyc_Absyn_uint_type;
		_TE = Cyc_AssnDef_plus(_TB,_TC,_TD);
		ambody = Cyc_Vcgen_do_assign(_T8,_T9,_TA,_TE);
		ambody = Cyc_AssnDef_canonical_assnmap(ambody);
		{ struct _tuple15 _T21 = Cyc_AssnDef_unify_var_maps_subst(amin,
									  ambody);
		  struct Cyc_Dict_Dict _T22;
		  void * _T23;
		  void * _T24;
		  _T24 = _T21.f0;
		  _T23 = _T21.f1;
		  _T22 = _T21.f2;
		  { void * a1 = _T24;
		    void * a2 = _T23;
		    struct Cyc_Dict_Dict map = _T22;
		    _TF = Cyc_Vcgen_implies(a2,a1);
		    if (! _TF) { goto _TL67;
		    }
		    amin = amf;
		    goto _TL66;
		    _TL67: { struct Cyc_AssnDef_AssnMap _T25;
		      _T25.assn = Cyc_AssnDef_or(a1,a2);
		      _T25.map = map;
		      _T10 = _T25;
		    }amin = Cyc_AssnDef_widen_assnmap(_T10);
		  }
		}
	      }
	    }
	  }
	}
      }
    }goto _TL64;
    _TL66: { void * res = Cyc_AssnDef_fresh_var(0,res_type);
      _T11 = amin;
      _T12 = Cyc_AssnDef_numelts_term(res);
      _T13 = t1;
      _T14 = Cyc_AssnDef_eq(_T12,_T13);
      amin = Cyc_AssnDef_and_assnmap_assn(_T11,_T14);
      { struct _tuple14 _T19;
	_T19.f0 = res;
	_T19.f1 = amin;
	_T15 = _T19;
      }return _T15;
    }
  }
}
static struct _tuple14 Cyc_Vcgen_vcgen_binop(struct Cyc_Vcgen_Env * env,void * tp_opt,
					     enum Cyc_Absyn_Primop p,void * t1,
					     void * t2,struct Cyc_AssnDef_AssnMap am) {
  long _T0;
  enum Cyc_Absyn_Primop _T1;
  int _T2;
  struct Cyc_Vcgen_Env * _T3;
  long _T4;
  long _T5;
  long _T6;
  struct Cyc_Vcgen_Env * _T7;
  struct Cyc_AssnDef_AssnMap _T8;
  void * _T9;
  void * _TA;
  struct _tuple14 _TB;
  struct _tuple14 _TC;
  void * _TD;
  void * _TE;
  void * _TF;
  int (* _T10)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T11)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc_Vcgen_Env * _T14;
  long _T15;
  enum Cyc_Absyn_Primop _T16;
  int _T17;
  long _T18;
  struct Cyc_AssnDef_AssnMap _T19;
  void * _T1A;
  struct _tuple14 _T1B;
  void * tp = _check_null(tp_opt);
  _T0 = Cyc_Tcutil_is_pointer_type(tp);
  if (! _T0) { goto _TL69;
  }
  _T1 = p;
  _T2 = (int)_T1;
  switch (_T2) {
  case Cyc_Absyn_Plus: 
    _T3 = env;
    _T4 = _T3->pure_exp;
    if (_T4) { goto _TL6C;
    }else { goto _TL6E;
    }
    _TL6E: _T5 = Cyc_Tcutil_is_zeroterm_pointer_type(tp);
    if (! _T5) { goto _TL6C;
    }
    _T6 = Cyc_Tcutil_is_fat_pointer_type(tp);
    if (_T6) { goto _TL6C;
    }else { goto _TL6F;
    }
    _TL6F: _T7 = env;
    _T8 = am;
    _T9 = Cyc_Absyn_exn_type();
    _TA = Cyc_AssnDef_fresh_var(0,_T9);
    Cyc_Vcgen_update_try_assnmap(_T7,_T8,_TA);
    goto _TL6D;
    _TL6C: _TL6D: { struct _tuple14 _T1C;
      _T1C.f0 = Cyc_AssnDef_offseti(t1,t2,tp);
      _T1C.f1 = am;
      _TB = _T1C;
    }return _TB;
  case Cyc_Absyn_Minus: 
    { struct _tuple14 _T1C;
      _TD = t1;
      _TE = Cyc_AssnDef_unop(2U,t2,Cyc_Absyn_sint_type);
      _TF = tp;
      _T1C.f0 = Cyc_AssnDef_offseti(_TD,_TE,_TF);
      _T1C.f1 = am;
      _TC = _T1C;
    }return _TC;
  default: 
    _T11 = Cyc_Warn_impos;
    { int (* _T1C)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							       struct _fat_ptr))_T11;
      _T10 = _T1C;
    }_T12 = _tag_fat("vcgen: result has pointer type but uses bad primop",
		     sizeof(char),51U);
    _T13 = _tag_fat(0U,sizeof(void *),0);
    _T10(_T12,_T13);
  }
  goto _TL6A;
  _TL69: _TL6A: { void * t = Cyc_AssnDef_binop(p,t1,t2,tp);
    _T14 = env;
    _T15 = _T14->pure_exp;
    if (_T15) { goto _TL70;
    }else { goto _TL72;
    }
    _TL72: _T16 = p;
    _T17 = (int)_T16;
    if (_T17 != 21) { goto _TL70;
    }
    _T18 = Cyc_Unify_unify(Cyc_Absyn_uint_type,tp);
    if (! _T18) { goto _TL70;
    }
    _T19 = am;
    _T1A = Cyc_AssnDef_ult(t,t2);
    am = Cyc_AssnDef_and_assnmap_assn(_T19,_T1A);
    goto _TL71;
    _TL70: _TL71: { struct _tuple14 _T1C;
      _T1C.f0 = t;
      _T1C.f1 = am;
      _T1B = _T1C;
    }return _T1B;
  }
}
static long Cyc_Vcgen_visit_pure_stmt(long * env,struct Cyc_Absyn_Stmt * s) {
  long * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_Stmt * _T2;
  int * _T3;
  unsigned int _T4;
  long * _T5;
  _T0 = env;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TL73;
  }else { goto _TL75;
  }
  _TL75: return 0;
  _TL73: _T2 = s;
  { void * _T6 = _T2->r;
    _T3 = (int *)_T6;
    _T4 = *_T3;
    switch (_T4) {
    case 3: 
      goto _LL4;
    case 5: 
      _LL4: goto _LL6;
    case 6: 
      _LL6: goto _LL8;
    case 7: 
      _LL8: goto _LLA;
    case 8: 
      _LLA: goto _LLC;
    case 9: 
      _LLC: goto _LLE;
    case 14: 
      _LLE: goto _LL10;
    case 15: 
      _LL10: _T5 = env;
      *_T5 = 0;
      return 0;
    default: 
      return 1;
    }
    ;
  }
}
static long Cyc_Vcgen_visit_pure_exp(long * env,struct Cyc_Absyn_Exp * e) {
  long * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_Exp * _T2;
  int * _T3;
  unsigned int _T4;
  enum Cyc_Absyn_Primop _T5;
  int _T6;
  enum Cyc_Absyn_Primop _T7;
  int _T8;
  enum Cyc_Absyn_Coercion _T9;
  long _TA;
  long _TB;
  long * _TC;
  _T0 = env;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TL77;
  }else { goto _TL79;
  }
  _TL79: return 0;
  _TL77: _T2 = e;
  { void * _TD = _T2->r;
    long _TE;
    enum Cyc_Absyn_Coercion _TF;
    enum Cyc_Absyn_Primop _T10;
    _T3 = (int *)_TD;
    _T4 = *_T3;
    switch (_T4) {
    case 3: 
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T11 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_TD;
	_T10 = _T11->f1;
      }{ enum Cyc_Absyn_Primop p = _T10;
	_T5 = p;
	_T6 = (int)_T5;
	if (_T6 == 3) { goto _TL7D;
	}else { goto _TL7E;
	}
	_TL7E: _T7 = p;
	_T8 = (int)_T7;
	if (_T8 == 4) { goto _TL7D;
	}else { goto _TL7B;
	}
	_TL7D: goto _LL0;
	_TL7B: return 1;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T11 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_TD;
	_TF = _T11->f4;
      }{ enum Cyc_Absyn_Coercion c = _TF;
	_T9 = c;
	if (_T9 != Cyc_Absyn_No_coercion) { goto _TL7F;
	}
	return 1;
	_TL7F: goto _LL1F;
	_LL1F: goto _LL0;
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T11 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_TD;
	_TE = _T11->f3;
      }_TA = (long)_TE;
      if (! _TA) { goto _TL81;
      }
      { long is_tagged = _TE;
	goto _LL0;
      }_TL81: goto _LL1D;
    case 41: 
      { struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T11 = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_TD;
	_TE = _T11->f2;
      }_TB = (long)_TE;
      if (_TB) { goto _TL83;
      }else { goto _TL85;
      }
      _TL85: { long static_only = _TE;
	goto _LL0;
      }_TL83: goto _LL1D;
    case 4: 
      goto _LLC;
    case 5: 
      _LLC: goto _LLE;
    case 10: 
      _LLE: goto _LL10;
    case 11: 
      _LL10: goto _LL12;
    case 20: 
      _LL12: goto _LL14;
    case 22: 
      _LL14: goto _LL16;
    case 23: 
      _LL16: goto _LL18;
    case 34: 
      _LL18: goto _LL1A;
    case 39: 
      _LL1A: goto _LL1C;
    case 40: 
      _LL1C: goto _LL0;
    default: 
      _LL1D: return 1;
    }
    _LL0: ;
  }_TC = env;
  *_TC = 0;
  return 0;
}
static long Cyc_Vcgen_is_pure_exp(struct Cyc_Absyn_Exp * e) {
  void (* _T0)(long (*)(long *,struct Cyc_Absyn_Exp *),long (*)(long *,struct Cyc_Absyn_Stmt *),
	       long *,struct Cyc_Absyn_Exp *);
  void (* _T1)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Exp *);
  long * _T2;
  struct Cyc_Absyn_Exp * _T3;
  long _T4;
  long env = 1;
  _T1 = Cyc_Absyn_visit_exp;
  { void (* _T5)(long (*)(long *,struct Cyc_Absyn_Exp *),long (*)(long *,
								  struct Cyc_Absyn_Stmt *),
		 long *,struct Cyc_Absyn_Exp *) = (void (*)(long (*)(long *,
								     struct Cyc_Absyn_Exp *),
							    long (*)(long *,
								     struct Cyc_Absyn_Stmt *),
							    long *,struct Cyc_Absyn_Exp *))_T1;
    _T0 = _T5;
  }_T2 = &env;
  _T3 = e;
  _T0(Cyc_Vcgen_visit_pure_exp,Cyc_Vcgen_visit_pure_stmt,_T2,_T3);
  _T4 = env;
  return _T4;
}
static struct Cyc_AssnDef_AssnMap Cyc_Vcgen_vcgen_loop(struct Cyc_Vcgen_Env * env,
						       struct Cyc_Absyn_Exp * e1infor,
						       struct Cyc_Absyn_Stmt * s1indo,
						       struct Cyc_Absyn_Exp * cond,
						       struct Cyc_Absyn_Stmt * dummy,
						       struct Cyc_Absyn_Stmt * body,
						       struct Cyc_Absyn_Exp * e3infor,
						       struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Vcgen_Env * _T0;
  struct Cyc_Vcgen_Env * _T1;
  struct Cyc_AssnDef_AssnMap * _T2;
  struct Cyc_Absyn_Exp * _T3;
  int * _T4;
  int _T5;
  struct Cyc_Absyn_Exp * _T6;
  int * _T7;
  int _T8;
  long _T9;
  struct Cyc_Vcgen_Env * _TA;
  struct Cyc_Vcgen_Env * _TB;
  struct Cyc_Vcgen_Env * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct Cyc_AssnDef_AssnMap _TE;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _TF;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T10;
  struct Cyc_AssnDef_AssnMap _T11;
  struct _tuple20 _T12;
  struct Cyc_Vcgen_Env * _T13;
  struct Cyc_AssnDef_AssnMap _T14;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T15;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T16;
  struct Cyc_AssnDef_AssnMap _T17;
  struct Cyc_AssnDef_AssnMap _T18;
  void * _T19;
  struct Cyc_AssnDef_AssnMap _T1A;
  void * _T1B;
  long _T1C;
  struct Cyc_String_pa_PrintArg_struct _T1D;
  struct Cyc_AssnDef_AssnMap _T1E;
  void * _T1F;
  struct Cyc_String_pa_PrintArg_struct _T20;
  struct Cyc_Absyn_Exp * _T21;
  unsigned int _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  struct Cyc_Vcgen_Env * _T25;
  struct Cyc_AssnDef_AssnMap _T26;
  struct Cyc_Set_Set * _T27;
  struct Cyc_Set_Set * _T28;
  struct Cyc_Set_Set * _T29;
  struct Cyc_Set_Set * _T2A;
  struct _tuple20 _T2B;
  struct Cyc_AssnDef_AssnMap _T2C;
  struct Cyc_Vcgen_Env * _T2D;
  struct Cyc_AssnDef_AssnMap * _T2E;
  struct Cyc_AssnDef_AssnMap * _T2F;
  struct Cyc_AssnDef_AssnMap _T30;
  struct Cyc_Vcgen_Env * _T31;
  struct Cyc_Vcgen_Env * _T32;
  struct Cyc_Vcgen_Env * _T33;
  struct Cyc_Absyn_Exp * _T34;
  struct Cyc_AssnDef_AssnMap _T35;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T36;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T37;
  struct Cyc_AssnDef_AssnMap _T38;
  struct _tuple20 _T39;
  struct Cyc_Vcgen_Env * _T3A;
  struct Cyc_AssnDef_AssnMap _T3B;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T3C;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T3D;
  struct Cyc_AssnDef_AssnMap _T3E;
  struct Cyc_AssnDef_AssnMap _T3F;
  void * _T40;
  struct Cyc_AssnDef_AssnMap _T41;
  void * _T42;
  long _T43;
  struct Cyc_String_pa_PrintArg_struct _T44;
  struct Cyc_AssnDef_AssnMap _T45;
  void * _T46;
  struct Cyc_String_pa_PrintArg_struct _T47;
  struct Cyc_Absyn_Exp * _T48;
  unsigned int _T49;
  struct _fat_ptr _T4A;
  struct _fat_ptr _T4B;
  struct Cyc_Vcgen_Env * _T4C;
  struct Cyc_AssnDef_AssnMap _T4D;
  struct Cyc_AssnDef_AssnMap _T4E;
  struct Cyc_AssnDef_AssnMap _T4F;
  struct Cyc_AssnDef_AssnMap _T50;
  long _T51;
  struct Cyc_Vcgen_Env * _T52;
  struct Cyc_AssnDef_AssnMap _T53;
  _T0 = env;
  { struct Cyc_AssnDef_AssnMap * old_continue_assnmap = _T0->continue_assnmap;
    _T1 = env;
    { struct Cyc_AssnDef_AssnMap * _T54 = _cycalloc(sizeof(struct Cyc_AssnDef_AssnMap));
      *_T54 = Cyc_AssnDef_false_assnmap();
      _T2 = (struct Cyc_AssnDef_AssnMap *)_T54;
    }_T1->continue_assnmap = _T2;
    if (e1infor == 0) { goto _TL86;
    }
    { struct _tuple14 _T54 = Cyc_Vcgen_vcgen_rexp(env,e1infor,amin);
      struct Cyc_AssnDef_AssnMap _T55;
      _T55 = _T54.f1;
      { struct Cyc_AssnDef_AssnMap am = _T55;
	amin = am;
      }
    }goto _TL87;
    _TL86: _TL87: if (s1indo == 0) { goto _TL88;
    }
    amin = Cyc_Vcgen_vcgen_stmt(env,s1indo,amin);
    goto _TL89;
    _TL88: _TL89: { struct Cyc_Absyn_Exp * loop_inv_exp = 0;
      struct Cyc_AssnDef_AssnMap loop_inv_assnmap;
      _T3 = cond;
      { void * _T54 = _T3->r;
	struct Cyc_Absyn_Exp * _T55;
	struct Cyc_Absyn_Exp * _T56;
	_T4 = (int *)_T54;
	_T5 = *_T4;
	if (_T5 != 7) { goto _TL8A;
	}
	{ struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T57 = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T54;
	  _T56 = _T57->f1;
	  _T55 = _T57->f2;
	}{ struct Cyc_Absyn_Exp * eleft = _T56;
	  struct Cyc_Absyn_Exp * eright = _T55;
	  _T6 = eleft;
	  { void * _T57 = _T6->r;
	    long _T58;
	    struct Cyc_Absyn_Exp * _T59;
	    _T7 = (int *)_T57;
	    _T8 = *_T7;
	    if (_T8 != 41) { goto _TL8C;
	    }
	    { struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T5A = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_T57;
	      _T59 = _T5A->f1;
	      _T58 = _T5A->f2;
	    }_T9 = (long)_T58;
	    if (! _T9) { goto _TL8E;
	    }
	    { struct Cyc_Absyn_Exp * eassn = _T59;
	      long static_only = _T58;
	      loop_inv_exp = eassn;
	      cond = eright;
	      goto _LL8;
	    }_TL8E: goto _LLB;
	    _TL8C: _LLB: goto _LL8;
	    _LL8: ;
	  }goto _LL3;
	}_TL8A: goto _LL3;
	_LL3: ;
      }if (loop_inv_exp == 0) { goto _TL90;
      }
      _TA = env;
      { long old_widen_paths = _TA->widen_paths;
	_TB = env;
	_TB->widen_paths = 0;
	_TC = env;
	_TD = loop_inv_exp;
	{ struct Cyc_AssnDef_AssnMap _T54;
	  _TF = &Cyc_AssnDef_true_assn;
	  _T10 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_TF;
	  _T54.assn = (void *)_T10;
	  _T11 = amin;
	  _T54.map = _T11.map;
	  _TE = _T54;
	}_T12 = Cyc_Vcgen_vcgen_test(_TC,_TD,_TE);
	loop_inv_assnmap = _T12.f0;
	_T13 = env;
	_T13->widen_paths = old_widen_paths;
      }goto _TL91;
      _TL90: { struct Cyc_AssnDef_AssnMap _T54;
	_T15 = &Cyc_AssnDef_true_assn;
	_T16 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T15;
	_T54.assn = (void *)_T16;
	_T17 = amin;
	_T54.map = _T17.map;
	_T14 = _T54;
      }loop_inv_assnmap = _T14;
      _TL91: _T18 = amin;
      _T19 = _T18.assn;
      _T1A = loop_inv_assnmap;
      _T1B = _T1A.assn;
      _T1C = Cyc_Vcgen_implies(_T19,_T1B);
      if (_T1C) { goto _TL92;
      }else { goto _TL94;
      }
      _TL94: { struct Cyc_String_pa_PrintArg_struct _T54;
	_T54.tag = 0;
	_T1E = loop_inv_assnmap;
	_T1F = _T1E.assn;
	_T54.f1 = Cyc_AssnDef_assn2string(_T1F);
	_T1D = _T54;
      }{ struct Cyc_String_pa_PrintArg_struct _T54 = _T1D;
	{ struct Cyc_String_pa_PrintArg_struct _T55;
	  _T55.tag = 0;
	  _T55.f1 = Cyc_AssnDef_assnmap2string(amin);
	  _T20 = _T55;
	}{ struct Cyc_String_pa_PrintArg_struct _T55 = _T20;
	  void * _T56[2];
	  _T56[0] = &_T54;
	  _T56[1] = &_T55;
	  _T21 = cond;
	  _T22 = _T21->loc;
	  _T23 = _tag_fat("cannot prove loop invariant %s from %s\n",sizeof(char),
			  40U);
	  _T24 = _tag_fat(_T56,sizeof(void *),2);
	  Cyc_Warn_err(_T22,_T23,_T24);
	}
      }_T25 = env;
      _T25->continue_assnmap = old_continue_assnmap;
      _T26 = Cyc_AssnDef_true_assnmap();
      return _T26;
      _TL92: { struct Cyc_Set_Set * changed = Cyc_AssnDef_calc_changed_vars_exp(cond);
	_T27 = changed;
	_T28 = Cyc_AssnDef_calc_changed_vars_stmt(body);
	changed = Cyc_Set_union_two(_T27,_T28);
	if (e3infor == 0) { goto _TL95;
	}
	_T29 = changed;
	_T2A = Cyc_AssnDef_calc_changed_vars_exp(e3infor);
	changed = Cyc_Set_union_two(_T29,_T2A);
	goto _TL96;
	_TL95: _TL96: amin = Cyc_AssnDef_force_canonical(changed,amin);
	_TL97: if (1) { goto _TL98;
	}else { goto _TL99;
	}
	_TL98: amin = Cyc_AssnDef_canonical_assnmap(amin);
	{ struct Cyc_AssnDef_AssnMap amold = Cyc_Vcgen_lookup_stmt_assnmap(env,
									   dummy);
	  amin = Cyc_AssnDef_or_assnmap_assnmap(amold,amin);
	  amin = Cyc_AssnDef_widen_assnmap(amin);
	  Cyc_Vcgen_replace_stmt_assnmap(env,dummy,amin);
	  if (loop_inv_exp == 0) { goto _TL9A;
	  }
	  _T2B = Cyc_Vcgen_vcgen_test(env,loop_inv_exp,amin);
	  amin = _T2B.f0;
	  goto _TL9B;
	  _TL9A: _TL9B: { struct _tuple20 _T54 = Cyc_Vcgen_vcgen_test(env,
								      cond,
								      amin);
	    struct Cyc_AssnDef_AssnMap _T55;
	    struct Cyc_AssnDef_AssnMap _T56;
	    _T56 = _T54.f0;
	    _T55 = _T54.f1;
	    { struct Cyc_AssnDef_AssnMap amt = _T56;
	      struct Cyc_AssnDef_AssnMap amf = _T55;
	      amin = Cyc_Vcgen_vcgen_stmt(env,body,amt);
	      _T2C = amin;
	      _T2D = env;
	      _T2E = _T2D->continue_assnmap;
	      _T2F = _check_null(_T2E);
	      _T30 = *_T2F;
	      amin = Cyc_AssnDef_or_assnmap_assnmap(_T2C,_T30);
	      if (e3infor == 0) { goto _TL9C;
	      }
	      { struct _tuple14 _T57 = Cyc_Vcgen_vcgen_rexp(env,e3infor,amin);
		struct Cyc_AssnDef_AssnMap _T58;
		_T58 = _T57.f1;
		{ struct Cyc_AssnDef_AssnMap am = _T58;
		  amin = am;
		}
	      }goto _TL9D;
	      _TL9C: _TL9D: if (loop_inv_exp == 0) { goto _TL9E;
	      }
	      _T31 = env;
	      { long old_widen_paths = _T31->widen_paths;
		_T32 = env;
		_T32->widen_paths = 0;
		_T33 = env;
		_T34 = loop_inv_exp;
		{ struct Cyc_AssnDef_AssnMap _T57;
		  _T36 = &Cyc_AssnDef_true_assn;
		  _T37 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T36;
		  _T57.assn = (void *)_T37;
		  _T38 = amin;
		  _T57.map = _T38.map;
		  _T35 = _T57;
		}_T39 = Cyc_Vcgen_vcgen_test(_T33,_T34,_T35);
		loop_inv_assnmap = _T39.f0;
		_T3A = env;
		_T3A->widen_paths = old_widen_paths;
	      }goto _TL9F;
	      _TL9E: { struct Cyc_AssnDef_AssnMap _T57;
		_T3C = &Cyc_AssnDef_true_assn;
		_T3D = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T3C;
		_T57.assn = (void *)_T3D;
		_T3E = amin;
		_T57.map = _T3E.map;
		_T3B = _T57;
	      }loop_inv_assnmap = _T3B;
	      _TL9F: _T3F = amin;
	      _T40 = _T3F.assn;
	      _T41 = loop_inv_assnmap;
	      _T42 = _T41.assn;
	      _T43 = Cyc_Vcgen_implies(_T40,_T42);
	      if (_T43) { goto _TLA0;
	      }else { goto _TLA2;
	      }
	      _TLA2: { struct Cyc_String_pa_PrintArg_struct _T57;
		_T57.tag = 0;
		_T45 = loop_inv_assnmap;
		_T46 = _T45.assn;
		_T57.f1 = Cyc_AssnDef_assn2string(_T46);
		_T44 = _T57;
	      }{ struct Cyc_String_pa_PrintArg_struct _T57 = _T44;
		{ struct Cyc_String_pa_PrintArg_struct _T58;
		  _T58.tag = 0;
		  _T58.f1 = Cyc_AssnDef_assnmap2string(amin);
		  _T47 = _T58;
		}{ struct Cyc_String_pa_PrintArg_struct _T58 = _T47;
		  void * _T59[2];
		  _T59[0] = &_T57;
		  _T59[1] = &_T58;
		  _T48 = cond;
		  _T49 = _T48->loc;
		  _T4A = _tag_fat("cannot prove loop invariant %s from %s\n",
				  sizeof(char),40U);
		  _T4B = _tag_fat(_T59,sizeof(void *),2);
		  Cyc_Warn_err(_T49,_T4A,_T4B);
		}
	      }_T4C = env;
	      _T4C->continue_assnmap = old_continue_assnmap;
	      _T4D = Cyc_AssnDef_true_assnmap();
	      return _T4D;
	      _TLA0: _T4E = Cyc_Vcgen_lookup_stmt_assnmap(env,dummy);
	      _T4F = amin;
	      { struct _tuple15 _T57 = Cyc_AssnDef_unify_var_maps_subst(_T4E,
									_T4F);
		struct Cyc_Dict_Dict _T58;
		void * _T59;
		void * _T5A;
		_T5A = _T57.f0;
		_T59 = _T57.f1;
		_T58 = _T57.f2;
		{ void * a1 = _T5A;
		  void * a2 = _T59;
		  struct Cyc_Dict_Dict map = _T58;
		  { struct Cyc_AssnDef_AssnMap _T5B;
		    _T5B.assn = a2;
		    _T5B.map = map;
		    _T50 = _T5B;
		  }amin = _T50;
		  _T51 = Cyc_Vcgen_implies(a2,a1);
		  if (! _T51) { goto _TLA3;
		  }
		  _T52 = env;
		  _T52->continue_assnmap = old_continue_assnmap;
		  _T53 = amf;
		  return _T53;
		  _TLA3: ;
		}
	      }
	    }
	  }
	}goto _TL97;
	_TL99: ;
      }
    }
  }
}
 struct _tuple25 {
  struct Cyc_Absyn_Exp * f0;
  struct Cyc_Absyn_Exp * f1;
};
 struct _tuple26 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Exp * f1;
};
static struct _tuple14 Cyc_Vcgen_vcgen_rexp_inner(struct Cyc_Vcgen_Env * env,
						  struct Cyc_Absyn_Exp * e,
						  struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  long _T3;
  struct _tuple14 _T4;
  struct _tuple14 _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  int _T8;
  struct Cyc_Absyn_Exp * _T9;
  unsigned int _TA;
  struct Cyc_String_pa_PrintArg_struct _TB;
  struct Cyc_String_pa_PrintArg_struct _TC;
  struct Cyc___cycFILE * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  int _T12;
  struct Cyc_Absyn_Exp * _T13;
  unsigned int _T14;
  struct Cyc_String_pa_PrintArg_struct _T15;
  struct Cyc_String_pa_PrintArg_struct _T16;
  struct Cyc___cycFILE * _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  int _T1C;
  struct Cyc_Vcgen_Env * _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  int _T20;
  struct Cyc_Vcgen_Env * _T21;
  struct _tuple14 _T22;
  void * _T23;
  struct _tuple14 _T24;
  struct Cyc_Absyn_Vardecl * _T25;
  long _T26;
  struct _tuple14 _T27;
  void * _T28;
  void * _T29;
  struct Cyc_Absyn_Vardecl * _T2A;
  void * _T2B;
  struct Cyc_Absyn_Vardecl * _T2C;
  void * _T2D;
  int * _T2E;
  int _T2F;
  struct _tuple14 _T30;
  struct _tuple14 _T31;
  struct _tuple14 _T32;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T33;
  struct Cyc_List_List * _T34;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T35;
  struct Cyc_List_List * _T36;
  struct Cyc_List_List * _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_List_List * _T39;
  void * _T3A;
  struct _tuple14 _T3B;
  enum Cyc_Absyn_Primop _T3C;
  void * _T3D;
  struct Cyc_Absyn_Exp * _T3E;
  void * _T3F;
  struct Cyc_List_List * _T40;
  void * _T41;
  struct Cyc_List_List * _T42;
  void * _T43;
  struct Cyc_Vcgen_Env * _T44;
  struct Cyc_Absyn_Exp * _T45;
  void * _T46;
  enum Cyc_Absyn_Primop _T47;
  void * _T48;
  void * _T49;
  struct Cyc_AssnDef_AssnMap _T4A;
  struct _tuple14 _T4B;
  int (* _T4C)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T4D)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T4E;
  struct _fat_ptr _T4F;
  struct Cyc_Vcgen_Env * _T50;
  struct Cyc_Absyn_Exp * _T51;
  void * _T52;
  struct Cyc_Absyn_PrimopOpt * _T53;
  enum Cyc_Absyn_Primop _T54;
  void * _T55;
  void * _T56;
  struct Cyc_AssnDef_AssnMap _T57;
  struct _tuple14 _T58;
  struct _tuple14 _T59;
  enum Cyc_Absyn_Incrementor _T5A;
  int _T5B;
  struct Cyc_Vcgen_Env * _T5C;
  struct Cyc_Absyn_Exp * _T5D;
  void * _T5E;
  void * _T5F;
  void * _T60;
  struct Cyc_AssnDef_AssnMap _T61;
  struct Cyc_Vcgen_Env * _T62;
  struct Cyc_Absyn_Exp * _T63;
  void * _T64;
  void * _T65;
  void * _T66;
  struct Cyc_AssnDef_AssnMap _T67;
  struct Cyc_Vcgen_Env * _T68;
  struct Cyc_Absyn_Exp * _T69;
  void * _T6A;
  void * _T6B;
  void * _T6C;
  struct Cyc_AssnDef_AssnMap _T6D;
  struct Cyc_Vcgen_Env * _T6E;
  struct Cyc_Absyn_Exp * _T6F;
  void * _T70;
  void * _T71;
  void * _T72;
  struct Cyc_AssnDef_AssnMap _T73;
  int (* _T74)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T75)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T76;
  struct _fat_ptr _T77;
  struct _tuple14 _T78;
  struct Cyc_Absyn_Exp * _T79;
  void * _T7A;
  struct Cyc_AssnDef_AssnMap _T7B;
  void * _T7C;
  struct Cyc_AssnDef_AssnMap _T7D;
  void * _T7E;
  struct _tuple14 _T7F;
  struct Cyc_Vcgen_Env * _T80;
  struct Cyc_AssnDef_AssnMap _T81;
  struct Cyc_Absyn_Exp * _T82;
  void * _T83;
  struct Cyc_AssnDef_AssnMap _T84;
  void * _T85;
  struct Cyc_AssnDef_AssnMap _T86;
  void * _T87;
  void * _T88;
  void * _T89;
  struct _tuple14 _T8A;
  struct Cyc_Vcgen_Env * _T8B;
  struct Cyc_AssnDef_AssnMap _T8C;
  struct Cyc_Absyn_Exp * _T8D;
  void * _T8E;
  struct Cyc_AssnDef_AssnMap _T8F;
  void * _T90;
  void * _T91;
  void * _T92;
  struct Cyc_AssnDef_AssnMap _T93;
  void * _T94;
  struct _tuple14 _T95;
  struct Cyc_Vcgen_Env * _T96;
  struct Cyc_AssnDef_AssnMap _T97;
  struct _tuple14 _T98;
  struct Cyc_Absyn_Exp * _T99;
  void * _T9A;
  struct Cyc_Vcgen_Env * _T9B;
  struct Cyc_Hashtable_Table * _T9C;
  struct Cyc_Absyn_Exp * _T9D;
  struct Cyc_AssnDef_AssnMap _T9E;
  void * _T9F;
  void * _TA0;
  struct Cyc_List_List * _TA1;
  struct Cyc_Absyn_Exp * _TA2;
  void * _TA3;
  struct Cyc_List_List * _TA4;
  struct Cyc_List_List * _TA5;
  struct Cyc_AssnDef_AssnMap _TA6;
  void * _TA7;
  void * _TA8;
  long _TA9;
  struct Cyc_String_pa_PrintArg_struct _TAA;
  struct Cyc_String_pa_PrintArg_struct _TAB;
  struct Cyc_Absyn_Exp * _TAC;
  unsigned int _TAD;
  struct _fat_ptr _TAE;
  struct _fat_ptr _TAF;
  void * _TB0;
  struct Cyc_AssnDef_ExistAssnFn * _TB1;
  struct Cyc_List_List * _TB2;
  struct Cyc_Vcgen_Env * _TB3;
  struct Cyc_AssnDef_AssnMap _TB4;
  void * _TB5;
  struct Cyc_AssnDef_ExistAssnFn * _TB6;
  struct Cyc_List_List * _TB7;
  struct Cyc_List_List * _TB8;
  struct Cyc_AssnDef_ExistAssnFn * _TB9;
  struct Cyc_AssnDef_AssnFn * _TBA;
  struct Cyc_List_List * _TBB;
  int _TBC;
  int _TBD;
  int _TBE;
  struct Cyc_AssnDef_ExistAssnFn * _TBF;
  struct Cyc_List_List * _TC0;
  struct Cyc_List_List * _TC1;
  struct Cyc_Absyn_Exp * _TC2;
  void * _TC3;
  long _TC4;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _TC5;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _TC6;
  struct _tuple14 _TC7;
  struct _tuple14 _TC8;
  struct _tuple14 _TC9;
  struct _tuple14 _TCA;
  void * _TCB;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _TCC;
  enum Cyc_Absyn_Coercion * _TCD;
  enum Cyc_Absyn_Coercion * _TCE;
  long _TCF;
  long _TD0;
  struct _tuple14 _TD1;
  void * _TD2;
  struct Cyc_Absyn_Exp * _TD3;
  void * _TD4;
  void * _TD5;
  long _TD6;
  struct _tuple14 _TD7;
  struct _tuple0 _TD8;
  struct Cyc_Absyn_Exp * _TD9;
  void * _TDA;
  void * _TDB;
  void * _TDC;
  int * _TDD;
  int _TDE;
  void * _TDF;
  enum Cyc_Absyn_Coercion _TE0;
  int _TE1;
  struct _tuple14 _TE2;
  void * _TE3;
  int * _TE4;
  int _TE5;
  void * _TE6;
  struct Cyc_AssnDef_ExistAssnFn * _TE7;
  struct Cyc_List_List * _TE8;
  struct Cyc_AssnDef_AssnMap _TE9;
  void * _TEA;
  void * _TEB;
  long _TEC;
  struct Cyc_String_pa_PrintArg_struct _TED;
  struct Cyc_String_pa_PrintArg_struct _TEE;
  struct Cyc_Absyn_Exp * _TEF;
  unsigned int _TF0;
  struct _fat_ptr _TF1;
  struct _fat_ptr _TF2;
  struct Cyc_AssnDef_AssnMap _TF3;
  void * _TF4;
  void * _TF5;
  struct _tuple14 _TF6;
  void * _TF7;
  int * _TF8;
  int _TF9;
  void * _TFA;
  enum Cyc_Absyn_Coercion _TFB;
  int _TFC;
  struct _tuple14 _TFD;
  void * _TFE;
  int * _TFF;
  unsigned int _T100;
  void * _T101;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T102;
  void * _T103;
  int * _T104;
  int _T105;
  void * _T106;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T107;
  void * _T108;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T109;
  enum Cyc_Absyn_Size_of _T10A;
  int _T10B;
  void * _T10C;
  int * _T10D;
  unsigned int _T10E;
  void * _T10F;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T110;
  void * _T111;
  int * _T112;
  int _T113;
  void * _T114;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T115;
  void * _T116;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T117;
  enum Cyc_Absyn_Size_of _T118;
  int _T119;
  void * _T11A;
  int * _T11B;
  unsigned int _T11C;
  void * _T11D;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T11E;
  void * _T11F;
  int * _T120;
  unsigned int _T121;
  void * _T122;
  struct _tuple14 _T123;
  struct Cyc_List_List * _T124;
  void * _T125;
  struct Cyc_Absyn_Exp * _T126;
  unsigned int _T127;
  struct Cyc_Absyn_Exp * _T128;
  void * _T129;
  void * _T12A;
  int * _T12B;
  unsigned int _T12C;
  void * _T12D;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T12E;
  void * _T12F;
  int * _T130;
  unsigned int _T131;
  void * _T132;
  struct _tuple14 _T133;
  struct Cyc_List_List * _T134;
  void * _T135;
  struct Cyc_Absyn_Exp * _T136;
  unsigned int _T137;
  struct Cyc_Absyn_Exp * _T138;
  void * _T139;
  void * _T13A;
  struct Cyc_Absyn_PtrInfo _T13B;
  struct Cyc_Absyn_PtrAtts _T13C;
  void * _T13D;
  struct Cyc_Absyn_Exp * _T13E;
  struct _tuple14 _T13F;
  void * _T140;
  int * _T141;
  int _T142;
  void * _T143;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T144;
  void * _T145;
  int * _T146;
  int _T147;
  void * _T148;
  void * _T149;
  void * _T14A;
  void * _T14B;
  enum Cyc_Absyn_Size_of _T14C;
  enum Cyc_Absyn_Size_of _T14D;
  int _T14E;
  enum Cyc_Absyn_Size_of _T14F;
  enum Cyc_Absyn_Size_of _T150;
  int _T151;
  enum Cyc_Absyn_Size_of _T152;
  int _T153;
  enum Cyc_Absyn_Size_of _T154;
  int _T155;
  struct _tuple14 _T156;
  void * _T157;
  int * _T158;
  int _T159;
  void * _T15A;
  void * _T15B;
  struct Cyc_Absyn_PtrInfo _T15C;
  struct Cyc_Absyn_PtrAtts _T15D;
  void * _T15E;
  struct Cyc_Absyn_PtrInfo _T15F;
  struct Cyc_Absyn_PtrAtts _T160;
  void * _T161;
  void * _T162;
  struct Cyc_Absyn_PtrInfo _T163;
  struct Cyc_Absyn_PtrAtts _T164;
  void * _T165;
  void * _T166;
  struct Cyc_Absyn_PtrInfo _T167;
  struct Cyc_Absyn_PtrAtts _T168;
  void * _T169;
  struct _tuple25 _T16A;
  struct Cyc_Absyn_Exp * _T16B;
  struct Cyc_Absyn_Exp * _T16C;
  struct Cyc_Vcgen_Env * _T16D;
  long _T16E;
  long _T16F;
  long _T170;
  void * _T171;
  void * _T172;
  struct Cyc_Vcgen_ExpChecks * _T173;
  struct Cyc_Vcgen_ExpChecks * _T174;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T175;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T176;
  struct Cyc_Vcgen_ExpChecks * _T177;
  struct Cyc_Vcgen_Env * _T178;
  struct Cyc_Hashtable_Table * * _T179;
  struct Cyc_Absyn_Exp * _T17A;
  struct Cyc_Vcgen_ExpChecks * _T17B;
  struct Cyc_Vcgen_Env * _T17C;
  struct Cyc_AssnDef_AssnMap _T17D;
  void * _T17E;
  void * _T17F;
  void * _T180;
  struct Cyc_AssnDef_AssnMap _T181;
  void * _T182;
  void * _T183;
  struct _tuple14 _T184;
  struct _tuple14 _T185;
  struct _tuple14 _T186;
  struct Cyc_Absyn_Exp * _T187;
  struct Cyc_Vcgen_Env * _T188;
  long _T189;
  void * _T18A;
  struct Cyc_Vcgen_Env * _T18B;
  long _T18C;
  long _T18D;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T18E;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T18F;
  void * _T190;
  void * _T191;
  struct Cyc_Absyn_PtrInfo _T192;
  struct Cyc_Absyn_PtrAtts _T193;
  void * _T194;
  struct Cyc_Absyn_PtrInfo _T195;
  struct Cyc_Absyn_PtrAtts _T196;
  void * _T197;
  long _T198;
  long _T199;
  void * _T19A;
  void * _T19B;
  void * _T19C;
  void * _T19D;
  void * _T19E;
  struct Cyc_Vcgen_ExpChecks * _T19F;
  struct Cyc_Vcgen_ExpChecks * _T1A0;
  struct Cyc_Vcgen_ExpChecks * _T1A1;
  struct Cyc_Vcgen_Env * _T1A2;
  struct Cyc_Hashtable_Table * * _T1A3;
  struct Cyc_Absyn_Exp * _T1A4;
  struct Cyc_Vcgen_ExpChecks * _T1A5;
  struct Cyc_Vcgen_Env * _T1A6;
  struct Cyc_AssnDef_AssnMap _T1A7;
  void * _T1A8;
  struct Cyc_AssnDef_AssnMap _T1A9;
  void * _T1AA;
  void * _T1AB;
  struct _tuple14 _T1AC;
  struct _tuple14 _T1AD;
  struct Cyc_Vcgen_Env * _T1AE;
  long _T1AF;
  enum Cyc_Absyn_Coercion _T1B0;
  int _T1B1;
  struct _tuple14 _T1B2;
  struct Cyc_Vcgen_Env * _T1B3;
  struct Cyc_AssnDef_AssnMap _T1B4;
  void * _T1B5;
  void * _T1B6;
  struct _tuple14 _T1B7;
  struct _tuple14 _T1B8;
  struct _tuple14 _T1B9;
  struct Cyc_Absyn_Exp * _T1BA;
  int * _T1BB;
  unsigned int _T1BC;
  int _T1BD;
  unsigned int _T1BE;
  struct Cyc_Vcgen_Env * _T1BF;
  struct Cyc_Absyn_Exp * _T1C0;
  int _T1C1;
  unsigned int _T1C2;
  void * _T1C3;
  struct Cyc_Absyn_Exp * _T1C4;
  void * _T1C5;
  struct Cyc_AssnDef_AssnMap _T1C6;
  void * _T1C7;
  void * _T1C8;
  void * _T1C9;
  void * _T1CA;
  void * _T1CB;
  void * _T1CC;
  void * _T1CD;
  struct _tuple14 _T1CE;
  struct Cyc_Vcgen_Env * _T1CF;
  struct Cyc_Absyn_Vardecl * _T1D0;
  struct Cyc_Absyn_Exp * _T1D1;
  struct Cyc_Absyn_Exp * _T1D2;
  struct Cyc_Absyn_Exp * _T1D3;
  void * _T1D4;
  void * _T1D5;
  struct Cyc_AssnDef_AssnMap _T1D6;
  struct Cyc_AssnDef_AssnMap _T1D7;
  void * _T1D8;
  void * _T1D9;
  void * _T1DA;
  struct _tuple14 _T1DB;
  struct Cyc_Vcgen_Env * _T1DC;
  struct Cyc_Absyn_Exp * _T1DD;
  void * _T1DE;
  struct Cyc_Absyn_Exp * _T1DF;
  void * _T1E0;
  struct Cyc_AssnDef_AssnMap _T1E1;
  void * _T1E2;
  void * _T1E3;
  struct Cyc_Absyn_Exp * _T1E4;
  void * _T1E5;
  void * _T1E6;
  void * _T1E7;
  void * _T1E8;
  void * _T1E9;
  void * _T1EA;
  void * _T1EB;
  void * _T1EC;
  struct _tuple14 _T1ED;
  long _T1EE;
  struct _tuple14 _T1EF;
  struct _tuple14 _T1F0;
  struct Cyc_Absyn_Exp * _T1F1;
  void * _T1F2;
  void * _T1F3;
  struct _fat_ptr * _T1F4;
  struct Cyc_Vcgen_Env * _T1F5;
  long _T1F6;
  long _T1F7;
  long _T1F8;
  void * _T1F9;
  int _T1FA;
  unsigned int _T1FB;
  void * _T1FC;
  struct Cyc_Vcgen_Env * _T1FD;
  struct Cyc_AssnDef_AssnMap _T1FE;
  void * _T1FF;
  struct Cyc_AssnDef_AssnMap _T200;
  void * _T201;
  void * _T202;
  struct _tuple14 _T203;
  void * _T204;
  int _T205;
  unsigned int _T206;
  struct Cyc_Absyn_Exp * _T207;
  void * _T208;
  struct Cyc_Absyn_Exp * _T209;
  void * _T20A;
  void * _T20B;
  struct _fat_ptr * _T20C;
  struct Cyc_Vcgen_Env * _T20D;
  void * _T20E;
  void * _T20F;
  int _T210;
  unsigned int _T211;
  void * _T212;
  struct Cyc_AssnDef_AssnMap _T213;
  struct _tuple14 _T214;
  struct _tuple14 _T215;
  struct Cyc_Vcgen_Env * _T216;
  struct Cyc_Absyn_Exp * _T217;
  struct Cyc_Absyn_Exp * _T218;
  struct Cyc_AssnDef_AssnMap _T219;
  struct _tuple14 _T21A;
  void * _T21B;
  void * _T21C;
  struct Cyc_Absyn_Exp * _T21D;
  void * _T21E;
  struct Cyc_Vcgen_Env * _T21F;
  struct Cyc_Absyn_Exp * _T220;
  struct Cyc_Absyn_Exp * _T221;
  struct Cyc_AssnDef_AssnMap _T222;
  struct Cyc_Absyn_Exp * _T223;
  void * _T224;
  void * _T225;
  void * _T226;
  struct _fat_ptr * _T227;
  struct Cyc_Vcgen_Env * _T228;
  long _T229;
  long _T22A;
  long _T22B;
  void * _T22C;
  void * _T22D;
  int _T22E;
  unsigned int _T22F;
  void * _T230;
  struct Cyc_Vcgen_Env * _T231;
  struct Cyc_AssnDef_AssnMap _T232;
  void * _T233;
  struct Cyc_AssnDef_AssnMap _T234;
  void * _T235;
  void * _T236;
  struct Cyc_Absyn_Exp * _T237;
  void * _T238;
  void * _T239;
  struct _tuple14 _T23A;
  void * _T23B;
  int _T23C;
  unsigned int _T23D;
  struct Cyc_Absyn_Exp * _T23E;
  void * _T23F;
  struct _tuple14 _T240;
  void * _T241;
  void * _T242;
  struct Cyc_Absyn_Exp * _T243;
  void * _T244;
  struct _tuple14 _T245;
  unsigned int _T246;
  struct Cyc_List_List * _T247;
  struct Cyc_Absyn_Exp * _T248;
  void * _T249;
  struct Cyc_List_List * _T24A;
  void * _T24B;
  struct _tuple14 _T24C;
  struct Cyc_List_List * _T24D;
  struct _tuple14 _T24E;
  struct Cyc_Absyn_Exp * _T24F;
  void * _T250;
  struct Cyc_List_List * _T251;
  void * _T252;
  struct Cyc_List_List * _T253;
  struct Cyc_List_List * _T254;
  void * _T255;
  int * _T256;
  int _T257;
  struct Cyc_List_List * _T258;
  struct Cyc_List_List * _T259;
  struct Cyc_List_List * _T25A;
  struct Cyc_List_List * _T25B;
  void * _T25C;
  int _T25D;
  struct Cyc_List_List * _T25E;
  struct _tuple23 * _T25F;
  int (* _T260)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T261)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T262;
  struct _fat_ptr _T263;
  struct Cyc_List_List * _T264;
  struct Cyc_List_List * (* _T265)(int (*)(struct _tuple23 *,struct _tuple23 *),
				   struct Cyc_List_List *);
  struct Cyc_List_List * (* _T266)(int (*)(void *,void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T267;
  struct Cyc_List_List * (* _T268)(void * (*)(struct _tuple23 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T269)(void * (*)(void *),struct Cyc_List_List *);
  void * (* _T26A)(struct _tuple23 *);
  void * (* _T26B)(struct _tuple0 *);
  struct Cyc_List_List * _T26C;
  void * _T26D;
  enum Cyc_Absyn_AggrKind _T26E;
  int _T26F;
  unsigned int _T270;
  struct Cyc_List_List * _T271;
  struct Cyc_Absyn_Exp * _T272;
  void * _T273;
  struct Cyc_List_List * _T274;
  struct Cyc_Absyn_Exp * _T275;
  void * _T276;
  struct _tuple14 _T277;
  struct Cyc_Vcgen_Env * _T278;
  struct Cyc_Absyn_Vardecl * _T279;
  struct Cyc_Absyn_Exp * _T27A;
  struct Cyc_Absyn_Exp * _T27B;
  struct Cyc_Absyn_Exp * _T27C;
  void * _T27D;
  void * _T27E;
  struct Cyc_AssnDef_AssnMap _T27F;
  struct _tuple14 _T280;
  struct _tuple14 _T281;
  struct _tuple14 _T282;
  struct Cyc_Absyn_MallocInfo _T283;
  struct Cyc_Absyn_Exp * _T284;
  struct Cyc_Vcgen_Env * _T285;
  struct Cyc_Absyn_MallocInfo _T286;
  struct Cyc_Absyn_Exp * _T287;
  struct Cyc_AssnDef_AssnMap _T288;
  struct _tuple14 _T289;
  struct Cyc_Vcgen_Env * _T28A;
  struct Cyc_Absyn_MallocInfo _T28B;
  struct Cyc_Absyn_Exp * _T28C;
  struct Cyc_AssnDef_AssnMap _T28D;
  struct Cyc_Vcgen_Env * _T28E;
  struct Cyc_Absyn_Exp * _T28F;
  void * _T290;
  struct Cyc_Absyn_Exp * _T291;
  void * _T292;
  struct Cyc_AssnDef_AssnMap _T293;
  void * _T294;
  void * _T295;
  void * _T296;
  void * _T297;
  void * _T298;
  void * _T299;
  void * _T29A;
  struct _tuple14 _T29B;
  struct _tuple14 _T29C;
  struct Cyc_Vcgen_Env * _T29D;
  struct Cyc_Vcgen_Env * _T29E;
  void * * _T29F;
  struct Cyc_Vcgen_Env * _T2A0;
  void * * _T2A1;
  void * * _T2A2;
  struct Cyc_Vcgen_Env * _T2A3;
  struct _tuple14 _T2A4;
  struct _tuple14 _T2A5;
  struct _tuple14 _T2A6;
  long _T2A7;
  struct Cyc_Vcgen_Env * _T2A8;
  struct Cyc_Vcgen_Env * _T2A9;
  struct Cyc_Vcgen_Env * _T2AA;
  struct Cyc_Vcgen_Env * _T2AB;
  struct Cyc_Vcgen_Env * _T2AC;
  struct Cyc_Absyn_Exp * _T2AD;
  struct Cyc_AssnDef_AssnMap _T2AE;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T2AF;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T2B0;
  struct Cyc_AssnDef_AssnMap _T2B1;
  struct Cyc_Vcgen_Env * _T2B2;
  struct Cyc_Vcgen_Env * _T2B3;
  struct Cyc_AssnDef_AssnMap _T2B4;
  void * _T2B5;
  struct Cyc_AssnDef_AssnMap _T2B6;
  void * _T2B7;
  long _T2B8;
  struct Cyc_String_pa_PrintArg_struct _T2B9;
  struct Cyc_AssnDef_AssnMap _T2BA;
  void * _T2BB;
  struct Cyc_String_pa_PrintArg_struct _T2BC;
  struct Cyc_Absyn_Exp * _T2BD;
  unsigned int _T2BE;
  struct _fat_ptr _T2BF;
  struct _fat_ptr _T2C0;
  struct _tuple14 _T2C1;
  struct Cyc_AssnDef_AssnMap _T2C2;
  struct Cyc_AssnDef_AssnMap _T2C3;
  void * _T2C4;
  struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T2C5;
  long * _T2C6;
  struct Cyc_AssnDef_AssnMap _T2C7;
  void * _T2C8;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T2C9;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T2CA;
  void * _T2CB;
  long _T2CC;
  long _T2CD;
  long * _T2CE;
  long * _T2CF;
  long * _T2D0;
  long _T2D1;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D2;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T2D3;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D4;
  struct Cyc_Absyn_Exp * _T2D5;
  unsigned int _T2D6;
  struct _fat_ptr _T2D7;
  void * _T2D8;
  struct _tuple14 _T2D9;
  struct Cyc_Vcgen_Env * _T2DA;
  struct Cyc_Vcgen_Env * _T2DB;
  struct Cyc_Vcgen_Env * _T2DC;
  struct Cyc_Vcgen_Env * _T2DD;
  struct Cyc_Vcgen_Env * _T2DE;
  struct Cyc_Absyn_Exp * _T2DF;
  struct Cyc_AssnDef_AssnMap _T2E0;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T2E1;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T2E2;
  struct Cyc_AssnDef_AssnMap _T2E3;
  struct Cyc_Vcgen_Env * _T2E4;
  struct Cyc_Vcgen_Env * _T2E5;
  struct Cyc_AssnDef_AssnMap _T2E6;
  void * _T2E7;
  struct Cyc_AssnDef_AssnMap _T2E8;
  void * _T2E9;
  long _T2EA;
  struct Cyc_String_pa_PrintArg_struct _T2EB;
  struct Cyc_String_pa_PrintArg_struct _T2EC;
  struct Cyc_Absyn_Exp * _T2ED;
  unsigned int _T2EE;
  struct _fat_ptr _T2EF;
  struct _fat_ptr _T2F0;
  struct _tuple14 _T2F1;
  _T0 = e;
  { void * _T2F2 = _T0->r;
    struct Cyc_Absyn_MallocInfo _T2F3;
    struct Cyc_Absyn_Datatypefield * _T2F4;
    struct Cyc_Absyn_Datatypedecl * _T2F5;
    long _T2F6;
    long _T2F7;
    struct _fat_ptr * _T2F8;
    struct Cyc_Absyn_Exp * _T2F9;
    enum Cyc_Absyn_Incrementor _T2FA;
    struct Cyc_Absyn_Exp * _T2FB;
    void * _T2FC;
    enum Cyc_Absyn_Primop _T2FD;
    void * _T2FE;
    struct _fat_ptr _T2FF;
    union Cyc_Absyn_Cnst _T300;
    _T1 = (int *)_T2F2;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      { struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T2F2;
	_T300 = _T301->f1;
      }{ union Cyc_Absyn_Cnst c = _T300;
	struct _tuple16 _T301 = Cyc_Evexp_eval_const_uint_exp(e);
	long _T302;
	unsigned int _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ unsigned int cn = _T303;
	  long known = _T302;
	  _T3 = known;
	  if (! _T3) { goto _TLA6;
	  }
	  { struct _tuple14 _T304;
	    _T304.f0 = Cyc_AssnDef_uint(cn);
	    _T304.f1 = amin;
	    _T4 = _T304;
	  }return _T4;
	  _TLA6: { struct _tuple14 _T304;
	    _T304.f0 = Cyc_AssnDef_cnst(e);
	    _T304.f1 = amin;
	    _T5 = _T304;
	  }return _T5;
	}
      }
    case 2: 
      { struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FF = _T301->f1;
      }{ struct _fat_ptr s = _T2FF;
	_T6 = s;
	_T7 = _tag_fat("print_assn",sizeof(char),11U);
	_T8 = Cyc_strcmp(_T6,_T7);
	if (_T8 != 0) { goto _TLA8;
	}
	_T9 = e;
	_TA = _T9->loc;
	{ struct _fat_ptr seg_str = Cyc_Position_string_of_segment(_TA);
	  { struct Cyc_String_pa_PrintArg_struct _T301;
	    _T301.tag = 0;
	    _T301.f1 = seg_str;
	    _TB = _T301;
	  }{ struct Cyc_String_pa_PrintArg_struct _T301 = _TB;
	    { struct Cyc_String_pa_PrintArg_struct _T302;
	      _T302.tag = 0;
	      _T302.f1 = Cyc_AssnDef_assnmap2string(amin);
	      _TC = _T302;
	    }{ struct Cyc_String_pa_PrintArg_struct _T302 = _TC;
	      void * _T303[2];
	      _T303[0] = &_T301;
	      _T303[1] = &_T302;
	      _TD = Cyc_stderr;
	      _TE = _tag_fat("%s: %s\n",sizeof(char),8U);
	      _TF = _tag_fat(_T303,sizeof(void *),2);
	      Cyc_fprintf(_TD,_TE,_TF);
	    }
	  }
	}goto _TLA9;
	_TLA8: _TLA9: _T10 = s;
	_T11 = _tag_fat("print_dag",sizeof(char),10U);
	_T12 = Cyc_strcmp(_T10,_T11);
	if (_T12 != 0) { goto _TLAA;
	}
	_T13 = e;
	_T14 = _T13->loc;
	{ struct _fat_ptr seg_str = Cyc_Position_string_of_segment(_T14);
	  { struct Cyc_String_pa_PrintArg_struct _T301;
	    _T301.tag = 0;
	    _T301.f1 = seg_str;
	    _T15 = _T301;
	  }{ struct Cyc_String_pa_PrintArg_struct _T301 = _T15;
	    { struct Cyc_String_pa_PrintArg_struct _T302;
	      _T302.tag = 0;
	      _T302.f1 = Cyc_AssnDef_assnmap2dag(amin);
	      _T16 = _T302;
	    }{ struct Cyc_String_pa_PrintArg_struct _T302 = _T16;
	      void * _T303[2];
	      _T303[0] = &_T301;
	      _T303[1] = &_T302;
	      _T17 = Cyc_stderr;
	      _T18 = _tag_fat("%s: %s\n",sizeof(char),8U);
	      _T19 = _tag_fat(_T303,sizeof(void *),2);
	      Cyc_fprintf(_T17,_T18,_T19);
	    }
	  }
	}goto _TLAB;
	_TLAA: _TLAB: _T1A = s;
	_T1B = _tag_fat("all_paths",sizeof(char),10U);
	_T1C = Cyc_strcmp(_T1A,_T1B);
	if (_T1C != 0) { goto _TLAC;
	}
	_T1D = env;
	_T1D->widen_paths = 0;
	goto _TLAD;
	_TLAC: _TLAD: _T1E = s;
	_T1F = _tag_fat("one_path",sizeof(char),9U);
	_T20 = Cyc_strcmp(_T1E,_T1F);
	if (_T20 != 0) { goto _TLAE;
	}
	_T21 = env;
	_T21->widen_paths = 1;
	goto _TLAF;
	_TLAE: _TLAF: { struct _tuple14 _T301;
	  _T301.f0 = Cyc_AssnDef_zero();
	  _T301.f1 = amin;
	  _T22 = _T301;
	}return _T22;
      }
    case 1: 
      { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T2F2;
	_T23 = _T301->f1;
	_T2FE = (void *)_T23;
      }{ void * b = _T2FE;
	struct Cyc_Absyn_Vardecl * vdopt = Cyc_Vcgen_bind2vardecl(b);
	if (vdopt != 0) { goto _TLB0;
	}
	{ struct _tuple14 _T301;
	  _T301.f0 = Cyc_AssnDef_fresh_var(0,0);
	  _T301.f1 = amin;
	  _T24 = _T301;
	}return _T24;
	_TLB0: { struct Cyc_Absyn_Vardecl * vd = vdopt;
	  _T25 = vd;
	  _T26 = _T25->escapes;
	  if (! _T26) { goto _TLB2;
	  }
	  { struct _tuple14 _T301 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
							       amin);
	    struct Cyc_AssnDef_AssnMap _T302;
	    void * _T303;
	    _T303 = _T301.f0;
	    _T302 = _T301.f1;
	    { void * mem = _T303;
	      struct Cyc_AssnDef_AssnMap am1 = _T302;
	      { struct _tuple14 _T304;
		_T28 = mem;
		_T29 = Cyc_Vcgen_myaddr(env,vd);
		_T2A = vd;
		_T2B = _T2A->type;
		_T304.f0 = Cyc_AssnDef_select(_T28,_T29,_T2B);
		_T304.f1 = am1;
		_T27 = _T304;
	      }return _T27;
	    }
	  }_TLB2: _T2C = vd;
	  _T2D = _T2C->type;
	  { void * _T301 = Cyc_Absyn_compress(_T2D);
	    _T2E = (int *)_T301;
	    _T2F = *_T2E;
	    if (_T2F != 5) { goto _TLB4;
	    }
	    { struct _tuple14 _T302;
	      _T302.f0 = Cyc_Vcgen_myaddr(env,vd);
	      _T302.f1 = amin;
	      _T30 = _T302;
	    }return _T30;
	    _TLB4: goto _LL63;
	    _LL63: ;
	  }{ struct _tuple14 _T301 = Cyc_AssnDef_lookup_var_map(vd,amin);
	    struct Cyc_AssnDef_AssnMap _T302;
	    void * _T303;
	    _T303 = _T301.f0;
	    _T302 = _T301.f1;
	    { void * t = _T303;
	      struct Cyc_AssnDef_AssnMap am = _T302;
	      { struct _tuple14 _T304;
		_T304.f0 = t;
		_T304.f1 = am;
		_T31 = _T304;
	      }return _T31;
	      _T32 = Cyc_AssnDef_lookup_var_map(vd,amin);
	      return _T32;
	    }
	  }
	}
      }
    case 3: 
      _T33 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T2F2;
      _T34 = _T33->f2;
      if (_T34 == 0) { goto _TLB6;
      }
      _T35 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T2F2;
      _T36 = _T35->f2;
      _T37 = (struct Cyc_List_List *)_T36;
      _T38 = _T37->tl;
      if (_T38 != 0) { goto _TLB8;
      }
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FD = _T301->f1;
	_T39 = _T301->f2;
	{ struct Cyc_List_List _T302 = *_T39;
	  _T3A = _T302.hd;
	  _T2FE = (struct Cyc_Absyn_Exp *)_T3A;
	}
      }{ enum Cyc_Absyn_Primop p = _T2FD;
	struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	void * _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ void * t = _T303;
	  struct Cyc_AssnDef_AssnMap am = _T302;
	  { struct _tuple14 _T304;
	    _T3C = p;
	    _T3D = t;
	    _T3E = e;
	    _T3F = _T3E->topt;
	    _T304.f0 = Cyc_AssnDef_unop(_T3C,_T3D,_T3F);
	    _T304.f1 = am;
	    _T3B = _T304;
	  }return _T3B;
	}
      }_TLB8: { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FD = _T301->f1;
	_T40 = _T301->f2;
	{ struct Cyc_List_List _T302 = *_T40;
	  _T41 = _T302.hd;
	  _T2FE = (struct Cyc_Absyn_Exp *)_T41;
	  _T42 = _T302.tl;
	  { struct Cyc_List_List _T303 = *_T42;
	    _T43 = _T303.hd;
	    _T2FC = (struct Cyc_Absyn_Exp *)_T43;
	  }
	}
      }{ enum Cyc_Absyn_Primop p = _T2FD;
	struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct Cyc_Absyn_Exp * e2 = _T2FC;
	struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	void * _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ void * t1 = _T303;
	  struct Cyc_AssnDef_AssnMap am1 = _T302;
	  struct _tuple14 _T304 = Cyc_Vcgen_vcgen_rexp(env,e2,am1);
	  struct Cyc_AssnDef_AssnMap _T305;
	  void * _T306;
	  _T306 = _T304.f0;
	  _T305 = _T304.f1;
	  { void * t2 = _T306;
	    struct Cyc_AssnDef_AssnMap am2 = _T305;
	    _T44 = env;
	    _T45 = e;
	    _T46 = _T45->topt;
	    _T47 = p;
	    _T48 = t1;
	    _T49 = t2;
	    _T4A = am2;
	    _T4B = Cyc_Vcgen_vcgen_binop(_T44,_T46,_T47,_T48,_T49,_T4A);
	    return _T4B;
	  }
	}
      }_TLB6: _T4D = Cyc_Warn_impos;
      { int (* _T301)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								  struct _fat_ptr))_T4D;
	_T4C = _T301;
      }_T4E = _tag_fat("vcgen: bad primop",sizeof(char),18U);
      _T4F = _tag_fat(0U,sizeof(void *),0);
      _T4C(_T4E,_T4F);
      ;
    case 4: 
      { struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FC = _T301->f2;
	_T2FB = _T301->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct Cyc_Absyn_PrimopOpt * popt = _T2FC;
	struct Cyc_Absyn_Exp * e2 = _T2FB;
	struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(env,e2,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	void * _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ void * t2 = _T303;
	  struct Cyc_AssnDef_AssnMap am1 = _T302;
	  struct _tuple14 _T304 = Cyc_Vcgen_vcgen_lexp(env,e1,am1);
	  struct Cyc_AssnDef_AssnMap _T305;
	  void * _T306;
	  _T306 = _T304.f0;
	  _T305 = _T304.f1;
	  { void * lt = _T306;
	    struct Cyc_AssnDef_AssnMap am2 = _T305;
	    struct Cyc_AssnDef_AssnMap amout;
	    if (popt == 0) { goto _TLBA;
	    }
	    { struct _tuple14 _T307 = Cyc_Vcgen_deref_lterm(env,lt,am2);
	      struct Cyc_AssnDef_AssnMap _T308;
	      void * _T309;
	      _T309 = _T307.f0;
	      _T308 = _T307.f1;
	      { void * t1 = _T309;
		struct Cyc_AssnDef_AssnMap am3 = _T308;
		_T50 = env;
		_T51 = e;
		_T52 = _T51->topt;
		_T53 = popt;
		_T54 = _T53->v;
		_T55 = t1;
		_T56 = t2;
		_T57 = am3;
		{ struct _tuple14 _T30A = Cyc_Vcgen_vcgen_binop(_T50,_T52,
								_T54,_T55,
								_T56,_T57);
		  struct Cyc_AssnDef_AssnMap _T30B;
		  void * _T30C;
		  _T30C = _T30A.f0;
		  _T30B = _T30A.f1;
		  { void * t2 = _T30C;
		    struct Cyc_AssnDef_AssnMap am4 = _T30B;
		    amout = Cyc_Vcgen_do_assign(env,am4,lt,t2);
		    { struct _tuple14 _T30D;
		      _T30D.f0 = t2;
		      _T30D.f1 = amout;
		      _T58 = _T30D;
		    }return _T58;
		  }
		}
	      }
	    }_TLBA: amout = Cyc_Vcgen_do_assign(env,am2,lt,t2);
	    { struct _tuple14 _T307;
	      _T307.f0 = t2;
	      _T307.f1 = amout;
	      _T59 = _T307;
	    }return _T59;
	  }
	}
      }
    case 5: 
      { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FA = _T301->f2;
      }{ struct Cyc_Absyn_Exp * e = _T2FE;
	enum Cyc_Absyn_Incrementor i = _T2FA;
	struct _tuple14 _T301 = Cyc_Vcgen_vcgen_lexp(env,e,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	void * _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ void * lt = _T303;
	  struct Cyc_AssnDef_AssnMap am1 = _T302;
	  struct _tuple14 _T304 = Cyc_Vcgen_deref_lterm(env,lt,am1);
	  struct Cyc_AssnDef_AssnMap _T305;
	  void * _T306;
	  _T306 = _T304.f0;
	  _T305 = _T304.f1;
	  { void * t1 = _T306;
	    struct Cyc_AssnDef_AssnMap am2 = _T305;
	    void * res;
	    void * rvalue;
	    struct Cyc_AssnDef_AssnMap amout;
	    _T5A = i;
	    _T5B = (int)_T5A;
	    switch (_T5B) {
	    case Cyc_Absyn_PostInc: 
	      _T5C = env;
	      _T5D = e;
	      _T5E = _T5D->topt;
	      _T5F = t1;
	      _T60 = Cyc_AssnDef_one();
	      _T61 = am2;
	      { struct _tuple14 _T307 = Cyc_Vcgen_vcgen_binop(_T5C,_T5E,0U,
							      _T5F,_T60,_T61);
		struct Cyc_AssnDef_AssnMap _T308;
		void * _T309;
		_T309 = _T307.f0;
		_T308 = _T307.f1;
		{ void * t = _T309;
		  struct Cyc_AssnDef_AssnMap am = _T308;
		  res = t1;
		  rvalue = t;
		  amout = am;
		  goto _LL86;
		}
	      }
	    case Cyc_Absyn_PreInc: 
	      _T62 = env;
	      _T63 = e;
	      _T64 = _T63->topt;
	      _T65 = t1;
	      _T66 = Cyc_AssnDef_one();
	      _T67 = am2;
	      { struct _tuple14 _T307 = Cyc_Vcgen_vcgen_binop(_T62,_T64,0U,
							      _T65,_T66,_T67);
		struct Cyc_AssnDef_AssnMap _T308;
		void * _T309;
		_T309 = _T307.f0;
		_T308 = _T307.f1;
		{ void * t = _T309;
		  struct Cyc_AssnDef_AssnMap am = _T308;
		  rvalue = t;
		  res = rvalue;
		  amout = am;
		  goto _LL86;
		}
	      }
	    case Cyc_Absyn_PostDec: 
	      _T68 = env;
	      _T69 = e;
	      _T6A = _T69->topt;
	      _T6B = t1;
	      _T6C = Cyc_AssnDef_one();
	      _T6D = am2;
	      { struct _tuple14 _T307 = Cyc_Vcgen_vcgen_binop(_T68,_T6A,2U,
							      _T6B,_T6C,_T6D);
		struct Cyc_AssnDef_AssnMap _T308;
		void * _T309;
		_T309 = _T307.f0;
		_T308 = _T307.f1;
		{ void * t = _T309;
		  struct Cyc_AssnDef_AssnMap am = _T308;
		  res = t1;
		  rvalue = t;
		  amout = am;
		  goto _LL86;
		}
	      }
	    case Cyc_Absyn_PreDec: 
	      _T6E = env;
	      _T6F = e;
	      _T70 = _T6F->topt;
	      _T71 = t1;
	      _T72 = Cyc_AssnDef_one();
	      _T73 = am2;
	      { struct _tuple14 _T307 = Cyc_Vcgen_vcgen_binop(_T6E,_T70,2U,
							      _T71,_T72,_T73);
		struct Cyc_AssnDef_AssnMap _T308;
		void * _T309;
		_T309 = _T307.f0;
		_T308 = _T307.f1;
		{ void * t = _T309;
		  struct Cyc_AssnDef_AssnMap am = _T308;
		  rvalue = t;
		  res = rvalue;
		  amout = am;
		  goto _LL86;
		}
	      }
	    default: 
	      _T75 = Cyc_Warn_impos;
	      { int (* _T307)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									  struct _fat_ptr))_T75;
		_T74 = _T307;
	      }_T76 = _tag_fat("vcgen rexp increment_e",sizeof(char),23U);
	      _T77 = _tag_fat(0U,sizeof(void *),0);
	      _T74(_T76,_T77);
	    }
	    _LL86: amout = Cyc_Vcgen_do_assign(env,amout,lt,rvalue);
	    { struct _tuple14 _T307;
	      _T307.f0 = res;
	      _T307.f1 = amout;
	      _T78 = _T307;
	    }return _T78;
	  }
	}
      }
    case 6: 
      { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FC = _T301->f2;
	_T2FB = _T301->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct Cyc_Absyn_Exp * e2 = _T2FC;
	struct Cyc_Absyn_Exp * e3 = _T2FB;
	struct _tuple20 _T301 = Cyc_Vcgen_vcgen_test(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	struct Cyc_AssnDef_AssnMap _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ struct Cyc_AssnDef_AssnMap amt = _T303;
	  struct Cyc_AssnDef_AssnMap amf = _T302;
	  struct _tuple14 _T304 = Cyc_Vcgen_vcgen_rexp(env,e2,amt);
	  struct Cyc_AssnDef_AssnMap _T305;
	  void * _T306;
	  _T306 = _T304.f0;
	  _T305 = _T304.f1;
	  { void * t1 = _T306;
	    struct Cyc_AssnDef_AssnMap amt = _T305;
	    struct _tuple14 _T307 = Cyc_Vcgen_vcgen_rexp(env,e3,amf);
	    struct Cyc_AssnDef_AssnMap _T308;
	    void * _T309;
	    _T309 = _T307.f0;
	    _T308 = _T307.f1;
	    { void * t2 = _T309;
	      struct Cyc_AssnDef_AssnMap amf = _T308;
	      _T79 = e;
	      _T7A = _T79->topt;
	      { void * v = Cyc_AssnDef_fresh_var(0,_T7A);
		_T7B = amt;
		_T7C = Cyc_AssnDef_eq(v,t1);
		amt = Cyc_AssnDef_and_assnmap_assn(_T7B,_T7C);
		_T7D = amf;
		_T7E = Cyc_AssnDef_eq(v,t2);
		amf = Cyc_AssnDef_and_assnmap_assn(_T7D,_T7E);
		{ struct _tuple14 _T30A;
		  _T30A.f0 = v;
		  _T80 = env;
		  _T81 = Cyc_AssnDef_or_assnmap_assnmap(amt,amf);
		  _T30A.f1 = Cyc_Vcgen_may_widen(_T80,_T81);
		  _T7F = _T30A;
		}return _T7F;
	      }
	    }
	  }
	}
      }
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FC = _T301->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct Cyc_Absyn_Exp * e2 = _T2FC;
	struct _tuple20 _T301 = Cyc_Vcgen_vcgen_test(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	struct Cyc_AssnDef_AssnMap _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ struct Cyc_AssnDef_AssnMap amt = _T303;
	  struct Cyc_AssnDef_AssnMap amf = _T302;
	  struct _tuple14 _T304 = Cyc_Vcgen_vcgen_rexp(env,e2,amt);
	  struct Cyc_AssnDef_AssnMap _T305;
	  void * _T306;
	  _T306 = _T304.f0;
	  _T305 = _T304.f1;
	  { void * t = _T306;
	    struct Cyc_AssnDef_AssnMap amt = _T305;
	    _T82 = e;
	    _T83 = _T82->topt;
	    { void * v = Cyc_AssnDef_fresh_var(0,_T83);
	      _T84 = amt;
	      _T85 = Cyc_AssnDef_eq(v,t);
	      amt = Cyc_AssnDef_and_assnmap_assn(_T84,_T85);
	      _T86 = amf;
	      _T87 = v;
	      _T88 = Cyc_AssnDef_zero();
	      _T89 = Cyc_AssnDef_eq(_T87,_T88);
	      amf = Cyc_AssnDef_and_assnmap_assn(_T86,_T89);
	      { struct _tuple14 _T307;
		_T307.f0 = v;
		_T8B = env;
		_T8C = Cyc_AssnDef_or_assnmap_assnmap(amt,amf);
		_T307.f1 = Cyc_Vcgen_may_widen(_T8B,_T8C);
		_T8A = _T307;
	      }return _T8A;
	    }
	  }
	}
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FC = _T301->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct Cyc_Absyn_Exp * e2 = _T2FC;
	struct _tuple20 _T301 = Cyc_Vcgen_vcgen_test(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	struct Cyc_AssnDef_AssnMap _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ struct Cyc_AssnDef_AssnMap amt = _T303;
	  struct Cyc_AssnDef_AssnMap amf = _T302;
	  struct _tuple14 _T304 = Cyc_Vcgen_vcgen_rexp(env,e2,amf);
	  struct Cyc_AssnDef_AssnMap _T305;
	  void * _T306;
	  _T306 = _T304.f0;
	  _T305 = _T304.f1;
	  { void * t = _T306;
	    struct Cyc_AssnDef_AssnMap amf = _T305;
	    _T8D = e;
	    _T8E = _T8D->topt;
	    { void * v = Cyc_AssnDef_fresh_var(0,_T8E);
	      _T8F = amt;
	      _T90 = v;
	      _T91 = Cyc_AssnDef_zero();
	      _T92 = Cyc_AssnDef_neq(_T90,_T91);
	      amt = Cyc_AssnDef_and_assnmap_assn(_T8F,_T92);
	      _T93 = amf;
	      _T94 = Cyc_AssnDef_eq(v,t);
	      amf = Cyc_AssnDef_and_assnmap_assn(_T93,_T94);
	      { struct _tuple14 _T307;
		_T307.f0 = v;
		_T96 = env;
		_T97 = Cyc_AssnDef_or_assnmap_assnmap(amt,amf);
		_T307.f1 = Cyc_Vcgen_may_widen(_T96,_T97);
		_T95 = _T307;
	      }return _T95;
	    }
	  }
	}
      }
    case 9: 
      { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FC = _T301->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct Cyc_Absyn_Exp * e2 = _T2FC;
	struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	_T302 = _T301.f1;
	{ struct Cyc_AssnDef_AssnMap am1 = _T302;
	  _T98 = Cyc_Vcgen_vcgen_rexp(env,e2,am1);
	  return _T98;
	}
      }
    case 10: 
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FC = _T301->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct Cyc_List_List * es = _T2FC;
	struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	void * _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ void * f = _T303;
	  struct Cyc_AssnDef_AssnMap am1 = _T302;
	  struct _tuple19 _T304 = Cyc_Vcgen_vcgen_rexps(env,es,am1);
	  struct Cyc_AssnDef_AssnMap _T305;
	  struct Cyc_List_List * _T306;
	  _T306 = _T304.f0;
	  _T305 = _T304.f1;
	  { struct Cyc_List_List * ts = _T306;
	    struct Cyc_AssnDef_AssnMap am2 = _T305;
	    struct _tuple14 _T307 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
							       am2);
	    struct Cyc_AssnDef_AssnMap _T308;
	    void * _T309;
	    _T309 = _T307.f0;
	    _T308 = _T307.f1;
	    { void * pre_memory = _T309;
	      struct Cyc_AssnDef_AssnMap am2 = _T308;
	      _T99 = e1;
	      _T9A = _T99->topt;
	      { struct _tuple21 _T30A = Cyc_Vcgen_get_requires_and_ensures(_T9A);
		struct Cyc_Absyn_Vardecl * _T30B;
		struct Cyc_AssnDef_ExistAssnFn * _T30C;
		struct Cyc_AssnDef_ExistAssnFn * _T30D;
		struct Cyc_AssnDef_ExistAssnFn * _T30E;
		struct Cyc_AssnDef_ExistAssnFn * _T30F;
		struct Cyc_List_List * _T310;
		struct Cyc_List_List * _T311;
		_T311 = _T30A.f0;
		_T310 = _T30A.f1;
		_T30F = _T30A.f2;
		_T30E = _T30A.f3;
		_T30D = _T30A.f4;
		_T30C = _T30A.f5;
		_T30B = _T30A.f6;
		{ struct Cyc_List_List * args = _T311;
		  struct Cyc_List_List * argvds = _T310;
		  struct Cyc_AssnDef_ExistAssnFn * checkopt = _T30F;
		  struct Cyc_AssnDef_ExistAssnFn * reqopt = _T30E;
		  struct Cyc_AssnDef_ExistAssnFn * ensopt = _T30D;
		  struct Cyc_AssnDef_ExistAssnFn * thrwsopt = _T30C;
		  struct Cyc_Absyn_Vardecl * ret_value = _T30B;
		  _T9B = env;
		  _T9C = _T9B->fn_precond_info;
		  _T9D = e1;
		  _T9E = am2;
		  _T9F = _T9E.assn;
		  _TA0 = pre_memory;
		  _TA1 = ts;
		  Cyc_Vcgen_insert_fn_precond_info(_T9C,_T9D,_T9F,_TA0,_TA1);
		  { struct Cyc_AssnDef_ExistAssnFn * fensinfo = Cyc_Vcgen_lookup_fn_summary_info(e1);
		    _TA2 = e;
		    _TA3 = _TA2->topt;
		    { void * actual_ret = Cyc_AssnDef_fresh_var(0,_TA3);
		      struct Cyc_List_List * pre_memory_and_ts;
		      pre_memory_and_ts = _cycalloc(sizeof(struct Cyc_List_List));
		      _TA4 = pre_memory_and_ts;
		      _TA4->hd = pre_memory;
		      _TA5 = pre_memory_and_ts;
		      _TA5->tl = ts;
		      if (reqopt == 0) { goto _TLBD;
		      }
		      { void * req_assn = Cyc_AssnDef_existassnfn2assn(reqopt,
								       pre_memory_and_ts);
			_TA6 = am2;
			_TA7 = _TA6.assn;
			_TA8 = req_assn;
			_TA9 = Cyc_Vcgen_implies(_TA7,_TA8);
			if (_TA9) { goto _TLBF;
			}else { goto _TLC1;
			}
			_TLC1: { struct Cyc_String_pa_PrintArg_struct _T312;
			  _T312.tag = 0;
			  _T312.f1 = Cyc_AssnDef_assnmap2string(am2);
			  _TAA = _T312;
			}{ struct Cyc_String_pa_PrintArg_struct _T312 = _TAA;
			  { struct Cyc_String_pa_PrintArg_struct _T313;
			    _T313.tag = 0;
			    _T313.f1 = Cyc_AssnDef_assn2string(req_assn);
			    _TAB = _T313;
			  }{ struct Cyc_String_pa_PrintArg_struct _T313 = _TAB;
			    void * _T314[2];
			    _T314[0] = &_T312;
			    _T314[1] = &_T313;
			    _TAC = e;
			    _TAD = _TAC->loc;
			    _TAE = _tag_fat("current assertion:\n%s\ndoes not satisfy the pre-condition of the function:\n%s\n",
					    sizeof(char),78U);
			    _TAF = _tag_fat(_T314,sizeof(void *),2);
			    Cyc_Warn_err(_TAD,_TAE,_TAF);
			  }
			}goto _TLC0;
			_TLBF: _TLC0: ;
		      }goto _TLBE;
		      _TLBD: _TLBE: { void * new_memory = Cyc_AssnDef_fresh_var(Cyc_AssnDef_memory,
										0);
			struct Cyc_AssnDef_AssnMap am3 = Cyc_AssnDef_update_var_map(Cyc_AssnDef_memory,
										    new_memory,
										    am2);
			_TB0 = Cyc_Absyn_exn_type();
			{ void * v = Cyc_AssnDef_fresh_var(0,_TB0);
			  if (thrwsopt == 0) { goto _TLC2;
			  }
			  _TB1 = thrwsopt;
			  { struct Cyc_List_List * _T312 = _cycalloc(sizeof(struct Cyc_List_List));
			    _T312->hd = new_memory;
			    _T312->tl = pre_memory_and_ts;
			    _TB2 = (struct Cyc_List_List *)_T312;
			  }{ void * throws_assn = Cyc_AssnDef_existassnfn2assn(_TB1,
									       _TB2);
			    _TB3 = env;
			    _TB4 = Cyc_AssnDef_and_assnmap_assn(am3,throws_assn);
			    _TB5 = v;
			    Cyc_Vcgen_update_try_assnmap(_TB3,_TB4,_TB5);
			  }goto _TLC3;
			  _TLC2: Cyc_Vcgen_update_try_assnmap(env,am3,v);
			  _TLC3: if (ensopt == 0) { goto _TLC4;
			  }
			  _TB6 = ensopt;
			  { struct Cyc_List_List * _T312 = _cycalloc(sizeof(struct Cyc_List_List));
			    _T312->hd = actual_ret;
			    { struct Cyc_List_List * _T313 = _cycalloc(sizeof(struct Cyc_List_List));
			      _T313->hd = new_memory;
			      _T313->tl = pre_memory_and_ts;
			      _TB8 = (struct Cyc_List_List *)_T313;
			    }_T312->tl = _TB8;
			    _TB7 = (struct Cyc_List_List *)_T312;
			  }{ void * ens_assn = Cyc_AssnDef_existassnfn2assn(_TB6,
									    _TB7);
			    am3 = Cyc_AssnDef_and_assnmap_assn(am3,ens_assn);
			  }goto _TLC5;
			  _TLC4: if (fensinfo == 0) { goto _TLC6;
			  }
			  _TB9 = fensinfo;
			  _TBA = _TB9->af;
			  _TBB = _TBA->actuals;
			  _TBC = Cyc_List_length(_TBB);
			  _TBD = Cyc_List_length(ts);
			  _TBE = _TBD + 3;
			  if (_TBC == _TBE) { goto _TLC8;
			  }
			  goto _TLC9;
			  _TLC8: _TBF = fensinfo;
			  { struct Cyc_List_List * _T312 = _cycalloc(sizeof(struct Cyc_List_List));
			    _T312->hd = actual_ret;
			    { struct Cyc_List_List * _T313 = _cycalloc(sizeof(struct Cyc_List_List));
			      _T313->hd = new_memory;
			      _T313->tl = pre_memory_and_ts;
			      _TC1 = (struct Cyc_List_List *)_T313;
			    }_T312->tl = _TC1;
			    _TC0 = (struct Cyc_List_List *)_T312;
			  }{ void * ens_assn = Cyc_AssnDef_existassnfn2assn(_TBF,
									    _TC0);
			    am3 = Cyc_AssnDef_and_assnmap_assn(am3,ens_assn);
			  }_TLC9: goto _TLC7;
			  _TLC6: _TLC7: _TLC5: _TC2 = e1;
			  _TC3 = _TC2->topt;
			  _TC4 = Cyc_Atts_is_noreturn_fn_type(_TC3);
			  if (! _TC4) { goto _TLCA;
			  }
			  _TC5 = &Cyc_AssnDef_false_assn;
			  _TC6 = (struct Cyc_AssnDef_False_AssnDef_Assn_struct *)_TC5;
			  am3.assn = (void *)_TC6;
			  goto _TLCB;
			  _TLCA: _TLCB: { struct _tuple14 _T312;
			    _T312.f0 = actual_ret;
			    _T312.f1 = am3;
			    _TC7 = _T312;
			  }return _TC7;
			}
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    case 11: 
      { struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
      }{ struct Cyc_Absyn_Exp * e = _T2FE;
	struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	void * _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ void * t = _T303;
	  struct Cyc_AssnDef_AssnMap am1 = _T302;
	  Cyc_Vcgen_update_try_assnmap(env,am1,t);
	  { struct _tuple14 _T304;
	    _T304.f0 = Cyc_AssnDef_fresh_var(0,0);
	    _T304.f1 = Cyc_AssnDef_false_assnmap();
	    _TC8 = _T304;
	  }return _TC8;
	}
      }
    case 12: 
      { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
      }{ struct Cyc_Absyn_Exp * e = _T2FE;
	_TC9 = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	return _TC9;
      }
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
      }{ struct Cyc_Absyn_Exp * e = _T2FE;
	_TCA = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	return _TCA;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T2F2;
	_TCB = _T301->f1;
	_T2FE = (void *)_TCB;
	_T2FB = _T301->f2;
	_TCC = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T2F2;
	_TCD = &_TCC->f4;
	_T2FC = (enum Cyc_Absyn_Coercion *)_TCD;
      }{ void * tp = _T2FE;
	struct Cyc_Absyn_Exp * e1 = _T2FB;
	enum Cyc_Absyn_Coercion * coercion = (enum Cyc_Absyn_Coercion *)_T2FC;
	_TCE = coercion;
	{ enum Cyc_Absyn_Coercion c = *_TCE;
	  _TCF = Cyc_Tcutil_is_const_exp(e1);
	  if (! _TCF) { goto _TLCC;
	  }
	  { struct _tuple16 _T301 = Cyc_Evexp_eval_const_uint_exp(e);
	    long _T302;
	    unsigned int _T303;
	    _T303 = _T301.f0;
	    _T302 = _T301.f1;
	    { unsigned int cn = _T303;
	      long known = _T302;
	      _TD0 = known;
	      if (! _TD0) { goto _TLCE;
	      }
	      { struct _tuple14 _T304;
		_T304.f0 = Cyc_AssnDef_uint(cn);
		_T304.f1 = amin;
		_TD1 = _T304;
	      }return _TD1;
	      _TLCE: ;
	    }
	  }goto _TLCD;
	  _TLCC: _TLCD: { struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(env,
								       e1,
								       amin);
	    struct Cyc_AssnDef_AssnMap _T302;
	    void * _T303;
	    _T303 = _T301.f0;
	    _T302 = _T301.f1;
	    { void * t = _T303;
	      struct Cyc_AssnDef_AssnMap am = _T302;
	      _TD2 = tp;
	      _TD3 = e1;
	      _TD4 = _TD3->topt;
	      _TD5 = _check_null(_TD4);
	      _TD6 = Cyc_Unify_unify(_TD2,_TD5);
	      if (! _TD6) { goto _TLD0;
	      }
	      { struct _tuple14 _T304;
		_T304.f0 = t;
		_T304.f1 = am;
		_TD7 = _T304;
	      }return _TD7;
	      _TLD0: { struct _tuple0 _T304;
		_T304.f0 = Cyc_Absyn_compress(tp);
		_TD9 = e1;
		_TDA = _TD9->topt;
		_TDB = _check_null(_TDA);
		_T304.f1 = Cyc_Absyn_compress(_TDB);
		_TD8 = _T304;
	      }{ struct _tuple0 _T304 = _TD8;
		struct Cyc_Absyn_PtrInfo _T305;
		enum Cyc_Absyn_Size_of _T306;
		enum Cyc_Absyn_Sign _T307;
		enum Cyc_Absyn_Size_of _T308;
		enum Cyc_Absyn_Sign _T309;
		struct Cyc_Absyn_PtrInfo _T30A;
		struct Cyc_List_List * _T30B;
		struct Cyc_Absyn_Vardecl * _T30C;
		struct Cyc_AssnDef_ExistAssnFn * _T30D;
		_TDC = _T304.f0;
		_TDD = (int *)_TDC;
		_TDE = *_TDD;
		if (_TDE != 12) { goto _TLD2;
		}
		_TDF = _T304.f0;
		{ struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_TDF;
		  _T30D = _T30E->f3;
		}_TE0 = c;
		_TE1 = (int)_TE0;
		if (_TE1 != 1) { goto _TLD4;
		}
		{ struct Cyc_AssnDef_ExistAssnFn * af = _T30D;
		  { struct _tuple14 _T30E;
		    _T30E.f0 = t;
		    _T30E.f1 = am;
		    _TE2 = _T30E;
		  }return _TE2;
		}_TLD4: _TE3 = _T304.f1;
		_TE4 = (int *)_TE3;
		_TE5 = *_TE4;
		if (_TE5 != 12) { goto _TLD6;
		}
		goto _LLCD;
		_TLD6: _TE6 = _T304.f0;
		{ struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_TE6;
		  _T30C = _T30E->f1;
		  _T30D = _T30E->f3;
		}{ struct Cyc_Absyn_Vardecl * vd = _T30C;
		  struct Cyc_AssnDef_ExistAssnFn * af = _T30D;
		  _TE7 = _check_null(af);
		  { struct Cyc_List_List * _T30E = _cycalloc(sizeof(struct Cyc_List_List));
		    _T30E->hd = t;
		    _T30E->tl = 0;
		    _TE8 = (struct Cyc_List_List *)_T30E;
		  }{ void * check = Cyc_AssnDef_existassnfn2assn(_TE7,_TE8);
		    _TE9 = am;
		    _TEA = _TE9.assn;
		    _TEB = check;
		    _TEC = Cyc_Vcgen_implies(_TEA,_TEB);
		    if (! _TEC) { goto _TLD8;
		    }
		    { struct Cyc_String_pa_PrintArg_struct _T30E;
		      _T30E.tag = 0;
		      _T30E.f1 = Cyc_AssnDef_assn2string(check);
		      _TED = _T30E;
		    }{ struct Cyc_String_pa_PrintArg_struct _T30E = _TED;
		      { struct Cyc_String_pa_PrintArg_struct _T30F;
			_T30F.tag = 0;
			_T30F.f1 = Cyc_AssnDef_assnmap2string(amin);
			_TEE = _T30F;
		      }{ struct Cyc_String_pa_PrintArg_struct _T30F = _TEE;
			void * _T310[2];
			_T310[0] = &_T30E;
			_T310[1] = &_T30F;
			_TEF = e;
			_TF0 = _TEF->loc;
			_TF1 = _tag_fat("cannot prove that @subset predicate\n\t%s\nholds from\n\t%s",
					sizeof(char),55U);
			_TF2 = _tag_fat(_T310,sizeof(void *),2);
			Cyc_Warn_err(_TF0,_TF1,_TF2);
		      }
		    }goto _TLD9;
		    _TLD8: _TLD9: _TF3 = am;
		    _TF4 = _TF3.assn;
		    _TF5 = check;
		    am.assn = Cyc_AssnDef_and(_TF4,_TF5);
		    { struct _tuple14 _T30E;
		      _T30E.f0 = t;
		      _T30E.f1 = am;
		      _TF6 = _T30E;
		    }return _TF6;
		  }
		}_TLD2: _TF7 = _T304.f1;
		_TF8 = (int *)_TF7;
		_TF9 = *_TF8;
		if (_TF9 != 12) { goto _TLDA;
		}
		_LLCD: _TFA = _T304.f1;
		{ struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_TFA;
		  _T30D = _T30E->f3;
		}_TFB = c;
		_TFC = (int)_TFB;
		if (_TFC != 1) { goto _TLDC;
		}
		{ struct Cyc_AssnDef_ExistAssnFn * af = _T30D;
		  { struct _tuple14 _T30E;
		    _T30E.f0 = t;
		    _T30E.f1 = am;
		    _TFD = _T30E;
		  }return _TFD;
		}_TLDC: _TFE = _T304.f0;
		_TFF = (int *)_TFE;
		_T100 = *_TFF;
		switch (_T100) {
		case 0: 
		  _T101 = _T304.f0;
		  _T102 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T101;
		  _T103 = _T102->f1;
		  _T104 = (int *)_T103;
		  _T105 = *_T104;
		  if (_T105 != 1) { goto _TLDF;
		  }
		  _T106 = _T304.f0;
		  _T107 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T106;
		  _T108 = _T107->f1;
		  _T109 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T108;
		  _T10A = _T109->f2;
		  _T10B = (int)_T10A;
		  switch (_T10B) {
		  case Cyc_Absyn_Int_sz: 
		    goto _LLDD;
		  case Cyc_Absyn_Long_sz: 
		    goto _LLDD;
		  default: 
		    goto _LLDD;
		  }
		  goto _TLE0;
		  _TLDF: goto _LLDD;
		  _TLE0: ;
		case 4: 
		  goto _LLDD;
		default: 
		  goto _LLDD;
		}
		goto _TLDB;
		_TLDA: _T10C = _T304.f0;
		_T10D = (int *)_T10C;
		_T10E = *_T10D;
		switch (_T10E) {
		case 0: 
		  _T10F = _T304.f0;
		  _T110 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T10F;
		  _T111 = _T110->f1;
		  _T112 = (int *)_T111;
		  _T113 = *_T112;
		  if (_T113 != 1) { goto _TLE3;
		  }
		  _T114 = _T304.f0;
		  _T115 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T114;
		  _T116 = _T115->f1;
		  _T117 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T116;
		  _T118 = _T117->f2;
		  _T119 = (int)_T118;
		  switch (_T119) {
		  case Cyc_Absyn_Int_sz: 
		    _T11A = _T304.f1;
		    _T11B = (int *)_T11A;
		    _T11C = *_T11B;
		    switch (_T11C) {
		    case 0: 
		      _T11D = _T304.f1;
		      _T11E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11D;
		      _T11F = _T11E->f1;
		      _T120 = (int *)_T11F;
		      _T121 = *_T120;
		      switch (_T121) {
		      case 5: 
			_T122 = _T304.f1;
			{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T122;
			  _T30B = _T30E->f2;
			}{ struct Cyc_List_List * tagtps = _T30B;
			  { struct _tuple14 _T30E;
			    _T124 = _check_null(tagtps);
			    _T125 = _T124->hd;
			    _T126 = e1;
			    _T127 = _T126->loc;
			    _T128 = Cyc_Absyn_valueof_exp(_T125,_T127);
			    _T30E.f0 = Cyc_AssnDef_cnst(_T128);
			    _T30E.f1 = am;
			    _T123 = _T30E;
			  }return _T123;
			}
		      case 1: 
			goto _LLD5;
		      default: 
			goto _LLDD;
		      }
		      ;
		    case 4: 
		      _T129 = _T304.f1;
		      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T129;
			_T30A = _T30E->f1;
		      }{ struct Cyc_Absyn_PtrInfo pi = _T30A;
			_T30A = pi;
			goto _LLDA;
		      }
		    default: 
		      goto _LLDD;
		    }
		    ;
		  case Cyc_Absyn_Long_sz: 
		    _T12A = _T304.f1;
		    _T12B = (int *)_T12A;
		    _T12C = *_T12B;
		    switch (_T12C) {
		    case 0: 
		      _T12D = _T304.f1;
		      _T12E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12D;
		      _T12F = _T12E->f1;
		      _T130 = (int *)_T12F;
		      _T131 = *_T130;
		      switch (_T131) {
		      case 5: 
			_T132 = _T304.f1;
			{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T132;
			  _T30B = _T30E->f2;
			}{ struct Cyc_List_List * tagtps = _T30B;
			  { struct _tuple14 _T30E;
			    _T134 = _check_null(tagtps);
			    _T135 = _T134->hd;
			    _T136 = e1;
			    _T137 = _T136->loc;
			    _T138 = Cyc_Absyn_valueof_exp(_T135,_T137);
			    _T30E.f0 = Cyc_AssnDef_cnst(_T138);
			    _T30E.f1 = am;
			    _T133 = _T30E;
			  }return _T133;
			}
		      case 1: 
			goto _LLD5;
		      default: 
			goto _LLDD;
		      }
		      ;
		    case 4: 
		      _T139 = _T304.f1;
		      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T139;
			_T30A = _T30E->f1;
		      }_LLDA: { struct Cyc_Absyn_PtrInfo pi = _T30A;
			_T13A = Cyc_Absyn_bounds_one();
			_T13B = pi;
			_T13C = _T13B.ptr_atts;
			_T13D = _T13C.bounds;
			_T13E = Cyc_Tcutil_get_bounds_exp_constrain(_T13A,
								    _T13D,
								    1);
			if (_T13E == 0) { goto _TLEA;
			}
			{ struct _tuple14 _T30E;
			  _T30E.f0 = t;
			  _T30E.f1 = am;
			  _T13F = _T30E;
			}return _T13F;
			_TLEA: goto _LLCA;
		      }
		    default: 
		      goto _LLDD;
		    }
		    ;
		  default: 
		    _T140 = _T304.f1;
		    _T141 = (int *)_T140;
		    _T142 = *_T141;
		    if (_T142 != 0) { goto _TLEC;
		    }
		    _T143 = _T304.f1;
		    _T144 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T143;
		    _T145 = _T144->f1;
		    _T146 = (int *)_T145;
		    _T147 = *_T146;
		    if (_T147 != 1) { goto _TLEE;
		    }
		    _LLD5: _T148 = _T304.f0;
		    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T148;
		      _T149 = _T30E->f1;
		      { struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T30F = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T149;
			_T309 = _T30F->f1;
			_T308 = _T30F->f2;
		      }
		    }_T14A = _T304.f1;
		    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T14A;
		      _T14B = _T30E->f1;
		      { struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T30F = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T14B;
			_T307 = _T30F->f1;
			_T306 = _T30F->f2;
		      }
		    }{ enum Cyc_Absyn_Sign u1 = _T309;
		      enum Cyc_Absyn_Size_of s1 = _T308;
		      enum Cyc_Absyn_Sign u2 = _T307;
		      enum Cyc_Absyn_Size_of s2 = _T306;
		      _T14D = s1;
		      _T14E = (int)_T14D;
		      if (_T14E != 3) { goto _TLF0;
		      }
		      _T14C = 2U;
		      goto _TLF1;
		      _TLF0: _T14C = s1;
		      _TLF1: s1 = _T14C;
		      _T150 = s2;
		      _T151 = (int)_T150;
		      if (_T151 != 3) { goto _TLF2;
		      }
		      _T14F = 2U;
		      goto _TLF3;
		      _TLF2: _T14F = s2;
		      _TLF3: s2 = _T14F;
		      _T152 = s1;
		      _T153 = (int)_T152;
		      _T154 = s2;
		      _T155 = (int)_T154;
		      if (_T153 != _T155) { goto _TLF4;
		      }
		      { struct _tuple14 _T30E;
			_T30E.f0 = t;
			_T30E.f1 = am;
			_T156 = _T30E;
		      }return _T156;
		      _TLF4: goto _LLCA;
		    }_TLEE: goto _LLDD;
		    _TLEC: goto _LLDD;
		  }
		  goto _TLE4;
		  _TLE3: goto _LLDD;
		  _TLE4: ;
		case 4: 
		  _T157 = _T304.f1;
		  _T158 = (int *)_T157;
		  _T159 = *_T158;
		  if (_T159 != 4) { goto _TLF6;
		  }
		  _T15A = _T304.f0;
		  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T15A;
		    _T30A = _T30E->f1;
		  }_T15B = _T304.f1;
		  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T30E = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T15B;
		    _T305 = _T30E->f1;
		  }{ struct Cyc_Absyn_PtrInfo p2 = _T30A;
		    struct Cyc_Absyn_PtrInfo p1 = _T305;
		    _T15C = p1;
		    _T15D = _T15C.ptr_atts;
		    _T15E = _T15D.nullable;
		    { long n1 = Cyc_Tcutil_force_type2bool(0,_T15E);
		      _T15F = p2;
		      _T160 = _T15F.ptr_atts;
		      _T161 = _T160.nullable;
		      { long n2 = Cyc_Tcutil_force_type2bool(0,_T161);
			_T162 = Cyc_Absyn_bounds_one();
			_T163 = p1;
			_T164 = _T163.ptr_atts;
			_T165 = _T164.bounds;
			{ struct Cyc_Absyn_Exp * b1 = Cyc_Tcutil_get_bounds_exp_constrain(_T162,
											  _T165,
											  1);
			  _T166 = Cyc_Absyn_bounds_one();
			  _T167 = p2;
			  _T168 = _T167.ptr_atts;
			  _T169 = _T168.bounds;
			  { struct Cyc_Absyn_Exp * b2 = Cyc_Tcutil_get_bounds_exp_constrain(_T166,
											    _T169,
											    1);
			    { struct _tuple25 _T30E;
			      _T30E.f0 = b1;
			      _T30E.f1 = b2;
			      _T16A = _T30E;
			    }{ struct _tuple25 _T30E = _T16A;
			      _T16B = _T30E.f0;
			      if (_T16B == 0) { goto _TLF8;
			      }
			      _T16C = _T30E.f1;
			      if (_T16C == 0) { goto _TLFA;
			      }
			      _T16D = env;
			      _T16E = _T16D->pure_exp;
			      if (_T16E) { goto _TLFC;
			      }else { goto _TLFE;
			      }
			      _TLFE: _T16F = n1;
			      if (! _T16F) { goto _TLFF;
			      }
			      _T170 = n2;
			      if (_T170) { goto _TLFF;
			      }else { goto _TL101;
			      }
			      _TL101: _T171 = Cyc_AssnDef_zero();
			      _T172 = t;
			      { void * null_check = Cyc_AssnDef_neq(_T171,
								    _T172);
				struct Cyc_Vcgen_ExpChecks * exp_checks;
				exp_checks = _cycalloc(sizeof(struct Cyc_Vcgen_ExpChecks));
				_T173 = exp_checks;
				_T173->ctxt = am;
				_T174 = exp_checks;
				_T175 = &Cyc_AssnDef_true_assn;
				_T176 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T175;
				_T174->bounds_check = (void *)_T176;
				_T177 = exp_checks;
				_T177->null_check = null_check;
				_T178 = env;
				_T179 = _T178->assn_info;
				_T17A = e1;
				_T17B = exp_checks;
				Cyc_Vcgen_insert_exp_checks(_T179,_T17A,_T17B);
				_T17C = env;
				_T17D = am;
				_T17E = t;
				_T17F = Cyc_AssnDef_zero();
				_T180 = Cyc_AssnDef_eq(_T17E,_T17F);
				_T181 = Cyc_AssnDef_and_assnmap_assn(_T17D,
								     _T180);
				_T182 = Cyc_Absyn_exn_type();
				_T183 = Cyc_AssnDef_fresh_var(0,_T182);
				Cyc_Vcgen_update_try_assnmap(_T17C,_T181,
							     _T183);
				{ struct _tuple14 _T30F;
				  _T30F.f0 = t;
				  _T30F.f1 = Cyc_AssnDef_and_assnmap_assn(am,
									  null_check);
				  _T184 = _T30F;
				}return _T184;
			      }_TLFF: { struct _tuple14 _T30F;
				_T30F.f0 = t;
				_T30F.f1 = am;
				_T185 = _T30F;
			      }return _T185;
			      _TLFC: goto _LLE6;
			      _TLFA: { struct _tuple14 _T30F;
				_T30F.f0 = t;
				_T30F.f1 = am;
				_T186 = _T30F;
			      }return _T186;
			      _TLF8: _T187 = _T30E.f1;
			      if (_T187 == 0) { goto _TL102;
			      }
			      _T188 = env;
			      _T189 = _T188->pure_exp;
			      if (_T189) { goto _TL104;
			      }else { goto _TL106;
			      }
			      _TL106: _T18B = env;
			      _T18C = _T18B->pure_exp;
			      if (_T18C) { goto _TL109;
			      }else { goto _TL10A;
			      }
			      _TL10A: _T18D = n2;
			      if (_T18D) { goto _TL109;
			      }else { goto _TL107;
			      }
			      _TL109: _T18E = &Cyc_AssnDef_true_assn;
			      _T18F = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T18E;
			      _T18A = (void *)_T18F;
			      goto _TL108;
			      _TL107: _T190 = Cyc_AssnDef_zero();
			      _T191 = t;
			      _T18A = Cyc_AssnDef_neq(_T190,_T191);
			      _TL108: { void * null_check = _T18A;
				struct _tuple14 _T30F = Cyc_Vcgen_vcgen_rexp(env,
									     b2,
									     am);
				void * _T310;
				_T310 = _T30F.f0;
				{ void * b = _T310;
				  _T192 = p1;
				  _T193 = _T192.ptr_atts;
				  _T194 = _T193.zero_term;
				  { long zt1 = Cyc_Tcutil_force_type2bool(0,
									  _T194);
				    _T195 = p2;
				    _T196 = _T195.ptr_atts;
				    _T197 = _T196.zero_term;
				    { long zt2 = Cyc_Tcutil_force_type2bool(0,
									    _T197);
				      _T198 = zt1;
				      if (! _T198) { goto _TL10B;
				      }
				      _T199 = zt2;
				      if (_T199) { goto _TL10B;
				      }else { goto _TL10D;
				      }
				      _TL10D: _T19A = b;
				      _T19B = Cyc_AssnDef_one();
				      _T19C = Cyc_AssnDef_get_term_type(b);
				      b = Cyc_AssnDef_plus(_T19A,_T19B,_T19C);
				      goto _TL10C;
				      _TL10B: _TL10C: _T19D = b;
				      _T19E = Cyc_AssnDef_numelts_term(t);
				      { void * bcheck = Cyc_AssnDef_ulte(_T19D,
									 _T19E);
					struct Cyc_Vcgen_ExpChecks * exp_checks;
					exp_checks = _cycalloc(sizeof(struct Cyc_Vcgen_ExpChecks));
					_T19F = exp_checks;
					_T19F->ctxt = am;
					_T1A0 = exp_checks;
					_T1A0->bounds_check = bcheck;
					_T1A1 = exp_checks;
					_T1A1->null_check = null_check;
					_T1A2 = env;
					_T1A3 = _T1A2->assn_info;
					_T1A4 = e1;
					_T1A5 = exp_checks;
					Cyc_Vcgen_insert_exp_checks(_T1A3,
								    _T1A4,
								    _T1A5);
					{ void * checks = Cyc_AssnDef_and(null_check,
									  bcheck);
					  _T1A6 = env;
					  _T1A7 = am;
					  _T1A8 = Cyc_AssnDef_not(checks);
					  _T1A9 = Cyc_AssnDef_and_assnmap_assn(_T1A7,
									       _T1A8);
					  _T1AA = Cyc_Absyn_exn_type();
					  _T1AB = Cyc_AssnDef_fresh_var(0,
									_T1AA);
					  Cyc_Vcgen_update_try_assnmap(_T1A6,
								       _T1A9,
								       _T1AB);
					  { struct _tuple14 _T311;
					    _T311.f0 = t;
					    _T311.f1 = Cyc_AssnDef_and_assnmap_assn(am,
										    checks);
					    _T1AC = _T311;
					  }return _T1AC;
					}
				      }
				    }
				  }
				}
			      }_TL104: goto _LLE6;
			      _TL102: _LLE6: { struct _tuple14 _T30F;
				_T30F.f0 = t;
				_T30F.f1 = am;
				_T1AD = _T30F;
			      }return _T1AD;
			      ;
			    }
			  }
			}
		      }
		    }
		  }goto _TLF7;
		  _TLF6: goto _LLDD;
		  _TLF7: ;
		default: 
		  _LLDD: goto _LLCA;
		}
		_TLDB: _LLCA: ;
	      }_T1AE = env;
	      _T1AF = _T1AE->pure_exp;
	      if (_T1AF) { goto _TL110;
	      }else { goto _TL111;
	      }
	      _TL111: _T1B0 = c;
	      _T1B1 = (int)_T1B0;
	      if (_T1B1 == 1) { goto _TL110;
	      }else { goto _TL10E;
	      }
	      _TL110: { struct _tuple14 _T304;
		_T304.f0 = Cyc_AssnDef_cast(tp,t);
		_T304.f1 = am;
		_T1B2 = _T304;
	      }return _T1B2;
	      _TL10E: _T1B3 = env;
	      _T1B4 = amin;
	      _T1B5 = Cyc_Absyn_exn_type();
	      _T1B6 = Cyc_AssnDef_fresh_var(0,_T1B5);
	      Cyc_Vcgen_update_try_assnmap(_T1B3,_T1B4,_T1B6);
	      { struct _tuple14 _T304;
		_T304.f0 = t;
		_T304.f1 = am;
		_T1B7 = _T304;
	      }return _T1B7;
	    }
	  }
	}
      }
    case 16: 
      { struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FB = _T301->f2;
	_T2F9 = _T301->f3;
      }{ struct Cyc_Absyn_Exp * eopt = _T2FE;
	struct Cyc_Absyn_Exp * e1 = _T2FB;
	struct Cyc_Absyn_Exp * qopt = _T2F9;
	if (eopt == 0) { goto _TL112;
	}
	_T1B8 = Cyc_Vcgen_vcgen_rexp(env,eopt,amin);
	amin = _T1B8.f1;
	goto _TL113;
	_TL112: _TL113: if (qopt == 0) { goto _TL114;
	}
	_T1B9 = Cyc_Vcgen_vcgen_rexp(env,qopt,amin);
	amin = _T1B9.f1;
	goto _TL115;
	_TL114: _TL115: _T1BA = e1;
	{ void * _T301 = _T1BA->r;
	  struct Cyc_Absyn_Exp * _T302;
	  struct Cyc_Absyn_Exp * _T303;
	  struct Cyc_Absyn_Vardecl * _T304;
	  struct Cyc_List_List * _T305;
	  _T1BB = (int *)_T301;
	  _T1BC = *_T1BB;
	  switch (_T1BC) {
	  case 25: 
	    { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T306 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T301;
	      _T305 = _T306->f1;
	    }{ struct Cyc_List_List * dles = _T305;
	      struct _tuple14 _T306 = Cyc_Vcgen_vcgen_rexp(env,e1,amin);
	      struct Cyc_AssnDef_AssnMap _T307;
	      _T307 = _T306.f1;
	      { struct Cyc_AssnDef_AssnMap amin = _T307;
		_T1BD = Cyc_List_length(dles);
		_T1BE = (unsigned int)_T1BD;
		{ void * size = Cyc_AssnDef_uint(_T1BE);
		  _T1BF = env;
		  _T1C0 = e;
		  _T1C1 = Cyc_List_length(dles);
		  _T1C2 = (unsigned int)_T1C1;
		  _T1C3 = Cyc_AssnDef_uint(_T1C2);
		  _T1C4 = e;
		  _T1C5 = _T1C4->topt;
		  { void * res = Cyc_Vcgen_myalloc(_T1BF,_T1C0,_T1C3,_T1C5);
		    _T1C6 = amin;
		    _T1C7 = res;
		    _T1C8 = Cyc_AssnDef_zero();
		    _T1C9 = Cyc_AssnDef_neq(_T1C7,_T1C8);
		    _T1CA = Cyc_AssnDef_numelts_term(res);
		    _T1CB = size;
		    _T1CC = Cyc_AssnDef_eq(_T1CA,_T1CB);
		    _T1CD = Cyc_AssnDef_and(_T1C9,_T1CC);
		    amin = Cyc_AssnDef_and_assnmap_assn(_T1C6,_T1CD);
		    { struct _tuple14 _T308;
		      _T308.f0 = res;
		      _T308.f1 = amin;
		      _T1CE = _T308;
		    }return _T1CE;
		  }
		}
	      }
	    }
	  case 26: 
	    { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T306 = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T301;
	      _T304 = _T306->f1;
	      _T303 = _T306->f2;
	      _T302 = _T306->f3;
	    }{ struct Cyc_Absyn_Vardecl * vd = _T304;
	      struct Cyc_Absyn_Exp * e1 = _T303;
	      struct Cyc_Absyn_Exp * e2 = _T302;
	      _T1CF = env;
	      _T1D0 = vd;
	      _T1D1 = e1;
	      _T1D2 = e2;
	      _T1D3 = e;
	      _T1D4 = _T1D3->topt;
	      _T1D5 = _check_null(_T1D4);
	      _T1D6 = amin;
	      { struct _tuple14 _T306 = Cyc_Vcgen_vcgen_comprehension(_T1CF,
								      _T1D0,
								      _T1D1,
								      _T1D2,
								      _T1D5,
								      _T1D6);
		struct Cyc_AssnDef_AssnMap _T307;
		void * _T308;
		_T308 = _T306.f0;
		_T307 = _T306.f1;
		{ void * res = _T308;
		  struct Cyc_AssnDef_AssnMap amin = _T307;
		  _T1D7 = amin;
		  _T1D8 = res;
		  _T1D9 = Cyc_AssnDef_zero();
		  _T1DA = Cyc_AssnDef_neq(_T1D8,_T1D9);
		  amin = Cyc_AssnDef_and_assnmap_assn(_T1D7,_T1DA);
		  { struct _tuple14 _T309;
		    _T309.f0 = res;
		    _T309.f1 = amin;
		    _T1DB = _T309;
		  }return _T1DB;
		}
	      }
	    }
	  default: 
	    { struct _tuple14 _T306 = Cyc_Vcgen_vcgen_rexp(env,e1,amin);
	      struct Cyc_AssnDef_AssnMap _T307;
	      void * _T308;
	      _T308 = _T306.f0;
	      _T307 = _T306.f1;
	      { void * t = _T308;
		struct Cyc_AssnDef_AssnMap amin = _T307;
		_T1DC = env;
		_T1DD = e;
		_T1DE = Cyc_AssnDef_one();
		_T1DF = e;
		_T1E0 = _T1DF->topt;
		{ void * res = Cyc_Vcgen_myalloc(_T1DC,_T1DD,_T1DE,_T1E0);
		  struct _tuple14 _T309 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
								     amin);
		  struct Cyc_AssnDef_AssnMap _T30A;
		  void * _T30B;
		  _T30B = _T309.f0;
		  _T30A = _T309.f1;
		  { void * mem = _T30B;
		    struct Cyc_AssnDef_AssnMap amin = _T30A;
		    _T1E1 = amin;
		    _T1E2 = mem;
		    _T1E3 = res;
		    _T1E4 = e1;
		    _T1E5 = _T1E4->topt;
		    _T1E6 = Cyc_AssnDef_select(_T1E2,_T1E3,_T1E5);
		    _T1E7 = t;
		    _T1E8 = Cyc_AssnDef_eq(_T1E6,_T1E7);
		    _T1E9 = res;
		    _T1EA = Cyc_AssnDef_zero();
		    _T1EB = Cyc_AssnDef_neq(_T1E9,_T1EA);
		    _T1EC = Cyc_AssnDef_and(_T1E8,_T1EB);
		    amin = Cyc_AssnDef_and_assnmap_assn(_T1E1,_T1EC);
		    { struct _tuple14 _T30C;
		      _T30C.f0 = res;
		      _T30C.f1 = amin;
		      _T1ED = _T30C;
		    }return _T1ED;
		  }
		}
	      }
	    }
	  }
	  ;
	}
      }
    case 31: 
      goto _LL28;
    case 32: 
      _LL28: goto _LL2A;
    case 17: 
      _LL2A: goto _LL2C;
    case 18: 
      _LL2C: goto _LL2E;
    case 38: 
      _LL2E: goto _LL30;
    case 19: 
      _LL30: { struct _tuple16 _T301 = Cyc_Evexp_eval_const_uint_exp(e);
	long _T302;
	unsigned int _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ unsigned int cn = _T303;
	  long known = _T302;
	  _T1EE = known;
	  if (! _T1EE) { goto _TL117;
	  }
	  { struct _tuple14 _T304;
	    _T304.f0 = Cyc_AssnDef_uint(cn);
	    _T304.f1 = amin;
	    _T1EF = _T304;
	  }return _T1EF;
	  _TL117: { struct _tuple14 _T304;
	    _T304.f0 = Cyc_AssnDef_cnst(e);
	    _T304.f1 = amin;
	    _T1F0 = _T304;
	  }return _T1F0;
	}
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2F8 = _T301->f2;
	_T2F7 = _T301->f3;
	_T2F6 = _T301->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct _fat_ptr * f = _T2F8;
	long is_tagged = _T2F7;
	long is_read = _T2F6;
	struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	void * _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ void * t = _T303;
	  struct Cyc_AssnDef_AssnMap amin = _T302;
	  _T1F1 = e1;
	  _T1F2 = _T1F1->topt;
	  _T1F3 = _check_null(_T1F2);
	  _T1F4 = f;
	  { int i = Cyc_CfFlowInfo_get_field_index(_T1F3,_T1F4);
	    _T1F5 = env;
	    _T1F6 = _T1F5->pure_exp;
	    if (_T1F6) { goto _TL119;
	    }else { goto _TL11B;
	    }
	    _TL11B: _T1F7 = is_tagged;
	    if (! _T1F7) { goto _TL119;
	    }
	    _T1F8 = is_read;
	    if (! _T1F8) { goto _TL119;
	    }
	    _T1F9 = Cyc_AssnDef_tagof_tm(t);
	    _T1FA = i;
	    _T1FB = (unsigned int)_T1FA;
	    _T1FC = Cyc_AssnDef_uint(_T1FB);
	    { void * ck = Cyc_AssnDef_eq(_T1F9,_T1FC);
	      _T1FD = env;
	      _T1FE = amin;
	      _T1FF = Cyc_AssnDef_not(ck);
	      _T200 = Cyc_AssnDef_and_assnmap_assn(_T1FE,_T1FF);
	      _T201 = Cyc_Absyn_exn_type();
	      _T202 = Cyc_AssnDef_fresh_var(0,_T201);
	      Cyc_Vcgen_update_try_assnmap(_T1FD,_T200,_T202);
	      amin = Cyc_AssnDef_and_assnmap_assn(amin,ck);
	    }goto _TL11A;
	    _TL119: _TL11A: { struct _tuple14 _T304;
	      _T204 = t;
	      _T205 = i;
	      _T206 = (unsigned int)_T205;
	      _T207 = e;
	      _T208 = _T207->topt;
	      _T304.f0 = Cyc_AssnDef_proj(_T204,_T206,_T208);
	      _T304.f1 = amin;
	      _T203 = _T304;
	    }return _T203;
	  }
	}
      }
    case 37: 
      { struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2F8 = _T301->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct _fat_ptr * f = _T2F8;
	_T209 = e1;
	_T20A = _T209->topt;
	_T20B = _check_null(_T20A);
	_T20C = f;
	{ int i = Cyc_CfFlowInfo_get_field_index(_T20B,_T20C);
	  struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(env,e1,amin);
	  struct Cyc_AssnDef_AssnMap _T302;
	  void * _T303;
	  _T303 = _T301.f0;
	  _T302 = _T301.f1;
	  { void * t = _T303;
	    struct Cyc_AssnDef_AssnMap am = _T302;
	    _T20D = env;
	    _T20E = Cyc_Absyn_sint_type;
	    _T20F = Cyc_AssnDef_tagof_tm(t);
	    _T210 = i;
	    _T211 = (unsigned int)_T210;
	    _T212 = Cyc_AssnDef_uint(_T211);
	    _T213 = am;
	    _T214 = Cyc_Vcgen_vcgen_binop(_T20D,_T20E,5U,_T20F,_T212,_T213);
	    return _T214;
	  }
	}
      }
    case 15: 
      { struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	_T215 = Cyc_Vcgen_vcgen_lexp(env,e1,amin);
	return _T215;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	_T216 = env;
	_T217 = e1;
	_T218 = Cyc_Vcgen_zero_exp();
	_T219 = amin;
	{ struct _tuple24 _T301 = Cyc_Vcgen_vcgen_deref(_T216,_T217,_T218,
							_T219);
	  struct Cyc_AssnDef_AssnMap _T302;
	  void * _T303;
	  _T303 = _T301.f0;
	  _T302 = _T301.f2;
	  { void * t1 = _T303;
	    struct Cyc_AssnDef_AssnMap amin = _T302;
	    struct _tuple14 _T304 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
							       amin);
	    struct Cyc_AssnDef_AssnMap _T305;
	    void * _T306;
	    _T306 = _T304.f0;
	    _T305 = _T304.f1;
	    { void * mem = _T306;
	      struct Cyc_AssnDef_AssnMap amin = _T305;
	      { struct _tuple14 _T307;
		_T21B = mem;
		_T21C = t1;
		_T21D = e;
		_T21E = _T21D->topt;
		_T307.f0 = Cyc_AssnDef_select(_T21B,_T21C,_T21E);
		_T307.f1 = amin;
		_T21A = _T307;
	      }return _T21A;
	    }
	  }
	}
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2F8 = _T301->f2;
	_T2F7 = _T301->f3;
	_T2F6 = _T301->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct _fat_ptr * f = _T2F8;
	long is_tagged = _T2F7;
	long is_read = _T2F6;
	_T21F = env;
	_T220 = e1;
	_T221 = Cyc_Vcgen_zero_exp();
	_T222 = amin;
	{ struct _tuple24 _T301 = Cyc_Vcgen_vcgen_deref(_T21F,_T220,_T221,
							_T222);
	  struct Cyc_AssnDef_AssnMap _T302;
	  void * _T303;
	  _T303 = _T301.f0;
	  _T302 = _T301.f2;
	  { void * t1 = _T303;
	    struct Cyc_AssnDef_AssnMap amin = _T302;
	    _T223 = e1;
	    _T224 = _T223->topt;
	    _T225 = _check_null(_T224);
	    _T226 = Cyc_Tcutil_pointer_elt_type(_T225);
	    _T227 = f;
	    { int i = Cyc_CfFlowInfo_get_field_index(_T226,_T227);
	      struct _tuple14 _T304 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
								 amin);
	      struct Cyc_AssnDef_AssnMap _T305;
	      void * _T306;
	      _T306 = _T304.f0;
	      _T305 = _T304.f1;
	      { void * mem = _T306;
		struct Cyc_AssnDef_AssnMap amin = _T305;
		_T228 = env;
		_T229 = _T228->pure_exp;
		if (_T229) { goto _TL11C;
		}else { goto _TL11E;
		}
		_TL11E: _T22A = is_tagged;
		if (! _T22A) { goto _TL11C;
		}
		_T22B = is_read;
		if (! _T22B) { goto _TL11C;
		}
		_T22C = Cyc_AssnDef_select(mem,t1,0);
		_T22D = Cyc_AssnDef_tagof_tm(_T22C);
		_T22E = i;
		_T22F = (unsigned int)_T22E;
		_T230 = Cyc_AssnDef_uint(_T22F);
		{ void * ck = Cyc_AssnDef_eq(_T22D,_T230);
		  _T231 = env;
		  _T232 = amin;
		  _T233 = Cyc_AssnDef_not(ck);
		  _T234 = Cyc_AssnDef_and_assnmap_assn(_T232,_T233);
		  _T235 = Cyc_Absyn_exn_type();
		  _T236 = Cyc_AssnDef_fresh_var(0,_T235);
		  Cyc_Vcgen_update_try_assnmap(_T231,_T234,_T236);
		  amin = Cyc_AssnDef_and_assnmap_assn(amin,ck);
		}goto _TL11D;
		_TL11C: _TL11D: _T237 = e1;
		_T238 = _T237->topt;
		_T239 = _check_null(_T238);
		{ void * elt_type = Cyc_Tcutil_pointer_elt_type(_T239);
		  { struct _tuple14 _T307;
		    _T23B = Cyc_AssnDef_select(mem,t1,elt_type);
		    _T23C = i;
		    _T23D = (unsigned int)_T23C;
		    _T23E = e;
		    _T23F = _T23E->topt;
		    _T307.f0 = Cyc_AssnDef_proj(_T23B,_T23D,_T23F);
		    _T307.f1 = amin;
		    _T23A = _T307;
		  }return _T23A;
		}
	      }
	    }
	  }
	}
      }
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FB = _T301->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct Cyc_Absyn_Exp * e2 = _T2FB;
	struct _tuple24 _T301 = Cyc_Vcgen_vcgen_deref(env,e1,e2,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	void * _T303;
	void * _T304;
	_T304 = _T301.f0;
	_T303 = _T301.f1;
	_T302 = _T301.f2;
	{ void * t1 = _T304;
	  void * t2 = _T303;
	  struct Cyc_AssnDef_AssnMap amin = _T302;
	  struct _tuple14 _T305 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
							     amin);
	  struct Cyc_AssnDef_AssnMap _T306;
	  void * _T307;
	  _T307 = _T305.f0;
	  _T306 = _T305.f1;
	  { void * mem = _T307;
	    struct Cyc_AssnDef_AssnMap amin = _T306;
	    { struct _tuple14 _T308;
	      _T241 = mem;
	      _T242 = Cyc_AssnDef_plus(t1,t2,0);
	      _T243 = e;
	      _T244 = _T243->topt;
	      _T308.f0 = Cyc_AssnDef_select(_T241,_T242,_T244);
	      _T308.f1 = amin;
	      _T240 = _T308;
	    }return _T240;
	  }
	}
      }
    case 30: 
      { struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2F5 = _T301->f2;
	_T2F4 = _T301->f3;
      }{ struct Cyc_List_List * es = _T2FE;
	struct Cyc_Absyn_Datatypedecl * dd = _T2F5;
	struct Cyc_Absyn_Datatypefield * df = _T2F4;
	struct _tuple19 _T301 = Cyc_Vcgen_vcgen_rexps(env,es,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	struct Cyc_List_List * _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ struct Cyc_List_List * ts = _T303;
	  struct Cyc_AssnDef_AssnMap amin = _T302;
	  unsigned int i = Cyc_Vcgen_datatype_constructor_index(dd,df);
	  { struct _tuple14 _T304;
	    _T246 = i;
	    _T247 = ts;
	    _T248 = e;
	    _T249 = _T248->topt;
	    _T304.f0 = Cyc_AssnDef_datatype_aggr(_T246,_T247,_T249);
	    _T304.f1 = amin;
	    _T245 = _T304;
	  }return _T245;
	}
      }
    case 24: 
      { struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f2;
      }{ struct Cyc_List_List * dles = _T2FE;
	_T2FE = dles;
	goto _LL42;
      }
    case 25: 
      { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
      }_LL42: { struct Cyc_List_List * dles = _T2FE;
	_T2FE = dles;
	goto _LL44;
      }
    case 35: 
      { struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f2;
      }_LL44: { struct Cyc_List_List * dles = _T2FE;
	_TL122: if (dles != 0) { goto _TL120;
	}else { goto _TL121;
	}
	_TL120: _T24A = dles;
	_T24B = _T24A->hd;
	{ struct _tuple26 * _T301 = (struct _tuple26 *)_T24B;
	  struct Cyc_Absyn_Exp * _T302;
	  { struct _tuple26 _T303 = *_T301;
	    _T302 = _T303.f1;
	  }{ struct Cyc_Absyn_Exp * e = _T302;
	    _T24C = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	    amin = _T24C.f1;
	  }
	}_T24D = dles;
	dles = _T24D->tl;
	goto _TL122;
	_TL121: { struct _tuple14 _T301;
	  _T301.f0 = Cyc_AssnDef_fresh_var(0,0);
	  _T301.f1 = amin;
	  _T24E = _T301;
	}return _T24E;
      }
    case 28: 
      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f3;
      }{ struct Cyc_List_List * dles = _T2FE;
	_T2FE = dles;
	goto _LL48;
      }
    case 29: 
      { struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f3;
      }_LL48: { struct Cyc_List_List * dles = _T2FE;
	_T24F = e;
	_T250 = _T24F->topt;
	{ void * atype = _check_null(_T250);
	  struct _tuple22 _T301 = Cyc_Vcgen_get_aggr_info(atype);
	  enum Cyc_Absyn_AggrKind _T302;
	  long _T303;
	  _T303 = _T301.f0;
	  _T302 = _T301.f1;
	  { long is_tagged = _T303;
	    enum Cyc_Absyn_AggrKind ak = _T302;
	    struct Cyc_List_List * dlvs = 0;
	    unsigned int tag = 0U;
	    _TL126: if (dles != 0) { goto _TL124;
	    }else { goto _TL125;
	    }
	    _TL124: _T251 = dles;
	    _T252 = _T251->hd;
	    { struct _tuple26 * _T304 = (struct _tuple26 *)_T252;
	      struct Cyc_Absyn_Exp * _T305;
	      struct Cyc_List_List * _T306;
	      { struct _tuple26 _T307 = *_T304;
		_T306 = _T307.f0;
		_T305 = _T307.f1;
	      }{ struct Cyc_List_List * dl = _T306;
		struct Cyc_Absyn_Exp * e = _T305;
		struct _tuple14 _T307 = Cyc_Vcgen_vcgen_rexp(env,e,amin);
		struct Cyc_AssnDef_AssnMap _T308;
		void * _T309;
		_T309 = _T307.f0;
		_T308 = _T307.f1;
		{ void * v = _T309;
		  struct Cyc_AssnDef_AssnMap a = _T308;
		  amin = a;
		  { struct _fat_ptr * _T30A;
		    if (dl == 0) { goto _TL127;
		    }
		    _T253 = dl;
		    _T254 = (struct Cyc_List_List *)_T253;
		    _T255 = _T254->hd;
		    _T256 = (int *)_T255;
		    _T257 = *_T256;
		    if (_T257 != 1) { goto _TL129;
		    }
		    _T258 = dl;
		    _T259 = (struct Cyc_List_List *)_T258;
		    _T25A = _T259->tl;
		    if (_T25A != 0) { goto _TL12B;
		    }
		    _T25B = dl;
		    { struct Cyc_List_List _T30B = *_T25B;
		      _T25C = _T30B.hd;
		      { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T30C = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T25C;
			_T30A = _T30C->f1;
		      }
		    }{ struct _fat_ptr * f = _T30A;
		      int i = Cyc_CfFlowInfo_get_field_index(atype,f);
		      _T25D = i;
		      tag = (unsigned int)_T25D;
		      { struct Cyc_List_List * _T30B = _cycalloc(sizeof(struct Cyc_List_List));
			{ struct _tuple23 * _T30C = _cycalloc(sizeof(struct _tuple23));
			  _T30C->f0 = i;
			  _T30C->f1 = v;
			  _T25F = (struct _tuple23 *)_T30C;
			}_T30B->hd = _T25F;
			_T30B->tl = dlvs;
			_T25E = (struct Cyc_List_List *)_T30B;
		      }dlvs = _T25E;
		      goto _LL128;
		    }_TL12B: goto _LL12B;
		    _TL129: goto _LL12B;
		    _TL127: _LL12B: _T261 = Cyc_Warn_impos;
		    { int (* _T30B)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
										struct _fat_ptr))_T261;
		      _T260 = _T30B;
		    }_T262 = _tag_fat("no field name in designator!",sizeof(char),
				      29U);
		    _T263 = _tag_fat(0U,sizeof(void *),0);
		    _T260(_T262,_T263);
		    _LL128: ;
		  }
		}
	      }
	    }_T264 = dles;
	    dles = _T264->tl;
	    goto _TL126;
	    _TL125: _T266 = Cyc_List_rimp_merge_sort;
	    { struct Cyc_List_List * (* _T304)(int (*)(struct _tuple23 *,
						       struct _tuple23 *),
					       struct Cyc_List_List *) = (struct Cyc_List_List * (*)(int (*)(struct _tuple23 *,
													     struct _tuple23 *),
												     struct Cyc_List_List *))_T266;
	      _T265 = _T304;
	    }_T267 = dlvs;
	    dlvs = _T265(Cyc_Vcgen_cmp_index,_T267);
	    _T269 = Cyc_List_map;
	    { struct Cyc_List_List * (* _T304)(void * (*)(struct _tuple23 *),
					       struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct _tuple23 *),
												     struct Cyc_List_List *))_T269;
	      _T268 = _T304;
	    }_T26B = Cyc_Core_snd;
	    { void * (* _T304)(struct _tuple23 *) = (void * (*)(struct _tuple23 *))_T26B;
	      _T26A = _T304;
	    }_T26C = dlvs;
	    { struct Cyc_List_List * vs = _T268(_T26A,_T26C);
	      _T26E = ak;
	      _T26F = (int)_T26E;
	      if (_T26F != 1) { goto _TL12D;
	      }
	      _T270 = tag;
	      _T271 = vs;
	      _T272 = e;
	      _T273 = _T272->topt;
	      _T26D = Cyc_AssnDef_union_aggr(_T270,_T271,_T273);
	      goto _TL12E;
	      _TL12D: _T274 = vs;
	      _T275 = e;
	      _T276 = _T275->topt;
	      _T26D = Cyc_AssnDef_struct_aggr(_T274,_T276);
	      _TL12E: { void * res = _T26D;
		{ struct _tuple14 _T304;
		  _T304.f0 = res;
		  _T304.f1 = amin;
		  _T277 = _T304;
		}return _T277;
	      }
	    }
	  }
	}
      }
    case 26: 
      { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FB = _T301->f2;
	_T2F9 = _T301->f3;
      }{ struct Cyc_Absyn_Vardecl * vd = _T2FE;
	struct Cyc_Absyn_Exp * e1 = _T2FB;
	struct Cyc_Absyn_Exp * e2 = _T2F9;
	_T278 = env;
	_T279 = vd;
	_T27A = e1;
	_T27B = e2;
	_T27C = e;
	_T27D = _T27C->topt;
	_T27E = _check_null(_T27D);
	_T27F = amin;
	_T280 = Cyc_Vcgen_vcgen_comprehension(_T278,_T279,_T27A,_T27B,_T27E,
					      _T27F);
	return _T280;
      }
    case 27: 
      { struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
      }{ struct Cyc_Absyn_Exp * e = _T2FE;
	{ struct _tuple14 _T301;
	  _T301.f0 = Cyc_AssnDef_fresh_var(0,0);
	  _T282 = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	  _T301.f1 = _T282.f1;
	  _T281 = _T301;
	}return _T281;
      }
    case 33: 
      { struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2F3 = _T301->f1;
      }{ struct Cyc_Absyn_MallocInfo mi = _T2F3;
	_T283 = mi;
	_T284 = _T283.rgn;
	if (_T284 == 0) { goto _TL12F;
	}
	_T285 = env;
	_T286 = mi;
	_T287 = _T286.rgn;
	_T288 = amin;
	_T289 = Cyc_Vcgen_vcgen_rexp(_T285,_T287,_T288);
	amin = _T289.f1;
	goto _TL130;
	_TL12F: _TL130: _T28A = env;
	_T28B = mi;
	_T28C = _T28B.num_elts;
	_T28D = amin;
	{ struct _tuple14 _T301 = Cyc_Vcgen_vcgen_rexp(_T28A,_T28C,_T28D);
	  struct Cyc_AssnDef_AssnMap _T302;
	  void * _T303;
	  _T303 = _T301.f0;
	  _T302 = _T301.f1;
	  { void * t = _T303;
	    struct Cyc_AssnDef_AssnMap am1 = _T302;
	    _T28E = env;
	    _T28F = e;
	    _T290 = t;
	    _T291 = e;
	    _T292 = _T291->topt;
	    { void * res = Cyc_Vcgen_myalloc(_T28E,_T28F,_T290,_T292);
	      _T293 = am1;
	      _T294 = res;
	      _T295 = Cyc_AssnDef_zero();
	      _T296 = Cyc_AssnDef_neq(_T294,_T295);
	      _T297 = Cyc_AssnDef_numelts_term(res);
	      _T298 = t;
	      _T299 = Cyc_AssnDef_eq(_T297,_T298);
	      _T29A = Cyc_AssnDef_and(_T296,_T299);
	      { struct Cyc_AssnDef_AssnMap am2 = Cyc_AssnDef_and_assnmap_assn(_T293,
									      _T29A);
		{ struct _tuple14 _T304;
		  _T304.f0 = res;
		  _T304.f1 = am2;
		  _T29B = _T304;
		}return _T29B;
	      }
	    }
	  }
	}
      }
    case 34: 
      { struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
	_T2FB = _T301->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FE;
	struct Cyc_Absyn_Exp * e2 = _T2FB;
	struct _tuple14 _T301 = Cyc_Vcgen_vcgen_lexp(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	void * _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ void * lt1 = _T303;
	  struct Cyc_AssnDef_AssnMap am1 = _T302;
	  struct _tuple14 _T304 = Cyc_Vcgen_vcgen_lexp(env,e2,am1);
	  struct Cyc_AssnDef_AssnMap _T305;
	  void * _T306;
	  _T306 = _T304.f0;
	  _T305 = _T304.f1;
	  { void * lt2 = _T306;
	    struct Cyc_AssnDef_AssnMap am2 = _T305;
	    struct _tuple14 _T307 = Cyc_Vcgen_deref_lterm(env,lt1,am2);
	    struct Cyc_AssnDef_AssnMap _T308;
	    void * _T309;
	    _T309 = _T307.f0;
	    _T308 = _T307.f1;
	    { void * t1 = _T309;
	      struct Cyc_AssnDef_AssnMap am3 = _T308;
	      struct _tuple14 _T30A = Cyc_Vcgen_deref_lterm(env,lt2,am3);
	      struct Cyc_AssnDef_AssnMap _T30B;
	      void * _T30C;
	      _T30C = _T30A.f0;
	      _T30B = _T30A.f1;
	      { void * t2 = _T30C;
		struct Cyc_AssnDef_AssnMap am4 = _T30B;
		struct Cyc_AssnDef_AssnMap am5 = Cyc_Vcgen_do_assign(env,
								     am4,
								     lt1,
								     t2);
		struct Cyc_AssnDef_AssnMap am6 = Cyc_Vcgen_do_assign(env,
								     am5,
								     lt2,
								     t1);
		{ struct _tuple14 _T30D;
		  _T30D.f0 = Cyc_AssnDef_fresh_var(0,0);
		  _T30D.f1 = am6;
		  _T29C = _T30D;
		}return _T29C;
	      }
	    }
	  }
	}
      }
    case 36: 
      { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FE = _T301->f1;
      }{ struct Cyc_Absyn_Stmt * s = _T2FE;
	_T29D = env;
	{ void * * old_exp_stmt = _T29D->exp_stmt;
	  _T29E = env;
	  { void * * _T301 = _cycalloc(sizeof(void *));
	    *_T301 = Cyc_AssnDef_fresh_var(0,0);
	    _T29F = (void * *)_T301;
	  }_T29E->exp_stmt = _T29F;
	  { struct Cyc_AssnDef_AssnMap amout = Cyc_Vcgen_vcgen_stmt(env,s,
								    amin);
	    _T2A0 = env;
	    _T2A1 = _T2A0->exp_stmt;
	    _T2A2 = _check_null(_T2A1);
	    { void * t = *_T2A2;
	      _T2A3 = env;
	      _T2A3->exp_stmt = old_exp_stmt;
	      { struct _tuple14 _T301;
		_T301.f0 = t;
		_T301.f1 = amout;
		_T2A4 = _T301;
	      }return _T2A4;
	    }
	  }
	}
      }
    case 39: 
      { struct _tuple14 _T301;
	_T301.f0 = Cyc_AssnDef_fresh_var(0,0);
	_T301.f1 = amin;
	_T2A5 = _T301;
      }return _T2A5;
    case 40: 
      { struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FB = _T301->f1;
      }{ struct Cyc_Absyn_Exp * e = _T2FB;
	_T2A6 = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	return _T2A6;
      }
    case 41: 
      { struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FB = _T301->f1;
	_T2F7 = _T301->f2;
      }_T2A7 = (long)_T2F7;
      if (! _T2A7) { goto _TL131;
      }
      { struct Cyc_Absyn_Exp * e1 = _T2FB;
	long static_only = _T2F7;
	_T2A8 = env;
	{ long old_widen_paths = _T2A8->widen_paths;
	  _T2A9 = env;
	  { long old_pure_exp = _T2A9->pure_exp;
	    _T2AA = env;
	    _T2AA->widen_paths = 0;
	    _T2AB = env;
	    _T2AB->pure_exp = 1;
	    _T2AC = env;
	    _T2AD = e1;
	    { struct Cyc_AssnDef_AssnMap _T301;
	      _T2AF = &Cyc_AssnDef_true_assn;
	      _T2B0 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T2AF;
	      _T301.assn = (void *)_T2B0;
	      _T2B1 = amin;
	      _T301.map = _T2B1.map;
	      _T2AE = _T301;
	    }{ struct _tuple20 _T301 = Cyc_Vcgen_vcgen_test(_T2AC,_T2AD,_T2AE);
	      struct Cyc_AssnDef_AssnMap _T302;
	      _T302 = _T301.f0;
	      { struct Cyc_AssnDef_AssnMap amt = _T302;
		_T2B2 = env;
		_T2B2->widen_paths = old_widen_paths;
		_T2B3 = env;
		_T2B3->pure_exp = old_pure_exp;
		_T2B4 = amin;
		_T2B5 = _T2B4.assn;
		_T2B6 = amt;
		_T2B7 = _T2B6.assn;
		_T2B8 = Cyc_Vcgen_implies(_T2B5,_T2B7);
		if (_T2B8) { goto _TL133;
		}else { goto _TL135;
		}
		_TL135: { struct Cyc_String_pa_PrintArg_struct _T303;
		  _T303.tag = 0;
		  _T2BA = amt;
		  _T2BB = _T2BA.assn;
		  _T303.f1 = Cyc_AssnDef_assn2string(_T2BB);
		  _T2B9 = _T303;
		}{ struct Cyc_String_pa_PrintArg_struct _T303 = _T2B9;
		  { struct Cyc_String_pa_PrintArg_struct _T304;
		    _T304.tag = 0;
		    _T304.f1 = Cyc_AssnDef_assnmap2string(amin);
		    _T2BC = _T304;
		  }{ struct Cyc_String_pa_PrintArg_struct _T304 = _T2BC;
		    void * _T305[2];
		    _T305[0] = &_T303;
		    _T305[1] = &_T304;
		    _T2BD = e;
		    _T2BE = _T2BD->loc;
		    _T2BF = _tag_fat("cannot prove @assert(%s)\nfrom\n %s",
				     sizeof(char),34U);
		    _T2C0 = _tag_fat(_T305,sizeof(void *),2);
		    Cyc_Warn_err(_T2BE,_T2BF,_T2C0);
		  }
		}goto _TL134;
		_TL133: _TL134: { struct _tuple14 _T303;
		  _T303.f0 = Cyc_AssnDef_one();
		  _T2C2 = amin;
		  _T2C3 = amt;
		  _T2C4 = _T2C3.assn;
		  _T303.f1 = Cyc_AssnDef_and_assnmap_assn(_T2C2,_T2C4);
		  _T2C1 = _T303;
		}return _T2C1;
	      }
	    }
	  }
	}
      }_TL131: { struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FB = _T301->f1;
	_T2C5 = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2C6 = &_T2C5->f3;
	_T2FE = (long *)_T2C6;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FB;
	long * do_check = (long *)_T2FE;
	struct _tuple20 _T301 = Cyc_Vcgen_vcgen_test(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T302;
	struct Cyc_AssnDef_AssnMap _T303;
	_T303 = _T301.f0;
	_T302 = _T301.f1;
	{ struct Cyc_AssnDef_AssnMap amt = _T303;
	  struct Cyc_AssnDef_AssnMap amf = _T302;
	  _T2C7 = amf;
	  _T2C8 = _T2C7.assn;
	  _T2C9 = &Cyc_AssnDef_false_assn;
	  _T2CA = (struct Cyc_AssnDef_False_AssnDef_Assn_struct *)_T2C9;
	  _T2CB = (void *)_T2CA;
	  _T2CC = Cyc_Vcgen_implies(_T2C8,_T2CB);
	  if (! _T2CC) { goto _TL136;
	  }
	  _T2CD = Cyc_Vcgen_is_pure_exp(e1);
	  if (! _T2CD) { goto _TL138;
	  }
	  _T2CE = do_check;
	  *_T2CE = 0;
	  goto _TL139;
	  _TL138: _T2CF = do_check;
	  *_T2CF = 1;
	  _TL139: goto _TL137;
	  _TL136: _T2D0 = do_check;
	  *_T2D0 = 1;
	  _T2D1 = Cyc_Flags_warn_assert;
	  if (! _T2D1) { goto _TL13A;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T304;
	    _T304.tag = 0;
	    _T304.f1 = _tag_fat("assert(",sizeof(char),8U);
	    _T2D2 = _T304;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T304 = _T2D2;
	    { struct Cyc_Warn_Exp_Warn_Warg_struct _T305;
	      _T305.tag = 4;
	      _T305.f1 = e1;
	      _T2D3 = _T305;
	    }{ struct Cyc_Warn_Exp_Warn_Warg_struct _T305 = _T2D3;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T306;
		_T306.tag = 0;
		_T306.f1 = _tag_fat(") might fail at run-time",sizeof(char),
				    25U);
		_T2D4 = _T306;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T306 = _T2D4;
		void * _T307[3];
		_T307[0] = &_T304;
		_T307[1] = &_T305;
		_T307[2] = &_T306;
		_T2D5 = e;
		_T2D6 = _T2D5->loc;
		_T2D7 = _tag_fat(_T307,sizeof(void *),3);
		Cyc_Warn_warn2(_T2D6,_T2D7);
	      }
	    }
	  }goto _TL13B;
	  _TL13A: _TL13B: _T2D8 = Cyc_Absyn_exn_type();
	  { void * v = Cyc_AssnDef_fresh_var(0,_T2D8);
	    Cyc_Vcgen_update_try_assnmap(env,amf,v);
	  }_TL137: { struct _tuple14 _T304;
	    _T304.f0 = Cyc_AssnDef_one();
	    _T304.f1 = amt;
	    _T2D9 = _T304;
	  }return _T2D9;
	}
      }
    default: 
      { struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct * _T301 = (struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct *)_T2F2;
	_T2FB = _T301->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T2FB;
	_T2DA = env;
	{ long old_widen_paths = _T2DA->widen_paths;
	  _T2DB = env;
	  { long old_pure_exp = _T2DB->pure_exp;
	    _T2DC = env;
	    _T2DC->widen_paths = 0;
	    _T2DD = env;
	    _T2DD->pure_exp = 1;
	    _T2DE = env;
	    _T2DF = e1;
	    { struct Cyc_AssnDef_AssnMap _T301;
	      _T2E1 = &Cyc_AssnDef_true_assn;
	      _T2E2 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T2E1;
	      _T301.assn = (void *)_T2E2;
	      _T2E3 = amin;
	      _T301.map = _T2E3.map;
	      _T2E0 = _T301;
	    }{ struct _tuple20 _T301 = Cyc_Vcgen_vcgen_test(_T2DE,_T2DF,_T2E0);
	      struct Cyc_AssnDef_AssnMap _T302;
	      _T302 = _T301.f0;
	      { struct Cyc_AssnDef_AssnMap amt = _T302;
		_T2E4 = env;
		_T2E4->widen_paths = old_widen_paths;
		_T2E5 = env;
		_T2E5->pure_exp = old_pure_exp;
		_T2E6 = amin;
		_T2E7 = _T2E6.assn;
		_T2E8 = amt;
		_T2E9 = _T2E8.assn;
		_T2EA = Cyc_Vcgen_implies(_T2E7,_T2E9);
		if (! _T2EA) { goto _TL13C;
		}
		{ struct Cyc_String_pa_PrintArg_struct _T303;
		  _T303.tag = 0;
		  _T303.f1 = Cyc_AssnDef_assnmap2string(amt);
		  _T2EB = _T303;
		}{ struct Cyc_String_pa_PrintArg_struct _T303 = _T2EB;
		  { struct Cyc_String_pa_PrintArg_struct _T304;
		    _T304.tag = 0;
		    _T304.f1 = Cyc_AssnDef_assnmap2string(amin);
		    _T2EC = _T304;
		  }{ struct Cyc_String_pa_PrintArg_struct _T304 = _T2EC;
		    void * _T305[2];
		    _T305[0] = &_T303;
		    _T305[1] = &_T304;
		    _T2ED = e;
		    _T2EE = _T2ED->loc;
		    _T2EF = _tag_fat("proved @assert_false(%s)\nfrom\n %s",
				     sizeof(char),34U);
		    _T2F0 = _tag_fat(_T305,sizeof(void *),2);
		    Cyc_Warn_err(_T2EE,_T2EF,_T2F0);
		  }
		}goto _TL13D;
		_TL13C: _TL13D: { struct _tuple14 _T303;
		  _T303.f0 = Cyc_AssnDef_one();
		  _T303.f1 = amin;
		  _T2F1 = _T303;
		}return _T2F1;
	      }
	    }
	  }
	}
      }
    }
    ;
  }
}
static struct _tuple14 Cyc_Vcgen_vcgen_rexp(struct Cyc_Vcgen_Env * env,struct Cyc_Absyn_Exp * e,
					    struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  int * _T3;
  int _T4;
  struct Cyc_List_List _T5;
  struct Cyc_AssnDef_ExistAssnFn * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_AssnDef_AssnMap _T9;
  void * _TA;
  void * _TB;
  struct _tuple14 _TC;
  struct _tuple14 _TD = Cyc_Vcgen_vcgen_rexp_inner(env,e,amin);
  struct Cyc_AssnDef_AssnMap _TE;
  void * _TF;
  _TF = _TD.f0;
  _TE = _TD.f1;
  { void * t = _TF;
    struct Cyc_AssnDef_AssnMap am = _TE;
    _T0 = e;
    _T1 = _T0->topt;
    _T2 = _check_null(_T1);
    { void * _T10 = Cyc_Absyn_compress(_T2);
      struct Cyc_AssnDef_ExistAssnFn * _T11;
      _T3 = (int *)_T10;
      _T4 = *_T3;
      if (_T4 != 12) { goto _TL13E;
      }
      { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T12 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T10;
	_T11 = _T12->f3;
      }{ struct Cyc_AssnDef_ExistAssnFn * af = _T11;
	{ struct Cyc_List_List _T12;
	  _T12.hd = t;
	  _T12.tl = 0;
	  _T5 = _T12;
	}{ struct Cyc_List_List terms = _T5;
	  _T6 = _check_null(af);
	  _T7 = &terms;
	  _T8 = (struct Cyc_List_List *)_T7;
	  { void * assn = Cyc_AssnDef_existassnfn2assn(_T6,_T8);
	    _T9 = am;
	    _TA = _T9.assn;
	    _TB = assn;
	    am.assn = Cyc_AssnDef_and(_TA,_TB);
	    goto _LL3;
	  }
	}
      }_TL13E: goto _LL3;
      _LL3: ;
    }{ struct _tuple14 _T10;
      _T10.f0 = t;
      _T10.f1 = am;
      _TC = _T10;
    }return _TC;
  }
}
static struct _tuple19 Cyc_Vcgen_vcgen_rexps(struct Cyc_Vcgen_Env * env,struct Cyc_List_List * es,
					     struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Vcgen_Env * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct Cyc_AssnDef_AssnMap _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct _tuple19 _T7;
  struct Cyc_List_List * result = 0;
  _TL143: if (es != 0) { goto _TL141;
  }else { goto _TL142;
  }
  _TL141: _T0 = env;
  _T1 = es;
  _T2 = _T1->hd;
  _T3 = (struct Cyc_Absyn_Exp *)_T2;
  _T4 = amin;
  { struct _tuple14 _T8 = Cyc_Vcgen_vcgen_rexp(_T0,_T3,_T4);
    struct Cyc_AssnDef_AssnMap _T9;
    void * _TA;
    _TA = _T8.f0;
    _T9 = _T8.f1;
    { void * t = _TA;
      struct Cyc_AssnDef_AssnMap am = _T9;
      { struct Cyc_List_List * _TB = _cycalloc(sizeof(struct Cyc_List_List));
	_TB->hd = t;
	_TB->tl = result;
	_T5 = (struct Cyc_List_List *)_TB;
      }result = _T5;
      amin = am;
    }
  }_T6 = es;
  es = _T6->tl;
  goto _TL143;
  _TL142: { struct _tuple19 _T8;
    _T8.f0 = Cyc_List_imp_rev(result);
    _T8.f1 = amin;
    _T7 = _T8;
  }return _T7;
}
static struct _tuple14 Cyc_Vcgen_vcgen_lexp(struct Cyc_Vcgen_Env * env,struct Cyc_Absyn_Exp * e,
					    struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T3;
  void * _T4;
  int * _T5;
  unsigned int _T6;
  void * _T7;
  void * _T8;
  struct Cyc_Absyn_Vardecl * _T9;
  void * _TA;
  int * _TB;
  int _TC;
  struct Cyc_Absyn_Vardecl * _TD;
  void * _TE;
  void * _TF;
  void * _T10;
  struct _tuple14 _T11;
  void * _T12;
  void * _T13;
  void * _T14;
  struct _tuple14 _T15;
  void * _T16;
  void * _T17;
  struct _tuple14 _T18;
  struct Cyc_Vcgen_Env * _T19;
  struct Cyc_Absyn_Exp * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  struct Cyc_AssnDef_AssnMap _T1C;
  struct _tuple14 _T1D;
  struct _tuple14 _T1E;
  struct Cyc_Vcgen_Env * _T1F;
  struct Cyc_Absyn_Exp * _T20;
  struct Cyc_Absyn_Exp * _T21;
  struct Cyc_AssnDef_AssnMap _T22;
  struct Cyc_Absyn_Exp * _T23;
  void * _T24;
  void * _T25;
  void * _T26;
  struct _fat_ptr * _T27;
  struct Cyc_Absyn_Exp * _T28;
  void * _T29;
  void * _T2A;
  void * _T2B;
  void * _T2C;
  struct Cyc_Absyn_Tqual _T2D;
  void * _T2E;
  void * _T2F;
  struct _tuple14 _T30;
  void * _T31;
  int _T32;
  unsigned int _T33;
  void * _T34;
  struct Cyc_Absyn_Exp * _T35;
  void * _T36;
  void * _T37;
  struct _fat_ptr * _T38;
  struct Cyc_Absyn_Exp * _T39;
  void * _T3A;
  void * _T3B;
  void * _T3C;
  void * _T3D;
  struct Cyc_Absyn_Tqual _T3E;
  void * _T3F;
  void * _T40;
  struct _tuple14 _T41;
  void * _T42;
  int _T43;
  unsigned int _T44;
  void * _T45;
  struct _tuple14 _T46;
  struct Cyc_Absyn_Exp * _T47;
  void * _T48;
  void * _T49;
  void * _T4A;
  void * _T4B;
  struct Cyc_Absyn_Tqual _T4C;
  void * _T4D;
  void * _T4E;
  struct _tuple14 _T4F;
  _T0 = e;
  { void * _T50 = _T0->r;
    struct _fat_ptr * _T51;
    struct Cyc_Absyn_Exp * _T52;
    struct Cyc_Absyn_Exp * _T53;
    struct Cyc_Absyn_Vardecl * _T54;
    _T1 = (int *)_T50;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      _T3 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T50;
      _T4 = _T3->f1;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      switch (_T6) {
      case 1: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T50;
	  _T7 = _T55->f1;
	  { struct Cyc_Absyn_Global_b_Absyn_Binding_struct * _T56 = (struct Cyc_Absyn_Global_b_Absyn_Binding_struct *)_T7;
	    _T54 = _T56->f1;
	  }
	}{ struct Cyc_Absyn_Vardecl * vd = _T54;
	  _T54 = vd;
	  goto _LL4;
	}
      case 4: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T50;
	  _T8 = _T55->f1;
	  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T56 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T8;
	    _T54 = _T56->f1;
	  }
	}_LL4: { struct Cyc_Absyn_Vardecl * vd = _T54;
	  _T9 = vd;
	  _TA = _T9->type;
	  { void * _T55 = Cyc_Absyn_compress(_TA);
	    struct Cyc_Absyn_ArrayInfo _T56;
	    _TB = (int *)_T55;
	    _TC = *_TB;
	    if (_TC != 5) { goto _TL146;
	    }
	    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T57 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T55;
	      _T56 = _T57->f1;
	    }{ struct Cyc_Absyn_ArrayInfo ai = _T56;
	      _TD = vd;
	      _TE = _TD->type;
	      _TF = Cyc_Absyn_heap_rgn_type;
	      _T10 = Cyc_Absyn_al_qual_type;
	      { void * p = Cyc_Tcutil_promote_array(_TE,_TF,_T10,0);
		{ struct _tuple14 _T57;
		  _T12 = Cyc_Vcgen_myaddr(env,vd);
		  _T13 = Cyc_AssnDef_zero();
		  _T14 = p;
		  _T57.f0 = Cyc_AssnDef_offseti(_T12,_T13,_T14);
		  _T57.f1 = amin;
		  _T11 = _T57;
		}return _T11;
	      }
	    }_TL146: { struct _tuple14 _T57;
	      _T57.f0 = Cyc_Vcgen_myaddr(env,vd);
	      _T57.f1 = amin;
	      _T15 = _T57;
	    }return _T15;
	    ;
	  }
	}
      case 3: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T50;
	  _T16 = _T55->f1;
	  { struct Cyc_Absyn_Param_b_Absyn_Binding_struct * _T56 = (struct Cyc_Absyn_Param_b_Absyn_Binding_struct *)_T16;
	    _T54 = _T56->f1;
	  }
	}{ struct Cyc_Absyn_Vardecl * vd = _T54;
	  _T54 = vd;
	  goto _LL8;
	}
      case 5: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T50;
	  _T17 = _T55->f1;
	  { struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T56 = (struct Cyc_Absyn_Pat_b_Absyn_Binding_struct *)_T17;
	    _T54 = _T56->f1;
	  }
	}_LL8: { struct Cyc_Absyn_Vardecl * vd = _T54;
	  { struct _tuple14 _T55;
	    _T55.f0 = Cyc_Vcgen_myaddr(env,vd);
	    _T55.f1 = amin;
	    _T18 = _T55;
	  }return _T18;
	}
      default: 
	goto _LL15;
      }
      ;
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T50;
	_T53 = _T55->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T53;
	_T19 = env;
	_T1A = e1;
	_T1B = Cyc_Vcgen_zero_exp();
	_T1C = amin;
	{ struct _tuple24 _T55 = Cyc_Vcgen_vcgen_deref(_T19,_T1A,_T1B,_T1C);
	  struct Cyc_AssnDef_AssnMap _T56;
	  void * _T57;
	  void * _T58;
	  _T58 = _T55.f0;
	  _T57 = _T55.f1;
	  _T56 = _T55.f2;
	  { void * t1 = _T58;
	    void * t2 = _T57;
	    struct Cyc_AssnDef_AssnMap am1 = _T56;
	    { struct _tuple14 _T59;
	      _T59.f0 = t1;
	      _T59.f1 = am1;
	      _T1D = _T59;
	    }return _T1D;
	  }
	}
      }
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T50;
	_T53 = _T55->f1;
	_T52 = _T55->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T53;
	struct Cyc_Absyn_Exp * e2 = _T52;
	struct _tuple24 _T55 = Cyc_Vcgen_vcgen_deref(env,e1,e2,amin);
	struct Cyc_AssnDef_AssnMap _T56;
	void * _T57;
	void * _T58;
	_T58 = _T55.f0;
	_T57 = _T55.f1;
	_T56 = _T55.f2;
	{ void * t1 = _T58;
	  void * t2 = _T57;
	  struct Cyc_AssnDef_AssnMap am1 = _T56;
	  { struct _tuple14 _T59;
	    _T59.f0 = Cyc_AssnDef_offseti(t1,t2,0);
	    _T59.f1 = am1;
	    _T1E = _T59;
	  }return _T1E;
	}
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T50;
	_T53 = _T55->f1;
	_T51 = _T55->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T53;
	struct _fat_ptr * f = _T51;
	_T1F = env;
	_T20 = e1;
	_T21 = Cyc_Vcgen_zero_exp();
	_T22 = amin;
	{ struct _tuple24 _T55 = Cyc_Vcgen_vcgen_deref(_T1F,_T20,_T21,_T22);
	  struct Cyc_AssnDef_AssnMap _T56;
	  void * _T57;
	  void * _T58;
	  _T58 = _T55.f0;
	  _T57 = _T55.f1;
	  _T56 = _T55.f2;
	  { void * t1 = _T58;
	    void * t2 = _T57;
	    struct Cyc_AssnDef_AssnMap am1 = _T56;
	    _T23 = e1;
	    _T24 = _T23->topt;
	    _T25 = _check_null(_T24);
	    _T26 = Cyc_Tcutil_pointer_elt_type(_T25);
	    _T27 = f;
	    { int i = Cyc_CfFlowInfo_get_field_index(_T26,_T27);
	      _T28 = e;
	      _T29 = _T28->topt;
	      _T2A = _check_null(_T29);
	      _T2B = Cyc_Absyn_heap_rgn_type;
	      _T2C = Cyc_Absyn_al_qual_type;
	      _T2D = Cyc_Absyn_empty_tqual(0U);
	      _T2E = Cyc_Absyn_false_type;
	      _T2F = Cyc_Absyn_false_type;
	      { void * tp = Cyc_Absyn_at_type(_T2A,_T2B,_T2C,_T2D,_T2E,_T2F);
		{ struct _tuple14 _T59;
		  _T31 = t1;
		  _T32 = i;
		  _T33 = (unsigned int)_T32;
		  _T34 = tp;
		  _T59.f0 = Cyc_AssnDef_offsetf(_T31,_T33,_T34);
		  _T59.f1 = am1;
		  _T30 = _T59;
		}return _T30;
	      }
	    }
	  }
	}
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T50;
	_T53 = _T55->f1;
	_T51 = _T55->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T53;
	struct _fat_ptr * f = _T51;
	struct _tuple14 _T55 = Cyc_Vcgen_vcgen_lexp(env,e1,amin);
	struct Cyc_AssnDef_AssnMap _T56;
	void * _T57;
	_T57 = _T55.f0;
	_T56 = _T55.f1;
	{ void * t1 = _T57;
	  struct Cyc_AssnDef_AssnMap am1 = _T56;
	  _T35 = e1;
	  _T36 = _T35->topt;
	  _T37 = _check_null(_T36);
	  _T38 = f;
	  { int i = Cyc_CfFlowInfo_get_field_index(_T37,_T38);
	    _T39 = e;
	    _T3A = _T39->topt;
	    _T3B = _check_null(_T3A);
	    _T3C = Cyc_Absyn_heap_rgn_type;
	    _T3D = Cyc_Absyn_al_qual_type;
	    _T3E = Cyc_Absyn_empty_tqual(0U);
	    _T3F = Cyc_Absyn_false_type;
	    _T40 = Cyc_Absyn_false_type;
	    { void * tp = Cyc_Absyn_at_type(_T3B,_T3C,_T3D,_T3E,_T3F,_T40);
	      { struct _tuple14 _T58;
		_T42 = t1;
		_T43 = i;
		_T44 = (unsigned int)_T43;
		_T45 = tp;
		_T58.f0 = Cyc_AssnDef_offsetf(_T42,_T44,_T45);
		_T58.f1 = am1;
		_T41 = _T58;
	      }return _T41;
	    }
	  }
	}
      }
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T50;
	_T53 = _T55->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T53;
	_T53 = e1;
	goto _LL14;
      }
    case 12: 
      { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T55 = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T50;
	_T53 = _T55->f1;
      }_LL14: { struct Cyc_Absyn_Exp * e1 = _T53;
	_T46 = Cyc_Vcgen_vcgen_lexp(env,e1,amin);
	return _T46;
      }
    default: 
      _LL15: _T47 = e;
      _T48 = _T47->topt;
      _T49 = _check_null(_T48);
      _T4A = Cyc_Absyn_heap_rgn_type;
      _T4B = Cyc_Absyn_al_qual_type;
      _T4C = Cyc_Absyn_empty_tqual(0U);
      _T4D = Cyc_Absyn_false_type;
      _T4E = Cyc_Absyn_false_type;
      { void * tp = Cyc_Absyn_at_type(_T49,_T4A,_T4B,_T4C,_T4D,_T4E);
	{ struct _tuple14 _T55;
	  _T55.f0 = Cyc_AssnDef_fresh_var(0,tp);
	  _T55.f1 = amin;
	  _T4F = _T55;
	}return _T4F;
      }
    }
    ;
  }
}
static long Cyc_Vcgen_unsigned_comparison(struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  struct Cyc_Absyn_Exp * _T3;
  void * _T4;
  void * _T5;
  struct _tuple0 _T6;
  void * _T7;
  int * _T8;
  int _T9;
  void * _TA;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB;
  void * _TC;
  int * _TD;
  int _TE;
  void * _TF;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T10;
  void * _T11;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T12;
  enum Cyc_Absyn_Sign _T13;
  void * _T14;
  int * _T15;
  int _T16;
  void * _T17;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T18;
  void * _T19;
  int * _T1A;
  int _T1B;
  void * _T1C;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1D;
  void * _T1E;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T1F;
  enum Cyc_Absyn_Sign _T20;
  void * _T21;
  int * _T22;
  int _T23;
  void * _T24;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T25;
  void * _T26;
  int * _T27;
  int _T28;
  void * _T29;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2A;
  void * _T2B;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T2C;
  enum Cyc_Absyn_Sign _T2D;
  void * _T2E;
  int * _T2F;
  int _T30;
  void * _T31;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T32;
  void * _T33;
  int * _T34;
  int _T35;
  void * _T36;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T37;
  void * _T38;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T39;
  enum Cyc_Absyn_Sign _T3A;
  void * _T3B;
  int * _T3C;
  int _T3D;
  void * _T3E;
  int * _T3F;
  int _T40;
  void * _T41;
  int * _T42;
  int _T43;
  void * _T44;
  int * _T45;
  int _T46;
  _T0 = e1;
  _T1 = _T0->topt;
  _T2 = _check_null(_T1);
  { void * t1 = Cyc_Absyn_compress(_T2);
    _T3 = e2;
    _T4 = _T3->topt;
    _T5 = _check_null(_T4);
    { void * t2 = Cyc_Absyn_compress(_T5);
      { struct _tuple0 _T47;
	_T47.f0 = t1;
	_T47.f1 = t2;
	_T6 = _T47;
      }{ struct _tuple0 _T47 = _T6;
	_T7 = _T47.f0;
	_T8 = (int *)_T7;
	_T9 = *_T8;
	if (_T9 != 0) { goto _TL148;
	}
	_TA = _T47.f0;
	_TB = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA;
	_TC = _TB->f1;
	_TD = (int *)_TC;
	_TE = *_TD;
	if (_TE != 1) { goto _TL14A;
	}
	_TF = _T47.f0;
	_T10 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TF;
	_T11 = _T10->f1;
	_T12 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T11;
	_T13 = _T12->f1;
	if (_T13 != Cyc_Absyn_Unsigned) { goto _TL14C;
	}
	return 1;
	_TL14C: _T14 = _T47.f1;
	_T15 = (int *)_T14;
	_T16 = *_T15;
	if (_T16 != 0) { goto _TL14E;
	}
	_T17 = _T47.f1;
	_T18 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T17;
	_T19 = _T18->f1;
	_T1A = (int *)_T19;
	_T1B = *_T1A;
	if (_T1B != 1) { goto _TL150;
	}
	_T1C = _T47.f1;
	_T1D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1C;
	_T1E = _T1D->f1;
	_T1F = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T1E;
	_T20 = _T1F->f1;
	if (_T20 != Cyc_Absyn_Unsigned) { goto _TL152;
	}
	goto _LL3;
	_TL152: goto _LL7;
	_TL150: goto _LL7;
	_TL14E: goto _LL7;
	_TL14A: _T21 = _T47.f1;
	_T22 = (int *)_T21;
	_T23 = *_T22;
	if (_T23 != 0) { goto _TL154;
	}
	_T24 = _T47.f1;
	_T25 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T24;
	_T26 = _T25->f1;
	_T27 = (int *)_T26;
	_T28 = *_T27;
	if (_T28 != 1) { goto _TL156;
	}
	_T29 = _T47.f1;
	_T2A = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T29;
	_T2B = _T2A->f1;
	_T2C = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T2B;
	_T2D = _T2C->f1;
	if (_T2D != Cyc_Absyn_Unsigned) { goto _TL158;
	}
	goto _LL3;
	_TL158: goto _LL7;
	_TL156: goto _LL7;
	_TL154: goto _LL7;
	_TL148: _T2E = _T47.f1;
	_T2F = (int *)_T2E;
	_T30 = *_T2F;
	if (_T30 != 0) { goto _TL15A;
	}
	_T31 = _T47.f1;
	_T32 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T31;
	_T33 = _T32->f1;
	_T34 = (int *)_T33;
	_T35 = *_T34;
	if (_T35 != 1) { goto _TL15C;
	}
	_T36 = _T47.f1;
	_T37 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T36;
	_T38 = _T37->f1;
	_T39 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T38;
	_T3A = _T39->f1;
	if (_T3A != Cyc_Absyn_Unsigned) { goto _TL15E;
	}
	_LL3: return 1;
	_TL15E: _T3B = _T47.f0;
	_T3C = (int *)_T3B;
	_T3D = *_T3C;
	if (_T3D != 4) { goto _TL160;
	}
	goto _LL7;
	_TL160: goto _LL7;
	_TL15C: _T3E = _T47.f0;
	_T3F = (int *)_T3E;
	_T40 = *_T3F;
	if (_T40 != 4) { goto _TL162;
	}
	goto _LL7;
	_TL162: goto _LL7;
	_TL15A: _T41 = _T47.f0;
	_T42 = (int *)_T41;
	_T43 = *_T42;
	if (_T43 != 4) { goto _TL164;
	}
	_T44 = _T47.f1;
	_T45 = (int *)_T44;
	_T46 = *_T45;
	if (_T46 != 4) { goto _TL166;
	}
	return 1;
	_TL166: goto _LL7;
	_TL164: _LL7: return 0;
	;
      }
    }
  }
}
static struct _tuple20 Cyc_Vcgen_vcgen_test(struct Cyc_Vcgen_Env * env,struct Cyc_Absyn_Exp * e,
					    struct Cyc_AssnDef_AssnMap ain) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct _tuple20 _T3;
  struct Cyc_Vcgen_Env * _T4;
  struct Cyc_AssnDef_AssnMap _T5;
  struct Cyc_Vcgen_Env * _T6;
  struct Cyc_AssnDef_AssnMap _T7;
  struct _tuple20 _T8;
  struct Cyc_Vcgen_Env * _T9;
  struct Cyc_AssnDef_AssnMap _TA;
  struct _tuple20 _TB;
  struct Cyc_Vcgen_Env * _TC;
  struct Cyc_AssnDef_AssnMap _TD;
  struct _tuple20 _TE;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _TF;
  enum Cyc_Absyn_Primop _T10;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  void * _T14;
  struct _tuple20 _T15;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_List_List * _T1A;
  struct Cyc_List_List * _T1B;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  struct Cyc_List_List * _T24;
  void * _T25;
  enum Cyc_Absyn_Primop _T26;
  int _T27;
  struct Cyc_AssnDef_AssnMap _T28;
  void * _T29;
  struct Cyc_AssnDef_AssnMap _T2A;
  void * _T2B;
  struct Cyc_AssnDef_AssnMap _T2C;
  void * _T2D;
  struct Cyc_AssnDef_AssnMap _T2E;
  void * _T2F;
  struct Cyc_AssnDef_AssnMap _T30;
  void * _T31;
  struct Cyc_AssnDef_AssnMap _T32;
  void * _T33;
  struct Cyc_AssnDef_AssnMap _T34;
  void * _T35;
  struct Cyc_AssnDef_AssnMap _T36;
  void * _T37;
  struct Cyc_AssnDef_AssnMap _T38;
  void * _T39;
  struct Cyc_AssnDef_AssnMap _T3A;
  void * _T3B;
  struct Cyc_AssnDef_AssnMap _T3C;
  void * _T3D;
  struct Cyc_AssnDef_AssnMap _T3E;
  void * _T3F;
  struct Cyc_AssnDef_AssnMap _T40;
  void * _T41;
  struct Cyc_AssnDef_AssnMap _T42;
  void * _T43;
  struct Cyc_AssnDef_AssnMap _T44;
  void * _T45;
  struct Cyc_AssnDef_AssnMap _T46;
  void * _T47;
  struct Cyc_AssnDef_AssnMap _T48;
  void * _T49;
  struct Cyc_AssnDef_AssnMap _T4A;
  void * _T4B;
  struct Cyc_AssnDef_AssnMap _T4C;
  void * _T4D;
  struct Cyc_AssnDef_AssnMap _T4E;
  void * _T4F;
  struct Cyc_Vcgen_Env * _T50;
  struct Cyc_Absyn_Exp * _T51;
  void * _T52;
  enum Cyc_Absyn_Primop _T53;
  void * _T54;
  void * _T55;
  struct Cyc_AssnDef_AssnMap _T56;
  struct Cyc_AssnDef_AssnMap _T57;
  void * _T58;
  void * _T59;
  void * _T5A;
  struct Cyc_AssnDef_AssnMap _T5B;
  void * _T5C;
  void * _T5D;
  void * _T5E;
  struct _tuple20 _T5F;
  struct Cyc_Absyn_Exp * _T60;
  void * _T61;
  struct _fat_ptr * _T62;
  int _T63;
  unsigned int _T64;
  struct Cyc_AssnDef_AssnMap _T65;
  void * _T66;
  struct Cyc_AssnDef_AssnMap _T67;
  void * _T68;
  struct _tuple20 _T69;
  void * _T6A;
  struct _tuple0 _T6B;
  struct Cyc_Absyn_Exp * _T6C;
  void * _T6D;
  void * _T6E;
  int * _T6F;
  int _T70;
  void * _T71;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T72;
  void * _T73;
  int * _T74;
  int _T75;
  void * _T76;
  int * _T77;
  int _T78;
  void * _T79;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T7A;
  void * _T7B;
  int * _T7C;
  int _T7D;
  void * _T7E;
  void * _T7F;
  void * _T80;
  void * _T81;
  enum Cyc_Absyn_Size_of _T82;
  enum Cyc_Absyn_Size_of _T83;
  int _T84;
  enum Cyc_Absyn_Size_of _T85;
  enum Cyc_Absyn_Size_of _T86;
  int _T87;
  enum Cyc_Absyn_Size_of _T88;
  int _T89;
  enum Cyc_Absyn_Size_of _T8A;
  int _T8B;
  struct _tuple20 _T8C;
  void * _T8D;
  int * _T8E;
  int _T8F;
  void * _T90;
  struct Cyc_AssnDef_Uint_AssnDef_Term_struct * _T91;
  unsigned int _T92;
  struct _tuple20 _T93;
  struct Cyc_AssnDef_AssnMap _T94;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T95;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T96;
  void * _T97;
  struct _tuple20 _T98;
  struct Cyc_AssnDef_AssnMap _T99;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T9A;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T9B;
  void * _T9C;
  struct _tuple20 _T9D;
  struct Cyc_AssnDef_AssnMap _T9E;
  void * _T9F;
  void * _TA0;
  void * _TA1;
  struct Cyc_AssnDef_AssnMap _TA2;
  void * _TA3;
  void * _TA4;
  void * _TA5;
  _T0 = e;
  { void * _TA6 = _T0->r;
    struct _fat_ptr * _TA7;
    enum Cyc_Absyn_Primop _TA8;
    struct Cyc_Absyn_Exp * _TA9;
    struct Cyc_Absyn_Exp * _TAA;
    void * _TAB;
    _T1 = (int *)_TA6;
    _T2 = *_T1;
    switch (_T2) {
    case 6: 
      { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _TAC = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_TA6;
	_TAB = _TAC->f1;
	_TAA = _TAC->f2;
	_TA9 = _TAC->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _TAB;
	struct Cyc_Absyn_Exp * e2 = _TAA;
	struct Cyc_Absyn_Exp * e3 = _TA9;
	struct _tuple20 _TAC = Cyc_Vcgen_vcgen_test(env,e1,ain);
	struct Cyc_AssnDef_AssnMap _TAD;
	struct Cyc_AssnDef_AssnMap _TAE;
	_TAE = _TAC.f0;
	_TAD = _TAC.f1;
	{ struct Cyc_AssnDef_AssnMap a1t = _TAE;
	  struct Cyc_AssnDef_AssnMap a1f = _TAD;
	  struct _tuple20 _TAF = Cyc_Vcgen_vcgen_test(env,e2,a1t);
	  struct Cyc_AssnDef_AssnMap _TB0;
	  struct Cyc_AssnDef_AssnMap _TB1;
	  _TB1 = _TAF.f0;
	  _TB0 = _TAF.f1;
	  { struct Cyc_AssnDef_AssnMap a2t = _TB1;
	    struct Cyc_AssnDef_AssnMap a2f = _TB0;
	    struct _tuple20 _TB2 = Cyc_Vcgen_vcgen_test(env,e3,a1f);
	    struct Cyc_AssnDef_AssnMap _TB3;
	    struct Cyc_AssnDef_AssnMap _TB4;
	    _TB4 = _TB2.f0;
	    _TB3 = _TB2.f1;
	    { struct Cyc_AssnDef_AssnMap a3t = _TB4;
	      struct Cyc_AssnDef_AssnMap a3f = _TB3;
	      { struct _tuple20 _TB5;
		_T4 = env;
		_T5 = Cyc_AssnDef_or_assnmap_assnmap(a2t,a3t);
		_TB5.f0 = Cyc_Vcgen_may_widen(_T4,_T5);
		_T6 = env;
		_T7 = Cyc_AssnDef_or_assnmap_assnmap(a2f,a3f);
		_TB5.f1 = Cyc_Vcgen_may_widen(_T6,_T7);
		_T3 = _TB5;
	      }return _T3;
	    }
	  }
	}
      }
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _TAC = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_TA6;
	_TAB = _TAC->f1;
	_TAA = _TAC->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _TAB;
	struct Cyc_Absyn_Exp * e2 = _TAA;
	struct _tuple20 _TAC = Cyc_Vcgen_vcgen_test(env,e1,ain);
	struct Cyc_AssnDef_AssnMap _TAD;
	struct Cyc_AssnDef_AssnMap _TAE;
	_TAE = _TAC.f0;
	_TAD = _TAC.f1;
	{ struct Cyc_AssnDef_AssnMap a1t = _TAE;
	  struct Cyc_AssnDef_AssnMap a1f = _TAD;
	  struct _tuple20 _TAF = Cyc_Vcgen_vcgen_test(env,e2,a1t);
	  struct Cyc_AssnDef_AssnMap _TB0;
	  struct Cyc_AssnDef_AssnMap _TB1;
	  _TB1 = _TAF.f0;
	  _TB0 = _TAF.f1;
	  { struct Cyc_AssnDef_AssnMap a2t = _TB1;
	    struct Cyc_AssnDef_AssnMap a2f = _TB0;
	    { struct _tuple20 _TB2;
	      _TB2.f0 = a2t;
	      _T9 = env;
	      _TA = Cyc_AssnDef_or_assnmap_assnmap(a1f,a2f);
	      _TB2.f1 = Cyc_Vcgen_may_widen(_T9,_TA);
	      _T8 = _TB2;
	    }return _T8;
	  }
	}
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _TAC = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_TA6;
	_TAB = _TAC->f1;
	_TAA = _TAC->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _TAB;
	struct Cyc_Absyn_Exp * e2 = _TAA;
	struct _tuple20 _TAC = Cyc_Vcgen_vcgen_test(env,e1,ain);
	struct Cyc_AssnDef_AssnMap _TAD;
	struct Cyc_AssnDef_AssnMap _TAE;
	_TAE = _TAC.f0;
	_TAD = _TAC.f1;
	{ struct Cyc_AssnDef_AssnMap a1t = _TAE;
	  struct Cyc_AssnDef_AssnMap a1f = _TAD;
	  struct _tuple20 _TAF = Cyc_Vcgen_vcgen_test(env,e2,a1f);
	  struct Cyc_AssnDef_AssnMap _TB0;
	  struct Cyc_AssnDef_AssnMap _TB1;
	  _TB1 = _TAF.f0;
	  _TB0 = _TAF.f1;
	  { struct Cyc_AssnDef_AssnMap a2t = _TB1;
	    struct Cyc_AssnDef_AssnMap a2f = _TB0;
	    { struct _tuple20 _TB2;
	      _TC = env;
	      _TD = Cyc_AssnDef_or_assnmap_assnmap(a1t,a2t);
	      _TB2.f0 = Cyc_Vcgen_may_widen(_TC,_TD);
	      _TB2.f1 = a2f;
	      _TB = _TB2;
	    }return _TB;
	  }
	}
      }
    case 9: 
      { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _TAC = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_TA6;
	_TAB = _TAC->f1;
	_TAA = _TAC->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _TAB;
	struct Cyc_Absyn_Exp * e2 = _TAA;
	struct _tuple14 _TAC = Cyc_Vcgen_vcgen_rexp(env,e1,ain);
	struct Cyc_AssnDef_AssnMap _TAD;
	_TAD = _TAC.f1;
	{ struct Cyc_AssnDef_AssnMap ain = _TAD;
	  _TE = Cyc_Vcgen_vcgen_test(env,e2,ain);
	  return _TE;
	}
      }
    case 3: 
      _TF = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_TA6;
      _T10 = _TF->f1;
      if (_T10 != Cyc_Absyn_Not) { goto _TL169;
      }
      _T11 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_TA6;
      _T12 = _T11->f2;
      if (_T12 == 0) { goto _TL16B;
      }
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _TAC = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_TA6;
	_T13 = _TAC->f2;
	{ struct Cyc_List_List _TAD = *_T13;
	  _T14 = _TAD.hd;
	  _TAB = (struct Cyc_Absyn_Exp *)_T14;
	}
      }{ struct Cyc_Absyn_Exp * e1 = _TAB;
	struct _tuple20 _TAC = Cyc_Vcgen_vcgen_test(env,e1,ain);
	struct Cyc_AssnDef_AssnMap _TAD;
	struct Cyc_AssnDef_AssnMap _TAE;
	_TAE = _TAC.f0;
	_TAD = _TAC.f1;
	{ struct Cyc_AssnDef_AssnMap at = _TAE;
	  struct Cyc_AssnDef_AssnMap af = _TAD;
	  { struct _tuple20 _TAF;
	    _TAF.f0 = af;
	    _TAF.f1 = at;
	    _T15 = _TAF;
	  }return _T15;
	}
      }_TL16B: goto _LL11;
      _TL169: _T16 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_TA6;
      _T17 = _T16->f2;
      if (_T17 == 0) { goto _TL16D;
      }
      _T18 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_TA6;
      _T19 = _T18->f2;
      _T1A = (struct Cyc_List_List *)_T19;
      _T1B = _T1A->tl;
      if (_T1B == 0) { goto _TL16F;
      }
      _T1C = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_TA6;
      _T1D = _T1C->f2;
      _T1E = (struct Cyc_List_List *)_T1D;
      _T1F = _T1E->tl;
      _T20 = (struct Cyc_List_List *)_T1F;
      _T21 = _T20->tl;
      if (_T21 != 0) { goto _TL171;
      }
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _TAC = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_TA6;
	_TA8 = _TAC->f1;
	_T22 = _TAC->f2;
	{ struct Cyc_List_List _TAD = *_T22;
	  _T23 = _TAD.hd;
	  _TAB = (struct Cyc_Absyn_Exp *)_T23;
	  _T24 = _TAD.tl;
	  { struct Cyc_List_List _TAE = *_T24;
	    _T25 = _TAE.hd;
	    _TAA = (struct Cyc_Absyn_Exp *)_T25;
	  }
	}
      }{ enum Cyc_Absyn_Primop p = _TA8;
	struct Cyc_Absyn_Exp * e1 = _TAB;
	struct Cyc_Absyn_Exp * e2 = _TAA;
	struct _tuple14 _TAC = Cyc_Vcgen_vcgen_rexp(env,e1,ain);
	struct Cyc_AssnDef_AssnMap _TAD;
	void * _TAE;
	_TAE = _TAC.f0;
	_TAD = _TAC.f1;
	{ void * t1 = _TAE;
	  struct Cyc_AssnDef_AssnMap a1 = _TAD;
	  struct _tuple14 _TAF = Cyc_Vcgen_vcgen_rexp(env,e2,a1);
	  struct Cyc_AssnDef_AssnMap _TB0;
	  void * _TB1;
	  _TB1 = _TAF.f0;
	  _TB0 = _TAF.f1;
	  { void * t2 = _TB1;
	    struct Cyc_AssnDef_AssnMap a2 = _TB0;
	    struct Cyc_AssnDef_AssnMap at = a2;
	    struct Cyc_AssnDef_AssnMap af = a2;
	    _T26 = p;
	    _T27 = (int)_T26;
	    switch (_T27) {
	    case Cyc_Absyn_Eq: 
	      _T28 = at;
	      _T29 = Cyc_AssnDef_eq(t1,t2);
	      at = Cyc_AssnDef_and_assnmap_assn(_T28,_T29);
	      _T2A = af;
	      _T2B = Cyc_AssnDef_neq(t1,t2);
	      af = Cyc_AssnDef_and_assnmap_assn(_T2A,_T2B);
	      goto _LL37;
	    case Cyc_Absyn_Neq: 
	      _T2C = at;
	      _T2D = Cyc_AssnDef_neq(t1,t2);
	      at = Cyc_AssnDef_and_assnmap_assn(_T2C,_T2D);
	      _T2E = af;
	      _T2F = Cyc_AssnDef_eq(t1,t2);
	      af = Cyc_AssnDef_and_assnmap_assn(_T2E,_T2F);
	      goto _LL37;
	    case Cyc_Absyn_ULt: 
	      _T30 = at;
	      _T31 = Cyc_AssnDef_ult(t1,t2);
	      at = Cyc_AssnDef_and_assnmap_assn(_T30,_T31);
	      _T32 = af;
	      _T33 = Cyc_AssnDef_ulte(t2,t1);
	      af = Cyc_AssnDef_and_assnmap_assn(_T32,_T33);
	      goto _LL37;
	    case Cyc_Absyn_Lt: 
	      _T34 = at;
	      _T35 = Cyc_AssnDef_slt(t1,t2);
	      at = Cyc_AssnDef_and_assnmap_assn(_T34,_T35);
	      _T36 = af;
	      _T37 = Cyc_AssnDef_slte(t2,t1);
	      af = Cyc_AssnDef_and_assnmap_assn(_T36,_T37);
	      goto _LL37;
	    case Cyc_Absyn_ULte: 
	      _T38 = at;
	      _T39 = Cyc_AssnDef_ulte(t1,t2);
	      at = Cyc_AssnDef_and_assnmap_assn(_T38,_T39);
	      _T3A = af;
	      _T3B = Cyc_AssnDef_ult(t2,t1);
	      af = Cyc_AssnDef_and_assnmap_assn(_T3A,_T3B);
	      goto _LL37;
	    case Cyc_Absyn_Lte: 
	      _T3C = at;
	      _T3D = Cyc_AssnDef_slte(t1,t2);
	      at = Cyc_AssnDef_and_assnmap_assn(_T3C,_T3D);
	      _T3E = af;
	      _T3F = Cyc_AssnDef_slt(t2,t1);
	      af = Cyc_AssnDef_and_assnmap_assn(_T3E,_T3F);
	      goto _LL37;
	    case Cyc_Absyn_UGt: 
	      _T40 = at;
	      _T41 = Cyc_AssnDef_ult(t2,t1);
	      at = Cyc_AssnDef_and_assnmap_assn(_T40,_T41);
	      _T42 = af;
	      _T43 = Cyc_AssnDef_ulte(t1,t2);
	      af = Cyc_AssnDef_and_assnmap_assn(_T42,_T43);
	      goto _LL37;
	    case Cyc_Absyn_Gt: 
	      _T44 = at;
	      _T45 = Cyc_AssnDef_slt(t2,t1);
	      at = Cyc_AssnDef_and_assnmap_assn(_T44,_T45);
	      _T46 = af;
	      _T47 = Cyc_AssnDef_slte(t1,t2);
	      af = Cyc_AssnDef_and_assnmap_assn(_T46,_T47);
	      goto _LL37;
	    case Cyc_Absyn_UGte: 
	      _T48 = at;
	      _T49 = Cyc_AssnDef_ulte(t2,t1);
	      at = Cyc_AssnDef_and_assnmap_assn(_T48,_T49);
	      _T4A = af;
	      _T4B = Cyc_AssnDef_ult(t1,t2);
	      af = Cyc_AssnDef_and_assnmap_assn(_T4A,_T4B);
	      goto _LL37;
	    case Cyc_Absyn_Gte: 
	      _T4C = at;
	      _T4D = Cyc_AssnDef_slte(t2,t1);
	      at = Cyc_AssnDef_and_assnmap_assn(_T4C,_T4D);
	      _T4E = af;
	      _T4F = Cyc_AssnDef_slt(t1,t2);
	      af = Cyc_AssnDef_and_assnmap_assn(_T4E,_T4F);
	      goto _LL37;
	    default: 
	      _T50 = env;
	      _T51 = e;
	      _T52 = _T51->topt;
	      _T53 = p;
	      _T54 = t1;
	      _T55 = t2;
	      _T56 = at;
	      { struct _tuple14 _TB2 = Cyc_Vcgen_vcgen_binop(_T50,_T52,_T53,
							     _T54,_T55,_T56);
		struct Cyc_AssnDef_AssnMap _TB3;
		void * _TB4;
		_TB4 = _TB2.f0;
		_TB3 = _TB2.f1;
		{ void * t = _TB4;
		  struct Cyc_AssnDef_AssnMap am = _TB3;
		  _T57 = at;
		  _T58 = Cyc_AssnDef_one();
		  _T59 = t;
		  _T5A = Cyc_AssnDef_ulte(_T58,_T59);
		  at = Cyc_AssnDef_and_assnmap_assn(_T57,_T5A);
		  _T5B = af;
		  _T5C = t;
		  _T5D = Cyc_AssnDef_zero();
		  _T5E = Cyc_AssnDef_eq(_T5C,_T5D);
		  af = Cyc_AssnDef_and_assnmap_assn(_T5B,_T5E);
		  goto _LL37;
		}
	      }
	    }
	    _LL37: { struct _tuple20 _TB2;
	      _TB2.f0 = at;
	      _TB2.f1 = af;
	      _T5F = _TB2;
	    }return _T5F;
	  }
	}
      }_TL171: goto _LL11;
      _TL16F: goto _LL11;
      _TL16D: goto _LL11;
    case 37: 
      { struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct * _TAC = (struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct *)_TA6;
	_TAB = _TAC->f1;
	_TA7 = _TAC->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _TAB;
	struct _fat_ptr * f = _TA7;
	_T60 = e1;
	_T61 = _T60->topt;
	_T62 = f;
	_T63 = Cyc_CfFlowInfo_get_field_index(_T61,_T62);
	_T64 = (unsigned int)_T63;
	{ void * i = Cyc_AssnDef_uint(_T64);
	  struct _tuple14 _TAC = Cyc_Vcgen_vcgen_rexp(env,e1,ain);
	  struct Cyc_AssnDef_AssnMap _TAD;
	  void * _TAE;
	  _TAE = _TAC.f0;
	  _TAD = _TAC.f1;
	  { void * t = _TAE;
	    struct Cyc_AssnDef_AssnMap ain = _TAD;
	    void * tt = Cyc_AssnDef_tagof_tm(t);
	    _T65 = ain;
	    _T66 = Cyc_AssnDef_eq(tt,i);
	    { struct Cyc_AssnDef_AssnMap at = Cyc_AssnDef_and_assnmap_assn(_T65,
									   _T66);
	      _T67 = ain;
	      _T68 = Cyc_AssnDef_neq(tt,i);
	      { struct Cyc_AssnDef_AssnMap af = Cyc_AssnDef_and_assnmap_assn(_T67,
									     _T68);
		{ struct _tuple20 _TAF;
		  _TAF.f0 = at;
		  _TAF.f1 = af;
		  _T69 = _TAF;
		}return _T69;
	      }
	    }
	  }
	}
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _TAC = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_TA6;
	_T6A = _TAC->f1;
	_TAB = (void *)_T6A;
	_TAA = _TAC->f2;
      }{ void * tp = _TAB;
	struct Cyc_Absyn_Exp * e1 = _TAA;
	{ struct _tuple0 _TAC;
	  _TAC.f0 = Cyc_Absyn_compress(tp);
	  _T6C = e1;
	  _T6D = _T6C->topt;
	  _TAC.f1 = Cyc_Absyn_compress(_T6D);
	  _T6B = _TAC;
	}{ struct _tuple0 _TAC = _T6B;
	  enum Cyc_Absyn_Size_of _TAD;
	  enum Cyc_Absyn_Sign _TAE;
	  enum Cyc_Absyn_Size_of _TAF;
	  enum Cyc_Absyn_Sign _TB0;
	  _T6E = _TAC.f0;
	  _T6F = (int *)_T6E;
	  _T70 = *_T6F;
	  if (_T70 != 0) { goto _TL174;
	  }
	  _T71 = _TAC.f0;
	  _T72 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T71;
	  _T73 = _T72->f1;
	  _T74 = (int *)_T73;
	  _T75 = *_T74;
	  if (_T75 != 1) { goto _TL176;
	  }
	  _T76 = _TAC.f1;
	  _T77 = (int *)_T76;
	  _T78 = *_T77;
	  if (_T78 != 0) { goto _TL178;
	  }
	  _T79 = _TAC.f1;
	  _T7A = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T79;
	  _T7B = _T7A->f1;
	  _T7C = (int *)_T7B;
	  _T7D = *_T7C;
	  if (_T7D != 1) { goto _TL17A;
	  }
	  _T7E = _TAC.f0;
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB1 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T7E;
	    _T7F = _TB1->f1;
	    { struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _TB2 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T7F;
	      _TB0 = _TB2->f1;
	      _TAF = _TB2->f2;
	    }
	  }_T80 = _TAC.f1;
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB1 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T80;
	    _T81 = _TB1->f1;
	    { struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _TB2 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T81;
	      _TAE = _TB2->f1;
	      _TAD = _TB2->f2;
	    }
	  }{ enum Cyc_Absyn_Sign u1 = _TB0;
	    enum Cyc_Absyn_Size_of s1 = _TAF;
	    enum Cyc_Absyn_Sign u2 = _TAE;
	    enum Cyc_Absyn_Size_of s2 = _TAD;
	    _T83 = s1;
	    _T84 = (int)_T83;
	    if (_T84 != 3) { goto _TL17C;
	    }
	    _T82 = 2U;
	    goto _TL17D;
	    _TL17C: _T82 = s1;
	    _TL17D: s1 = _T82;
	    _T86 = s2;
	    _T87 = (int)_T86;
	    if (_T87 != 3) { goto _TL17E;
	    }
	    _T85 = 2U;
	    goto _TL17F;
	    _TL17E: _T85 = s2;
	    _TL17F: s2 = _T85;
	    _T88 = s1;
	    _T89 = (int)_T88;
	    _T8A = s2;
	    _T8B = (int)_T8A;
	    if (_T89 != _T8B) { goto _TL180;
	    }
	    _T8C = Cyc_Vcgen_vcgen_test(env,e1,ain);
	    return _T8C;
	    _TL180: goto _LL51;
	  }_TL17A: goto _LL54;
	  _TL178: goto _LL54;
	  _TL176: goto _LL54;
	  _TL174: _LL54: goto _LL51;
	  _LL51: ;
	}goto _LL12;
      }
    default: 
      _LL11: _LL12: { struct _tuple14 _TAC = Cyc_Vcgen_vcgen_rexp(env,e,ain);
	struct Cyc_AssnDef_AssnMap _TAD;
	void * _TAE;
	_TAE = _TAC.f0;
	_TAD = _TAC.f1;
	{ void * t = _TAE;
	  struct Cyc_AssnDef_AssnMap aout = _TAD;
	  _T8D = t;
	  _T8E = (int *)_T8D;
	  _T8F = *_T8E;
	  if (_T8F != 0) { goto _TL182;
	  }
	  _T90 = t;
	  _T91 = (struct Cyc_AssnDef_Uint_AssnDef_Term_struct *)_T90;
	  _T92 = _T91->f1;
	  if (_T92 != 0) { goto _TL184;
	  }
	  { struct _tuple20 _TAF;
	    _T94 = aout;
	    _T95 = &Cyc_AssnDef_false_assn;
	    _T96 = (struct Cyc_AssnDef_False_AssnDef_Assn_struct *)_T95;
	    _T97 = (void *)_T96;
	    _TAF.f0 = Cyc_AssnDef_and_assnmap_assn(_T94,_T97);
	    _TAF.f1 = aout;
	    _T93 = _TAF;
	  }return _T93;
	  _TL184: { struct _tuple20 _TAF;
	    _TAF.f0 = aout;
	    _T99 = aout;
	    _T9A = &Cyc_AssnDef_false_assn;
	    _T9B = (struct Cyc_AssnDef_False_AssnDef_Assn_struct *)_T9A;
	    _T9C = (void *)_T9B;
	    _TAF.f1 = Cyc_AssnDef_and_assnmap_assn(_T99,_T9C);
	    _T98 = _TAF;
	  }return _T98;
	  _TL182: { struct _tuple20 _TAF;
	    _T9E = aout;
	    _T9F = Cyc_AssnDef_one();
	    _TA0 = t;
	    _TA1 = Cyc_AssnDef_ulte(_T9F,_TA0);
	    _TAF.f0 = Cyc_AssnDef_and_assnmap_assn(_T9E,_TA1);
	    _TA2 = aout;
	    _TA3 = t;
	    _TA4 = Cyc_AssnDef_zero();
	    _TA5 = Cyc_AssnDef_eq(_TA3,_TA4);
	    _TAF.f1 = Cyc_AssnDef_and_assnmap_assn(_TA2,_TA5);
	    _T9D = _TAF;
	  }return _T9D;
	  ;
	}
      }
    }
    ;
  }
}
static void Cyc_Vcgen_update_return(struct Cyc_Vcgen_Env * env,void * topt,
				    struct Cyc_AssnDef_AssnMap a,void * tp) {
  struct Cyc_AssnDef_AssnMap _T0;
  void * _T1;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T2;
  struct Cyc_AssnDef_False_AssnDef_Assn_struct * _T3;
  void * _T4;
  struct Cyc_Vcgen_Env * _T5;
  struct Cyc_AssnDef_AssnMap * _T6;
  struct Cyc_Vcgen_Env * _T7;
  struct Cyc_Absyn_Vardecl * _T8;
  struct Cyc_Vcgen_Env * _T9;
  struct Cyc_AssnDef_AssnMap _TA;
  struct Cyc_Vcgen_Env * _TB;
  struct Cyc_Vcgen_Env * _TC;
  struct Cyc_Absyn_Vardecl * _TD;
  void * _TE;
  void * _TF;
  struct Cyc_Vcgen_Env * _T10;
  struct Cyc_Vcgen_Env * _T11;
  struct Cyc_AssnDef_AssnMap * _T12;
  struct Cyc_AssnDef_AssnMap * _T13;
  struct Cyc_AssnDef_AssnMap _T14;
  struct Cyc_AssnDef_AssnMap _T15;
  struct Cyc_AssnDef_AssnMap _T16;
  struct Cyc_Vcgen_Env * _T17;
  struct Cyc_AssnDef_AssnMap * _T18;
  struct Cyc_AssnDef_AssnMap * _T19;
  _T0 = a;
  _T1 = _T0.assn;
  _T2 = &Cyc_AssnDef_false_assn;
  _T3 = (struct Cyc_AssnDef_False_AssnDef_Assn_struct *)_T2;
  _T4 = (void *)_T3;
  if (_T1 != _T4) { goto _TL186;
  }
  return;
  _TL186: { void * t;
    if (topt == 0) { goto _TL188;
    }
    t = topt;
    goto _TL189;
    _TL188: t = Cyc_AssnDef_fresh_var(0,tp);
    _TL189: _T5 = env;
    _T6 = _T5->res_assnmap;
    if (_T6 != 0) { goto _TL18A;
    }
    return;
    _TL18A: _T7 = env;
    _T8 = _T7->result;
    if (_T8 == 0) { goto _TL18C;
    }
    _T9 = env;
    _TA = a;
    _TB = env;
    _TC = env;
    _TD = _TC->result;
    _TE = Cyc_Vcgen_myaddr(_TB,_TD);
    _TF = t;
    a = Cyc_Vcgen_do_assign(_T9,_TA,_TE,_TF);
    goto _TL18D;
    _TL18C: _TL18D: _T10 = env;
    _T11 = env;
    _T12 = _T11->res_assnmap;
    _T13 = _check_null(_T12);
    _T14 = *_T13;
    _T15 = a;
    _T16 = Cyc_AssnDef_or_assnmap_assnmap(_T14,_T15);
    a = Cyc_Vcgen_may_widen(_T10,_T16);
    _T17 = env;
    _T18 = _T17->res_assnmap;
    _T19 = _check_null(_T18);
    *_T19 = a;
  }
}
static struct Cyc_Absyn_Exp * Cyc_Vcgen_find_assert_e(struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  void * _T6;
  int * _T7;
  int _T8;
  struct Cyc_Absyn_Exp * _T9;
  void * _TA;
  long _TB;
  struct Cyc_Absyn_Exp * _TC;
  _TL18E: if (1) { goto _TL18F;
  }else { goto _TL190;
  }
  _TL18F: _T0 = s;
  { void * _TD = _T0->r;
    struct Cyc_Absyn_Stmt * _TE;
    long _TF;
    struct Cyc_Absyn_Exp * _T10;
    _T1 = (int *)_TD;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      _T3 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_TD;
      _T4 = _T3->f1;
      _T5 = (struct Cyc_Absyn_Exp *)_T4;
      _T6 = _T5->r;
      _T7 = (int *)_T6;
      _T8 = *_T7;
      if (_T8 != 41) { goto _TL192;
      }
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T11 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_TD;
	_T9 = _T11->f1;
	{ struct Cyc_Absyn_Exp _T12 = *_T9;
	  _TA = _T12.r;
	  { struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T13 = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_TA;
	    _T10 = _T13->f1;
	    _TF = _T13->f2;
	  }
	}
      }_TB = (long)_TF;
      if (! _TB) { goto _TL194;
      }
      { struct Cyc_Absyn_Exp * e = _T10;
	long static_only = _TF;
	_TC = e;
	return _TC;
      }_TL194: goto _LL5;
      _TL192: goto _LL5;
    case 2: 
      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T11 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_TD;
	_TE = _T11->f1;
      }{ struct Cyc_Absyn_Stmt * sa = _TE;
	s = sa;
	goto _TL18E;
      }
    default: 
      _LL5: return 0;
    }
    ;
  }goto _TL18E;
  _TL190: ;
}
static struct Cyc_AssnDef_AssnMap Cyc_Vcgen_vcgen_stmt(struct Cyc_Vcgen_Env * env,
						       struct Cyc_Absyn_Stmt * s,
						       struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_AssnDef_AssnMap _T3;
  struct Cyc_Vcgen_Env * _T4;
  void * * _T5;
  struct Cyc_Vcgen_Env * _T6;
  void * * _T7;
  struct Cyc_AssnDef_AssnMap _T8;
  struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Vcgen_Env * _TB;
  void * _TC;
  struct Cyc_AssnDef_AssnMap _TD;
  struct Cyc_Absyn_Exp * _TE;
  void * _TF;
  struct Cyc_AssnDef_AssnMap _T10;
  struct Cyc_AssnDef_AssnMap _T11;
  struct Cyc_Vcgen_Env * _T12;
  struct Cyc_AssnDef_AssnMap _T13;
  struct Cyc_AssnDef_AssnMap _T14;
  struct Cyc_Vcgen_Env * _T15;
  struct Cyc_AssnDef_AssnMap * _T16;
  struct Cyc_AssnDef_AssnMap * _T17;
  struct Cyc_Vcgen_Env * _T18;
  struct Cyc_AssnDef_AssnMap * _T19;
  struct Cyc_AssnDef_AssnMap * _T1A;
  struct Cyc_AssnDef_AssnMap _T1B;
  struct Cyc_AssnDef_AssnMap _T1C;
  struct Cyc_AssnDef_AssnMap _T1D;
  struct Cyc_Absyn_Stmt * (* _T1E)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *);
  void * (* _T1F)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Vcgen_Env * _T20;
  struct Cyc_Hashtable_Table * _T21;
  struct Cyc_Absyn_Stmt * _T22;
  struct Cyc_AssnDef_AssnMap _T23;
  struct _tuple11 _T24;
  struct _tuple11 _T25;
  struct Cyc_AssnDef_AssnMap _T26;
  struct _tuple11 _T27;
  struct _tuple11 _T28;
  struct _tuple11 _T29;
  struct _tuple11 _T2A;
  struct Cyc_AssnDef_AssnMap _T2B;
  struct _tuple11 _T2C;
  struct _tuple11 _T2D;
  struct Cyc_AssnDef_AssnMap _T2E;
  void * _T2F;
  struct Cyc_AssnDef_AssnMap _T30;
  struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct * _T31;
  struct Cyc_Absyn_Switch_clause * * _T32;
  int (* _T33)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T34)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T35;
  struct _fat_ptr _T36;
  struct Cyc_Absyn_Switch_clause * * _T37;
  struct Cyc_Absyn_Switch_clause * _T38;
  struct Cyc_Core_Opt * _T39;
  struct Cyc_Core_Opt * _T3A;
  void * _T3B;
  struct Cyc_List_List * _T3C;
  struct _tuple1 _T3D;
  struct Cyc_List_List * _T3E;
  struct Cyc_List_List * _T3F;
  void * _T40;
  struct Cyc_Vcgen_Env * _T41;
  struct Cyc_AssnDef_AssnMap _T42;
  void * _T43;
  struct Cyc_List_List * _T44;
  void * _T45;
  struct Cyc_List_List * _T46;
  struct Cyc_List_List * _T47;
  struct Cyc_Vcgen_Env * _T48;
  struct Cyc_Absyn_Switch_clause * _T49;
  struct Cyc_Absyn_Stmt * _T4A;
  struct Cyc_AssnDef_AssnMap _T4B;
  struct Cyc_AssnDef_AssnMap _T4C;
  struct Cyc_Vcgen_Env * _T4D;
  struct Cyc_Absyn_Exp * _T4E;
  struct Cyc_AssnDef_AssnMap _T4F;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T50;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T51;
  struct Cyc_AssnDef_AssnMap _T52;
  struct Cyc_AssnDef_AssnMap _T53;
  void * _T54;
  struct Cyc_AssnDef_AssnMap _T55;
  void * _T56;
  long _T57;
  struct Cyc_String_pa_PrintArg_struct _T58;
  struct Cyc_String_pa_PrintArg_struct _T59;
  struct Cyc_Absyn_Stmt * _T5A;
  unsigned int _T5B;
  struct _fat_ptr _T5C;
  struct _fat_ptr _T5D;
  struct Cyc_Vcgen_Env * _T5E;
  struct Cyc_Absyn_Exp * _T5F;
  struct Cyc_AssnDef_AssnMap _T60;
  struct Cyc_Absyn_Stmt * (* _T61)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *);
  void * (* _T62)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Vcgen_Env * _T63;
  struct Cyc_Hashtable_Table * _T64;
  struct Cyc_Absyn_Stmt * _T65;
  struct Cyc_Absyn_Stmt * _T66;
  int * _T67;
  int _T68;
  struct Cyc_Vcgen_Env * _T69;
  struct Cyc_Absyn_Exp * _T6A;
  struct Cyc_AssnDef_AssnMap _T6B;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T6C;
  struct Cyc_AssnDef_True_AssnDef_Assn_struct * _T6D;
  struct Cyc_AssnDef_AssnMap _T6E;
  struct Cyc_AssnDef_AssnMap _T6F;
  void * _T70;
  struct Cyc_AssnDef_AssnMap _T71;
  void * _T72;
  long _T73;
  struct Cyc_String_pa_PrintArg_struct _T74;
  struct Cyc_AssnDef_AssnMap _T75;
  void * _T76;
  struct Cyc_String_pa_PrintArg_struct _T77;
  struct Cyc_Absyn_Stmt * _T78;
  unsigned int _T79;
  struct _fat_ptr _T7A;
  struct _fat_ptr _T7B;
  int (* _T7C)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T7D)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T7E;
  struct _fat_ptr _T7F;
  struct Cyc_AssnDef_AssnMap _T80;
  void * _T81;
  struct Cyc_Vcgen_Env * _T82;
  struct Cyc_Vcgen_Env * _T83;
  struct Cyc_AssnDef_AssnMap * _T84;
  struct Cyc_Vcgen_Env * _T85;
  struct Cyc_AssnDef_AssnMap * _T86;
  struct Cyc_AssnDef_AssnMap * _T87;
  struct Cyc_Vcgen_Env * _T88;
  struct Cyc_Absyn_Vardecl * _T89;
  struct Cyc_AssnDef_AssnMap _T8A;
  struct Cyc_Vcgen_Env * _T8B;
  struct Cyc_AssnDef_AssnMap _T8C;
  struct Cyc_AssnDef_AssnMap _T8D;
  LOOP: { struct Cyc_AssnDef_AssnMap oldam = Cyc_Vcgen_lookup_stmt_assnmap(env,
									   s);
    amin = Cyc_AssnDef_or_assnmap_assnmap(oldam,amin);
    _T0 = s;
    { void * _T8E = _T0->r;
      struct Cyc_Absyn_Switch_clause * _T8F;
      struct Cyc_List_List * _T90;
      struct Cyc_Absyn_Stmt * _T91;
      struct Cyc_Absyn_Stmt * _T92;
      struct Cyc_Absyn_Exp * _T93;
      struct Cyc_Absyn_Stmt * _T94;
      void * _T95;
      void * _T96;
      _T1 = (int *)_T8E;
      _T2 = *_T1;
      switch (_T2) {
      case 0: 
	_T3 = amin;
	return _T3;
      case 1: 
	{ struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T96 = _T97->f1;
	}{ struct Cyc_Absyn_Exp * e = _T96;
	  struct _tuple14 _T97 = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	  struct Cyc_AssnDef_AssnMap _T98;
	  void * _T99;
	  _T99 = _T97.f0;
	  _T98 = _T97.f1;
	  { void * t = _T99;
	    struct Cyc_AssnDef_AssnMap amout = _T98;
	    _T4 = env;
	    _T5 = _T4->exp_stmt;
	    if (_T5 == 0) { goto _TL197;
	    }
	    _T6 = env;
	    _T7 = _T6->exp_stmt;
	    *_T7 = t;
	    goto _TL198;
	    _TL197: _TL198: _T8 = amout;
	    return _T8;
	  }
	}
      case 2: 
	{ struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T96 = _T97->f1;
	  _T95 = _T97->f2;
	}{ struct Cyc_Absyn_Stmt * s1 = _T96;
	  struct Cyc_Absyn_Stmt * s2 = _T95;
	  amin = Cyc_Vcgen_vcgen_stmt(env,s1,amin);
	  s = s2;
	  goto LOOP;
	}
      case 3: 
	_T9 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T8E;
	_TA = _T9->f1;
	if (_TA == 0) { goto _TL199;
	}
	{ struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T96 = _T97->f1;
	}{ struct Cyc_Absyn_Exp * e = _T96;
	  struct _tuple14 _T97 = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	  struct Cyc_AssnDef_AssnMap _T98;
	  void * _T99;
	  _T99 = _T97.f0;
	  _T98 = _T97.f1;
	  { void * t = _T99;
	    struct Cyc_AssnDef_AssnMap amout = _T98;
	    _TB = env;
	    _TC = t;
	    _TD = amout;
	    _TE = e;
	    _TF = _TE->topt;
	    Cyc_Vcgen_update_return(_TB,_TC,_TD,_TF);
	    _T10 = Cyc_AssnDef_false_assnmap();
	    return _T10;
	  }
	}_TL199: Cyc_Vcgen_update_return(env,0,amin,0);
	_T11 = Cyc_AssnDef_false_assnmap();
	return _T11;
      case 4: 
	{ struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T96 = _T97->f1;
	  _T95 = _T97->f2;
	  _T94 = _T97->f3;
	}{ struct Cyc_Absyn_Exp * e1 = _T96;
	  struct Cyc_Absyn_Stmt * s1 = _T95;
	  struct Cyc_Absyn_Stmt * s2 = _T94;
	  struct _tuple20 _T97 = Cyc_Vcgen_vcgen_test(env,e1,amin);
	  struct Cyc_AssnDef_AssnMap _T98;
	  struct Cyc_AssnDef_AssnMap _T99;
	  _T99 = _T97.f0;
	  _T98 = _T97.f1;
	  { struct Cyc_AssnDef_AssnMap amt = _T99;
	    struct Cyc_AssnDef_AssnMap amf = _T98;
	    amt = Cyc_Vcgen_vcgen_stmt(env,s1,amt);
	    amf = Cyc_Vcgen_vcgen_stmt(env,s2,amf);
	    _T12 = env;
	    _T13 = Cyc_AssnDef_or_assnmap_assnmap(amt,amf);
	    _T14 = Cyc_Vcgen_may_widen(_T12,_T13);
	    return _T14;
	  }
	}
      case 7: 
	_T15 = env;
	_T16 = _T15->continue_assnmap;
	_T17 = _check_null(_T16);
	_T18 = env;
	_T19 = _T18->continue_assnmap;
	_T1A = _check_null(_T19);
	_T1B = *_T1A;
	_T1C = amin;
	*_T17 = Cyc_AssnDef_or_assnmap_assnmap(_T1B,_T1C);
	_T1D = Cyc_AssnDef_false_assnmap();
	return _T1D;
      case 6: 
	_T1F = Cyc_Hashtable_lookup;
	{ struct Cyc_Absyn_Stmt * (* _T97)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *) = (struct Cyc_Absyn_Stmt * (*)(struct Cyc_Hashtable_Table *,
																struct Cyc_Absyn_Stmt *))_T1F;
	  _T1E = _T97;
	}_T20 = env;
	_T21 = _T20->succ_table;
	_T22 = s;
	{ struct Cyc_Absyn_Stmt * dest = _T1E(_T21,_T22);
	  if (dest != 0) { goto _TL19B;
	  }
	  Cyc_Vcgen_update_return(env,0,amin,0);
	  goto _TL19C;
	  _TL19B: Cyc_Vcgen_update_stmt_assnmap(env,dest,amin);
	  _TL19C: _T23 = Cyc_AssnDef_false_assnmap();
	  return _T23;
	}
      case 5: 
	{ struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T24 = _T97->f1;
	  _T96 = _T24.f0;
	  _T25 = _T97->f1;
	  _T95 = _T25.f1;
	  _T94 = _T97->f2;
	}{ struct Cyc_Absyn_Exp * e = _T96;
	  struct Cyc_Absyn_Stmt * dummy = _T95;
	  struct Cyc_Absyn_Stmt * s1 = _T94;
	  _T26 = Cyc_Vcgen_vcgen_loop(env,0,0,e,dummy,s1,0,amin);
	  return _T26;
	}
      case 9: 
	{ struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T96 = _T97->f1;
	  _T27 = _T97->f2;
	  _T95 = _T27.f0;
	  _T28 = _T97->f2;
	  _T94 = _T28.f1;
	  _T29 = _T97->f3;
	  _T93 = _T29.f0;
	  _T2A = _T97->f3;
	  _T92 = _T2A.f1;
	  _T91 = _T97->f4;
	}{ struct Cyc_Absyn_Exp * e1 = _T96;
	  struct Cyc_Absyn_Exp * e2 = _T95;
	  struct Cyc_Absyn_Stmt * dummy2 = _T94;
	  struct Cyc_Absyn_Exp * e3 = _T93;
	  struct Cyc_Absyn_Stmt * dummy3 = _T92;
	  struct Cyc_Absyn_Stmt * s1 = _T91;
	  _T2B = Cyc_Vcgen_vcgen_loop(env,e1,0,e2,dummy2,s1,e3,amin);
	  return _T2B;
	}
      case 14: 
	{ struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T96 = _T97->f1;
	  _T2C = _T97->f2;
	  _T95 = _T2C.f0;
	  _T2D = _T97->f2;
	  _T94 = _T2D.f1;
	}{ struct Cyc_Absyn_Stmt * s1 = _T96;
	  struct Cyc_Absyn_Exp * e = _T95;
	  struct Cyc_Absyn_Stmt * dummy = _T94;
	  _T2E = Cyc_Vcgen_vcgen_loop(env,0,s1,e,dummy,s1,0,amin);
	  return _T2E;
	}
      case 10: 
	{ struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T96 = _T97->f1;
	  _T90 = _T97->f2;
	  _T2F = _T97->f3;
	  _T95 = (void *)_T2F;
	}{ struct Cyc_Absyn_Exp * e = _T96;
	  struct Cyc_List_List * scs = _T90;
	  void * dtree = _T95;
	  struct _tuple14 _T97 = Cyc_Vcgen_vcgen_rexp(env,e,amin);
	  struct Cyc_AssnDef_AssnMap _T98;
	  void * _T99;
	  _T99 = _T97.f0;
	  _T98 = _T97.f1;
	  { void * t = _T99;
	    struct Cyc_AssnDef_AssnMap am = _T98;
	    _T30 = Cyc_Vcgen_vcgen_switch(env,t,scs,am);
	    return _T30;
	  }
	}
      case 11: 
	_T31 = (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct *)_T8E;
	_T32 = _T31->f2;
	if (_T32 != 0) { goto _TL19D;
	}
	_T34 = Cyc_Warn_impos;
	{ int (* _T97)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_T34;
	  _T33 = _T97;
	}_T35 = _tag_fat("vcgen fallthru",sizeof(char),15U);
	_T36 = _tag_fat(0U,sizeof(void *),0);
	_T33(_T35,_T36);
	goto _TL19E;
	_TL19D: { struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T96 = _T97->f1;
	  _T37 = _T97->f2;
	  { struct Cyc_Absyn_Switch_clause * _T98 = *_T37;
	    _T8F = _T98;
	  }
	}{ struct Cyc_List_List * es = _T96;
	  struct Cyc_Absyn_Switch_clause * dest = _T8F;
	  struct _tuple19 _T97 = Cyc_Vcgen_vcgen_rexps(env,es,amin);
	  struct Cyc_AssnDef_AssnMap _T98;
	  struct Cyc_List_List * _T99;
	  _T99 = _T97.f0;
	  _T98 = _T97.f1;
	  { struct Cyc_List_List * ts = _T99;
	    struct Cyc_AssnDef_AssnMap am = _T98;
	    if (ts == 0) { goto _TL19F;
	    }
	    _T38 = dest;
	    _T39 = _T38->pat_vars;
	    _T3A = _check_null(_T39);
	    _T3B = _T3A->v;
	    _T3C = (struct Cyc_List_List *)_T3B;
	    _T3D = Cyc_List_split(_T3C);
	    _T3E = _T3D.f0;
	    { struct Cyc_List_List * x = Cyc_Tcutil_filter_nulls(_T3E);
	      _TL1A4: if (x != 0) { goto _TL1A2;
	      }else { goto _TL1A3;
	      }
	      _TL1A2: _T3F = x;
	      _T40 = _T3F->hd;
	      { struct Cyc_Absyn_Vardecl * vd = (struct Cyc_Absyn_Vardecl *)_T40;
		if (vd == 0) { goto _TL1A5;
		}
		_T41 = env;
		_T42 = am;
		_T43 = Cyc_Vcgen_myaddr(env,vd);
		_T44 = _check_null(ts);
		_T45 = _T44->hd;
		am = Cyc_Vcgen_do_assign(_T41,_T42,_T43,_T45);
		goto _TL1A6;
		_TL1A5: _TL1A6: ;
	      }_T46 = x;
	      x = _T46->tl;
	      _T47 = ts;
	      ts = _T47->tl;
	      goto _TL1A4;
	      _TL1A3: ;
	    }goto _TL1A0;
	    _TL19F: _TL1A0: _T48 = env;
	    _T49 = dest;
	    _T4A = _T49->body;
	    _T4B = am;
	    Cyc_Vcgen_update_stmt_assnmap(_T48,_T4A,_T4B);
	    _T4C = Cyc_AssnDef_false_assnmap();
	    return _T4C;
	  }
	}_TL19E: ;
      case 12: 
	{ struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T96 = _T97->f1;
	  _T94 = _T97->f2;
	}{ struct Cyc_Absyn_Decl * d = _T96;
	  struct Cyc_Absyn_Stmt * s1 = _T94;
	  amin = Cyc_Vcgen_vcgen_local_decl(env,d,amin);
	  s = s1;
	  goto LOOP;
	}
      case 13: 
	{ struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T94 = _T97->f2;
	}{ struct Cyc_Absyn_Stmt * s1 = _T94;
	  struct Cyc_Absyn_Exp * label_assn_opt = Cyc_Vcgen_find_assert_e(s1);
	  if (label_assn_opt != 0) { goto _TL1A7;
	  }
	  amin = Cyc_AssnDef_true_assnmap();
	  goto _TL1A8;
	  _TL1A7: _T4D = env;
	  _T4E = label_assn_opt;
	  { struct Cyc_AssnDef_AssnMap _T97;
	    _T50 = &Cyc_AssnDef_true_assn;
	    _T51 = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T50;
	    _T97.assn = (void *)_T51;
	    _T52 = amin;
	    _T97.map = _T52.map;
	    _T4F = _T97;
	  }{ struct _tuple20 _T97 = Cyc_Vcgen_vcgen_test(_T4D,_T4E,_T4F);
	    struct Cyc_AssnDef_AssnMap _T98;
	    _T98 = _T97.f0;
	    { struct Cyc_AssnDef_AssnMap amt = _T98;
	      _T53 = amin;
	      _T54 = _T53.assn;
	      _T55 = amt;
	      _T56 = _T55.assn;
	      _T57 = Cyc_Vcgen_implies(_T54,_T56);
	      if (_T57) { goto _TL1A9;
	      }else { goto _TL1AB;
	      }
	      _TL1AB: { struct Cyc_String_pa_PrintArg_struct _T99;
		_T99.tag = 0;
		_T99.f1 = Cyc_AssnDef_assnmap2string(amin);
		_T58 = _T99;
	      }{ struct Cyc_String_pa_PrintArg_struct _T99 = _T58;
		{ struct Cyc_String_pa_PrintArg_struct _T9A;
		  _T9A.tag = 0;
		  _T9A.f1 = Cyc_AssnDef_assnmap2string(amt);
		  _T59 = _T9A;
		}{ struct Cyc_String_pa_PrintArg_struct _T9A = _T59;
		  void * _T9B[2];
		  _T9B[0] = &_T99;
		  _T9B[1] = &_T9A;
		  _T5A = s;
		  _T5B = _T5A->loc;
		  _T5C = _tag_fat("can not prove @assert(%s) \n from %s",
				  sizeof(char),36U);
		  _T5D = _tag_fat(_T9B,sizeof(void *),2);
		  Cyc_Warn_err(_T5B,_T5C,_T5D);
		}
	      }goto _TL1AA;
	      _TL1A9: _TL1AA: _T5E = env;
	      _T5F = label_assn_opt;
	      _T60 = Cyc_AssnDef_true_assnmap();
	      { struct _tuple20 _T99 = Cyc_Vcgen_vcgen_test(_T5E,_T5F,_T60);
		struct Cyc_AssnDef_AssnMap _T9A;
		_T9A = _T99.f0;
		{ struct Cyc_AssnDef_AssnMap amt = _T9A;
		  amin = amt;
		}
	      }
	    }
	  }_TL1A8: s = s1;
	  goto LOOP;
	}
      case 8: 
	_T62 = Cyc_Hashtable_lookup;
	{ struct Cyc_Absyn_Stmt * (* _T97)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *) = (struct Cyc_Absyn_Stmt * (*)(struct Cyc_Hashtable_Table *,
																struct Cyc_Absyn_Stmt *))_T62;
	  _T61 = _T97;
	}_T63 = env;
	_T64 = _T63->succ_table;
	_T65 = s;
	{ struct Cyc_Absyn_Stmt * destopt = _T61(_T64,_T65);
	  if (destopt == 0) { goto _TL1AC;
	  }
	  _T66 = destopt;
	  { void * _T97 = _T66->r;
	    struct Cyc_Absyn_Stmt * _T98;
	    _T67 = (int *)_T97;
	    _T68 = *_T67;
	    if (_T68 != 13) { goto _TL1AE;
	    }
	    { struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T99 = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_T97;
	      _T98 = _T99->f2;
	    }{ struct Cyc_Absyn_Stmt * s1 = _T98;
	      struct Cyc_Absyn_Exp * label_assn_opt = Cyc_Vcgen_find_assert_e(s1);
	      if (label_assn_opt != 0) { goto _TL1B0;
	      }
	      goto _LL3A;
	      _TL1B0: { struct Cyc_Absyn_Exp * label_assn = label_assn_opt;
		_T69 = env;
		_T6A = label_assn;
		{ struct Cyc_AssnDef_AssnMap _T99;
		  _T6C = &Cyc_AssnDef_true_assn;
		  _T6D = (struct Cyc_AssnDef_True_AssnDef_Assn_struct *)_T6C;
		  _T99.assn = (void *)_T6D;
		  _T6E = amin;
		  _T99.map = _T6E.map;
		  _T6B = _T99;
		}{ struct _tuple20 _T99 = Cyc_Vcgen_vcgen_test(_T69,_T6A,
							       _T6B);
		  struct Cyc_AssnDef_AssnMap _T9A;
		  _T9A = _T99.f0;
		  { struct Cyc_AssnDef_AssnMap amt = _T9A;
		    _T6F = amin;
		    _T70 = _T6F.assn;
		    _T71 = amt;
		    _T72 = _T71.assn;
		    _T73 = Cyc_Vcgen_implies(_T70,_T72);
		    if (_T73) { goto _TL1B2;
		    }else { goto _TL1B4;
		    }
		    _TL1B4: { struct Cyc_String_pa_PrintArg_struct _T9B;
		      _T9B.tag = 0;
		      _T75 = amt;
		      _T76 = _T75.assn;
		      _T9B.f1 = Cyc_AssnDef_assn2string(_T76);
		      _T74 = _T9B;
		    }{ struct Cyc_String_pa_PrintArg_struct _T9B = _T74;
		      { struct Cyc_String_pa_PrintArg_struct _T9C;
			_T9C.tag = 0;
			_T9C.f1 = Cyc_AssnDef_assnmap2string(amin);
			_T77 = _T9C;
		      }{ struct Cyc_String_pa_PrintArg_struct _T9C = _T77;
			void * _T9D[2];
			_T9D[0] = &_T9B;
			_T9D[1] = &_T9C;
			_T78 = s;
			_T79 = _T78->loc;
			_T7A = _tag_fat("cannot prove @assert(%s)\nfrom %s",
					sizeof(char),33U);
			_T7B = _tag_fat(_T9D,sizeof(void *),2);
			Cyc_Warn_err(_T79,_T7A,_T7B);
		      }
		    }goto _TL1B3;
		    _TL1B2: _TL1B3: goto _LL3A;
		  }
		}
	      }
	    }_TL1AE: _T7D = Cyc_Warn_impos;
	    { int (* _T99)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_T7D;
	      _T7C = _T99;
	    }_T7E = _tag_fat("vcgen goto",sizeof(char),11U);
	    _T7F = _tag_fat(0U,sizeof(void *),0);
	    _T7C(_T7E,_T7F);
	    _LL3A: ;
	  }goto _TL1AD;
	  _TL1AC: _TL1AD: _T80 = Cyc_AssnDef_false_assnmap();
	  return _T80;
	}
      default: 
	{ struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct * _T97 = (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct *)_T8E;
	  _T94 = _T97->f1;
	  _T90 = _T97->f2;
	  _T81 = _T97->f3;
	  _T96 = (void *)_T81;
	}{ struct Cyc_Absyn_Stmt * s = _T94;
	  struct Cyc_List_List * scs = _T90;
	  void * dtree = _T96;
	  _T82 = env;
	  { struct Cyc_AssnDef_AssnMap * old_try_assnmap = _T82->try_assnmap;
	    _T83 = env;
	    { struct Cyc_AssnDef_AssnMap * _T97 = _cycalloc(sizeof(struct Cyc_AssnDef_AssnMap));
	      *_T97 = Cyc_AssnDef_false_assnmap();
	      _T84 = (struct Cyc_AssnDef_AssnMap *)_T97;
	    }_T83->try_assnmap = _T84;
	    { struct Cyc_AssnDef_AssnMap am1 = Cyc_Vcgen_vcgen_stmt(env,s,
								    amin);
	      _T85 = env;
	      _T86 = _T85->try_assnmap;
	      _T87 = _check_null(_T86);
	      { struct Cyc_AssnDef_AssnMap new_try_assnmap = *_T87;
		_T88 = env;
		_T88->try_assnmap = old_try_assnmap;
		_T89 = Cyc_AssnDef_exception_vardecl();
		_T8A = am1;
		{ struct _tuple14 _T97 = Cyc_AssnDef_lookup_var_map(_T89,
								    _T8A);
		  struct Cyc_AssnDef_AssnMap _T98;
		  void * _T99;
		  _T99 = _T97.f0;
		  _T98 = _T97.f1;
		  { void * exc = _T99;
		    struct Cyc_AssnDef_AssnMap am2 = _T98;
		    struct Cyc_AssnDef_AssnMap am3 = Cyc_Vcgen_vcgen_switch(env,
									    exc,
									    scs,
									    new_try_assnmap);
		    _T8B = env;
		    _T8C = Cyc_AssnDef_or_assnmap_assnmap(am1,am2);
		    _T8D = Cyc_Vcgen_may_widen(_T8B,_T8C);
		    return _T8D;
		  }
		}
	      }
	    }
	  }
	}
      }
      ;
    }
  }
}
 struct _tuple27 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Pat * f1;
};
static struct _tuple20 Cyc_Vcgen_vcgen_pat(struct Cyc_Vcgen_Env * env,struct Cyc_Absyn_Pat * p,
					   void * lvalue,void * v,struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_Absyn_Pat * _T0;
  int * _T1;
  unsigned int _T2;
  struct _tuple20 _T3;
  struct _tuple20 _T4;
  struct Cyc_Vcgen_Env * _T5;
  struct Cyc_AssnDef_AssnMap _T6;
  void * _T7;
  void * _T8;
  struct _tuple20 _T9;
  struct Cyc_Vcgen_Env * _TA;
  struct Cyc_AssnDef_AssnMap _TB;
  void * _TC;
  void * _TD;
  int (* _TE)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TF)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  struct _tuple20 _T12;
  struct Cyc_Vcgen_Env * _T13;
  struct Cyc_AssnDef_AssnMap _T14;
  void * _T15;
  void * _T16;
  struct _tuple20 _T17;
  struct Cyc_Vcgen_Env * _T18;
  struct Cyc_AssnDef_AssnMap _T19;
  void * _T1A;
  void * _T1B;
  struct _tuple20 _T1C;
  struct Cyc_AssnDef_AssnMap _T1D;
  void * _T1E;
  struct Cyc_AssnDef_AssnMap _T1F;
  void * _T20;
  int _T21;
  unsigned int _T22;
  struct _tuple20 _T23;
  struct Cyc_AssnDef_AssnMap _T24;
  void * _T25;
  struct Cyc_AssnDef_AssnMap _T26;
  void * _T27;
  char _T28;
  unsigned int _T29;
  struct _tuple20 _T2A;
  struct Cyc_AssnDef_AssnMap _T2B;
  void * _T2C;
  struct Cyc_AssnDef_AssnMap _T2D;
  void * _T2E;
  struct Cyc_Absyn_Exp * _T2F;
  int _T30;
  unsigned int _T31;
  struct _tuple20 _T32;
  struct Cyc_AssnDef_AssnMap _T33;
  void * _T34;
  struct Cyc_AssnDef_AssnMap _T35;
  void * _T36;
  struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct * _T37;
  void * _T38;
  struct Cyc_Absyn_Exp * _T39;
  struct Cyc_Absyn_Pat * _T3A;
  struct _tuple20 _T3B;
  struct Cyc_AssnDef_AssnMap _T3C;
  void * _T3D;
  struct Cyc_AssnDef_AssnMap _T3E;
  void * _T3F;
  void * _T40;
  struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct * _T41;
  void * _T42;
  struct Cyc_Absyn_Exp * _T43;
  struct Cyc_Absyn_Pat * _T44;
  struct _tuple20 _T45;
  struct Cyc_AssnDef_AssnMap _T46;
  void * _T47;
  struct Cyc_AssnDef_AssnMap _T48;
  void * _T49;
  void * _T4A;
  void * _T4B;
  struct Cyc_Absyn_Pat * _T4C;
  void * _T4D;
  struct _tuple20 _T4E;
  struct Cyc_AssnDef_AssnMap _T4F;
  void * _T50;
  void * _T51;
  void * _T52;
  struct Cyc_AssnDef_AssnMap _T53;
  void * _T54;
  void * _T55;
  void * _T56;
  void * _T57;
  struct Cyc_List_List * _T58;
  void * _T59;
  struct _tuple27 * _T5A;
  struct Cyc_Absyn_Pat * _T5B;
  void * _T5C;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T5D;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T5E;
  void * _T5F;
  struct _tuple27 * _T60;
  struct Cyc_List_List * _T61;
  long _T62;
  void * _T63;
  int _T64;
  unsigned int _T65;
  void * _T66;
  struct Cyc_AssnDef_AssnMap _T67;
  void * _T68;
  void * _T69;
  int _T6A;
  unsigned int _T6B;
  struct Cyc_Absyn_Pat * _T6C;
  void * _T6D;
  void * _T6E;
  int _T6F;
  unsigned int _T70;
  struct Cyc_Vcgen_Env * _T71;
  struct Cyc_AssnDef_AssnMap _T72;
  struct Cyc_List_List * _T73;
  struct _tuple20 _T74;
  unsigned int _T75;
  void * _T76;
  int _T77;
  unsigned int _T78;
  void * _T79;
  struct Cyc_List_List * _T7A;
  void * _T7B;
  void * _T7C;
  unsigned int _T7D;
  struct Cyc_Absyn_Pat * _T7E;
  void * _T7F;
  struct Cyc_Vcgen_Env * _T80;
  struct Cyc_AssnDef_AssnMap _T81;
  struct Cyc_List_List * _T82;
  struct Cyc_AssnDef_AssnMap _T83;
  void * _T84;
  struct _tuple20 _T85;
  int (* _T86)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T87)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T88;
  struct _fat_ptr _T89;
  _T0 = p;
  { void * _T8A = _T0->r;
    struct Cyc_Absyn_Datatypefield * _T8B;
    struct Cyc_Absyn_Datatypedecl * _T8C;
    struct Cyc_List_List * _T8D;
    struct Cyc_Absyn_Enumfield * _T8E;
    struct _fat_ptr _T8F;
    char _T90;
    int _T91;
    enum Cyc_Absyn_Sign _T92;
    struct Cyc_Absyn_Vardecl * _T93;
    struct Cyc_Absyn_Pat * _T94;
    void * _T95;
    _T1 = (int *)_T8A;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      { struct _tuple20 _T96;
	_T96.f0 = amin;
	_T96.f1 = Cyc_AssnDef_false_assnmap();
	_T3 = _T96;
      }return _T3;
    case 1: 
      { struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T8A;
	_T95 = _T96->f1;
	_T94 = _T96->f2;
      }{ struct Cyc_Absyn_Vardecl * vd = _T95;
	struct Cyc_Absyn_Pat * p2 = _T94;
	struct _tuple20 _T96 = Cyc_Vcgen_vcgen_pat(env,p2,lvalue,v,amin);
	struct Cyc_AssnDef_AssnMap _T97;
	struct Cyc_AssnDef_AssnMap _T98;
	_T98 = _T96.f0;
	_T97 = _T96.f1;
	{ struct Cyc_AssnDef_AssnMap amt = _T98;
	  struct Cyc_AssnDef_AssnMap amf = _T97;
	  { struct _tuple20 _T99;
	    _T5 = env;
	    _T6 = amt;
	    _T7 = Cyc_Vcgen_myaddr(env,vd);
	    _T8 = v;
	    _T99.f0 = Cyc_Vcgen_do_assign(_T5,_T6,_T7,_T8);
	    _T99.f1 = amf;
	    _T4 = _T99;
	  }return _T4;
	}
      }
    case 2: 
      { struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct *)_T8A;
	_T95 = _T96->f1;
	_T93 = _T96->f2;
      }{ struct Cyc_Absyn_Tvar * tv = _T95;
	struct Cyc_Absyn_Vardecl * vd = _T93;
	{ struct _tuple20 _T96;
	  _TA = env;
	  _TB = amin;
	  _TC = Cyc_Vcgen_myaddr(env,vd);
	  _TD = v;
	  _T96.f0 = Cyc_Vcgen_do_assign(_TA,_TB,_TC,_TD);
	  _T96.f1 = Cyc_AssnDef_false_assnmap();
	  _T9 = _T96;
	}return _T9;
      }
    case 3: 
      { struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_T8A;
	_T95 = _T96->f1;
	_T94 = _T96->f2;
      }{ struct Cyc_Absyn_Vardecl * vd = _T95;
	struct Cyc_Absyn_Pat * p2 = _T94;
	struct _tuple20 _T96 = Cyc_Vcgen_vcgen_pat(env,p2,lvalue,v,amin);
	struct Cyc_AssnDef_AssnMap _T97;
	struct Cyc_AssnDef_AssnMap _T98;
	_T98 = _T96.f0;
	_T97 = _T96.f1;
	{ struct Cyc_AssnDef_AssnMap amt = _T98;
	  struct Cyc_AssnDef_AssnMap amf = _T97;
	  if (lvalue != 0) { goto _TL1B6;
	  }
	  _TF = Cyc_Warn_impos;
	  { int (* _T99)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								     struct _fat_ptr))_TF;
	    _TE = _T99;
	  }_T10 = _tag_fat("vcgen reference pattern matching",sizeof(char),
			   33U);
	  _T11 = _tag_fat(0U,sizeof(void *),0);
	  _TE(_T10,_T11);
	  goto _TL1B7;
	  _TL1B6: _TL1B7: { struct _tuple20 _T99;
	    _T13 = env;
	    _T14 = amt;
	    _T15 = Cyc_Vcgen_myaddr(env,vd);
	    _T16 = lvalue;
	    _T99.f0 = Cyc_Vcgen_do_assign(_T13,_T14,_T15,_T16);
	    _T99.f1 = amf;
	    _T12 = _T99;
	  }return _T12;
	}
      }
    case 4: 
      { struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct *)_T8A;
	_T95 = _T96->f2;
      }{ struct Cyc_Absyn_Vardecl * vd = _T95;
	{ struct _tuple20 _T96;
	  _T18 = env;
	  _T19 = amin;
	  _T1A = Cyc_Vcgen_myaddr(env,vd);
	  _T1B = v;
	  _T96.f0 = Cyc_Vcgen_do_assign(_T18,_T19,_T1A,_T1B);
	  _T96.f1 = Cyc_AssnDef_false_assnmap();
	  _T17 = _T96;
	}return _T17;
      }
    case 8: 
      { void * t = Cyc_AssnDef_zero();
	{ struct _tuple20 _T96;
	  _T1D = amin;
	  _T1E = Cyc_AssnDef_eq(v,t);
	  _T96.f0 = Cyc_AssnDef_and_assnmap_assn(_T1D,_T1E);
	  _T1F = amin;
	  _T20 = Cyc_AssnDef_neq(v,t);
	  _T96.f1 = Cyc_AssnDef_and_assnmap_assn(_T1F,_T20);
	  _T1C = _T96;
	}return _T1C;
      }
    case 9: 
      { struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct *)_T8A;
	_T92 = _T96->f1;
	_T91 = _T96->f2;
      }{ enum Cyc_Absyn_Sign s = _T92;
	int i = _T91;
	_T21 = i;
	_T22 = (unsigned int)_T21;
	{ void * t = Cyc_AssnDef_uint(_T22);
	  { struct _tuple20 _T96;
	    _T24 = amin;
	    _T25 = Cyc_AssnDef_eq(v,t);
	    _T96.f0 = Cyc_AssnDef_and_assnmap_assn(_T24,_T25);
	    _T26 = amin;
	    _T27 = Cyc_AssnDef_neq(v,t);
	    _T96.f1 = Cyc_AssnDef_and_assnmap_assn(_T26,_T27);
	    _T23 = _T96;
	  }return _T23;
	}
      }
    case 10: 
      { struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct *)_T8A;
	_T90 = _T96->f1;
      }{ char c = _T90;
	_T28 = c;
	_T29 = (unsigned int)_T28;
	{ void * t = Cyc_AssnDef_uint(_T29);
	  { struct _tuple20 _T96;
	    _T2B = amin;
	    _T2C = Cyc_AssnDef_eq(v,t);
	    _T96.f0 = Cyc_AssnDef_and_assnmap_assn(_T2B,_T2C);
	    _T2D = amin;
	    _T2E = Cyc_AssnDef_neq(v,t);
	    _T96.f1 = Cyc_AssnDef_and_assnmap_assn(_T2D,_T2E);
	    _T2A = _T96;
	  }return _T2A;
	}
      }
    case 11: 
      { struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct *)_T8A;
	_T8F = _T96->f1;
	_T91 = _T96->f2;
      }{ struct _fat_ptr f = _T8F;
	int i = _T91;
	struct Cyc_Absyn_Exp * e = Cyc_Absyn_float_exp(f,i,0U);
	_T2F = e;
	_T30 = i;
	_T31 = (unsigned int)_T30;
	_T2F->topt = Cyc_Absyn_gen_float_type(_T31);
	{ void * t = Cyc_AssnDef_cnst(e);
	  { struct _tuple20 _T96;
	    _T33 = amin;
	    _T34 = Cyc_AssnDef_eq(v,t);
	    _T96.f0 = Cyc_AssnDef_and_assnmap_assn(_T33,_T34);
	    _T35 = amin;
	    _T36 = Cyc_AssnDef_neq(v,t);
	    _T96.f1 = Cyc_AssnDef_and_assnmap_assn(_T35,_T36);
	    _T32 = _T96;
	  }return _T32;
	}
      }
    case 12: 
      { struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct *)_T8A;
	_T95 = _T96->f1;
	_T8E = _T96->f2;
      }{ struct Cyc_Absyn_Enumdecl * ed = _T95;
	struct Cyc_Absyn_Enumfield * ef = _T8E;
	{ struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct * _T96 = _cycalloc(sizeof(struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct));
	  _T96->tag = 31;
	  _T96->f1 = ed;
	  _T96->f2 = ef;
	  _T37 = (struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct *)_T96;
	}_T38 = (void *)_T37;
	{ struct Cyc_Absyn_Exp * e = Cyc_Absyn_new_exp(_T38,0U);
	  _T39 = e;
	  _T3A = p;
	  _T39->topt = _T3A->topt;
	  { void * t = Cyc_AssnDef_cnst(e);
	    { struct _tuple20 _T96;
	      _T3C = amin;
	      _T3D = Cyc_AssnDef_eq(v,t);
	      _T96.f0 = Cyc_AssnDef_and_assnmap_assn(_T3C,_T3D);
	      _T3E = amin;
	      _T3F = Cyc_AssnDef_neq(v,t);
	      _T96.f1 = Cyc_AssnDef_and_assnmap_assn(_T3E,_T3F);
	      _T3B = _T96;
	    }return _T3B;
	  }
	}
      }
    case 13: 
      { struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct *)_T8A;
	_T40 = _T96->f1;
	_T95 = (void *)_T40;
	_T8E = _T96->f2;
      }{ void * type = _T95;
	struct Cyc_Absyn_Enumfield * ef = _T8E;
	{ struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct * _T96 = _cycalloc(sizeof(struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct));
	  _T96->tag = 32;
	  _T96->f1 = type;
	  _T96->f2 = ef;
	  _T41 = (struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct *)_T96;
	}_T42 = (void *)_T41;
	{ struct Cyc_Absyn_Exp * e = Cyc_Absyn_new_exp(_T42,0U);
	  _T43 = e;
	  _T44 = p;
	  _T43->topt = _T44->topt;
	  { void * t = Cyc_AssnDef_cnst(e);
	    { struct _tuple20 _T96;
	      _T46 = amin;
	      _T47 = Cyc_AssnDef_eq(v,t);
	      _T96.f0 = Cyc_AssnDef_and_assnmap_assn(_T46,_T47);
	      _T48 = amin;
	      _T49 = Cyc_AssnDef_neq(v,t);
	      _T96.f1 = Cyc_AssnDef_and_assnmap_assn(_T48,_T49);
	      _T45 = _T96;
	    }return _T45;
	  }
	}
      }
    case 5: 
      { struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct *)_T8A;
	_T95 = _T96->f1;
      }{ struct Cyc_Absyn_Pat * p2 = _T95;
	struct _tuple14 _T96 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
							  amin);
	struct Cyc_AssnDef_AssnMap _T97;
	void * _T98;
	_T98 = _T96.f0;
	_T97 = _T96.f1;
	{ void * mem = _T98;
	  struct Cyc_AssnDef_AssnMap amin = _T97;
	  _T4A = mem;
	  _T4B = v;
	  _T4C = p;
	  _T4D = _T4C->topt;
	  { void * v2 = Cyc_AssnDef_select(_T4A,_T4B,_T4D);
	    struct _tuple20 _T99 = Cyc_Vcgen_vcgen_pat(env,p2,v,v2,amin);
	    struct Cyc_AssnDef_AssnMap _T9A;
	    struct Cyc_AssnDef_AssnMap _T9B;
	    _T9B = _T99.f0;
	    _T9A = _T99.f1;
	    { struct Cyc_AssnDef_AssnMap amt = _T9B;
	      struct Cyc_AssnDef_AssnMap amf = _T9A;
	      { struct _tuple20 _T9C;
		_T4F = amt;
		_T50 = Cyc_AssnDef_zero();
		_T51 = v;
		_T52 = Cyc_AssnDef_neq(_T50,_T51);
		_T9C.f0 = Cyc_AssnDef_and_assnmap_assn(_T4F,_T52);
		_T53 = amf;
		_T54 = Cyc_AssnDef_zero();
		_T55 = v;
		_T56 = Cyc_AssnDef_eq(_T54,_T55);
		_T9C.f1 = Cyc_AssnDef_or_assnmap_assn(_T53,_T56);
		_T4E = _T9C;
	      }return _T4E;
	    }
	  }
	}
      }
    case 6: 
      { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T8A;
	_T57 = _T96->f1;
	_T95 = (void *)_T57;
	_T8D = _T96->f4;
      }{ void * topt = _T95;
	struct Cyc_List_List * dlps = _T8D;
	void * type = _check_null(topt);
	struct _tuple22 _T96 = Cyc_Vcgen_get_aggr_info(type);
	struct Cyc_List_List * _T97;
	long _T98;
	_T98 = _T96.f0;
	_T97 = _T96.f2;
	{ long is_tagged = _T98;
	  struct Cyc_List_List * fields = _T97;
	  struct Cyc_AssnDef_AssnMap amt = amin;
	  struct Cyc_AssnDef_AssnMap amf = Cyc_AssnDef_false_assnmap();
	  _TL1BB: if (dlps != 0) { goto _TL1B9;
	  }else { goto _TL1BA;
	  }
	  _TL1B9: _T58 = dlps;
	  _T59 = _T58->hd;
	  { struct _tuple27 * tup = (struct _tuple27 *)_T59;
	    _T5A = tup;
	    { struct Cyc_Absyn_Pat * p2 = _T5A->f1;
	      _T5B = p2;
	      _T5C = _T5B->r;
	      _T5D = &Cyc_Absyn_Wild_p_val;
	      _T5E = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T5D;
	      _T5F = (void *)_T5E;
	      if (_T5C != _T5F) { goto _TL1BC;
	      }
	      goto _TL1B8;
	      _TL1BC: _T60 = tup;
	      _T61 = _T60->f0;
	      { struct _fat_ptr * f = Cyc_Absyn_designatorlist_to_fieldname(_T61);
		int i = Cyc_CfFlowInfo_get_field_index(type,f);
		_T62 = is_tagged;
		if (! _T62) { goto _TL1BE;
		}
		_T63 = Cyc_AssnDef_tagof_tm(v);
		_T64 = i;
		_T65 = (unsigned int)_T64;
		_T66 = Cyc_AssnDef_uint(_T65);
		{ void * tag_check = Cyc_AssnDef_eq(_T63,_T66);
		  amt = Cyc_AssnDef_and_assnmap_assn(amt,tag_check);
		  _T67 = amf;
		  _T68 = Cyc_AssnDef_not(tag_check);
		  amf = Cyc_AssnDef_or_assnmap_assn(_T67,_T68);
		}goto _TL1BF;
		_TL1BE: _TL1BF: _T69 = v;
		_T6A = i;
		_T6B = (unsigned int)_T6A;
		_T6C = p2;
		_T6D = _T6C->topt;
		{ void * member = Cyc_AssnDef_proj(_T69,_T6B,_T6D);
		  void * path = 0;
		  if (lvalue == 0) { goto _TL1C0;
		  }
		  _T6E = lvalue;
		  _T6F = i;
		  _T70 = (unsigned int)_T6F;
		  path = Cyc_AssnDef_offsetf(_T6E,_T70,0);
		  goto _TL1C1;
		  _TL1C0: _TL1C1: { struct _tuple20 _T99 = Cyc_Vcgen_vcgen_pat(env,
									       p2,
									       path,
									       member,
									       amt);
		    struct Cyc_AssnDef_AssnMap _T9A;
		    struct Cyc_AssnDef_AssnMap _T9B;
		    _T9B = _T99.f0;
		    _T9A = _T99.f1;
		    { struct Cyc_AssnDef_AssnMap amt2 = _T9B;
		      struct Cyc_AssnDef_AssnMap amf2 = _T9A;
		      _T71 = env;
		      _T72 = Cyc_AssnDef_or_assnmap_assnmap(amf,amf2);
		      amf = Cyc_Vcgen_may_widen(_T71,_T72);
		      amt = amt2;
		    }
		  }
		}
	      }
	    }
	  }_TL1B8: _T73 = dlps;
	  dlps = _T73->tl;
	  goto _TL1BB;
	  _TL1BA: { struct _tuple20 _T99;
	    _T99.f0 = amt;
	    _T99.f1 = amf;
	    _T74 = _T99;
	  }return _T74;
	}
      }
    case 7: 
      { struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T96 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_T8A;
	_T8C = _T96->f1;
	_T8B = _T96->f2;
	_T8D = _T96->f3;
      }{ struct Cyc_Absyn_Datatypedecl * dd = _T8C;
	struct Cyc_Absyn_Datatypefield * df = _T8B;
	struct Cyc_List_List * ps = _T8D;
	_T75 = Cyc_Vcgen_datatype_constructor_index(dd,df);
	{ int i = (int)_T75;
	  _T76 = Cyc_AssnDef_tagof_tm(v);
	  _T77 = i;
	  _T78 = (unsigned int)_T77;
	  _T79 = Cyc_AssnDef_uint(_T78);
	  { void * tag_check = Cyc_AssnDef_eq(_T76,_T79);
	    struct Cyc_AssnDef_AssnMap amt = Cyc_AssnDef_and_assnmap_assn(amin,
									  tag_check);
	    struct Cyc_AssnDef_AssnMap amf = Cyc_AssnDef_false_assnmap();
	    { unsigned int j = 0U;
	      _TL1C5: if (ps != 0) { goto _TL1C3;
	      }else { goto _TL1C4;
	      }
	      _TL1C3: _T7A = ps;
	      _T7B = _T7A->hd;
	      { struct Cyc_Absyn_Pat * p2 = (struct Cyc_Absyn_Pat *)_T7B;
		_T7C = v;
		_T7D = j;
		_T7E = p2;
		_T7F = _T7E->topt;
		{ void * member = Cyc_AssnDef_proj(_T7C,_T7D,_T7F);
		  void * path = 0;
		  if (lvalue == 0) { goto _TL1C6;
		  }
		  path = Cyc_AssnDef_offsetf(lvalue,j,0);
		  goto _TL1C7;
		  _TL1C6: _TL1C7: { struct _tuple20 _T96 = Cyc_Vcgen_vcgen_pat(env,
									       p2,
									       path,
									       member,
									       amt);
		    struct Cyc_AssnDef_AssnMap _T97;
		    struct Cyc_AssnDef_AssnMap _T98;
		    _T98 = _T96.f0;
		    _T97 = _T96.f1;
		    { struct Cyc_AssnDef_AssnMap amt2 = _T98;
		      struct Cyc_AssnDef_AssnMap amf2 = _T97;
		      _T80 = env;
		      _T81 = Cyc_AssnDef_or_assnmap_assnmap(amf,amf2);
		      amf = Cyc_Vcgen_may_widen(_T80,_T81);
		      amt = amt2;
		    }
		  }
		}
	      }_T82 = ps;
	      ps = _T82->tl;
	      j = j + 1;
	      goto _TL1C5;
	      _TL1C4: ;
	    }_T83 = amf;
	    _T84 = Cyc_AssnDef_not(tag_check);
	    amf = Cyc_AssnDef_or_assnmap_assn(_T83,_T84);
	    { struct _tuple20 _T96;
	      _T96.f0 = amt;
	      _T96.f1 = amf;
	      _T85 = _T96;
	    }return _T85;
	  }
	}
      }
    case 14: 
      goto _LL20;
    case 15: 
      _LL20: goto _LL22;
    default: 
      _LL22: _T87 = Cyc_Warn_impos;
      { int (* _T96)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_T87;
	_T86 = _T96;
      }_T88 = _tag_fat("vcgen pat found bad pattern",sizeof(char),28U);
      _T89 = _tag_fat(0U,sizeof(void *),0);
      _T86(_T88,_T89);
    }
    ;
  }
}
static struct Cyc_AssnDef_AssnMap Cyc_Vcgen_vcgen_switch(struct Cyc_Vcgen_Env * env,
							 void * v,struct Cyc_List_List * scs,
							 struct Cyc_AssnDef_AssnMap amin) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Vcgen_Env * _T2;
  struct Cyc_Absyn_Switch_clause * _T3;
  struct Cyc_Absyn_Pat * _T4;
  void * _T5;
  struct Cyc_AssnDef_AssnMap _T6;
  struct Cyc_Absyn_Switch_clause * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Vcgen_Env * _T9;
  struct Cyc_Absyn_Switch_clause * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_AssnDef_AssnMap _TC;
  struct Cyc_Vcgen_Env * _TD;
  struct Cyc_AssnDef_AssnMap _TE;
  struct Cyc_Vcgen_Env * _TF;
  struct Cyc_AssnDef_AssnMap _T10;
  struct Cyc_Vcgen_Env * _T11;
  struct Cyc_Absyn_Switch_clause * _T12;
  struct Cyc_Absyn_Stmt * _T13;
  struct Cyc_AssnDef_AssnMap _T14;
  struct Cyc_AssnDef_AssnMap _T15;
  struct Cyc_AssnDef_AssnMap _T16;
  struct Cyc_Vcgen_Env * _T17;
  long _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_AssnDef_AssnMap _T1A;
  struct Cyc_AssnDef_AssnMap res = Cyc_AssnDef_false_assnmap();
  _TL1CB: if (scs != 0) { goto _TL1C9;
  }else { goto _TL1CA;
  }
  _TL1C9: _T0 = scs;
  _T1 = _T0->hd;
  { struct Cyc_Absyn_Switch_clause * sc = (struct Cyc_Absyn_Switch_clause *)_T1;
    _T2 = env;
    _T3 = sc;
    _T4 = _T3->pattern;
    _T5 = v;
    _T6 = amin;
    { struct _tuple20 _T1B = Cyc_Vcgen_vcgen_pat(_T2,_T4,0,_T5,_T6);
      struct Cyc_AssnDef_AssnMap _T1C;
      struct Cyc_AssnDef_AssnMap _T1D;
      _T1D = _T1B.f0;
      _T1C = _T1B.f1;
      { struct Cyc_AssnDef_AssnMap amt = _T1D;
	struct Cyc_AssnDef_AssnMap amf = _T1C;
	_T7 = sc;
	_T8 = _T7->where_clause;
	if (_T8 == 0) { goto _TL1CC;
	}
	_T9 = env;
	_TA = sc;
	_TB = _TA->where_clause;
	_TC = amt;
	{ struct _tuple20 _T1E = Cyc_Vcgen_vcgen_test(_T9,_TB,_TC);
	  struct Cyc_AssnDef_AssnMap _T1F;
	  struct Cyc_AssnDef_AssnMap _T20;
	  _T20 = _T1E.f0;
	  _T1F = _T1E.f1;
	  { struct Cyc_AssnDef_AssnMap amt2 = _T20;
	    struct Cyc_AssnDef_AssnMap amf2 = _T1F;
	    amt = amt2;
	    _TD = env;
	    _TE = Cyc_AssnDef_or_assnmap_assnmap(amf,amf2);
	    amf = Cyc_Vcgen_may_widen(_TD,_TE);
	  }
	}goto _TL1CD;
	_TL1CC: _TL1CD: _TF = env;
	_T10 = res;
	_T11 = env;
	_T12 = sc;
	_T13 = _T12->body;
	_T14 = amt;
	_T15 = Cyc_Vcgen_vcgen_stmt(_T11,_T13,_T14);
	_T16 = Cyc_AssnDef_or_assnmap_assnmap(_T10,_T15);
	res = Cyc_Vcgen_may_widen(_TF,_T16);
	_T17 = env;
	_T18 = _T17->widen_paths;
	if (_T18) { goto _TL1CE;
	}else { goto _TL1D0;
	}
	_TL1D0: amin = amf;
	goto _TL1CF;
	_TL1CE: _TL1CF: ;
      }
    }
  }_T19 = scs;
  scs = _T19->tl;
  goto _TL1CB;
  _TL1CA: _T1A = res;
  return _T1A;
}
struct Cyc_AssnDef_AssnMap Cyc_Vcgen_clause2assn(struct Cyc_Absyn_Exp * e) {
  struct _tuple20 _T0;
  struct Cyc_AssnDef_AssnMap _T1;
  struct Cyc_Vcgen_Env * env = Cyc_Vcgen_bogus_env();
  struct Cyc_AssnDef_AssnMap am = Cyc_AssnDef_true_assnmap();
  struct _tuple14 _T2 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,am);
  struct Cyc_AssnDef_AssnMap _T3;
  _T3 = _T2.f1;
  { struct Cyc_AssnDef_AssnMap am = _T3;
    _T0 = Cyc_Vcgen_vcgen_test(env,e,am);
    { struct Cyc_AssnDef_AssnMap res = _T0.f0;
      _T1 = res;
      return _T1;
    }
  }
}
void Cyc_Vcgen_vcgen_fundecl(unsigned int loc,struct Cyc_JumpAnalysis_Jump_Anal_Result * tables,
			     struct Cyc_Absyn_Fndecl * fd,struct Cyc_Hashtable_Table * * assn_info,
			     struct Cyc_Hashtable_Table * fn_precond_info,
			     long use_precond) {
  struct Cyc_Absyn_Fndecl * _T0;
  struct Cyc_Absyn_FnInfo * _T1;
  struct Cyc_Absyn_FnInfo * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_AssnDef_AssnMap _TA;
  struct Cyc_AssnDef_AssnMap _TB;
  struct Cyc_AssnDef_AssnMap _TC;
  struct Cyc_AssnDef_AssnMap _TD;
  struct Cyc_AssnDef_AssnMap * _TE;
  struct Cyc_AssnDef_AssnMap * _TF;
  struct _tuple2 * _T10;
  struct _tuple2 * _T11;
  struct _fat_ptr * _T12;
  struct _tuple2 * _T13;
  struct Cyc_Absyn_Fndecl * _T14;
  struct Cyc_Absyn_FnInfo _T15;
  void * _T16;
  struct Cyc_Vcgen_Env * _T17;
  struct Cyc_Absyn_Fndecl * _T18;
  struct Cyc_Absyn_Stmt * _T19;
  struct Cyc_AssnDef_AssnMap _T1A;
  struct Cyc_Vcgen_Env * _T1B;
  struct Cyc_AssnDef_AssnMap * _T1C;
  struct Cyc_AssnDef_AssnMap * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_AssnDef_ExistAssnFn * _T20;
  struct Cyc_List_List * _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_AssnDef_AssnMap _T23;
  void * _T24;
  void * _T25;
  long _T26;
  struct Cyc_String_pa_PrintArg_struct _T27;
  struct Cyc_String_pa_PrintArg_struct _T28;
  struct Cyc_Vcgen_Env * _T29;
  struct Cyc_AssnDef_AssnMap * _T2A;
  struct Cyc_AssnDef_AssnMap _T2B;
  unsigned int _T2C;
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  struct Cyc_Absyn_Fndecl * _T2F;
  struct Cyc_List_List * _T30;
  void * _T31;
  void * _T32;
  struct Cyc_AssnDef_AssnMap _T33;
  void * _T34;
  struct Cyc_Vcgen_Env * _T35;
  struct Cyc_AssnDef_AssnMap * _T36;
  struct Cyc_AssnDef_ExistAssnFn * _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_AssnDef_AssnMap _T39;
  void * _T3A;
  void * _T3B;
  long _T3C;
  struct Cyc_String_pa_PrintArg_struct _T3D;
  struct Cyc_String_pa_PrintArg_struct _T3E;
  struct Cyc_Vcgen_Env * _T3F;
  struct Cyc_AssnDef_AssnMap * _T40;
  struct Cyc_AssnDef_AssnMap _T41;
  unsigned int _T42;
  struct _fat_ptr _T43;
  struct _fat_ptr _T44;
  _T0 = fd;
  _T1 = &_T0->i;
  _T2 = (struct Cyc_Absyn_FnInfo *)_T1;
  { struct _tuple21 _T45 = Cyc_Vcgen_get_requires_and_ensures_info(_T2);
    struct Cyc_Absyn_Vardecl * _T46;
    struct Cyc_AssnDef_ExistAssnFn * _T47;
    struct Cyc_AssnDef_ExistAssnFn * _T48;
    struct Cyc_AssnDef_ExistAssnFn * _T49;
    struct Cyc_AssnDef_ExistAssnFn * _T4A;
    struct Cyc_List_List * _T4B;
    struct Cyc_List_List * _T4C;
    _T4C = _T45.f0;
    _T4B = _T45.f1;
    _T4A = _T45.f2;
    _T49 = _T45.f3;
    _T48 = _T45.f4;
    _T47 = _T45.f5;
    _T46 = _T45.f6;
    { struct Cyc_List_List * args = _T4C;
      struct Cyc_List_List * arvds = _T4B;
      struct Cyc_AssnDef_ExistAssnFn * checkopt = _T4A;
      struct Cyc_AssnDef_ExistAssnFn * reqopt = _T49;
      struct Cyc_AssnDef_ExistAssnFn * ensopt = _T48;
      struct Cyc_AssnDef_ExistAssnFn * thrwsopt = _T47;
      struct Cyc_Absyn_Vardecl * ret_value = _T46;
      struct Cyc_AssnDef_AssnMap am = Cyc_AssnDef_true_assnmap();
      struct Cyc_List_List * actuals = 0;
      { struct Cyc_List_List * as = arvds;
	_TL1D4: if (as != 0) { goto _TL1D2;
	}else { goto _TL1D3;
	}
	_TL1D2: _T3 = as;
	_T4 = _T3->hd;
	_T5 = (struct Cyc_Absyn_Vardecl *)_T4;
	{ struct Cyc_Absyn_Vardecl * vd = _check_null(_T5);
	  struct _tuple14 _T4D = Cyc_AssnDef_lookup_var_map(vd,am);
	  struct Cyc_AssnDef_AssnMap _T4E;
	  void * _T4F;
	  _T4F = _T4D.f0;
	  _T4E = _T4D.f1;
	  { void * actual = _T4F;
	    struct Cyc_AssnDef_AssnMap am2 = _T4E;
	    am = am2;
	    { struct Cyc_List_List * _T50 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T50->hd = actual;
	      _T50->tl = actuals;
	      _T6 = (struct Cyc_List_List *)_T50;
	    }actuals = _T6;
	  }
	}_T7 = as;
	as = _T7->tl;
	goto _TL1D4;
	_TL1D3: ;
      }actuals = Cyc_List_imp_rev(actuals);
      { struct _tuple14 _T4D = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
							  am);
	struct Cyc_AssnDef_AssnMap _T4E;
	void * _T4F;
	_T4F = _T4D.f0;
	_T4E = _T4D.f1;
	{ void * initmem = _T4F;
	  struct Cyc_AssnDef_AssnMap am2 = _T4E;
	  struct Cyc_AssnDef_AssnMap _T50 = Cyc_AssnDef_update_var_map(Cyc_AssnDef_pre_memory,
								       initmem,
								       am2);
	  { struct Cyc_AssnDef_AssnMap am2 = _T50;
	    am = am2;
	    { struct Cyc_List_List * args;
	      args = _cycalloc(sizeof(struct Cyc_List_List));
	      _T8 = args;
	      _T8->hd = initmem;
	      _T9 = args;
	      _T9->tl = actuals;
	      if (checkopt == 0) { goto _TL1D5;
	      }
	      { struct Cyc_AssnDef_AssnMap _T51;
		_T51.assn = Cyc_AssnDef_existassnfn2assn(checkopt,args);
		_TB = am;
		_T51.map = _TB.map;
		_TA = _T51;
	      }am = _TA;
	      goto _TL1D6;
	      _TL1D5: _TL1D6: if (reqopt == 0) { goto _TL1D7;
	      }
	      { struct Cyc_AssnDef_AssnMap _T51;
		_T51.assn = Cyc_AssnDef_existassnfn2assn(reqopt,args);
		_TD = am;
		_T51.map = _TD.map;
		_TC = _T51;
	      }am = _TC;
	      goto _TL1D8;
	      _TL1D7: _TL1D8: { struct Cyc_AssnDef_AssnMap * thrws_assn = 0;
		if (thrwsopt == 0) { goto _TL1D9;
		}
		{ struct Cyc_AssnDef_AssnMap * _T51 = _cycalloc(sizeof(struct Cyc_AssnDef_AssnMap));
		  *_T51 = Cyc_AssnDef_false_assnmap();
		  _TE = (struct Cyc_AssnDef_AssnMap *)_T51;
		}thrws_assn = _TE;
		goto _TL1DA;
		_TL1D9: _TL1DA: { struct Cyc_AssnDef_AssnMap * result_assn;
		  result_assn = _cycalloc(sizeof(struct Cyc_AssnDef_AssnMap));
		  _TF = result_assn;
		  *_TF = Cyc_AssnDef_false_assnmap();
		  if (ret_value != 0) { goto _TL1DB;
		  }
		  { struct _tuple2 * v;
		    v = _cycalloc(sizeof(struct _tuple2));
		    _T10 = v;
		    _T10->f0 = Cyc_Absyn_Loc_n();
		    _T11 = v;
		    { struct _fat_ptr * _T51 = _cycalloc(sizeof(struct _fat_ptr));
		      *_T51 = _tag_fat("return_value",sizeof(char),13U);
		      _T12 = (struct _fat_ptr *)_T51;
		    }_T11->f1 = _T12;
		    _T13 = v;
		    _T14 = fd;
		    _T15 = _T14->i;
		    _T16 = _T15.ret_type;
		    ret_value = Cyc_Absyn_new_vardecl(0U,_T13,_T16,0,0);
		  }goto _TL1DC;
		  _TL1DB: _TL1DC: { struct Cyc_Vcgen_Env * env = Cyc_Vcgen_initial_env(tables,
										       fd,
										       assn_info,
										       fn_precond_info,
										       result_assn,
										       thrws_assn,
										       ret_value);
		    _T17 = env;
		    _T18 = fd;
		    _T19 = _T18->body;
		    _T1A = am;
		    { struct Cyc_AssnDef_AssnMap amout = Cyc_Vcgen_vcgen_stmt(_T17,
									      _T19,
									      _T1A);
		      Cyc_Vcgen_update_return(env,0,amout,0);
		      _T1B = env;
		      _T1C = _T1B->res_assnmap;
		      _T1D = _check_null(_T1C);
		      { struct Cyc_AssnDef_AssnMap res = *_T1D;
			void * res_term = Cyc_AssnDef_fresh_var(0,0);
			if (ret_value == 0) { goto _TL1DD;
			}
			{ struct _tuple14 _T51 = Cyc_AssnDef_lookup_var_map(ret_value,
									    res);
			  struct Cyc_AssnDef_AssnMap _T52;
			  void * _T53;
			  _T53 = _T51.f0;
			  _T52 = _T51.f1;
			  { void * r = _T53;
			    struct Cyc_AssnDef_AssnMap a = _T52;
			    res_term = r;
			    res = a;
			  }
			}goto _TL1DE;
			_TL1DD: _TL1DE: { struct _tuple14 _T51 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
											    res);
			  struct Cyc_AssnDef_AssnMap _T52;
			  void * _T53;
			  _T53 = _T51.f0;
			  _T52 = _T51.f1;
			  { void * new_memory = _T53;
			    struct Cyc_AssnDef_AssnMap res = _T52;
			    struct _tuple14 _T54 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_pre_memory,
									      res);
			    struct Cyc_AssnDef_AssnMap _T55;
			    void * _T56;
			    _T56 = _T54.f0;
			    _T55 = _T54.f1;
			    { void * pre_mem = _T56;
			      struct Cyc_AssnDef_AssnMap res = _T55;
			      struct Cyc_List_List * pre_memory_and_actuals;
			      pre_memory_and_actuals = _cycalloc(sizeof(struct Cyc_List_List));
			      _T1E = pre_memory_and_actuals;
			      _T1E->hd = pre_mem;
			      _T1F = pre_memory_and_actuals;
			      _T1F->tl = actuals;
			      if (ensopt == 0) { goto _TL1DF;
			      }
			      _T20 = ensopt;
			      { struct Cyc_List_List * _T57 = _cycalloc(sizeof(struct Cyc_List_List));
				_T57->hd = res_term;
				{ struct Cyc_List_List * _T58 = _cycalloc(sizeof(struct Cyc_List_List));
				  _T58->hd = new_memory;
				  _T58->tl = pre_memory_and_actuals;
				  _T22 = (struct Cyc_List_List *)_T58;
				}_T57->tl = _T22;
				_T21 = (struct Cyc_List_List *)_T57;
			      }{ void * ens = Cyc_AssnDef_existassnfn2assn(_T20,
									   _T21);
				_T23 = res;
				_T24 = _T23.assn;
				_T25 = ens;
				_T26 = Cyc_Vcgen_implies(_T24,_T25);
				if (_T26) { goto _TL1E1;
				}else { goto _TL1E3;
				}
				_TL1E3: { struct Cyc_String_pa_PrintArg_struct _T57;
				  _T57.tag = 0;
				  _T57.f1 = Cyc_AssnDef_assn2string(ens);
				  _T27 = _T57;
				}{ struct Cyc_String_pa_PrintArg_struct _T57 = _T27;
				  { struct Cyc_String_pa_PrintArg_struct _T58;
				    _T58.tag = 0;
				    _T29 = env;
				    _T2A = _T29->res_assnmap;
				    _T2B = *_T2A;
				    _T58.f1 = Cyc_AssnDef_assnmap2string(_T2B);
				    _T28 = _T58;
				  }{ struct Cyc_String_pa_PrintArg_struct _T58 = _T28;
				    void * _T59[2];
				    _T59[0] = &_T57;
				    _T59[1] = &_T58;
				    _T2C = loc;
				    _T2D = _tag_fat("cannot prove the @ensures clause\n\t%s\nfrom\n\t%s",
						    sizeof(char),46U);
				    _T2E = _tag_fat(_T59,sizeof(void *),2);
				    Cyc_Warn_err(_T2C,_T2D,_T2E);
				  }
				}goto _TL1E2;
				_TL1E1: _TL1E2: ;
			      }goto _TL1E0;
			      _TL1DF: _T2F = fd;
			      _T30 = pre_memory_and_actuals;
			      _T31 = res_term;
			      _T32 = new_memory;
			      _T33 = res;
			      _T34 = _T33.assn;
			      Cyc_Vcgen_insert_fn_info(_T2F,_T30,_T31,_T32,
						       _T34);
			      _TL1E0: if (thrwsopt == 0) { goto _TL1E4;
			      }
			      _T35 = env;
			      _T36 = _T35->try_assnmap;
			      { struct Cyc_AssnDef_AssnMap res = *_T36;
				struct _tuple14 _T57 = Cyc_AssnDef_lookup_var_map(Cyc_AssnDef_memory,
										  res);
				struct Cyc_AssnDef_AssnMap _T58;
				void * _T59;
				_T59 = _T57.f0;
				_T58 = _T57.f1;
				{ void * new_memory = _T59;
				  struct Cyc_AssnDef_AssnMap res = _T58;
				  _T37 = thrwsopt;
				  { struct Cyc_List_List * _T5A = _cycalloc(sizeof(struct Cyc_List_List));
				    _T5A->hd = new_memory;
				    _T5A->tl = pre_memory_and_actuals;
				    _T38 = (struct Cyc_List_List *)_T5A;
				  }{ void * thr = Cyc_AssnDef_existassnfn2assn(_T37,
									       _T38);
				    _T39 = res;
				    _T3A = _T39.assn;
				    _T3B = thr;
				    _T3C = Cyc_Vcgen_implies(_T3A,_T3B);
				    if (_T3C) { goto _TL1E6;
				    }else { goto _TL1E8;
				    }
				    _TL1E8: { struct Cyc_String_pa_PrintArg_struct _T5A;
				      _T5A.tag = 0;
				      _T5A.f1 = Cyc_AssnDef_assn2string(thr);
				      _T3D = _T5A;
				    }{ struct Cyc_String_pa_PrintArg_struct _T5A = _T3D;
				      { struct Cyc_String_pa_PrintArg_struct _T5B;
					_T5B.tag = 0;
					_T3F = env;
					_T40 = _T3F->try_assnmap;
					_T41 = *_T40;
					_T5B.f1 = Cyc_AssnDef_assnmap2string(_T41);
					_T3E = _T5B;
				      }{ struct Cyc_String_pa_PrintArg_struct _T5B = _T3E;
					void * _T5C[2];
					_T5C[0] = &_T5A;
					_T5C[1] = &_T5B;
					_T42 = loc;
					_T43 = _tag_fat("cannot prove the @throws clause\n\t%s\nfrom\n\t%s",
							sizeof(char),45U);
					_T44 = _tag_fat(_T5C,sizeof(void *),
							2);
					Cyc_Warn_err(_T42,_T43,_T44);
				      }
				    }goto _TL1E7;
				    _TL1E6: _TL1E7: ;
				  }
				}
			      }goto _TL1E5;
			      _TL1E4: _TL1E5: ;
			    }
			  }
			}
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }
}
