#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct _tuple0 {
  void * f0;
  void * f1;
};
void * Cyc_Core_snd(struct _tuple0 *);
extern char Cyc_Core_Failure[8U];
 struct Cyc_Core_Failure_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Not_found[10U];
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
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
extern char Cyc_List_Nth[4U];
 struct Cyc_List_Nth_exn_struct {
  char * tag;
};
extern void * Cyc_List_nth(struct Cyc_List_List *,int);
extern struct Cyc_List_List * Cyc_List_nth_tail(struct Cyc_List_List *,int);
extern void * Cyc_List_find_c(void * (*)(void *,void *),void *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_zip(struct Cyc_List_List *,struct Cyc_List_List *);
extern long Cyc_List_mem(int (*)(void *,void *),struct Cyc_List_List *,void *);
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
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
 struct _tuple1 {
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
enum Cyc_Absyn_AliasQualVal {
  Cyc_Absyn_Aliasable_qual = 0U,
  Cyc_Absyn_Unique_qual = 1U,
  Cyc_Absyn_Refcnt_qual = 2U,
  Cyc_Absyn_Restricted_qual = 3U
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
 struct Cyc_Absyn_UnknownDatatypeInfo {
  struct _tuple1 * name;
  long is_extensible;
};
 struct _union_DatatypeInfo_UnknownDatatype {
  int tag;
  struct Cyc_Absyn_UnknownDatatypeInfo val;
};
 struct _union_DatatypeInfo_KnownDatatype {
  int tag;
  struct Cyc_Absyn_Datatypedecl * * val;
};
 union Cyc_Absyn_DatatypeInfo {
  struct _union_DatatypeInfo_UnknownDatatype UnknownDatatype;
  struct _union_DatatypeInfo_KnownDatatype KnownDatatype;
};
 struct Cyc_Absyn_UnknownDatatypeFieldInfo {
  struct _tuple1 * datatype_name;
  struct _tuple1 * field_name;
  long is_extensible;
};
 struct _union_DatatypeFieldInfo_UnknownDatatypefield {
  int tag;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo val;
};
 struct _tuple2 {
  struct Cyc_Absyn_Datatypedecl * f0;
  struct Cyc_Absyn_Datatypefield * f1;
};
 struct _union_DatatypeFieldInfo_KnownDatatypefield {
  int tag;
  struct _tuple2 val;
};
 union Cyc_Absyn_DatatypeFieldInfo {
  struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;
  struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;
};
union Cyc_Absyn_DatatypeFieldInfo Cyc_Absyn_KnownDatatypefield(struct Cyc_Absyn_Datatypedecl *,
							       struct Cyc_Absyn_Datatypefield *);
 struct _tuple3 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple1 * f1;
  struct Cyc_Core_Opt * f2;
};
 struct _union_AggrInfo_UnknownAggr {
  int tag;
  struct _tuple3 val;
};
 struct _union_AggrInfo_KnownAggr {
  int tag;
  struct Cyc_Absyn_Aggrdecl * * val;
};
 union Cyc_Absyn_AggrInfo {
  struct _union_AggrInfo_UnknownAggr UnknownAggr;
  struct _union_AggrInfo_KnownAggr KnownAggr;
};
union Cyc_Absyn_AggrInfo Cyc_Absyn_KnownAggr(struct Cyc_Absyn_Aggrdecl * *);
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
 struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct {
  int tag;
  int f1;
};
 struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct {
  int tag;
  enum Cyc_Absyn_AliasQualVal f1;
};
 struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_DatatypeInfo f1;
};
 struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_DatatypeFieldInfo f1;
};
 struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_AggrInfo f1;
};
 struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct {
  int tag;
  void * f1;
  void * f2;
};
 struct Cyc_Absyn_AppType_Absyn_Type_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Evar_Absyn_Type_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
  void * f2;
  int f3;
  struct Cyc_Core_Opt * f4;
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
 struct Cyc_Absyn_ValueofType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_SubsetType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_AssnDef_ExistAssnFn * f3;
};
enum Cyc_Absyn_Format_Type {
  Cyc_Absyn_Printf_ft = 0U,
  Cyc_Absyn_Scanf_ft = 1U
};
 struct Cyc_Absyn_Format_att_Absyn_Attribute_struct {
  int tag;
  enum Cyc_Absyn_Format_Type f1;
  int f2;
  int f3;
};
 struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct {
  int tag;
};
 struct _union_Cnst_Null_c {
  int tag;
  int val;
};
 struct _tuple4 {
  enum Cyc_Absyn_Sign f0;
  char f1;
};
 struct _union_Cnst_Char_c {
  int tag;
  struct _tuple4 val;
};
 struct _union_Cnst_Wchar_c {
  int tag;
  struct _fat_ptr val;
};
 struct _tuple5 {
  enum Cyc_Absyn_Sign f0;
  short f1;
};
 struct _union_Cnst_Short_c {
  int tag;
  struct _tuple5 val;
};
 struct _tuple6 {
  enum Cyc_Absyn_Sign f0;
  int f1;
};
 struct _union_Cnst_Int_c {
  int tag;
  struct _tuple6 val;
};
 struct _tuple7 {
  enum Cyc_Absyn_Sign f0;
  long long f1;
};
 struct _union_Cnst_LongLong_c {
  int tag;
  struct _tuple7 val;
};
 struct _union_Cnst_Int128_c {
  int tag;
  struct _tuple7 val;
};
 struct _tuple8 {
  struct _fat_ptr f0;
  int f1;
};
 struct _union_Cnst_Float_c {
  int tag;
  struct _tuple8 val;
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
 struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct {
  int tag;
  struct _fat_ptr * f1;
};
enum Cyc_Absyn_Coercion {
  Cyc_Absyn_Unknown_coercion = 0U,
  Cyc_Absyn_No_coercion = 1U,
  Cyc_Absyn_Null_to_NonNull = 2U,
  Cyc_Absyn_Subset_coercion = 3U,
  Cyc_Absyn_Other_coercion = 4U
};
 struct Cyc_Absyn_ArrayElement_Absyn_Designator_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
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
 struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
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
 struct _tuple9 {
  struct _fat_ptr * f0;
  struct Cyc_Absyn_Tqual f1;
  void * f2;
};
 struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct {
  int tag;
  struct _tuple9 * f1;
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
  struct _tuple1 * f1;
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
 struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
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
 struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct {
  int tag;
};
 struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Pat * f2;
};
 struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct {
  int tag;
  void * f1;
  long f2;
  struct Cyc_List_List * f3;
  struct Cyc_List_List * f4;
  long f5;
};
extern struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct Cyc_Absyn_Wild_p_val;
 struct Cyc_Absyn_Pat {
  void * r;
  void * topt;
  unsigned int loc;
};
 struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct {
  int tag;
  struct _tuple1 * f1;
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
  struct _tuple1 * name;
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
  struct _tuple1 * name;
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
  struct _tuple1 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Absyn_AggrdeclImpl * impl;
  struct Cyc_List_List * attributes;
  long expected_mem_kind;
};
 struct Cyc_Absyn_Datatypefield {
  struct _tuple1 * name;
  struct Cyc_List_List * typs;
  unsigned int loc;
  enum Cyc_Absyn_Scope sc;
};
 struct Cyc_Absyn_Datatypedecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple1 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Core_Opt * fields;
  long is_extensible;
};
 struct Cyc_Absyn_Enumfield {
  struct _tuple1 * name;
  struct Cyc_Absyn_Exp * tag;
  unsigned int loc;
};
 struct Cyc_Absyn_Enumdecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple1 * name;
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
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
int Cyc_Absyn_tvar_cmp(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *);
int Cyc_Absyn_tvar_id(struct Cyc_Absyn_Tvar *);
union Cyc_Absyn_Nmspace Cyc_Absyn_Loc_n();
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned int);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned int);
void * Cyc_Absyn_compress(void *);
void * Cyc_Absyn_new_evar(struct Cyc_Core_Opt *,struct Cyc_Core_Opt *);
void * Cyc_Absyn_wildtyp(struct Cyc_Core_Opt *);
extern void * Cyc_Absyn_char_type;
extern void * Cyc_Absyn_uchar_type;
extern void * Cyc_Absyn_ushort_type;
extern void * Cyc_Absyn_uint_type;
extern void * Cyc_Absyn_ulonglong_type;
extern void * Cyc_Absyn_uint128_type;
extern void * Cyc_Absyn_schar_type;
extern void * Cyc_Absyn_sshort_type;
extern void * Cyc_Absyn_sint_type;
extern void * Cyc_Absyn_slonglong_type;
extern void * Cyc_Absyn_sint128_type;
extern void * Cyc_Absyn_double_type;
extern void * Cyc_Absyn_wchar_type();
void * Cyc_Absyn_gen_float_type(unsigned int);
extern void * Cyc_Absyn_heap_rgn_type;
extern void * Cyc_Absyn_al_qual_type;
extern void * Cyc_Absyn_un_qual_type;
extern void * Cyc_Absyn_rtd_qual_type;
extern void * Cyc_Absyn_true_type;
extern void * Cyc_Absyn_false_type;
extern void * Cyc_Absyn_void_type;
extern void * Cyc_Absyn_tag_type(void *);
extern void * Cyc_Absyn_rgn_handle_type(void *);
extern void * Cyc_Absyn_aqual_handle_type(void *);
extern void * Cyc_Absyn_aqual_var_type(void *,void *);
extern void * Cyc_Absyn_join_eff(struct Cyc_List_List *);
extern void * Cyc_Absyn_enum_type(struct _tuple1 *,struct Cyc_Absyn_Enumdecl *);
extern void * Cyc_Absyn_tuple_type(struct Cyc_List_List *);
struct Cyc_Absyn_FieldName_Absyn_Designator_struct * Cyc_Absyn_tuple_field_designator(int);
void * Cyc_Absyn_exn_type();
extern void * Cyc_Absyn_fat_bound_type;
void * Cyc_Absyn_thin_bounds_exp(struct Cyc_Absyn_Exp *);
void * Cyc_Absyn_bounds_one();
void * Cyc_Absyn_fatconst();
void * Cyc_Absyn_thinconst();
void * Cyc_Absyn_pointer_type(struct Cyc_Absyn_PtrInfo);
void * Cyc_Absyn_atb_type(void *,void *,void *,struct Cyc_Absyn_Tqual,void *,
			  void *,void *);
void * Cyc_Absyn_star_type(void *,void *,void *,struct Cyc_Absyn_Tqual,void *,
			   void *);
void * Cyc_Absyn_at_type(void *,void *,void *,struct Cyc_Absyn_Tqual,void *,
			 void *);
void * Cyc_Absyn_fatptr_type(void *,void *,void *,struct Cyc_Absyn_Tqual,
			     void *,void *);
void * Cyc_Absyn_array_type(void *,struct Cyc_Absyn_Tqual,struct Cyc_Absyn_Exp *,
			    void *,unsigned int);
void * Cyc_Absyn_datatype_field_type(union Cyc_Absyn_DatatypeFieldInfo,struct Cyc_List_List *);
void * Cyc_Absyn_aggr_type(union Cyc_Absyn_AggrInfo,struct Cyc_List_List *);
union Cyc_Absyn_Cnst Cyc_Absyn_Char_c(enum Cyc_Absyn_Sign,char);
union Cyc_Absyn_Cnst Cyc_Absyn_Short_c(enum Cyc_Absyn_Sign,short);
union Cyc_Absyn_Cnst Cyc_Absyn_Int_c(enum Cyc_Absyn_Sign,int);
struct Cyc_Absyn_Exp * Cyc_Absyn_new_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_copy_exp(struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Exp * Cyc_Absyn_const_exp(union Cyc_Absyn_Cnst,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_uint_exp(unsigned int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_varb_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_add_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					 unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_fncall_exp(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,
					    unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_cast_exp(void *,struct Cyc_Absyn_Exp *,long,
					  enum Cyc_Absyn_Coercion,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_sizeoftype_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_tuple_exp(struct Cyc_List_List *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_stmt_exp(struct Cyc_Absyn_Stmt *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_valueof_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_assert_exp(struct Cyc_Absyn_Exp *,long,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_uniqueaqual_exp();
struct Cyc_Absyn_Stmt * Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_seq_stmt(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *,
					   unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Stmt *,
					    unsigned int);
struct Cyc_Absyn_Pat * Cyc_Absyn_new_pat(void *,unsigned int);
struct Cyc_Absyn_Decl * Cyc_Absyn_new_decl(void *,unsigned int);
struct Cyc_Absyn_Vardecl * Cyc_Absyn_new_vardecl(unsigned int,struct _tuple1 *,
						 void *,struct Cyc_Absyn_Exp *,
						 struct Cyc_Absyn_Exp *);
void * Cyc_Absyn_pointer_expand(void *,long);
long Cyc_Absyn_is_lvalue(struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Aggrfield * Cyc_Absyn_lookup_field(struct Cyc_List_List *,
						    struct _fat_ptr *);
struct Cyc_Absyn_Aggrfield * Cyc_Absyn_lookup_decl_field(struct Cyc_Absyn_Aggrdecl *,
							 struct _fat_ptr *);
void Cyc_Absyn_visit_type(long (*)(void *,void *),void *,void *);
struct _fat_ptr Cyc_Absynpp_typ2string(void *);
extern struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct Cyc_Atts_No_throw_att_val;
int Cyc_Atts_attribute_cmp(void *,void *);
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
void * Cyc_BansheeIf_equality_constraint(void *,void *);
long Cyc_BansheeIf_add_constraint(unsigned int,void *);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
extern char Cyc_Dict_Absent[7U];
 struct Cyc_Dict_Absent_exn_struct {
  char * tag;
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
void * Cyc_Tcenv_lookup_ordinary_global(struct Cyc_Tcenv_Tenv *,unsigned int,
					struct _tuple1 *,long);
struct Cyc_Absyn_Aggrdecl * * Cyc_Tcenv_lookup_aggrdecl(struct Cyc_Tcenv_Tenv *,
							unsigned int,struct _tuple1 *);
struct Cyc_Absyn_Datatypedecl * * Cyc_Tcenv_lookup_datatypedecl(struct Cyc_Tcenv_Tenv *,
								unsigned int,
								struct _tuple1 *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_allow_valueof(struct Cyc_Tcenv_Tenv *);
enum Cyc_Tcenv_NewStatus {
  Cyc_Tcenv_NoneNew = 0U,
  Cyc_Tcenv_InNew = 1U,
  Cyc_Tcenv_InNewAggr = 2U
};
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_set_new_status(enum Cyc_Tcenv_NewStatus,
						 struct Cyc_Tcenv_Tenv *);
enum Cyc_Tcenv_NewStatus Cyc_Tcenv_new_status(struct Cyc_Tcenv_Tenv *);
long Cyc_Tcenv_abstract_val_ok(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_enter_abstract_val_ok(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_clear_abstract_val_ok(struct Cyc_Tcenv_Tenv *);
struct Cyc_List_List * Cyc_Tcenv_lookup_type_vars(struct Cyc_Tcenv_Tenv *);
struct Cyc_Core_Opt * Cyc_Tcenv_lookup_opt_type_vars(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_enter_notreadctxt(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_clear_notreadctxt(struct Cyc_Tcenv_Tenv *);
long Cyc_Tcenv_in_notreadctxt(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_enter_lhs(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_clear_lhs(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_enter_stmt_exp(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_new_block(unsigned int,struct Cyc_Tcenv_Tenv *);
void * Cyc_Tcenv_curr_rgn(struct Cyc_Tcenv_Tenv *);
void * Cyc_Tcenv_curr_lifo_rgn(struct Cyc_Tcenv_Tenv *);
struct Cyc_List_List * Cyc_Tcenv_curr_effect_constraints(struct Cyc_Tcenv_Tenv *);
struct Cyc_List_List * Cyc_Tcenv_curr_aquals_bounds(struct Cyc_Tcenv_Tenv *);
void Cyc_Tcenv_check_effect_accessible_nodelay(struct Cyc_Tcenv_Tenv *,unsigned int,
					       void *);
void Cyc_Tcenv_check_effect_accessible(struct Cyc_Tcenv_Tenv *,unsigned int,
				       void *);
void Cyc_Tcenv_check_effect_constraints(struct Cyc_Tcenv_Tenv *,unsigned int,
					struct Cyc_List_List *);
void * Cyc_CurRgn_instantiate(void *,void *);
struct Cyc_Hashtable_Table;
extern struct Cyc_Hashtable_Table * Cyc_Hashtable_create(int,int (*)(void *,
								     void *),
							 int (*)(void *));
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table *,void *,void *);
extern void * Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table *,void *);
 struct _tuple14 {
  unsigned int f0;
  long f1;
};
extern struct _tuple14 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp *);
extern long Cyc_Evexp_c_can_eval(struct Cyc_Absyn_Exp *);
extern long Cyc_Evexp_same_uint_const_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *);
extern long Cyc_Evexp_okay_szofarg(void *);
extern long Cyc_Flags_tc_aggressive_warn;
struct Cyc_List_List * Cyc_Formatstr_get_format_types(struct Cyc_Tcenv_Tenv *,
						      struct _fat_ptr,long,
						      unsigned int);
struct Cyc_List_List * Cyc_Formatstr_get_scanf_types(struct Cyc_Tcenv_Tenv *,
						     struct _fat_ptr,long,
						     unsigned int);
extern struct Cyc_Absyn_Kind Cyc_Kinds_ak;
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_mk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ek;
extern struct Cyc_Core_Opt Cyc_Kinds_ako;
extern struct Cyc_Core_Opt Cyc_Kinds_mko;
extern struct Cyc_Core_Opt Cyc_Kinds_eko;
extern struct Cyc_Core_Opt Cyc_Kinds_aqko;
struct Cyc_Absyn_Kind * Cyc_Kinds_tvar_kind(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Kind *);
struct Cyc_Core_Opt Cyc_Kinds_tvar_kind_opt(struct Cyc_Absyn_Tvar *);
long Cyc_Kinds_kind_leq(struct Cyc_Absyn_Kind *,struct Cyc_Absyn_Kind *);
long Cyc_Kinds_kind_eq(struct Cyc_Absyn_Kind *,struct Cyc_Absyn_Kind *);
enum Cyc_Absyn_Coercion Cyc_Subtype_coercible(unsigned int,void *,void *);
enum Cyc_Absyn_Coercion Cyc_Subtype_coercible_warn(unsigned int,void *,void *);
enum Cyc_Absyn_Coercion Cyc_Subtype_coercible_exact(unsigned int,void *,void *);
long Cyc_Subtype_check_aqual_bounds(struct Cyc_List_List *,void *,void *);
void * Cyc_Tcexp_tcExp(struct Cyc_Tcenv_Tenv *,void * *,struct Cyc_Absyn_Exp *);
void * Cyc_Tcexp_tcExpInitializer(struct Cyc_Tcenv_Tenv *,void * *,struct Cyc_Absyn_Exp *);
 struct _tuple15 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
};
 struct Cyc_Tcpat_TcPatResult {
  struct _tuple15 * tvars_and_effconstr_opt;
  struct Cyc_List_List * patvars;
  struct Cyc_List_List * aquals_bounds;
};
struct Cyc_Tcpat_TcPatResult Cyc_Tcpat_tcPat(struct Cyc_Tcenv_Tenv *,struct Cyc_Absyn_Pat *,
					     void * *,struct Cyc_Absyn_Exp *);
long Cyc_Tcpat_check_let_pat_exhaustive(unsigned int,struct Cyc_Tcenv_Tenv *,
					struct Cyc_Absyn_Pat *,void * *);
void Cyc_Tcstmt_tcStmt(struct Cyc_Tcenv_Tenv *,struct Cyc_Absyn_Stmt *,long);
void Cyc_Tctyp_check_type(unsigned int,struct Cyc_Tcenv_Tenv *,struct Cyc_List_List *,
			  struct Cyc_Absyn_Kind *,long,long,void *);
long Cyc_Tcutil_is_arithmetic_type(void *);
long Cyc_Tcutil_is_tag_type(void *);
long Cyc_Tcutil_is_pointer_type(void *);
long Cyc_Tcutil_is_array_type(void *);
long Cyc_Tcutil_is_boxed(void *);
long Cyc_Tcutil_is_fat_pointer_type(void *);
long Cyc_Tcutil_is_bits_only_type(void *);
void * Cyc_Tcutil_pointer_elt_type(void *);
void * Cyc_Tcutil_pointer_region(void *);
long Cyc_Tcutil_rgn_of_pointer(void *,void * *);
void * Cyc_Tcutil_pointer_aqual(void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_get_bounds_exp(void *,void *);
long Cyc_Tcutil_is_fat_pointer_type_elt(void *,void * *);
long Cyc_Tcutil_is_zero_pointer_type_elt(void *,void * *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_get_bounds_exp(void *,void *);
long Cyc_Tcutil_is_integral(struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_is_numeric(struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_is_zero(struct Cyc_Absyn_Exp *);
void * Cyc_Tcutil_copy_type(void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_deep_copy_exp(long,struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Kind * Cyc_Tcutil_type_kind(void *);
void Cyc_Tcutil_unchecked_cast(struct Cyc_Absyn_Exp *,void *,enum Cyc_Absyn_Coercion);
long Cyc_Tcutil_coerce_uint_type(struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_coerce_sint_type(struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_coerce_to_bool(struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_coerce_arg(struct Cyc_List_List *,struct Cyc_Absyn_Exp *,
			   void *,long *);
long Cyc_Tcutil_coerce_assign(struct Cyc_List_List *,struct Cyc_Absyn_Exp *,
			      void *);
long Cyc_Tcutil_coerce_list(struct Cyc_List_List *,void *,struct Cyc_List_List *);
long Cyc_Tcutil_zero_to_null(void *,struct Cyc_Absyn_Exp *);
 struct _tuple16 {
  struct Cyc_Absyn_Decl * f0;
  struct Cyc_Absyn_Exp * f1;
  long f2;
};
struct _tuple16 Cyc_Tcutil_insert_alias(struct Cyc_Absyn_Exp *,void *);
void * Cyc_Tcutil_max_arithmetic_type(void *,void *);
void * Cyc_Tcutil_substitute(struct Cyc_List_List *,void *);
struct Cyc_List_List * Cyc_Tcutil_rsubst_effconstr(struct _RegionHandle *,
						   struct Cyc_List_List *,
						   struct Cyc_List_List *);
long Cyc_Tcutil_subset_effect(long,void *,void *);
void * Cyc_Tcutil_evaluate_effect(struct Cyc_List_List *,void *);
void * Cyc_Tcutil_fndecl2type(struct Cyc_Absyn_Fndecl *);
 struct _tuple17 {
  struct Cyc_List_List * f0;
  struct _RegionHandle * f1;
};
 struct _tuple18 {
  struct Cyc_Absyn_Tvar * f0;
  void * f1;
};
struct _tuple18 * Cyc_Tcutil_r_make_inst_var(struct _tuple17 *,struct Cyc_Absyn_Tvar *);
void Cyc_Tcutil_check_nonzero_bound(unsigned int,void *);
void Cyc_Tcutil_check_bound(unsigned int,unsigned int,void *,long);
struct Cyc_List_List * Cyc_Tcutil_resolve_aggregate_designators(struct _RegionHandle *,
								unsigned int,
								struct Cyc_List_List *,
								enum Cyc_Absyn_AggrKind,
								struct Cyc_List_List *);
long Cyc_Tcutil_is_noalias_pointer(struct Cyc_List_List *,void *,long);
long Cyc_Tcutil_is_noalias_path(struct Cyc_List_List *,struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_is_noalias_pointer_or_aggr(struct Cyc_List_List *,void *);
 struct _tuple19 {
  long f0;
  void * f1;
};
struct _tuple19 Cyc_Tcutil_addressof_props(struct Cyc_Absyn_Exp *);
void * Cyc_Tcutil_normalize_effect(void *);
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp *);
void Cyc_Tcutil_check_no_qual(unsigned int,void *);
void * Cyc_Tcutil_promote_array(void *,void *,void *,long);
long Cyc_Tcutil_zeroable_type(void *);
long Cyc_Tcutil_force_type2bool(long,void *);
void * Cyc_Tcutil_any_bool(struct Cyc_List_List *);
void * Cyc_Tcutil_any_bounds(struct Cyc_List_List *);
void * Cyc_Tcutil_eval_aquals_of(struct Cyc_List_List *,void *);
long Cyc_Tcutil_is_cvar_type(void *);
void * Cyc_Tcutil_ptrbnd_cvar_equivalent(void *);
void * Cyc_Tcutil_get_pointer_bounds(void *);
void Cyc_Tcutil_substitute_vars(struct Cyc_List_List *,struct Cyc_Absyn_Exp *);
void Cyc_Unify_explain_failure();
long Cyc_Unify_unify(void *,void *);
void Cyc_Warn_warn(unsigned int,struct _fat_ptr,struct _fat_ptr);
void Cyc_Warn_err(unsigned int,struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Qvar_Warn_Warg_struct {
  int tag;
  struct _tuple1 * f1;
};
 struct Cyc_Warn_Typ_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_TypOpt_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_Exp_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Warn_Aggrdecl_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Aggrdecl * f1;
};
 struct Cyc_Warn_Int_Warn_Warg_struct {
  int tag;
  int f1;
};
void Cyc_Warn_verr2(unsigned int,struct _fat_ptr);
void Cyc_Warn_err2(unsigned int,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned int,struct _fat_ptr);
void * Cyc_Warn_impos2(struct _fat_ptr);
void * Cyc_Warn_impos_loc2(unsigned int,struct _fat_ptr);
static void * Cyc_Tcexp_expr_err(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				 void * * topt,struct _fat_ptr ap) {
  void * _T0;
  void * * _T1;
  struct Cyc_Core_Opt * _T2;
  Cyc_Warn_verr2(loc,ap);
  if (topt == 0) { goto _TL0;
  }
  _T1 = topt;
  _T0 = *_T1;
  goto _TL1;
  _TL0: _T2 = Cyc_Tcenv_lookup_opt_type_vars(te);
  _T0 = Cyc_Absyn_wildtyp(_T2);
  _TL1: return _T0;
}
static void Cyc_Tcexp_err_and_explain(unsigned int loc,struct _fat_ptr ap) {
  Cyc_Warn_verr2(loc,ap);
  Cyc_Unify_explain_failure();
}
void Cyc_Tcexp_check_consume(unsigned int loc,struct Cyc_List_List * aqb,
			     void * t,struct Cyc_Absyn_Exp * e) {
  long _T0;
  long _T1;
  struct Cyc_Warn_String_Warn_Warg_struct _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  _T0 = Cyc_Tcutil_is_noalias_pointer_or_aggr(aqb,t);
  if (! _T0) { goto _TL2;
  }
  _T1 = Cyc_Tcutil_is_noalias_path(aqb,e);
  if (_T1) { goto _TL2;
  }else { goto _TL4;
  }
  _TL4: { struct Cyc_Warn_String_Warn_Warg_struct _T5;
    _T5.tag = 0;
    _T5.f1 = _tag_fat("Cannot consume non-unique paths; do swap instead",
		      sizeof(char),49U);
    _T2 = _T5;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5 = _T2;
    void * _T6[1];
    _T6[0] = &_T5;
    _T3 = loc;
    _T4 = _tag_fat(_T6,sizeof(void *),1);
    Cyc_Warn_err2(_T3,_T4);
  }goto _TL3;
  _TL2: _TL3: ;
}
struct Cyc_Absyn_PtrInfo Cyc_Tcexp_fresh_pointer_type_with_aqual(struct Cyc_Tcenv_Tenv * te,
								 void * aq) {
  struct Cyc_Core_Opt * _T0;
  struct Cyc_Core_Opt * _T1;
  struct Cyc_Core_Opt * _T2;
  struct Cyc_Core_Opt * _T3;
  struct Cyc_Core_Opt * _T4;
  struct Cyc_Core_Opt * _T5;
  struct Cyc_Absyn_PtrInfo _T6;
  struct Cyc_List_List * tenv_tvs = Cyc_Tcenv_lookup_type_vars(te);
  _T0 = &Cyc_Kinds_ako;
  _T1 = (struct Cyc_Core_Opt *)_T0;
  { struct Cyc_Core_Opt * _T7 = _cycalloc(sizeof(struct Cyc_Core_Opt));
    _T7->v = tenv_tvs;
    _T2 = (struct Cyc_Core_Opt *)_T7;
  }{ void * t2 = Cyc_Absyn_new_evar(_T1,_T2);
    _T3 = &Cyc_Kinds_eko;
    _T4 = (struct Cyc_Core_Opt *)_T3;
    { struct Cyc_Core_Opt * _T7 = _cycalloc(sizeof(struct Cyc_Core_Opt));
      _T7->v = tenv_tvs;
      _T5 = (struct Cyc_Core_Opt *)_T7;
    }{ void * rt = Cyc_Absyn_new_evar(_T4,_T5);
      void * nbl = Cyc_Tcutil_any_bool(tenv_tvs);
      void * b = Cyc_Tcutil_any_bounds(tenv_tvs);
      void * zt = Cyc_Tcutil_any_bool(tenv_tvs);
      void * rel = Cyc_Tcutil_any_bool(tenv_tvs);
      { struct Cyc_Absyn_PtrInfo _T7;
	_T7.elt_type = t2;
	_T7.elt_tq = Cyc_Absyn_empty_tqual(0U);
	(_T7.ptr_atts).eff = rt;
	(_T7.ptr_atts).nullable = nbl;
	(_T7.ptr_atts).bounds = b;
	(_T7.ptr_atts).zero_term = zt;
	(_T7.ptr_atts).ptrloc = 0;
	(_T7.ptr_atts).autoreleased = rel;
	(_T7.ptr_atts).aqual = aq;
	_T6 = _T7;
      }return _T6;
    }
  }
}
struct Cyc_Absyn_PtrInfo Cyc_Tcexp_fresh_pointer_type(struct Cyc_Tcenv_Tenv * te) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Core_Opt * _T1;
  struct Cyc_Core_Opt * _T2;
  struct Cyc_Core_Opt * _T3;
  void * _T4;
  void * _T5;
  void * _T6;
  struct Cyc_Absyn_PtrInfo _T7;
  struct Cyc_List_List * tenv_tvs = Cyc_Tcenv_lookup_type_vars(te);
  _T0 = te;
  _T1 = &Cyc_Kinds_aqko;
  _T2 = (struct Cyc_Core_Opt *)_T1;
  { struct Cyc_Core_Opt * _T8 = _cycalloc(sizeof(struct Cyc_Core_Opt));
    _T8->v = tenv_tvs;
    _T3 = (struct Cyc_Core_Opt *)_T8;
  }_T4 = Cyc_Absyn_new_evar(_T2,_T3);
  _T5 = Cyc_Absyn_rtd_qual_type;
  _T6 = Cyc_Absyn_aqual_var_type(_T4,_T5);
  _T7 = Cyc_Tcexp_fresh_pointer_type_with_aqual(_T0,_T6);
  return _T7;
}
 struct _tuple20 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Exp * f1;
};
static void Cyc_Tcexp_resolve_unresolved_mem(unsigned int loc,void * * topt,
					     struct Cyc_Absyn_Exp * e,struct Cyc_List_List * des) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _tuple20 * _T2;
  struct Cyc_List_List * _T3;
  int * _T4;
  int _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T9;
  void * * _TA;
  int * _TB;
  unsigned int _TC;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TD;
  void * _TE;
  int * _TF;
  int _T10;
  void * _T11;
  union Cyc_Absyn_AggrInfo _T12;
  struct _union_AggrInfo_UnknownAggr _T13;
  unsigned int _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  int (* _T16)(unsigned int,struct _fat_ptr);
  void * (* _T17)(unsigned int,struct _fat_ptr);
  unsigned int _T18;
  struct _fat_ptr _T19;
  union Cyc_Absyn_AggrInfo _T1A;
  struct _union_AggrInfo_KnownAggr _T1B;
  struct Cyc_Absyn_Aggrdecl * * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T1E;
  struct Cyc_Absyn_Aggrdecl * _T1F;
  struct Cyc_Absyn_ArrayInfo _T20;
  struct Cyc_Absyn_ArrayInfo _T21;
  struct Cyc_Absyn_Exp * _T22;
  struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T23;
  struct Cyc_Absyn_Exp * _T24;
  struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T25;
  struct Cyc_Absyn_Vardecl * _T26;
  struct Cyc_Absyn_Exp * _T27;
  struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T28;
  if (topt != 0) { goto _TL5;
  }
  if (des == 0) { goto _TL7;
  }
  _T0 = des;
  _T1 = _T0->hd;
  _T2 = (struct _tuple20 *)_T1;
  { struct _tuple20 _T29 = *_T2;
    struct Cyc_List_List * _T2A;
    _T2A = _T29.f0;
    { struct Cyc_List_List * dls = _T2A;
      if (dls == 0) { goto _TL9;
      }
      _T3 = dls;
      { void * _T2B = _T3->hd;
	struct _fat_ptr * _T2C;
	_T4 = (int *)_T2B;
	_T5 = *_T4;
	if (_T5 != 1) { goto _TLB;
	}
	{ struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T2D = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T2B;
	  _T2C = _T2D->f1;
	}{ struct _fat_ptr * n = _T2C;
	  _T6 = e;
	  { struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T2D = _cycalloc(sizeof(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct));
	    _T2D->tag = 29;
	    _T2D->f1 = 0;
	    _T2D->f2 = 0;
	    _T2D->f3 = des;
	    _T7 = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T2D;
	  }_T6->r = (void *)_T7;
	  return;
	}_TLB: goto _LL3;
	_LL3: ;
      }goto _TLA;
      _TL9: _TLA: ;
    }
  }goto _TL8;
  _TL7: _TL8: _T8 = e;
  { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T29 = _cycalloc(sizeof(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct));
    _T29->tag = 25;
    _T29->f1 = des;
    _T9 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T29;
  }_T8->r = (void *)_T9;
  return;
  _TL5: _TA = topt;
  { void * t = *_TA;
    loop: { void * _T29 = Cyc_Absyn_compress(t);
      struct Cyc_Absyn_Vardecl * _T2A;
      long _T2B;
      struct Cyc_Absyn_Tqual _T2C;
      void * _T2D;
      union Cyc_Absyn_AggrInfo _T2E;
      _TB = (int *)_T29;
      _TC = *_TB;
      switch (_TC) {
      case 0: 
	_TD = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T29;
	_TE = _TD->f1;
	_TF = (int *)_TE;
	_T10 = *_TF;
	if (_T10 != 24) { goto _TLE;
	}
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2F = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T29;
	  _T11 = _T2F->f1;
	  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T30 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T11;
	    _T2E = _T30->f1;
	  }
	}{ union Cyc_Absyn_AggrInfo info = _T2E;
	  { struct Cyc_Absyn_Aggrdecl * _T2F;
	    _T12 = info;
	    _T13 = _T12.UnknownAggr;
	    _T14 = _T13.tag;
	    if (_T14 != 1) { goto _TL10;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T30;
	      _T30.tag = 0;
	      _T30.f1 = _tag_fat("struct type improperly set",sizeof(char),
				 27U);
	      _T15 = _T30;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T30 = _T15;
	      void * _T31[1];
	      _T31[0] = &_T30;
	      _T17 = Cyc_Warn_impos_loc2;
	      { int (* _T32)(unsigned int,struct _fat_ptr) = (int (*)(unsigned int,
								      struct _fat_ptr))_T17;
		_T16 = _T32;
	      }_T18 = loc;
	      _T19 = _tag_fat(_T31,sizeof(void *),1);
	      _T16(_T18,_T19);
	    }goto _TL11;
	    _TL10: _T1A = info;
	    _T1B = _T1A.KnownAggr;
	    _T1C = _T1B.val;
	    { struct Cyc_Absyn_Aggrdecl * _T30 = *_T1C;
	      _T2F = _T30;
	    }{ struct Cyc_Absyn_Aggrdecl * ad = _T2F;
	      _T1D = e;
	      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T30 = _cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));
		_T30->tag = 28;
		_T1F = ad;
		_T30->f1 = _T1F->name;
		_T30->f2 = 0;
		_T30->f3 = des;
		_T30->f4 = ad;
		_T1E = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T30;
	      }_T1D->r = (void *)_T1E;
	    }_TL11: ;
	  }goto _LL8;
	}_TLE: goto _LL11;
      case 5: 
	{ struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T2F = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T29;
	  _T20 = _T2F->f1;
	  _T2D = _T20.elt_type;
	  _T21 = _T2F->f1;
	  _T2C = _T21.tq;
	}{ void * at = _T2D;
	  struct Cyc_Absyn_Tqual aq = _T2C;
	  _T22 = e;
	  { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T2F = _cycalloc(sizeof(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct));
	    _T2F->tag = 25;
	    _T2F->f1 = des;
	    _T23 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T2F;
	  }_T22->r = (void *)_T23;
	  goto _LL8;
	}
      case 7: 
	{ struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T2F = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T29;
	  _T2B = _T2F->f2;
	}{ long it = _T2B;
	  _T24 = e;
	  { struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T2F = _cycalloc(sizeof(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct));
	    _T2F->tag = 29;
	    _T2F->f1 = t;
	    _T2F->f2 = it;
	    _T2F->f3 = des;
	    _T25 = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T2F;
	  }_T24->r = (void *)_T25;
	  goto _LL8;
	}
      case 12: 
	{ struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T2F = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T29;
	  _T2A = _T2F->f1;
	}{ struct Cyc_Absyn_Vardecl * vd = _T2A;
	  _T26 = vd;
	  t = _T26->type;
	  goto loop;
	}
      default: 
	_LL11: _T27 = e;
	{ struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T2F = _cycalloc(sizeof(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct));
	  _T2F->tag = 25;
	  _T2F->f1 = des;
	  _T28 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T2F;
	}_T27->r = (void *)_T28;
	goto _LL8;
      }
      _LL8: ;
    }
  }
}
static void Cyc_Tcexp_tcExpNoInst(struct Cyc_Tcenv_Tenv *,void * *,struct Cyc_Absyn_Exp *);
static void * Cyc_Tcexp_tcExpNoPromote(struct Cyc_Tcenv_Tenv *,void * *,struct Cyc_Absyn_Exp *);
static void Cyc_Tcexp_check_contains_assign(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T3;
  struct Cyc_Absyn_PrimopOpt * _T4;
  long _T5;
  struct Cyc_Warn_String_Warn_Warg_struct _T6;
  struct Cyc_Absyn_Exp * _T7;
  unsigned int _T8;
  struct _fat_ptr _T9;
  _T0 = e;
  { void * _TA = _T0->r;
    _T1 = (int *)_TA;
    _T2 = *_T1;
    if (_T2 != 4) { goto _TL12;
    }
    _T3 = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_TA;
    _T4 = _T3->f2;
    if (_T4 != 0) { goto _TL14;
    }
    _T5 = Cyc_Flags_tc_aggressive_warn;
    if (! _T5) { goto _TL16;
    }
    { struct Cyc_Warn_String_Warn_Warg_struct _TB;
      _TB.tag = 0;
      _TB.f1 = _tag_fat("assignment in test",sizeof(char),19U);
      _T6 = _TB;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _TB = _T6;
      void * _TC[1];
      _TC[0] = &_TB;
      _T7 = e;
      _T8 = _T7->loc;
      _T9 = _tag_fat(_TC,sizeof(void *),1);
      Cyc_Warn_warn2(_T8,_T9);
    }goto _TL17;
    _TL16: _TL17: goto _LL0;
    _TL14: goto _LL3;
    _TL12: _LL3: goto _LL0;
    _LL0: ;
  }
}
void Cyc_Tcexp_tcTest(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Exp * e,
		      struct _fat_ptr msg_part) {
  struct Cyc_Tcenv_Tenv * _T0;
  void * * _T1;
  struct Cyc_Absyn_Exp * _T2;
  long _T3;
  struct Cyc_Warn_String_Warn_Warg_struct _T4;
  struct Cyc_Warn_String_Warn_Warg_struct _T5;
  struct Cyc_Warn_String_Warn_Warg_struct _T6;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Warn_String_Warn_Warg_struct _T9;
  struct Cyc_Absyn_Exp * _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  Cyc_Tcexp_check_contains_assign(e);
  _T0 = te;
  _T1 = &Cyc_Absyn_sint_type;
  _T2 = e;
  Cyc_Tcexp_tcExp(_T0,_T1,_T2);
  _T3 = Cyc_Tcutil_coerce_to_bool(e);
  if (_T3) { goto _TL18;
  }else { goto _TL1A;
  }
  _TL1A: { struct Cyc_Warn_String_Warn_Warg_struct _TD;
    _TD.tag = 0;
    _TD.f1 = _tag_fat("test of ",sizeof(char),9U);
    _T4 = _TD;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _TD = _T4;
    { struct Cyc_Warn_String_Warn_Warg_struct _TE;
      _TE.tag = 0;
      _TE.f1 = msg_part;
      _T5 = _TE;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _TE = _T5;
      { struct Cyc_Warn_String_Warn_Warg_struct _TF;
	_TF.tag = 0;
	_TF.f1 = _tag_fat(" has type ",sizeof(char),11U);
	_T6 = _TF;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TF = _T6;
	{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T10;
	  _T10.tag = 3;
	  _T8 = e;
	  _T10.f1 = _T8->topt;
	  _T7 = _T10;
	}{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T10 = _T7;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T11;
	    _T11.tag = 0;
	    _T11.f1 = _tag_fat(" instead of integral or pointer type",sizeof(char),
			       37U);
	    _T9 = _T11;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T11 = _T9;
	    void * _T12[5];
	    _T12[0] = &_TD;
	    _T12[1] = &_TE;
	    _T12[2] = &_TF;
	    _T12[3] = &_T10;
	    _T12[4] = &_T11;
	    _TA = e;
	    _TB = _TA->loc;
	    _TC = _tag_fat(_T12,sizeof(void *),5);
	    Cyc_Warn_err2(_TB,_TC);
	  }
	}
      }
    }
  }goto _TL19;
  _TL18: _TL19: ;
}
static int Cyc_Tcexp_wchar_numelts(struct _fat_ptr s) {
  return 1;
}
static void * Cyc_Tcexp_tcConst(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				void * * topt,union Cyc_Absyn_Cnst * c,struct Cyc_Absyn_Exp * e) {
  union Cyc_Absyn_Cnst * _T0;
  struct _union_Cnst_String_c _T1;
  unsigned int _T2;
  struct _union_Cnst_Char_c _T3;
  struct _tuple4 _T4;
  enum Cyc_Absyn_Sign _T5;
  int _T6;
  void * _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  struct _union_Cnst_Short_c _TB;
  struct _tuple5 _TC;
  enum Cyc_Absyn_Sign _TD;
  void * _TE;
  void * _TF;
  struct _union_Cnst_LongLong_c _T10;
  struct _tuple7 _T11;
  enum Cyc_Absyn_Sign _T12;
  void * _T13;
  void * _T14;
  struct _union_Cnst_Int128_c _T15;
  struct _tuple7 _T16;
  enum Cyc_Absyn_Sign _T17;
  void * _T18;
  void * _T19;
  struct _union_Cnst_Float_c _T1A;
  struct _tuple8 _T1B;
  int _T1C;
  unsigned int _T1D;
  void * _T1E;
  void * * _T1F;
  void * _T20;
  int * _T21;
  int _T22;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T23;
  void * _T24;
  int * _T25;
  int _T26;
  void * _T27;
  int _T28;
  unsigned int _T29;
  void * _T2A;
  int _T2B;
  unsigned int _T2C;
  void * _T2D;
  struct _union_Cnst_Int_c _T2E;
  struct _tuple6 _T2F;
  struct _union_Cnst_Int_c _T30;
  struct _tuple6 _T31;
  void * _T32;
  enum Cyc_Absyn_Sign _T33;
  int _T34;
  void * * _T35;
  void * _T36;
  int * _T37;
  unsigned int _T38;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T39;
  void * _T3A;
  int * _T3B;
  unsigned int _T3C;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3D;
  void * _T3E;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T3F;
  enum Cyc_Absyn_Size_of _T40;
  int _T41;
  void * _T42;
  union Cyc_Absyn_Cnst * _T43;
  enum Cyc_Absyn_Sign _T44;
  int _T45;
  char _T46;
  void * _T47;
  void * _T48;
  union Cyc_Absyn_Cnst * _T49;
  enum Cyc_Absyn_Sign _T4A;
  int _T4B;
  short _T4C;
  void * _T4D;
  void * _T4E;
  void * _T4F;
  union Cyc_Absyn_Cnst * _T50;
  void * _T51;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T52;
  struct Cyc_List_List * _T53;
  struct Cyc_List_List * _T54;
  void * _T55;
  struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _T56;
  int _T57;
  unsigned int _T58;
  void * _T59;
  void * _T5A;
  struct Cyc_Absyn_Exp * _T5B;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T5C;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T5D;
  union Cyc_Absyn_Cnst * _T5E;
  union Cyc_Absyn_Cnst _T5F;
  void * _T60;
  void * _T61;
  enum Cyc_Absyn_Sign _T62;
  int _T63;
  void * * _T64;
  void * _T65;
  int * _T66;
  int _T67;
  struct Cyc_Absyn_PtrInfo _T68;
  struct Cyc_Absyn_PtrAtts _T69;
  long _T6A;
  struct Cyc_Warn_String_Warn_Warg_struct _T6B;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T6C;
  void * * _T6D;
  struct Cyc_Absyn_Exp * _T6E;
  unsigned int _T6F;
  struct _fat_ptr _T70;
  void * * _T71;
  void * _T72;
  void * _T73;
  struct _union_Cnst_String_c _T74;
  struct _fat_ptr _T75;
  unsigned int _T76;
  struct _union_Cnst_Wstring_c _T77;
  union Cyc_Absyn_Cnst _T78;
  unsigned int _T79;
  struct Cyc_Absyn_Exp * _T7A;
  void * _T7B;
  void * _T7C;
  void * _T7D;
  struct Cyc_Absyn_Tqual _T7E;
  void * _T7F;
  void * _T80;
  void * _T81;
  void * _T82;
  void * * _T83;
  void * _T84;
  int * _T85;
  unsigned int _T86;
  struct Cyc_Absyn_ArrayInfo _T87;
  void * _T88;
  struct Cyc_Absyn_Tqual _T89;
  struct Cyc_Absyn_Exp * _T8A;
  struct Cyc_List_List * _T8B;
  void * _T8C;
  void * _T8D;
  struct Cyc_Absyn_Exp * _T8E;
  unsigned int _T8F;
  void * _T90;
  void * * _T91;
  void * _T92;
  enum Cyc_Absyn_Coercion _T93;
  int _T94;
  enum Cyc_Absyn_Coercion _T95;
  int _T96;
  struct Cyc_Absyn_Exp * _T97;
  struct Cyc_Absyn_Exp * _T98;
  void * * _T99;
  void * _T9A;
  void * * _T9B;
  void * _T9C;
  void * _T9D;
  void * _T9E;
  void * string_elt_typ = Cyc_Absyn_char_type;
  int string_numelts = 0;
  _T0 = _check_null(c);
  { union Cyc_Absyn_Cnst _T9F = *_T0;
    struct _fat_ptr _TA0;
    enum Cyc_Absyn_Sign _TA1;
    int _TA2;
    _T1 = _T9F.String_c;
    _T2 = _T1.tag;
    switch (_T2) {
    case 2: 
      _T3 = _T9F.Char_c;
      _T4 = _T3.val;
      _T5 = _T4.f0;
      _T6 = (int)_T5;
      switch (_T6) {
      case Cyc_Absyn_Signed: 
	_T7 = Cyc_Absyn_schar_type;
	return _T7;
      case Cyc_Absyn_Unsigned: 
	_T8 = Cyc_Absyn_uchar_type;
	return _T8;
      default: 
	_T9 = Cyc_Absyn_char_type;
	return _T9;
      }
      ;
    case 3: 
      _TA = Cyc_Absyn_wchar_type();
      return _TA;
    case 4: 
      _TB = _T9F.Short_c;
      _TC = _TB.val;
      _TD = _TC.f0;
      if (_TD != Cyc_Absyn_Unsigned) { goto _TL1D;
      }
      _TE = Cyc_Absyn_ushort_type;
      return _TE;
      _TL1D: _TF = Cyc_Absyn_sshort_type;
      return _TF;
    case 6: 
      _T10 = _T9F.LongLong_c;
      _T11 = _T10.val;
      _T12 = _T11.f0;
      if (_T12 != Cyc_Absyn_Unsigned) { goto _TL1F;
      }
      _T13 = Cyc_Absyn_ulonglong_type;
      return _T13;
      _TL1F: _T14 = Cyc_Absyn_slonglong_type;
      return _T14;
    case 7: 
      _T15 = _T9F.Int128_c;
      _T16 = _T15.val;
      _T17 = _T16.f0;
      if (_T17 != Cyc_Absyn_Unsigned) { goto _TL21;
      }
      _T18 = Cyc_Absyn_uint128_type;
      return _T18;
      _TL21: _T19 = Cyc_Absyn_sint128_type;
      return _T19;
    case 8: 
      _T1A = _T9F.Float_c;
      _T1B = _T1A.val;
      _TA2 = _T1B.f1;
      { int i = _TA2;
	if (topt != 0) { goto _TL23;
	}
	_T1C = i;
	_T1D = (unsigned int)_T1C;
	_T1E = Cyc_Absyn_gen_float_type(_T1D);
	return _T1E;
	_TL23: _T1F = topt;
	_T20 = *_T1F;
	{ void * _TA3 = Cyc_Absyn_compress(_T20);
	  int _TA4;
	  _T21 = (int *)_TA3;
	  _T22 = *_T21;
	  if (_T22 != 0) { goto _TL25;
	  }
	  _T23 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
	  _T24 = _T23->f1;
	  _T25 = (int *)_T24;
	  _T26 = *_T25;
	  if (_T26 != 2) { goto _TL27;
	  }
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA5 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
	    _T27 = _TA5->f1;
	    { struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct * _TA6 = (struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct *)_T27;
	      _TA4 = _TA6->f1;
	    }
	  }{ int i = _TA4;
	    _T28 = i;
	    _T29 = (unsigned int)_T28;
	    _T2A = Cyc_Absyn_gen_float_type(_T29);
	    return _T2A;
	  }_TL27: goto _LL22;
	  _TL25: _LL22: _T2B = i;
	  _T2C = (unsigned int)_T2B;
	  _T2D = Cyc_Absyn_gen_float_type(_T2C);
	  return _T2D;
	  ;
	}
      }
    case 5: 
      _T2E = _T9F.Int_c;
      _T2F = _T2E.val;
      _TA1 = _T2F.f0;
      _T30 = _T9F.Int_c;
      _T31 = _T30.val;
      _TA2 = _T31.f1;
      { enum Cyc_Absyn_Sign csn = _TA1;
	int i = _TA2;
	if (topt != 0) { goto _TL29;
	}
	_T33 = csn;
	_T34 = (int)_T33;
	if (_T34 != 1) { goto _TL2B;
	}
	_T32 = Cyc_Absyn_uint_type;
	goto _TL2C;
	_TL2B: _T32 = Cyc_Absyn_sint_type;
	_TL2C: return _T32;
	_TL29: _T35 = topt;
	_T36 = *_T35;
	{ void * _TA3 = Cyc_Absyn_compress(_T36);
	  void * _TA4;
	  enum Cyc_Absyn_Sign _TA5;
	  _T37 = (int *)_TA3;
	  _T38 = *_T37;
	  switch (_T38) {
	  case 0: 
	    _T39 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
	    _T3A = _T39->f1;
	    _T3B = (int *)_T3A;
	    _T3C = *_T3B;
	    switch (_T3C) {
	    case 1: 
	      _T3D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
	      _T3E = _T3D->f1;
	      _T3F = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T3E;
	      _T40 = _T3F->f2;
	      _T41 = (int)_T40;
	      switch (_T41) {
	      case Cyc_Absyn_Char_sz: 
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
		  _T42 = _TA6->f1;
		  { struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _TA7 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T42;
		    _TA5 = _TA7->f1;
		  }
		}{ enum Cyc_Absyn_Sign sn = _TA5;
		  _T43 = c;
		  _T44 = sn;
		  _T45 = i;
		  _T46 = (char)_T45;
		  *_T43 = Cyc_Absyn_Char_c(_T44,_T46);
		  _T47 = Cyc_Tcexp_tcConst(te,loc,0,c,e);
		  return _T47;
		}
	      case Cyc_Absyn_Short_sz: 
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
		  _T48 = _TA6->f1;
		  { struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _TA7 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T48;
		    _TA5 = _TA7->f1;
		  }
		}{ enum Cyc_Absyn_Sign sn = _TA5;
		  _T49 = c;
		  _T4A = sn;
		  _T4B = i;
		  _T4C = (short)_T4B;
		  *_T49 = Cyc_Absyn_Short_c(_T4A,_T4C);
		  _T4D = Cyc_Tcexp_tcConst(te,loc,0,c,e);
		  return _T4D;
		}
	      case Cyc_Absyn_Int_sz: 
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
		  _T4E = _TA6->f1;
		  { struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _TA7 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T4E;
		    _TA5 = _TA7->f1;
		  }
		}{ enum Cyc_Absyn_Sign sn = _TA5;
		  _TA5 = sn;
		  goto _LL2C;
		}
	      case Cyc_Absyn_Long_sz: 
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
		  _T4F = _TA6->f1;
		  { struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _TA7 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T4F;
		    _TA5 = _TA7->f1;
		  }
		}_LL2C: { enum Cyc_Absyn_Sign sn = _TA5;
		  _T50 = c;
		  *_T50 = Cyc_Absyn_Int_c(sn,i);
		  _T51 = Cyc_Tcexp_tcConst(te,loc,0,c,e);
		  return _T51;
		}
	      default: 
		goto _LL31;
	      }
	      ;
	    case 5: 
	      _T52 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
	      _T53 = _T52->f2;
	      if (_T53 == 0) { goto _TL30;
	      }
	      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
		_T54 = _TA6->f2;
		{ struct Cyc_List_List _TA7 = *_T54;
		  _T55 = _TA7.hd;
		  _TA4 = (void *)_T55;
		}
	      }{ void * t1 = _TA4;
		{ struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _TA6 = _cycalloc(sizeof(struct Cyc_Absyn_ValueofType_Absyn_Type_struct));
		  _TA6->tag = 9;
		  _T57 = i;
		  _T58 = (unsigned int)_T57;
		  _TA6->f1 = Cyc_Absyn_uint_exp(_T58,0U);
		  _T56 = (struct Cyc_Absyn_ValueofType_Absyn_Type_struct *)_TA6;
		}_T59 = (void *)_T56;
		_T5A = Cyc_Absyn_tag_type(_T59);
		return _T5A;
	      }_TL30: goto _LL31;
	    default: 
	      goto _LL31;
	    }
	    ;
	  case 4: 
	    if (i != 0) { goto _TL32;
	    }
	    { static struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct nullc = {0,
									    {.Null_c={1,
										      0}}};
	      _T5B = e;
	      _T5C = &nullc;
	      _T5D = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T5C;
	      _T5B->r = (void *)_T5D;
	      _T5E = c;
	      { union Cyc_Absyn_Cnst _TA6;
		(_TA6.Null_c).tag = 1U;
		(_TA6.Null_c).val = 0;
		_T5F = _TA6;
	      }*_T5E = _T5F;
	      _T60 = Cyc_Tcexp_tcConst(te,loc,topt,c,e);
	      return _T60;
	    }_TL32: goto _LL31;
	  default: 
	    _LL31: _T62 = csn;
	    _T63 = (int)_T62;
	    if (_T63 != 1) { goto _TL34;
	    }
	    _T61 = Cyc_Absyn_uint_type;
	    goto _TL35;
	    _TL34: _T61 = Cyc_Absyn_sint_type;
	    _TL35: return _T61;
	  }
	  ;
	}
      }
    case 1: 
      if (topt == 0) { goto _TL36;
      }
      _T64 = topt;
      _T65 = *_T64;
      { void * _TA3 = Cyc_Absyn_compress(_T65);
	void * _TA4;
	_T66 = (int *)_TA3;
	_T67 = *_T66;
	if (_T67 != 4) { goto _TL38;
	}
	{ struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TA5 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TA3;
	  _T68 = _TA5->f1;
	  _T69 = _T68.ptr_atts;
	  _TA4 = _T69.nullable;
	}{ void * nbl = _TA4;
	  _T6A = Cyc_Tcutil_force_type2bool(1,nbl);
	  if (_T6A) { goto _TL3A;
	  }else { goto _TL3C;
	  }
	  _TL3C: { struct Cyc_Warn_String_Warn_Warg_struct _TA5;
	    _TA5.tag = 0;
	    _TA5.f1 = _tag_fat("Used NULL when expecting a value of type ",
			       sizeof(char),42U);
	    _T6B = _TA5;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TA5 = _T6B;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _TA6;
	      _TA6.tag = 2;
	      _T6D = topt;
	      _TA6.f1 = *_T6D;
	      _T6C = _TA6;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _TA6 = _T6C;
	      void * _TA7[2];
	      _TA7[0] = &_TA5;
	      _TA7[1] = &_TA6;
	      _T6E = e;
	      _T6F = _T6E->loc;
	      _T70 = _tag_fat(_TA7,sizeof(void *),2);
	      Cyc_Warn_err2(_T6F,_T70);
	    }
	  }goto _TL3B;
	  _TL3A: _TL3B: _T71 = topt;
	  _T72 = *_T71;
	  return _T72;
	}_TL38: goto _LL33;
	_LL33: ;
      }goto _TL37;
      _TL36: _TL37: { struct Cyc_Absyn_PtrInfo pi = Cyc_Tcexp_fresh_pointer_type(te);
	(pi.ptr_atts).nullable = Cyc_Absyn_true_type;
	_T73 = Cyc_Absyn_pointer_type(pi);
	return _T73;
      }
    case 9: 
      _T74 = _T9F.String_c;
      _TA0 = _T74.val;
      { struct _fat_ptr s = _TA0;
	_T75 = s;
	_T76 = _get_fat_size(_T75,sizeof(char));
	string_numelts = (int)_T76;
	_TA0 = s;
	goto _LL1E;
      }
    default: 
      _T77 = _T9F.Wstring_c;
      _TA0 = _T77.val;
      _LL1E: { struct _fat_ptr s = _TA0;
	if (string_numelts != 0) { goto _TL3D;
	}
	string_numelts = Cyc_Tcexp_wchar_numelts(s);
	string_elt_typ = Cyc_Absyn_wchar_type();
	goto _TL3E;
	_TL3D: _TL3E: _T78 = Cyc_Absyn_Int_c(1U,string_numelts);
	_T79 = loc;
	{ struct Cyc_Absyn_Exp * elen = Cyc_Absyn_const_exp(_T78,_T79);
	  _T7A = elen;
	  _T7A->topt = Cyc_Absyn_uint_type;
	  _T7B = string_elt_typ;
	  _T7C = Cyc_Absyn_heap_rgn_type;
	  _T7D = Cyc_Absyn_al_qual_type;
	  _T7E = Cyc_Absyn_const_tqual(0U);
	  _T7F = Cyc_Absyn_thin_bounds_exp(elen);
	  _T80 = Cyc_Absyn_true_type;
	  _T81 = Cyc_Absyn_false_type;
	  { void * t = Cyc_Absyn_atb_type(_T7B,_T7C,_T7D,_T7E,_T7F,_T80,_T81);
	    if (topt != 0) { goto _TL3F;
	    }
	    _T82 = t;
	    return _T82;
	    _TL3F: _T83 = topt;
	    _T84 = *_T83;
	    { void * _TA3 = Cyc_Absyn_compress(_T84);
	      struct Cyc_Absyn_Tqual _TA4;
	      _T85 = (int *)_TA3;
	      _T86 = *_T85;
	      switch (_T86) {
	      case 5: 
		{ struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _TA5 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_TA3;
		  _T87 = _TA5->f1;
		  _TA4 = _T87.tq;
		}{ struct Cyc_Absyn_Tqual tq = _TA4;
		  _T88 = string_elt_typ;
		  _T89 = tq;
		  _T8A = elen;
		  _T8B = Cyc_Tcenv_lookup_type_vars(te);
		  _T8C = Cyc_Tcutil_any_bool(_T8B);
		  _T8D = Cyc_Absyn_array_type(_T88,_T89,_T8A,_T8C,0U);
		  return _T8D;
		}
	      case 4: 
		_T8E = e;
		_T8F = _T8E->loc;
		_T90 = t;
		_T91 = topt;
		_T92 = *_T91;
		{ enum Cyc_Absyn_Coercion c = Cyc_Subtype_coercible(_T8F,
								    _T90,
								    _T92);
		  _T93 = c;
		  _T94 = (int)_T93;
		  if (_T94 == 0) { goto _TL42;
		  }
		  _T95 = c;
		  _T96 = (int)_T95;
		  if (_T96 == 1) { goto _TL42;
		  }
		  _T97 = e;
		  _T97->topt = t;
		  _T98 = e;
		  _T99 = topt;
		  _T9A = *_T99;
		  Cyc_Tcutil_unchecked_cast(_T98,_T9A,4U);
		  _T9B = topt;
		  _T9C = *_T9B;
		  return _T9C;
		  _TL42: _T9D = t;
		  return _T9D;
		}
	      default: 
		_T9E = t;
		return _T9E;
	      }
	      ;
	    }
	  }
	}
      }
    }
    ;
  }
}
static void * Cyc_Tcexp_tcVar(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
			      void * * topt,struct Cyc_Absyn_Exp * e,void * * b) {
  void * * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  int (* _T4)(unsigned int,struct _fat_ptr);
  void * (* _T5)(unsigned int,struct _fat_ptr);
  unsigned int _T6;
  struct _fat_ptr _T7;
  struct Cyc_Tcenv_Tenv * _T8;
  unsigned int _T9;
  struct Cyc_Absyn_Vardecl * _TA;
  struct _tuple1 * _TB;
  struct Cyc_Absyn_Vardecl * _TC;
  void * _TD;
  struct Cyc_Absyn_Fndecl * _TE;
  struct Cyc_Absyn_Vardecl * _TF;
  struct Cyc_Tcenv_Tenv * _T10;
  unsigned int _T11;
  struct Cyc_Absyn_Fndecl * _T12;
  struct _tuple1 * _T13;
  void * _T14;
  struct Cyc_Tcenv_Tenv * _T15;
  long _T16;
  struct Cyc_Absyn_Vardecl * _T17;
  void * _T18;
  int * _T19;
  int _T1A;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1B;
  void * _T1C;
  int * _T1D;
  int _T1E;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct Cyc_Absyn_Exp * _T23;
  struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct * _T24;
  struct Cyc_Absyn_Vardecl * _T25;
  void * _T26;
  _T0 = _check_null(b);
  { void * _T27 = *_T0;
    struct Cyc_Absyn_Fndecl * _T28;
    struct Cyc_Absyn_Vardecl * _T29;
    struct _tuple1 * _T2A;
    _T1 = (int *)_T27;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      { struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct * _T2B = (struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)_T27;
	_T2A = _T2B->f1;
      }{ struct _tuple1 * q = _T2A;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T2B;
	  _T2B.tag = 0;
	  _T2B.f1 = _tag_fat("unresolved binding in tcVar",sizeof(char),28U);
	  _T3 = _T2B;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2B = _T3;
	  void * _T2C[1];
	  _T2C[0] = &_T2B;
	  _T5 = Cyc_Warn_impos_loc2;
	  { int (* _T2D)(unsigned int,struct _fat_ptr) = (int (*)(unsigned int,
								  struct _fat_ptr))_T5;
	    _T4 = _T2D;
	  }_T6 = loc;
	  _T7 = _tag_fat(_T2C,sizeof(void *),1);
	  _T4(_T6,_T7);
	}
      }
    case 1: 
      { struct Cyc_Absyn_Global_b_Absyn_Binding_struct * _T2B = (struct Cyc_Absyn_Global_b_Absyn_Binding_struct *)_T27;
	_T29 = _T2B->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T29;
	_T8 = te;
	_T9 = loc;
	_TA = vd;
	_TB = _TA->name;
	Cyc_Tcenv_lookup_ordinary_global(_T8,_T9,_TB,1);
	_TC = vd;
	_TD = _TC->type;
	return _TD;
      }
    case 2: 
      { struct Cyc_Absyn_Funname_b_Absyn_Binding_struct * _T2B = (struct Cyc_Absyn_Funname_b_Absyn_Binding_struct *)_T27;
	_T28 = _T2B->f1;
      }{ struct Cyc_Absyn_Fndecl * fd = _T28;
	_TE = fd;
	_TF = _TE->fn_vardecl;
	if (_TF != 0) { goto _TL45;
	}
	_T10 = te;
	_T11 = loc;
	_T12 = fd;
	_T13 = _T12->name;
	Cyc_Tcenv_lookup_ordinary_global(_T10,_T11,_T13,1);
	goto _TL46;
	_TL45: _TL46: _T14 = Cyc_Tcutil_fndecl2type(fd);
	return _T14;
      }
    case 5: 
      { struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T2B = (struct Cyc_Absyn_Pat_b_Absyn_Binding_struct *)_T27;
	_T29 = _T2B->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T29;
	_T29 = vd;
	goto _LLA;
      }
    case 4: 
      { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T2B = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T27;
	_T29 = _T2B->f1;
      }_LLA: { struct Cyc_Absyn_Vardecl * vd = _T29;
	_T29 = vd;
	goto _LLC;
      }
    default: 
      { struct Cyc_Absyn_Param_b_Absyn_Binding_struct * _T2B = (struct Cyc_Absyn_Param_b_Absyn_Binding_struct *)_T27;
	_T29 = _T2B->f1;
      }_LLC: { struct Cyc_Absyn_Vardecl * vd = _T29;
	_T15 = te;
	_T16 = _T15->allow_valueof;
	if (! _T16) { goto _TL47;
	}
	_T17 = vd;
	_T18 = _T17->type;
	{ void * _T2B = Cyc_Absyn_compress(_T18);
	  void * _T2C;
	  _T19 = (int *)_T2B;
	  _T1A = *_T19;
	  if (_T1A != 0) { goto _TL49;
	  }
	  _T1B = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T2B;
	  _T1C = _T1B->f1;
	  _T1D = (int *)_T1C;
	  _T1E = *_T1D;
	  if (_T1E != 5) { goto _TL4B;
	  }
	  _T1F = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T2B;
	  _T20 = _T1F->f2;
	  if (_T20 == 0) { goto _TL4D;
	  }
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T2B;
	    _T21 = _T2D->f2;
	    { struct Cyc_List_List _T2E = *_T21;
	      _T22 = _T2E.hd;
	      _T2C = (void *)_T22;
	    }
	  }{ void * i = _T2C;
	    _T23 = e;
	    { struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct * _T2D = _cycalloc(sizeof(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct));
	      _T2D->tag = 38;
	      _T2D->f1 = i;
	      _T24 = (struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct *)_T2D;
	    }_T23->r = (void *)_T24;
	    goto _LLD;
	  }_TL4D: goto _LL10;
	  _TL4B: goto _LL10;
	  _TL49: _LL10: goto _LLD;
	  _LLD: ;
	}goto _TL48;
	_TL47: _TL48: _T25 = vd;
	_T26 = _T25->type;
	return _T26;
      }
    }
    ;
  }
}
static void Cyc_Tcexp_check_format_args(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Exp * fmt,
					struct Cyc_Core_Opt * opt_args,int arg_cnt,
					struct Cyc_List_List * * alias_arg_exps,
					long isCproto,struct Cyc_List_List * (* type_getter)(struct Cyc_Tcenv_Tenv *,
											     struct _fat_ptr,
											     long,
											     unsigned int)) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T3;
  union Cyc_Absyn_Cnst _T4;
  struct _union_Cnst_String_c _T5;
  unsigned int _T6;
  union Cyc_Absyn_Cnst _T7;
  struct _union_Cnst_String_c _T8;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Exp * _TB;
  void * _TC;
  int * _TD;
  int _TE;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _TF;
  struct Cyc_Absyn_Exp * _T10;
  struct Cyc_Absyn_Exp * _T11;
  void * _T12;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T13;
  union Cyc_Absyn_Cnst _T14;
  struct _union_Cnst_String_c _T15;
  unsigned int _T16;
  struct Cyc_Absyn_Exp * _T17;
  void * _T18;
  union Cyc_Absyn_Cnst _T19;
  struct _union_Cnst_String_c _T1A;
  struct Cyc_Tcenv_Tenv * _T1B;
  struct _fat_ptr _T1C;
  long _T1D;
  struct Cyc_Absyn_Exp * _T1E;
  unsigned int _T1F;
  struct Cyc_Core_Opt * _T20;
  void * _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_List_List * _T23;
  void * _T24;
  struct Cyc_Tcenv_Tenv * _T25;
  void * * _T26;
  struct Cyc_Absyn_Exp * _T27;
  struct Cyc_List_List * _T28;
  struct Cyc_Absyn_Exp * _T29;
  void * _T2A;
  long * _T2B;
  long _T2C;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T2E;
  struct Cyc_Warn_String_Warn_Warg_struct _T2F;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T30;
  struct Cyc_Absyn_Exp * _T31;
  struct Cyc_Absyn_Exp * _T32;
  unsigned int _T33;
  struct _fat_ptr _T34;
  long _T35;
  struct Cyc_List_List * * _T36;
  struct Cyc_List_List * _T37;
  int _T38;
  struct Cyc_List_List * * _T39;
  struct Cyc_Absyn_Exp * _T3A;
  unsigned int _T3B;
  struct Cyc_List_List * _T3C;
  void * _T3D;
  struct Cyc_Absyn_Exp * _T3E;
  struct Cyc_List_List * _T3F;
  struct Cyc_List_List * _T40;
  struct Cyc_Warn_String_Warn_Warg_struct _T41;
  struct Cyc_Absyn_Exp * _T42;
  unsigned int _T43;
  struct _fat_ptr _T44;
  struct Cyc_Warn_String_Warn_Warg_struct _T45;
  struct Cyc_List_List * _T46;
  void * _T47;
  struct Cyc_Absyn_Exp * _T48;
  unsigned int _T49;
  struct _fat_ptr _T4A;
  struct Cyc_Tcenv_Tenv * _T4B;
  struct Cyc_List_List * _T4C;
  void * _T4D;
  struct Cyc_Absyn_Exp * _T4E;
  struct Cyc_List_List * _T4F;
  struct Cyc_Core_Opt * _T50;
  void * _T51;
  struct Cyc_Tcenv_Tenv * _T52;
  struct Cyc_List_List * _T53;
  void * _T54;
  struct Cyc_Absyn_Exp * _T55;
  struct Cyc_List_List * _T56;
  void * _T57;
  struct Cyc_Absyn_Exp * _T58;
  unsigned int _T59;
  struct Cyc_List_List * _T5A;
  struct Cyc_List_List * _T5B;
  void * _T5C;
  struct Cyc_Absyn_Exp * _T5D;
  void * _T5E;
  void * _T5F;
  struct Cyc_List_List * _T60;
  void * _T61;
  struct Cyc_Absyn_Exp * _T62;
  struct Cyc_List_List * _T63;
  _T0 = fmt;
  { void * _T64 = _T0->r;
    struct _fat_ptr _T65;
    _T1 = (int *)_T64;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      _T3 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T64;
      _T4 = _T3->f1;
      _T5 = _T4.String_c;
      _T6 = _T5.tag;
      if (_T6 != 9) { goto _TL50;
      }
      { struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T66 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T64;
	_T7 = _T66->f1;
	_T8 = _T7.String_c;
	_T65 = _T8.val;
      }{ struct _fat_ptr s = _T65;
	_T65 = s;
	goto _LL4;
      }_TL50: goto _LL5;
    case 14: 
      _T9 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T64;
      _TA = _T9->f2;
      _TB = (struct Cyc_Absyn_Exp *)_TA;
      _TC = _TB->r;
      _TD = (int *)_TC;
      _TE = *_TD;
      if (_TE != 0) { goto _TL52;
      }
      _TF = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T64;
      _T10 = _TF->f2;
      _T11 = (struct Cyc_Absyn_Exp *)_T10;
      _T12 = _T11->r;
      _T13 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T12;
      _T14 = _T13->f1;
      _T15 = _T14.String_c;
      _T16 = _T15.tag;
      if (_T16 != 9) { goto _TL54;
      }
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T66 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T64;
	_T17 = _T66->f2;
	{ struct Cyc_Absyn_Exp _T67 = *_T17;
	  _T18 = _T67.r;
	  { struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T68 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T18;
	    _T19 = _T68->f1;
	    _T1A = _T19.String_c;
	    _T65 = _T1A.val;
	  }
	}
      }_LL4: { struct _fat_ptr s = _T65;
	_T1B = te;
	_T1C = s;
	_T1D = isCproto;
	_T1E = fmt;
	_T1F = _T1E->loc;
	{ struct Cyc_List_List * desc_types = type_getter(_T1B,_T1C,_T1D,
							  _T1F);
	  if (opt_args != 0) { goto _TL56;
	  }
	  return;
	  _TL56: _T20 = opt_args;
	  _T21 = _T20->v;
	  { struct Cyc_List_List * args = (struct Cyc_List_List *)_T21;
	    _TL5B: if (desc_types != 0) { goto _TL5C;
	    }else { goto _TL5A;
	    }
	    _TL5C: if (args != 0) { goto _TL59;
	    }else { goto _TL5A;
	    }
	    _TL59: { long alias_coercion = 0;
	      _T22 = desc_types;
	      { void * t = _T22->hd;
		_T23 = args;
		_T24 = _T23->hd;
		{ struct Cyc_Absyn_Exp * e = (struct Cyc_Absyn_Exp *)_T24;
		  _T25 = te;
		  _T26 = &t;
		  _T27 = e;
		  Cyc_Tcexp_tcExp(_T25,_T26,_T27);
		  _T28 = Cyc_Tcenv_curr_aquals_bounds(te);
		  _T29 = e;
		  _T2A = t;
		  _T2B = &alias_coercion;
		  _T2C = Cyc_Tcutil_coerce_arg(_T28,_T29,_T2A,_T2B);
		  if (_T2C) { goto _TL5D;
		  }else { goto _TL5F;
		  }
		  _TL5F: { struct Cyc_Warn_String_Warn_Warg_struct _T66;
		    _T66.tag = 0;
		    _T66.f1 = _tag_fat("descriptor has type ",sizeof(char),
				       21U);
		    _T2D = _T66;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T66 = _T2D;
		    { struct Cyc_Warn_Typ_Warn_Warg_struct _T67;
		      _T67.tag = 2;
		      _T67.f1 = t;
		      _T2E = _T67;
		    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T67 = _T2E;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T68;
			_T68.tag = 0;
			_T68.f1 = _tag_fat(" but argument has type ",sizeof(char),
					   24U);
			_T2F = _T68;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T68 = _T2F;
			{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T69;
			  _T69.tag = 3;
			  _T31 = e;
			  _T69.f1 = _T31->topt;
			  _T30 = _T69;
			}{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T69 = _T30;
			  void * _T6A[4];
			  _T6A[0] = &_T66;
			  _T6A[1] = &_T67;
			  _T6A[2] = &_T68;
			  _T6A[3] = &_T69;
			  _T32 = e;
			  _T33 = _T32->loc;
			  _T34 = _tag_fat(_T6A,sizeof(void *),4);
			  Cyc_Tcexp_err_and_explain(_T33,_T34);
			}
		      }
		    }
		  }goto _TL5E;
		  _TL5D: _TL5E: _T35 = alias_coercion;
		  if (! _T35) { goto _TL60;
		  }
		  _T36 = alias_arg_exps;
		  { struct Cyc_List_List * _T66 = _cycalloc(sizeof(struct Cyc_List_List));
		    _T38 = arg_cnt;
		    _T66->hd = (void *)_T38;
		    _T39 = alias_arg_exps;
		    _T66->tl = *_T39;
		    _T37 = (struct Cyc_List_List *)_T66;
		  }*_T36 = _T37;
		  goto _TL61;
		  _TL60: _TL61: _T3A = e;
		  _T3B = _T3A->loc;
		  _T3C = Cyc_Tcenv_curr_aquals_bounds(te);
		  _T3D = t;
		  _T3E = e;
		  Cyc_Tcexp_check_consume(_T3B,_T3C,_T3D,_T3E);
		}
	      }
	    }_T3F = desc_types;
	    desc_types = _T3F->tl;
	    _T40 = args;
	    args = _T40->tl;
	    arg_cnt = arg_cnt + 1;
	    goto _TL5B;
	    _TL5A: if (desc_types == 0) { goto _TL62;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T66;
	      _T66.tag = 0;
	      _T66.f1 = _tag_fat("too few arguments",sizeof(char),18U);
	      _T41 = _T66;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T66 = _T41;
	      void * _T67[1];
	      _T67[0] = &_T66;
	      _T42 = fmt;
	      _T43 = _T42->loc;
	      _T44 = _tag_fat(_T67,sizeof(void *),1);
	      Cyc_Warn_err2(_T43,_T44);
	    }goto _TL63;
	    _TL62: _TL63: if (args == 0) { goto _TL64;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T66;
	      _T66.tag = 0;
	      _T66.f1 = _tag_fat("too many arguments",sizeof(char),19U);
	      _T45 = _T66;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T66 = _T45;
	      void * _T67[1];
	      _T67[0] = &_T66;
	      _T46 = args;
	      _T47 = _T46->hd;
	      _T48 = (struct Cyc_Absyn_Exp *)_T47;
	      _T49 = _T48->loc;
	      _T4A = _tag_fat(_T67,sizeof(void *),1);
	      Cyc_Warn_err2(_T49,_T4A);
	    }_TL69: if (args != 0) { goto _TL67;
	    }else { goto _TL68;
	    }
	    _TL67: _T4B = te;
	    _T4C = args;
	    _T4D = _T4C->hd;
	    _T4E = (struct Cyc_Absyn_Exp *)_T4D;
	    Cyc_Tcexp_tcExp(_T4B,0,_T4E);
	    _T4F = args;
	    args = _T4F->tl;
	    goto _TL69;
	    _TL68: goto _TL65;
	    _TL64: _TL65: return;
	  }
	}
      }_TL54: goto _LL5;
      _TL52: goto _LL5;
    default: 
      _LL5: if (opt_args != 0) { goto _TL6A;
      }
      return;
      _TL6A: _T50 = opt_args;
      _T51 = _T50->v;
      { struct Cyc_List_List * args = (struct Cyc_List_List *)_T51;
	_TL6F: if (args != 0) { goto _TL6D;
	}else { goto _TL6E;
	}
	_TL6D: _T52 = te;
	_T53 = args;
	_T54 = _T53->hd;
	_T55 = (struct Cyc_Absyn_Exp *)_T54;
	Cyc_Tcexp_tcExp(_T52,0,_T55);
	_T56 = args;
	_T57 = _T56->hd;
	_T58 = (struct Cyc_Absyn_Exp *)_T57;
	_T59 = _T58->loc;
	_T5A = Cyc_Tcenv_curr_aquals_bounds(te);
	_T5B = args;
	_T5C = _T5B->hd;
	_T5D = (struct Cyc_Absyn_Exp *)_T5C;
	_T5E = _T5D->topt;
	_T5F = _check_null(_T5E);
	_T60 = args;
	_T61 = _T60->hd;
	_T62 = (struct Cyc_Absyn_Exp *)_T61;
	Cyc_Tcexp_check_consume(_T59,_T5A,_T5F,_T62);
	_T63 = args;
	args = _T63->tl;
	goto _TL6F;
	_TL6E: ;
      }return;
    }
    ;
  }
}
static void * Cyc_Tcexp_tcUnPrimop(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				   void * * topt,enum Cyc_Absyn_Primop p,
				   struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  enum Cyc_Absyn_Primop _T3;
  int _T4;
  long _T5;
  struct Cyc_Warn_String_Warn_Warg_struct _T6;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T7;
  unsigned int _T8;
  struct _fat_ptr _T9;
  struct Cyc_Absyn_Exp * _TA;
  void * _TB;
  void * _TC;
  long _TD;
  struct Cyc_Warn_String_Warn_Warg_struct _TE;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TF;
  unsigned int _T10;
  struct _fat_ptr _T11;
  void * _T12;
  long _T13;
  struct Cyc_Warn_String_Warn_Warg_struct _T14;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T15;
  unsigned int _T16;
  struct _fat_ptr _T17;
  struct Cyc_Absyn_Exp * _T18;
  void * _T19;
  void * _T1A;
  void * _T1B;
  int * _T1C;
  int _T1D;
  void * _T1E;
  struct Cyc_Absyn_PtrInfo _T1F;
  struct Cyc_Absyn_PtrAtts _T20;
  long _T21;
  unsigned int _T22;
  void * _T23;
  void * _T24;
  void * _T25;
  void * _T26;
  long _T27;
  struct Cyc_Tcenv_Tenv * _T28;
  long _T29;
  struct Cyc_Warn_String_Warn_Warg_struct _T2A;
  unsigned int _T2B;
  struct _fat_ptr _T2C;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T2E;
  unsigned int _T2F;
  struct _fat_ptr _T30;
  void * _T31;
  long _T32;
  enum Cyc_Absyn_Coercion _T33;
  int _T34;
  struct Cyc_Warn_String_Warn_Warg_struct _T35;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T36;
  unsigned int _T37;
  struct _fat_ptr _T38;
  void * _T39;
  struct Cyc_Warn_String_Warn_Warg_struct _T3A;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3B;
  unsigned int _T3C;
  struct _fat_ptr _T3D;
  void * _T3E;
  void * _T3F;
  void * _T40;
  int * _T41;
  int _T42;
  void * _T43;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T44;
  void * _T45;
  int * _T46;
  unsigned int _T47;
  struct Cyc_Warn_String_Warn_Warg_struct _T48;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T49;
  unsigned int _T4A;
  struct _fat_ptr _T4B;
  void * _T4C;
  struct Cyc_Warn_String_Warn_Warg_struct _T4D;
  int (* _T4E)(unsigned int,struct _fat_ptr);
  void * (* _T4F)(unsigned int,struct _fat_ptr);
  unsigned int _T50;
  struct _fat_ptr _T51;
  _T0 = e;
  _T1 = _T0->topt;
  _T2 = _check_null(_T1);
  { void * t = Cyc_Absyn_compress(_T2);
    _T3 = p;
    _T4 = (int)_T3;
    switch (_T4) {
    case Cyc_Absyn_Plus: 
      goto _LL4;
    case Cyc_Absyn_Minus: 
      _LL4: _T5 = Cyc_Tcutil_is_numeric(e);
      if (_T5) { goto _TL71;
      }else { goto _TL73;
      }
      _TL73: { struct Cyc_Warn_String_Warn_Warg_struct _T52;
	_T52.tag = 0;
	_T52.f1 = _tag_fat("expecting numeric type but found ",sizeof(char),
			   34U);
	_T6 = _T52;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _T6;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T53;
	  _T53.tag = 2;
	  _T53.f1 = t;
	  _T7 = _T53;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T53 = _T7;
	  void * _T54[2];
	  _T54[0] = &_T52;
	  _T54[1] = &_T53;
	  _T8 = loc;
	  _T9 = _tag_fat(_T54,sizeof(void *),2);
	  Cyc_Warn_err2(_T8,_T9);
	}
      }goto _TL72;
      _TL71: _TL72: _TA = e;
      _TB = _TA->topt;
      _TC = _check_null(_TB);
      return _TC;
    case Cyc_Absyn_Not: 
      Cyc_Tcexp_check_contains_assign(e);
      _TD = Cyc_Tcutil_coerce_to_bool(e);
      if (_TD) { goto _TL74;
      }else { goto _TL76;
      }
      _TL76: { struct Cyc_Warn_String_Warn_Warg_struct _T52;
	_T52.tag = 0;
	_T52.f1 = _tag_fat("expecting integral or * type but found ",sizeof(char),
			   40U);
	_TE = _T52;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _TE;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T53;
	  _T53.tag = 2;
	  _T53.f1 = t;
	  _TF = _T53;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T53 = _TF;
	  void * _T54[2];
	  _T54[0] = &_T52;
	  _T54[1] = &_T53;
	  _T10 = loc;
	  _T11 = _tag_fat(_T54,sizeof(void *),2);
	  Cyc_Warn_err2(_T10,_T11);
	}
      }goto _TL75;
      _TL74: _TL75: _T12 = Cyc_Absyn_sint_type;
      return _T12;
    case Cyc_Absyn_Bitnot: 
      _T13 = Cyc_Tcutil_is_integral(e);
      if (_T13) { goto _TL77;
      }else { goto _TL79;
      }
      _TL79: { struct Cyc_Warn_String_Warn_Warg_struct _T52;
	_T52.tag = 0;
	_T52.f1 = _tag_fat("expecting integral type but found ",sizeof(char),
			   35U);
	_T14 = _T52;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _T14;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T53;
	  _T53.tag = 2;
	  _T53.f1 = t;
	  _T15 = _T53;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T53 = _T15;
	  void * _T54[2];
	  _T54[0] = &_T52;
	  _T54[1] = &_T53;
	  _T16 = loc;
	  _T17 = _tag_fat(_T54,sizeof(void *),2);
	  Cyc_Warn_err2(_T16,_T17);
	}
      }goto _TL78;
      _TL77: _TL78: _T18 = e;
      _T19 = _T18->topt;
      _T1A = _check_null(_T19);
      return _T1A;
    case Cyc_Absyn_Numelts: 
      { void * _T52;
	_T1B = t;
	_T1C = (int *)_T1B;
	_T1D = *_T1C;
	if (_T1D != 4) { goto _TL7A;
	}
	_T1E = t;
	{ struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T53 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T1E;
	  _T1F = _T53->f1;
	  _T20 = _T1F.ptr_atts;
	  _T52 = _T20.bounds;
	}{ void * b = _T52;
	  _T21 = Cyc_Tcutil_is_cvar_type(b);
	  if (! _T21) { goto _TL7C;
	  }
	  _T22 = loc;
	  _T23 = Cyc_Tcutil_ptrbnd_cvar_equivalent(b);
	  _T24 = _check_null(_T23);
	  _T25 = Cyc_Absyn_fatconst();
	  _T26 = Cyc_BansheeIf_equality_constraint(_T24,_T25);
	  Cyc_BansheeIf_add_constraint(_T22,_T26);
	  goto _TL7D;
	  _TL7C: { struct Cyc_Absyn_Exp * eopt = Cyc_Tcutil_get_bounds_exp(Cyc_Absyn_fat_bound_type,
									   b);
	    if (eopt == 0) { goto _TL7E;
	    }
	    _T27 = Cyc_Evexp_c_can_eval(eopt);
	    if (_T27) { goto _TL7E;
	    }else { goto _TL80;
	    }
	    _TL80: _T28 = te;
	    _T29 = _T28->allow_valueof;
	    if (_T29) { goto _TL7E;
	    }else { goto _TL81;
	    }
	    _TL81: { struct Cyc_Warn_String_Warn_Warg_struct _T53;
	      _T53.tag = 0;
	      _T53.f1 = _tag_fat("cannot use numelts on a pointer with abstract bounds",
				 sizeof(char),53U);
	      _T2A = _T53;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T53 = _T2A;
	      void * _T54[1];
	      _T54[0] = &_T53;
	      _T2B = loc;
	      _T2C = _tag_fat(_T54,sizeof(void *),1);
	      Cyc_Warn_err2(_T2B,_T2C);
	    }goto _TL7F;
	    _TL7E: _TL7F: ;
	  }_TL7D: goto _LLF;
	}_TL7A: { struct Cyc_Warn_String_Warn_Warg_struct _T53;
	  _T53.tag = 0;
	  _T53.f1 = _tag_fat("numelts requires pointer type, not ",sizeof(char),
			     36U);
	  _T2D = _T53;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T53 = _T2D;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T54;
	    _T54.tag = 2;
	    _T54.f1 = t;
	    _T2E = _T54;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T54 = _T2E;
	    void * _T55[2];
	    _T55[0] = &_T53;
	    _T55[1] = &_T54;
	    _T2F = loc;
	    _T30 = _tag_fat(_T55,sizeof(void *),2);
	    Cyc_Warn_err2(_T2F,_T30);
	  }
	}_LLF: ;
      }_T31 = Cyc_Absyn_uint_type;
      return _T31;
    case Cyc_Absyn_Tagof: 
      { struct Cyc_Absyn_PtrInfo pinfo = Cyc_Tcexp_fresh_pointer_type(te);
	(pinfo.ptr_atts).nullable = Cyc_Absyn_false_type;
	(pinfo.ptr_atts).bounds = Cyc_Absyn_bounds_one();
	(pinfo.ptr_atts).zero_term = Cyc_Absyn_false_type;
	{ void * p = Cyc_Absyn_pointer_type(pinfo);
	  _T32 = Cyc_Tcutil_is_pointer_type(t);
	  if (! _T32) { goto _TL82;
	  }
	  { enum Cyc_Absyn_Coercion coercion = Cyc_Subtype_coercible_exact(loc,
									   t,
									   p);
	    _T33 = coercion;
	    _T34 = (int)_T33;
	    if (_T34 != 0) { goto _TL84;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T52;
	      _T52.tag = 0;
	      _T52.f1 = _tag_fat("expecting @thin@numelts(1)@nozeroterm pointer type but found %s",
				 sizeof(char),64U);
	      _T35 = _T52;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _T35;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T53;
		_T53.tag = 2;
		_T53.f1 = t;
		_T36 = _T53;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T53 = _T36;
		void * _T54[2];
		_T54[0] = &_T52;
		_T54[1] = &_T53;
		_T37 = loc;
		_T38 = _tag_fat(_T54,sizeof(void *),2);
		Cyc_Warn_err2(_T37,_T38);
	      }
	    }_T39 = Cyc_Absyn_uint_type;
	    return _T39;
	    _TL84: ;
	  }goto _TL83;
	  _TL82: { struct Cyc_Warn_String_Warn_Warg_struct _T52;
	    _T52.tag = 0;
	    _T52.f1 = _tag_fat("expecting @thin@numelts(1)@nozeroterm pointer type but found %s",
			       sizeof(char),64U);
	    _T3A = _T52;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _T3A;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T53;
	      _T53.tag = 2;
	      _T53.f1 = t;
	      _T3B = _T53;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T53 = _T3B;
	      void * _T54[2];
	      _T54[0] = &_T52;
	      _T54[1] = &_T53;
	      _T3C = loc;
	      _T3D = _tag_fat(_T54,sizeof(void *),2);
	      Cyc_Warn_err2(_T3C,_T3D);
	    }
	  }_T3E = Cyc_Absyn_uint_type;
	  return _T3E;
	  _TL83: _T3F = Cyc_Tcutil_pointer_elt_type(p);
	  { void * elt_type = Cyc_Absyn_compress(_T3F);
	    void * rgn_type = Cyc_Tcutil_pointer_region(p);
	    _T40 = elt_type;
	    _T41 = (int *)_T40;
	    _T42 = *_T41;
	    if (_T42 != 0) { goto _TL86;
	    }
	    _T43 = elt_type;
	    _T44 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T43;
	    _T45 = _T44->f1;
	    _T46 = (int *)_T45;
	    _T47 = *_T46;
	    switch (_T47) {
	    case 22: 
	      goto _LL14;
	    case 23: 
	      goto _LL14;
	    default: 
	      goto _LL19;
	    }
	    goto _TL87;
	    _TL86: _LL19: { struct Cyc_Warn_String_Warn_Warg_struct _T52;
	      _T52.tag = 0;
	      _T52.f1 = _tag_fat("expecting pointer to datatype but found %s",
				 sizeof(char),43U);
	      _T48 = _T52;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _T48;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T53;
		_T53.tag = 2;
		_T53.f1 = elt_type;
		_T49 = _T53;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T53 = _T49;
		void * _T54[2];
		_T54[0] = &_T52;
		_T54[1] = &_T53;
		_T4A = loc;
		_T4B = _tag_fat(_T54,sizeof(void *),2);
		Cyc_Warn_err2(_T4A,_T4B);
	      }
	    }_TL87: _LL14: Cyc_Tcenv_check_effect_accessible(te,loc,rgn_type);
	    _T4C = Cyc_Absyn_uint_type;
	    return _T4C;
	  }
	}
      }
    default: 
      { struct Cyc_Warn_String_Warn_Warg_struct _T52;
	_T52.tag = 0;
	_T52.f1 = _tag_fat("Non-unary primop",sizeof(char),17U);
	_T4D = _T52;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _T4D;
	void * _T53[1];
	_T53[0] = &_T52;
	_T4F = Cyc_Warn_impos_loc2;
	{ int (* _T54)(unsigned int,struct _fat_ptr) = (int (*)(unsigned int,
								struct _fat_ptr))_T4F;
	  _T4E = _T54;
	}_T50 = loc;
	_T51 = _tag_fat(_T53,sizeof(void *),1);
	_T4E(_T50,_T51);
      }
    }
    ;
  }
}
static void * Cyc_Tcexp_arith_convert(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Exp * e1,
				      struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  void * _T3;
  long _T4;
  long _T5;
  void * _T6;
  _T0 = e1;
  _T1 = _T0->topt;
  { void * t1 = _check_null(_T1);
    _T2 = e2;
    _T3 = _T2->topt;
    { void * t2 = _check_null(_T3);
      void * new_typ = Cyc_Tcutil_max_arithmetic_type(t1,t2);
      _T4 = Cyc_Unify_unify(t1,new_typ);
      if (_T4) { goto _TL89;
      }else { goto _TL8B;
      }
      _TL8B: Cyc_Tcutil_unchecked_cast(e1,new_typ,1U);
      goto _TL8A;
      _TL89: _TL8A: _T5 = Cyc_Unify_unify(t2,new_typ);
      if (_T5) { goto _TL8C;
      }else { goto _TL8E;
      }
      _TL8E: Cyc_Tcutil_unchecked_cast(e2,new_typ,1U);
      goto _TL8D;
      _TL8C: _TL8D: _T6 = new_typ;
      return _T6;
    }
  }
}
static void * Cyc_Tcexp_tcArithBinop(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Exp * e1,
				     struct Cyc_Absyn_Exp * e2,long (* checker)(struct Cyc_Absyn_Exp *)) {
  long _T0;
  void * _T1;
  struct Cyc_Warn_String_Warn_Warg_struct _T2;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Warn_String_Warn_Warg_struct _T5;
  struct Cyc_Tcenv_Tenv * _T6;
  struct Cyc_Absyn_Exp * _T7;
  unsigned int _T8;
  struct _fat_ptr _T9;
  long _TA;
  void * _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _TD;
  struct Cyc_Absyn_Exp * _TE;
  struct Cyc_Warn_String_Warn_Warg_struct _TF;
  struct Cyc_Tcenv_Tenv * _T10;
  struct Cyc_Absyn_Exp * _T11;
  unsigned int _T12;
  struct _fat_ptr _T13;
  void * _T14;
  _T0 = checker(e1);
  if (_T0) { goto _TL8F;
  }else { goto _TL91;
  }
  _TL91: { struct Cyc_Warn_String_Warn_Warg_struct _T15;
    _T15.tag = 0;
    _T15.f1 = _tag_fat("type ",sizeof(char),6U);
    _T2 = _T15;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T15 = _T2;
    { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T16;
      _T16.tag = 3;
      _T4 = e1;
      _T16.f1 = _T4->topt;
      _T3 = _T16;
    }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T16 = _T3;
      { struct Cyc_Warn_String_Warn_Warg_struct _T17;
	_T17.tag = 0;
	_T17.f1 = _tag_fat(" cannot be used here",sizeof(char),21U);
	_T5 = _T17;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T17 = _T5;
	void * _T18[3];
	_T18[0] = &_T15;
	_T18[1] = &_T16;
	_T18[2] = &_T17;
	_T6 = te;
	_T7 = e1;
	_T8 = _T7->loc;
	_T9 = _tag_fat(_T18,sizeof(void *),3);
	_T1 = Cyc_Tcexp_expr_err(_T6,_T8,0,_T9);
      }
    }
  }return _T1;
  _TL8F: _TA = checker(e2);
  if (_TA) { goto _TL92;
  }else { goto _TL94;
  }
  _TL94: { struct Cyc_Warn_String_Warn_Warg_struct _T15;
    _T15.tag = 0;
    _T15.f1 = _tag_fat("type ",sizeof(char),6U);
    _TC = _T15;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T15 = _TC;
    { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T16;
      _T16.tag = 3;
      _TE = e2;
      _T16.f1 = _TE->topt;
      _TD = _T16;
    }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T16 = _TD;
      { struct Cyc_Warn_String_Warn_Warg_struct _T17;
	_T17.tag = 0;
	_T17.f1 = _tag_fat(" cannot be used here",sizeof(char),21U);
	_TF = _T17;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T17 = _TF;
	void * _T18[3];
	_T18[0] = &_T15;
	_T18[1] = &_T16;
	_T18[2] = &_T17;
	_T10 = te;
	_T11 = e2;
	_T12 = _T11->loc;
	_T13 = _tag_fat(_T18,sizeof(void *),3);
	_TB = Cyc_Tcexp_expr_err(_T10,_T12,0,_T13);
      }
    }
  }return _TB;
  _TL92: _T14 = Cyc_Tcexp_arith_convert(te,e1,e2);
  return _T14;
}
static void * Cyc_Tcexp_tcPlus(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Exp * e1,
			       struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  struct Cyc_Absyn_Exp * _T3;
  void * _T4;
  void * _T5;
  void * _T6;
  int * _T7;
  int _T8;
  void * _T9;
  struct Cyc_Absyn_PtrInfo _TA;
  struct Cyc_Absyn_PtrInfo _TB;
  struct Cyc_Absyn_PtrInfo _TC;
  struct Cyc_Absyn_PtrAtts _TD;
  struct Cyc_Absyn_PtrInfo _TE;
  struct Cyc_Absyn_PtrAtts _TF;
  struct Cyc_Absyn_PtrInfo _T10;
  struct Cyc_Absyn_PtrAtts _T11;
  struct Cyc_Absyn_PtrInfo _T12;
  struct Cyc_Absyn_PtrAtts _T13;
  struct Cyc_Absyn_PtrInfo _T14;
  struct Cyc_Absyn_PtrAtts _T15;
  struct Cyc_Absyn_PtrInfo _T16;
  struct Cyc_Absyn_PtrAtts _T17;
  struct Cyc_Absyn_Kind * _T18;
  struct Cyc_Absyn_Kind * _T19;
  struct Cyc_Absyn_Kind * _T1A;
  long _T1B;
  struct Cyc_Warn_String_Warn_Warg_struct _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  unsigned int _T1E;
  struct _fat_ptr _T1F;
  struct Cyc_List_List * _T20;
  void * _T21;
  long _T22;
  struct Cyc_Warn_String_Warn_Warg_struct _T23;
  struct Cyc_Absyn_Exp * _T24;
  unsigned int _T25;
  struct _fat_ptr _T26;
  long _T27;
  struct Cyc_Warn_String_Warn_Warg_struct _T28;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T29;
  struct Cyc_Absyn_Exp * _T2A;
  unsigned int _T2B;
  struct _fat_ptr _T2C;
  long _T2D;
  void * _T2E;
  long _T2F;
  long _T30;
  struct Cyc_Warn_String_Warn_Warg_struct _T31;
  struct Cyc_Absyn_Exp * _T32;
  unsigned int _T33;
  struct _fat_ptr _T34;
  struct Cyc_Absyn_Exp * _T35;
  unsigned int _T36;
  void * _T37;
  void * _T38;
  void * _T39;
  long _T3A;
  struct Cyc_Warn_String_Warn_Warg_struct _T3B;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3C;
  struct Cyc_Absyn_Exp * _T3D;
  unsigned int _T3E;
  struct _fat_ptr _T3F;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T40;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T41;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T42;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T43;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T44;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T45;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T46;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T47;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T48;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T49;
  struct Cyc_Absyn_Exp * _T4A;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T4B;
  void * _T4C;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T4D;
  void * _T4E;
  struct Cyc_Tcenv_Tenv * _T4F;
  struct Cyc_Absyn_Exp * _T50;
  struct Cyc_Absyn_Exp * _T51;
  long (* _T52)(struct Cyc_Absyn_Exp *);
  void * _T53;
  _T0 = e1;
  _T1 = _T0->topt;
  _T2 = _check_null(_T1);
  { void * t1 = Cyc_Absyn_compress(_T2);
    _T3 = e2;
    _T4 = _T3->topt;
    _T5 = _check_null(_T4);
    { void * t2 = Cyc_Absyn_compress(_T5);
      void * _T54;
      void * _T55;
      void * _T56;
      void * _T57;
      void * _T58;
      void * _T59;
      struct Cyc_Absyn_Tqual _T5A;
      void * _T5B;
      _T6 = t1;
      _T7 = (int *)_T6;
      _T8 = *_T7;
      if (_T8 != 4) { goto _TL95;
      }
      _T9 = t1;
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T5C = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T9;
	_TA = _T5C->f1;
	_T5B = _TA.elt_type;
	_TB = _T5C->f1;
	_T5A = _TB.elt_tq;
	_TC = _T5C->f1;
	_TD = _TC.ptr_atts;
	_T59 = _TD.eff;
	_TE = _T5C->f1;
	_TF = _TE.ptr_atts;
	_T58 = _TF.nullable;
	_T10 = _T5C->f1;
	_T11 = _T10.ptr_atts;
	_T57 = _T11.bounds;
	_T12 = _T5C->f1;
	_T13 = _T12.ptr_atts;
	_T56 = _T13.zero_term;
	_T14 = _T5C->f1;
	_T15 = _T14.ptr_atts;
	_T55 = _T15.autoreleased;
	_T16 = _T5C->f1;
	_T17 = _T16.ptr_atts;
	_T54 = _T17.aqual;
      }{ void * et = _T5B;
	struct Cyc_Absyn_Tqual tq = _T5A;
	void * r = _T59;
	void * n = _T58;
	void * b = _T57;
	void * zt = _T56;
	void * rel = _T55;
	void * aq = _T54;
	_T18 = Cyc_Tcutil_type_kind(et);
	_T19 = &Cyc_Kinds_mk;
	_T1A = (struct Cyc_Absyn_Kind *)_T19;
	_T1B = Cyc_Kinds_kind_leq(_T18,_T1A);
	if (_T1B) { goto _TL97;
	}else { goto _TL99;
	}
	_TL99: { struct Cyc_Warn_String_Warn_Warg_struct _T5C;
	  _T5C.tag = 0;
	  _T5C.f1 = _tag_fat("can't do arithmetic on abstract pointer type",
			     sizeof(char),45U);
	  _T1C = _T5C;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T5C = _T1C;
	  void * _T5D[1];
	  _T5D[0] = &_T5C;
	  _T1D = e1;
	  _T1E = _T1D->loc;
	  _T1F = _tag_fat(_T5D,sizeof(void *),1);
	  Cyc_Warn_err2(_T1E,_T1F);
	}goto _TL98;
	_TL97: _TL98: _T20 = Cyc_Tcenv_curr_aquals_bounds(te);
	_T21 = t1;
	_T22 = Cyc_Tcutil_is_noalias_pointer(_T20,_T21,1);
	if (! _T22) { goto _TL9A;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T5C;
	  _T5C.tag = 0;
	  _T5C.f1 = _tag_fat("can't do arithmetic on unique pointer",sizeof(char),
			     38U);
	  _T23 = _T5C;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T5C = _T23;
	  void * _T5D[1];
	  _T5D[0] = &_T5C;
	  _T24 = e1;
	  _T25 = _T24->loc;
	  _T26 = _tag_fat(_T5D,sizeof(void *),1);
	  Cyc_Warn_err2(_T25,_T26);
	}goto _TL9B;
	_TL9A: _TL9B: _T27 = Cyc_Tcutil_coerce_sint_type(e2);
	if (_T27) { goto _TL9C;
	}else { goto _TL9E;
	}
	_TL9E: { struct Cyc_Warn_String_Warn_Warg_struct _T5C;
	  _T5C.tag = 0;
	  _T5C.f1 = _tag_fat("expecting int but found ",sizeof(char),25U);
	  _T28 = _T5C;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T5C = _T28;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T5D;
	    _T5D.tag = 2;
	    _T5D.f1 = t2;
	    _T29 = _T5D;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T5D = _T29;
	    void * _T5E[2];
	    _T5E[0] = &_T5C;
	    _T5E[1] = &_T5D;
	    _T2A = e2;
	    _T2B = _T2A->loc;
	    _T2C = _tag_fat(_T5E,sizeof(void *),2);
	    Cyc_Warn_err2(_T2B,_T2C);
	  }
	}goto _TL9D;
	_TL9C: _TL9D: _T2D = Cyc_Tcutil_is_cvar_type(b);
	if (_T2D) { goto _TL9F;
	}else { goto _TLA1;
	}
	_TLA1: { struct Cyc_Absyn_Exp * eopt = Cyc_Tcutil_get_bounds_exp(Cyc_Absyn_fat_bound_type,
									 b);
	  if (eopt != 0) { goto _TLA2;
	  }
	  _T2E = t1;
	  return _T2E;
	  _TLA2: _T2F = Cyc_Tcutil_force_type2bool(0,zt);
	  if (! _T2F) { goto _TLA4;
	  }
	  { struct _tuple14 _T5C = Cyc_Evexp_eval_const_uint_exp(eopt);
	    long _T5D;
	    unsigned int _T5E;
	    _T5E = _T5C.f0;
	    _T5D = _T5C.f1;
	    { unsigned int i = _T5E;
	      long known = _T5D;
	      _T30 = known;
	      if (! _T30) { goto _TLA6;
	      }
	      if (i != 1U) { goto _TLA6;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T5F;
		_T5F.tag = 0;
		_T5F.f1 = _tag_fat("pointer arithmetic on thin, zero-terminated pointer may be expensive.",
				   sizeof(char),70U);
		_T31 = _T5F;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F = _T31;
		void * _T60[1];
		_T60[0] = &_T5F;
		_T32 = e1;
		_T33 = _T32->loc;
		_T34 = _tag_fat(_T60,sizeof(void *),1);
		Cyc_Warn_warn2(_T33,_T34);
	      }goto _TLA7;
	      _TLA6: _TLA7: ;
	    }
	  }goto _TLA5;
	  _TLA4: _TLA5: ;
	}goto _TLA0;
	_TL9F: _T35 = e1;
	_T36 = _T35->loc;
	_T37 = b;
	_T38 = Cyc_Absyn_fatconst();
	_T39 = Cyc_BansheeIf_equality_constraint(_T37,_T38);
	_T3A = Cyc_BansheeIf_add_constraint(_T36,_T39);
	if (_T3A) { goto _TLA8;
	}else { goto _TLAA;
	}
	_TLAA: { struct Cyc_Warn_String_Warn_Warg_struct _T5C;
	  _T5C.tag = 0;
	  _T5C.f1 = _tag_fat("Unable to determine bound on pointer type ",
			     sizeof(char),43U);
	  _T3B = _T5C;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T5C = _T3B;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T5D;
	    _T5D.tag = 2;
	    _T5D.f1 = t1;
	    _T3C = _T5D;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T5D = _T3C;
	    void * _T5E[2];
	    _T5E[0] = &_T5C;
	    _T5E[1] = &_T5D;
	    _T3D = e1;
	    _T3E = _T3D->loc;
	    _T3F = _tag_fat(_T5E,sizeof(void *),2);
	    Cyc_Warn_err2(_T3E,_T3F);
	  }
	}goto _TLA9;
	_TLA8: _TLA9: _TLA0: { struct Cyc_Absyn_PointerType_Absyn_Type_struct * new_t1;
	  new_t1 = _cycalloc(sizeof(struct Cyc_Absyn_PointerType_Absyn_Type_struct));
	  _T40 = new_t1;
	  _T40->tag = 4;
	  _T41 = new_t1;
	  (_T41->f1).elt_type = et;
	  _T42 = new_t1;
	  (_T42->f1).elt_tq = tq;
	  _T43 = new_t1;
	  ((_T43->f1).ptr_atts).eff = r;
	  _T44 = new_t1;
	  ((_T44->f1).ptr_atts).nullable = Cyc_Absyn_true_type;
	  _T45 = new_t1;
	  ((_T45->f1).ptr_atts).bounds = Cyc_Absyn_fat_bound_type;
	  _T46 = new_t1;
	  ((_T46->f1).ptr_atts).zero_term = zt;
	  _T47 = new_t1;
	  ((_T47->f1).ptr_atts).ptrloc = 0;
	  _T48 = new_t1;
	  ((_T48->f1).ptr_atts).autoreleased = rel;
	  _T49 = new_t1;
	  ((_T49->f1).ptr_atts).aqual = aq;
	  _T4A = e1;
	  _T4B = new_t1;
	  _T4C = (void *)_T4B;
	  Cyc_Tcutil_unchecked_cast(_T4A,_T4C,4U);
	  _T4D = new_t1;
	  _T4E = (void *)_T4D;
	  return _T4E;
	}
      }_TL95: _T4F = te;
      _T50 = e1;
      _T51 = e2;
      _T52 = Cyc_Tcutil_is_numeric;
      _T53 = Cyc_Tcexp_tcArithBinop(_T4F,_T50,_T51,_T52);
      return _T53;
      ;
    }
  }
}
static void * Cyc_Tcexp_relqual(void * t) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Absyn_PtrInfo _T4;
  struct Cyc_Absyn_PtrAtts _T5;
  void * _T6;
  void * _T7;
  void * _T8;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 4) { goto _TLAB;
  }
  _T3 = t;
  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T9 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T3;
    _T4 = _T9->f1;
    _T5 = _T4.ptr_atts;
    _T8 = _T5.autoreleased;
  }{ void * rel = _T8;
    _T6 = rel;
    return _T6;
  }_TLAB: _T7 = Cyc_Absyn_false_type;
  return _T7;
  ;
}
static void * Cyc_Tcexp_tcMinus(struct Cyc_Tcenv_Tenv * te,void * * topt,
				struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  void * _T3;
  long _T4;
  long _T5;
  struct Cyc_Tcenv_Tenv * _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Absyn_Exp * _T8;
  long (* _T9)(struct Cyc_Absyn_Exp *);
  void * _TA;
  long _TB;
  void * * _TC;
  unsigned int _TD;
  void * * _TE;
  void * _TF;
  long _T10;
  void * * _T11;
  unsigned int _T12;
  long _T13;
  void * _T14;
  long _T15;
  struct Cyc_Absyn_Exp * _T16;
  unsigned int _T17;
  void * _T18;
  void * _T19;
  void * _T1A;
  long _T1B;
  struct Cyc_Warn_String_Warn_Warg_struct _T1C;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T1D;
  struct Cyc_Absyn_Exp * _T1E;
  unsigned int _T1F;
  struct _fat_ptr _T20;
  void * _T21;
  long _T22;
  void * _T23;
  long _T24;
  struct Cyc_Absyn_Exp * _T25;
  unsigned int _T26;
  void * _T27;
  void * _T28;
  void * _T29;
  long _T2A;
  struct Cyc_Warn_String_Warn_Warg_struct _T2B;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  unsigned int _T2E;
  struct _fat_ptr _T2F;
  void * _T30;
  struct Cyc_Absyn_Exp * _T31;
  unsigned int _T32;
  void * _T33;
  void * _T34;
  enum Cyc_Absyn_Coercion _T35;
  int _T36;
  struct Cyc_Warn_String_Warn_Warg_struct _T37;
  struct Cyc_Warn_String_Warn_Warg_struct _T38;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T39;
  struct Cyc_Warn_String_Warn_Warg_struct _T3A;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3B;
  struct Cyc_Warn_String_Warn_Warg_struct _T3C;
  struct Cyc_Absyn_Exp * _T3D;
  unsigned int _T3E;
  struct _fat_ptr _T3F;
  struct Cyc_Absyn_Kind * _T40;
  struct Cyc_Absyn_Kind * _T41;
  struct Cyc_Absyn_Kind * _T42;
  long _T43;
  struct Cyc_Warn_String_Warn_Warg_struct _T44;
  struct Cyc_Absyn_Exp * _T45;
  unsigned int _T46;
  struct _fat_ptr _T47;
  struct Cyc_List_List * _T48;
  void * _T49;
  long _T4A;
  struct Cyc_Warn_String_Warn_Warg_struct _T4B;
  struct Cyc_Absyn_Exp * _T4C;
  unsigned int _T4D;
  struct _fat_ptr _T4E;
  long _T4F;
  long _T50;
  void * _T51;
  long _T52;
  struct Cyc_Absyn_Exp * _T53;
  void * _T54;
  void * _T55;
  void * _T56;
  struct Cyc_Absyn_Tqual _T57;
  void * _T58;
  void * _T59;
  void * _T5A;
  struct Cyc_Absyn_Exp * _T5B;
  void * _T5C;
  void * _T5D;
  void * _T5E;
  struct Cyc_Absyn_Tqual _T5F;
  void * _T60;
  void * _T61;
  void * _T62;
  void * _T63;
  _T0 = e1;
  _T1 = _T0->topt;
  { void * t1 = _check_null(_T1);
    _T2 = e2;
    _T3 = _T2->topt;
    { void * t2 = _check_null(_T3);
      void * t1_elt = Cyc_Absyn_void_type;
      void * t2_elt = Cyc_Absyn_void_type;
      _T4 = Cyc_Tcutil_is_pointer_type(t1);
      if (_T4) { goto _TLAD;
      }else { goto _TLAF;
      }
      _TLAF: _T5 = Cyc_Tcutil_is_pointer_type(t2);
      if (! _T5) { goto _TLB0;
      }
      Cyc_Tcutil_unchecked_cast(e2,Cyc_Absyn_sint_type,4U);
      goto _TLB1;
      _TLB0: _TLB1: _T6 = te;
      _T7 = e1;
      _T8 = e2;
      _T9 = Cyc_Tcutil_is_numeric;
      _TA = Cyc_Tcexp_tcArithBinop(_T6,_T7,_T8,_T9);
      return _TA;
      _TLAD: _TB = Cyc_Tcutil_is_pointer_type(t2);
      if (_TB) { goto _TLB2;
      }else { goto _TLB4;
      }
      _TLB4: _TC = topt;
      _TD = (unsigned int)_TC;
      if (_TD) { goto _TLB9;
      }else { goto _TLB8;
      }
      _TLB9: _TE = topt;
      _TF = *_TE;
      _T10 = Cyc_Tcutil_is_pointer_type(_TF);
      if (_T10) { goto _TLB7;
      }else { goto _TLB8;
      }
      _TLB8: _T11 = topt;
      _T12 = (unsigned int)_T11;
      if (_T12) { goto _TLB5;
      }else { goto _TLB7;
      }
      _TLB7: _T13 = Cyc_Tcutil_is_fat_pointer_type(t1);
      if (_T13) { goto _TLBA;
      }else { goto _TLBC;
      }
      _TLBC: { void * pb = Cyc_Tcutil_get_pointer_bounds(t1);
	_T14 = _check_null(pb);
	_T15 = Cyc_Tcutil_is_cvar_type(_T14);
	if (_T15) { goto _TLC0;
	}else { goto _TLBF;
	}
	_TLC0: _T16 = e1;
	_T17 = _T16->loc;
	_T18 = pb;
	_T19 = Cyc_Absyn_fatconst();
	_T1A = Cyc_BansheeIf_equality_constraint(_T18,_T19);
	_T1B = Cyc_BansheeIf_add_constraint(_T17,_T1A);
	if (_T1B) { goto _TLBD;
	}else { goto _TLBF;
	}
	_TLBF: { struct Cyc_Warn_String_Warn_Warg_struct _T64;
	  _T64.tag = 0;
	  _T64.f1 = _tag_fat("Expected fat pointer type but got ",sizeof(char),
			     35U);
	  _T1C = _T64;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T64 = _T1C;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T65;
	    _T65.tag = 2;
	    _T65.f1 = t1;
	    _T1D = _T65;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T65 = _T1D;
	    void * _T66[2];
	    _T66[0] = &_T64;
	    _T66[1] = &_T65;
	    _T1E = e1;
	    _T1F = _T1E->loc;
	    _T20 = _tag_fat(_T66,sizeof(void *),2);
	    Cyc_Warn_err2(_T1F,_T20);
	  }
	}goto _TLBE;
	_TLBD: _TLBE: ;
      }goto _TLBB;
      _TLBA: _TLBB: _T21 = t1;
      return _T21;
      _TLB5: _T22 = Cyc_Tcutil_is_fat_pointer_type(t1);
      if (_T22) { goto _TLC3;
      }else { goto _TLC4;
      }
      _TLC4: _T23 = Cyc_Tcutil_get_pointer_bounds(t2);
      _T24 = Cyc_Tcutil_is_cvar_type(_T23);
      if (_T24) { goto _TLC5;
      }else { goto _TLC1;
      }
      _TLC5: _T25 = e1;
      _T26 = _T25->loc;
      _T27 = Cyc_Tcutil_get_pointer_bounds(t1);
      _T28 = Cyc_Absyn_thinconst();
      _T29 = Cyc_BansheeIf_equality_constraint(_T27,_T28);
      _T2A = Cyc_BansheeIf_add_constraint(_T26,_T29);
      if (_T2A) { goto _TLC1;
      }else { goto _TLC3;
      }
      _TLC3: { struct Cyc_Warn_String_Warn_Warg_struct _T64;
	_T64.tag = 0;
	_T64.f1 = _tag_fat("Expected thin pointer type but got ",sizeof(char),
			   36U);
	_T2B = _T64;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T64 = _T2B;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T65;
	  _T65.tag = 2;
	  _T65.f1 = t2;
	  _T2C = _T65;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T65 = _T2C;
	  void * _T66[2];
	  _T66[0] = &_T64;
	  _T66[1] = &_T65;
	  _T2D = e1;
	  _T2E = _T2D->loc;
	  _T2F = _tag_fat(_T66,sizeof(void *),2);
	  Cyc_Warn_err2(_T2E,_T2F);
	}
      }goto _TLC2;
      _TLC1: _TLC2: Cyc_Tcutil_unchecked_cast(e1,Cyc_Absyn_sint_type,4U);
      Cyc_Tcutil_unchecked_cast(e2,Cyc_Absyn_sint_type,4U);
      _T30 = Cyc_Absyn_sint_type;
      return _T30;
      _TLB2: { void * t1_elt = Cyc_Tcutil_pointer_elt_type(t1);
	void * t2_elt = Cyc_Tcutil_pointer_elt_type(t2);
	_T31 = e1;
	_T32 = _T31->loc;
	_T33 = t1_elt;
	_T34 = t2_elt;
	{ enum Cyc_Absyn_Coercion coercion = Cyc_Subtype_coercible_exact(_T32,
									 _T33,
									 _T34);
	  _T35 = coercion;
	  _T36 = (int)_T35;
	  if (_T36 != 0) { goto _TLC6;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T64;
	    _T64.tag = 0;
	    _T64.f1 = _tag_fat("pointer arithmetic on values of different ",
			       sizeof(char),43U);
	    _T37 = _T64;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T64 = _T37;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T65;
	      _T65.tag = 0;
	      _T65.f1 = _tag_fat("types (",sizeof(char),8U);
	      _T38 = _T65;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T65 = _T38;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T66;
		_T66.tag = 2;
		_T66.f1 = t1;
		_T39 = _T66;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T66 = _T39;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T67;
		  _T67.tag = 0;
		  _T67.f1 = _tag_fat(" != ",sizeof(char),5U);
		  _T3A = _T67;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T67 = _T3A;
		  { struct Cyc_Warn_Typ_Warn_Warg_struct _T68;
		    _T68.tag = 2;
		    _T68.f1 = t2;
		    _T3B = _T68;
		  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T68 = _T3B;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T69;
		      _T69.tag = 0;
		      _T69.f1 = _tag_fat(")",sizeof(char),2U);
		      _T3C = _T69;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T69 = _T3C;
		      void * _T6A[6];
		      _T6A[0] = &_T64;
		      _T6A[1] = &_T65;
		      _T6A[2] = &_T66;
		      _T6A[3] = &_T67;
		      _T6A[4] = &_T68;
		      _T6A[5] = &_T69;
		      _T3D = e1;
		      _T3E = _T3D->loc;
		      _T3F = _tag_fat(_T6A,sizeof(void *),6);
		      Cyc_Tcexp_err_and_explain(_T3E,_T3F);
		    }
		  }
		}
	      }
	    }
	  }goto _TLC7;
	  _TLC6: _TLC7: _T40 = Cyc_Tcutil_type_kind(t1_elt);
	  _T41 = &Cyc_Kinds_mk;
	  _T42 = (struct Cyc_Absyn_Kind *)_T41;
	  _T43 = Cyc_Kinds_kind_leq(_T40,_T42);
	  if (_T43) { goto _TLC8;
	  }else { goto _TLCA;
	  }
	  _TLCA: { struct Cyc_Warn_String_Warn_Warg_struct _T64;
	    _T64.tag = 0;
	    _T64.f1 = _tag_fat("can't perform arithmetic on abstract pointer type",
			       sizeof(char),50U);
	    _T44 = _T64;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T64 = _T44;
	    void * _T65[1];
	    _T65[0] = &_T64;
	    _T45 = e1;
	    _T46 = _T45->loc;
	    _T47 = _tag_fat(_T65,sizeof(void *),1);
	    Cyc_Warn_err2(_T46,_T47);
	  }goto _TLC9;
	  _TLC8: _TLC9: _T48 = Cyc_Tcenv_curr_aquals_bounds(te);
	  _T49 = t1;
	  _T4A = Cyc_Tcutil_is_noalias_pointer(_T48,_T49,1);
	  if (! _T4A) { goto _TLCB;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T64;
	    _T64.tag = 0;
	    _T64.f1 = _tag_fat("can't perform arithmetic on unique pointer",
			       sizeof(char),43U);
	    _T4B = _T64;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T64 = _T4B;
	    void * _T65[1];
	    _T65[0] = &_T64;
	    _T4C = e1;
	    _T4D = _T4C->loc;
	    _T4E = _tag_fat(_T65,sizeof(void *),1);
	    Cyc_Warn_err2(_T4D,_T4E);
	  }goto _TLCC;
	  _TLCB: _TLCC: _T4F = Cyc_Tcutil_is_fat_pointer_type(t1);
	  _T50 = Cyc_Tcutil_is_fat_pointer_type(t2);
	  if (_T4F ^ _T50) { goto _TLCD;
	  }else { goto _TLCF;
	  }
	  _TLCF: _T51 = Cyc_Absyn_sint_type;
	  return _T51;
	  _TLCD: _T52 = Cyc_Tcutil_is_fat_pointer_type(t1);
	  if (! _T52) { goto _TLD0;
	  }
	  _T53 = e1;
	  _T54 = Cyc_Tcutil_pointer_elt_type(t1);
	  _T55 = Cyc_Tcutil_pointer_region(t1);
	  _T56 = Cyc_Tcutil_pointer_aqual(t1);
	  _T57 = Cyc_Absyn_empty_tqual(0U);
	  _T58 = Cyc_Absyn_false_type;
	  _T59 = Cyc_Tcexp_relqual(t1);
	  _T5A = Cyc_Absyn_star_type(_T54,_T55,_T56,_T57,_T58,_T59);
	  Cyc_Tcutil_unchecked_cast(_T53,_T5A,4U);
	  goto _TLD1;
	  _TLD0: _T5B = e2;
	  _T5C = Cyc_Tcutil_pointer_elt_type(t2);
	  _T5D = Cyc_Tcutil_pointer_region(t2);
	  _T5E = Cyc_Tcutil_pointer_aqual(t2);
	  _T5F = Cyc_Absyn_empty_tqual(0U);
	  _T60 = Cyc_Absyn_false_type;
	  _T61 = Cyc_Tcexp_relqual(t2);
	  _T62 = Cyc_Absyn_star_type(_T5C,_T5D,_T5E,_T5F,_T60,_T61);
	  Cyc_Tcutil_unchecked_cast(_T5B,_T62,4U);
	  _TLD1: _T63 = Cyc_Absyn_sint_type;
	  return _T63;
	}
      }
    }
  }
}
static void * Cyc_Tcexp_tcCmpBinop(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				   struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  struct Cyc_Absyn_Exp * _T3;
  void * _T4;
  void * _T5;
  long _T6;
  long _T7;
  void * _T8;
  struct Cyc_Absyn_Kind * _T9;
  enum Cyc_Absyn_KindQual _TA;
  int _TB;
  struct Cyc_Absyn_Kind * _TC;
  enum Cyc_Absyn_KindQual _TD;
  int _TE;
  long _TF;
  long _T10;
  void * _T11;
  enum Cyc_Absyn_Coercion _T12;
  int _T13;
  enum Cyc_Absyn_Coercion _T14;
  int _T15;
  void * _T16;
  void * _T17;
  struct _tuple0 _T18;
  void * _T19;
  int * _T1A;
  unsigned int _T1B;
  void * _T1C;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1D;
  void * _T1E;
  int * _T1F;
  int _T20;
  void * _T21;
  int * _T22;
  int _T23;
  void * _T24;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T25;
  void * _T26;
  int * _T27;
  int _T28;
  void * _T29;
  void * _T2A;
  int * _T2B;
  int _T2C;
  void * _T2D;
  struct Cyc_Absyn_PtrInfo _T2E;
  void * _T2F;
  struct Cyc_Absyn_PtrInfo _T30;
  enum Cyc_Absyn_Coercion _T31;
  int _T32;
  enum Cyc_Absyn_Coercion _T33;
  int _T34;
  void * _T35;
  enum Cyc_Absyn_Coercion _T36;
  int _T37;
  void * _T38;
  enum Cyc_Absyn_Coercion _T39;
  int _T3A;
  void * _T3B;
  struct Cyc_Warn_String_Warn_Warg_struct _T3C;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3D;
  struct Cyc_Warn_String_Warn_Warg_struct _T3E;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3F;
  unsigned int _T40;
  struct _fat_ptr _T41;
  struct Cyc_Core_Opt * _T42;
  void * _T43;
  _T0 = e1;
  _T1 = _T0->topt;
  _T2 = _check_null(_T1);
  { void * t1 = Cyc_Absyn_compress(_T2);
    _T3 = e2;
    _T4 = _T3->topt;
    _T5 = _check_null(_T4);
    { void * t2 = Cyc_Absyn_compress(_T5);
      _T6 = Cyc_Tcutil_is_numeric(e1);
      if (! _T6) { goto _TLD2;
      }
      _T7 = Cyc_Tcutil_is_numeric(e2);
      if (! _T7) { goto _TLD2;
      }
      Cyc_Tcexp_arith_convert(te,e1,e2);
      _T8 = Cyc_Absyn_sint_type;
      return _T8;
      _TLD2: _T9 = Cyc_Tcutil_type_kind(t1);
      _TA = _T9->kind;
      _TB = (int)_TA;
      if (_TB != 2) { goto _TLD4;
      }
      _TC = Cyc_Tcutil_type_kind(t2);
      _TD = _TC->kind;
      _TE = (int)_TD;
      if (_TE != 2) { goto _TLD4;
      }
      _TF = Cyc_Tcutil_zero_to_null(t2,e1);
      if (_TF) { goto _TLD8;
      }else { goto _TLD9;
      }
      _TLD9: _T10 = Cyc_Tcutil_zero_to_null(t1,e2);
      if (_T10) { goto _TLD8;
      }else { goto _TLD6;
      }
      _TLD8: _T11 = Cyc_Absyn_sint_type;
      return _T11;
      _TLD6: { enum Cyc_Absyn_Coercion c = Cyc_Subtype_coercible(loc,t1,t2);
	_T12 = c;
	_T13 = (int)_T12;
	if (_T13 != 0) { goto _TLDA;
	}
	c = Cyc_Subtype_coercible(loc,t2,t1);
	_T14 = c;
	_T15 = (int)_T14;
	if (_T15 == 0) { goto _TLDC;
	}
	Cyc_Tcutil_unchecked_cast(e2,t1,c);
	_T16 = Cyc_Absyn_sint_type;
	return _T16;
	_TLDC: goto _TLDB;
	_TLDA: Cyc_Tcutil_unchecked_cast(e1,t2,c);
	_T17 = Cyc_Absyn_sint_type;
	return _T17;
	_TLDB: ;
      }goto _TLD5;
      _TLD4: _TLD5: { struct _tuple0 _T44;
	_T44.f0 = Cyc_Absyn_compress(t1);
	_T44.f1 = Cyc_Absyn_compress(t2);
	_T18 = _T44;
      }{ struct _tuple0 _T44 = _T18;
	void * _T45;
	void * _T46;
	_T19 = _T44.f0;
	_T1A = (int *)_T19;
	_T1B = *_T1A;
	switch (_T1B) {
	case 0: 
	  _T1C = _T44.f0;
	  _T1D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1C;
	  _T1E = _T1D->f1;
	  _T1F = (int *)_T1E;
	  _T20 = *_T1F;
	  if (_T20 != 4) { goto _TLDF;
	  }
	  _T21 = _T44.f1;
	  _T22 = (int *)_T21;
	  _T23 = *_T22;
	  if (_T23 != 0) { goto _TLE1;
	  }
	  _T24 = _T44.f1;
	  _T25 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T24;
	  _T26 = _T25->f1;
	  _T27 = (int *)_T26;
	  _T28 = *_T27;
	  if (_T28 != 4) { goto _TLE3;
	  }
	  _T29 = Cyc_Absyn_sint_type;
	  return _T29;
	  _TLE3: goto _LL5;
	  _TLE1: goto _LL5;
	  _TLDF: goto _LL5;
	case 4: 
	  _T2A = _T44.f1;
	  _T2B = (int *)_T2A;
	  _T2C = *_T2B;
	  if (_T2C != 4) { goto _TLE5;
	  }
	  _T2D = _T44.f0;
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T47 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T2D;
	    _T2E = _T47->f1;
	    _T46 = _T2E.elt_type;
	  }_T2F = _T44.f1;
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T47 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T2F;
	    _T30 = _T47->f1;
	    _T45 = _T30.elt_type;
	  }{ void * t1a = _T46;
	    void * t2a = _T45;
	    _T31 = Cyc_Subtype_coercible_exact(loc,t1a,t2a);
	    _T32 = (int)_T31;
	    if (_T32 != 0) { goto _TLE9;
	    }else { goto _TLEA;
	    }
	    _TLEA: _T33 = Cyc_Subtype_coercible_exact(loc,t2a,t1a);
	    _T34 = (int)_T33;
	    if (_T34 != 0) { goto _TLE9;
	    }else { goto _TLE7;
	    }
	    _TLE9: _T35 = Cyc_Absyn_sint_type;
	    return _T35;
	    _TLE7: goto _LL6;
	  }_TLE5: goto _LL5;
	default: 
	  _LL5: _LL6: { enum Cyc_Absyn_Coercion c = Cyc_Subtype_coercible(loc,
									  t1,
									  t2);
	    _T36 = c;
	    _T37 = (int)_T36;
	    if (_T37 == 0) { goto _TLEB;
	    }
	    Cyc_Tcutil_unchecked_cast(e1,t2,c);
	    _T38 = Cyc_Absyn_sint_type;
	    return _T38;
	    _TLEB: c = Cyc_Subtype_coercible(loc,t2,t1);
	    _T39 = c;
	    _T3A = (int)_T39;
	    if (_T3A == 0) { goto _TLED;
	    }
	    Cyc_Tcutil_unchecked_cast(e2,t1,c);
	    _T3B = Cyc_Absyn_sint_type;
	    return _T3B;
	    _TLED: goto _LL0;
	  }
	}
	_LL0: ;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T44;
	_T44.tag = 0;
	_T44.f1 = _tag_fat("comparison not allowed between ",sizeof(char),
			   32U);
	_T3C = _T44;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T44 = _T3C;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T45;
	  _T45.tag = 2;
	  _T45.f1 = t1;
	  _T3D = _T45;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T45 = _T3D;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T46;
	    _T46.tag = 0;
	    _T46.f1 = _tag_fat(" and ",sizeof(char),6U);
	    _T3E = _T46;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T46 = _T3E;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T47;
	      _T47.tag = 2;
	      _T47.f1 = t2;
	      _T3F = _T47;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T47 = _T3F;
	      void * _T48[4];
	      _T48[0] = &_T44;
	      _T48[1] = &_T45;
	      _T48[2] = &_T46;
	      _T48[3] = &_T47;
	      _T40 = loc;
	      _T41 = _tag_fat(_T48,sizeof(void *),4);
	      Cyc_Tcexp_err_and_explain(_T40,_T41);
	    }
	  }
	}
      }_T42 = Cyc_Tcenv_lookup_opt_type_vars(te);
      _T43 = Cyc_Absyn_wildtyp(_T42);
      return _T43;
    }
  }
}
static void * Cyc_Tcexp_tcBinPrimop(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				    void * * topt,enum Cyc_Absyn_Primop * p,
				    struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2) {
  enum Cyc_Absyn_Primop * _T0;
  int _T1;
  void * _T2;
  void * _T3;
  struct Cyc_Tcenv_Tenv * _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct Cyc_Absyn_Exp * _T6;
  long (* _T7)(struct Cyc_Absyn_Exp *);
  void * _T8;
  struct Cyc_Tcenv_Tenv * _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Exp * _TB;
  long (* _TC)(struct Cyc_Absyn_Exp *);
  int * _TD;
  int _TE;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TF;
  void * _T10;
  int * _T11;
  int _T12;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T13;
  void * _T14;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T15;
  enum Cyc_Absyn_Sign _T16;
  enum Cyc_Absyn_Primop * _T17;
  void * _T18;
  void * _T19;
  struct Cyc_Tcenv_Tenv * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  struct Cyc_Absyn_Exp * _T1C;
  long (* _T1D)(struct Cyc_Absyn_Exp *);
  int * _T1E;
  int _T1F;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T20;
  void * _T21;
  int * _T22;
  int _T23;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T24;
  void * _T25;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T26;
  enum Cyc_Absyn_Sign _T27;
  enum Cyc_Absyn_Primop * _T28;
  void * _T29;
  void * _T2A;
  struct Cyc_Tcenv_Tenv * _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  long (* _T2E)(struct Cyc_Absyn_Exp *);
  void * _T2F;
  long _T30;
  void * _T31;
  struct Cyc_Warn_String_Warn_Warg_struct _T32;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T33;
  struct Cyc_Absyn_Exp * _T34;
  struct Cyc_Warn_String_Warn_Warg_struct _T35;
  struct Cyc_Tcenv_Tenv * _T36;
  struct Cyc_Absyn_Exp * _T37;
  unsigned int _T38;
  struct _fat_ptr _T39;
  long _T3A;
  void * _T3B;
  struct Cyc_Warn_String_Warn_Warg_struct _T3C;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3D;
  struct Cyc_Absyn_Exp * _T3E;
  struct Cyc_Warn_String_Warn_Warg_struct _T3F;
  struct Cyc_Tcenv_Tenv * _T40;
  struct Cyc_Absyn_Exp * _T41;
  unsigned int _T42;
  struct _fat_ptr _T43;
  struct Cyc_Absyn_Exp * _T44;
  void * _T45;
  void * _T46;
  struct _tuple0 _T47;
  struct Cyc_Absyn_Exp * _T48;
  void * _T49;
  struct Cyc_Absyn_Exp * _T4A;
  void * _T4B;
  void * _T4C;
  int * _T4D;
  int _T4E;
  void * _T4F;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T50;
  void * _T51;
  int * _T52;
  int _T53;
  void * _T54;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T55;
  void * _T56;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T57;
  enum Cyc_Absyn_Sign _T58;
  void * _T59;
  int * _T5A;
  unsigned int _T5B;
  void * _T5C;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5D;
  void * _T5E;
  int * _T5F;
  int _T60;
  void * _T61;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T62;
  void * _T63;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T64;
  enum Cyc_Absyn_Sign _T65;
  void * _T66;
  int * _T67;
  unsigned int _T68;
  void * _T69;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6A;
  void * _T6B;
  int * _T6C;
  int _T6D;
  void * _T6E;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6F;
  void * _T70;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T71;
  enum Cyc_Absyn_Sign _T72;
  void * _T73;
  int * _T74;
  int _T75;
  void * _T76;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T77;
  void * _T78;
  int * _T79;
  int _T7A;
  void * _T7B;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T7C;
  void * _T7D;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T7E;
  enum Cyc_Absyn_Sign _T7F;
  void * _T80;
  int * _T81;
  int _T82;
  void * _T83;
  int * _T84;
  int _T85;
  void * _T86;
  int * _T87;
  int _T88;
  void * _T89;
  int * _T8A;
  int _T8B;
  enum Cyc_Absyn_Primop * _T8C;
  enum Cyc_Absyn_Primop _T8D;
  int _T8E;
  enum Cyc_Absyn_Primop * _T8F;
  enum Cyc_Absyn_Primop * _T90;
  enum Cyc_Absyn_Primop _T91;
  int _T92;
  enum Cyc_Absyn_Primop * _T93;
  enum Cyc_Absyn_Primop * _T94;
  enum Cyc_Absyn_Primop _T95;
  int _T96;
  enum Cyc_Absyn_Primop * _T97;
  enum Cyc_Absyn_Primop * _T98;
  enum Cyc_Absyn_Primop _T99;
  int _T9A;
  enum Cyc_Absyn_Primop * _T9B;
  void * _T9C;
  struct Cyc_Warn_String_Warn_Warg_struct _T9D;
  int (* _T9E)(struct _fat_ptr);
  void * (* _T9F)(struct _fat_ptr);
  struct _fat_ptr _TA0;
  _T0 = p;
  { enum Cyc_Absyn_Primop _TA1 = *_T0;
    _T1 = (int)_TA1;
    switch (_T1) {
    case Cyc_Absyn_Plus: 
      _T2 = Cyc_Tcexp_tcPlus(te,e1,e2);
      return _T2;
    case Cyc_Absyn_Minus: 
      _T3 = Cyc_Tcexp_tcMinus(te,topt,e1,e2);
      return _T3;
    case Cyc_Absyn_Times: 
      _T4 = te;
      _T5 = e1;
      _T6 = e2;
      _T7 = Cyc_Tcutil_is_numeric;
      _T8 = Cyc_Tcexp_tcArithBinop(_T4,_T5,_T6,_T7);
      return _T8;
    case Cyc_Absyn_UDiv: 
      goto _LLA;
    case Cyc_Absyn_Div: 
      _LLA: _T9 = te;
      _TA = e1;
      _TB = e2;
      _TC = Cyc_Tcutil_is_numeric;
      { void * res = Cyc_Tcexp_tcArithBinop(_T9,_TA,_TB,_TC);
	void * _TA2 = Cyc_Absyn_compress(res);
	_TD = (int *)_TA2;
	_TE = *_TD;
	if (_TE != 0) { goto _TLF0;
	}
	_TF = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA2;
	_T10 = _TF->f1;
	_T11 = (int *)_T10;
	_T12 = *_T11;
	if (_T12 != 1) { goto _TLF2;
	}
	_T13 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA2;
	_T14 = _T13->f1;
	_T15 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T14;
	_T16 = _T15->f1;
	if (_T16 != Cyc_Absyn_Unsigned) { goto _TLF4;
	}
	_T17 = p;
	*_T17 = 20U;
	_T18 = res;
	return _T18;
	_TLF4: goto _LL32;
	_TLF2: goto _LL32;
	_TLF0: _LL32: _T19 = res;
	return _T19;
	;
      }
    case Cyc_Absyn_UMod: 
      goto _LLE;
    case Cyc_Absyn_Mod: 
      _LLE: _T1A = te;
      _T1B = e1;
      _T1C = e2;
      _T1D = Cyc_Tcutil_is_integral;
      { void * res = Cyc_Tcexp_tcArithBinop(_T1A,_T1B,_T1C,_T1D);
	void * _TA2 = Cyc_Absyn_compress(res);
	_T1E = (int *)_TA2;
	_T1F = *_T1E;
	if (_T1F != 0) { goto _TLF6;
	}
	_T20 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA2;
	_T21 = _T20->f1;
	_T22 = (int *)_T21;
	_T23 = *_T22;
	if (_T23 != 1) { goto _TLF8;
	}
	_T24 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA2;
	_T25 = _T24->f1;
	_T26 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T25;
	_T27 = _T26->f1;
	if (_T27 != Cyc_Absyn_Unsigned) { goto _TLFA;
	}
	_T28 = p;
	*_T28 = 21U;
	_T29 = res;
	return _T29;
	_TLFA: goto _LL37;
	_TLF8: goto _LL37;
	_TLF6: _LL37: _T2A = res;
	return _T2A;
	;
      }
    case Cyc_Absyn_Bitand: 
      goto _LL12;
    case Cyc_Absyn_Bitor: 
      _LL12: goto _LL14;
    case Cyc_Absyn_Bitxor: 
      _LL14: _T2B = te;
      _T2C = e1;
      _T2D = e2;
      _T2E = Cyc_Tcutil_is_integral;
      _T2F = Cyc_Tcexp_tcArithBinop(_T2B,_T2C,_T2D,_T2E);
      return _T2F;
    case Cyc_Absyn_Bitlshift: 
      goto _LL18;
    case Cyc_Absyn_Bitlrshift: 
      _LL18: _T30 = Cyc_Tcutil_is_integral(e1);
      if (_T30) { goto _TLFC;
      }else { goto _TLFE;
      }
      _TLFE: { struct Cyc_Warn_String_Warn_Warg_struct _TA2;
	_TA2.tag = 0;
	_TA2.f1 = _tag_fat("type ",sizeof(char),6U);
	_T32 = _TA2;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TA2 = _T32;
	{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _TA3;
	  _TA3.tag = 3;
	  _T34 = e1;
	  _TA3.f1 = _T34->topt;
	  _T33 = _TA3;
	}{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _TA3 = _T33;
	  { struct Cyc_Warn_String_Warn_Warg_struct _TA4;
	    _TA4.tag = 0;
	    _TA4.f1 = _tag_fat(" cannot be used with << or >>",sizeof(char),
			       30U);
	    _T35 = _TA4;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TA4 = _T35;
	    void * _TA5[3];
	    _TA5[0] = &_TA2;
	    _TA5[1] = &_TA3;
	    _TA5[2] = &_TA4;
	    _T36 = te;
	    _T37 = e1;
	    _T38 = _T37->loc;
	    _T39 = _tag_fat(_TA5,sizeof(void *),3);
	    _T31 = Cyc_Tcexp_expr_err(_T36,_T38,0,_T39);
	  }
	}
      }return _T31;
      _TLFC: _T3A = Cyc_Tcutil_is_integral(e2);
      if (_T3A) { goto _TLFF;
      }else { goto _TL101;
      }
      _TL101: { struct Cyc_Warn_String_Warn_Warg_struct _TA2;
	_TA2.tag = 0;
	_TA2.f1 = _tag_fat("type ",sizeof(char),6U);
	_T3C = _TA2;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TA2 = _T3C;
	{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _TA3;
	  _TA3.tag = 3;
	  _T3E = e2;
	  _TA3.f1 = _T3E->topt;
	  _T3D = _TA3;
	}{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _TA3 = _T3D;
	  { struct Cyc_Warn_String_Warn_Warg_struct _TA4;
	    _TA4.tag = 0;
	    _TA4.f1 = _tag_fat(" cannot be used with << or >>",sizeof(char),
			       30U);
	    _T3F = _TA4;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TA4 = _T3F;
	    void * _TA5[3];
	    _TA5[0] = &_TA2;
	    _TA5[1] = &_TA3;
	    _TA5[2] = &_TA4;
	    _T40 = te;
	    _T41 = e2;
	    _T42 = _T41->loc;
	    _T43 = _tag_fat(_TA5,sizeof(void *),3);
	    _T3B = Cyc_Tcexp_expr_err(_T40,_T42,0,_T43);
	  }
	}
      }return _T3B;
      _TLFF: _T44 = e1;
      _T45 = _T44->topt;
      return _T45;
    case Cyc_Absyn_Eq: 
      goto _LL1C;
    case Cyc_Absyn_Neq: 
      _LL1C: _T46 = Cyc_Tcexp_tcCmpBinop(te,loc,e1,e2);
      return _T46;
    case Cyc_Absyn_Gt: 
      goto _LL20;
    case Cyc_Absyn_Lt: 
      _LL20: goto _LL22;
    case Cyc_Absyn_Gte: 
      _LL22: goto _LL24;
    case Cyc_Absyn_Lte: 
      _LL24: goto _LL26;
    case Cyc_Absyn_UGt: 
      _LL26: goto _LL28;
    case Cyc_Absyn_ULt: 
      _LL28: goto _LL2A;
    case Cyc_Absyn_UGte: 
      _LL2A: goto _LL2C;
    case Cyc_Absyn_ULte: 
      _LL2C: { void * res = Cyc_Tcexp_tcCmpBinop(te,loc,e1,e2);
	{ struct _tuple0 _TA2;
	  _T48 = e1;
	  _T49 = _T48->topt;
	  _TA2.f0 = Cyc_Absyn_compress(_T49);
	  _T4A = e2;
	  _T4B = _T4A->topt;
	  _TA2.f1 = Cyc_Absyn_compress(_T4B);
	  _T47 = _TA2;
	}{ struct _tuple0 _TA2 = _T47;
	  _T4C = _TA2.f0;
	  _T4D = (int *)_T4C;
	  _T4E = *_T4D;
	  if (_T4E != 0) { goto _TL102;
	  }
	  _T4F = _TA2.f0;
	  _T50 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T4F;
	  _T51 = _T50->f1;
	  _T52 = (int *)_T51;
	  _T53 = *_T52;
	  if (_T53 != 1) { goto _TL104;
	  }
	  _T54 = _TA2.f0;
	  _T55 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T54;
	  _T56 = _T55->f1;
	  _T57 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T56;
	  _T58 = _T57->f1;
	  if (_T58 != Cyc_Absyn_Unsigned) { goto _TL106;
	  }
	  goto _LL3D;
	  _TL106: _T59 = _TA2.f1;
	  _T5A = (int *)_T59;
	  _T5B = *_T5A;
	  switch (_T5B) {
	  case 0: 
	    _T5C = _TA2.f1;
	    _T5D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5C;
	    _T5E = _T5D->f1;
	    _T5F = (int *)_T5E;
	    _T60 = *_T5F;
	    if (_T60 != 1) { goto _TL109;
	    }
	    _T61 = _TA2.f1;
	    _T62 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T61;
	    _T63 = _T62->f1;
	    _T64 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T63;
	    _T65 = _T64->f1;
	    if (_T65 != Cyc_Absyn_Unsigned) { goto _TL10B;
	    }
	    goto _LL3C;
	    _TL10B: goto _LL42;
	    _TL109: goto _LL42;
	  case 4: 
	    goto _LL40;
	  default: 
	    goto _LL42;
	  }
	  goto _TL105;
	  _TL104: _T66 = _TA2.f1;
	  _T67 = (int *)_T66;
	  _T68 = *_T67;
	  switch (_T68) {
	  case 0: 
	    _T69 = _TA2.f1;
	    _T6A = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T69;
	    _T6B = _T6A->f1;
	    _T6C = (int *)_T6B;
	    _T6D = *_T6C;
	    if (_T6D != 1) { goto _TL10E;
	    }
	    _T6E = _TA2.f1;
	    _T6F = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6E;
	    _T70 = _T6F->f1;
	    _T71 = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T70;
	    _T72 = _T71->f1;
	    if (_T72 != Cyc_Absyn_Unsigned) { goto _TL110;
	    }
	    goto _LL3C;
	    _TL110: goto _LL42;
	    _TL10E: goto _LL42;
	  case 4: 
	    goto _LL40;
	  default: 
	    goto _LL42;
	  }
	  _TL105: goto _TL103;
	  _TL102: _T73 = _TA2.f1;
	  _T74 = (int *)_T73;
	  _T75 = *_T74;
	  if (_T75 != 0) { goto _TL112;
	  }
	  _T76 = _TA2.f1;
	  _T77 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T76;
	  _T78 = _T77->f1;
	  _T79 = (int *)_T78;
	  _T7A = *_T79;
	  if (_T7A != 1) { goto _TL114;
	  }
	  _T7B = _TA2.f1;
	  _T7C = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T7B;
	  _T7D = _T7C->f1;
	  _T7E = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T7D;
	  _T7F = _T7E->f1;
	  if (_T7F != Cyc_Absyn_Unsigned) { goto _TL116;
	  }
	  _LL3C: _LL3D: goto _LL3F;
	  _TL116: _T80 = _TA2.f0;
	  _T81 = (int *)_T80;
	  _T82 = *_T81;
	  if (_T82 != 4) { goto _TL118;
	  }
	  goto _LL3E;
	  _TL118: goto _LL42;
	  _TL114: _T83 = _TA2.f0;
	  _T84 = (int *)_T83;
	  _T85 = *_T84;
	  if (_T85 != 4) { goto _TL11A;
	  }
	  goto _LL3E;
	  _TL11A: goto _LL42;
	  _TL112: _T86 = _TA2.f0;
	  _T87 = (int *)_T86;
	  _T88 = *_T87;
	  if (_T88 != 4) { goto _TL11C;
	  }
	  _LL3E: _LL3F: goto _LL41;
	  _TL11C: _T89 = _TA2.f1;
	  _T8A = (int *)_T89;
	  _T8B = *_T8A;
	  if (_T8B != 4) { goto _TL11E;
	  }
	  _LL40: _LL41: _T8C = p;
	  _T8D = *_T8C;
	  _T8E = (int)_T8D;
	  if (_T8E != 7) { goto _TL120;
	  }
	  _T8F = p;
	  *_T8F = 22U;
	  goto _TL121;
	  _TL120: _TL121: _T90 = p;
	  _T91 = *_T90;
	  _T92 = (int)_T91;
	  if (_T92 != 8) { goto _TL122;
	  }
	  _T93 = p;
	  *_T93 = 23U;
	  goto _TL123;
	  _TL122: _TL123: _T94 = p;
	  _T95 = *_T94;
	  _T96 = (int)_T95;
	  if (_T96 != 9) { goto _TL124;
	  }
	  _T97 = p;
	  *_T97 = 24U;
	  goto _TL125;
	  _TL124: _TL125: _T98 = p;
	  _T99 = *_T98;
	  _T9A = (int)_T99;
	  if (_T9A != 10) { goto _TL126;
	  }
	  _T9B = p;
	  *_T9B = 25U;
	  goto _TL127;
	  _TL126: _TL127: goto _LL39;
	  _TL11E: _LL42: goto _LL39;
	  _TL103: _LL39: ;
	}_T9C = res;
	return _T9C;
      }
    default: 
      { struct Cyc_Warn_String_Warn_Warg_struct _TA2;
	_TA2.tag = 0;
	_TA2.f1 = _tag_fat("bad binary primop",sizeof(char),18U);
	_T9D = _TA2;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TA2 = _T9D;
	void * _TA3[1];
	_TA3[0] = &_TA2;
	_T9F = Cyc_Warn_impos2;
	{ int (* _TA4)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T9F;
	  _T9E = _TA4;
	}_TA0 = _tag_fat(_TA3,sizeof(void *),1);
	_T9E(_TA0);
      }
    }
    ;
  }
}
static void * Cyc_Tcexp_tcPrimop(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				 void * * topt,enum Cyc_Absyn_Primop * p,
				 struct Cyc_List_List * es) {
  enum Cyc_Absyn_Primop * _T0;
  enum Cyc_Absyn_Primop _T1;
  int _T2;
  int _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  long _T6;
  struct Cyc_Warn_String_Warn_Warg_struct _T7;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T8;
  struct Cyc_Absyn_Exp * _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  void * _TC;
  struct Cyc_Tcenv_Tenv * _TD;
  struct Cyc_List_List * _TE;
  void * _TF;
  struct Cyc_Absyn_Exp * _T10;
  struct Cyc_List_List * _T11;
  int _T12;
  void * _T13;
  struct Cyc_Warn_String_Warn_Warg_struct _T14;
  struct Cyc_Tcenv_Tenv * _T15;
  unsigned int _T16;
  void * * _T17;
  struct _fat_ptr _T18;
  struct Cyc_Tcenv_Tenv * _T19;
  unsigned int _T1A;
  void * * _T1B;
  enum Cyc_Absyn_Primop * _T1C;
  enum Cyc_Absyn_Primop _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  struct Cyc_Absyn_Exp * _T20;
  void * _T21;
  struct Cyc_Tcenv_Tenv * _T22;
  unsigned int _T23;
  void * * _T24;
  enum Cyc_Absyn_Primop * _T25;
  struct Cyc_List_List * _T26;
  void * _T27;
  struct Cyc_Absyn_Exp * _T28;
  struct Cyc_List_List * _T29;
  struct Cyc_List_List * _T2A;
  struct Cyc_List_List * _T2B;
  void * _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  void * _T2E;
  void * _T2F;
  struct Cyc_Warn_String_Warn_Warg_struct _T30;
  struct Cyc_Tcenv_Tenv * _T31;
  unsigned int _T32;
  void * * _T33;
  struct _fat_ptr _T34;
  _T0 = p;
  _T1 = *_T0;
  _T2 = (int)_T1;
  if (_T2 != 2) { goto _TL128;
  }
  _T3 = Cyc_List_length(es);
  if (_T3 != 1) { goto _TL128;
  }
  _T4 = _check_null(es);
  _T5 = _T4->hd;
  { struct Cyc_Absyn_Exp * e = (struct Cyc_Absyn_Exp *)_T5;
    void * t = Cyc_Tcexp_tcExp(te,topt,e);
    _T6 = Cyc_Tcutil_is_numeric(e);
    if (_T6) { goto _TL12A;
    }else { goto _TL12C;
    }
    _TL12C: { struct Cyc_Warn_String_Warn_Warg_struct _T35;
      _T35.tag = 0;
      _T35.f1 = _tag_fat("expecting numeric type but found ",sizeof(char),
			 34U);
      _T7 = _T35;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T35 = _T7;
      { struct Cyc_Warn_Typ_Warn_Warg_struct _T36;
	_T36.tag = 2;
	_T36.f1 = t;
	_T8 = _T36;
      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T36 = _T8;
	void * _T37[2];
	_T37[0] = &_T35;
	_T37[1] = &_T36;
	_T9 = e;
	_TA = _T9->loc;
	_TB = _tag_fat(_T37,sizeof(void *),2);
	Cyc_Warn_err2(_TA,_TB);
      }
    }goto _TL12B;
    _TL12A: _TL12B: _TC = t;
    return _TC;
  }_TL128: { struct Cyc_List_List * es2 = es;
    _TL130: if (es2 != 0) { goto _TL12E;
    }else { goto _TL12F;
    }
    _TL12E: _TD = te;
    _TE = es2;
    _TF = _TE->hd;
    _T10 = (struct Cyc_Absyn_Exp *)_TF;
    Cyc_Tcexp_tcExp(_TD,0,_T10);
    _T11 = es2;
    es2 = _T11->tl;
    goto _TL130;
    _TL12F: ;
  }{ int _T35 = Cyc_List_length(es);
    _T12 = (int)_T35;
    switch (_T12) {
    case 0: 
      { struct Cyc_Warn_String_Warn_Warg_struct _T36;
	_T36.tag = 0;
	_T36.f1 = _tag_fat("primitive operator has 0 arguments",sizeof(char),
			   35U);
	_T14 = _T36;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T36 = _T14;
	void * _T37[1];
	_T37[0] = &_T36;
	_T15 = te;
	_T16 = loc;
	_T17 = topt;
	_T18 = _tag_fat(_T37,sizeof(void *),1);
	_T13 = Cyc_Tcexp_expr_err(_T15,_T16,_T17,_T18);
      }return _T13;
    case 1: 
      _T19 = te;
      _T1A = loc;
      _T1B = topt;
      _T1C = p;
      _T1D = *_T1C;
      _T1E = _check_null(es);
      _T1F = _T1E->hd;
      _T20 = (struct Cyc_Absyn_Exp *)_T1F;
      _T21 = Cyc_Tcexp_tcUnPrimop(_T19,_T1A,_T1B,_T1D,_T20);
      return _T21;
    case 2: 
      _T22 = te;
      _T23 = loc;
      _T24 = topt;
      _T25 = p;
      _T26 = _check_null(es);
      _T27 = _T26->hd;
      _T28 = (struct Cyc_Absyn_Exp *)_T27;
      _T29 = es;
      _T2A = _T29->tl;
      _T2B = _check_null(_T2A);
      _T2C = _T2B->hd;
      _T2D = (struct Cyc_Absyn_Exp *)_T2C;
      _T2E = Cyc_Tcexp_tcBinPrimop(_T22,_T23,_T24,_T25,_T28,_T2D);
      return _T2E;
    default: 
      { struct Cyc_Warn_String_Warn_Warg_struct _T36;
	_T36.tag = 0;
	_T36.f1 = _tag_fat("primitive operator has > 2 arguments",sizeof(char),
			   37U);
	_T30 = _T36;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T36 = _T30;
	void * _T37[1];
	_T37[0] = &_T36;
	_T31 = te;
	_T32 = loc;
	_T33 = topt;
	_T34 = _tag_fat(_T37,sizeof(void *),1);
	_T2F = Cyc_Tcexp_expr_err(_T31,_T32,_T33,_T34);
      }return _T2F;
    }
    ;
  }
}
 struct _tuple21 {
  struct Cyc_Absyn_Tqual f0;
  void * f1;
};
static long Cyc_Tcexp_check_writable_aggr(unsigned int loc,void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T4;
  void * _T5;
  int * _T6;
  unsigned int _T7;
  void * _T8;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T9;
  void * _TA;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TB;
  union Cyc_Absyn_AggrInfo _TC;
  struct _union_AggrInfo_KnownAggr _TD;
  unsigned int _TE;
  void * _TF;
  void * _T10;
  union Cyc_Absyn_AggrInfo _T11;
  struct _union_AggrInfo_KnownAggr _T12;
  struct Cyc_Absyn_Aggrdecl * * _T13;
  struct Cyc_Absyn_Aggrdecl * _T14;
  struct Cyc_Absyn_AggrdeclImpl * _T15;
  struct Cyc_Warn_String_Warn_Warg_struct _T16;
  struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T17;
  unsigned int _T18;
  struct _fat_ptr _T19;
  struct Cyc_Absyn_Aggrdecl * _T1A;
  struct Cyc_Absyn_AggrdeclImpl * _T1B;
  void * _T1C;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1D;
  void * _T1E;
  struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _T1F;
  union Cyc_Absyn_DatatypeFieldInfo _T20;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T21;
  unsigned int _T22;
  void * _T23;
  void * _T24;
  union Cyc_Absyn_DatatypeFieldInfo _T25;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T26;
  struct _tuple2 _T27;
  struct Cyc_Absyn_Datatypefield * _T28;
  struct Cyc_List_List * _T29;
  void * _T2A;
  struct Cyc_Absyn_Tqual _T2B;
  long _T2C;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T2E;
  struct Cyc_Absyn_Datatypefield * _T2F;
  struct Cyc_Warn_String_Warn_Warg_struct _T30;
  unsigned int _T31;
  struct _fat_ptr _T32;
  long _T33;
  struct Cyc_List_List * _T34;
  void * _T35;
  struct Cyc_List_List * _T36;
  void * _T37;
  struct Cyc_Absyn_Aggrfield * _T38;
  struct Cyc_Absyn_Tqual _T39;
  long _T3A;
  struct Cyc_Warn_String_Warn_Warg_struct _T3B;
  struct Cyc_Warn_String_Warn_Warg_struct _T3C;
  struct Cyc_Absyn_Aggrfield * _T3D;
  struct _fat_ptr * _T3E;
  unsigned int _T3F;
  struct _fat_ptr _T40;
  unsigned int _T41;
  struct Cyc_Absyn_Aggrfield * _T42;
  void * _T43;
  long _T44;
  struct Cyc_List_List * _T45;
  void * _T46;
  struct Cyc_Absyn_ArrayInfo _T47;
  struct Cyc_Absyn_ArrayInfo _T48;
  struct Cyc_Absyn_Tqual _T49;
  long _T4A;
  struct Cyc_Warn_String_Warn_Warg_struct _T4B;
  unsigned int _T4C;
  struct _fat_ptr _T4D;
  long _T4E;
  t = Cyc_Absyn_compress(t);
  { struct Cyc_Absyn_Tqual _T4F;
    void * _T50;
    _T0 = t;
    _T1 = (int *)_T0;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      _T3 = t;
      _T4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3;
      _T5 = _T4->f1;
      _T6 = (int *)_T5;
      _T7 = *_T6;
      switch (_T7) {
      case 24: 
	_T8 = t;
	_T9 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T8;
	_TA = _T9->f1;
	_TB = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TA;
	_TC = _TB->f1;
	_TD = _TC.KnownAggr;
	_TE = _TD.tag;
	if (_TE != 2) { goto _TL134;
	}
	_TF = t;
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T51 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TF;
	  _T10 = _T51->f1;
	  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T52 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T10;
	    _T11 = _T52->f1;
	    _T12 = _T11.KnownAggr;
	    _T13 = _T12.val;
	    { struct Cyc_Absyn_Aggrdecl * _T53 = *_T13;
	      _T50 = _T53;
	    }
	  }
	}{ struct Cyc_Absyn_Aggrdecl * ad = _T50;
	  _T14 = ad;
	  _T15 = _T14->impl;
	  if (_T15 != 0) { goto _TL136;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T51;
	    _T51.tag = 0;
	    _T51.f1 = _tag_fat("attempt to write abstract ",sizeof(char),
			       27U);
	    _T16 = _T51;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T51 = _T16;
	    { struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T52;
	      _T52.tag = 6;
	      _T52.f1 = ad;
	      _T17 = _T52;
	    }{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T52 = _T17;
	      void * _T53[2];
	      _T53[0] = &_T51;
	      _T53[1] = &_T52;
	      _T18 = loc;
	      _T19 = _tag_fat(_T53,sizeof(void *),2);
	      Cyc_Warn_err2(_T18,_T19);
	    }
	  }return 0;
	  _TL136: _T1A = ad;
	  _T1B = _T1A->impl;
	  _T50 = _T1B->fields;
	  goto _LL4;
	}_TL134: goto _LL9;
      case 23: 
	_T1C = t;
	_T1D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1C;
	_T1E = _T1D->f1;
	_T1F = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_T1E;
	_T20 = _T1F->f1;
	_T21 = _T20.KnownDatatypefield;
	_T22 = _T21.tag;
	if (_T22 != 2) { goto _TL138;
	}
	_T23 = t;
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T51 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T23;
	  _T24 = _T51->f1;
	  { struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _T52 = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_T24;
	    _T25 = _T52->f1;
	    _T26 = _T25.KnownDatatypefield;
	    _T27 = _T26.val;
	    _T50 = _T27.f1;
	  }
	}{ struct Cyc_Absyn_Datatypefield * df = _T50;
	  _T28 = df;
	  { struct Cyc_List_List * fs = _T28->typs;
	    _TL13D: if (fs != 0) { goto _TL13B;
	    }else { goto _TL13C;
	    }
	    _TL13B: _T29 = fs;
	    _T2A = _T29->hd;
	    { struct _tuple21 * _T51 = (struct _tuple21 *)_T2A;
	      void * _T52;
	      struct Cyc_Absyn_Tqual _T53;
	      { struct _tuple21 _T54 = *_T51;
		_T53 = _T54.f0;
		_T52 = _T54.f1;
	      }{ struct Cyc_Absyn_Tqual tq = _T53;
		void * t = _T52;
		_T2B = tq;
		_T2C = _T2B.real_const;
		if (! _T2C) { goto _TL13E;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T54;
		  _T54.tag = 0;
		  _T54.f1 = _tag_fat("attempt to overwrite a datatype field (",
				     sizeof(char),40U);
		  _T2D = _T54;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T54 = _T2D;
		  { struct Cyc_Warn_Qvar_Warn_Warg_struct _T55;
		    _T55.tag = 1;
		    _T2F = df;
		    _T55.f1 = _T2F->name;
		    _T2E = _T55;
		  }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T55 = _T2E;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T56;
		      _T56.tag = 0;
		      _T56.f1 = _tag_fat(") with a const member",sizeof(char),
					 22U);
		      _T30 = _T56;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T56 = _T30;
		      void * _T57[3];
		      _T57[0] = &_T54;
		      _T57[1] = &_T55;
		      _T57[2] = &_T56;
		      _T31 = loc;
		      _T32 = _tag_fat(_T57,sizeof(void *),3);
		      Cyc_Warn_err2(_T31,_T32);
		    }
		  }
		}return 0;
		_TL13E: _T33 = Cyc_Tcexp_check_writable_aggr(loc,t);
		if (_T33) { goto _TL140;
		}else { goto _TL142;
		}
		_TL142: return 0;
		_TL140: ;
	      }
	    }_T34 = fs;
	    fs = _T34->tl;
	    goto _TL13D;
	    _TL13C: ;
	  }return 1;
	}_TL138: goto _LL9;
      default: 
	goto _LL9;
      }
      ;
    case 7: 
      _T35 = t;
      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T51 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T35;
	_T50 = _T51->f3;
      }_LL4: { struct Cyc_List_List * fs = _T50;
	_TL146: if (fs != 0) { goto _TL144;
	}else { goto _TL145;
	}
	_TL144: _T36 = fs;
	_T37 = _T36->hd;
	{ struct Cyc_Absyn_Aggrfield * f = (struct Cyc_Absyn_Aggrfield *)_T37;
	  _T38 = f;
	  _T39 = _T38->tq;
	  _T3A = _T39.real_const;
	  if (! _T3A) { goto _TL147;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T51;
	    _T51.tag = 0;
	    _T51.f1 = _tag_fat("attempt to overwrite an aggregate with const member ",
			       sizeof(char),53U);
	    _T3B = _T51;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T51 = _T3B;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T52;
	      _T52.tag = 0;
	      _T3D = f;
	      _T3E = _T3D->name;
	      _T52.f1 = *_T3E;
	      _T3C = _T52;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _T3C;
	      void * _T53[2];
	      _T53[0] = &_T51;
	      _T53[1] = &_T52;
	      _T3F = loc;
	      _T40 = _tag_fat(_T53,sizeof(void *),2);
	      Cyc_Warn_err2(_T3F,_T40);
	    }
	  }return 0;
	  _TL147: _T41 = loc;
	  _T42 = f;
	  _T43 = _T42->type;
	  _T44 = Cyc_Tcexp_check_writable_aggr(_T41,_T43);
	  if (_T44) { goto _TL149;
	  }else { goto _TL14B;
	  }
	  _TL14B: return 0;
	  _TL149: ;
	}_T45 = fs;
	fs = _T45->tl;
	goto _TL146;
	_TL145: return 1;
      }
    case 5: 
      _T46 = t;
      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T51 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T46;
	_T47 = _T51->f1;
	_T50 = _T47.elt_type;
	_T48 = _T51->f1;
	_T4F = _T48.tq;
      }{ void * elt_type = _T50;
	struct Cyc_Absyn_Tqual tq = _T4F;
	_T49 = tq;
	_T4A = _T49.real_const;
	if (! _T4A) { goto _TL14C;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T51;
	  _T51.tag = 0;
	  _T51.f1 = _tag_fat("attempt to overwrite a const array",sizeof(char),
			     35U);
	  _T4B = _T51;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T51 = _T4B;
	  void * _T52[1];
	  _T52[0] = &_T51;
	  _T4C = loc;
	  _T4D = _tag_fat(_T52,sizeof(void *),1);
	  Cyc_Warn_err2(_T4C,_T4D);
	}return 0;
	_TL14C: _T4E = Cyc_Tcexp_check_writable_aggr(loc,elt_type);
	return _T4E;
      }
    default: 
      _LL9: return 1;
    }
    ;
  }
}
static void Cyc_Tcexp_check_writable(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_Exp * _T2;
  void * _T3;
  void * _T4;
  long _T5;
  struct Cyc_Absyn_Exp * _T6;
  int * _T7;
  unsigned int _T8;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T9;
  void * _TA;
  int * _TB;
  unsigned int _TC;
  void * _TD;
  void * _TE;
  void * _TF;
  void * _T10;
  struct Cyc_Absyn_Vardecl * _T11;
  struct Cyc_Absyn_Tqual _T12;
  long _T13;
  struct Cyc_Absyn_Exp * _T14;
  void * _T15;
  void * _T16;
  int * _T17;
  unsigned int _T18;
  struct Cyc_Absyn_PtrInfo _T19;
  struct Cyc_Absyn_ArrayInfo _T1A;
  struct Cyc_Absyn_Tqual _T1B;
  long _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  void * _T1E;
  void * _T1F;
  int * _T20;
  unsigned int _T21;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T22;
  void * _T23;
  int * _T24;
  int _T25;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T26;
  void * _T27;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T28;
  union Cyc_Absyn_AggrInfo _T29;
  struct _union_AggrInfo_KnownAggr _T2A;
  unsigned int _T2B;
  void * _T2C;
  union Cyc_Absyn_AggrInfo _T2D;
  struct _union_AggrInfo_KnownAggr _T2E;
  struct Cyc_Absyn_Aggrfield * _T2F;
  struct Cyc_Absyn_Aggrdecl * * _T30;
  struct Cyc_Absyn_Aggrdecl * _T31;
  struct _fat_ptr * _T32;
  struct Cyc_Absyn_Aggrfield * _T33;
  struct Cyc_Absyn_Tqual _T34;
  long _T35;
  struct Cyc_Absyn_Aggrfield * _T36;
  struct Cyc_Absyn_Tqual _T37;
  long _T38;
  struct Cyc_Absyn_Exp * _T39;
  void * _T3A;
  void * _T3B;
  int * _T3C;
  int _T3D;
  struct Cyc_Absyn_PtrInfo _T3E;
  struct Cyc_Absyn_PtrInfo _T3F;
  struct Cyc_Absyn_Tqual _T40;
  long _T41;
  int * _T42;
  unsigned int _T43;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T44;
  void * _T45;
  int * _T46;
  int _T47;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T48;
  void * _T49;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T4A;
  union Cyc_Absyn_AggrInfo _T4B;
  struct _union_AggrInfo_KnownAggr _T4C;
  unsigned int _T4D;
  void * _T4E;
  union Cyc_Absyn_AggrInfo _T4F;
  struct _union_AggrInfo_KnownAggr _T50;
  struct Cyc_Absyn_Aggrfield * _T51;
  struct Cyc_Absyn_Aggrdecl * * _T52;
  struct Cyc_Absyn_Aggrdecl * _T53;
  struct _fat_ptr * _T54;
  struct Cyc_Absyn_Aggrfield * _T55;
  struct Cyc_Absyn_Tqual _T56;
  long _T57;
  struct Cyc_Absyn_Aggrfield * _T58;
  struct Cyc_Absyn_Tqual _T59;
  long _T5A;
  struct Cyc_Absyn_Exp * _T5B;
  void * _T5C;
  void * _T5D;
  int * _T5E;
  unsigned int _T5F;
  struct Cyc_Absyn_PtrInfo _T60;
  struct Cyc_Absyn_ArrayInfo _T61;
  struct Cyc_Absyn_Tqual _T62;
  long _T63;
  struct Cyc_Warn_String_Warn_Warg_struct _T64;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T65;
  struct Cyc_Absyn_Exp * _T66;
  unsigned int _T67;
  struct _fat_ptr _T68;
  _T0 = e;
  _T1 = _T0->loc;
  _T2 = e;
  _T3 = _T2->topt;
  _T4 = _check_null(_T3);
  _T5 = Cyc_Tcexp_check_writable_aggr(_T1,_T4);
  if (_T5) { goto _TL14E;
  }else { goto _TL150;
  }
  _TL150: return;
  _TL14E: _T6 = e;
  { void * _T69 = _T6->r;
    struct _fat_ptr * _T6A;
    struct Cyc_Absyn_Exp * _T6B;
    struct Cyc_Absyn_Exp * _T6C;
    struct Cyc_Absyn_Vardecl * _T6D;
    _T7 = (int *)_T69;
    _T8 = *_T7;
    switch (_T8) {
    case 1: 
      _T9 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T69;
      _TA = _T9->f1;
      _TB = (int *)_TA;
      _TC = *_TB;
      switch (_TC) {
      case 3: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T69;
	  _TD = _T6E->f1;
	  { struct Cyc_Absyn_Param_b_Absyn_Binding_struct * _T6F = (struct Cyc_Absyn_Param_b_Absyn_Binding_struct *)_TD;
	    _T6D = _T6F->f1;
	  }
	}{ struct Cyc_Absyn_Vardecl * vd = _T6D;
	  _T6D = vd;
	  goto _LL4;
	}
      case 4: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T69;
	  _TE = _T6E->f1;
	  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T6F = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_TE;
	    _T6D = _T6F->f1;
	  }
	}_LL4: { struct Cyc_Absyn_Vardecl * vd = _T6D;
	  _T6D = vd;
	  goto _LL6;
	}
      case 5: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T69;
	  _TF = _T6E->f1;
	  { struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T6F = (struct Cyc_Absyn_Pat_b_Absyn_Binding_struct *)_TF;
	    _T6D = _T6F->f1;
	  }
	}_LL6: { struct Cyc_Absyn_Vardecl * vd = _T6D;
	  _T6D = vd;
	  goto _LL8;
	}
      case 1: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T69;
	  _T10 = _T6E->f1;
	  { struct Cyc_Absyn_Global_b_Absyn_Binding_struct * _T6F = (struct Cyc_Absyn_Global_b_Absyn_Binding_struct *)_T10;
	    _T6D = _T6F->f1;
	  }
	}_LL8: { struct Cyc_Absyn_Vardecl * vd = _T6D;
	  _T11 = vd;
	  _T12 = _T11->tq;
	  _T13 = _T12.real_const;
	  if (_T13) { goto _TL153;
	  }else { goto _TL155;
	  }
	  _TL155: return;
	  _TL153: goto _LL0;
	}
      default: 
	goto _LL15;
      }
      ;
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T69;
	_T6C = _T6E->f1;
	_T6B = _T6E->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T6C;
	struct Cyc_Absyn_Exp * e2 = _T6B;
	_T14 = e1;
	_T15 = _T14->topt;
	_T16 = _check_null(_T15);
	{ void * _T6E = Cyc_Absyn_compress(_T16);
	  struct Cyc_Absyn_Tqual _T6F;
	  _T17 = (int *)_T6E;
	  _T18 = *_T17;
	  switch (_T18) {
	  case 4: 
	    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T70 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T6E;
	      _T19 = _T70->f1;
	      _T6F = _T19.elt_tq;
	    }{ struct Cyc_Absyn_Tqual tq = _T6F;
	      _T6F = tq;
	      goto _LL1B;
	    }
	  case 5: 
	    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T70 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T6E;
	      _T1A = _T70->f1;
	      _T6F = _T1A.tq;
	    }_LL1B: { struct Cyc_Absyn_Tqual tq = _T6F;
	      _T1B = tq;
	      _T1C = _T1B.real_const;
	      if (_T1C) { goto _TL157;
	      }else { goto _TL159;
	      }
	      _TL159: return;
	      _TL157: goto _LL17;
	    }
	  default: 
	    goto _LL17;
	  }
	  _LL17: ;
	}goto _LL0;
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T69;
	_T6C = _T6E->f1;
	_T6A = _T6E->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T6C;
	struct _fat_ptr * f = _T6A;
	_T1D = e1;
	_T1E = _T1D->topt;
	_T1F = _check_null(_T1E);
	{ void * _T6E = Cyc_Absyn_compress(_T1F);
	  struct Cyc_List_List * _T6F;
	  struct Cyc_Absyn_Aggrdecl * * _T70;
	  _T20 = (int *)_T6E;
	  _T21 = *_T20;
	  switch (_T21) {
	  case 0: 
	    _T22 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6E;
	    _T23 = _T22->f1;
	    _T24 = (int *)_T23;
	    _T25 = *_T24;
	    if (_T25 != 24) { goto _TL15B;
	    }
	    _T26 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6E;
	    _T27 = _T26->f1;
	    _T28 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T27;
	    _T29 = _T28->f1;
	    _T2A = _T29.KnownAggr;
	    _T2B = _T2A.tag;
	    if (_T2B != 2) { goto _TL15D;
	    }
	    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T71 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6E;
	      _T2C = _T71->f1;
	      { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T72 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T2C;
		_T2D = _T72->f1;
		_T2E = _T2D.KnownAggr;
		_T70 = _T2E.val;
	      }
	    }{ struct Cyc_Absyn_Aggrdecl * * adp = _T70;
	      if (adp != 0) { goto _TL15F;
	      }
	      _T2F = 0;
	      goto _TL160;
	      _TL15F: _T30 = adp;
	      _T31 = *_T30;
	      _T32 = f;
	      _T2F = Cyc_Absyn_lookup_decl_field(_T31,_T32);
	      _TL160: { struct Cyc_Absyn_Aggrfield * sf = _T2F;
		if (sf == 0) { goto _TL163;
		}else { goto _TL164;
		}
		_TL164: _T33 = sf;
		_T34 = _T33->tq;
		_T35 = _T34.real_const;
		if (_T35) { goto _TL161;
		}else { goto _TL163;
		}
		_TL163: return;
		_TL161: goto _LL1E;
	      }
	    }_TL15D: goto _LL23;
	    _TL15B: goto _LL23;
	  case 7: 
	    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T71 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T6E;
	      _T6F = _T71->f3;
	    }{ struct Cyc_List_List * fs = _T6F;
	      struct Cyc_Absyn_Aggrfield * sf = Cyc_Absyn_lookup_field(fs,
								       f);
	      if (sf == 0) { goto _TL167;
	      }else { goto _TL168;
	      }
	      _TL168: _T36 = sf;
	      _T37 = _T36->tq;
	      _T38 = _T37.real_const;
	      if (_T38) { goto _TL165;
	      }else { goto _TL167;
	      }
	      _TL167: return;
	      _TL165: goto _LL1E;
	    }
	  default: 
	    _LL23: goto _LL1E;
	  }
	  _LL1E: ;
	}goto _LL0;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T69;
	_T6C = _T6E->f1;
	_T6A = _T6E->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T6C;
	struct _fat_ptr * f = _T6A;
	_T39 = e1;
	_T3A = _T39->topt;
	_T3B = _check_null(_T3A);
	{ void * _T6E = Cyc_Absyn_compress(_T3B);
	  struct Cyc_Absyn_Tqual _T6F;
	  void * _T70;
	  _T3C = (int *)_T6E;
	  _T3D = *_T3C;
	  if (_T3D != 4) { goto _TL169;
	  }
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T71 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T6E;
	    _T3E = _T71->f1;
	    _T70 = _T3E.elt_type;
	    _T3F = _T71->f1;
	    _T6F = _T3F.elt_tq;
	  }{ void * elt_typ = _T70;
	    struct Cyc_Absyn_Tqual tq = _T6F;
	    _T40 = tq;
	    _T41 = _T40.real_const;
	    if (_T41) { goto _TL16B;
	    }else { goto _TL16D;
	    }
	    _TL16D: { void * _T71 = Cyc_Absyn_compress(elt_typ);
	      struct Cyc_List_List * _T72;
	      struct Cyc_Absyn_Aggrdecl * * _T73;
	      _T42 = (int *)_T71;
	      _T43 = *_T42;
	      switch (_T43) {
	      case 0: 
		_T44 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T71;
		_T45 = _T44->f1;
		_T46 = (int *)_T45;
		_T47 = *_T46;
		if (_T47 != 24) { goto _TL16F;
		}
		_T48 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T71;
		_T49 = _T48->f1;
		_T4A = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T49;
		_T4B = _T4A->f1;
		_T4C = _T4B.KnownAggr;
		_T4D = _T4C.tag;
		if (_T4D != 2) { goto _TL171;
		}
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T74 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T71;
		  _T4E = _T74->f1;
		  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T75 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T4E;
		    _T4F = _T75->f1;
		    _T50 = _T4F.KnownAggr;
		    _T73 = _T50.val;
		  }
		}{ struct Cyc_Absyn_Aggrdecl * * adp = _T73;
		  if (adp != 0) { goto _TL173;
		  }
		  _T51 = 0;
		  goto _TL174;
		  _TL173: _T52 = adp;
		  _T53 = *_T52;
		  _T54 = f;
		  _T51 = Cyc_Absyn_lookup_decl_field(_T53,_T54);
		  _TL174: { struct Cyc_Absyn_Aggrfield * sf = _T51;
		    if (sf == 0) { goto _TL177;
		    }else { goto _TL178;
		    }
		    _TL178: _T55 = sf;
		    _T56 = _T55->tq;
		    _T57 = _T56.real_const;
		    if (_T57) { goto _TL175;
		    }else { goto _TL177;
		    }
		    _TL177: return;
		    _TL175: goto _LL2A;
		  }
		}_TL171: goto _LL2F;
		_TL16F: goto _LL2F;
	      case 7: 
		{ struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T74 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T71;
		  _T72 = _T74->f3;
		}{ struct Cyc_List_List * fs = _T72;
		  struct Cyc_Absyn_Aggrfield * sf = Cyc_Absyn_lookup_field(fs,
									   f);
		  if (sf == 0) { goto _TL17B;
		  }else { goto _TL17C;
		  }
		  _TL17C: _T58 = sf;
		  _T59 = _T58->tq;
		  _T5A = _T59.real_const;
		  if (_T5A) { goto _TL179;
		  }else { goto _TL17B;
		  }
		  _TL17B: return;
		  _TL179: goto _LL2A;
		}
	      default: 
		_LL2F: goto _LL2A;
	      }
	      _LL2A: ;
	    }goto _TL16C;
	    _TL16B: _TL16C: goto _LL25;
	  }_TL169: goto _LL25;
	  _LL25: ;
	}goto _LL0;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T69;
	_T6C = _T6E->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T6C;
	_T5B = e1;
	_T5C = _T5B->topt;
	_T5D = _check_null(_T5C);
	{ void * _T6E = Cyc_Absyn_compress(_T5D);
	  struct Cyc_Absyn_Tqual _T6F;
	  _T5E = (int *)_T6E;
	  _T5F = *_T5E;
	  switch (_T5F) {
	  case 4: 
	    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T70 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T6E;
	      _T60 = _T70->f1;
	      _T6F = _T60.elt_tq;
	    }{ struct Cyc_Absyn_Tqual tq = _T6F;
	      _T6F = tq;
	      goto _LL35;
	    }
	  case 5: 
	    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T70 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T6E;
	      _T61 = _T70->f1;
	      _T6F = _T61.tq;
	    }_LL35: { struct Cyc_Absyn_Tqual tq = _T6F;
	      _T62 = tq;
	      _T63 = _T62.real_const;
	      if (_T63) { goto _TL17E;
	      }else { goto _TL180;
	      }
	      _TL180: return;
	      _TL17E: goto _LL31;
	    }
	  default: 
	    goto _LL31;
	  }
	  _LL31: ;
	}goto _LL0;
      }
    case 12: 
      { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T69;
	_T6C = _T6E->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T6C;
	_T6C = e1;
	goto _LL14;
      }
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T6E = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T69;
	_T6C = _T6E->f1;
      }_LL14: { struct Cyc_Absyn_Exp * e1 = _T6C;
	Cyc_Tcexp_check_writable(te,e1);
	return;
      }
    default: 
      _LL15: goto _LL0;
    }
    _LL0: ;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T69;
    _T69.tag = 0;
    _T69.f1 = _tag_fat("attempt to write a const location: ",sizeof(char),
		       36U);
    _T64 = _T69;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T69 = _T64;
    { struct Cyc_Warn_Exp_Warn_Warg_struct _T6A;
      _T6A.tag = 4;
      _T6A.f1 = e;
      _T65 = _T6A;
    }{ struct Cyc_Warn_Exp_Warn_Warg_struct _T6A = _T65;
      void * _T6B[2];
      _T6B[0] = &_T69;
      _T6B[1] = &_T6A;
      _T66 = e;
      _T67 = _T66->loc;
      _T68 = _tag_fat(_T6B,sizeof(void *),2);
      Cyc_Warn_err2(_T67,_T68);
    }
  }
}
static void * Cyc_Tcexp_tcIncrement(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				    void * * topt,struct Cyc_Absyn_Exp * e,
				    enum Cyc_Absyn_Incrementor i) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Absyn_Exp * _T1;
  long _T2;
  void * _T3;
  struct Cyc_Warn_String_Warn_Warg_struct _T4;
  struct Cyc_Tcenv_Tenv * _T5;
  unsigned int _T6;
  void * * _T7;
  struct _fat_ptr _T8;
  struct Cyc_Absyn_Exp * _T9;
  void * _TA;
  long _TB;
  void * _TC;
  unsigned int _TD;
  long _TE;
  struct Cyc_Absyn_Exp * _TF;
  unsigned int _T10;
  void * _T11;
  void * _T12;
  void * _T13;
  long _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T16;
  struct Cyc_Absyn_Exp * _T17;
  unsigned int _T18;
  struct _fat_ptr _T19;
  void * _T1A;
  void * * _T1B;
  long _T1C;
  void * _T1D;
  void * * _T1E;
  long _T1F;
  enum Cyc_Absyn_Incrementor _T20;
  int _T21;
  enum Cyc_Absyn_Incrementor _T22;
  int _T23;
  struct Cyc_Absyn_Kind * _T24;
  struct Cyc_Absyn_Kind * _T25;
  struct Cyc_Absyn_Kind * _T26;
  long _T27;
  struct Cyc_Absyn_Exp * _T28;
  unsigned int _T29;
  struct _fat_ptr _T2A;
  struct _fat_ptr _T2B;
  struct Cyc_List_List * _T2C;
  void * _T2D;
  long _T2E;
  struct Cyc_Absyn_Exp * _T2F;
  unsigned int _T30;
  struct _fat_ptr _T31;
  struct _fat_ptr _T32;
  struct Cyc_Warn_String_Warn_Warg_struct _T33;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T34;
  struct Cyc_Absyn_Exp * _T35;
  unsigned int _T36;
  struct _fat_ptr _T37;
  void * _T38;
  _T0 = Cyc_Tcenv_enter_lhs(te);
  _T1 = e;
  Cyc_Tcexp_tcExpNoPromote(_T0,0,_T1);
  _T2 = Cyc_Absyn_is_lvalue(e);
  if (_T2) { goto _TL181;
  }else { goto _TL183;
  }
  _TL183: { struct Cyc_Warn_String_Warn_Warg_struct _T39;
    _T39.tag = 0;
    _T39.f1 = _tag_fat("increment/decrement of non-lvalue",sizeof(char),34U);
    _T4 = _T39;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T39 = _T4;
    void * _T3A[1];
    _T3A[0] = &_T39;
    _T5 = te;
    _T6 = loc;
    _T7 = topt;
    _T8 = _tag_fat(_T3A,sizeof(void *),1);
    _T3 = Cyc_Tcexp_expr_err(_T5,_T6,_T7,_T8);
  }return _T3;
  _TL181: Cyc_Tcexp_check_writable(te,e);
  _T9 = e;
  _TA = _T9->topt;
  { void * t = _check_null(_TA);
    _TB = Cyc_Tcutil_is_numeric(e);
    if (_TB) { goto _TL184;
    }else { goto _TL186;
    }
    _TL186: { void * pb = Cyc_Tcutil_get_pointer_bounds(t);
      void * telt = Cyc_Absyn_void_type;
      _TC = pb;
      _TD = (unsigned int)_TC;
      if (! _TD) { goto _TL187;
      }
      _TE = Cyc_Tcutil_is_cvar_type(pb);
      if (! _TE) { goto _TL187;
      }
      _TF = e;
      _T10 = _TF->loc;
      _T11 = pb;
      _T12 = Cyc_Absyn_fatconst();
      _T13 = Cyc_BansheeIf_equality_constraint(_T11,_T12);
      _T14 = Cyc_BansheeIf_add_constraint(_T10,_T13);
      if (_T14) { goto _TL189;
      }else { goto _TL18B;
      }
      _TL18B: { struct Cyc_Warn_String_Warn_Warg_struct _T39;
	_T39.tag = 0;
	_T39.f1 = _tag_fat("constraint failure: expecting arithmetic or ? type but found ",
			   sizeof(char),62U);
	_T15 = _T39;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T39 = _T15;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3A;
	  _T3A.tag = 2;
	  _T3A.f1 = t;
	  _T16 = _T3A;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3A = _T16;
	  void * _T3B[2];
	  _T3B[0] = &_T39;
	  _T3B[1] = &_T3A;
	  _T17 = e;
	  _T18 = _T17->loc;
	  _T19 = _tag_fat(_T3B,sizeof(void *),2);
	  Cyc_Warn_err2(_T18,_T19);
	}
      }goto _TL18A;
      _TL189: _TL18A: goto _TL188;
      _TL187: _T1A = t;
      _T1B = &telt;
      _T1C = Cyc_Tcutil_is_fat_pointer_type_elt(_T1A,_T1B);
      if (_T1C) { goto _TL18E;
      }else { goto _TL18F;
      }
      _TL18F: _T1D = t;
      _T1E = &telt;
      _T1F = Cyc_Tcutil_is_zero_pointer_type_elt(_T1D,_T1E);
      if (_T1F) { goto _TL190;
      }else { goto _TL18C;
      }
      _TL190: _T20 = i;
      _T21 = (int)_T20;
      if (_T21 == 0) { goto _TL18E;
      }else { goto _TL191;
      }
      _TL191: _T22 = i;
      _T23 = (int)_T22;
      if (_T23 == 1) { goto _TL18E;
      }else { goto _TL18C;
      }
      _TL18E: _T24 = Cyc_Tcutil_type_kind(telt);
      _T25 = &Cyc_Kinds_mk;
      _T26 = (struct Cyc_Absyn_Kind *)_T25;
      _T27 = Cyc_Kinds_kind_leq(_T24,_T26);
      if (_T27) { goto _TL192;
      }else { goto _TL194;
      }
      _TL194: _T28 = e;
      _T29 = _T28->loc;
      _T2A = _tag_fat("can't perform arithmetic on abstract pointer type",
		      sizeof(char),50U);
      _T2B = _tag_fat(0U,sizeof(void *),0);
      Cyc_Warn_err(_T29,_T2A,_T2B);
      goto _TL193;
      _TL192: _TL193: _T2C = Cyc_Tcenv_curr_aquals_bounds(te);
      _T2D = t;
      _T2E = Cyc_Tcutil_is_noalias_pointer(_T2C,_T2D,1);
      if (! _T2E) { goto _TL195;
      }
      _T2F = e;
      _T30 = _T2F->loc;
      _T31 = _tag_fat("can't perform arithmetic on unique pointer",sizeof(char),
		      43U);
      _T32 = _tag_fat(0U,sizeof(void *),0);
      Cyc_Warn_err(_T30,_T31,_T32);
      goto _TL196;
      _TL195: _TL196: goto _TL18D;
      _TL18C: { struct Cyc_Warn_String_Warn_Warg_struct _T39;
	_T39.tag = 0;
	_T39.f1 = _tag_fat("expecting arithmetic or ? type but found ",sizeof(char),
			   42U);
	_T33 = _T39;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T39 = _T33;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3A;
	  _T3A.tag = 2;
	  _T3A.f1 = t;
	  _T34 = _T3A;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3A = _T34;
	  void * _T3B[2];
	  _T3B[0] = &_T39;
	  _T3B[1] = &_T3A;
	  _T35 = e;
	  _T36 = _T35->loc;
	  _T37 = _tag_fat(_T3B,sizeof(void *),2);
	  Cyc_Warn_err2(_T36,_T37);
	}
      }_TL18D: _TL188: ;
    }goto _TL185;
    _TL184: _TL185: _T38 = t;
    return _T38;
  }
}
static void * Cyc_Tcexp_tcConditional(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				      void * * topt,struct Cyc_Absyn_Exp * e1,
				      struct Cyc_Absyn_Exp * e2,struct Cyc_Absyn_Exp * e3) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Core_Opt * _T3;
  long _T4;
  struct Cyc_Core_Opt * _T5;
  struct Cyc_Core_Opt * _T6;
  struct Cyc_Core_Opt * _T7;
  struct Cyc_Core_Opt * _T8;
  struct Cyc_List_List _T9;
  struct Cyc_List_List _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  long _T10;
  struct Cyc_Warn_String_Warn_Warg_struct _T11;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T12;
  struct Cyc_Absyn_Exp * _T13;
  struct Cyc_Warn_String_Warn_Warg_struct _T14;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T15;
  struct Cyc_Absyn_Exp * _T16;
  unsigned int _T17;
  struct _fat_ptr _T18;
  void * _T19;
  _T0 = Cyc_Tcenv_clear_abstract_val_ok(te);
  _T1 = e1;
  _T2 = _tag_fat("conditional expression",sizeof(char),23U);
  Cyc_Tcexp_tcTest(_T0,_T1,_T2);
  Cyc_Tcexp_tcExp(te,topt,e2);
  Cyc_Tcexp_tcExp(te,topt,e3);
  _T4 = Cyc_Tcenv_abstract_val_ok(te);
  if (! _T4) { goto _TL197;
  }
  _T5 = &Cyc_Kinds_ako;
  _T3 = (struct Cyc_Core_Opt *)_T5;
  goto _TL198;
  _TL197: _T6 = &Cyc_Kinds_mko;
  _T3 = (struct Cyc_Core_Opt *)_T6;
  _TL198: { struct Cyc_Core_Opt * ko = _T3;
    _T7 = ko;
    _T8 = Cyc_Tcenv_lookup_opt_type_vars(te);
    { void * t = Cyc_Absyn_new_evar(_T7,_T8);
      { struct Cyc_List_List _T1A;
	_T1A.hd = e3;
	_T1A.tl = 0;
	_T9 = _T1A;
      }{ struct Cyc_List_List l1 = _T9;
	{ struct Cyc_List_List _T1A;
	  _T1A.hd = e2;
	  _TB = &l1;
	  _T1A.tl = (struct Cyc_List_List *)_TB;
	  _TA = _T1A;
	}{ struct Cyc_List_List l2 = _TA;
	  _TC = Cyc_Tcenv_curr_aquals_bounds(te);
	  _TD = t;
	  _TE = &l2;
	  _TF = (struct Cyc_List_List *)_TE;
	  _T10 = Cyc_Tcutil_coerce_list(_TC,_TD,_TF);
	  if (_T10) { goto _TL199;
	  }else { goto _TL19B;
	  }
	  _TL19B: { struct Cyc_Warn_String_Warn_Warg_struct _T1A;
	    _T1A.tag = 0;
	    _T1A.f1 = _tag_fat("conditional clause types do not match: ",
			       sizeof(char),40U);
	    _T11 = _T1A;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1A = _T11;
	    { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T1B;
	      _T1B.tag = 3;
	      _T13 = e2;
	      _T1B.f1 = _T13->topt;
	      _T12 = _T1B;
	    }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T1B = _T12;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T1C;
		_T1C.tag = 0;
		_T1C.f1 = _tag_fat(" != ",sizeof(char),5U);
		_T14 = _T1C;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1C = _T14;
		{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T1D;
		  _T1D.tag = 3;
		  _T16 = e3;
		  _T1D.f1 = _T16->topt;
		  _T15 = _T1D;
		}{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T1D = _T15;
		  void * _T1E[4];
		  _T1E[0] = &_T1A;
		  _T1E[1] = &_T1B;
		  _T1E[2] = &_T1C;
		  _T1E[3] = &_T1D;
		  _T17 = loc;
		  _T18 = _tag_fat(_T1E,sizeof(void *),4);
		  Cyc_Tcexp_err_and_explain(_T17,_T18);
		}
	      }
	    }
	  }goto _TL19A;
	  _TL199: _TL19A: _T19 = t;
	  return _T19;
	}
      }
    }
  }
}
static void * Cyc_Tcexp_tcAnd(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
			      struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Tcenv_Tenv * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct _fat_ptr _T5;
  void * _T6;
  _T0 = te;
  _T1 = e1;
  _T2 = _tag_fat("logical-and expression",sizeof(char),23U);
  Cyc_Tcexp_tcTest(_T0,_T1,_T2);
  _T3 = te;
  _T4 = e2;
  _T5 = _tag_fat("logical-and expression",sizeof(char),23U);
  Cyc_Tcexp_tcTest(_T3,_T4,_T5);
  _T6 = Cyc_Absyn_sint_type;
  return _T6;
}
static void * Cyc_Tcexp_tcOr(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
			     struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Tcenv_Tenv * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct _fat_ptr _T5;
  void * _T6;
  _T0 = te;
  _T1 = e1;
  _T2 = _tag_fat("logical-or expression",sizeof(char),22U);
  Cyc_Tcexp_tcTest(_T0,_T1,_T2);
  _T3 = te;
  _T4 = e2;
  _T5 = _tag_fat("logical-or expression",sizeof(char),22U);
  Cyc_Tcexp_tcTest(_T3,_T4,_T5);
  _T6 = Cyc_Absyn_sint_type;
  return _T6;
}
static void * Cyc_Tcexp_tcAssignOp(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				   void * * topt,struct Cyc_Absyn_Exp * e1,
				   struct Cyc_Absyn_PrimopOpt * po,struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Tcenv_Tenv * _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct Cyc_Absyn_Exp * _T3;
  void * _T4;
  struct Cyc_Tcenv_Tenv * _T5;
  void * * _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Absyn_Exp * _T8;
  void * _T9;
  int * _TA;
  int _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  unsigned int _TD;
  struct _fat_ptr _TE;
  struct Cyc_Absyn_Kind * _TF;
  struct Cyc_Absyn_Kind * _T10;
  struct Cyc_Absyn_Kind * _T11;
  long _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  unsigned int _T14;
  struct _fat_ptr _T15;
  long _T16;
  void * _T17;
  struct Cyc_Warn_String_Warn_Warg_struct _T18;
  struct Cyc_Tcenv_Tenv * _T19;
  unsigned int _T1A;
  void * * _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  unsigned int _T1E;
  struct Cyc_List_List * _T1F;
  void * _T20;
  struct Cyc_Absyn_Exp * _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_Absyn_Exp * _T23;
  void * _T24;
  long _T25;
  void * _T26;
  struct Cyc_Warn_String_Warn_Warg_struct _T27;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T28;
  struct Cyc_Warn_String_Warn_Warg_struct _T29;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T2A;
  struct Cyc_Tcenv_Tenv * _T2B;
  unsigned int _T2C;
  void * * _T2D;
  struct _fat_ptr _T2E;
  void * _T2F;
  void * _T30;
  struct Cyc_Tcenv_Tenv * _T31;
  unsigned int _T32;
  struct Cyc_Absyn_PrimopOpt * _T33;
  enum Cyc_Absyn_Primop * _T34;
  struct Cyc_Absyn_Exp * _T35;
  struct Cyc_Absyn_Exp * _T36;
  long _T37;
  long _T38;
  long _T39;
  long _T3A;
  void * _T3B;
  long _T3C;
  long _T3D;
  long _T3E;
  long _T3F;
  void * _T40;
  struct Cyc_Warn_String_Warn_Warg_struct _T41;
  struct Cyc_Warn_String_Warn_Warg_struct _T42;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T43;
  struct Cyc_Warn_String_Warn_Warg_struct _T44;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T45;
  struct Cyc_Tcenv_Tenv * _T46;
  unsigned int _T47;
  void * * _T48;
  struct _fat_ptr _T49;
  void * _T4A;
  void * _T4B;
  _T0 = Cyc_Tcenv_enter_notreadctxt(te);
  _T1 = Cyc_Tcenv_enter_lhs(_T0);
  _T2 = e1;
  Cyc_Tcexp_tcExpNoPromote(_T1,0,_T2);
  _T3 = e1;
  _T4 = _T3->topt;
  { void * t1 = _check_null(_T4);
    _T5 = te;
    _T6 = &t1;
    _T7 = e2;
    Cyc_Tcexp_tcExp(_T5,_T6,_T7);
    _T8 = e2;
    _T9 = _T8->topt;
    { void * t2 = _check_null(_T9);
      { void * _T4C = Cyc_Absyn_compress(t1);
	_TA = (int *)_T4C;
	_TB = *_TA;
	if (_TB != 5) { goto _TL19C;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T4D;
	  _T4D.tag = 0;
	  _T4D.f1 = _tag_fat("cannot assign to an array",sizeof(char),26U);
	  _TC = _T4D;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T4D = _TC;
	  void * _T4E[1];
	  _T4E[0] = &_T4D;
	  _TD = loc;
	  _TE = _tag_fat(_T4E,sizeof(void *),1);
	  Cyc_Warn_err2(_TD,_TE);
	}goto _LL0;
	_TL19C: goto _LL0;
	_LL0: ;
      }_TF = Cyc_Tcutil_type_kind(t1);
      _T10 = &Cyc_Kinds_mk;
      _T11 = (struct Cyc_Absyn_Kind *)_T10;
      _T12 = Cyc_Kinds_kind_leq(_TF,_T11);
      if (_T12) { goto _TL19E;
      }else { goto _TL1A0;
      }
      _TL1A0: { struct Cyc_Warn_String_Warn_Warg_struct _T4C;
	_T4C.tag = 0;
	_T4C.f1 = _tag_fat("type is abstract (can't determine size)",sizeof(char),
			   40U);
	_T13 = _T4C;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T4C = _T13;
	void * _T4D[1];
	_T4D[0] = &_T4C;
	_T14 = loc;
	_T15 = _tag_fat(_T4D,sizeof(void *),1);
	Cyc_Warn_err2(_T14,_T15);
      }goto _TL19F;
      _TL19E: _TL19F: _T16 = Cyc_Absyn_is_lvalue(e1);
      if (_T16) { goto _TL1A1;
      }else { goto _TL1A3;
      }
      _TL1A3: { struct Cyc_Warn_String_Warn_Warg_struct _T4C;
	_T4C.tag = 0;
	_T4C.f1 = _tag_fat("assignment to non-lvalue",sizeof(char),25U);
	_T18 = _T4C;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T4C = _T18;
	void * _T4D[1];
	_T4D[0] = &_T4C;
	_T19 = te;
	_T1A = loc;
	_T1B = topt;
	_T1C = _tag_fat(_T4D,sizeof(void *),1);
	_T17 = Cyc_Tcexp_expr_err(_T19,_T1A,_T1B,_T1C);
      }return _T17;
      _TL1A1: Cyc_Tcexp_check_writable(te,e1);
      if (po != 0) { goto _TL1A4;
      }
      _T1D = e2;
      _T1E = _T1D->loc;
      _T1F = Cyc_Tcenv_curr_aquals_bounds(te);
      _T20 = t2;
      _T21 = e2;
      Cyc_Tcexp_check_consume(_T1E,_T1F,_T20,_T21);
      _T22 = Cyc_Tcenv_curr_aquals_bounds(te);
      _T23 = e2;
      _T24 = t1;
      _T25 = Cyc_Tcutil_coerce_assign(_T22,_T23,_T24);
      if (_T25) { goto _TL1A6;
      }else { goto _TL1A8;
      }
      _TL1A8: { struct Cyc_Warn_String_Warn_Warg_struct _T4C;
	_T4C.tag = 0;
	_T4C.f1 = _tag_fat("type mismatch: ",sizeof(char),16U);
	_T27 = _T4C;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T4C = _T27;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T4D;
	  _T4D.tag = 2;
	  _T4D.f1 = t1;
	  _T28 = _T4D;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T4D = _T28;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T4E;
	    _T4E.tag = 0;
	    _T4E.f1 = _tag_fat(" != ",sizeof(char),5U);
	    _T29 = _T4E;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T4E = _T29;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T4F;
	      _T4F.tag = 2;
	      _T4F.f1 = t2;
	      _T2A = _T4F;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T4F = _T2A;
	      void * _T50[4];
	      _T50[0] = &_T4C;
	      _T50[1] = &_T4D;
	      _T50[2] = &_T4E;
	      _T50[3] = &_T4F;
	      _T2B = te;
	      _T2C = loc;
	      _T2D = topt;
	      _T2E = _tag_fat(_T50,sizeof(void *),4);
	      _T26 = Cyc_Tcexp_expr_err(_T2B,_T2C,_T2D,_T2E);
	    }
	  }
	}
      }{ void * result = _T26;
	Cyc_Unify_unify(t1,t2);
	Cyc_Unify_explain_failure();
	_T2F = result;
	return _T2F;
      }_TL1A6: _T30 = t1;
      return _T30;
      _TL1A4: { struct Cyc_Absyn_Exp * e1copy = Cyc_Absyn_copy_exp(e1);
	_T31 = te;
	_T32 = loc;
	_T33 = po;
	_T34 = &_T33->v;
	_T35 = e1copy;
	_T36 = e2;
	{ void * t_result = Cyc_Tcexp_tcBinPrimop(_T31,_T32,0,_T34,_T35,_T36);
	  _T37 = Cyc_Unify_unify(t_result,t1);
	  if (_T37) { goto _TL1A9;
	  }else { goto _TL1AB;
	  }
	  _TL1AB: _T38 = Cyc_Tcutil_is_arithmetic_type(t_result);
	  if (! _T38) { goto _TL1A9;
	  }
	  _T39 = Cyc_Tcutil_is_arithmetic_type(t1);
	  if (! _T39) { goto _TL1A9;
	  }
	  _T3A = Cyc_Tcutil_is_tag_type(t1);
	  if (_T3A) { goto _TL1A9;
	  }else { goto _TL1AC;
	  }
	  _TL1AC: _T3B = t1;
	  return _T3B;
	  _TL1A9: _T3C = Cyc_Unify_unify(t_result,t1);
	  if (_T3C) { goto _TL1AD;
	  }else { goto _TL1B0;
	  }
	  _TL1B0: _T3D = Cyc_Tcutil_is_arithmetic_type(t_result);
	  if (_T3D) { goto _TL1B2;
	  }else { goto _TL1AF;
	  }
	  _TL1B2: _T3E = Cyc_Tcutil_is_arithmetic_type(t1);
	  if (_T3E) { goto _TL1B1;
	  }else { goto _TL1AF;
	  }
	  _TL1B1: _T3F = Cyc_Tcutil_is_tag_type(t1);
	  if (_T3F) { goto _TL1AF;
	  }else { goto _TL1AD;
	  }
	  _TL1AF: { struct Cyc_Warn_String_Warn_Warg_struct _T4C;
	    _T4C.tag = 0;
	    _T4C.f1 = _tag_fat("Cannot use this operator in an assignment when ",
			       sizeof(char),48U);
	    _T41 = _T4C;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T4C = _T41;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T4D;
	      _T4D.tag = 0;
	      _T4D.f1 = _tag_fat("the arguments have types ",sizeof(char),
				 26U);
	      _T42 = _T4D;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T4D = _T42;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T4E;
		_T4E.tag = 2;
		_T4E.f1 = t1;
		_T43 = _T4E;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T4E = _T43;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T4F;
		  _T4F.tag = 0;
		  _T4F.f1 = _tag_fat(" and ",sizeof(char),6U);
		  _T44 = _T4F;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T4F = _T44;
		  { struct Cyc_Warn_Typ_Warn_Warg_struct _T50;
		    _T50.tag = 2;
		    _T50.f1 = t2;
		    _T45 = _T50;
		  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T50 = _T45;
		    void * _T51[5];
		    _T51[0] = &_T4C;
		    _T51[1] = &_T4D;
		    _T51[2] = &_T4E;
		    _T51[3] = &_T4F;
		    _T51[4] = &_T50;
		    _T46 = te;
		    _T47 = loc;
		    _T48 = topt;
		    _T49 = _tag_fat(_T51,sizeof(void *),5);
		    _T40 = Cyc_Tcexp_expr_err(_T46,_T47,_T48,_T49);
		  }
		}
	      }
	    }
	  }{ void * result = _T40;
	    Cyc_Unify_unify(t_result,t1);
	    Cyc_Unify_explain_failure();
	    _T4A = result;
	    return _T4A;
	  }_TL1AD: _T4B = t_result;
	  return _T4B;
	}
      }
    }
  }
}
static void * Cyc_Tcexp_tcSeqExp(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				 void * * topt,struct Cyc_Absyn_Exp * e1,
				 struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct Cyc_Tcenv_Tenv * _T2;
  void * * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  void * _T6;
  void * _T7;
  _T0 = Cyc_Tcenv_clear_abstract_val_ok(te);
  _T1 = e1;
  Cyc_Tcexp_tcExp(_T0,0,_T1);
  _T2 = Cyc_Tcenv_clear_abstract_val_ok(te);
  _T3 = topt;
  _T4 = e2;
  Cyc_Tcexp_tcExp(_T2,_T3,_T4);
  _T5 = e2;
  _T6 = _T5->topt;
  _T7 = _check_null(_T6);
  return _T7;
}
static struct Cyc_Absyn_Datatypefield * Cyc_Tcexp_tcInjection(struct Cyc_Tcenv_Tenv * te,
							      struct Cyc_Absyn_Exp * e,
							      void * tu,struct Cyc_List_List * inst,
							      struct Cyc_List_List * fs) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  int * _T2;
  int _T3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T4;
  void * _T5;
  int * _T6;
  unsigned int _T7;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T8;
  void * _T9;
  struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct * _TA;
  int _TB;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TC;
  void * _TD;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _TE;
  enum Cyc_Absyn_Size_of _TF;
  int _T10;
  struct Cyc_List_List * _T11;
  void * _T12;
  struct Cyc_Absyn_Datatypefield * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  struct _tuple21 * _T19;
  struct _tuple21 _T1A;
  void * _T1B;
  long _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct Cyc_Absyn_Datatypefield * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct Cyc_Absyn_Datatypefield * _T23;
  struct Cyc_List_List * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_List_List * _T27;
  void * _T28;
  struct _tuple21 * _T29;
  struct _tuple21 _T2A;
  void * _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  unsigned int _T2D;
  struct Cyc_Absyn_Exp * _T2E;
  void * _T2F;
  void * _T30;
  void * _T31;
  enum Cyc_Absyn_Coercion _T32;
  int _T33;
  enum Cyc_Absyn_Coercion _T34;
  int _T35;
  struct Cyc_List_List * _T36;
  void * _T37;
  struct Cyc_Absyn_Datatypefield * _T38;
  struct Cyc_List_List * _T39;
  struct Cyc_Warn_String_Warn_Warg_struct _T3A;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3B;
  struct Cyc_Warn_String_Warn_Warg_struct _T3C;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3D;
  struct Cyc_Absyn_Exp * _T3E;
  unsigned int _T3F;
  struct _fat_ptr _T40;
  struct Cyc_List_List * fields;
  _T0 = e;
  _T1 = _T0->topt;
  { void * t1 = _check_null(_T1);
    { void * _T41 = Cyc_Absyn_compress(t1);
      _T2 = (int *)_T41;
      _T3 = *_T2;
      if (_T3 != 0) { goto _TL1B3;
      }
      _T4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T41;
      _T5 = _T4->f1;
      _T6 = (int *)_T5;
      _T7 = *_T6;
      switch (_T7) {
      case 2: 
	_T8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T41;
	_T9 = _T8->f1;
	_TA = (struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct *)_T9;
	_TB = _TA->f1;
	if (_TB != 0) { goto _TL1B6;
	}
	Cyc_Tcutil_unchecked_cast(e,Cyc_Absyn_double_type,1U);
	t1 = Cyc_Absyn_double_type;
	goto _LL0;
	_TL1B6: goto _LL7;
      case 1: 
	_TC = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T41;
	_TD = _TC->f1;
	_TE = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_TD;
	_TF = _TE->f2;
	_T10 = (int)_TF;
	switch (_T10) {
	case Cyc_Absyn_Char_sz: 
	  goto _LL6;
	case Cyc_Absyn_Short_sz: 
	  _LL6: Cyc_Tcutil_unchecked_cast(e,Cyc_Absyn_sint_type,1U);
	  t1 = Cyc_Absyn_sint_type;
	  goto _LL0;
	default: 
	  goto _LL7;
	}
	;
      default: 
	goto _LL7;
      }
      goto _TL1B4;
      _TL1B3: _LL7: goto _LL0;
      _TL1B4: _LL0: ;
    }fields = fs;
    _TL1BC: if (fields != 0) { goto _TL1BA;
    }else { goto _TL1BB;
    }
    _TL1BA: _T11 = fields;
    _T12 = _T11->hd;
    _T13 = (struct Cyc_Absyn_Datatypefield *)_T12;
    { struct Cyc_Absyn_Datatypefield _T41 = *_T13;
      enum Cyc_Absyn_Scope _T42;
      unsigned int _T43;
      struct Cyc_List_List * _T44;
      struct _tuple1 * _T45;
      _T45 = _T41.name;
      _T44 = _T41.typs;
      _T43 = _T41.loc;
      _T42 = _T41.sc;
      { struct _tuple1 * n = _T45;
	struct Cyc_List_List * typs = _T44;
	unsigned int loc = _T43;
	enum Cyc_Absyn_Scope sc = _T42;
	if (typs == 0) { goto _TL1BF;
	}else { goto _TL1C0;
	}
	_TL1C0: _T14 = typs;
	_T15 = _T14->tl;
	if (_T15 != 0) { goto _TL1BF;
	}else { goto _TL1BD;
	}
	_TL1BF: goto _TL1B9;
	_TL1BD: _T16 = inst;
	_T17 = typs;
	_T18 = _T17->hd;
	_T19 = (struct _tuple21 *)_T18;
	_T1A = *_T19;
	_T1B = _T1A.f1;
	{ void * t2 = Cyc_Tcutil_substitute(_T16,_T1B);
	  _T1C = Cyc_Unify_unify(t1,t2);
	  if (! _T1C) { goto _TL1C1;
	  }
	  _T1D = fields;
	  _T1E = _T1D->hd;
	  _T1F = (struct Cyc_Absyn_Datatypefield *)_T1E;
	  return _T1F;
	  _TL1C1: ;
	}
      }
    }_TL1B9: _T20 = fields;
    fields = _T20->tl;
    goto _TL1BC;
    _TL1BB: fields = fs;
    _TL1C6: if (fields != 0) { goto _TL1C4;
    }else { goto _TL1C5;
    }
    _TL1C4: _T21 = fields;
    _T22 = _T21->hd;
    _T23 = (struct Cyc_Absyn_Datatypefield *)_T22;
    { struct Cyc_Absyn_Datatypefield _T41 = *_T23;
      enum Cyc_Absyn_Scope _T42;
      unsigned int _T43;
      struct Cyc_List_List * _T44;
      struct _tuple1 * _T45;
      _T45 = _T41.name;
      _T44 = _T41.typs;
      _T43 = _T41.loc;
      _T42 = _T41.sc;
      { struct _tuple1 * n = _T45;
	struct Cyc_List_List * typs = _T44;
	unsigned int loc = _T43;
	enum Cyc_Absyn_Scope sc = _T42;
	if (typs == 0) { goto _TL1C9;
	}else { goto _TL1CA;
	}
	_TL1CA: _T24 = typs;
	_T25 = _T24->tl;
	if (_T25 != 0) { goto _TL1C9;
	}else { goto _TL1C7;
	}
	_TL1C9: goto _TL1C3;
	_TL1C7: _T26 = inst;
	_T27 = typs;
	_T28 = _T27->hd;
	_T29 = (struct _tuple21 *)_T28;
	_T2A = *_T29;
	_T2B = _T2A.f1;
	{ void * t2 = Cyc_Tcutil_substitute(_T26,_T2B);
	  long bogus = 0;
	  _T2C = e;
	  _T2D = _T2C->loc;
	  _T2E = e;
	  _T2F = _T2E->topt;
	  _T30 = _check_null(_T2F);
	  _T31 = t2;
	  { enum Cyc_Absyn_Coercion crc = Cyc_Subtype_coercible_warn(_T2D,
								     _T30,
								     _T31);
	    _T32 = crc;
	    _T33 = (int)_T32;
	    if (_T33 == 0) { goto _TL1CB;
	    }
	    _T34 = crc;
	    _T35 = (int)_T34;
	    if (_T35 == 1) { goto _TL1CD;
	    }
	    Cyc_Tcutil_unchecked_cast(e,t2,crc);
	    goto _TL1CE;
	    _TL1CD: _TL1CE: _T36 = fields;
	    _T37 = _T36->hd;
	    _T38 = (struct Cyc_Absyn_Datatypefield *)_T37;
	    return _T38;
	    _TL1CB: ;
	  }
	}
      }
    }_TL1C3: _T39 = fields;
    fields = _T39->tl;
    goto _TL1C6;
    _TL1C5: { struct Cyc_Warn_String_Warn_Warg_struct _T41;
      _T41.tag = 0;
      _T41.f1 = _tag_fat("can't find a field in ",sizeof(char),23U);
      _T3A = _T41;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T41 = _T3A;
      { struct Cyc_Warn_Typ_Warn_Warg_struct _T42;
	_T42.tag = 2;
	_T42.f1 = tu;
	_T3B = _T42;
      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T42 = _T3B;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T43;
	  _T43.tag = 0;
	  _T43.f1 = _tag_fat(" to inject value of type ",sizeof(char),26U);
	  _T3C = _T43;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T43 = _T3C;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T44;
	    _T44.tag = 2;
	    _T44.f1 = t1;
	    _T3D = _T44;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T44 = _T3D;
	    void * _T45[4];
	    _T45[0] = &_T41;
	    _T45[1] = &_T42;
	    _T45[2] = &_T43;
	    _T45[3] = &_T44;
	    _T3E = e;
	    _T3F = _T3E->loc;
	    _T40 = _tag_fat(_T45,sizeof(void *),4);
	    Cyc_Warn_err2(_T3F,_T40);
	  }
	}
      }
    }return 0;
  }
}
static void Cyc_Tcexp_check_all_aqual_bounds(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
					     struct Cyc_List_List * fn_or_aggr_qual_bnd) {
  struct Cyc_List_List * _T0;
  void * _T1;
  void * _T2;
  int * _T3;
  unsigned int _T4;
  void * _T5;
  void * _T6;
  struct Cyc_Absyn_Evar_Absyn_Type_struct * _T7;
  void * * _T8;
  void * _T9;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA;
  void * _TB;
  int * _TC;
  unsigned int _TD;
  void * _TE;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TF;
  struct Cyc_List_List * _T10;
  void * _T11;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  void * _T15;
  int * _T16;
  int _T17;
  void * _T18;
  struct Cyc_List_List * _T19;
  void * _T1A;
  void * _T1B;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct Cyc_Absyn_Evar_Absyn_Type_struct * _T1F;
  void * * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  void * _T23;
  long _T24;
  void * _T25;
  struct Cyc_List_List * _T26;
  void * _T27;
  long _T28;
  struct Cyc_Warn_String_Warn_Warg_struct _T29;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T2A;
  struct Cyc_List_List * _T2B;
  struct Cyc_Warn_String_Warn_Warg_struct _T2C;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T2D;
  unsigned int _T2E;
  struct _fat_ptr _T2F;
  void * _T30;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T31;
  struct Cyc_List_List * _T32;
  void * _T33;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T34;
  struct Cyc_List_List * _T35;
  struct Cyc_List_List * _T36;
  void * _T37;
  int * _T38;
  int _T39;
  struct Cyc_List_List * _T3A;
  void * _T3B;
  void * _T3C;
  long _T3D;
  struct Cyc_Warn_String_Warn_Warg_struct _T3E;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3F;
  struct Cyc_Warn_String_Warn_Warg_struct _T40;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T41;
  unsigned int _T42;
  struct _fat_ptr _T43;
  struct Cyc_List_List * _T44;
  void * _T45;
  void * _T46;
  long _T47;
  struct Cyc_Warn_String_Warn_Warg_struct _T48;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T49;
  struct Cyc_Warn_String_Warn_Warg_struct _T4A;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T4B;
  unsigned int _T4C;
  struct _fat_ptr _T4D;
  struct Cyc_List_List * _T4E;
  struct Cyc_List_List * qbit = fn_or_aggr_qual_bnd;
  _TL1D2: if (qbit != 0) { goto _TL1D0;
  }else { goto _TL1D1;
  }
  _TL1D0: _T0 = qbit;
  _T1 = _T0->hd;
  { struct _tuple0 * _T4F = (struct _tuple0 *)_T1;
    void * _T50;
    void * _T51;
    { struct _tuple0 _T52 = *_T4F;
      _T51 = _T52.f0;
      _T50 = _T52.f1;
    }{ void * qv = _T51;
      void * bnd = _T50;
      void * qvc = Cyc_Absyn_compress(qv);
      struct Cyc_List_List * _T52;
      void * _T53;
      _T2 = qvc;
      _T3 = (int *)_T2;
      _T4 = *_T3;
      switch (_T4) {
      case 1: 
	_T5 = qvc;
	{ struct Cyc_Absyn_Evar_Absyn_Type_struct * _T54 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T5;
	  _T6 = qvc;
	  _T7 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T6;
	  _T8 = &_T7->f2;
	  _T53 = (void * *)_T8;
	}{ void * * ref = _T53;
	  goto _LL3;
	}
      case 0: 
	_T9 = qvc;
	_TA = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T9;
	_TB = _TA->f1;
	_TC = (int *)_TB;
	_TD = *_TC;
	switch (_TD) {
	case 17: 
	  _TE = qvc;
	  _TF = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TE;
	  _T10 = _TF->f2;
	  if (_T10 == 0) { goto _TL1D5;
	  }
	  _T11 = qvc;
	  _T12 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11;
	  _T13 = _T12->f2;
	  _T14 = (struct Cyc_List_List *)_T13;
	  _T15 = _T14->hd;
	  _T16 = (int *)_T15;
	  _T17 = *_T16;
	  if (_T17 != 1) { goto _TL1D7;
	  }
	  _T18 = qvc;
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T54 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T18;
	    _T19 = _T54->f2;
	    { struct Cyc_List_List _T55 = *_T19;
	      _T1A = _T55.hd;
	      { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T56 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T1A;
		_T1B = qvc;
		_T1C = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1B;
		_T1D = _T1C->f2;
		_T1E = _T1D->hd;
		_T1F = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T1E;
		_T20 = &_T1F->f2;
		_T53 = (void * *)_T20;
	      }_T52 = _T55.tl;
	    }
	  }{ void * * ref = (void * *)_T53;
	    struct Cyc_List_List * ebnd = _T52;
	    _T21 = _check_null(ebnd);
	    _T22 = _T21->hd;
	    _T23 = bnd;
	    _T24 = Cyc_Subtype_check_aqual_bounds(0,_T22,_T23);
	    if (_T24) { goto _TL1D9;
	    }else { goto _TL1DB;
	    }
	    _TL1DB: _T25 = bnd;
	    _T26 = ebnd;
	    _T27 = _T26->hd;
	    _T28 = Cyc_Subtype_check_aqual_bounds(0,_T25,_T27);
	    if (_T28) { goto _TL1D9;
	    }else { goto _TL1DC;
	    }
	    _TL1DC: { struct Cyc_Warn_String_Warn_Warg_struct _T54;
	      _T54.tag = 0;
	      _T54.f1 = _tag_fat("alias qualifier bounds violated: ",sizeof(char),
				 34U);
	      _T29 = _T54;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T54 = _T29;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T55;
		_T55.tag = 2;
		_T2B = ebnd;
		_T55.f1 = _T2B->hd;
		_T2A = _T55;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T55 = _T2A;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T56;
		  _T56.tag = 0;
		  _T56.f1 = _tag_fat(" <> ",sizeof(char),5U);
		  _T2C = _T56;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T56 = _T2C;
		  { struct Cyc_Warn_Typ_Warn_Warg_struct _T57;
		    _T57.tag = 2;
		    _T57.f1 = bnd;
		    _T2D = _T57;
		  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T57 = _T2D;
		    void * _T58[4];
		    _T58[0] = &_T54;
		    _T58[1] = &_T55;
		    _T58[2] = &_T56;
		    _T58[3] = &_T57;
		    _T2E = loc;
		    _T2F = _tag_fat(_T58,sizeof(void *),4);
		    Cyc_Warn_err2(_T2E,_T2F);
		  }
		}
	      }
	    }goto _TL1DA;
	    _TL1D9: _TL1DA: goto _LL3;
	  }_TL1D7: goto _LLA;
	  _TL1D5: goto _LLA;
	case 15: 
	  _T30 = qvc;
	  _T31 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T30;
	  _T32 = _T31->f2;
	  if (_T32 == 0) { goto _TL1DD;
	  }
	  _T33 = qvc;
	  _T34 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T33;
	  _T35 = _T34->f2;
	  _T36 = (struct Cyc_List_List *)_T35;
	  _T37 = _T36->hd;
	  _T38 = (int *)_T37;
	  _T39 = *_T38;
	  if (_T39 != 1) { goto _TL1DF;
	  }
	  _T3A = Cyc_Tcenv_curr_aquals_bounds(te);
	  _T3B = Cyc_Absyn_al_qual_type;
	  _T3C = bnd;
	  _T3D = Cyc_Subtype_check_aqual_bounds(_T3A,_T3B,_T3C);
	  if (_T3D) { goto _TL1E1;
	  }else { goto _TL1E3;
	  }
	  _TL1E3: { struct Cyc_Warn_String_Warn_Warg_struct _T54;
	    _T54.tag = 0;
	    _T54.f1 = _tag_fat("alias qualifier bounds violated: ",sizeof(char),
			       34U);
	    _T3E = _T54;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T54 = _T3E;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T55;
	      _T55.tag = 2;
	      _T55.f1 = qvc;
	      _T3F = _T55;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T55 = _T3F;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T56;
		_T56.tag = 0;
		_T56.f1 = _tag_fat(" <> ",sizeof(char),5U);
		_T40 = _T56;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T56 = _T40;
		{ struct Cyc_Warn_Typ_Warn_Warg_struct _T57;
		  _T57.tag = 2;
		  _T57.f1 = bnd;
		  _T41 = _T57;
		}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T57 = _T41;
		  void * _T58[4];
		  _T58[0] = &_T54;
		  _T58[1] = &_T55;
		  _T58[2] = &_T56;
		  _T58[3] = &_T57;
		  _T42 = loc;
		  _T43 = _tag_fat(_T58,sizeof(void *),4);
		  Cyc_Warn_err2(_T42,_T43);
		}
	      }
	    }
	  }goto _TL1E2;
	  _TL1E1: _TL1E2: goto _LL3;
	  _TL1DF: goto _LLA;
	  _TL1DD: goto _LLA;
	default: 
	  goto _LLA;
	}
	;
      default: 
	_LLA: _T44 = Cyc_Tcenv_curr_aquals_bounds(te);
	_T45 = qvc;
	_T46 = bnd;
	_T47 = Cyc_Subtype_check_aqual_bounds(_T44,_T45,_T46);
	if (_T47) { goto _TL1E4;
	}else { goto _TL1E6;
	}
	_TL1E6: { struct Cyc_Warn_String_Warn_Warg_struct _T54;
	  _T54.tag = 0;
	  _T54.f1 = _tag_fat("alias qualifier bounds violated: ",sizeof(char),
			     34U);
	  _T48 = _T54;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T54 = _T48;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T55;
	    _T55.tag = 2;
	    _T55.f1 = qvc;
	    _T49 = _T55;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T55 = _T49;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T56;
	      _T56.tag = 0;
	      _T56.f1 = _tag_fat(" <> ",sizeof(char),5U);
	      _T4A = _T56;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T56 = _T4A;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T57;
		_T57.tag = 2;
		_T57.f1 = bnd;
		_T4B = _T57;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T57 = _T4B;
		void * _T58[4];
		_T58[0] = &_T54;
		_T58[1] = &_T55;
		_T58[2] = &_T56;
		_T58[3] = &_T57;
		_T4C = loc;
		_T4D = _tag_fat(_T58,sizeof(void *),4);
		Cyc_Warn_err2(_T4C,_T4D);
	      }
	    }
	  }
	}goto _TL1E5;
	_TL1E4: _TL1E5: goto _LL3;
      }
      _LL3: ;
    }
  }_T4E = qbit;
  qbit = _T4E->tl;
  goto _TL1D2;
  _TL1D1: ;
}
char Cyc_Tcexp_Found_evar[11U] = "Found_evar";
 struct Cyc_Tcexp_Found_evar_exn_struct {
  char * tag;
};
static struct Cyc_Tcexp_Found_evar_exn_struct Cyc_Tcexp_Found_evar_val = {Cyc_Tcexp_Found_evar};
static long Cyc_Tcexp_contains_free_evar(void * env,void * t) {
  int * _T0;
  int _T1;
  struct Cyc_Tcexp_Found_evar_exn_struct * _T2;
  struct Cyc_Tcexp_Found_evar_exn_struct * _T3;
  { void * _T4 = Cyc_Absyn_compress(t);
    _T0 = (int *)_T4;
    _T1 = *_T0;
    if (_T1 != 1) { goto _TL1E7;
    }
    _T2 = &Cyc_Tcexp_Found_evar_val;
    _T3 = (struct Cyc_Tcexp_Found_evar_exn_struct *)_T2;
    _throw(_T3);
    goto _TL1E8;
    _TL1E7: goto _LL0;
    _TL1E8: _LL0: ;
  }return 1;
}
static struct Cyc_List_List * Cyc_Tcexp_fresh_effect_evars(struct Cyc_Tcenv_Tenv * te,
							   struct Cyc_List_List * inst,
							   struct Cyc_List_List * orig) {
  int _T0;
  int _T1;
  int (* _T2)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T3)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_List_List * _T6;
  unsigned int _T7;
  struct Cyc_List_List * _T8;
  unsigned int _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_Absyn_Kind * _TC;
  int (* _TD)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TE)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  void * _T11;
  struct Cyc_Absyn_Kind * _T12;
  struct Cyc_Absyn_Kind * _T13;
  struct Cyc_Absyn_Kind * _T14;
  long _T15;
  struct Cyc_List_List * _T16;
  void * _T17;
  void * * _T18;
  void * _T19;
  int * _T1A;
  int _T1B;
  void * * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_Core_Opt * _T1E;
  struct Cyc_Core_Opt * _T1F;
  struct Cyc_Core_Opt * _T20;
  struct _fat_ptr _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_List_List * _T23;
  void * _T24;
  struct _handler_cons * _T25;
  int _T26;
  void (* _T27)(long (*)(int,void *),int,void *);
  void (* _T28)(long (*)(void *,void *),void *,void *);
  long (* _T29)(int,void *);
  int _T2A;
  void * _T2B;
  void * _T2C;
  struct Cyc_Tcexp_Found_evar_exn_struct * _T2D;
  char * _T2E;
  char * _T2F;
  struct Cyc_List_List * _T30;
  struct Cyc_List_List * _T31;
  void * _T32;
  int * _T33;
  int _T34;
  void * _T35;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T36;
  void * _T37;
  int * _T38;
  int _T39;
  void * _T3A;
  struct Cyc_List_List * _T3B;
  unsigned int _T3C;
  struct Cyc_List_List * _T3D;
  int * _T3E;
  int _T3F;
  struct Cyc_List_List * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_List_List * _T42;
  int (* _T43)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T44)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T45;
  struct _fat_ptr _T46;
  struct Cyc_List_List * _T47;
  struct Cyc_Core_Opt * _T48;
  struct Cyc_Core_Opt * _T49;
  struct Cyc_Core_Opt * _T4A;
  void * * _T4B;
  struct Cyc_List_List * _T4C;
  struct Cyc_List_List * _T4D;
  void * _T4E;
  struct Cyc_List_List * _T4F;
  struct Cyc_List_List * _T50;
  struct Cyc_List_List * _T51;
  _T0 = Cyc_List_length(inst);
  _T1 = Cyc_List_length(orig);
  if (_T0 == _T1) { goto _TL1E9;
  }
  _T3 = Cyc_Warn_impos;
  { int (* _T52)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							     struct _fat_ptr))_T3;
    _T2 = _T52;
  }_T4 = _tag_fat("injection orig and inst must have same length",sizeof(char),
		  46U);
  _T5 = _tag_fat(0U,sizeof(void *),0);
  _T2(_T4,_T5);
  goto _TL1EA;
  _TL1E9: _TL1EA: { void * currrgn = Cyc_Tcenv_curr_rgn(te);
    struct Cyc_List_List * fresh = 0;
    _TL1EE: _T6 = inst;
    _T7 = (unsigned int)_T6;
    if (_T7) { goto _TL1EF;
    }else { goto _TL1ED;
    }
    _TL1EF: _T8 = orig;
    _T9 = (unsigned int)_T8;
    if (_T9) { goto _TL1EC;
    }else { goto _TL1ED;
    }
    _TL1EC: _TA = orig;
    _TB = _TA->hd;
    { struct _tuple18 * _T52 = (struct _tuple18 *)_TB;
      void * _T53;
      struct Cyc_Absyn_Tvar * _T54;
      { struct _tuple18 _T55 = *_T52;
	_T54 = _T55.f0;
	_T53 = _T55.f1;
      }{ struct Cyc_Absyn_Tvar * otv = _T54;
	void * ot = _T53;
	struct Cyc_Core_Opt _T55 = Cyc_Kinds_tvar_kind_opt(otv);
	struct Cyc_Absyn_Kind * _T56;
	_TC = _T55.v;
	if (_TC != 0) { goto _TL1F0;
	}
	_TE = Cyc_Warn_impos;
	{ int (* _T57)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_TE;
	  _TD = _T57;
	}_TF = _tag_fat("Tvar kind must be set by now",sizeof(char),29U);
	_T10 = _tag_fat(0U,sizeof(void *),0);
	_TD(_TF,_T10);
	return 0;
	_TL1F0: _T11 = _T55.v;
	_T56 = (struct Cyc_Absyn_Kind *)_T11;
	{ struct Cyc_Absyn_Kind * k = _T56;
	  _T12 = k;
	  _T13 = &Cyc_Kinds_ek;
	  _T14 = (struct Cyc_Absyn_Kind *)_T13;
	  _T15 = Cyc_Kinds_kind_eq(_T12,_T14);
	  if (! _T15) { goto _TL1F2;
	  }
	  { void * cot = Cyc_Tcutil_normalize_effect(ot);
	    _T16 = inst;
	    _T17 = _T16->hd;
	    { struct _tuple18 * _T57 = (struct _tuple18 *)_T17;
	      void * _T58;
	      { struct _tuple18 _T59 = *_T57;
		_T18 = &_T57->f1;
		_T58 = (void * *)_T18;
	      }{ void * * t = (void * *)_T58;
		_T19 = cot;
		_T1A = (int *)_T19;
		_T1B = *_T1A;
		if (_T1B != 1) { goto _TL1F4;
		}
		_T1C = t;
		{ void * _T59[2];
		  _T59[0] = currrgn;
		  _T1E = &Cyc_Kinds_eko;
		  _T1F = (struct Cyc_Core_Opt *)_T1E;
		  _T20 = Cyc_Tcenv_lookup_opt_type_vars(te);
		  _T59[1] = Cyc_Absyn_new_evar(_T1F,_T20);
		  _T21 = _tag_fat(_T59,sizeof(void *),2);
		  _T1D = Cyc_List_list(_T21);
		}*_T1C = Cyc_Absyn_join_eff(_T1D);
		{ struct Cyc_List_List * _T59 = _cycalloc(sizeof(struct Cyc_List_List));
		  _T23 = inst;
		  _T24 = _T23->hd;
		  _T59->hd = (struct _tuple18 *)_T24;
		  _T59->tl = fresh;
		  _T22 = (struct Cyc_List_List *)_T59;
		}fresh = _T22;
		goto _LLB;
		_TL1F4: { int dummy = 0;
		  { struct _handler_cons _T59;
		    _T25 = &_T59;
		    _push_handler(_T25);
		    { int _T5A = 0;
		      _T26 = setjmp(_T59.handler);
		      if (! _T26) { goto _TL1F6;
		      }
		      _T5A = 1;
		      goto _TL1F7;
		      _TL1F6: _TL1F7: if (_T5A) { goto _TL1F8;
		      }else { goto _TL1FA;
		      }
		      _TL1FA: _T28 = Cyc_Absyn_visit_type;
		      { void (* _T5B)(long (*)(int,void *),int,void *) = (void (*)(long (*)(int,
											    void *),
										   int,
										   void *))_T28;
			_T27 = _T5B;
		      }{ long (* _T5B)(int,void *) = (long (*)(int,void *))Cyc_Tcexp_contains_free_evar;
			_T29 = _T5B;
		      }_T2A = dummy;
		      _T2B = cot;
		      _T27(_T29,_T2A,_T2B);
		      _pop_handler();
		      goto _TL1F9;
		      _TL1F8: _T2C = Cyc_Core_get_exn_thrown();
		      { void * _T5B = (void *)_T2C;
			void * _T5C;
			_T2D = (struct Cyc_Tcexp_Found_evar_exn_struct *)_T5B;
			_T2E = _T2D->tag;
			_T2F = Cyc_Tcexp_Found_evar;
			if (_T2E != _T2F) { goto _TL1FB;
			}
			{ struct Cyc_List_List * inst_effect;
			  inst_effect = _cycalloc(sizeof(struct Cyc_List_List));
			  _T30 = inst_effect;
			  _T30->hd = currrgn;
			  _T31 = inst_effect;
			  _T31->tl = 0;
			  { struct Cyc_List_List * _T5D;
			    _T32 = cot;
			    _T33 = (int *)_T32;
			    _T34 = *_T33;
			    if (_T34 != 0) { goto _TL1FD;
			    }
			    _T35 = cot;
			    _T36 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T35;
			    _T37 = _T36->f1;
			    _T38 = (int *)_T37;
			    _T39 = *_T38;
			    if (_T39 != 9) { goto _TL1FF;
			    }
			    _T3A = cot;
			    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3A;
			      _T5D = _T5E->f2;
			    }{ struct Cyc_List_List * ts = _T5D;
			      _TL204: _T3B = ts;
			      _T3C = (unsigned int)_T3B;
			      if (_T3C) { goto _TL202;
			      }else { goto _TL203;
			      }
			      _TL202: _T3D = ts;
			      { void * _T5E = _T3D->hd;
				_T3E = (int *)_T5E;
				_T3F = *_T3E;
				if (_T3F != 1) { goto _TL205;
				}
				goto _LL1A;
				_TL205: { struct Cyc_List_List * _T5F = _cycalloc(sizeof(struct Cyc_List_List));
				  _T41 = ts;
				  _T5F->hd = _T41->hd;
				  _T5F->tl = inst_effect;
				  _T40 = (struct Cyc_List_List *)_T5F;
				}inst_effect = _T40;
				goto _LL1A;
				_LL1A: ;
			      }_T42 = ts;
			      ts = _T42->tl;
			      goto _TL204;
			      _TL203: goto _LL15;
			    }_TL1FF: goto _LL18;
			    _TL1FD: _LL18: _T44 = Cyc_Warn_impos;
			    { int (* _T5E)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
										       struct _fat_ptr))_T44;
			      _T43 = _T5E;
			    }_T45 = _tag_fat("!evar && Contains evar => JoinCon",
					     sizeof(char),34U);
			    _T46 = _tag_fat(0U,sizeof(void *),0);
			    _T43(_T45,_T46);
			    _LL15: ;
			  }{ struct Cyc_List_List * _T5D = _cycalloc(sizeof(struct Cyc_List_List));
			    _T48 = &Cyc_Kinds_eko;
			    _T49 = (struct Cyc_Core_Opt *)_T48;
			    _T4A = Cyc_Tcenv_lookup_opt_type_vars(te);
			    _T5D->hd = Cyc_Absyn_new_evar(_T49,_T4A);
			    _T5D->tl = inst_effect;
			    _T47 = (struct Cyc_List_List *)_T5D;
			  }inst_effect = _T47;
			  _T4B = t;
			  *_T4B = Cyc_Absyn_join_eff(inst_effect);
			  { struct Cyc_List_List * _T5D = _cycalloc(sizeof(struct Cyc_List_List));
			    _T4D = inst;
			    _T4E = _T4D->hd;
			    _T5D->hd = (struct _tuple18 *)_T4E;
			    _T5D->tl = fresh;
			    _T4C = (struct Cyc_List_List *)_T5D;
			  }fresh = _T4C;
			  goto _LL10;
			}_TL1FB: _T5C = _T5B;
			{ void * exn = _T5C;
			  _rethrow(exn);
			}_LL10: ;
		      }_TL1F9: ;
		    }
		  }goto _LLB;
		}_LLB: goto _LL3;
	      }
	    }
	  }_TL1F2: goto _LL3;
	}_LL3: ;
      }
    }_T4F = inst;
    inst = _T4F->tl;
    _T50 = orig;
    orig = _T50->tl;
    goto _TL1EE;
    _TL1ED: _T51 = fresh;
    return _T51;
  }
}
static long Cyc_Tcexp_inst_with_joineff(struct Cyc_List_List * orig,struct Cyc_Hashtable_Table * inst_effects) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _handler_cons * _T2;
  int _T3;
  struct Cyc_List_List * (* _T4)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Tvar *);
  void * (* _T5)(struct Cyc_Hashtable_Table *,void *);
  void * _T6;
  void * _T7;
  void * _T8;
  long _T9;
  void * _TA;
  struct Cyc_Core_Not_found_exn_struct * _TB;
  char * _TC;
  char * _TD;
  struct Cyc_List_List * _TE;
  long _TF;
  long found = 0;
  _TL20A: if (orig != 0) { goto _TL208;
  }else { goto _TL209;
  }
  _TL208: _T0 = orig;
  _T1 = _T0->hd;
  { struct _tuple18 * _T10 = (struct _tuple18 *)_T1;
    void * _T11;
    struct Cyc_Absyn_Tvar * _T12;
    { struct _tuple18 _T13 = *_T10;
      _T12 = _T13.f0;
      _T11 = _T13.f1;
    }{ struct Cyc_Absyn_Tvar * tv = _T12;
      void * origrgn = _T11;
      struct _handler_cons _T13;
      _T2 = &_T13;
      _push_handler(_T2);
      { int _T14 = 0;
	_T3 = setjmp(_T13.handler);
	if (! _T3) { goto _TL20B;
	}
	_T14 = 1;
	goto _TL20C;
	_TL20B: _TL20C: if (_T14) { goto _TL20D;
	}else { goto _TL20F;
	}
	_TL20F: _T5 = Cyc_Hashtable_lookup;
	{ struct Cyc_List_List * (* _T15)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Tvar *) = (struct Cyc_List_List * (*)(struct Cyc_Hashtable_Table *,
															      struct Cyc_Absyn_Tvar *))_T5;
	  _T4 = _T15;
	}{ struct Cyc_List_List * l = _T4(inst_effects,tv);
	  found = 1;
	  _T6 = origrgn;
	  _T7 = Cyc_Absyn_join_eff(l);
	  _T8 = Cyc_Tcutil_normalize_effect(_T7);
	  _T9 = Cyc_Unify_unify(_T6,_T8);
	  if (_T9) { goto _TL210;
	  }else { goto _TL212;
	  }
	  _TL212: { long _T15 = 0;
	    _npop_handler(0);
	    return _T15;
	  }_TL210: ;
	}_pop_handler();
	goto _TL20E;
	_TL20D: _TA = Cyc_Core_get_exn_thrown();
	{ void * _T15 = (void *)_TA;
	  void * _T16;
	  _TB = (struct Cyc_Core_Not_found_exn_struct *)_T15;
	  _TC = _TB->tag;
	  _TD = Cyc_Core_Not_found;
	  if (_TC != _TD) { goto _TL213;
	  }
	  goto _LL3;
	  _TL213: _T16 = _T15;
	  { void * exn = _T16;
	    _rethrow(exn);
	  }_LL3: ;
	}_TL20E: ;
      }
    }
  }_TE = orig;
  orig = _TE->tl;
  goto _TL20A;
  _TL209: _TF = found;
  return _TF;
}
 struct _tuple22 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Pat * f1;
};
 struct _tuple23 {
  struct Cyc_Absyn_Vardecl * f0;
  struct Cyc_Absyn_Exp * f1;
};
static void * Cyc_Tcexp_tcFnCall(struct Cyc_Tcenv_Tenv * te_orig,unsigned int loc,
				 void * * topt,struct Cyc_Absyn_Exp * call,
				 struct Cyc_Absyn_Exp * e,struct Cyc_List_List * args,
				 struct Cyc_Absyn_VarargCallInfo * * vararg_call_info,
				 struct Cyc_List_List * * alias_arg_exps) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  void * _T3;
  int * _T4;
  int _T5;
  void * _T6;
  struct Cyc_Absyn_PtrInfo _T7;
  struct Cyc_Absyn_PtrInfo _T8;
  struct Cyc_Absyn_PtrInfo _T9;
  struct Cyc_Absyn_PtrAtts _TA;
  struct Cyc_Absyn_PtrInfo _TB;
  struct Cyc_Absyn_PtrAtts _TC;
  struct Cyc_Absyn_PtrInfo _TD;
  struct Cyc_Absyn_PtrAtts _TE;
  struct Cyc_Absyn_PtrInfo _TF;
  struct Cyc_Absyn_PtrAtts _T10;
  void * _T11;
  void * _T12;
  void * _T13;
  int * _T14;
  int _T15;
  void * _T16;
  struct Cyc_Absyn_FnInfo _T17;
  struct Cyc_Absyn_FnInfo _T18;
  struct Cyc_Absyn_FnInfo _T19;
  struct Cyc_Absyn_FnInfo _T1A;
  struct Cyc_Absyn_FnInfo _T1B;
  struct Cyc_Absyn_FnInfo _T1C;
  struct Cyc_Absyn_FnInfo _T1D;
  struct Cyc_Absyn_FnInfo _T1E;
  struct Cyc_Absyn_FnInfo _T1F;
  struct Cyc_Absyn_FnInfo _T20;
  struct Cyc_Absyn_FnInfo _T21;
  struct Cyc_Absyn_FnInfo _T22;
  struct Cyc_Absyn_FnInfo _T23;
  struct Cyc_Absyn_FnInfo _T24;
  struct Cyc_Absyn_FnInfo _T25;
  struct Cyc_Absyn_FnInfo _T26;
  struct Cyc_Absyn_FnInfo _T27;
  struct Cyc_Absyn_FnInfo _T28;
  struct Cyc_Absyn_FnInfo _T29;
  struct Cyc_Absyn_FnInfo _T2A;
  struct Cyc_Absyn_Exp * _T2B;
  unsigned int _T2C;
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  void * _T2F;
  void * * _T30;
  void * _T31;
  struct Cyc_List_List * _T32;
  void * _T33;
  struct Cyc_List_List * _T34;
  void * _T35;
  struct _tuple9 * _T36;
  struct _tuple9 _T37;
  struct Cyc_Tcenv_Tenv * _T38;
  void * * _T39;
  struct Cyc_Absyn_Exp * _T3A;
  struct Cyc_List_List * _T3B;
  struct Cyc_Absyn_Exp * _T3C;
  void * _T3D;
  long * _T3E;
  long _T3F;
  struct Cyc_Absyn_Exp * _T40;
  void * _T41;
  void * _T42;
  unsigned long _T43;
  unsigned long _T44;
  unsigned long _T45;
  unsigned long _T46;
  unsigned long _T47;
  unsigned long _T48;
  unsigned long _T49;
  struct Cyc_Warn_String_Warn_Warg_struct _T4A;
  struct Cyc_Warn_String_Warn_Warg_struct _T4B;
  struct Cyc_Warn_String_Warn_Warg_struct _T4C;
  struct Cyc_Warn_String_Warn_Warg_struct _T4D;
  struct Cyc_Warn_String_Warn_Warg_struct _T4E;
  struct Cyc_Warn_String_Warn_Warg_struct _T4F;
  struct Cyc_Warn_String_Warn_Warg_struct _T50;
  struct Cyc_Absyn_Exp * _T51;
  unsigned int _T52;
  struct _fat_ptr _T53;
  struct Cyc_Warn_String_Warn_Warg_struct _T54;
  struct Cyc_Warn_String_Warn_Warg_struct _T55;
  struct Cyc_Warn_String_Warn_Warg_struct _T56;
  struct Cyc_Warn_String_Warn_Warg_struct _T57;
  struct Cyc_Absyn_Exp * _T58;
  unsigned int _T59;
  struct _fat_ptr _T5A;
  struct Cyc_Absyn_Exp * _T5B;
  void * _T5C;
  void * _T5D;
  void * _T5E;
  long _T5F;
  struct Cyc_List_List * * _T60;
  struct Cyc_List_List * _T61;
  int _T62;
  struct Cyc_List_List * * _T63;
  struct Cyc_Absyn_Exp * _T64;
  unsigned int _T65;
  struct Cyc_List_List * _T66;
  void * _T67;
  struct Cyc_Absyn_Exp * _T68;
  struct Cyc_List_List * _T69;
  struct Cyc_List_List * _T6A;
  struct Cyc_List_List * _T6B;
  int * _T6C;
  int _T6D;
  struct _handler_cons * _T6E;
  int _T6F;
  struct Cyc_Absyn_Exp * (* _T70)(struct Cyc_List_List *,int);
  void * (* _T71)(struct Cyc_List_List *,int);
  struct Cyc_List_List * _T72;
  int _T73;
  struct Cyc_Core_Opt * _T74;
  struct Cyc_List_List * _T75;
  int _T76;
  enum Cyc_Absyn_Format_Type _T77;
  int _T78;
  struct Cyc_Tcenv_Tenv * _T79;
  struct Cyc_Absyn_Exp * _T7A;
  struct Cyc_Core_Opt * _T7B;
  int _T7C;
  struct Cyc_List_List * * _T7D;
  long _T7E;
  struct Cyc_List_List * (* _T7F)(struct Cyc_Tcenv_Tenv *,struct _fat_ptr,
				  long,unsigned int);
  struct Cyc_Tcenv_Tenv * _T80;
  struct Cyc_Absyn_Exp * _T81;
  struct Cyc_Core_Opt * _T82;
  int _T83;
  struct Cyc_List_List * * _T84;
  long _T85;
  struct Cyc_List_List * (* _T86)(struct Cyc_Tcenv_Tenv *,struct _fat_ptr,
				  long,unsigned int);
  void * _T87;
  struct Cyc_List_Nth_exn_struct * _T88;
  char * _T89;
  char * _T8A;
  struct Cyc_Warn_String_Warn_Warg_struct _T8B;
  unsigned int _T8C;
  struct _fat_ptr _T8D;
  struct Cyc_List_List * _T8E;
  struct Cyc_Warn_String_Warn_Warg_struct _T8F;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T90;
  unsigned int _T91;
  struct _fat_ptr _T92;
  long _T93;
  long _T94;
  struct Cyc_Tcenv_Tenv * _T95;
  struct Cyc_List_List * _T96;
  void * _T97;
  struct Cyc_Absyn_Exp * _T98;
  struct Cyc_List_List * _T99;
  struct Cyc_Warn_String_Warn_Warg_struct _T9A;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T9B;
  unsigned int _T9C;
  struct _fat_ptr _T9D;
  struct Cyc_Absyn_VarargInfo * _T9E;
  struct Cyc_Absyn_VarargCallInfo * _T9F;
  struct Cyc_Absyn_VarargCallInfo * _TA0;
  struct Cyc_Absyn_VarargCallInfo * _TA1;
  struct Cyc_Absyn_VarargCallInfo * * _TA2;
  long _TA3;
  struct Cyc_List_List * _TA4;
  void * _TA5;
  struct Cyc_Absyn_VarargCallInfo * _TA6;
  struct Cyc_Tcenv_Tenv * _TA7;
  void * * _TA8;
  struct Cyc_Absyn_Exp * _TA9;
  struct Cyc_List_List * _TAA;
  struct Cyc_Absyn_Exp * _TAB;
  void * _TAC;
  long * _TAD;
  long _TAE;
  struct Cyc_Warn_String_Warn_Warg_struct _TAF;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TB0;
  struct Cyc_Warn_String_Warn_Warg_struct _TB1;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _TB2;
  struct Cyc_Absyn_Exp * _TB3;
  unsigned int _TB4;
  struct _fat_ptr _TB5;
  long _TB6;
  struct Cyc_List_List * * _TB7;
  struct Cyc_List_List * _TB8;
  int _TB9;
  struct Cyc_List_List * * _TBA;
  struct Cyc_Absyn_Exp * _TBB;
  unsigned int _TBC;
  struct Cyc_List_List * _TBD;
  void * _TBE;
  struct Cyc_Absyn_Exp * _TBF;
  struct Cyc_List_List * _TC0;
  void * _TC1;
  int * _TC2;
  int _TC3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TC4;
  void * _TC5;
  int * _TC6;
  int _TC7;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TC8;
  void * _TC9;
  struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _TCA;
  union Cyc_Absyn_DatatypeInfo _TCB;
  struct _union_DatatypeInfo_KnownDatatype _TCC;
  unsigned int _TCD;
  void * _TCE;
  union Cyc_Absyn_DatatypeInfo _TCF;
  struct _union_DatatypeInfo_KnownDatatype _TD0;
  struct Cyc_Absyn_Datatypedecl * * _TD1;
  struct Cyc_Tcenv_Tenv * _TD2;
  unsigned int _TD3;
  struct Cyc_Absyn_Datatypedecl * _TD4;
  struct _tuple1 * _TD5;
  struct Cyc_Absyn_Datatypedecl * * _TD6;
  struct Cyc_Absyn_Datatypedecl * _TD7;
  struct Cyc_Core_Opt * _TD8;
  struct Cyc_Warn_String_Warn_Warg_struct _TD9;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TDA;
  unsigned int _TDB;
  struct _fat_ptr _TDC;
  struct Cyc_Absyn_Datatypedecl * _TDD;
  struct Cyc_Core_Opt * _TDE;
  void * _TDF;
  struct Cyc_Absyn_Datatypedecl * _TE0;
  struct Cyc_List_List * _TE1;
  struct Cyc_List_List * _TE2;
  struct Cyc_Absyn_Datatypedecl * _TE3;
  struct Cyc_List_List * _TE4;
  struct Cyc_List_List * _TE5;
  struct Cyc_Hashtable_Table * (* _TE6)(int,int (*)(struct Cyc_Absyn_Tvar *,
						    struct Cyc_Absyn_Tvar *),
					int (*)(struct Cyc_Absyn_Tvar *));
  struct Cyc_Hashtable_Table * (* _TE7)(int,int (*)(void *,void *),int (*)(void *));
  int (* _TE8)(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *);
  int (* _TE9)(struct Cyc_Absyn_Tvar *);
  struct Cyc_Absyn_VarargCallInfo * _TEA;
  struct Cyc_List_List * _TEB;
  void * _TEC;
  long _TED;
  struct Cyc_Absyn_Exp * _TEE;
  unsigned int _TEF;
  struct Cyc_List_List * _TF0;
  struct Cyc_Absyn_Exp * _TF1;
  void * _TF2;
  void * _TF3;
  struct Cyc_Absyn_Exp * _TF4;
  struct Cyc_Tcenv_Tenv * _TF5;
  struct Cyc_Absyn_Exp * _TF6;
  void * _TF7;
  struct Cyc_List_List * _TF8;
  struct Cyc_List_List * _TF9;
  struct Cyc_Absyn_VarargCallInfo * _TFA;
  struct Cyc_Absyn_VarargCallInfo * _TFB;
  struct Cyc_List_List * _TFC;
  struct Cyc_List_List * _TFD;
  struct Cyc_List_List * _TFE;
  void * _TFF;
  void * _T100;
  int * _T101;
  int _T102;
  struct _handler_cons * _T103;
  int _T104;
  struct Cyc_List_List * (* _T105)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Tvar *);
  void * (* _T106)(struct Cyc_Hashtable_Table *,void *);
  void * _T107;
  struct Cyc_Core_Not_found_exn_struct * _T108;
  char * _T109;
  char * _T10A;
  void (* _T10B)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Tvar *,struct Cyc_List_List *);
  void (* _T10C)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Hashtable_Table * _T10D;
  struct Cyc_Absyn_Tvar * _T10E;
  struct Cyc_List_List * _T10F;
  struct Cyc_List_List * _T110;
  struct Cyc_List_List * _T111;
  long _T112;
  long _T113;
  struct Cyc_Absyn_VarargCallInfo * _T114;
  int _T115;
  int _T116;
  struct Cyc_List_List * _T117;
  unsigned int _T118;
  struct Cyc_List_List * _T119;
  unsigned int _T11A;
  struct Cyc_List_List * _T11B;
  void * _T11C;
  struct Cyc_Tcenv_Tenv * _T11D;
  struct Cyc_Absyn_Exp * _T11E;
  void * _T11F;
  struct Cyc_List_List * _T120;
  struct Cyc_List_List * _T121;
  struct Cyc_Absyn_Datatypefield * _T122;
  struct Cyc_List_List * _T123;
  void * _T124;
  struct Cyc_Absyn_Datatypefield * _T125;
  struct Cyc_List_List * _T126;
  struct Cyc_List_List * _T127;
  struct Cyc_Warn_String_Warn_Warg_struct _T128;
  unsigned int _T129;
  struct _fat_ptr _T12A;
  struct Cyc_List_List * * _T12B;
  struct Cyc_List_List * _T12C;
  struct Cyc_Tcenv_Tenv * _T12D;
  unsigned int _T12E;
  void * _T12F;
  struct Cyc_List_List * _T130;
  void * _T131;
  struct Cyc_List_List * _T132;
  struct _tuple21 * _T133;
  struct _fat_ptr * _T134;
  struct _fat_ptr _T135;
  struct Cyc_Int_pa_PrintArg_struct _T136;
  int _T137;
  struct _fat_ptr _T138;
  struct _fat_ptr _T139;
  struct _tuple1 * _T13A;
  struct _tuple1 * _T13B;
  struct Cyc_List_List * _T13C;
  struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T13D;
  void * _T13E;
  unsigned int _T13F;
  struct Cyc_Absyn_Exp * _T140;
  struct Cyc_List_List * _T141;
  struct Cyc_List_List * _T142;
  struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T143;
  struct Cyc_List_List * _T144;
  void * _T145;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T146;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T147;
  void * _T148;
  unsigned int _T149;
  void * _T14A;
  unsigned int _T14B;
  struct Cyc_Absyn_Pat * _T14C;
  struct Cyc_List_List * _T14D;
  void * _T14E;
  struct Cyc_Absyn_Vardecl * _T14F;
  struct Cyc_List_List * _T150;
  struct _tuple22 * _T151;
  struct Cyc_List_List * _T152;
  struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T153;
  void * _T154;
  unsigned int _T155;
  struct Cyc_Absyn_Pat * _T156;
  struct Cyc_Absyn_Exp * _T157;
  struct Cyc_List_List * _T158;
  struct _tuple23 * _T159;
  struct Cyc_List_List * _T15A;
  void * _T15B;
  struct Cyc_List_List * _T15C;
  void * _T15D;
  struct Cyc_List_List * _T15E;
  struct Cyc_List_List * _T15F;
  struct Cyc_Absyn_Exp * _T160;
  struct Cyc_Absyn_Exp * _T161;
  unsigned int _T162;
  struct _tuple1 * _T163;
  struct _fat_ptr * _T164;
  void * _T165;
  struct Cyc_Absyn_Exp * _T166;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T167;
  void * _T168;
  unsigned int _T169;
  struct Cyc_Absyn_Exp * _T16A;
  struct Cyc_Tcenv_Tenv * _T16B;
  struct Cyc_Absyn_Pat * _T16C;
  void * * _T16D;
  unsigned int _T16E;
  struct Cyc_Tcenv_Tenv * _T16F;
  struct Cyc_Absyn_Pat * _T170;
  void * * _T171;
  struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T172;
  struct Cyc_Core_Opt * _T173;
  struct Cyc_Tcpat_TcPatResult _T174;
  struct Cyc_Absyn_Decl * _T175;
  struct Cyc_Absyn_Stmt * _T176;
  struct Cyc_Absyn_Stmt * _T177;
  unsigned int _T178;
  struct Cyc_Absyn_Stmt * _T179;
  unsigned int _T17A;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T17B;
  void * _T17C;
  unsigned int _T17D;
  struct Cyc_Absyn_Decl * _T17E;
  struct Cyc_Absyn_Stmt * _T17F;
  unsigned int _T180;
  struct Cyc_Absyn_Exp * _T181;
  struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T182;
  void * _T183;
  void * _T184;
  struct Cyc_Warn_String_Warn_Warg_struct _T185;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T186;
  struct Cyc_Tcenv_Tenv * _T187;
  unsigned int _T188;
  void * * _T189;
  struct _fat_ptr _T18A;
  void * _T18B;
  struct Cyc_Warn_String_Warn_Warg_struct _T18C;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T18D;
  struct Cyc_Tcenv_Tenv * _T18E;
  unsigned int _T18F;
  void * * _T190;
  struct _fat_ptr _T191;
  struct Cyc_List_List * es = args;
  int arg_cnt = 0;
  struct Cyc_Tcenv_Tenv * te = Cyc_Tcenv_new_block(loc,te_orig);
  struct Cyc_Tcenv_Tenv * _T192 = Cyc_Tcenv_clear_abstract_val_ok(te);
  { struct Cyc_Tcenv_Tenv * te = _T192;
    Cyc_Tcexp_tcExp(te,0,e);
    _T0 = e;
    _T1 = _T0->topt;
    _T2 = _check_null(_T1);
    { void * t = Cyc_Absyn_compress(_T2);
      void * _T193;
      void * _T194;
      void * _T195;
      void * _T196;
      struct Cyc_Absyn_Tqual _T197;
      void * _T198;
      _T3 = t;
      _T4 = (int *)_T3;
      _T5 = *_T4;
      if (_T5 != 4) { goto _TL215;
      }
      _T6 = t;
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T199 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T6;
	_T7 = _T199->f1;
	_T198 = _T7.elt_type;
	_T8 = _T199->f1;
	_T197 = _T8.elt_tq;
	_T9 = _T199->f1;
	_TA = _T9.ptr_atts;
	_T196 = _TA.eff;
	_TB = _T199->f1;
	_TC = _TB.ptr_atts;
	_T195 = _TC.nullable;
	_TD = _T199->f1;
	_TE = _TD.ptr_atts;
	_T194 = _TE.bounds;
	_TF = _T199->f1;
	_T10 = _TF.ptr_atts;
	_T193 = _T10.zero_term;
      }{ void * t1 = _T198;
	struct Cyc_Absyn_Tqual tq = _T197;
	void * rgn = _T196;
	void * x = _T195;
	void * b = _T194;
	void * zt = _T193;
	Cyc_Tcenv_check_effect_accessible_nodelay(te,loc,rgn);
	Cyc_Tcutil_check_nonzero_bound(loc,b);
	_T11 = Cyc_Absyn_compress(t1);
	_T12 = Cyc_Tcenv_curr_lifo_rgn(te);
	t1 = Cyc_CurRgn_instantiate(_T11,_T12);
	{ struct Cyc_List_List * _T199;
	  struct Cyc_List_List * _T19A;
	  struct Cyc_Absyn_Vardecl * _T19B;
	  struct Cyc_AssnDef_ExistAssnFn * _T19C;
	  struct Cyc_Absyn_Exp * _T19D;
	  struct Cyc_AssnDef_ExistAssnFn * _T19E;
	  struct Cyc_Absyn_Exp * _T19F;
	  struct Cyc_AssnDef_ExistAssnFn * _T1A0;
	  struct Cyc_Absyn_Exp * _T1A1;
	  struct Cyc_AssnDef_ExistAssnFn * _T1A2;
	  struct Cyc_Absyn_Exp * _T1A3;
	  struct Cyc_List_List * _T1A4;
	  struct Cyc_List_List * _T1A5;
	  struct Cyc_Absyn_VarargInfo * _T1A6;
	  long _T1A7;
	  struct Cyc_List_List * _T1A8;
	  void * _T1A9;
	  struct Cyc_Absyn_Tqual _T1AA;
	  void * _T1AB;
	  struct Cyc_List_List * _T1AC;
	  _T13 = t1;
	  _T14 = (int *)_T13;
	  _T15 = *_T14;
	  if (_T15 != 6) { goto _TL217;
	  }
	  _T16 = t1;
	  { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T1AD = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T16;
	    _T17 = _T1AD->f1;
	    _T1AC = _T17.tvars;
	    _T18 = _T1AD->f1;
	    _T1AB = _T18.effect;
	    _T19 = _T1AD->f1;
	    _T1AA = _T19.ret_tqual;
	    _T1A = _T1AD->f1;
	    _T1A9 = _T1A.ret_type;
	    _T1B = _T1AD->f1;
	    _T1A8 = _T1B.args;
	    _T1C = _T1AD->f1;
	    _T1A7 = _T1C.c_varargs;
	    _T1D = _T1AD->f1;
	    _T1A6 = _T1D.cyc_varargs;
	    _T1E = _T1AD->f1;
	    _T1A5 = _T1E.qual_bnd;
	    _T1F = _T1AD->f1;
	    _T1A4 = _T1F.attributes;
	    _T20 = _T1AD->f1;
	    _T1A3 = _T20.checks_clause;
	    _T21 = _T1AD->f1;
	    _T1A2 = _T21.checks_assn;
	    _T22 = _T1AD->f1;
	    _T1A1 = _T22.requires_clause;
	    _T23 = _T1AD->f1;
	    _T1A0 = _T23.requires_assn;
	    _T24 = _T1AD->f1;
	    _T19F = _T24.ensures_clause;
	    _T25 = _T1AD->f1;
	    _T19E = _T25.ensures_assn;
	    _T26 = _T1AD->f1;
	    _T19D = _T26.throws_clause;
	    _T27 = _T1AD->f1;
	    _T19C = _T27.throws_assn;
	    _T28 = _T1AD->f1;
	    _T19B = _T28.return_value;
	    _T29 = _T1AD->f1;
	    _T19A = _T29.arg_vardecls;
	    _T2A = _T1AD->f1;
	    _T199 = _T2A.effconstr;
	  }{ struct Cyc_List_List * tvars = _T1AC;
	    void * eff = _T1AB;
	    struct Cyc_Absyn_Tqual res_tq = _T1AA;
	    void * res_typ = _T1A9;
	    struct Cyc_List_List * orig_args_info = _T1A8;
	    long c_vararg = _T1A7;
	    struct Cyc_Absyn_VarargInfo * cyc_vararg = _T1A6;
	    struct Cyc_List_List * qb = _T1A5;
	    struct Cyc_List_List * atts = _T1A4;
	    struct Cyc_Absyn_Exp * chk = _T1A3;
	    struct Cyc_AssnDef_ExistAssnFn * chk_relns = _T1A2;
	    struct Cyc_Absyn_Exp * req = _T1A1;
	    struct Cyc_AssnDef_ExistAssnFn * req_relns = _T1A0;
	    struct Cyc_Absyn_Exp * ens = _T19F;
	    struct Cyc_AssnDef_ExistAssnFn * ens_relns = _T19E;
	    struct Cyc_Absyn_Exp * thrws = _T19D;
	    struct Cyc_AssnDef_ExistAssnFn * thrws_relns = _T19C;
	    struct Cyc_Absyn_Vardecl * ret_var = _T19B;
	    struct Cyc_List_List * arg_vardecls = _T19A;
	    struct Cyc_List_List * effc = _T199;
	    if (tvars != 0) { goto _TL21B;
	    }else { goto _TL21C;
	    }
	    _TL21C: if (effc != 0) { goto _TL21B;
	    }else { goto _TL219;
	    }
	    _TL21B: _T2B = e;
	    _T2C = _T2B->loc;
	    _T2D = _tag_fat("function should have been instantiated prior to use -- probably a compiler bug",
			    sizeof(char),79U);
	    _T2E = _tag_fat(0U,sizeof(void *),0);
	    Cyc_Warn_err(_T2C,_T2D,_T2E);
	    goto _TL21A;
	    _TL219: _TL21A: { struct Cyc_List_List * args_info = orig_args_info;
	      if (topt == 0) { goto _TL21D;
	      }
	      _T2F = res_typ;
	      _T30 = topt;
	      _T31 = *_T30;
	      Cyc_Unify_unify(_T2F,_T31);
	      goto _TL21E;
	      _TL21D: _TL21E: _TL21F: if (es != 0) { goto _TL222;
	      }else { goto _TL221;
	      }
	      _TL222: if (args_info != 0) { goto _TL220;
	      }else { goto _TL221;
	      }
	      _TL220: { long alias_coercion = 0;
		_T32 = es;
		_T33 = _T32->hd;
		{ struct Cyc_Absyn_Exp * e1 = (struct Cyc_Absyn_Exp *)_T33;
		  _T34 = args_info;
		  _T35 = _T34->hd;
		  _T36 = (struct _tuple9 *)_T35;
		  _T37 = *_T36;
		  { void * t2 = _T37.f2;
		    _T38 = te;
		    _T39 = &t2;
		    _T3A = e1;
		    Cyc_Tcexp_tcExp(_T38,_T39,_T3A);
		    _T3B = Cyc_Tcenv_curr_aquals_bounds(te);
		    _T3C = e1;
		    _T3D = t2;
		    _T3E = &alias_coercion;
		    _T3F = Cyc_Tcutil_coerce_arg(_T3B,_T3C,_T3D,_T3E);
		    if (_T3F) { goto _TL223;
		    }else { goto _TL225;
		    }
		    _TL225: { struct _fat_ptr s0 = _tag_fat("actual argument has type ",
							    sizeof(char),
							    26U);
		      _T40 = e1;
		      _T41 = _T40->topt;
		      _T42 = _check_null(_T41);
		      { struct _fat_ptr s1 = Cyc_Absynpp_typ2string(_T42);
			struct _fat_ptr s2 = _tag_fat(" but formal has type ",
						      sizeof(char),22U);
			struct _fat_ptr s3 = Cyc_Absynpp_typ2string(t2);
			_T43 = Cyc_strlen(s0);
			_T44 = Cyc_strlen(s1);
			_T45 = _T43 + _T44;
			_T46 = Cyc_strlen(s2);
			_T47 = _T45 + _T46;
			_T48 = Cyc_strlen(s3);
			_T49 = _T47 + _T48;
			if (_T49 < 70U) { goto _TL226;
			}
			{ struct Cyc_Warn_String_Warn_Warg_struct _T1AD;
			  _T1AD.tag = 0;
			  _T1AD.f1 = s0;
			  _T4A = _T1AD;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T1AD = _T4A;
			  { struct Cyc_Warn_String_Warn_Warg_struct _T1AE;
			    _T1AE.tag = 0;
			    _T1AE.f1 = _tag_fat("\n\t",sizeof(char),3U);
			    _T4B = _T1AE;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1AE = _T4B;
			    { struct Cyc_Warn_String_Warn_Warg_struct _T1AF;
			      _T1AF.tag = 0;
			      _T1AF.f1 = s1;
			      _T4C = _T1AF;
			    }{ struct Cyc_Warn_String_Warn_Warg_struct _T1AF = _T4C;
			      { struct Cyc_Warn_String_Warn_Warg_struct _T1B0;
				_T1B0.tag = 0;
				_T1B0.f1 = _tag_fat("\n",sizeof(char),2U);
				_T4D = _T1B0;
			      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B0 = _T4D;
				{ struct Cyc_Warn_String_Warn_Warg_struct _T1B1;
				  _T1B1.tag = 0;
				  _T1B1.f1 = s2;
				  _T4E = _T1B1;
				}{ struct Cyc_Warn_String_Warn_Warg_struct _T1B1 = _T4E;
				  { struct Cyc_Warn_String_Warn_Warg_struct _T1B2;
				    _T1B2.tag = 0;
				    _T1B2.f1 = _tag_fat("\n\t",sizeof(char),
							3U);
				    _T4F = _T1B2;
				  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B2 = _T4F;
				    { struct Cyc_Warn_String_Warn_Warg_struct _T1B3;
				      _T1B3.tag = 0;
				      _T1B3.f1 = s3;
				      _T50 = _T1B3;
				    }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B3 = _T50;
				      void * _T1B4[7];
				      _T1B4[0] = &_T1AD;
				      _T1B4[1] = &_T1AE;
				      _T1B4[2] = &_T1AF;
				      _T1B4[3] = &_T1B0;
				      _T1B4[4] = &_T1B1;
				      _T1B4[5] = &_T1B2;
				      _T1B4[6] = &_T1B3;
				      _T51 = e1;
				      _T52 = _T51->loc;
				      _T53 = _tag_fat(_T1B4,sizeof(void *),
						      7);
				      Cyc_Warn_err2(_T52,_T53);
				    }
				  }
				}
			      }
			    }
			  }
			}goto _TL227;
			_TL226: { struct Cyc_Warn_String_Warn_Warg_struct _T1AD;
			  _T1AD.tag = 0;
			  _T1AD.f1 = s0;
			  _T54 = _T1AD;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T1AD = _T54;
			  { struct Cyc_Warn_String_Warn_Warg_struct _T1AE;
			    _T1AE.tag = 0;
			    _T1AE.f1 = s1;
			    _T55 = _T1AE;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1AE = _T55;
			    { struct Cyc_Warn_String_Warn_Warg_struct _T1AF;
			      _T1AF.tag = 0;
			      _T1AF.f1 = s2;
			      _T56 = _T1AF;
			    }{ struct Cyc_Warn_String_Warn_Warg_struct _T1AF = _T56;
			      { struct Cyc_Warn_String_Warn_Warg_struct _T1B0;
				_T1B0.tag = 0;
				_T1B0.f1 = s3;
				_T57 = _T1B0;
			      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B0 = _T57;
				void * _T1B1[4];
				_T1B1[0] = &_T1AD;
				_T1B1[1] = &_T1AE;
				_T1B1[2] = &_T1AF;
				_T1B1[3] = &_T1B0;
				_T58 = e1;
				_T59 = _T58->loc;
				_T5A = _tag_fat(_T1B1,sizeof(void *),4);
				Cyc_Warn_err2(_T59,_T5A);
			      }
			    }
			  }
			}_TL227: _T5B = e1;
			_T5C = _T5B->topt;
			_T5D = _check_null(_T5C);
			_T5E = t2;
			Cyc_Unify_unify(_T5D,_T5E);
			Cyc_Unify_explain_failure();
		      }
		    }goto _TL224;
		    _TL223: _TL224: _T5F = alias_coercion;
		    if (! _T5F) { goto _TL228;
		    }
		    _T60 = alias_arg_exps;
		    { struct Cyc_List_List * _T1AD = _cycalloc(sizeof(struct Cyc_List_List));
		      _T62 = arg_cnt;
		      _T1AD->hd = (void *)_T62;
		      _T63 = alias_arg_exps;
		      _T1AD->tl = *_T63;
		      _T61 = (struct Cyc_List_List *)_T1AD;
		    }*_T60 = _T61;
		    goto _TL229;
		    _TL228: _TL229: _T64 = e1;
		    _T65 = _T64->loc;
		    _T66 = Cyc_Tcenv_curr_aquals_bounds(te);
		    _T67 = t2;
		    _T68 = e1;
		    Cyc_Tcexp_check_consume(_T65,_T66,_T67,_T68);
		    _T69 = es;
		    es = _T69->tl;
		    _T6A = args_info;
		    args_info = _T6A->tl;
		    arg_cnt = arg_cnt + 1;
		  }
		}
	      }goto _TL21F;
	      _TL221: { long args_already_checked = 0;
		{ struct Cyc_List_List * a = atts;
		  _TL22D: if (a != 0) { goto _TL22B;
		  }else { goto _TL22C;
		  }
		  _TL22B: _T6B = a;
		  { void * _T1AD = _T6B->hd;
		    int _T1AE;
		    int _T1AF;
		    enum Cyc_Absyn_Format_Type _T1B0;
		    _T6C = (int *)_T1AD;
		    _T6D = *_T6C;
		    if (_T6D != 20) { goto _TL22E;
		    }
		    { struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T1B1 = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T1AD;
		      _T1B0 = _T1B1->f1;
		      _T1AF = _T1B1->f2;
		      _T1AE = _T1B1->f3;
		    }{ enum Cyc_Absyn_Format_Type ft = _T1B0;
		      int fmt_arg_pos = _T1AF;
		      int arg_start_pos = _T1AE;
		      { struct _handler_cons _T1B1;
			_T6E = &_T1B1;
			_push_handler(_T6E);
			{ int _T1B2 = 0;
			  _T6F = setjmp(_T1B1.handler);
			  if (! _T6F) { goto _TL230;
			  }
			  _T1B2 = 1;
			  goto _TL231;
			  _TL230: _TL231: if (_T1B2) { goto _TL232;
			  }else { goto _TL234;
			  }
			  _TL234: _T71 = Cyc_List_nth;
			  { struct Cyc_Absyn_Exp * (* _T1B3)(struct Cyc_List_List *,
							     int) = (struct Cyc_Absyn_Exp * (*)(struct Cyc_List_List *,
												int))_T71;
			    _T70 = _T1B3;
			  }_T72 = args;
			  _T73 = fmt_arg_pos - 1;
			  { struct Cyc_Absyn_Exp * fmt_arg = _T70(_T72,_T73);
			    struct Cyc_Core_Opt * fmt_args;
			    if (arg_start_pos != 0) { goto _TL235;
			    }
			    fmt_args = 0;
			    goto _TL236;
			    _TL235: { struct Cyc_Core_Opt * _T1B3 = _cycalloc(sizeof(struct Cyc_Core_Opt));
			      _T75 = args;
			      _T76 = arg_start_pos - 1;
			      _T1B3->v = Cyc_List_nth_tail(_T75,_T76);
			      _T74 = (struct Cyc_Core_Opt *)_T1B3;
			    }fmt_args = _T74;
			    _TL236: args_already_checked = 1;
			    _T77 = ft;
			    _T78 = (int)_T77;
			    switch (_T78) {
			    case Cyc_Absyn_Printf_ft: 
			      _T79 = te;
			      _T7A = fmt_arg;
			      _T7B = fmt_args;
			      _T7C = arg_start_pos - 1;
			      _T7D = alias_arg_exps;
			      _T7E = c_vararg;
			      _T7F = Cyc_Formatstr_get_format_types;
			      Cyc_Tcexp_check_format_args(_T79,_T7A,_T7B,
							  _T7C,_T7D,_T7E,
							  _T7F);
			      goto _LLF;
			    case Cyc_Absyn_Scanf_ft: 
			      goto _LL15;
			    default: 
			      _LL15: _T80 = te;
			      _T81 = fmt_arg;
			      _T82 = fmt_args;
			      _T83 = arg_start_pos - 1;
			      _T84 = alias_arg_exps;
			      _T85 = c_vararg;
			      _T86 = Cyc_Formatstr_get_scanf_types;
			      Cyc_Tcexp_check_format_args(_T80,_T81,_T82,
							  _T83,_T84,_T85,
							  _T86);
			      goto _LLF;
			    }
			    _LLF: ;
			  }_pop_handler();
			  goto _TL233;
			  _TL232: _T87 = Cyc_Core_get_exn_thrown();
			  { void * _T1B3 = (void *)_T87;
			    void * _T1B4;
			    _T88 = (struct Cyc_List_Nth_exn_struct *)_T1B3;
			    _T89 = _T88->tag;
			    _T8A = Cyc_List_Nth;
			    if (_T89 != _T8A) { goto _TL238;
			    }
			    { struct Cyc_Warn_String_Warn_Warg_struct _T1B5;
			      _T1B5.tag = 0;
			      _T1B5.f1 = _tag_fat("bad format arguments",
						  sizeof(char),21U);
			      _T8B = _T1B5;
			    }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B5 = _T8B;
			      void * _T1B6[1];
			      _T1B6[0] = &_T1B5;
			      _T8C = loc;
			      _T8D = _tag_fat(_T1B6,sizeof(void *),1);
			      Cyc_Warn_err2(_T8C,_T8D);
			    }goto _LL16;
			    _TL238: _T1B4 = _T1B3;
			    { void * exn = _T1B4;
			      _rethrow(exn);
			    }_LL16: ;
			  }_TL233: ;
			}
		      }goto _LLA;
		    }_TL22E: goto _LLA;
		    _LLA: ;
		  }_T8E = a;
		  a = _T8E->tl;
		  goto _TL22D;
		  _TL22C: ;
		}if (args_info == 0) { goto _TL23A;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T1AD;
		  _T1AD.tag = 0;
		  _T1AD.f1 = _tag_fat("too few arguments for function ",sizeof(char),
				      32U);
		  _T8F = _T1AD;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T1AD = _T8F;
		  { struct Cyc_Warn_Exp_Warn_Warg_struct _T1AE;
		    _T1AE.tag = 4;
		    _T1AE.f1 = e;
		    _T90 = _T1AE;
		  }{ struct Cyc_Warn_Exp_Warn_Warg_struct _T1AE = _T90;
		    void * _T1AF[2];
		    _T1AF[0] = &_T1AD;
		    _T1AF[1] = &_T1AE;
		    _T91 = loc;
		    _T92 = _tag_fat(_T1AF,sizeof(void *),2);
		    Cyc_Warn_err2(_T91,_T92);
		  }
		}goto _TL23B;
		_TL23A: if (es != 0) { goto _TL23E;
		}else { goto _TL240;
		}
		_TL240: _T93 = c_vararg;
		if (_T93) { goto _TL23E;
		}else { goto _TL23F;
		}
		_TL23F: if (cyc_vararg != 0) { goto _TL23E;
		}else { goto _TL23C;
		}
		_TL23E: _T94 = c_vararg;
		if (! _T94) { goto _TL241;
		}
		_TL246: if (es != 0) { goto _TL244;
		}else { goto _TL245;
		}
		_TL244: _T95 = te;
		_T96 = es;
		_T97 = _T96->hd;
		_T98 = (struct Cyc_Absyn_Exp *)_T97;
		Cyc_Tcexp_tcExp(_T95,0,_T98);
		_T99 = es;
		es = _T99->tl;
		goto _TL246;
		_TL245: goto _TL242;
		_TL241: if (cyc_vararg != 0) { goto _TL247;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T1AD;
		  _T1AD.tag = 0;
		  _T1AD.f1 = _tag_fat("too many arguments for function ",
				      sizeof(char),33U);
		  _T9A = _T1AD;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T1AD = _T9A;
		  { struct Cyc_Warn_Exp_Warn_Warg_struct _T1AE;
		    _T1AE.tag = 4;
		    _T1AE.f1 = e;
		    _T9B = _T1AE;
		  }{ struct Cyc_Warn_Exp_Warn_Warg_struct _T1AE = _T9B;
		    void * _T1AF[2];
		    _T1AF[0] = &_T1AD;
		    _T1AF[1] = &_T1AE;
		    _T9C = loc;
		    _T9D = _tag_fat(_T1AF,sizeof(void *),2);
		    Cyc_Warn_err2(_T9C,_T9D);
		  }
		}goto _TL248;
		_TL247: _T9E = cyc_vararg;
		{ struct Cyc_Absyn_VarargInfo _T1AD = *_T9E;
		  long _T1AE;
		  void * _T1AF;
		  _T1AF = _T1AD.type;
		  _T1AE = _T1AD.inject;
		  { void * vt = _T1AF;
		    long inject = _T1AE;
		    struct Cyc_Absyn_VarargCallInfo * vci;
		    vci = _cycalloc(sizeof(struct Cyc_Absyn_VarargCallInfo));
		    _T9F = vci;
		    _T9F->num_varargs = 0;
		    _TA0 = vci;
		    _TA0->injectors = 0;
		    _TA1 = vci;
		    _TA1->vai = cyc_vararg;
		    _TA2 = vararg_call_info;
		    *_TA2 = vci;
		    _TA3 = inject;
		    if (_TA3) { goto _TL249;
		    }else { goto _TL24B;
		    }
		    _TL24B: _TL24F: if (es != 0) { goto _TL24D;
		    }else { goto _TL24E;
		    }
		    _TL24D: { long alias_coercion = 0;
		      _TA4 = es;
		      _TA5 = _TA4->hd;
		      { struct Cyc_Absyn_Exp * e1 = (struct Cyc_Absyn_Exp *)_TA5;
			_TA6 = vci;
			_TA6->num_varargs = _TA6->num_varargs + 1;
			_TA7 = te;
			_TA8 = &vt;
			_TA9 = e1;
			Cyc_Tcexp_tcExp(_TA7,_TA8,_TA9);
			_TAA = Cyc_Tcenv_curr_aquals_bounds(te);
			_TAB = e1;
			_TAC = vt;
			_TAD = &alias_coercion;
			_TAE = Cyc_Tcutil_coerce_arg(_TAA,_TAB,_TAC,_TAD);
			if (_TAE) { goto _TL250;
			}else { goto _TL252;
			}
			_TL252: { struct Cyc_Warn_String_Warn_Warg_struct _T1B0;
			  _T1B0.tag = 0;
			  _T1B0.f1 = _tag_fat("vararg requires type ",sizeof(char),
					      22U);
			  _TAF = _T1B0;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T1B0 = _TAF;
			  { struct Cyc_Warn_Typ_Warn_Warg_struct _T1B1;
			    _T1B1.tag = 2;
			    _T1B1.f1 = vt;
			    _TB0 = _T1B1;
			  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1B1 = _TB0;
			    { struct Cyc_Warn_String_Warn_Warg_struct _T1B2;
			      _T1B2.tag = 0;
			      _T1B2.f1 = _tag_fat(" but argument has type ",
						  sizeof(char),24U);
			      _TB1 = _T1B2;
			    }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B2 = _TB1;
			      { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T1B3;
				_T1B3.tag = 3;
				_TB3 = e1;
				_T1B3.f1 = _TB3->topt;
				_TB2 = _T1B3;
			      }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T1B3 = _TB2;
				void * _T1B4[4];
				_T1B4[0] = &_T1B0;
				_T1B4[1] = &_T1B1;
				_T1B4[2] = &_T1B2;
				_T1B4[3] = &_T1B3;
				_TB4 = loc;
				_TB5 = _tag_fat(_T1B4,sizeof(void *),4);
				Cyc_Tcexp_err_and_explain(_TB4,_TB5);
			      }
			    }
			  }
			}goto _TL251;
			_TL250: _TL251: _TB6 = alias_coercion;
			if (! _TB6) { goto _TL253;
			}
			_TB7 = alias_arg_exps;
			{ struct Cyc_List_List * _T1B0 = _cycalloc(sizeof(struct Cyc_List_List));
			  _TB9 = arg_cnt;
			  _T1B0->hd = (void *)_TB9;
			  _TBA = alias_arg_exps;
			  _T1B0->tl = *_TBA;
			  _TB8 = (struct Cyc_List_List *)_T1B0;
			}*_TB7 = _TB8;
			goto _TL254;
			_TL253: _TL254: _TBB = e1;
			_TBC = _TBB->loc;
			_TBD = Cyc_Tcenv_curr_aquals_bounds(te);
			_TBE = vt;
			_TBF = e1;
			Cyc_Tcexp_check_consume(_TBC,_TBD,_TBE,_TBF);
		      }
		    }_TC0 = es;
		    es = _TC0->tl;
		    arg_cnt = arg_cnt + 1;
		    goto _TL24F;
		    _TL24E: goto _TL24A;
		    _TL249: _TC1 = Cyc_Tcutil_pointer_elt_type(vt);
		    { void * _T1B0 = Cyc_Absyn_compress(_TC1);
		      struct Cyc_List_List * _T1B1;
		      struct Cyc_Absyn_Datatypedecl * _T1B2;
		      _TC2 = (int *)_T1B0;
		      _TC3 = *_TC2;
		      if (_TC3 != 0) { goto _TL255;
		      }
		      _TC4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1B0;
		      _TC5 = _TC4->f1;
		      _TC6 = (int *)_TC5;
		      _TC7 = *_TC6;
		      if (_TC7 != 22) { goto _TL257;
		      }
		      _TC8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1B0;
		      _TC9 = _TC8->f1;
		      _TCA = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_TC9;
		      _TCB = _TCA->f1;
		      _TCC = _TCB.KnownDatatype;
		      _TCD = _TCC.tag;
		      if (_TCD != 2) { goto _TL259;
		      }
		      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1B3 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1B0;
			_TCE = _T1B3->f1;
			{ struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T1B4 = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_TCE;
			  _TCF = _T1B4->f1;
			  _TD0 = _TCF.KnownDatatype;
			  _TD1 = _TD0.val;
			  { struct Cyc_Absyn_Datatypedecl * _T1B5 = *_TD1;
			    _T1B2 = _T1B5;
			  }
			}_T1B1 = _T1B3->f2;
		      }{ struct Cyc_Absyn_Datatypedecl * td = _T1B2;
			struct Cyc_List_List * targs = _T1B1;
			_TD2 = te;
			_TD3 = loc;
			_TD4 = td;
			_TD5 = _TD4->name;
			_TD6 = Cyc_Tcenv_lookup_datatypedecl(_TD2,_TD3,_TD5);
			{ struct Cyc_Absyn_Datatypedecl * _T1B3 = *_TD6;
			  struct Cyc_Absyn_Datatypedecl * td = _T1B3;
			  struct Cyc_List_List * fields = 0;
			  _TD7 = td;
			  _TD8 = _TD7->fields;
			  if (_TD8 != 0) { goto _TL25B;
			  }
			  { struct Cyc_Warn_String_Warn_Warg_struct _T1B4;
			    _T1B4.tag = 0;
			    _T1B4.f1 = _tag_fat("can't inject into abstract ",
						sizeof(char),28U);
			    _TD9 = _T1B4;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B4 = _TD9;
			    { struct Cyc_Warn_Typ_Warn_Warg_struct _T1B5;
			      _T1B5.tag = 2;
			      _T1B5.f1 = vt;
			      _TDA = _T1B5;
			    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1B5 = _TDA;
			      void * _T1B6[2];
			      _T1B6[0] = &_T1B4;
			      _T1B6[1] = &_T1B5;
			      _TDB = loc;
			      _TDC = _tag_fat(_T1B6,sizeof(void *),2);
			      Cyc_Warn_err2(_TDB,_TDC);
			    }
			  }goto _TL25C;
			  _TL25B: _TDD = td;
			  _TDE = _TDD->fields;
			  _TDF = _TDE->v;
			  fields = (struct Cyc_List_List *)_TDF;
			  _TL25C: _TE0 = td;
			  _TE1 = _TE0->tvs;
			  _TE2 = targs;
			  { struct Cyc_List_List * inst = Cyc_List_zip(_TE1,
								       _TE2);
			    _TE3 = td;
			    _TE4 = _TE3->tvs;
			    _TE5 = targs;
			    { struct Cyc_List_List * orig = Cyc_List_zip(_TE4,
									 _TE5);
			      _TE7 = Cyc_Hashtable_create;
			      { struct Cyc_Hashtable_Table * (* _T1B4)(int,
								       int (*)(struct Cyc_Absyn_Tvar *,
									       struct Cyc_Absyn_Tvar *),
								       int (*)(struct Cyc_Absyn_Tvar *)) = (struct Cyc_Hashtable_Table * (*)(int,
																	     int (*)(struct Cyc_Absyn_Tvar *,
																		     struct Cyc_Absyn_Tvar *),
																	     int (*)(struct Cyc_Absyn_Tvar *)))_TE7;
				_TE6 = _T1B4;
			      }_TE8 = Cyc_Absyn_tvar_cmp;
			      _TE9 = Cyc_Absyn_tvar_id;
			      { struct Cyc_Hashtable_Table * inst_effects = _TE6(10,
										 _TE8,
										 _TE9);
				long empty_inst_effects = 1;
				struct Cyc_List_List * espos = es;
				_TL260: if (es != 0) { goto _TL25E;
				}else { goto _TL25F;
				}
				_TL25E: _TEA = vci;
				_TEA->num_varargs = _TEA->num_varargs + 1;
				_TEB = es;
				_TEC = _TEB->hd;
				{ struct Cyc_Absyn_Exp * e1 = (struct Cyc_Absyn_Exp *)_TEC;
				  _TED = args_already_checked;
				  if (_TED) { goto _TL261;
				  }else { goto _TL263;
				  }
				  _TL263: Cyc_Tcexp_tcExp(te,0,e1);
				  _TEE = e1;
				  _TEF = _TEE->loc;
				  _TF0 = Cyc_Tcenv_curr_aquals_bounds(te);
				  _TF1 = e1;
				  _TF2 = _TF1->topt;
				  _TF3 = _check_null(_TF2);
				  _TF4 = e1;
				  Cyc_Tcexp_check_consume(_TEF,_TF0,_TF3,
							  _TF4);
				  goto _TL262;
				  _TL261: _TL262: { struct Cyc_List_List * fresh = Cyc_Tcexp_fresh_effect_evars(te,
														inst,
														orig);
				    _TF5 = te;
				    _TF6 = e1;
				    _TF7 = Cyc_Tcutil_pointer_elt_type(vt);
				    _TF8 = inst;
				    _TF9 = fields;
				    { struct Cyc_Absyn_Datatypefield * f = Cyc_Tcexp_tcInjection(_TF5,
												 _TF6,
												 _TF7,
												 _TF8,
												 _TF9);
				      if (f == 0) { goto _TL264;
				      }
				      _TFA = vci;
				      _TFB = vci;
				      _TFC = _TFB->injectors;
				      { struct Cyc_List_List * _T1B4 = _cycalloc(sizeof(struct Cyc_List_List));
					_T1B4->hd = f;
					_T1B4->tl = 0;
					_TFD = (struct Cyc_List_List *)_T1B4;
				      }_TFA->injectors = Cyc_List_append(_TFC,
									 _TFD);
				      goto _TL265;
				      _TL264: _TL265: _TL269: if (fresh != 0) { goto _TL267;
				      }else { goto _TL268;
				      }
				      _TL267: _TFE = fresh;
				      _TFF = _TFE->hd;
				      { struct _tuple18 * _T1B4 = (struct _tuple18 *)_TFF;
					void * _T1B5;
					struct Cyc_Absyn_Tvar * _T1B6;
					{ struct _tuple18 _T1B7 = *_T1B4;
					  _T1B6 = _T1B7.f0;
					  _T1B5 = _T1B7.f1;
					}{ struct Cyc_Absyn_Tvar * tv = _T1B6;
					  void * ev = _T1B5;
					  void * cf = Cyc_Absyn_compress(ev);
					  _T100 = cf;
					  _T101 = (int *)_T100;
					  _T102 = *_T101;
					  if (_T102 != 1) { goto _TL26A;
					  }
					  goto _LL26;
					  _TL26A: { struct Cyc_List_List * l = 0;
					    { struct _handler_cons _T1B7;
					      _T103 = &_T1B7;
					      _push_handler(_T103);
					      { int _T1B8 = 0;
						_T104 = setjmp(_T1B7.handler);
						if (! _T104) { goto _TL26C;
						}
						_T1B8 = 1;
						goto _TL26D;
						_TL26C: _TL26D: if (_T1B8) { goto _TL26E;
						}else { goto _TL270;
						}
						_TL270: _T106 = Cyc_Hashtable_lookup;
						{ struct Cyc_List_List * (* _T1B9)(struct Cyc_Hashtable_Table *,
										   struct Cyc_Absyn_Tvar *) = (struct Cyc_List_List * (*)(struct Cyc_Hashtable_Table *,
																	  struct Cyc_Absyn_Tvar *))_T106;
						  _T105 = _T1B9;
						}l = _T105(inst_effects,tv);
						_pop_handler();
						goto _TL26F;
						_TL26E: _T107 = Cyc_Core_get_exn_thrown();
						{ void * _T1B9 = (void *)_T107;
						  void * _T1BA;
						  _T108 = (struct Cyc_Core_Not_found_exn_struct *)_T1B9;
						  _T109 = _T108->tag;
						  _T10A = Cyc_Core_Not_found;
						  if (_T109 != _T10A) { goto _TL271;
						  }
						  l = 0;
						  goto _LL2B;
						  _TL271: _T1BA = _T1B9;
						  { void * exn = _T1BA;
						    _rethrow(exn);
						  }_LL2B: ;
						}_TL26F: ;
					      }
					    }_T10C = Cyc_Hashtable_insert;
					    { void (* _T1B7)(struct Cyc_Hashtable_Table *,
							     struct Cyc_Absyn_Tvar *,
							     struct Cyc_List_List *) = (void (*)(struct Cyc_Hashtable_Table *,
												 struct Cyc_Absyn_Tvar *,
												 struct Cyc_List_List *))_T10C;
					      _T10B = _T1B7;
					    }_T10D = inst_effects;
					    _T10E = tv;
					    { struct Cyc_List_List * _T1B7 = _cycalloc(sizeof(struct Cyc_List_List));
					      _T1B7->hd = cf;
					      _T1B7->tl = l;
					      _T10F = (struct Cyc_List_List *)_T1B7;
					    }_T10B(_T10D,_T10E,_T10F);
					    empty_inst_effects = 0;
					    goto _LL26;
					  }_LL26: ;
					}
				      }_T110 = fresh;
				      fresh = _T110->tl;
				      goto _TL269;
				      _TL268: ;
				    }
				  }
				}_T111 = es;
				es = _T111->tl;
				goto _TL260;
				_TL25F: _T112 = empty_inst_effects;
				if (! _T112) { goto _TL273;
				}
				goto _LL1E;
				_TL273: _T113 = Cyc_Tcexp_inst_with_joineff(orig,
									    inst_effects);
				if (! _T113) { goto _TL275;
				}
				{ struct Cyc_List_List * es = espos;
				  _T114 = vci;
				  { struct Cyc_List_List * prevInjectors = _T114->injectors;
				    _T115 = Cyc_List_length(prevInjectors);
				    _T116 = Cyc_List_length(es);
				    if (_T115 == _T116) { goto _TL277;
				    }
				    goto _LL22;
				    _TL277: _TL27C: _T117 = es;
				    _T118 = (unsigned int)_T117;
				    if (_T118) { goto _TL27D;
				    }else { goto _TL27B;
				    }
				    _TL27D: _T119 = prevInjectors;
				    _T11A = (unsigned int)_T119;
				    if (_T11A) { goto _TL27A;
				    }else { goto _TL27B;
				    }
				    _TL27A: _T11B = es;
				    _T11C = _T11B->hd;
				    { struct Cyc_Absyn_Exp * e1 = (struct Cyc_Absyn_Exp *)_T11C;
				      _T11D = te;
				      _T11E = e1;
				      _T11F = Cyc_Tcutil_pointer_elt_type(vt);
				      _T120 = orig;
				      _T121 = fields;
				      { struct Cyc_Absyn_Datatypefield * f = Cyc_Tcexp_tcInjection(_T11D,
												   _T11E,
												   _T11F,
												   _T120,
												   _T121);
					if (f == 0) { goto _TL280;
					}else { goto _TL281;
					}
					_TL281: _T122 = f;
					_T123 = prevInjectors;
					_T124 = _T123->hd;
					_T125 = (struct Cyc_Absyn_Datatypefield *)_T124;
					if (_T122 != _T125) { goto _TL280;
					}else { goto _TL27E;
					}
					_TL280: goto _LL22;
					_TL27E: ;
				      }
				    }_T126 = es;
				    es = _T126->tl;
				    _T127 = prevInjectors;
				    prevInjectors = _T127->tl;
				    goto _TL27C;
				    _TL27B: ;
				  }
				}goto _TL276;
				_TL275: goto _LL22;
				_TL276: goto _LL1E;
			      }
			    }
			  }
			}
		      }_TL259: goto _LL21;
		      _TL257: goto _LL21;
		      _TL255: _LL21: _LL22: { struct Cyc_Warn_String_Warn_Warg_struct _T1B3;
			_T1B3.tag = 0;
			_T1B3.f1 = _tag_fat("bad inject vararg type",sizeof(char),
					    23U);
			_T128 = _T1B3;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B3 = _T128;
			void * _T1B4[1];
			_T1B4[0] = &_T1B3;
			_T129 = loc;
			_T12A = _tag_fat(_T1B4,sizeof(void *),1);
			Cyc_Warn_err2(_T129,_T12A);
		      }goto _LL1E;
		      _LL1E: ;
		    }_TL24A: ;
		  }
		}_TL248: _TL242: goto _TL23D;
		_TL23C: _TL23D: _TL23B: Cyc_Tcexp_check_all_aqual_bounds(loc,
									 te,
									 qb);
		_T12B = alias_arg_exps;
		_T12C = *_T12B;
		if (_T12C != 0) { goto _TL282;
		}
		_T12D = te;
		_T12E = loc;
		_T12F = _check_null(eff);
		Cyc_Tcenv_check_effect_accessible(_T12D,_T12E,_T12F);
		goto _TL283;
		_TL282: _TL283: if (chk == 0) { goto _TL284;
		}
		{ struct Cyc_List_List * vds = 0;
		  struct Cyc_List_List * ts = 0;
		  struct Cyc_List_List * new_args = 0;
		  int i = 0;
		  { struct Cyc_List_List * ainfo = orig_args_info;
		    _TL289: if (ainfo != 0) { goto _TL287;
		    }else { goto _TL288;
		    }
		    _TL287: _T130 = ainfo;
		    _T131 = _T130->hd;
		    { struct _tuple9 * _T1AD = (struct _tuple9 *)_T131;
		      void * _T1AE;
		      struct Cyc_Absyn_Tqual _T1AF;
		      { struct _tuple9 _T1B0 = *_T1AD;
			_T1AF = _T1B0.f1;
			_T1AE = _T1B0.f2;
		      }{ struct Cyc_Absyn_Tqual tq = _T1AF;
			void * t = _T1AE;
			{ struct Cyc_List_List * _T1B0 = _cycalloc(sizeof(struct Cyc_List_List));
			  { struct _tuple21 * _T1B1 = _cycalloc(sizeof(struct _tuple21));
			    _T1B1->f0 = tq;
			    _T1B1->f1 = t;
			    _T133 = (struct _tuple21 *)_T1B1;
			  }_T1B0->hd = _T133;
			  _T1B0->tl = ts;
			  _T132 = (struct Cyc_List_List *)_T1B0;
			}ts = _T132;
			{ struct _fat_ptr * ux;
			  ux = _cycalloc(sizeof(struct _fat_ptr));
			  _T134 = ux;
			  { struct Cyc_Int_pa_PrintArg_struct _T1B0;
			    _T1B0.tag = 1;
			    _T137 = i;
			    _T1B0.f1 = (unsigned long)_T137;
			    _T136 = _T1B0;
			  }{ struct Cyc_Int_pa_PrintArg_struct _T1B0 = _T136;
			    void * _T1B1[1];
			    _T1B1[0] = &_T1B0;
			    _T138 = _tag_fat("arg%d",sizeof(char),6U);
			    _T139 = _tag_fat(_T1B1,sizeof(void *),1);
			    _T135 = Cyc_aprintf(_T138,_T139);
			  }*_T134 = _T135;
			  { struct _tuple1 * x;
			    x = _cycalloc(sizeof(struct _tuple1));
			    _T13A = x;
			    _T13A->f0 = Cyc_Absyn_Loc_n();
			    _T13B = x;
			    _T13B->f1 = ux;
			    { struct Cyc_Absyn_Vardecl * vd = Cyc_Absyn_new_vardecl(loc,
										    x,
										    t,
										    0,
										    0);
			      { struct Cyc_List_List * _T1B0 = _cycalloc(sizeof(struct Cyc_List_List));
				_T1B0->hd = vd;
				_T1B0->tl = vds;
				_T13C = (struct Cyc_List_List *)_T1B0;
			      }vds = _T13C;
			      { struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T1B0 = _cycalloc(sizeof(struct Cyc_Absyn_Pat_b_Absyn_Binding_struct));
				_T1B0->tag = 5;
				_T1B0->f1 = vd;
				_T13D = (struct Cyc_Absyn_Pat_b_Absyn_Binding_struct *)_T1B0;
			      }_T13E = (void *)_T13D;
			      _T13F = loc;
			      { struct Cyc_Absyn_Exp * new_arg = Cyc_Absyn_varb_exp(_T13E,
										    _T13F);
				_T140 = new_arg;
				_T140->topt = t;
				{ struct Cyc_List_List * _T1B0 = _cycalloc(sizeof(struct Cyc_List_List));
				  _T1B0->hd = new_arg;
				  _T1B0->tl = new_args;
				  _T141 = (struct Cyc_List_List *)_T1B0;
				}new_args = _T141;
			      }
			    }
			  }
			}
		      }
		    }_T142 = ainfo;
		    ainfo = _T142->tl;
		    i = i + 1;
		    goto _TL289;
		    _TL288: ;
		  }new_args = Cyc_List_imp_rev(new_args);
		  ts = Cyc_List_imp_rev(ts);
		  vds = Cyc_List_imp_rev(vds);
		  { struct Cyc_List_List * ps = 0;
		    { struct Cyc_List_List * vs = vds;
		      _TL28D: if (vs != 0) { goto _TL28B;
		      }else { goto _TL28C;
		      }
		      _TL28B: { struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T1AD = _cycalloc(sizeof(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct));
			_T1AD->tag = 1;
			_T144 = vs;
			_T145 = _T144->hd;
			_T1AD->f1 = (struct Cyc_Absyn_Vardecl *)_T145;
			_T146 = &Cyc_Absyn_Wild_p_val;
			_T147 = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T146;
			_T148 = (void *)_T147;
			_T149 = loc;
			_T1AD->f2 = Cyc_Absyn_new_pat(_T148,_T149);
			_T143 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T1AD;
		      }_T14A = (void *)_T143;
		      _T14B = loc;
		      { struct Cyc_Absyn_Pat * p = Cyc_Absyn_new_pat(_T14A,
								     _T14B);
			_T14C = p;
			_T14D = vs;
			_T14E = _T14D->hd;
			_T14F = (struct Cyc_Absyn_Vardecl *)_T14E;
			_T14C->topt = _T14F->type;
			{ struct Cyc_List_List * _T1AD = _cycalloc(sizeof(struct Cyc_List_List));
			  { struct _tuple22 * _T1AE = _cycalloc(sizeof(struct _tuple22));
			    _T1AE->f0 = 0;
			    _T1AE->f1 = p;
			    _T151 = (struct _tuple22 *)_T1AE;
			  }_T1AD->hd = _T151;
			  _T1AD->tl = ps;
			  _T150 = (struct Cyc_List_List *)_T1AD;
			}ps = _T150;
		      }_T152 = vs;
		      vs = _T152->tl;
		      goto _TL28D;
		      _TL28C: ;
		    }ps = Cyc_List_imp_rev(ps);
		    { void * tup_type = Cyc_Absyn_tuple_type(ts);
		      { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T1AD = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct));
			_T1AD->tag = 6;
			_T1AD->f1 = tup_type;
			_T1AD->f2 = 1;
			_T1AD->f3 = 0;
			_T1AD->f4 = ps;
			_T1AD->f5 = 0;
			_T153 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T1AD;
		      }_T154 = (void *)_T153;
		      _T155 = loc;
		      { struct Cyc_Absyn_Pat * tup_pat = Cyc_Absyn_new_pat(_T154,
									   _T155);
			_T156 = tup_pat;
			_T156->topt = tup_type;
			{ struct Cyc_Absyn_Exp * tup_exp = Cyc_Absyn_tuple_exp(args,
									       loc);
			  _T157 = tup_exp;
			  _T157->topt = tup_type;
			  { struct Cyc_Absyn_Exp * subst_chk = Cyc_Tcutil_deep_copy_exp(1,
											chk);
			    struct Cyc_List_List * subst = 0;
			    { struct Cyc_List_List * es = new_args;
			      _TL291: if (arg_vardecls != 0) { goto _TL28F;
			      }else { goto _TL290;
			      }
			      _TL28F: { struct Cyc_List_List * _T1AD = _cycalloc(sizeof(struct Cyc_List_List));
				{ struct _tuple23 * _T1AE = _cycalloc(sizeof(struct _tuple23));
				  _T15A = arg_vardecls;
				  _T15B = _T15A->hd;
				  _T1AE->f0 = (struct Cyc_Absyn_Vardecl *)_T15B;
				  _T15C = _check_null(es);
				  _T15D = _T15C->hd;
				  _T1AE->f1 = (struct Cyc_Absyn_Exp *)_T15D;
				  _T159 = (struct _tuple23 *)_T1AE;
				}_T1AD->hd = _T159;
				_T1AD->tl = subst;
				_T158 = (struct Cyc_List_List *)_T1AD;
			      }subst = _T158;
			      _T15E = arg_vardecls;
			      arg_vardecls = _T15E->tl;
			      _T15F = es;
			      es = _T15F->tl;
			      goto _TL291;
			      _TL290: ;
			    }Cyc_Tcutil_substitute_vars(subst,subst_chk);
			    { struct Cyc_Absyn_Exp * asrt = Cyc_Absyn_assert_exp(subst_chk,
										 0,
										 loc);
			      _T160 = asrt;
			      _T160->topt = Cyc_Absyn_sint_type;
			      { struct Cyc_Absyn_Exp * fncall = Cyc_Absyn_fncall_exp(e,
										     new_args,
										     loc);
				_T161 = fncall;
				_T161->topt = res_typ;
				_T162 = loc;
				{ struct _tuple1 * _T1AD = _cycalloc(sizeof(struct _tuple1));
				  _T1AD->f0 = Cyc_Absyn_Loc_n();
				  { struct _fat_ptr * _T1AE = _cycalloc(sizeof(struct _fat_ptr));
				    *_T1AE = _tag_fat("temp",sizeof(char),
						      5U);
				    _T164 = (struct _fat_ptr *)_T1AE;
				  }_T1AD->f1 = _T164;
				  _T163 = (struct _tuple1 *)_T1AD;
				}_T165 = tup_type;
				_T166 = tup_exp;
				{ struct Cyc_Absyn_Vardecl * tempvd = Cyc_Absyn_new_vardecl(_T162,
											    _T163,
											    _T165,
											    _T166,
											    0);
				  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T1AD = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
				    _T1AD->tag = 4;
				    _T1AD->f1 = tempvd;
				    _T167 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T1AD;
				  }_T168 = (void *)_T167;
				  _T169 = loc;
				  { struct Cyc_Absyn_Exp * tempexp = Cyc_Absyn_varb_exp(_T168,
											_T169);
				    _T16A = tempexp;
				    _T16A->topt = tup_type;
				    _T16B = te;
				    _T16C = tup_pat;
				    _T16D = &tup_type;
				    { struct Cyc_Tcpat_TcPatResult pat_res = Cyc_Tcpat_tcPat(_T16B,
											     _T16C,
											     _T16D,
											     0);
				      void * dp = 0;
				      _T16E = loc;
				      _T16F = te;
				      _T170 = tup_pat;
				      _T171 = &dp;
				      Cyc_Tcpat_check_let_pat_exhaustive(_T16E,
									 _T16F,
									 _T170,
									 _T171);
				      { struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T1AD = _cycalloc(sizeof(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct));
					_T1AD->tag = 2;
					_T1AD->f1 = tup_pat;
					{ struct Cyc_Core_Opt * _T1AE = _cycalloc(sizeof(struct Cyc_Core_Opt));
					  _T174 = pat_res;
					  _T1AE->v = _T174.patvars;
					  _T173 = (struct Cyc_Core_Opt *)_T1AE;
					}_T1AD->f2 = _T173;
					_T1AD->f3 = tempexp;
					_T1AD->f4 = dp;
					_T172 = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_T1AD;
				      }{ void * rd = (void *)_T172;
					_T175 = Cyc_Absyn_new_decl(rd,loc);
					_T176 = Cyc_Absyn_exp_stmt(asrt,loc);
					_T177 = Cyc_Absyn_exp_stmt(fncall,
								   loc);
					_T178 = loc;
					_T179 = Cyc_Absyn_seq_stmt(_T176,
								   _T177,
								   _T178);
					_T17A = loc;
					{ struct Cyc_Absyn_Stmt * s = Cyc_Absyn_decl_stmt(_T175,
											  _T179,
											  _T17A);
					  { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T1AD = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
					    _T1AD->tag = 0;
					    _T1AD->f1 = tempvd;
					    _T17B = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T1AD;
					  }_T17C = (void *)_T17B;
					  _T17D = loc;
					  _T17E = Cyc_Absyn_new_decl(_T17C,
								     _T17D);
					  _T17F = s;
					  _T180 = loc;
					  s = Cyc_Absyn_decl_stmt(_T17E,_T17F,
								  _T180);
					  _T181 = call;
					  { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T1AD = _cycalloc(sizeof(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct));
					    _T1AD->tag = 36;
					    _T1AD->f1 = s;
					    _T182 = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T1AD;
					  }_T181->r = (void *)_T182;
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
		}goto _TL285;
		_TL284: _TL285: _T183 = res_typ;
		return _T183;
	      }
	    }
	  }_TL217: { struct Cyc_Warn_String_Warn_Warg_struct _T1AD;
	    _T1AD.tag = 0;
	    _T1AD.f1 = _tag_fat("expected pointer to function but found ",
				sizeof(char),40U);
	    _T185 = _T1AD;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1AD = _T185;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T1AE;
	      _T1AE.tag = 2;
	      _T1AE.f1 = t;
	      _T186 = _T1AE;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1AE = _T186;
	      void * _T1AF[2];
	      _T1AF[0] = &_T1AD;
	      _T1AF[1] = &_T1AE;
	      _T187 = te;
	      _T188 = loc;
	      _T189 = topt;
	      _T18A = _tag_fat(_T1AF,sizeof(void *),2);
	      _T184 = Cyc_Tcexp_expr_err(_T187,_T188,_T189,_T18A);
	    }
	  }return _T184;
	  ;
	}
      }goto _TL216;
      _TL215: { struct Cyc_Warn_String_Warn_Warg_struct _T199;
	_T199.tag = 0;
	_T199.f1 = _tag_fat("expected pointer to function but found ",sizeof(char),
			    40U);
	_T18C = _T199;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T199 = _T18C;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T19A;
	  _T19A.tag = 2;
	  _T19A.f1 = t;
	  _T18D = _T19A;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T19A = _T18D;
	  void * _T19B[2];
	  _T19B[0] = &_T199;
	  _T19B[1] = &_T19A;
	  _T18E = te;
	  _T18F = loc;
	  _T190 = topt;
	  _T191 = _tag_fat(_T19B,sizeof(void *),2);
	  _T18B = Cyc_Tcexp_expr_err(_T18E,_T18F,_T190,_T191);
	}
      }return _T18B;
      _TL216: ;
    }
  }
}
static void * Cyc_Tcexp_tcThrow(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				void * * topt,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Tcenv_Tenv * _T0;
  void * * _T1;
  struct Cyc_Absyn_Exp * _T2;
  unsigned int _T3;
  struct Cyc_Absyn_Exp * _T4;
  void * _T5;
  void * _T6;
  void * _T7;
  enum Cyc_Absyn_Coercion _T8;
  int _T9;
  struct Cyc_Warn_String_Warn_Warg_struct _TA;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _TD;
  struct Cyc_Absyn_Exp * _TE;
  unsigned int _TF;
  struct _fat_ptr _T10;
  void * * _T11;
  void * _T12;
  struct Cyc_Core_Opt * _T13;
  void * _T14;
  long bogus = 0;
  void * exception_type = Cyc_Absyn_exn_type();
  _T0 = te;
  _T1 = &exception_type;
  _T2 = e;
  Cyc_Tcexp_tcExp(_T0,_T1,_T2);
  _T3 = loc;
  _T4 = e;
  _T5 = _T4->topt;
  _T6 = _check_null(_T5);
  _T7 = exception_type;
  _T8 = Cyc_Subtype_coercible(_T3,_T6,_T7);
  _T9 = (int)_T8;
  if (_T9 != 0) { goto _TL292;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _T15;
    _T15.tag = 0;
    _T15.f1 = _tag_fat("expected ",sizeof(char),10U);
    _TA = _T15;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T15 = _TA;
    { struct Cyc_Warn_Typ_Warn_Warg_struct _T16;
      _T16.tag = 2;
      _T16.f1 = exception_type;
      _TB = _T16;
    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T16 = _TB;
      { struct Cyc_Warn_String_Warn_Warg_struct _T17;
	_T17.tag = 0;
	_T17.f1 = _tag_fat(" but found ",sizeof(char),12U);
	_TC = _T17;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T17 = _TC;
	{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T18;
	  _T18.tag = 3;
	  _TE = e;
	  _T18.f1 = _TE->topt;
	  _TD = _T18;
	}{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T18 = _TD;
	  void * _T19[4];
	  _T19[0] = &_T15;
	  _T19[1] = &_T16;
	  _T19[2] = &_T17;
	  _T19[3] = &_T18;
	  _TF = loc;
	  _T10 = _tag_fat(_T19,sizeof(void *),4);
	  Cyc_Warn_err2(_TF,_T10);
	}
      }
    }
  }goto _TL293;
  _TL292: _TL293: if (topt == 0) { goto _TL294;
  }
  _T11 = topt;
  _T12 = *_T11;
  return _T12;
  _TL294: _T13 = Cyc_Tcenv_lookup_opt_type_vars(te);
  _T14 = Cyc_Absyn_wildtyp(_T13);
  return _T14;
}
static void * Cyc_Tcexp_doInstantiate(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				      void * * topt,struct Cyc_Absyn_Exp * e,
				      struct Cyc_List_List * ts) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  void * _T3;
  int * _T4;
  int _T5;
  void * _T6;
  struct Cyc_Absyn_PtrInfo _T7;
  struct Cyc_Absyn_PtrInfo _T8;
  struct Cyc_Absyn_PtrInfo _T9;
  int * _TA;
  int _TB;
  struct Cyc_Absyn_FnInfo _TC;
  struct Cyc_List_List * _TD;
  void * _TE;
  struct Cyc_Absyn_Tvar * _TF;
  struct Cyc_Absyn_Kind * _T10;
  struct Cyc_Absyn_Kind * _T11;
  unsigned int _T12;
  struct Cyc_Tcenv_Tenv * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_Absyn_Kind * _T15;
  struct Cyc_List_List * _T16;
  void * _T17;
  unsigned int _T18;
  struct Cyc_List_List * _T19;
  void * _T1A;
  struct Cyc_List_List * _T1B;
  struct _tuple18 * _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct Cyc_Warn_String_Warn_Warg_struct _T23;
  struct Cyc_Tcenv_Tenv * _T24;
  unsigned int _T25;
  void * * _T26;
  struct _fat_ptr _T27;
  struct _RegionHandle * _T28;
  struct Cyc_List_List * _T29;
  struct Cyc_Absyn_FnInfo _T2A;
  struct Cyc_List_List * _T2B;
  struct Cyc_Tcenv_Tenv * _T2C;
  unsigned int _T2D;
  struct Cyc_Absyn_FnInfo _T2E;
  struct Cyc_List_List * _T2F;
  struct Cyc_List_List * _T30;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T31;
  void * _T32;
  struct Cyc_Absyn_PtrInfo _T33;
  void * _T34;
  void * _T35;
  struct Cyc_Warn_String_Warn_Warg_struct _T36;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T37;
  struct Cyc_Tcenv_Tenv * _T38;
  unsigned int _T39;
  void * * _T3A;
  struct _fat_ptr _T3B;
  _T0 = e;
  _T1 = _T0->topt;
  _T2 = _check_null(_T1);
  { void * t1 = Cyc_Absyn_compress(_T2);
    { struct Cyc_Absyn_PtrAtts _T3C;
      struct Cyc_Absyn_Tqual _T3D;
      void * _T3E;
      _T3 = t1;
      _T4 = (int *)_T3;
      _T5 = *_T4;
      if (_T5 != 4) { goto _TL296;
      }
      _T6 = t1;
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T3F = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T6;
	_T7 = _T3F->f1;
	_T3E = _T7.elt_type;
	_T8 = _T3F->f1;
	_T3D = _T8.elt_tq;
	_T9 = _T3F->f1;
	_T3C = _T9.ptr_atts;
      }{ void * t = _T3E;
	struct Cyc_Absyn_Tqual tq = _T3D;
	struct Cyc_Absyn_PtrAtts atts = _T3C;
	{ void * _T3F = Cyc_Absyn_compress(t);
	  struct Cyc_Absyn_FnInfo _T40;
	  _TA = (int *)_T3F;
	  _TB = *_TA;
	  if (_TB != 6) { goto _TL298;
	  }
	  { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T41 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3F;
	    _T40 = _T41->f1;
	  }{ struct Cyc_Absyn_FnInfo info = _T40;
	    _TC = info;
	    { struct Cyc_List_List * tvars = _TC.tvars;
	      struct Cyc_List_List * instantiation = 0;
	      _TL29D: if (ts != 0) { goto _TL29E;
	      }else { goto _TL29C;
	      }
	      _TL29E: if (tvars != 0) { goto _TL29B;
	      }else { goto _TL29C;
	      }
	      _TL29B: _TD = tvars;
	      _TE = _TD->hd;
	      _TF = (struct Cyc_Absyn_Tvar *)_TE;
	      _T10 = &Cyc_Kinds_bk;
	      _T11 = (struct Cyc_Absyn_Kind *)_T10;
	      { struct Cyc_Absyn_Kind * k = Cyc_Kinds_tvar_kind(_TF,_T11);
		_T12 = loc;
		_T13 = te;
		_T14 = Cyc_Tcenv_lookup_type_vars(te);
		_T15 = k;
		_T16 = ts;
		_T17 = _T16->hd;
		Cyc_Tctyp_check_type(_T12,_T13,_T14,_T15,1,1,_T17);
		_T18 = loc;
		_T19 = ts;
		_T1A = _T19->hd;
		Cyc_Tcutil_check_no_qual(_T18,_T1A);
		{ struct Cyc_List_List * _T41 = _cycalloc(sizeof(struct Cyc_List_List));
		  { struct _tuple18 * _T42 = _cycalloc(sizeof(struct _tuple18));
		    _T1D = tvars;
		    _T1E = _T1D->hd;
		    _T42->f0 = (struct Cyc_Absyn_Tvar *)_T1E;
		    _T1F = ts;
		    _T42->f1 = _T1F->hd;
		    _T1C = (struct _tuple18 *)_T42;
		  }_T41->hd = _T1C;
		  _T41->tl = instantiation;
		  _T1B = (struct Cyc_List_List *)_T41;
		}instantiation = _T1B;
	      }_T20 = ts;
	      ts = _T20->tl;
	      _T21 = tvars;
	      tvars = _T21->tl;
	      goto _TL29D;
	      _TL29C: info.tvars = tvars;
	      if (ts == 0) { goto _TL29F;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T41;
		_T41.tag = 0;
		_T41.f1 = _tag_fat("too many type variables in instantiation",
				   sizeof(char),41U);
		_T23 = _T41;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T41 = _T23;
		void * _T42[1];
		_T42[0] = &_T41;
		_T24 = te;
		_T25 = loc;
		_T26 = topt;
		_T27 = _tag_fat(_T42,sizeof(void *),1);
		_T22 = Cyc_Tcexp_expr_err(_T24,_T25,_T26,_T27);
	      }return _T22;
	      _TL29F: if (tvars != 0) { goto _TL2A1;
	      }
	      _T28 = Cyc_Core_heap_region;
	      _T29 = instantiation;
	      _T2A = info;
	      _T2B = _T2A.effconstr;
	      info.effconstr = Cyc_Tcutil_rsubst_effconstr(_T28,_T29,_T2B);
	      _T2C = te;
	      _T2D = loc;
	      _T2E = info;
	      _T2F = _T2E.effconstr;
	      Cyc_Tcenv_check_effect_constraints(_T2C,_T2D,_T2F);
	      info.effconstr = 0;
	      goto _TL2A2;
	      _TL2A1: _TL2A2: _T30 = instantiation;
	      { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T41 = _cycalloc(sizeof(struct Cyc_Absyn_FnType_Absyn_Type_struct));
		_T41->tag = 6;
		_T41->f1 = info;
		_T31 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T41;
	      }_T32 = (void *)_T31;
	      { void * new_fn_typ = Cyc_Tcutil_substitute(_T30,_T32);
		{ struct Cyc_Absyn_PtrInfo _T41;
		  _T41.elt_type = new_fn_typ;
		  _T41.elt_tq = tq;
		  _T41.ptr_atts = atts;
		  _T33 = _T41;
		}_T34 = Cyc_Absyn_pointer_type(_T33);
		return _T34;
	      }
	    }
	  }_TL298: goto _LL5;
	  _LL5: ;
	}goto _LL0;
      }_TL296: goto _LL0;
      _LL0: ;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3C;
      _T3C.tag = 0;
      _T3C.f1 = _tag_fat("expecting polymorphic type but found ",sizeof(char),
			 38U);
      _T36 = _T3C;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3C = _T36;
      { struct Cyc_Warn_Typ_Warn_Warg_struct _T3D;
	_T3D.tag = 2;
	_T3D.f1 = t1;
	_T37 = _T3D;
      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3D = _T37;
	void * _T3E[2];
	_T3E[0] = &_T3C;
	_T3E[1] = &_T3D;
	_T38 = te;
	_T39 = loc;
	_T3A = topt;
	_T3B = _tag_fat(_T3E,sizeof(void *),2);
	_T35 = Cyc_Tcexp_expr_err(_T38,_T39,_T3A,_T3B);
      }
    }return _T35;
  }
}
static void * Cyc_Tcexp_tcInstantiate(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				      void * * topt,struct Cyc_Absyn_Exp * e,
				      struct Cyc_List_List * ts) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  void * _T2;
  void * _T3;
  void * _T4;
  Cyc_Tcexp_tcExpNoInst(te,0,e);
  _T0 = e;
  _T1 = e;
  _T2 = _T1->topt;
  _T3 = _check_null(_T2);
  _T0->topt = Cyc_Absyn_pointer_expand(_T3,0);
  _T4 = Cyc_Tcexp_doInstantiate(te,loc,topt,e,ts);
  return _T4;
}
static void * Cyc_Tcexp_tcCast(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
			       void * * topt,void * t,struct Cyc_Absyn_Exp * e,
			       enum Cyc_Absyn_Coercion * c) {
  unsigned int _T0;
  struct Cyc_Tcenv_Tenv * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_Absyn_Kind * _T3;
  long _T4;
  struct Cyc_Absyn_Kind * _T5;
  struct Cyc_Absyn_Kind * _T6;
  void * _T7;
  struct Cyc_Tcenv_Tenv * _T8;
  void * * _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Exp * _TB;
  void * _TC;
  enum Cyc_Absyn_Coercion _TD;
  int _TE;
  void * _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T11;
  struct Cyc_Warn_String_Warn_Warg_struct _T12;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T13;
  struct Cyc_Tcenv_Tenv * _T14;
  unsigned int _T15;
  void * * _T16;
  struct _fat_ptr _T17;
  void * _T18;
  enum Cyc_Absyn_Coercion * _T19;
  struct _tuple0 _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  void * _T1C;
  int * _T1D;
  int _T1E;
  void * _T1F;
  int * _T20;
  int _T21;
  void * _T22;
  struct Cyc_Absyn_MallocInfo _T23;
  void * _T24;
  struct Cyc_Absyn_PtrInfo _T25;
  struct Cyc_Absyn_PtrAtts _T26;
  struct Cyc_Absyn_PtrInfo _T27;
  struct Cyc_Absyn_PtrAtts _T28;
  struct Cyc_Absyn_PtrInfo _T29;
  struct Cyc_Absyn_PtrAtts _T2A;
  struct Cyc_Absyn_PtrInfo _T2B;
  struct Cyc_Absyn_PtrAtts _T2C;
  long _T2D;
  long _T2E;
  long _T2F;
  long _T30;
  long _T31;
  void * _T32;
  void * _T33;
  struct _tuple14 _T34;
  unsigned int _T35;
  unsigned int _T36;
  struct _fat_ptr _T37;
  struct _fat_ptr _T38;
  unsigned int _T39;
  void * _T3A;
  void * _T3B;
  void * _T3C;
  void * _T3D;
  long _T3E;
  struct Cyc_Warn_String_Warn_Warg_struct _T3F;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T40;
  unsigned int _T41;
  struct _fat_ptr _T42;
  void * _T43;
  _T0 = loc;
  _T1 = te;
  _T2 = Cyc_Tcenv_lookup_type_vars(te);
  _T4 = Cyc_Tcenv_abstract_val_ok(te);
  if (! _T4) { goto _TL2A3;
  }
  _T5 = &Cyc_Kinds_ak;
  _T3 = (struct Cyc_Absyn_Kind *)_T5;
  goto _TL2A4;
  _TL2A3: _T6 = &Cyc_Kinds_mk;
  _T3 = (struct Cyc_Absyn_Kind *)_T6;
  _TL2A4: _T7 = t;
  Cyc_Tctyp_check_type(_T0,_T1,_T2,_T3,1,0,_T7);
  Cyc_Tcutil_check_no_qual(loc,t);
  _T8 = te;
  _T9 = &t;
  _TA = e;
  Cyc_Tcexp_tcExp(_T8,_T9,_TA);
  _TB = e;
  _TC = _TB->topt;
  { void * t2 = _check_null(_TC);
    enum Cyc_Absyn_Coercion cc = Cyc_Subtype_coercible(loc,t2,t);
    _TD = cc;
    _TE = (int)_TD;
    if (_TE != 0) { goto _TL2A5;
    }
    { struct Cyc_Warn_String_Warn_Warg_struct _T44;
      _T44.tag = 0;
      _T44.f1 = _tag_fat("cannot cast ",sizeof(char),13U);
      _T10 = _T44;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T44 = _T10;
      { struct Cyc_Warn_Typ_Warn_Warg_struct _T45;
	_T45.tag = 2;
	_T45.f1 = t2;
	_T11 = _T45;
      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T45 = _T11;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T46;
	  _T46.tag = 0;
	  _T46.f1 = _tag_fat(" to ",sizeof(char),5U);
	  _T12 = _T46;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T46 = _T12;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T47;
	    _T47.tag = 2;
	    _T47.f1 = t;
	    _T13 = _T47;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T47 = _T13;
	    void * _T48[4];
	    _T48[0] = &_T44;
	    _T48[1] = &_T45;
	    _T48[2] = &_T46;
	    _T48[3] = &_T47;
	    _T14 = te;
	    _T15 = loc;
	    _T16 = &t;
	    _T17 = _tag_fat(_T48,sizeof(void *),4);
	    _TF = Cyc_Tcexp_expr_err(_T14,_T15,_T16,_T17);
	  }
	}
      }
    }{ void * result = _TF;
      _T18 = result;
      return _T18;
    }_TL2A5: _T19 = _check_null(c);
    *_T19 = cc;
    { struct _tuple0 _T44;
      _T1B = e;
      _T44.f0 = _T1B->r;
      _T44.f1 = Cyc_Absyn_compress(t);
      _T1A = _T44;
    }{ struct _tuple0 _T44 = _T1A;
      void * _T45;
      void * _T46;
      void * _T47;
      void * _T48;
      long _T49;
      _T1C = _T44.f0;
      _T1D = (int *)_T1C;
      _T1E = *_T1D;
      if (_T1E != 33) { goto _TL2A7;
      }
      _T1F = _T44.f1;
      _T20 = (int *)_T1F;
      _T21 = *_T20;
      if (_T21 != 4) { goto _TL2A9;
      }
      _T22 = _T44.f0;
      { struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T4A = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T22;
	_T23 = _T4A->f1;
	_T49 = _T23.fat_result;
      }_T24 = _T44.f1;
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T4A = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T24;
	_T25 = _T4A->f1;
	_T26 = _T25.ptr_atts;
	_T48 = _T26.nullable;
	_T27 = _T4A->f1;
	_T28 = _T27.ptr_atts;
	_T47 = _T28.bounds;
	_T29 = _T4A->f1;
	_T2A = _T29.ptr_atts;
	_T46 = _T2A.zero_term;
	_T2B = _T4A->f1;
	_T2C = _T2B.ptr_atts;
	_T45 = _T2C.autoreleased;
      }{ long fat_result = _T49;
	void * nbl = _T48;
	void * bds = _T47;
	void * zt = _T46;
	void * rel = _T45;
	_T2D = fat_result;
	if (! _T2D) { goto _TL2AB;
	}
	_T2E = Cyc_Tcutil_force_type2bool(0,zt);
	if (_T2E) { goto _TL2AB;
	}else { goto _TL2AD;
	}
	_TL2AD: _T2F = Cyc_Tcutil_force_type2bool(0,nbl);
	if (! _T2F) { goto _TL2AB;
	}
	_T30 = Cyc_Tcutil_force_type2bool(0,rel);
	if (_T30) { goto _TL2AB;
	}else { goto _TL2AE;
	}
	_TL2AE: _T31 = Cyc_Tcutil_is_cvar_type(bds);
	if (_T31) { goto _TL2AF;
	}else { goto _TL2B1;
	}
	_TL2B1: _T32 = Cyc_Absyn_bounds_one();
	_T33 = bds;
	{ struct Cyc_Absyn_Exp * eopt = Cyc_Tcutil_get_bounds_exp(_T32,_T33);
	  if (eopt == 0) { goto _TL2B2;
	  }
	  _T34 = Cyc_Evexp_eval_const_uint_exp(eopt);
	  _T35 = _T34.f0;
	  if (_T35 != 1U) { goto _TL2B4;
	  }
	  _T36 = loc;
	  _T37 = _tag_fat("cast from ? pointer to * pointer will lose size information",
			  sizeof(char),60U);
	  _T38 = _tag_fat(0U,sizeof(void *),0);
	  Cyc_Warn_warn(_T36,_T37,_T38);
	  goto _TL2B5;
	  _TL2B4: _TL2B5: goto _TL2B3;
	  _TL2B2: _TL2B3: ;
	}goto _TL2B0;
	_TL2AF: _T39 = loc;
	_T3A = Cyc_Tcutil_ptrbnd_cvar_equivalent(bds);
	_T3B = _check_null(_T3A);
	_T3C = Cyc_Absyn_fatconst();
	_T3D = Cyc_BansheeIf_equality_constraint(_T3B,_T3C);
	_T3E = Cyc_BansheeIf_add_constraint(_T39,_T3D);
	if (_T3E) { goto _TL2B6;
	}else { goto _TL2B8;
	}
	_TL2B8: { struct Cyc_Warn_String_Warn_Warg_struct _T4A;
	  _T4A.tag = 0;
	  _T4A.f1 = _tag_fat("Unable to constrain pointer bound",sizeof(char),
			     34U);
	  _T3F = _T4A;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T4A = _T3F;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T4B;
	    _T4B.tag = 2;
	    _T4B.f1 = t;
	    _T40 = _T4B;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T4B = _T40;
	    void * _T4C[2];
	    _T4C[0] = &_T4A;
	    _T4C[1] = &_T4B;
	    _T41 = loc;
	    _T42 = _tag_fat(_T4C,sizeof(void *),2);
	    Cyc_Warn_err2(_T41,_T42);
	  }
	}goto _TL2B7;
	_TL2B6: _TL2B7: _TL2B0: goto _TL2AC;
	_TL2AB: _TL2AC: goto _LL4;
      }_TL2A9: goto _LL3;
      _TL2A7: _LL3: _LL4: _T43 = t;
      return _T43;
      ;
    }
  }
}
static void * Cyc_Tcexp_tcAddress(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				  struct Cyc_Absyn_Exp * e0,void * * topt,
				  struct Cyc_Absyn_Exp * e) {
  void * * _T0;
  void * _T1;
  int * _T2;
  int _T3;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T4;
  void * * _T5;
  struct Cyc_Absyn_PtrInfo _T6;
  struct Cyc_Absyn_PtrInfo _T7;
  struct Cyc_Absyn_PtrAtts _T8;
  struct Cyc_Tcenv_Tenv * _T9;
  struct Cyc_Tcenv_Tenv * _TA;
  struct Cyc_Tcenv_Tenv * _TB;
  void * * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_Absyn_Exp * _TF;
  void * _T10;
  void * _T11;
  long _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  struct Cyc_Absyn_Exp * _T14;
  unsigned int _T15;
  struct _fat_ptr _T16;
  struct Cyc_Absyn_Exp * _T17;
  int * _T18;
  int _T19;
  struct Cyc_Absyn_Exp * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  void * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  int * _T1E;
  unsigned int _T1F;
  struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T20;
  long _T21;
  struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T22;
  long _T23;
  struct Cyc_Warn_String_Warn_Warg_struct _T24;
  struct Cyc_Absyn_Exp * _T25;
  unsigned int _T26;
  struct _fat_ptr _T27;
  long _T28;
  void * (* _T29)(void *,void *,void *,struct Cyc_Absyn_Tqual,void *,void *);
  long _T2A;
  struct Cyc_Absyn_Exp * _T2B;
  void * _T2C;
  void * _T2D;
  void * _T2E;
  void * _T2F;
  struct Cyc_Absyn_Tqual _T30;
  void * _T31;
  void * _T32;
  void * _T33;
  void * * topt2 = 0;
  struct Cyc_Absyn_Tqual tq2 = Cyc_Absyn_empty_tqual(0U);
  long nullable = 0;
  if (topt == 0) { goto _TL2B9;
  }
  _T0 = topt;
  _T1 = *_T0;
  { void * _T34 = Cyc_Absyn_compress(_T1);
    void * _T35;
    struct Cyc_Absyn_Tqual _T36;
    void * _T37;
    _T2 = (int *)_T34;
    _T3 = *_T2;
    if (_T3 != 4) { goto _TL2BB;
    }
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T38 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T34;
      _T4 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T34;
      _T5 = &(_T4->f1).elt_type;
      _T37 = (void * *)_T5;
      _T6 = _T38->f1;
      _T36 = _T6.elt_tq;
      _T7 = _T38->f1;
      _T8 = _T7.ptr_atts;
      _T35 = _T8.nullable;
    }{ void * * elttype = (void * *)_T37;
      struct Cyc_Absyn_Tqual tq = _T36;
      void * n = _T35;
      topt2 = elttype;
      tq2 = tq;
      nullable = Cyc_Tcutil_force_type2bool(0,n);
      goto _LL0;
    }_TL2BB: goto _LL0;
    _LL0: ;
  }goto _TL2BA;
  _TL2B9: _TL2BA: _T9 = Cyc_Tcenv_clear_notreadctxt(te);
  _TA = Cyc_Tcenv_enter_lhs(_T9);
  _TB = Cyc_Tcenv_enter_abstract_val_ok(_TA);
  _TC = topt2;
  _TD = e;
  Cyc_Tcexp_tcExpNoInst(_TB,_TC,_TD);
  _TE = Cyc_Tcenv_curr_aquals_bounds(te);
  _TF = e;
  _T10 = _TF->topt;
  _T11 = _check_null(_T10);
  _T12 = Cyc_Tcutil_is_noalias_pointer_or_aggr(_TE,_T11);
  if (! _T12) { goto _TL2BD;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _T34;
    _T34.tag = 0;
    _T34.f1 = _tag_fat("cannot take the address of an alias-free path",sizeof(char),
		       46U);
    _T13 = _T34;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T34 = _T13;
    void * _T35[1];
    _T35[0] = &_T34;
    _T14 = e;
    _T15 = _T14->loc;
    _T16 = _tag_fat(_T35,sizeof(void *),1);
    Cyc_Warn_err2(_T15,_T16);
  }goto _TL2BE;
  _TL2BD: _TL2BE: _T17 = e;
  { void * _T34 = _T17->r;
    struct Cyc_Absyn_Exp * _T35;
    struct Cyc_Absyn_Exp * _T36;
    _T18 = (int *)_T34;
    _T19 = *_T18;
    if (_T19 != 23) { goto _TL2BF;
    }
    { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T37 = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T34;
      _T36 = _T37->f1;
      _T35 = _T37->f2;
    }{ struct Cyc_Absyn_Exp * e1 = _T36;
      struct Cyc_Absyn_Exp * e2 = _T35;
      _T1A = e0;
      _T1B = Cyc_Absyn_add_exp(e1,e2,0U);
      _T1A->r = _T1B->r;
      _T1C = Cyc_Tcexp_tcPlus(te,e1,e2);
      return _T1C;
    }_TL2BF: goto _LL5;
    _LL5: ;
  }_T1D = e;
  { void * _T34 = _T1D->r;
    _T1E = (int *)_T34;
    _T1F = *_T1E;
    switch (_T1F) {
    case 21: 
      _T20 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T34;
      _T21 = _T20->f3;
      if (_T21 != 1) { goto _TL2C2;
      }
      goto _LLE;
      _TL2C2: goto _LLF;
    case 22: 
      _T22 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T34;
      _T23 = _T22->f3;
      if (_T23 != 1) { goto _TL2C4;
      }
      _LLE: { struct Cyc_Warn_String_Warn_Warg_struct _T35;
	_T35.tag = 0;
	_T35.f1 = _tag_fat("cannot take the address of a @tagged union member",
			   sizeof(char),50U);
	_T24 = _T35;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T35 = _T24;
	void * _T36[1];
	_T36[0] = &_T35;
	_T25 = e;
	_T26 = _T25->loc;
	_T27 = _tag_fat(_T36,sizeof(void *),1);
	Cyc_Warn_err2(_T26,_T27);
      }goto _LLA;
      _TL2C4: goto _LLF;
    default: 
      _LLF: goto _LLA;
    }
    _LLA: ;
  }{ struct _tuple19 _T34 = Cyc_Tcutil_addressof_props(e);
    void * _T35;
    long _T36;
    _T36 = _T34.f0;
    _T35 = _T34.f1;
    { long is_const = _T36;
      void * rgn = _T35;
      struct Cyc_Absyn_Tqual tq = Cyc_Absyn_empty_tqual(0U);
      _T28 = is_const;
      if (! _T28) { goto _TL2C6;
      }
      tq.real_const = 1;
      tq.print_const = tq.real_const;
      goto _TL2C7;
      _TL2C6: _TL2C7: _T2A = nullable;
      if (! _T2A) { goto _TL2C8;
      }
      _T29 = Cyc_Absyn_star_type;
      goto _TL2C9;
      _TL2C8: _T29 = Cyc_Absyn_at_type;
      _TL2C9: _T2B = e;
      _T2C = _T2B->topt;
      _T2D = _check_null(_T2C);
      _T2E = rgn;
      _T2F = Cyc_Absyn_al_qual_type;
      _T30 = tq;
      _T31 = Cyc_Absyn_false_type;
      _T32 = Cyc_Absyn_false_type;
      _T33 = _T29(_T2D,_T2E,_T2F,_T30,_T31,_T32);
      return _T33;
    }
  }
}
static void * Cyc_Tcexp_tcSizeof(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				 void * * topt,void * t) {
  struct Cyc_Tcenv_Tenv * _T0;
  long _T1;
  void * _T2;
  unsigned int _T3;
  struct Cyc_Tcenv_Tenv * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_Absyn_Kind * _T6;
  struct Cyc_Absyn_Kind * _T7;
  void * _T8;
  long _T9;
  struct Cyc_Warn_String_Warn_Warg_struct _TA;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  unsigned int _TD;
  struct _fat_ptr _TE;
  void * _TF;
  void * * _T10;
  void * _T11;
  int * _T12;
  int _T13;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T14;
  void * _T15;
  int * _T16;
  int _T17;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_List_List * _T1A;
  void * _T1B;
  void * _T1C;
  struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _T1D;
  void * _T1E;
  long _T1F;
  void * * _T20;
  void * _T21;
  void * _T22;
  void * _T23;
  void * _T24;
  _T0 = te;
  _T1 = _T0->allow_valueof;
  if (! _T1) { goto _TL2CA;
  }
  _T2 = Cyc_Absyn_uint_type;
  return _T2;
  _TL2CA: _T3 = loc;
  _T4 = te;
  _T5 = Cyc_Tcenv_lookup_type_vars(te);
  _T6 = &Cyc_Kinds_mk;
  _T7 = (struct Cyc_Absyn_Kind *)_T6;
  _T8 = t;
  Cyc_Tctyp_check_type(_T3,_T4,_T5,_T7,1,0,_T8);
  Cyc_Tcutil_check_no_qual(loc,t);
  _T9 = Cyc_Evexp_okay_szofarg(t);
  if (_T9) { goto _TL2CC;
  }else { goto _TL2CE;
  }
  _TL2CE: { struct Cyc_Warn_String_Warn_Warg_struct _T25;
    _T25.tag = 0;
    _T25.f1 = _tag_fat("sizeof applied to type ",sizeof(char),24U);
    _TA = _T25;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T25 = _TA;
    { struct Cyc_Warn_Typ_Warn_Warg_struct _T26;
      _T26.tag = 2;
      _T26.f1 = t;
      _TB = _T26;
    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T26 = _TB;
      { struct Cyc_Warn_String_Warn_Warg_struct _T27;
	_T27.tag = 0;
	_T27.f1 = _tag_fat(" which has unknown size here",sizeof(char),29U);
	_TC = _T27;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T27 = _TC;
	void * _T28[3];
	_T28[0] = &_T25;
	_T28[1] = &_T26;
	_T28[2] = &_T27;
	_TD = loc;
	_TE = _tag_fat(_T28,sizeof(void *),3);
	Cyc_Warn_err2(_TD,_TE);
      }
    }
  }goto _TL2CD;
  _TL2CC: _TL2CD: if (topt != 0) { goto _TL2CF;
  }
  _TF = Cyc_Absyn_uint_type;
  return _TF;
  _TL2CF: _T10 = topt;
  _T11 = *_T10;
  { void * _T25 = Cyc_Absyn_compress(_T11);
    void * _T26;
    _T12 = (int *)_T25;
    _T13 = *_T12;
    if (_T13 != 0) { goto _TL2D1;
    }
    _T14 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T25;
    _T15 = _T14->f1;
    _T16 = (int *)_T15;
    _T17 = *_T16;
    if (_T17 != 5) { goto _TL2D3;
    }
    _T18 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T25;
    _T19 = _T18->f2;
    if (_T19 == 0) { goto _TL2D5;
    }
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T27 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T25;
      _T1A = _T27->f2;
      { struct Cyc_List_List _T28 = *_T1A;
	_T1B = _T28.hd;
	_T26 = (void *)_T1B;
      }
    }{ void * tt = _T26;
      _T1C = tt;
      { struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _T27 = _cycalloc(sizeof(struct Cyc_Absyn_ValueofType_Absyn_Type_struct));
	_T27->tag = 9;
	_T27->f1 = Cyc_Absyn_sizeoftype_exp(t,0U);
	_T1D = (struct Cyc_Absyn_ValueofType_Absyn_Type_struct *)_T27;
      }_T1E = (void *)_T1D;
      _T1F = Cyc_Unify_unify(_T1C,_T1E);
      if (! _T1F) { goto _TL2D7;
      }
      _T20 = topt;
      _T21 = *_T20;
      _T22 = Cyc_Absyn_compress(_T21);
      return _T22;
      _TL2D7: _T23 = Cyc_Absyn_uint_type;
      return _T23;
    }_TL2D5: goto _LL3;
    _TL2D3: goto _LL3;
    _TL2D1: _LL3: _T24 = Cyc_Absyn_uint_type;
    return _T24;
    ;
  }
}
void * Cyc_Tcexp_structfield_type(struct _fat_ptr * n,struct Cyc_Absyn_Aggrfield * sf) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct Cyc_Absyn_Aggrfield * _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr _T4;
  int _T5;
  struct Cyc_Absyn_Aggrfield * _T6;
  void * _T7;
  _T0 = n;
  _T1 = *_T0;
  _T2 = sf;
  _T3 = _T2->name;
  _T4 = *_T3;
  _T5 = Cyc_strcmp(_T1,_T4);
  if (_T5 != 0) { goto _TL2D9;
  }
  _T6 = sf;
  _T7 = _T6->type;
  return _T7;
  _TL2D9: return 0;
}
static void * Cyc_Tcexp_tcOffsetof(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				   void * * topt,void * t_orig,struct Cyc_List_List * fs) {
  unsigned int _T0;
  struct Cyc_Tcenv_Tenv * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_Absyn_Kind * _T3;
  struct Cyc_Absyn_Kind * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  int * _T8;
  unsigned int _T9;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA;
  void * _TB;
  int * _TC;
  int _TD;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE;
  void * _TF;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T10;
  union Cyc_Absyn_AggrInfo _T11;
  struct _union_AggrInfo_KnownAggr _T12;
  unsigned int _T13;
  void * _T14;
  union Cyc_Absyn_AggrInfo _T15;
  struct _union_AggrInfo_KnownAggr _T16;
  struct Cyc_Absyn_Aggrdecl * * _T17;
  struct Cyc_Absyn_Aggrdecl * _T18;
  struct Cyc_Absyn_AggrdeclImpl * _T19;
  struct Cyc_Absyn_Aggrdecl * * _T1A;
  struct Cyc_Absyn_Aggrdecl * _T1B;
  struct Cyc_Absyn_AggrdeclImpl * _T1C;
  void * (* _T1D)(void * (*)(struct _fat_ptr *,struct Cyc_Absyn_Aggrfield *),
		  struct _fat_ptr *,struct Cyc_List_List *);
  void * (* _T1E)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct _fat_ptr * _T1F;
  struct Cyc_List_List * _T20;
  void * _T21;
  unsigned int _T22;
  struct Cyc_Warn_String_Warn_Warg_struct _T23;
  struct Cyc_Warn_String_Warn_Warg_struct _T24;
  struct _fat_ptr * _T25;
  unsigned int _T26;
  struct _fat_ptr _T27;
  long _T28;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T29;
  struct Cyc_Warn_String_Warn_Warg_struct _T2A;
  unsigned int _T2B;
  struct _fat_ptr _T2C;
  struct _fat_ptr _T2D;
  struct Cyc_String_pa_PrintArg_struct _T2E;
  struct _fat_ptr _T2F;
  struct _fat_ptr _T30;
  struct Cyc_List_List * _T31;
  struct _fat_ptr _T32;
  struct Cyc_String_pa_PrintArg_struct _T33;
  struct Cyc_String_pa_PrintArg_struct _T34;
  struct _fat_ptr * _T35;
  struct _fat_ptr _T36;
  struct _fat_ptr _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_Warn_String_Warn_Warg_struct _T39;
  struct Cyc_Warn_String_Warn_Warg_struct _T3A;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3B;
  struct Cyc_Warn_String_Warn_Warg_struct _T3C;
  unsigned int _T3D;
  struct _fat_ptr _T3E;
  struct Cyc_List_List * _T3F;
  void * _T40;
  _T0 = loc;
  _T1 = te;
  _T2 = Cyc_Tcenv_lookup_type_vars(te);
  _T3 = &Cyc_Kinds_mk;
  _T4 = (struct Cyc_Absyn_Kind *)_T3;
  _T5 = t_orig;
  Cyc_Tctyp_check_type(_T0,_T1,_T2,_T4,1,0,_T5);
  Cyc_Tcutil_check_no_qual(loc,t_orig);
  { struct Cyc_List_List * l = fs;
    void * t = t_orig;
    _TL2DE: if (l != 0) { goto _TL2DC;
    }else { goto _TL2DD;
    }
    _TL2DC: _T6 = l;
    { void * n = _T6->hd;
      struct _fat_ptr * _T41;
      _T7 = n;
      { struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct * _T42 = (struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct *)_T7;
	_T41 = _T42->f1;
      }{ struct _fat_ptr * n = _T41;
	long bad_type = 1;
	{ void * _T42 = Cyc_Absyn_compress(t);
	  struct Cyc_List_List * _T43;
	  struct Cyc_Absyn_Aggrdecl * * _T44;
	  _T8 = (int *)_T42;
	  _T9 = *_T8;
	  switch (_T9) {
	  case 0: 
	    _TA = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T42;
	    _TB = _TA->f1;
	    _TC = (int *)_TB;
	    _TD = *_TC;
	    if (_TD != 24) { goto _TL2E0;
	    }
	    _TE = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T42;
	    _TF = _TE->f1;
	    _T10 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TF;
	    _T11 = _T10->f1;
	    _T12 = _T11.KnownAggr;
	    _T13 = _T12.tag;
	    if (_T13 != 2) { goto _TL2E2;
	    }
	    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T45 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T42;
	      _T14 = _T45->f1;
	      { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T46 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T14;
		_T15 = _T46->f1;
		_T16 = _T15.KnownAggr;
		_T44 = _T16.val;
	      }
	    }{ struct Cyc_Absyn_Aggrdecl * * adp = _T44;
	      _T17 = adp;
	      _T18 = *_T17;
	      _T19 = _T18->impl;
	      if (_T19 != 0) { goto _TL2E4;
	      }
	      goto _LL3;
	      _TL2E4: _T1A = adp;
	      _T1B = *_T1A;
	      _T1C = _T1B->impl;
	      _T43 = _T1C->fields;
	      goto _LL7;
	    }_TL2E2: goto _LL8;
	    _TL2E0: goto _LL8;
	  case 7: 
	    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T45 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T42;
	      _T43 = _T45->f3;
	    }_LL7: { struct Cyc_List_List * fields = _T43;
	      _T1E = Cyc_List_find_c;
	      { void * (* _T45)(void * (*)(struct _fat_ptr *,struct Cyc_Absyn_Aggrfield *),
				struct _fat_ptr *,struct Cyc_List_List *) = (void * (*)(void * (*)(struct _fat_ptr *,
												   struct Cyc_Absyn_Aggrfield *),
											struct _fat_ptr *,
											struct Cyc_List_List *))_T1E;
		_T1D = _T45;
	      }_T1F = n;
	      _T20 = fields;
	      { void * t2 = _T1D(Cyc_Tcexp_structfield_type,_T1F,_T20);
		_T21 = t2;
		_T22 = (unsigned int)_T21;
		if (_T22) { goto _TL2E6;
		}else { goto _TL2E8;
		}
		_TL2E8: { struct Cyc_Warn_String_Warn_Warg_struct _T45;
		  _T45.tag = 0;
		  _T45.f1 = _tag_fat("no field of struct/union has name %s",
				     sizeof(char),37U);
		  _T23 = _T45;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T45 = _T23;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T46;
		    _T46.tag = 0;
		    _T25 = n;
		    _T46.f1 = *_T25;
		    _T24 = _T46;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T46 = _T24;
		    void * _T47[2];
		    _T47[0] = &_T45;
		    _T47[1] = &_T46;
		    _T26 = loc;
		    _T27 = _tag_fat(_T47,sizeof(void *),2);
		    Cyc_Warn_err2(_T26,_T27);
		  }
		}goto _TL2E7;
		_TL2E6: t = t2;
		_TL2E7: bad_type = 0;
		goto _LL3;
	      }
	    }
	  default: 
	    _LL8: goto _LL3;
	  }
	  _LL3: ;
	}_T28 = bad_type;
	if (! _T28) { goto _TL2E9;
	}
	if (l != fs) { goto _TL2EB;
	}
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T42;
	  _T42.tag = 2;
	  _T42.f1 = t;
	  _T29 = _T42;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T42 = _T29;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T43;
	    _T43.tag = 0;
	    _T43.f1 = _tag_fat(" is not a known struct/union type",sizeof(char),
			       34U);
	    _T2A = _T43;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T43 = _T2A;
	    void * _T44[2];
	    _T44[0] = &_T42;
	    _T44[1] = &_T43;
	    _T2B = loc;
	    _T2C = _tag_fat(_T44,sizeof(void *),2);
	    Cyc_Warn_err2(_T2B,_T2C);
	  }
	}goto _TL2EC;
	_TL2EB: { struct Cyc_String_pa_PrintArg_struct _T42;
	  _T42.tag = 0;
	  _T42.f1 = Cyc_Absynpp_typ2string(t_orig);
	  _T2E = _T42;
	}{ struct Cyc_String_pa_PrintArg_struct _T42 = _T2E;
	  void * _T43[1];
	  _T43[0] = &_T42;
	  _T2F = _tag_fat("(%s)",sizeof(char),5U);
	  _T30 = _tag_fat(_T43,sizeof(void *),1);
	  _T2D = Cyc_aprintf(_T2F,_T30);
	}{ struct _fat_ptr s = _T2D;
	  { struct Cyc_List_List * x = fs;
	    _TL2F0: if (x != l) { goto _TL2EE;
	    }else { goto _TL2EF;
	    }
	    _TL2EE: _T31 = x;
	    { void * _T42 = _T31->hd;
	      struct _fat_ptr * _T43;
	      { struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct * _T44 = (struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct *)_T42;
		_T43 = _T44->f1;
	      }{ struct _fat_ptr * n = _T43;
		{ struct Cyc_String_pa_PrintArg_struct _T44;
		  _T44.tag = 0;
		  _T44.f1 = s;
		  _T33 = _T44;
		}{ struct Cyc_String_pa_PrintArg_struct _T44 = _T33;
		  { struct Cyc_String_pa_PrintArg_struct _T45;
		    _T45.tag = 0;
		    _T35 = n;
		    _T45.f1 = *_T35;
		    _T34 = _T45;
		  }{ struct Cyc_String_pa_PrintArg_struct _T45 = _T34;
		    void * _T46[2];
		    _T46[0] = &_T44;
		    _T46[1] = &_T45;
		    _T36 = _tag_fat("%s.%s",sizeof(char),6U);
		    _T37 = _tag_fat(_T46,sizeof(void *),2);
		    _T32 = Cyc_aprintf(_T36,_T37);
		  }
		}s = _T32;
		goto _LLA;
	      }_LLA: ;
	    }_T38 = x;
	    x = _T38->tl;
	    goto _TL2F0;
	    _TL2EF: ;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T42;
	    _T42.tag = 0;
	    _T42.f1 = s;
	    _T39 = _T42;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T42 = _T39;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T43;
	      _T43.tag = 0;
	      _T43.f1 = _tag_fat(" == ",sizeof(char),5U);
	      _T3A = _T43;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T43 = _T3A;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T44;
		_T44.tag = 2;
		_T44.f1 = t;
		_T3B = _T44;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T44 = _T3B;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T45;
		  _T45.tag = 0;
		  _T45.f1 = _tag_fat(" is not a struct/union type",sizeof(char),
				     28U);
		  _T3C = _T45;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T45 = _T3C;
		  void * _T46[4];
		  _T46[0] = &_T42;
		  _T46[1] = &_T43;
		  _T46[2] = &_T44;
		  _T46[3] = &_T45;
		  _T3D = loc;
		  _T3E = _tag_fat(_T46,sizeof(void *),4);
		  Cyc_Warn_err2(_T3D,_T3E);
		}
	      }
	    }
	  }
	}_TL2EC: goto _TL2EA;
	_TL2E9: _TL2EA: goto _LL0;
      }_LL0: ;
    }_T3F = l;
    l = _T3F->tl;
    goto _TL2DE;
    _TL2DD: _T40 = Cyc_Absyn_uint_type;
    return _T40;
  }
}
static void * Cyc_Tcexp_tcDeref(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				void * * topt,struct Cyc_Absyn_Exp * orig_e,
				struct Cyc_Absyn_Exp * e) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Absyn_Exp * _T1;
  void * _T2;
  void * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  struct Cyc_Core_Opt * _T7;
  struct Cyc_Core_Opt * _T8;
  struct Cyc_Core_Opt * _T9;
  void * _TA;
  int * _TB;
  int _TC;
  void * _TD;
  struct Cyc_Absyn_PtrInfo _TE;
  struct Cyc_Absyn_PtrInfo _TF;
  struct Cyc_Absyn_PtrAtts _T10;
  struct Cyc_Absyn_PtrInfo _T11;
  struct Cyc_Absyn_PtrAtts _T12;
  struct Cyc_Absyn_PtrInfo _T13;
  struct Cyc_Absyn_PtrAtts _T14;
  struct Cyc_Absyn_Kind * _T15;
  struct Cyc_Absyn_Kind * _T16;
  struct Cyc_Absyn_Kind * _T17;
  long _T18;
  long _T19;
  int * _T1A;
  int _T1B;
  long _T1C;
  struct Cyc_Warn_String_Warn_Warg_struct _T1D;
  unsigned int _T1E;
  struct _fat_ptr _T1F;
  struct Cyc_Absyn_Exp * _T20;
  struct Cyc_Absyn_Exp * _T21;
  void * _T22;
  struct Cyc_Warn_String_Warn_Warg_struct _T23;
  unsigned int _T24;
  struct _fat_ptr _T25;
  void * _T26;
  void * _T27;
  struct Cyc_Warn_String_Warn_Warg_struct _T28;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T29;
  struct Cyc_Tcenv_Tenv * _T2A;
  unsigned int _T2B;
  void * * _T2C;
  struct _fat_ptr _T2D;
  _T0 = Cyc_Tcenv_clear_notreadctxt(te);
  te = Cyc_Tcenv_clear_lhs(_T0);
  Cyc_Tcexp_tcExp(te,0,e);
  _T1 = e;
  _T2 = _T1->topt;
  _T3 = _check_null(_T2);
  { void * t = Cyc_Absyn_compress(_T3);
    _T4 = t;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    if (_T6 != 1) { goto _TL2F1;
    }
    { struct Cyc_Absyn_PtrInfo pi = Cyc_Tcexp_fresh_pointer_type(te);
      _T7 = &Cyc_Kinds_ako;
      _T8 = (struct Cyc_Core_Opt *)_T7;
      { struct Cyc_Core_Opt * _T2E = _cycalloc(sizeof(struct Cyc_Core_Opt));
	_T2E->v = Cyc_Tcenv_lookup_type_vars(te);
	_T9 = (struct Cyc_Core_Opt *)_T2E;
      }pi.elt_type = Cyc_Absyn_new_evar(_T8,_T9);
      { void * new_typ = Cyc_Absyn_pointer_type(pi);
	Cyc_Unify_unify(t,new_typ);
	t = Cyc_Absyn_compress(t);
	goto _LL0;
      }
    }_TL2F1: goto _LL0;
    _LL0: { void * _T2E;
      void * _T2F;
      void * _T30;
      void * _T31;
      _TA = t;
      _TB = (int *)_TA;
      _TC = *_TB;
      if (_TC != 4) { goto _TL2F3;
      }
      _TD = t;
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T32 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TD;
	_TE = _T32->f1;
	_T31 = _TE.elt_type;
	_TF = _T32->f1;
	_T10 = _TF.ptr_atts;
	_T30 = _T10.eff;
	_T11 = _T32->f1;
	_T12 = _T11.ptr_atts;
	_T2F = _T12.bounds;
	_T13 = _T32->f1;
	_T14 = _T13.ptr_atts;
	_T2E = _T14.zero_term;
      }{ void * t2 = _T31;
	void * rt = _T30;
	void * b = _T2F;
	void * zt = _T2E;
	Cyc_Tcenv_check_effect_accessible_nodelay(te,loc,rt);
	Cyc_Tcutil_check_nonzero_bound(loc,b);
	_T15 = Cyc_Tcutil_type_kind(t2);
	_T16 = &Cyc_Kinds_mk;
	_T17 = (struct Cyc_Absyn_Kind *)_T16;
	_T18 = Cyc_Kinds_kind_leq(_T15,_T17);
	if (_T18) { goto _TL2F5;
	}else { goto _TL2F7;
	}
	_TL2F7: _T19 = Cyc_Tcenv_abstract_val_ok(te);
	if (_T19) { goto _TL2F5;
	}else { goto _TL2F8;
	}
	_TL2F8: { void * _T32 = Cyc_Absyn_compress(t2);
	  _T1A = (int *)_T32;
	  _T1B = *_T1A;
	  if (_T1B != 6) { goto _TL2F9;
	  }
	  _T1C = Cyc_Flags_tc_aggressive_warn;
	  if (! _T1C) { goto _TL2FB;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T33;
	    _T33.tag = 0;
	    _T33.f1 = _tag_fat("unnecessary dereference for function type",
			       sizeof(char),42U);
	    _T1D = _T33;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T33 = _T1D;
	    void * _T34[1];
	    _T34[0] = &_T33;
	    _T1E = loc;
	    _T1F = _tag_fat(_T34,sizeof(void *),1);
	    Cyc_Warn_warn2(_T1E,_T1F);
	  }goto _TL2FC;
	  _TL2FB: _TL2FC: if (orig_e == 0) { goto _TL2FD;
	  }
	  _T20 = orig_e;
	  _T21 = e;
	  _T20->r = _T21->r;
	  goto _TL2FE;
	  _TL2FD: _TL2FE: _T22 = t;
	  return _T22;
	  _TL2F9: { struct Cyc_Warn_String_Warn_Warg_struct _T33;
	    _T33.tag = 0;
	    _T33.f1 = _tag_fat("cannot dereference abstract pointer type",
			       sizeof(char),41U);
	    _T23 = _T33;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T33 = _T23;
	    void * _T34[1];
	    _T34[0] = &_T33;
	    _T24 = loc;
	    _T25 = _tag_fat(_T34,sizeof(void *),1);
	    Cyc_Warn_err2(_T24,_T25);
	  };
	}goto _TL2F6;
	_TL2F5: _TL2F6: _T26 = t2;
	return _T26;
      }_TL2F3: { struct Cyc_Warn_String_Warn_Warg_struct _T32;
	_T32.tag = 0;
	_T32.f1 = _tag_fat("expecting pointer type but found ",sizeof(char),
			   34U);
	_T28 = _T32;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T32 = _T28;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T33;
	  _T33.tag = 2;
	  _T33.f1 = t;
	  _T29 = _T33;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T33 = _T29;
	  void * _T34[2];
	  _T34[0] = &_T32;
	  _T34[1] = &_T33;
	  _T2A = te;
	  _T2B = loc;
	  _T2C = topt;
	  _T2D = _tag_fat(_T34,sizeof(void *),2);
	  _T27 = Cyc_Tcexp_expr_err(_T2A,_T2B,_T2C,_T2D);
	}
      }return _T27;
      ;
    }
  }
}
static void * Cyc_Tcexp_tcAggrMember2(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				      void * * topt,void * aggr_type,struct _fat_ptr * f,
				      long * is_tagged,long * is_read) {
  long * _T0;
  long _T1;
  int * _T2;
  unsigned int _T3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T4;
  void * _T5;
  int * _T6;
  int _T7;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T8;
  void * _T9;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TA;
  union Cyc_Absyn_AggrInfo _TB;
  struct _union_AggrInfo_KnownAggr _TC;
  unsigned int _TD;
  void * _TE;
  union Cyc_Absyn_AggrInfo _TF;
  struct _union_AggrInfo_KnownAggr _T10;
  struct Cyc_Absyn_Aggrdecl * * _T11;
  void * _T12;
  struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T13;
  struct Cyc_Warn_String_Warn_Warg_struct _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  struct _fat_ptr * _T16;
  struct Cyc_Warn_String_Warn_Warg_struct _T17;
  struct Cyc_Tcenv_Tenv * _T18;
  unsigned int _T19;
  void * * _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_Absyn_Aggrdecl * _T1C;
  struct Cyc_Absyn_AggrdeclImpl * _T1D;
  struct Cyc_Absyn_AggrdeclImpl * _T1E;
  long _T1F;
  long * _T20;
  struct Cyc_Absyn_Aggrfield * _T21;
  struct Cyc_Absyn_Aggrdecl * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_List_List * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_Absyn_Aggrfield * _T26;
  void * _T27;
  struct Cyc_Absyn_Kind * _T28;
  struct Cyc_Absyn_Kind * _T29;
  struct Cyc_Absyn_Kind * _T2A;
  long _T2B;
  long _T2C;
  int * _T2D;
  int _T2E;
  void * _T2F;
  struct Cyc_Warn_String_Warn_Warg_struct _T30;
  struct Cyc_Warn_String_Warn_Warg_struct _T31;
  struct _fat_ptr * _T32;
  struct Cyc_Warn_String_Warn_Warg_struct _T33;
  struct Cyc_Tcenv_Tenv * _T34;
  unsigned int _T35;
  void * * _T36;
  struct _fat_ptr _T37;
  struct Cyc_Absyn_Aggrdecl * _T38;
  enum Cyc_Absyn_AggrKind _T39;
  int _T3A;
  struct Cyc_Absyn_Aggrdecl * _T3B;
  struct Cyc_Absyn_AggrdeclImpl * _T3C;
  struct Cyc_Absyn_AggrdeclImpl * _T3D;
  long _T3E;
  long _T3F;
  long _T40;
  struct Cyc_Absyn_Aggrfield * _T41;
  struct Cyc_Absyn_Exp * _T42;
  void * _T43;
  struct Cyc_Warn_String_Warn_Warg_struct _T44;
  struct Cyc_Warn_String_Warn_Warg_struct _T45;
  struct _fat_ptr * _T46;
  struct Cyc_Warn_String_Warn_Warg_struct _T47;
  struct Cyc_Tcenv_Tenv * _T48;
  unsigned int _T49;
  void * * _T4A;
  struct _fat_ptr _T4B;
  struct Cyc_Absyn_Aggrdecl * _T4C;
  struct Cyc_Absyn_AggrdeclImpl * _T4D;
  struct Cyc_Absyn_AggrdeclImpl * _T4E;
  struct Cyc_List_List * _T4F;
  void * _T50;
  struct Cyc_Core_Opt * _T51;
  void * _T52;
  long _T53;
  void * _T54;
  struct Cyc_Warn_String_Warn_Warg_struct _T55;
  struct Cyc_Warn_String_Warn_Warg_struct _T56;
  struct _fat_ptr * _T57;
  struct Cyc_Warn_String_Warn_Warg_struct _T58;
  struct Cyc_Tcenv_Tenv * _T59;
  unsigned int _T5A;
  void * * _T5B;
  struct _fat_ptr _T5C;
  void * _T5D;
  void * _T5E;
  struct Cyc_Warn_String_Warn_Warg_struct _T5F;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T60;
  struct Cyc_Warn_String_Warn_Warg_struct _T61;
  struct Cyc_Warn_String_Warn_Warg_struct _T62;
  struct _fat_ptr * _T63;
  struct Cyc_Warn_String_Warn_Warg_struct _T64;
  struct Cyc_Tcenv_Tenv * _T65;
  unsigned int _T66;
  void * * _T67;
  struct _fat_ptr _T68;
  enum Cyc_Absyn_AggrKind _T69;
  int _T6A;
  struct Cyc_Absyn_Aggrfield * _T6B;
  void * _T6C;
  long _T6D;
  long _T6E;
  struct Cyc_Absyn_Aggrfield * _T6F;
  struct Cyc_Absyn_Exp * _T70;
  void * _T71;
  struct Cyc_Warn_String_Warn_Warg_struct _T72;
  struct Cyc_Warn_String_Warn_Warg_struct _T73;
  struct _fat_ptr * _T74;
  struct Cyc_Warn_String_Warn_Warg_struct _T75;
  struct Cyc_Tcenv_Tenv * _T76;
  unsigned int _T77;
  void * * _T78;
  struct _fat_ptr _T79;
  struct Cyc_Absyn_Aggrfield * _T7A;
  void * _T7B;
  void * _T7C;
  struct Cyc_Warn_String_Warn_Warg_struct _T7D;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T7E;
  struct Cyc_Tcenv_Tenv * _T7F;
  unsigned int _T80;
  void * * _T81;
  struct _fat_ptr _T82;
  _T0 = is_read;
  _T1 = Cyc_Tcenv_in_notreadctxt(te);
  *_T0 = ! _T1;
  { void * _T83 = Cyc_Absyn_compress(aggr_type);
    enum Cyc_Absyn_AggrKind _T84;
    struct Cyc_List_List * _T85;
    struct Cyc_Absyn_Aggrdecl * _T86;
    _T2 = (int *)_T83;
    _T3 = *_T2;
    switch (_T3) {
    case 0: 
      _T4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T83;
      _T5 = _T4->f1;
      _T6 = (int *)_T5;
      _T7 = *_T6;
      if (_T7 != 24) { goto _TL300;
      }
      _T8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T83;
      _T9 = _T8->f1;
      _TA = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T9;
      _TB = _TA->f1;
      _TC = _TB.KnownAggr;
      _TD = _TC.tag;
      if (_TD != 2) { goto _TL302;
      }
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T87 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T83;
	_TE = _T87->f1;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T88 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TE;
	  _TF = _T88->f1;
	  _T10 = _TF.KnownAggr;
	  _T11 = _T10.val;
	  { struct Cyc_Absyn_Aggrdecl * _T89 = *_T11;
	    _T86 = _T89;
	  }
	}_T85 = _T87->f2;
      }{ struct Cyc_Absyn_Aggrdecl * ad = _T86;
	struct Cyc_List_List * ts = _T85;
	struct Cyc_Absyn_Aggrfield * finfo = Cyc_Absyn_lookup_decl_field(ad,
									 f);
	if (finfo != 0) { goto _TL304;
	}
	{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T87;
	  _T87.tag = 6;
	  _T87.f1 = ad;
	  _T13 = _T87;
	}{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T87 = _T13;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T88;
	    _T88.tag = 0;
	    _T88.f1 = _tag_fat(" has no ",sizeof(char),9U);
	    _T14 = _T88;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T88 = _T14;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T89;
	      _T89.tag = 0;
	      _T16 = f;
	      _T89.f1 = *_T16;
	      _T15 = _T89;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T89 = _T15;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T8A;
		_T8A.tag = 0;
		_T8A.f1 = _tag_fat(" member",sizeof(char),8U);
		_T17 = _T8A;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T8A = _T17;
		void * _T8B[4];
		_T8B[0] = &_T87;
		_T8B[1] = &_T88;
		_T8B[2] = &_T89;
		_T8B[3] = &_T8A;
		_T18 = te;
		_T19 = loc;
		_T1A = topt;
		_T1B = _tag_fat(_T8B,sizeof(void *),4);
		_T12 = Cyc_Tcexp_expr_err(_T18,_T19,_T1A,_T1B);
	      }
	    }
	  }
	}return _T12;
	_TL304: _T1C = ad;
	_T1D = _T1C->impl;
	_T1E = _check_null(_T1D);
	_T1F = _T1E->tagged;
	if (! _T1F) { goto _TL306;
	}
	_T20 = is_tagged;
	*_T20 = 1;
	goto _TL307;
	_TL306: _TL307: _T21 = finfo;
	{ void * t2 = _T21->type;
	  if (ts == 0) { goto _TL308;
	  }
	  _T22 = ad;
	  _T23 = _T22->tvs;
	  _T24 = ts;
	  _T25 = Cyc_List_zip(_T23,_T24);
	  _T26 = finfo;
	  _T27 = _T26->type;
	  t2 = Cyc_Tcutil_substitute(_T25,_T27);
	  goto _TL309;
	  _TL308: _TL309: { struct Cyc_Absyn_Kind * t2_kind = Cyc_Tcutil_type_kind(t2);
	    _T28 = &Cyc_Kinds_ak;
	    _T29 = (struct Cyc_Absyn_Kind *)_T28;
	    _T2A = t2_kind;
	    _T2B = Cyc_Kinds_kind_leq(_T29,_T2A);
	    if (! _T2B) { goto _TL30A;
	    }
	    _T2C = Cyc_Tcenv_abstract_val_ok(te);
	    if (_T2C) { goto _TL30A;
	    }else { goto _TL30C;
	    }
	    _TL30C: { void * _T87 = Cyc_Absyn_compress(t2);
	      _T2D = (int *)_T87;
	      _T2E = *_T2D;
	      if (_T2E != 5) { goto _TL30D;
	      }
	      goto _LL7;
	      _TL30D: { struct Cyc_Warn_String_Warn_Warg_struct _T88;
		_T88.tag = 0;
		_T88.f1 = _tag_fat("cannot get member ",sizeof(char),19U);
		_T30 = _T88;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T88 = _T30;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T89;
		  _T89.tag = 0;
		  _T32 = f;
		  _T89.f1 = *_T32;
		  _T31 = _T89;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T89 = _T31;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T8A;
		    _T8A.tag = 0;
		    _T8A.f1 = _tag_fat(" since its type is abstract",sizeof(char),
				       28U);
		    _T33 = _T8A;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T8A = _T33;
		    void * _T8B[3];
		    _T8B[0] = &_T88;
		    _T8B[1] = &_T89;
		    _T8B[2] = &_T8A;
		    _T34 = te;
		    _T35 = loc;
		    _T36 = topt;
		    _T37 = _tag_fat(_T8B,sizeof(void *),3);
		    _T2F = Cyc_Tcexp_expr_err(_T34,_T35,_T36,_T37);
		  }
		}
	      }return _T2F;
	      _LL7: ;
	    }goto _TL30B;
	    _TL30A: _TL30B: _T38 = ad;
	    _T39 = _T38->kind;
	    _T3A = (int)_T39;
	    if (_T3A != 1) { goto _TL30F;
	    }
	    _T3B = ad;
	    _T3C = _T3B->impl;
	    _T3D = _check_null(_T3C);
	    _T3E = _T3D->tagged;
	    if (_T3E) { goto _TL30F;
	    }else { goto _TL311;
	    }
	    _TL311: _T3F = Cyc_Tcutil_is_bits_only_type(t2);
	    if (_T3F) { goto _TL30F;
	    }else { goto _TL312;
	    }
	    _TL312: _T40 = Cyc_Tcenv_in_notreadctxt(te);
	    if (_T40) { goto _TL30F;
	    }else { goto _TL313;
	    }
	    _TL313: _T41 = finfo;
	    _T42 = _T41->requires_clause;
	    if (_T42 != 0) { goto _TL30F;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T87;
	      _T87.tag = 0;
	      _T87.f1 = _tag_fat("cannot read union member ",sizeof(char),
				 26U);
	      _T44 = _T87;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T87 = _T44;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T88;
		_T88.tag = 0;
		_T46 = f;
		_T88.f1 = *_T46;
		_T45 = _T88;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T88 = _T45;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T89;
		  _T89.tag = 0;
		  _T89.f1 = _tag_fat(" since it is not `bits-only'",sizeof(char),
				     29U);
		  _T47 = _T89;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T89 = _T47;
		  void * _T8A[3];
		  _T8A[0] = &_T87;
		  _T8A[1] = &_T88;
		  _T8A[2] = &_T89;
		  _T48 = te;
		  _T49 = loc;
		  _T4A = topt;
		  _T4B = _tag_fat(_T8A,sizeof(void *),3);
		  _T43 = Cyc_Tcexp_expr_err(_T48,_T49,_T4A,_T4B);
		}
	      }
	    }return _T43;
	    _TL30F: _T4C = ad;
	    _T4D = _T4C->impl;
	    _T4E = _check_null(_T4D);
	    _T4F = _T4E->exist_vars;
	    if (_T4F == 0) { goto _TL314;
	    }
	    _T50 = t2;
	    _T51 = Cyc_Tcenv_lookup_opt_type_vars(te);
	    _T52 = Cyc_Absyn_wildtyp(_T51);
	    _T53 = Cyc_Unify_unify(_T50,_T52);
	    if (_T53) { goto _TL316;
	    }else { goto _TL318;
	    }
	    _TL318: { struct Cyc_Warn_String_Warn_Warg_struct _T87;
	      _T87.tag = 0;
	      _T87.f1 = _tag_fat("must use pattern-matching to access field ",
				 sizeof(char),43U);
	      _T55 = _T87;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T87 = _T55;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T88;
		_T88.tag = 0;
		_T57 = f;
		_T88.f1 = *_T57;
		_T56 = _T88;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T88 = _T56;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T89;
		  _T89.tag = 0;
		  _T89.f1 = _tag_fat("\n\tdue to existential type variables.",
				     sizeof(char),37U);
		  _T58 = _T89;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T89 = _T58;
		  void * _T8A[3];
		  _T8A[0] = &_T87;
		  _T8A[1] = &_T88;
		  _T8A[2] = &_T89;
		  _T59 = te;
		  _T5A = loc;
		  _T5B = topt;
		  _T5C = _tag_fat(_T8A,sizeof(void *),3);
		  _T54 = Cyc_Tcexp_expr_err(_T59,_T5A,_T5B,_T5C);
		}
	      }
	    }return _T54;
	    _TL316: goto _TL315;
	    _TL314: _TL315: _T5D = t2;
	    return _T5D;
	  }
	}
      }_TL302: goto _LL5;
      _TL300: goto _LL5;
    case 7: 
      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T87 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T83;
	_T84 = _T87->f1;
	_T85 = _T87->f3;
      }{ enum Cyc_Absyn_AggrKind k = _T84;
	struct Cyc_List_List * fs = _T85;
	struct Cyc_Absyn_Aggrfield * finfo = Cyc_Absyn_lookup_field(fs,f);
	if (finfo != 0) { goto _TL319;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T87;
	  _T87.tag = 0;
	  _T87.f1 = _tag_fat("type ",sizeof(char),6U);
	  _T5F = _T87;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T87 = _T5F;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T88;
	    _T88.tag = 2;
	    _T88.f1 = aggr_type;
	    _T60 = _T88;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T88 = _T60;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T89;
	      _T89.tag = 0;
	      _T89.f1 = _tag_fat(" has no ",sizeof(char),9U);
	      _T61 = _T89;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T89 = _T61;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T8A;
		_T8A.tag = 0;
		_T63 = f;
		_T8A.f1 = *_T63;
		_T62 = _T8A;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T8A = _T62;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T8B;
		  _T8B.tag = 0;
		  _T8B.f1 = _tag_fat(" member",sizeof(char),8U);
		  _T64 = _T8B;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T8B = _T64;
		  void * _T8C[5];
		  _T8C[0] = &_T87;
		  _T8C[1] = &_T88;
		  _T8C[2] = &_T89;
		  _T8C[3] = &_T8A;
		  _T8C[4] = &_T8B;
		  _T65 = te;
		  _T66 = loc;
		  _T67 = topt;
		  _T68 = _tag_fat(_T8C,sizeof(void *),5);
		  _T5E = Cyc_Tcexp_expr_err(_T65,_T66,_T67,_T68);
		}
	      }
	    }
	  }
	}return _T5E;
	_TL319: _T69 = k;
	_T6A = (int)_T69;
	if (_T6A != 1) { goto _TL31B;
	}
	_T6B = finfo;
	_T6C = _T6B->type;
	_T6D = Cyc_Tcutil_is_bits_only_type(_T6C);
	if (_T6D) { goto _TL31B;
	}else { goto _TL31D;
	}
	_TL31D: _T6E = Cyc_Tcenv_in_notreadctxt(te);
	if (_T6E) { goto _TL31B;
	}else { goto _TL31E;
	}
	_TL31E: _T6F = finfo;
	_T70 = _T6F->requires_clause;
	if (_T70 != 0) { goto _TL31B;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T87;
	  _T87.tag = 0;
	  _T87.f1 = _tag_fat("cannot read union member ",sizeof(char),26U);
	  _T72 = _T87;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T87 = _T72;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T88;
	    _T88.tag = 0;
	    _T74 = f;
	    _T88.f1 = *_T74;
	    _T73 = _T88;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T88 = _T73;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T89;
	      _T89.tag = 0;
	      _T89.f1 = _tag_fat(" since it is not `bits-only'",sizeof(char),
				 29U);
	      _T75 = _T89;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T89 = _T75;
	      void * _T8A[3];
	      _T8A[0] = &_T87;
	      _T8A[1] = &_T88;
	      _T8A[2] = &_T89;
	      _T76 = te;
	      _T77 = loc;
	      _T78 = topt;
	      _T79 = _tag_fat(_T8A,sizeof(void *),3);
	      _T71 = Cyc_Tcexp_expr_err(_T76,_T77,_T78,_T79);
	    }
	  }
	}return _T71;
	_TL31B: _T7A = finfo;
	_T7B = _T7A->type;
	return _T7B;
      }
    default: 
      _LL5: { struct Cyc_Warn_String_Warn_Warg_struct _T87;
	_T87.tag = 0;
	_T87.f1 = _tag_fat("expecting struct or union, found ",sizeof(char),
			   34U);
	_T7D = _T87;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T87 = _T7D;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T88;
	  _T88.tag = 2;
	  _T88.f1 = aggr_type;
	  _T7E = _T88;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T88 = _T7E;
	  void * _T89[2];
	  _T89[0] = &_T87;
	  _T89[1] = &_T88;
	  _T7F = te;
	  _T80 = loc;
	  _T81 = topt;
	  _T82 = _tag_fat(_T89,sizeof(void *),2);
	  _T7C = Cyc_Tcexp_expr_err(_T7F,_T80,_T81,_T82);
	}
      }return _T7C;
    }
    ;
  }
}
static void * Cyc_Tcexp_tcAggrMember(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				     void * * topt,struct Cyc_Absyn_Exp * e,
				     struct _fat_ptr * f,long * is_tagged,
				     long * is_read) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Absyn_Exp * _T1;
  int * _T2;
  int _T3;
  struct Cyc_Absyn_Vardecl * _T4;
  void * _T5;
  _T0 = Cyc_Tcenv_enter_abstract_val_ok(te);
  _T1 = e;
  { void * t2 = Cyc_Tcexp_tcExpNoPromote(_T0,0,_T1);
    _TL31F: if (1) { goto _TL320;
    }else { goto _TL321;
    }
    _TL320: { void * _T6 = Cyc_Absyn_compress(t2);
      struct Cyc_Absyn_Vardecl * _T7;
      _T2 = (int *)_T6;
      _T3 = *_T2;
      if (_T3 != 12) { goto _TL322;
      }
      { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T8 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T6;
	_T7 = _T8->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T7;
	_T4 = vd;
	t2 = _T4->type;
	goto _TL31F;
      }_TL322: goto _LL0;
      _LL0: ;
    }goto _TL321;
    goto _TL31F;
    _TL321: _T5 = Cyc_Tcexp_tcAggrMember2(te,loc,topt,t2,f,is_tagged,is_read);
    return _T5;
  }
}
static void * Cyc_Tcexp_tcAggrArrow(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				    void * * topt,struct Cyc_Absyn_Exp * e,
				    struct _fat_ptr * f,long * is_tagged,
				    long * is_read) {
  struct Cyc_Tcenv_Tenv * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_Exp * _T2;
  int * _T3;
  int _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  void * _T6;
  _T0 = Cyc_Tcenv_enter_abstract_val_ok(te);
  _T1 = loc;
  _T2 = e;
  { void * t2 = Cyc_Tcexp_tcDeref(_T0,_T1,0,0,_T2);
    _TL324: if (1) { goto _TL325;
    }else { goto _TL326;
    }
    _TL325: { void * _T7 = Cyc_Absyn_compress(t2);
      struct Cyc_Absyn_Vardecl * _T8;
      _T3 = (int *)_T7;
      _T4 = *_T3;
      if (_T4 != 12) { goto _TL327;
      }
      { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T9 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T7;
	_T8 = _T9->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T8;
	_T5 = vd;
	t2 = _T5->type;
	goto _TL324;
      }_TL327: goto _LL0;
      _LL0: ;
    }goto _TL326;
    goto _TL324;
    _TL326: _T6 = Cyc_Tcexp_tcAggrMember2(te,loc,topt,t2,f,is_tagged,is_read);
    return _T6;
  }
}
static void * Cyc_Tcexp_tcSubscript(struct Cyc_Tcenv_Tenv * te_orig,unsigned int loc,
				    void * * topt,struct Cyc_Absyn_Exp * orig,
				    struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Tcenv_Tenv * _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct Cyc_Tcenv_Tenv * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  void * _T6;
  void * _T7;
  struct Cyc_Absyn_Exp * _T8;
  void * _T9;
  void * _TA;
  long _TB;
  void * _TC;
  struct Cyc_Warn_String_Warn_Warg_struct _TD;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TE;
  struct Cyc_Tcenv_Tenv * _TF;
  struct Cyc_Absyn_Exp * _T10;
  unsigned int _T11;
  void * * _T12;
  struct _fat_ptr _T13;
  void * _T14;
  int * _T15;
  unsigned int _T16;
  void * _T17;
  struct Cyc_Absyn_PtrInfo _T18;
  struct Cyc_Absyn_PtrInfo _T19;
  struct Cyc_Absyn_PtrInfo _T1A;
  struct Cyc_Absyn_PtrAtts _T1B;
  struct Cyc_Absyn_PtrInfo _T1C;
  struct Cyc_Absyn_PtrAtts _T1D;
  struct Cyc_Absyn_PtrInfo _T1E;
  struct Cyc_Absyn_PtrAtts _T1F;
  long _T20;
  unsigned int _T21;
  void * _T22;
  void * _T23;
  void * _T24;
  long _T25;
  struct Cyc_Warn_String_Warn_Warg_struct _T26;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T27;
  unsigned int _T28;
  struct _fat_ptr _T29;
  long _T2A;
  long _T2B;
  long _T2C;
  long _T2D;
  long _T2E;
  unsigned int _T2F;
  struct _fat_ptr _T30;
  struct _fat_ptr _T31;
  long _T32;
  struct Cyc_Absyn_Exp * _T33;
  unsigned int _T34;
  struct _fat_ptr _T35;
  struct _fat_ptr _T36;
  long _T37;
  long _T38;
  unsigned int _T39;
  unsigned int _T3A;
  void * _T3B;
  long _T3C;
  struct Cyc_Absyn_Kind * _T3D;
  struct Cyc_Absyn_Kind * _T3E;
  struct Cyc_Absyn_Kind * _T3F;
  long _T40;
  long _T41;
  struct Cyc_Warn_String_Warn_Warg_struct _T42;
  struct Cyc_Absyn_Exp * _T43;
  unsigned int _T44;
  struct _fat_ptr _T45;
  void * _T46;
  void * _T47;
  struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T48;
  enum Cyc_Absyn_AggrKind _T49;
  void * _T4A;
  long _T4B;
  long _T4C;
  void * _T4D;
  struct Cyc_Warn_String_Warn_Warg_struct _T4E;
  struct Cyc_Tcenv_Tenv * _T4F;
  unsigned int _T50;
  struct _fat_ptr _T51;
  unsigned int _T52;
  int _T53;
  struct Cyc_Absyn_Exp * _T54;
  struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T55;
  long _T56;
  void * _T57;
  struct Cyc_Warn_String_Warn_Warg_struct _T58;
  struct Cyc_Warn_Int_Warn_Warg_struct _T59;
  unsigned int _T5A;
  struct Cyc_Warn_String_Warn_Warg_struct _T5B;
  struct Cyc_Warn_Int_Warn_Warg_struct _T5C;
  struct Cyc_Warn_String_Warn_Warg_struct _T5D;
  struct Cyc_Tcenv_Tenv * _T5E;
  unsigned int _T5F;
  struct _fat_ptr _T60;
  struct Cyc_Absyn_Aggrfield * _T61;
  void * _T62;
  void * _T63;
  struct Cyc_Warn_String_Warn_Warg_struct _T64;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T65;
  struct Cyc_Tcenv_Tenv * _T66;
  unsigned int _T67;
  void * * _T68;
  struct _fat_ptr _T69;
  _T0 = Cyc_Tcenv_clear_notreadctxt(te_orig);
  { struct Cyc_Tcenv_Tenv * te = Cyc_Tcenv_clear_lhs(_T0);
    _T1 = Cyc_Tcenv_clear_abstract_val_ok(te);
    _T2 = e1;
    Cyc_Tcexp_tcExp(_T1,0,_T2);
    _T3 = Cyc_Tcenv_clear_abstract_val_ok(te);
    _T4 = e2;
    Cyc_Tcexp_tcExp(_T3,0,_T4);
    _T5 = e1;
    _T6 = _T5->topt;
    _T7 = _check_null(_T6);
    { void * t1 = Cyc_Absyn_compress(_T7);
      _T8 = e2;
      _T9 = _T8->topt;
      _TA = _check_null(_T9);
      { void * t2 = Cyc_Absyn_compress(_TA);
	_TB = Cyc_Tcutil_coerce_sint_type(e2);
	if (_TB) { goto _TL329;
	}else { goto _TL32B;
	}
	_TL32B: { struct Cyc_Warn_String_Warn_Warg_struct _T6A;
	  _T6A.tag = 0;
	  _T6A.f1 = _tag_fat("expecting int subscript, found ",sizeof(char),
			     32U);
	  _TD = _T6A;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T6A = _TD;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T6B;
	    _T6B.tag = 2;
	    _T6B.f1 = t2;
	    _TE = _T6B;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T6B = _TE;
	    void * _T6C[2];
	    _T6C[0] = &_T6A;
	    _T6C[1] = &_T6B;
	    _TF = te;
	    _T10 = e2;
	    _T11 = _T10->loc;
	    _T12 = topt;
	    _T13 = _tag_fat(_T6C,sizeof(void *),2);
	    _TC = Cyc_Tcexp_expr_err(_TF,_T11,_T12,_T13);
	  }
	}return _TC;
	_TL329: { struct Cyc_List_List * _T6A;
	  long _T6B;
	  void * _T6C;
	  void * _T6D;
	  void * _T6E;
	  struct Cyc_Absyn_Tqual _T6F;
	  void * _T70;
	  _T14 = t1;
	  _T15 = (int *)_T14;
	  _T16 = *_T15;
	  switch (_T16) {
	  case 4: 
	    _T17 = t1;
	    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T71 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T17;
	      _T18 = _T71->f1;
	      _T70 = _T18.elt_type;
	      _T19 = _T71->f1;
	      _T6F = _T19.elt_tq;
	      _T1A = _T71->f1;
	      _T1B = _T1A.ptr_atts;
	      _T6E = _T1B.eff;
	      _T1C = _T71->f1;
	      _T1D = _T1C.ptr_atts;
	      _T6D = _T1D.bounds;
	      _T1E = _T71->f1;
	      _T1F = _T1E.ptr_atts;
	      _T6C = _T1F.zero_term;
	    }{ void * t = _T70;
	      struct Cyc_Absyn_Tqual tq = _T6F;
	      void * rt = _T6E;
	      void * b = _T6D;
	      void * zt = _T6C;
	      _T20 = Cyc_Tcutil_is_cvar_type(b);
	      if (! _T20) { goto _TL32D;
	      }
	      _T21 = loc;
	      _T22 = b;
	      _T23 = Cyc_Absyn_fatconst();
	      _T24 = Cyc_BansheeIf_equality_constraint(_T22,_T23);
	      _T25 = Cyc_BansheeIf_add_constraint(_T21,_T24);
	      if (_T25) { goto _TL32D;
	      }else { goto _TL32F;
	      }
	      _TL32F: { struct Cyc_Warn_String_Warn_Warg_struct _T71;
		_T71.tag = 0;
		_T71.f1 = _tag_fat("Unable to determine bound on pointer type ",
				   sizeof(char),43U);
		_T26 = _T71;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T71 = _T26;
		{ struct Cyc_Warn_Typ_Warn_Warg_struct _T72;
		  _T72.tag = 2;
		  _T72.f1 = t1;
		  _T27 = _T72;
		}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T72 = _T27;
		  void * _T73[2];
		  _T73[0] = &_T71;
		  _T73[1] = &_T72;
		  _T28 = loc;
		  _T29 = _tag_fat(_T73,sizeof(void *),2);
		  Cyc_Warn_err2(_T28,_T29);
		}
	      }goto _TL32E;
	      _TL32D: _TL32E: _T2A = Cyc_Tcutil_force_type2bool(0,zt);
	      if (! _T2A) { goto _TL330;
	      }
	      { long emit_warning = 0;
		struct Cyc_Absyn_Exp * eopt = Cyc_Tcutil_get_bounds_exp(Cyc_Absyn_fat_bound_type,
									b);
		if (eopt == 0) { goto _TL332;
		}
		{ struct Cyc_Absyn_Exp * e3 = eopt;
		  struct _tuple14 _T71 = Cyc_Evexp_eval_const_uint_exp(e3);
		  long _T72;
		  unsigned int _T73;
		  _T73 = _T71.f0;
		  _T72 = _T71.f1;
		  { unsigned int i = _T73;
		    long known_i = _T72;
		    _T2B = known_i;
		    if (! _T2B) { goto _TL334;
		    }
		    if (i != 1U) { goto _TL334;
		    }
		    emit_warning = 1;
		    goto _TL335;
		    _TL334: _TL335: _T2C = Cyc_Tcutil_is_const_exp(e2);
		    if (! _T2C) { goto _TL336;
		    }
		    { struct _tuple14 _T74 = Cyc_Evexp_eval_const_uint_exp(e2);
		      long _T75;
		      unsigned int _T76;
		      _T76 = _T74.f0;
		      _T75 = _T74.f1;
		      { unsigned int j = _T76;
			long known_j = _T75;
			_T2D = known_j;
			if (! _T2D) { goto _TL338;
			}
			{ struct _tuple14 _T77 = Cyc_Evexp_eval_const_uint_exp(e3);
			  long _T78;
			  unsigned int _T79;
			  _T79 = _T77.f0;
			  _T78 = _T77.f1;
			  { unsigned int j = _T79;
			    long knownj = _T78;
			    _T2E = known_i;
			    if (! _T2E) { goto _TL33A;
			    }
			    if (j <= i) { goto _TL33A;
			    }
			    if (i == 1U) { goto _TL33A;
			    }
			    _T2F = loc;
			    _T30 = _tag_fat("subscript will fail at run-time",
					    sizeof(char),32U);
			    _T31 = _tag_fat(0U,sizeof(void *),0);
			    Cyc_Warn_err(_T2F,_T30,_T31);
			    goto _TL33B;
			    _TL33A: _TL33B: ;
			  }
			}goto _TL339;
			_TL338: _TL339: ;
		      }
		    }goto _TL337;
		    _TL336: _TL337: ;
		  }
		}goto _TL333;
		_TL332: _TL333: _T32 = emit_warning;
		if (! _T32) { goto _TL33C;
		}
		_T33 = e2;
		_T34 = _T33->loc;
		_T35 = _tag_fat("subscript on thin, zero-terminated pointer could be expensive.",
				sizeof(char),63U);
		_T36 = _tag_fat(0U,sizeof(void *),0);
		Cyc_Warn_warn(_T34,_T35,_T36);
		goto _TL33D;
		_TL33C: _TL33D: ;
	      }goto _TL331;
	      _TL330: _T37 = Cyc_Tcutil_is_const_exp(e2);
	      if (! _T37) { goto _TL33E;
	      }
	      { struct _tuple14 _T71 = Cyc_Evexp_eval_const_uint_exp(e2);
		long _T72;
		unsigned int _T73;
		_T73 = _T71.f0;
		_T72 = _T71.f1;
		{ unsigned int i = _T73;
		  long known = _T72;
		  _T38 = known;
		  if (! _T38) { goto _TL340;
		  }
		  _T39 = loc;
		  _T3A = i;
		  _T3B = b;
		  _T3C = Cyc_Tcenv_abstract_val_ok(te);
		  Cyc_Tcutil_check_bound(_T39,_T3A,_T3B,_T3C);
		  goto _TL341;
		  _TL340: _TL341: ;
		}
	      }goto _TL33F;
	      _TL33E: Cyc_Tcutil_check_nonzero_bound(loc,b);
	      _TL33F: _TL331: Cyc_Tcenv_check_effect_accessible_nodelay(te,
									loc,
									rt);
	      _T3D = Cyc_Tcutil_type_kind(t);
	      _T3E = &Cyc_Kinds_mk;
	      _T3F = (struct Cyc_Absyn_Kind *)_T3E;
	      _T40 = Cyc_Kinds_kind_leq(_T3D,_T3F);
	      if (_T40) { goto _TL342;
	      }else { goto _TL344;
	      }
	      _TL344: _T41 = Cyc_Tcenv_abstract_val_ok(te);
	      if (_T41) { goto _TL342;
	      }else { goto _TL345;
	      }
	      _TL345: { struct Cyc_Warn_String_Warn_Warg_struct _T71;
		_T71.tag = 0;
		_T71.f1 = _tag_fat("can't subscript an abstract pointer",
				   sizeof(char),36U);
		_T42 = _T71;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T71 = _T42;
		void * _T72[1];
		_T72[0] = &_T71;
		_T43 = e1;
		_T44 = _T43->loc;
		_T45 = _tag_fat(_T72,sizeof(void *),1);
		Cyc_Warn_err2(_T44,_T45);
	      }goto _TL343;
	      _TL342: _TL343: _T46 = t;
	      return _T46;
	    }
	  case 7: 
	    _T47 = t1;
	    _T48 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T47;
	    _T49 = _T48->f1;
	    if (_T49 != Cyc_Absyn_StructA) { goto _TL346;
	    }
	    _T4A = t1;
	    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T71 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T4A;
	      _T6B = _T71->f2;
	      _T6A = _T71->f3;
	    }_T4B = (long)_T6B;
	    if (! _T4B) { goto _TL348;
	    }
	    { long is_tuple = _T6B;
	      struct Cyc_List_List * fields = _T6A;
	      struct _tuple14 _T71 = Cyc_Evexp_eval_const_uint_exp(e2);
	      long _T72;
	      unsigned int _T73;
	      _T73 = _T71.f0;
	      _T72 = _T71.f1;
	      { unsigned int i = _T73;
		long known = _T72;
		_T4C = known;
		if (_T4C) { goto _TL34A;
		}else { goto _TL34C;
		}
		_TL34C: { struct Cyc_Warn_String_Warn_Warg_struct _T74;
		  _T74.tag = 0;
		  _T74.f1 = _tag_fat("tuple projection cannot use sizeof or offsetof",
				     sizeof(char),47U);
		  _T4E = _T74;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T74 = _T4E;
		  void * _T75[1];
		  _T75[0] = &_T74;
		  _T4F = te;
		  _T50 = loc;
		  _T51 = _tag_fat(_T75,sizeof(void *),1);
		  _T4D = Cyc_Tcexp_expr_err(_T4F,_T50,0,_T51);
		}return _T4D;
		_TL34A: _T52 = i;
		_T53 = (int)_T52;
		{ struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T74 = Cyc_Absyn_tuple_field_designator(_T53);
		  struct _fat_ptr * _T75;
		  { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T76 = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T74;
		    _T75 = _T76->f1;
		  }{ struct _fat_ptr * n = _T75;
		    _T54 = orig;
		    { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T76 = _cycalloc(sizeof(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct));
		      _T76->tag = 21;
		      _T76->f1 = e1;
		      _T76->f2 = n;
		      _T76->f3 = 0;
		      _T56 = Cyc_Tcenv_in_notreadctxt(te);
		      _T76->f4 = ! _T56;
		      _T55 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T76;
		    }_T54->r = (void *)_T55;
		    { struct Cyc_Absyn_Aggrfield * finfo = Cyc_Absyn_lookup_field(fields,
										  n);
		      if (finfo != 0) { goto _TL34D;
		      }
		      { struct Cyc_Warn_String_Warn_Warg_struct _T76;
			_T76.tag = 0;
			_T76.f1 = _tag_fat("index is ",sizeof(char),10U);
			_T58 = _T76;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T76 = _T58;
			{ struct Cyc_Warn_Int_Warn_Warg_struct _T77;
			  _T77.tag = 12;
			  _T5A = i;
			  _T77.f1 = (int)_T5A;
			  _T59 = _T77;
			}{ struct Cyc_Warn_Int_Warn_Warg_struct _T77 = _T59;
			  { struct Cyc_Warn_String_Warn_Warg_struct _T78;
			    _T78.tag = 0;
			    _T78.f1 = _tag_fat(" but tuple has only ",sizeof(char),
					       21U);
			    _T5B = _T78;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T78 = _T5B;
			    { struct Cyc_Warn_Int_Warn_Warg_struct _T79;
			      _T79.tag = 12;
			      _T79.f1 = Cyc_List_length(fields);
			      _T5C = _T79;
			    }{ struct Cyc_Warn_Int_Warn_Warg_struct _T79 = _T5C;
			      { struct Cyc_Warn_String_Warn_Warg_struct _T7A;
				_T7A.tag = 0;
				_T7A.f1 = _tag_fat(" fields",sizeof(char),
						   8U);
				_T5D = _T7A;
			      }{ struct Cyc_Warn_String_Warn_Warg_struct _T7A = _T5D;
				void * _T7B[5];
				_T7B[0] = &_T76;
				_T7B[1] = &_T77;
				_T7B[2] = &_T78;
				_T7B[3] = &_T79;
				_T7B[4] = &_T7A;
				_T5E = te;
				_T5F = loc;
				_T60 = _tag_fat(_T7B,sizeof(void *),5);
				_T57 = Cyc_Tcexp_expr_err(_T5E,_T5F,0,_T60);
			      }
			    }
			  }
			}
		      }return _T57;
		      _TL34D: _T61 = finfo;
		      _T62 = _T61->type;
		      return _T62;
		    }
		  }
		}
	      }
	    }_TL348: goto _LL5;
	    _TL346: goto _LL5;
	  default: 
	    _LL5: { struct Cyc_Warn_String_Warn_Warg_struct _T71;
	      _T71.tag = 0;
	      _T71.f1 = _tag_fat("subscript applied to ",sizeof(char),22U);
	      _T64 = _T71;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T71 = _T64;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T72;
		_T72.tag = 2;
		_T72.f1 = t1;
		_T65 = _T72;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T72 = _T65;
		void * _T73[2];
		_T73[0] = &_T71;
		_T73[1] = &_T72;
		_T66 = te;
		_T67 = loc;
		_T68 = topt;
		_T69 = _tag_fat(_T73,sizeof(void *),2);
		_T63 = Cyc_Tcexp_expr_err(_T66,_T67,_T68,_T69);
	      }
	    }return _T63;
	  }
	  ;
	}
      }
    }
  }
}
static void * Cyc_Tcexp_tcCompoundLit(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				      struct Cyc_Absyn_Exp * orig_exp,void * * topt,
				      struct _tuple9 * targ,struct Cyc_List_List * des) {
  struct _tuple9 * _T0;
  unsigned int _T1;
  struct Cyc_Tcenv_Tenv * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_Absyn_Kind * _T4;
  long _T5;
  struct Cyc_Absyn_Kind * _T6;
  struct Cyc_Absyn_Kind * _T7;
  void * _T8;
  struct Cyc_Absyn_Exp * _T9;
  struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _TA;
  unsigned int _TB;
  void * * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_Absyn_Exp * _TF;
  void * _T10;
  void * _T11;
  _T0 = targ;
  { struct _tuple9 _T12 = *_T0;
    _T11 = _T12.f2;
  }{ void * t = _T11;
    _T1 = loc;
    _T2 = te;
    _T3 = Cyc_Tcenv_lookup_type_vars(te);
    _T5 = Cyc_Tcenv_abstract_val_ok(te);
    if (! _T5) { goto _TL34F;
    }
    _T6 = &Cyc_Kinds_ak;
    _T4 = (struct Cyc_Absyn_Kind *)_T6;
    goto _TL350;
    _TL34F: _T7 = &Cyc_Kinds_mk;
    _T4 = (struct Cyc_Absyn_Kind *)_T7;
    _TL350: _T8 = t;
    Cyc_Tctyp_check_type(_T1,_T2,_T3,_T4,1,0,_T8);
    _T9 = orig_exp;
    { struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T12 = _cycalloc(sizeof(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct));
      _T12->tag = 35;
      _T12->f1 = 0;
      _T12->f2 = des;
      _TA = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T12;
    }_T9->r = (void *)_TA;
    _TB = loc;
    _TC = &t;
    _TD = orig_exp;
    _TE = des;
    Cyc_Tcexp_resolve_unresolved_mem(_TB,_TC,_TD,_TE);
    Cyc_Tcexp_tcExpNoInst(te,topt,orig_exp);
    _TF = orig_exp;
    _T10 = _TF->topt;
    return _T10;
  }
}
static void * Cyc_Tcexp_tcArray(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				void * * elt_topt,struct Cyc_Absyn_Tqual * elt_tqopt,
				long zero_term,struct Cyc_List_List * des) {
  struct Cyc_List_List * (* _T0)(struct Cyc_Absyn_Exp * (*)(struct _tuple20 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T1)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Exp * (* _T2)(struct _tuple20 *);
  void * (* _T3)(struct _tuple0 *);
  struct Cyc_List_List * _T4;
  struct Cyc_Core_Opt * _T5;
  struct Cyc_Core_Opt * _T6;
  struct Cyc_Core_Opt * _T7;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T8;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T9;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _TA;
  void * _TB;
  unsigned int _TC;
  long _TD;
  struct Cyc_Absyn_Exp * (* _TE)(struct Cyc_List_List *,int);
  void * (* _TF)(struct Cyc_List_List *,int);
  struct Cyc_List_List * _T10;
  int _T11;
  long _T12;
  struct Cyc_Absyn_Exp * _T13;
  unsigned int _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct Cyc_Absyn_Exp * _T17;
  void * _T18;
  struct Cyc_Absyn_Tqual _T19;
  struct Cyc_Absyn_Tqual * _T1A;
  unsigned int _T1B;
  struct Cyc_Absyn_Tqual * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  void * _T1E;
  long _T1F;
  struct Cyc_Tcenv_Tenv * _T20;
  void * * _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  struct Cyc_Absyn_Exp * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_List_List * _T26;
  void * _T27;
  struct Cyc_List_List * _T28;
  long _T29;
  struct Cyc_Warn_String_Warn_Warg_struct _T2A;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T2B;
  struct Cyc_Warn_String_Warn_Warg_struct _T2C;
  struct Cyc_List_List * _T2D;
  void * _T2E;
  struct Cyc_Absyn_Exp * _T2F;
  unsigned int _T30;
  struct _fat_ptr _T31;
  struct Cyc_List_List * _T32;
  void * _T33;
  struct _tuple20 * _T34;
  struct _tuple20 _T35;
  struct Cyc_List_List * _T36;
  int * _T37;
  int _T38;
  struct Cyc_Warn_String_Warn_Warg_struct _T39;
  unsigned int _T3A;
  struct _fat_ptr _T3B;
  long _T3C;
  struct Cyc_Warn_String_Warn_Warg_struct _T3D;
  struct Cyc_Absyn_Exp * _T3E;
  unsigned int _T3F;
  struct _fat_ptr _T40;
  unsigned int _T41;
  int _T42;
  unsigned int _T43;
  struct Cyc_Warn_String_Warn_Warg_struct _T44;
  struct Cyc_Warn_Int_Warn_Warg_struct _T45;
  struct Cyc_Warn_String_Warn_Warg_struct _T46;
  struct Cyc_Warn_Int_Warn_Warg_struct _T47;
  unsigned int _T48;
  struct Cyc_Absyn_Exp * _T49;
  unsigned int _T4A;
  struct _fat_ptr _T4B;
  struct Cyc_List_List * _T4C;
  void * _T4D;
  void * res_t2;
  int num_es = Cyc_List_length(des);
  _T1 = Cyc_List_map;
  { struct Cyc_List_List * (* _T4E)(struct Cyc_Absyn_Exp * (*)(struct _tuple20 *),
				    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Exp * (*)(struct _tuple20 *),
											  struct Cyc_List_List *))_T1;
    _T0 = _T4E;
  }_T3 = Cyc_Core_snd;
  { struct Cyc_Absyn_Exp * (* _T4E)(struct _tuple20 *) = (struct Cyc_Absyn_Exp * (*)(struct _tuple20 *))_T3;
    _T2 = _T4E;
  }_T4 = des;
  { struct Cyc_List_List * es = _T0(_T2,_T4);
    _T5 = &Cyc_Kinds_mko;
    _T6 = (struct Cyc_Core_Opt *)_T5;
    _T7 = Cyc_Tcenv_lookup_opt_type_vars(te);
    { void * res = Cyc_Absyn_new_evar(_T6,_T7);
      struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * sz_rexp;
      sz_rexp = _cycalloc(sizeof(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct));
      _T8 = sz_rexp;
      _T8->tag = 0;
      _T9 = sz_rexp;
      _T9->f1 = Cyc_Absyn_Int_c(1U,num_es);
      _TA = sz_rexp;
      _TB = (void *)_TA;
      _TC = loc;
      { struct Cyc_Absyn_Exp * sz_exp = Cyc_Absyn_new_exp(_TB,_TC);
	_TD = zero_term;
	if (! _TD) { goto _TL351;
	}
	_TF = Cyc_List_nth;
	{ struct Cyc_Absyn_Exp * (* _T4E)(struct Cyc_List_List *,int) = (struct Cyc_Absyn_Exp * (*)(struct Cyc_List_List *,
												    int))_TF;
	  _TE = _T4E;
	}_T10 = es;
	_T11 = num_es - 1;
	{ struct Cyc_Absyn_Exp * e = _TE(_T10,_T11);
	  _T12 = Cyc_Tcutil_is_zero(e);
	  if (_T12) { goto _TL353;
	  }else { goto _TL355;
	  }
	  _TL355: _T13 = e;
	  _T14 = _T13->loc;
	  _T15 = _tag_fat("zero-terminated array doesn't end with zero.",
			  sizeof(char),45U);
	  _T16 = _tag_fat(0U,sizeof(void *),0);
	  Cyc_Warn_err(_T14,_T15,_T16);
	  goto _TL354;
	  _TL353: _TL354: ;
	}goto _TL352;
	_TL351: _TL352: _T17 = sz_exp;
	_T17->topt = Cyc_Absyn_uint_type;
	_T18 = res;
	_T1A = elt_tqopt;
	_T1B = (unsigned int)_T1A;
	if (! _T1B) { goto _TL356;
	}
	_T1C = elt_tqopt;
	_T19 = *_T1C;
	goto _TL357;
	_TL356: _T19 = Cyc_Absyn_empty_tqual(0U);
	_TL357: _T1D = sz_exp;
	_T1F = zero_term;
	if (! _T1F) { goto _TL358;
	}
	_T1E = Cyc_Absyn_true_type;
	goto _TL359;
	_TL358: _T1E = Cyc_Absyn_false_type;
	_TL359: res_t2 = Cyc_Absyn_array_type(_T18,_T19,_T1D,_T1E,0U);
	{ struct Cyc_List_List * es2 = es;
	  _TL35D: if (es2 != 0) { goto _TL35B;
	  }else { goto _TL35C;
	  }
	  _TL35B: _T20 = te;
	  _T21 = elt_topt;
	  _T22 = es2;
	  _T23 = _T22->hd;
	  _T24 = (struct Cyc_Absyn_Exp *)_T23;
	  Cyc_Tcexp_tcExpInitializer(_T20,_T21,_T24);
	  _T25 = es2;
	  es2 = _T25->tl;
	  goto _TL35D;
	  _TL35C: ;
	}_T26 = Cyc_Tcenv_curr_aquals_bounds(te);
	_T27 = res;
	_T28 = es;
	_T29 = Cyc_Tcutil_coerce_list(_T26,_T27,_T28);
	if (_T29) { goto _TL35E;
	}else { goto _TL360;
	}
	_TL360: { struct Cyc_Warn_String_Warn_Warg_struct _T4E;
	  _T4E.tag = 0;
	  _T4E.f1 = _tag_fat("elements of array do not all have the same type (",
			     sizeof(char),50U);
	  _T2A = _T4E;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T4E = _T2A;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T4F;
	    _T4F.tag = 2;
	    _T4F.f1 = res;
	    _T2B = _T4F;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T4F = _T2B;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T50;
	      _T50.tag = 0;
	      _T50.f1 = _tag_fat(")",sizeof(char),2U);
	      _T2C = _T50;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T50 = _T2C;
	      void * _T51[3];
	      _T51[0] = &_T4E;
	      _T51[1] = &_T4F;
	      _T51[2] = &_T50;
	      _T2D = _check_null(es);
	      _T2E = _T2D->hd;
	      _T2F = (struct Cyc_Absyn_Exp *)_T2E;
	      _T30 = _T2F->loc;
	      _T31 = _tag_fat(_T51,sizeof(void *),3);
	      Cyc_Warn_err2(_T30,_T31);
	    }
	  }
	}goto _TL35F;
	_TL35E: _TL35F: { int offset = 0;
	  _TL364: if (des != 0) { goto _TL362;
	  }else { goto _TL363;
	  }
	  _TL362: _T32 = des;
	  _T33 = _T32->hd;
	  _T34 = (struct _tuple20 *)_T33;
	  _T35 = *_T34;
	  { struct Cyc_List_List * ds = _T35.f0;
	    if (ds == 0) { goto _TL365;
	    }
	    _T36 = ds;
	    { void * _T4E = _T36->hd;
	      struct Cyc_Absyn_Exp * _T4F;
	      _T37 = (int *)_T4E;
	      _T38 = *_T37;
	      if (_T38 != 1) { goto _TL367;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T50;
		_T50.tag = 0;
		_T50.f1 = _tag_fat("only array index designators are supported",
				   sizeof(char),43U);
		_T39 = _T50;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T50 = _T39;
		void * _T51[1];
		_T51[0] = &_T50;
		_T3A = loc;
		_T3B = _tag_fat(_T51,sizeof(void *),1);
		Cyc_Warn_err2(_T3A,_T3B);
	      }goto _LL0;
	      _TL367: { struct Cyc_Absyn_ArrayElement_Absyn_Designator_struct * _T50 = (struct Cyc_Absyn_ArrayElement_Absyn_Designator_struct *)_T4E;
		_T4F = _T50->f1;
	      }{ struct Cyc_Absyn_Exp * e = _T4F;
		Cyc_Tcexp_tcExpInitializer(te,0,e);
		{ struct _tuple14 _T50 = Cyc_Evexp_eval_const_uint_exp(e);
		  long _T51;
		  unsigned int _T52;
		  _T52 = _T50.f0;
		  _T51 = _T50.f1;
		  { unsigned int i = _T52;
		    long known = _T51;
		    _T3C = known;
		    if (_T3C) { goto _TL369;
		    }else { goto _TL36B;
		    }
		    _TL36B: { struct Cyc_Warn_String_Warn_Warg_struct _T53;
		      _T53.tag = 0;
		      _T53.f1 = _tag_fat("index designator cannot use sizeof or offsetof",
					 sizeof(char),47U);
		      _T3D = _T53;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T53 = _T3D;
		      void * _T54[1];
		      _T54[0] = &_T53;
		      _T3E = e;
		      _T3F = _T3E->loc;
		      _T40 = _tag_fat(_T54,sizeof(void *),1);
		      Cyc_Warn_err2(_T3F,_T40);
		    }goto _TL36A;
		    _TL369: _T41 = i;
		    _T42 = offset;
		    _T43 = (unsigned int)_T42;
		    if (_T41 == _T43) { goto _TL36C;
		    }
		    { struct Cyc_Warn_String_Warn_Warg_struct _T53;
		      _T53.tag = 0;
		      _T53.f1 = _tag_fat("expecting index designator ",sizeof(char),
					 28U);
		      _T44 = _T53;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T53 = _T44;
		      { struct Cyc_Warn_Int_Warn_Warg_struct _T54;
			_T54.tag = 12;
			_T54.f1 = offset;
			_T45 = _T54;
		      }{ struct Cyc_Warn_Int_Warn_Warg_struct _T54 = _T45;
			{ struct Cyc_Warn_String_Warn_Warg_struct _T55;
			  _T55.tag = 0;
			  _T55.f1 = _tag_fat(" but found ",sizeof(char),12U);
			  _T46 = _T55;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T55 = _T46;
			  { struct Cyc_Warn_Int_Warn_Warg_struct _T56;
			    _T56.tag = 12;
			    _T48 = i;
			    _T56.f1 = (int)_T48;
			    _T47 = _T56;
			  }{ struct Cyc_Warn_Int_Warn_Warg_struct _T56 = _T47;
			    void * _T57[4];
			    _T57[0] = &_T53;
			    _T57[1] = &_T54;
			    _T57[2] = &_T55;
			    _T57[3] = &_T56;
			    _T49 = e;
			    _T4A = _T49->loc;
			    _T4B = _tag_fat(_T57,sizeof(void *),4);
			    Cyc_Warn_err2(_T4A,_T4B);
			  }
			}
		      }
		    }goto _TL36D;
		    _TL36C: _TL36D: _TL36A: goto _LL0;
		  }
		}
	      }_LL0: ;
	    }goto _TL366;
	    _TL365: _TL366: ;
	  }offset = offset + 1;
	  _T4C = des;
	  des = _T4C->tl;
	  goto _TL364;
	  _TL363: ;
	}_T4D = res_t2;
	return _T4D;
      }
    }
  }
}
 struct _tuple24 {
  void * * f0;
  struct Cyc_Absyn_Tqual * f1;
  void * * f2;
};
static struct _tuple24 Cyc_Tcexp_ptrEltAtts(void * * topt) {
  void * * _T0;
  unsigned int _T1;
  struct _tuple24 _T2;
  void * * _T3;
  void * _T4;
  int * _T5;
  unsigned int _T6;
  struct _tuple24 _T7;
  void * * _T8;
  struct Cyc_Absyn_PtrInfo _T9;
  struct Cyc_Absyn_Tqual * _TA;
  struct Cyc_Absyn_PtrInfo _TB;
  void * * _TC;
  struct Cyc_Absyn_PtrInfo _TD;
  struct Cyc_Absyn_PtrAtts _TE;
  struct _tuple24 _TF;
  void * * _T10;
  struct Cyc_Absyn_ArrayInfo _T11;
  struct Cyc_Absyn_Tqual * _T12;
  struct Cyc_Absyn_ArrayInfo _T13;
  void * * _T14;
  struct Cyc_Absyn_ArrayInfo _T15;
  struct _tuple24 _T16;
  _T0 = topt;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TL36E;
  }else { goto _TL370;
  }
  _TL370: { struct _tuple24 _T17;
    _T17.f0 = 0;
    _T17.f1 = 0;
    _T17.f2 = 0;
    _T2 = _T17;
  }return _T2;
  _TL36E: _T3 = topt;
  _T4 = *_T3;
  { void * _T17 = Cyc_Absyn_compress(_T4);
    struct Cyc_Absyn_ArrayInfo _T18;
    struct Cyc_Absyn_PtrInfo _T19;
    _T5 = (int *)_T17;
    _T6 = *_T5;
    switch (_T6) {
    case 4: 
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T1A = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T17;
	_T19 = _T1A->f1;
      }{ struct Cyc_Absyn_PtrInfo x = _T19;
	{ struct _tuple24 _T1A;
	  { void * * _T1B = _cycalloc(sizeof(void *));
	    _T9 = x;
	    *_T1B = _T9.elt_type;
	    _T8 = (void * *)_T1B;
	  }_T1A.f0 = _T8;
	  { struct Cyc_Absyn_Tqual * _T1B = _cycalloc(sizeof(struct Cyc_Absyn_Tqual));
	    _TB = x;
	    *_T1B = _TB.elt_tq;
	    _TA = (struct Cyc_Absyn_Tqual *)_T1B;
	  }_T1A.f1 = _TA;
	  { void * * _T1B = _cycalloc(sizeof(void *));
	    _TD = x;
	    _TE = _TD.ptr_atts;
	    *_T1B = _TE.zero_term;
	    _TC = (void * *)_T1B;
	  }_T1A.f2 = _TC;
	  _T7 = _T1A;
	}return _T7;
      }
    case 5: 
      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T1A = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T17;
	_T18 = _T1A->f1;
      }{ struct Cyc_Absyn_ArrayInfo x = _T18;
	{ struct _tuple24 _T1A;
	  { void * * _T1B = _cycalloc(sizeof(void *));
	    _T11 = x;
	    *_T1B = _T11.elt_type;
	    _T10 = (void * *)_T1B;
	  }_T1A.f0 = _T10;
	  { struct Cyc_Absyn_Tqual * _T1B = _cycalloc(sizeof(struct Cyc_Absyn_Tqual));
	    _T13 = x;
	    *_T1B = _T13.tq;
	    _T12 = (struct Cyc_Absyn_Tqual *)_T1B;
	  }_T1A.f1 = _T12;
	  { void * * _T1B = _cycalloc(sizeof(void *));
	    _T15 = x;
	    *_T1B = _T15.zero_term;
	    _T14 = (void * *)_T1B;
	  }_T1A.f2 = _T14;
	  _TF = _T1A;
	}return _TF;
      }
    default: 
      { struct _tuple24 _T1A;
	_T1A.f0 = 0;
	_T1A.f1 = 0;
	_T1A.f2 = 0;
	_T16 = _T1A;
      }return _T16;
    }
    ;
  }
}
static void * Cyc_Tcexp_tcComprehension(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
					void * * topt,struct Cyc_Absyn_Vardecl * vd,
					struct Cyc_Absyn_Exp * bound,struct Cyc_Absyn_Exp * body,
					long * is_zero_term) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  int * _T3;
  int _T4;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5;
  void * _T6;
  int * _T7;
  int _T8;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  enum Cyc_Tcenv_NewStatus _TD;
  int _TE;
  void * _TF;
  struct Cyc_Absyn_Exp * _T10;
  struct Cyc_Absyn_Exp * _T11;
  struct Cyc_Absyn_Exp * _T12;
  long _T13;
  struct Cyc_Warn_String_Warn_Warg_struct _T14;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T15;
  struct Cyc_Absyn_Exp * _T16;
  struct Cyc_Absyn_Exp * _T17;
  unsigned int _T18;
  struct _fat_ptr _T19;
  struct Cyc_Absyn_Vardecl * _T1A;
  struct Cyc_Absyn_Tqual _T1B;
  long _T1C;
  struct Cyc_Warn_String_Warn_Warg_struct _T1D;
  int (* _T1E)(struct _fat_ptr);
  void * (* _T1F)(struct _fat_ptr);
  struct _fat_ptr _T20;
  struct Cyc_Tcenv_Tenv * _T21;
  struct Cyc_Tcenv_Fenv * _T22;
  struct Cyc_Absyn_Exp * _T23;
  unsigned int _T24;
  struct Cyc_List_List * _T25;
  void * _T26;
  struct Cyc_Absyn_Exp * _T27;
  struct Cyc_Tcenv_Tenv * _T28;
  struct Cyc_Tcenv_Fenv * _T29;
  long _T2A;
  struct Cyc_Warn_String_Warn_Warg_struct _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  unsigned int _T2D;
  struct _fat_ptr _T2E;
  long _T2F;
  struct Cyc_Warn_String_Warn_Warg_struct _T30;
  struct Cyc_Absyn_Exp * _T31;
  unsigned int _T32;
  struct _fat_ptr _T33;
  void * * _T34;
  void * _T35;
  long _T36;
  struct Cyc_Absyn_Exp * _T37;
  struct Cyc_Absyn_Exp * _T38;
  long * _T39;
  struct Cyc_Absyn_Exp * _T3A;
  unsigned int _T3B;
  struct Cyc_List_List * _T3C;
  struct Cyc_Absyn_Exp * _T3D;
  void * _T3E;
  void * _T3F;
  struct Cyc_Absyn_Exp * _T40;
  void * _T41;
  struct Cyc_Absyn_Tqual _T42;
  struct Cyc_Absyn_Tqual * _T43;
  struct Cyc_Absyn_Exp * _T44;
  void * _T45;
  void * * _T46;
  void * _T47;
  Cyc_Tcexp_tcExp(te,0,bound);
  _T0 = bound;
  _T1 = _T0->topt;
  _T2 = _check_null(_T1);
  { void * _T48 = Cyc_Absyn_compress(_T2);
    void * _T49;
    _T3 = (int *)_T48;
    _T4 = *_T3;
    if (_T4 != 0) { goto _TL372;
    }
    _T5 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T48;
    _T6 = _T5->f1;
    _T7 = (int *)_T6;
    _T8 = *_T7;
    if (_T8 != 5) { goto _TL374;
    }
    _T9 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T48;
    _TA = _T9->f2;
    if (_TA == 0) { goto _TL376;
    }
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T4A = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T48;
      _TB = _T4A->f2;
      { struct Cyc_List_List _T4B = *_TB;
	_TC = _T4B.hd;
	_T49 = (void *)_TC;
      }
    }{ void * t = _T49;
      _TD = Cyc_Tcenv_new_status(te);
      _TE = (int)_TD;
      if (_TE != 2) { goto _TL378;
      }
      _TF = Cyc_Absyn_uint_type;
      _T10 = Cyc_Absyn_valueof_exp(t,0U);
      { struct Cyc_Absyn_Exp * b = Cyc_Absyn_cast_exp(_TF,_T10,0,1U,0U);
	_T11 = b;
	_T12 = bound;
	_T11->topt = _T12->topt;
	bound = b;
      }goto _TL379;
      _TL378: _TL379: goto _LL0;
    }_TL376: goto _LL3;
    _TL374: goto _LL3;
    _TL372: _LL3: _T13 = Cyc_Tcutil_coerce_uint_type(bound);
    if (_T13) { goto _TL37A;
    }else { goto _TL37C;
    }
    _TL37C: { struct Cyc_Warn_String_Warn_Warg_struct _T4A;
      _T4A.tag = 0;
      _T4A.f1 = _tag_fat("expecting unsigned int, found ",sizeof(char),31U);
      _T14 = _T4A;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T4A = _T14;
      { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T4B;
	_T4B.tag = 3;
	_T16 = bound;
	_T4B.f1 = _T16->topt;
	_T15 = _T4B;
      }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T4B = _T15;
	void * _T4C[2];
	_T4C[0] = &_T4A;
	_T4C[1] = &_T4B;
	_T17 = bound;
	_T18 = _T17->loc;
	_T19 = _tag_fat(_T4C,sizeof(void *),2);
	Cyc_Warn_err2(_T18,_T19);
      }
    }goto _TL37B;
    _TL37A: _TL37B: _LL0: ;
  }_T1A = vd;
  _T1B = _T1A->tq;
  _T1C = _T1B.real_const;
  if (_T1C) { goto _TL37D;
  }else { goto _TL37F;
  }
  _TL37F: { struct Cyc_Warn_String_Warn_Warg_struct _T48;
    _T48.tag = 0;
    _T48.f1 = _tag_fat("comprehension index variable is not declared const!",
		       sizeof(char),52U);
    _T1D = _T48;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T48 = _T1D;
    void * _T49[1];
    _T49[0] = &_T48;
    _T1F = Cyc_Warn_impos2;
    { int (* _T4A)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T1F;
      _T1E = _T4A;
    }_T20 = _tag_fat(_T49,sizeof(void *),1);
    _T1E(_T20);
  }goto _TL37E;
  _TL37D: _TL37E: _T21 = te;
  _T22 = _T21->le;
  if (_T22 == 0) { goto _TL380;
  }
  te = Cyc_Tcenv_new_block(loc,te);
  goto _TL381;
  _TL380: _TL381: { struct _tuple24 _T48 = Cyc_Tcexp_ptrEltAtts(topt);
    void * * _T49;
    struct Cyc_Absyn_Tqual * _T4A;
    void * * _T4B;
    _T4B = _T48.f0;
    _T4A = _T48.f1;
    _T49 = _T48.f2;
    { void * * topt2 = _T4B;
      struct Cyc_Absyn_Tqual * tqopt = _T4A;
      void * * ztopt = _T49;
      void * t = Cyc_Tcexp_tcExp(te,topt2,body);
      _T23 = body;
      _T24 = _T23->loc;
      _T25 = Cyc_Tcenv_curr_aquals_bounds(te);
      _T26 = t;
      _T27 = body;
      Cyc_Tcexp_check_consume(_T24,_T25,_T26,_T27);
      _T28 = te;
      _T29 = _T28->le;
      if (_T29 != 0) { goto _TL382;
      }
      _T2A = Cyc_Tcutil_is_const_exp(bound);
      if (_T2A) { goto _TL384;
      }else { goto _TL386;
      }
      _TL386: { struct Cyc_Warn_String_Warn_Warg_struct _T4C;
	_T4C.tag = 0;
	_T4C.f1 = _tag_fat("bound is not constant",sizeof(char),22U);
	_T2B = _T4C;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T4C = _T2B;
	void * _T4D[1];
	_T4D[0] = &_T4C;
	_T2C = bound;
	_T2D = _T2C->loc;
	_T2E = _tag_fat(_T4D,sizeof(void *),1);
	Cyc_Warn_err2(_T2D,_T2E);
      }goto _TL385;
      _TL384: _TL385: _T2F = Cyc_Tcutil_is_const_exp(body);
      if (_T2F) { goto _TL387;
      }else { goto _TL389;
      }
      _TL389: { struct Cyc_Warn_String_Warn_Warg_struct _T4C;
	_T4C.tag = 0;
	_T4C.f1 = _tag_fat("body is not constant",sizeof(char),21U);
	_T30 = _T4C;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T4C = _T30;
	void * _T4D[1];
	_T4D[0] = &_T4C;
	_T31 = body;
	_T32 = _T31->loc;
	_T33 = _tag_fat(_T4D,sizeof(void *),1);
	Cyc_Warn_err2(_T32,_T33);
      }goto _TL388;
      _TL387: _TL388: goto _TL383;
      _TL382: _TL383: if (ztopt == 0) { goto _TL38A;
      }
      _T34 = ztopt;
      _T35 = *_T34;
      _T36 = Cyc_Tcutil_force_type2bool(0,_T35);
      if (! _T36) { goto _TL38A;
      }
      { struct Cyc_Absyn_Exp * e1 = Cyc_Absyn_uint_exp(1U,0U);
	_T37 = e1;
	_T37->topt = Cyc_Absyn_uint_type;
	bound = Cyc_Absyn_add_exp(bound,e1,0U);
	_T38 = bound;
	_T38->topt = Cyc_Absyn_uint_type;
	_T39 = is_zero_term;
	*_T39 = 1;
      }goto _TL38B;
      _TL38A: _TL38B: _T3A = body;
      _T3B = _T3A->loc;
      _T3C = Cyc_Tcenv_curr_aquals_bounds(te);
      _T3D = body;
      _T3E = _T3D->topt;
      _T3F = _check_null(_T3E);
      _T40 = body;
      Cyc_Tcexp_check_consume(_T3B,_T3C,_T3F,_T40);
      _T41 = t;
      if (tqopt != 0) { goto _TL38C;
      }
      _T42 = Cyc_Absyn_empty_tqual(0U);
      goto _TL38D;
      _TL38C: _T43 = tqopt;
      _T42 = *_T43;
      _TL38D: _T44 = bound;
      if (ztopt != 0) { goto _TL38E;
      }
      _T45 = Cyc_Absyn_false_type;
      goto _TL38F;
      _TL38E: _T46 = ztopt;
      _T45 = *_T46;
      _TL38F: _T47 = Cyc_Absyn_array_type(_T41,_T42,_T44,_T45,0U);
      return _T47;
    }
  }
}
static void * Cyc_Tcexp_tcComprehensionNoinit(struct Cyc_Tcenv_Tenv * te,
					      unsigned int loc,void * * topt,
					      struct Cyc_Absyn_Exp * bound,
					      void * t,long * is_zero_term) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  int * _T3;
  int _T4;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5;
  void * _T6;
  int * _T7;
  int _T8;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  enum Cyc_Tcenv_NewStatus _TD;
  int _TE;
  void * _TF;
  struct Cyc_Absyn_Exp * _T10;
  struct Cyc_Absyn_Exp * _T11;
  struct Cyc_Absyn_Exp * _T12;
  long _T13;
  struct Cyc_Warn_String_Warn_Warg_struct _T14;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T15;
  struct Cyc_Absyn_Exp * _T16;
  struct Cyc_Absyn_Exp * _T17;
  unsigned int _T18;
  struct _fat_ptr _T19;
  unsigned int _T1A;
  struct Cyc_Tcenv_Tenv * _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_Absyn_Kind * _T1D;
  struct Cyc_Absyn_Kind * _T1E;
  void * _T1F;
  void * * _T20;
  void * _T21;
  void * _T22;
  struct Cyc_Tcenv_Tenv * _T23;
  struct Cyc_Tcenv_Fenv * _T24;
  long _T25;
  struct Cyc_Warn_String_Warn_Warg_struct _T26;
  struct Cyc_Absyn_Exp * _T27;
  unsigned int _T28;
  struct _fat_ptr _T29;
  void * * _T2A;
  void * _T2B;
  long _T2C;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D;
  unsigned int _T2E;
  struct _fat_ptr _T2F;
  void * _T30;
  struct Cyc_Absyn_Tqual _T31;
  struct Cyc_Absyn_Tqual * _T32;
  struct Cyc_Absyn_Exp * _T33;
  void * _T34;
  void * * _T35;
  void * _T36;
  Cyc_Tcexp_tcExp(te,0,bound);
  _T0 = bound;
  _T1 = _T0->topt;
  _T2 = _check_null(_T1);
  { void * _T37 = Cyc_Absyn_compress(_T2);
    void * _T38;
    _T3 = (int *)_T37;
    _T4 = *_T3;
    if (_T4 != 0) { goto _TL390;
    }
    _T5 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T37;
    _T6 = _T5->f1;
    _T7 = (int *)_T6;
    _T8 = *_T7;
    if (_T8 != 5) { goto _TL392;
    }
    _T9 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T37;
    _TA = _T9->f2;
    if (_TA == 0) { goto _TL394;
    }
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T39 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T37;
      _TB = _T39->f2;
      { struct Cyc_List_List _T3A = *_TB;
	_TC = _T3A.hd;
	_T38 = (void *)_TC;
      }
    }{ void * t = _T38;
      _TD = Cyc_Tcenv_new_status(te);
      _TE = (int)_TD;
      if (_TE != 2) { goto _TL396;
      }
      _TF = Cyc_Absyn_uint_type;
      _T10 = Cyc_Absyn_valueof_exp(t,0U);
      { struct Cyc_Absyn_Exp * b = Cyc_Absyn_cast_exp(_TF,_T10,0,1U,0U);
	_T11 = b;
	_T12 = bound;
	_T11->topt = _T12->topt;
	bound = b;
      }goto _TL397;
      _TL396: _TL397: goto _LL0;
    }_TL394: goto _LL3;
    _TL392: goto _LL3;
    _TL390: _LL3: _T13 = Cyc_Tcutil_coerce_uint_type(bound);
    if (_T13) { goto _TL398;
    }else { goto _TL39A;
    }
    _TL39A: { struct Cyc_Warn_String_Warn_Warg_struct _T39;
      _T39.tag = 0;
      _T39.f1 = _tag_fat("expecting unsigned int, found ",sizeof(char),31U);
      _T14 = _T39;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T39 = _T14;
      { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3A;
	_T3A.tag = 3;
	_T16 = bound;
	_T3A.f1 = _T16->topt;
	_T15 = _T3A;
      }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3A = _T15;
	void * _T3B[2];
	_T3B[0] = &_T39;
	_T3B[1] = &_T3A;
	_T17 = bound;
	_T18 = _T17->loc;
	_T19 = _tag_fat(_T3B,sizeof(void *),2);
	Cyc_Warn_err2(_T18,_T19);
      }
    }goto _TL399;
    _TL398: _TL399: _LL0: ;
  }{ struct _tuple24 _T37 = Cyc_Tcexp_ptrEltAtts(topt);
    void * * _T38;
    struct Cyc_Absyn_Tqual * _T39;
    void * * _T3A;
    _T3A = _T37.f0;
    _T39 = _T37.f1;
    _T38 = _T37.f2;
    { void * * topt2 = _T3A;
      struct Cyc_Absyn_Tqual * tqopt = _T39;
      void * * ztopt = _T38;
      _T1A = loc;
      _T1B = te;
      _T1C = Cyc_Tcenv_lookup_type_vars(te);
      _T1D = &Cyc_Kinds_mk;
      _T1E = (struct Cyc_Absyn_Kind *)_T1D;
      _T1F = t;
      Cyc_Tctyp_check_type(_T1A,_T1B,_T1C,_T1E,1,1,_T1F);
      if (topt2 == 0) { goto _TL39B;
      }
      _T20 = topt2;
      _T21 = *_T20;
      _T22 = t;
      Cyc_Unify_unify(_T21,_T22);
      goto _TL39C;
      _TL39B: _TL39C: _T23 = te;
      _T24 = _T23->le;
      if (_T24 != 0) { goto _TL39D;
      }
      _T25 = Cyc_Tcutil_is_const_exp(bound);
      if (_T25) { goto _TL39D;
      }else { goto _TL39F;
      }
      _TL39F: { struct Cyc_Warn_String_Warn_Warg_struct _T3B;
	_T3B.tag = 0;
	_T3B.f1 = _tag_fat("bound is not constant",sizeof(char),22U);
	_T26 = _T3B;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3B = _T26;
	void * _T3C[1];
	_T3C[0] = &_T3B;
	_T27 = bound;
	_T28 = _T27->loc;
	_T29 = _tag_fat(_T3C,sizeof(void *),1);
	Cyc_Warn_err2(_T28,_T29);
      }goto _TL39E;
      _TL39D: _TL39E: if (ztopt == 0) { goto _TL3A0;
      }
      _T2A = ztopt;
      _T2B = *_T2A;
      _T2C = Cyc_Tcutil_force_type2bool(0,_T2B);
      if (! _T2C) { goto _TL3A0;
      }
      { struct Cyc_Warn_String_Warn_Warg_struct _T3B;
	_T3B.tag = 0;
	_T3B.f1 = _tag_fat("non-initializing comprehensions do not currently support @zeroterm arrays",
			   sizeof(char),74U);
	_T2D = _T3B;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3B = _T2D;
	void * _T3C[1];
	_T3C[0] = &_T3B;
	_T2E = loc;
	_T2F = _tag_fat(_T3C,sizeof(void *),1);
	Cyc_Warn_err2(_T2E,_T2F);
      }goto _TL3A1;
      _TL3A0: _TL3A1: _T30 = t;
      if (tqopt != 0) { goto _TL3A2;
      }
      _T31 = Cyc_Absyn_empty_tqual(0U);
      goto _TL3A3;
      _TL3A2: _T32 = tqopt;
      _T31 = *_T32;
      _TL3A3: _T33 = bound;
      if (ztopt != 0) { goto _TL3A4;
      }
      _T34 = Cyc_Absyn_false_type;
      goto _TL3A5;
      _TL3A4: _T35 = ztopt;
      _T34 = *_T35;
      _TL3A5: _T36 = Cyc_Absyn_array_type(_T30,_T31,_T33,_T34,0U);
      return _T36;
    }
  }
}
static long Cyc_Tcexp_ensure_typqual_nothrow(void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T5;
  struct Cyc_Absyn_FnInfo * _T6;
  int (* _T7)(void *,void *);
  struct Cyc_Absyn_FnInfo * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct * _TA;
  struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct * _TB;
  void * _TC;
  long _TD;
  void * _TE;
  void * _TF;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T10;
  struct Cyc_Absyn_PtrInfo * _T11;
  struct Cyc_Absyn_PtrInfo * _T12;
  void * _T13;
  long _T14;
  void * _T15;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 6: 
    _T3 = t;
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T16 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3;
      _T4 = t;
      _T5 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T4;
      _T6 = &_T5->f1;
      _T15 = (struct Cyc_Absyn_FnInfo *)_T6;
    }{ struct Cyc_Absyn_FnInfo * i = _T15;
      _T7 = Cyc_Atts_attribute_cmp;
      _T8 = i;
      _T9 = _T8->attributes;
      _TA = &Cyc_Atts_No_throw_att_val;
      _TB = (struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct *)_TA;
      _TC = (void *)_TB;
      _TD = Cyc_List_mem(_T7,_T9,_TC);
      return _TD;
    }
  case 4: 
    _TE = t;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T16 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TE;
      _TF = t;
      _T10 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TF;
      _T11 = &_T10->f1;
      _T15 = (struct Cyc_Absyn_PtrInfo *)_T11;
    }{ struct Cyc_Absyn_PtrInfo * pi = (struct Cyc_Absyn_PtrInfo *)_T15;
      _T12 = pi;
      _T13 = _T12->elt_type;
      _T14 = Cyc_Tcexp_ensure_typqual_nothrow(_T13);
      return _T14;
    }
  default: 
    return 1;
  }
  ;
}
static long Cyc_Tcexp_ensure_nothrow_initializer(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  long _T3;
  struct Cyc_Absyn_Exp * _T4;
  void * _T5;
  void * _T6;
  long _T7;
  _T0 = e;
  { void * _T8 = _T0->r;
    struct Cyc_Absyn_Exp * _T9;
    _T1 = (int *)_T8;
    _T2 = *_T1;
    if (_T2 != 14) { goto _TL3A7;
    }
    { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _TA = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T8;
      _T9 = _TA->f2;
    }{ struct Cyc_Absyn_Exp * e1 = _T9;
      _T3 = Cyc_Tcexp_ensure_nothrow_initializer(e1);
      return _T3;
    }_TL3A7: _T4 = e;
    _T5 = _T4->topt;
    _T6 = _check_null(_T5);
    _T7 = Cyc_Tcexp_ensure_typqual_nothrow(_T6);
    return _T7;
    ;
  }
}
 struct _tuple25 {
  struct Cyc_Absyn_Aggrfield * f0;
  struct Cyc_Absyn_Exp * f1;
};
static void * Cyc_Tcexp_tcAggregate(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				    void * * topt,struct _tuple1 * * tn,struct Cyc_List_List * * ts,
				    struct Cyc_List_List * args,struct Cyc_Absyn_Aggrdecl * * ad_opt) {
  struct Cyc_Absyn_Aggrdecl * * _T0;
  struct Cyc_Absyn_Aggrdecl * _T1;
  struct Cyc_Absyn_Aggrdecl * * _T2;
  struct Cyc_Absyn_Aggrdecl * * _T3;
  struct _handler_cons * _T4;
  int _T5;
  struct Cyc_Tcenv_Tenv * _T6;
  unsigned int _T7;
  struct _tuple1 * * _T8;
  struct _tuple1 * _T9;
  struct Cyc_Absyn_Aggrdecl * * _TA;
  void * _TB;
  struct Cyc_Dict_Absent_exn_struct * _TC;
  char * _TD;
  char * _TE;
  struct Cyc_Warn_String_Warn_Warg_struct _TF;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T10;
  struct _tuple1 * * _T11;
  unsigned int _T12;
  struct _fat_ptr _T13;
  void * _T14;
  void * * _T15;
  struct Cyc_Absyn_Aggrdecl * * _T16;
  struct _tuple1 * * _T17;
  struct Cyc_Absyn_Aggrdecl * _T18;
  struct Cyc_Absyn_Aggrdecl * _T19;
  struct Cyc_Absyn_AggrdeclImpl * _T1A;
  void * _T1B;
  struct Cyc_Warn_String_Warn_Warg_struct _T1C;
  struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T1D;
  struct Cyc_Tcenv_Tenv * _T1E;
  unsigned int _T1F;
  struct _fat_ptr _T20;
  struct Cyc_Tcenv_Tenv * _T21;
  enum Cyc_Tcenv_NewStatus _T22;
  int _T23;
  struct _tuple17 _T24;
  struct Cyc_List_List * (* _T25)(struct _tuple18 * (*)(struct _tuple17 *,
							struct Cyc_Absyn_Tvar *),
				  struct _tuple17 *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T26)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct _tuple18 * (* _T27)(struct _tuple17 *,struct Cyc_Absyn_Tvar *);
  struct _tuple17 * _T28;
  struct Cyc_Absyn_Aggrdecl * _T29;
  struct Cyc_List_List * _T2A;
  struct Cyc_List_List * (* _T2B)(struct _tuple18 * (*)(struct _tuple17 *,
							struct Cyc_Absyn_Tvar *),
				  struct _tuple17 *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T2C)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct _tuple18 * (* _T2D)(struct _tuple17 *,struct Cyc_Absyn_Tvar *);
  struct _tuple17 * _T2E;
  struct Cyc_Absyn_Aggrdecl * _T2F;
  struct Cyc_Absyn_AggrdeclImpl * _T30;
  struct Cyc_Absyn_AggrdeclImpl * _T31;
  struct Cyc_List_List * _T32;
  struct Cyc_List_List * (* _T33)(void * (*)(struct _tuple18 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T34)(void * (*)(void *),struct Cyc_List_List *);
  void * (* _T35)(struct _tuple18 *);
  void * (* _T36)(struct _tuple0 *);
  struct Cyc_List_List * _T37;
  struct Cyc_List_List * (* _T38)(void * (*)(struct _tuple18 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T39)(void * (*)(void *),struct Cyc_List_List *);
  void * (* _T3A)(struct _tuple18 *);
  void * (* _T3B)(struct _tuple0 *);
  struct Cyc_List_List * _T3C;
  struct Cyc_Absyn_Aggrdecl * _T3D;
  struct Cyc_Absyn_AggrdeclImpl * _T3E;
  struct Cyc_Absyn_AggrdeclImpl * _T3F;
  struct Cyc_List_List * _T40;
  struct _tuple0 * _T41;
  struct Cyc_List_List * _T42;
  struct Cyc_List_List * _T43;
  void * _T44;
  struct _tuple0 * _T45;
  struct _tuple0 _T46;
  void * _T47;
  struct Cyc_List_List * _T48;
  struct Cyc_List_List * _T49;
  void * _T4A;
  struct _tuple0 * _T4B;
  struct _tuple0 _T4C;
  void * _T4D;
  struct Cyc_List_List * _T4E;
  void * * _T4F;
  int * _T50;
  unsigned int _T51;
  struct Cyc_Absyn_Vardecl * _T52;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T53;
  void * _T54;
  int * _T55;
  int _T56;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T57;
  void * _T58;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T59;
  union Cyc_Absyn_AggrInfo _T5A;
  struct _union_AggrInfo_KnownAggr _T5B;
  unsigned int _T5C;
  void * _T5D;
  union Cyc_Absyn_AggrInfo _T5E;
  struct _union_AggrInfo_KnownAggr _T5F;
  struct Cyc_Absyn_Aggrdecl * * _T60;
  struct Cyc_Absyn_Aggrdecl * _T61;
  struct Cyc_Absyn_Aggrdecl * * _T62;
  struct Cyc_Absyn_Aggrdecl * _T63;
  struct Cyc_List_List * _T64;
  void * _T65;
  struct Cyc_List_List * _T66;
  void * _T67;
  struct Cyc_List_List * _T68;
  struct Cyc_List_List * _T69;
  union Cyc_Absyn_AggrInfo _T6A;
  struct Cyc_List_List * _T6B;
  union Cyc_Absyn_AggrInfo _T6C;
  struct Cyc_List_List * _T6D;
  struct Cyc_List_List * * _T6E;
  unsigned int _T6F;
  struct Cyc_Tcenv_Tenv * _T70;
  struct Cyc_List_List * _T71;
  struct Cyc_Absyn_Kind * _T72;
  struct Cyc_Absyn_Kind * _T73;
  struct Cyc_List_List * _T74;
  void * _T75;
  unsigned int _T76;
  struct Cyc_List_List * _T77;
  void * _T78;
  struct Cyc_List_List * _T79;
  void * _T7A;
  struct Cyc_List_List * _T7B;
  void * _T7C;
  long _T7D;
  struct Cyc_Warn_String_Warn_Warg_struct _T7E;
  unsigned int _T7F;
  struct _fat_ptr _T80;
  struct Cyc_List_List * _T81;
  struct Cyc_List_List * _T82;
  struct Cyc_Warn_String_Warn_Warg_struct _T83;
  unsigned int _T84;
  struct _fat_ptr _T85;
  struct Cyc_List_List * * _T86;
  struct _RegionHandle * _T87;
  unsigned int _T88;
  struct Cyc_List_List * _T89;
  struct Cyc_Absyn_Aggrdecl * _T8A;
  enum Cyc_Absyn_AggrKind _T8B;
  struct Cyc_Absyn_Aggrdecl * _T8C;
  struct Cyc_Absyn_AggrdeclImpl * _T8D;
  struct Cyc_List_List * _T8E;
  struct Cyc_Tcenv_Tenv * _T8F;
  struct Cyc_Tcenv_Fenv * _T90;
  struct Cyc_Absyn_Aggrdecl * _T91;
  enum Cyc_Absyn_AggrKind _T92;
  int _T93;
  struct Cyc_List_List * _T94;
  void * _T95;
  struct Cyc_Absyn_Aggrdecl * _T96;
  struct Cyc_Absyn_AggrdeclImpl * _T97;
  struct Cyc_Absyn_Aggrfield * _T98;
  struct Cyc_List_List * _T99;
  void * _T9A;
  struct Cyc_Absyn_Aggrfield * _T9B;
  struct Cyc_Warn_String_Warn_Warg_struct _T9C;
  unsigned int _T9D;
  struct _fat_ptr _T9E;
  struct Cyc_List_List * _T9F;
  void * _TA0;
  struct Cyc_List_List * _TA1;
  struct Cyc_Absyn_Aggrfield * _TA2;
  void * _TA3;
  struct Cyc_Tcenv_Tenv * _TA4;
  void * * _TA5;
  struct Cyc_Absyn_Exp * _TA6;
  struct Cyc_List_List * _TA7;
  struct Cyc_Absyn_Exp * _TA8;
  void * _TA9;
  long * _TAA;
  long _TAB;
  struct Cyc_Warn_String_Warn_Warg_struct _TAC;
  struct Cyc_Warn_String_Warn_Warg_struct _TAD;
  struct Cyc_Absyn_Aggrfield * _TAE;
  struct _fat_ptr * _TAF;
  struct Cyc_Warn_String_Warn_Warg_struct _TB0;
  struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _TB1;
  struct Cyc_Warn_String_Warn_Warg_struct _TB2;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TB3;
  struct Cyc_Warn_String_Warn_Warg_struct _TB4;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TB5;
  struct Cyc_Absyn_Exp * _TB6;
  unsigned int _TB7;
  struct _fat_ptr _TB8;
  int (* _TB9)(void *,void *);
  struct Cyc_Absyn_Aggrfield * _TBA;
  struct Cyc_List_List * _TBB;
  struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct * _TBC;
  struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct * _TBD;
  void * _TBE;
  long _TBF;
  long _TC0;
  struct Cyc_Warn_String_Warn_Warg_struct _TC1;
  struct Cyc_Warn_String_Warn_Warg_struct _TC2;
  struct Cyc_Absyn_Aggrfield * _TC3;
  struct _fat_ptr * _TC4;
  struct Cyc_Warn_String_Warn_Warg_struct _TC5;
  struct Cyc_Absyn_Exp * _TC6;
  unsigned int _TC7;
  struct _fat_ptr _TC8;
  struct Cyc_List_List * _TC9;
  struct _RegionHandle * _TCA;
  struct Cyc_List_List * _TCB;
  struct Cyc_Absyn_Aggrdecl * _TCC;
  struct Cyc_Absyn_AggrdeclImpl * _TCD;
  struct Cyc_Absyn_AggrdeclImpl * _TCE;
  struct Cyc_List_List * _TCF;
  struct Cyc_List_List * _TD0;
  int * _TD1;
  unsigned int _TD2;
  void * _TD3;
  void * _TD4;
  struct Cyc_List_List * _TD5;
  void * _TD6;
  long _TD7;
  long _TD8;
  struct Cyc_Warn_String_Warn_Warg_struct _TD9;
  unsigned int _TDA;
  struct _fat_ptr _TDB;
  void * _TDC;
  struct Cyc_List_List * _TDD;
  struct Cyc_List_List * _TDE;
  int (* _TDF)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TE0)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TE1;
  struct _fat_ptr _TE2;
  struct Cyc_List_List * _TE3;
  void * _TE4;
  struct Cyc_Absyn_Aggrdecl * * adptr;
  struct Cyc_Absyn_Aggrdecl * ad;
  _T0 = ad_opt;
  _T1 = *_T0;
  if (_T1 == 0) { goto _TL3A9;
  }
  _T2 = ad_opt;
  ad = *_T2;
  { struct Cyc_Absyn_Aggrdecl * * _TE5 = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl *));
    *_TE5 = ad;
    _T3 = (struct Cyc_Absyn_Aggrdecl * *)_TE5;
  }adptr = _T3;
  goto _TL3AA;
  _TL3A9: { struct _handler_cons _TE5;
    _T4 = &_TE5;
    _push_handler(_T4);
    { int _TE6 = 0;
      _T5 = setjmp(_TE5.handler);
      if (! _T5) { goto _TL3AB;
      }
      _TE6 = 1;
      goto _TL3AC;
      _TL3AB: _TL3AC: if (_TE6) { goto _TL3AD;
      }else { goto _TL3AF;
      }
      _TL3AF: _T6 = te;
      _T7 = loc;
      _T8 = tn;
      _T9 = *_T8;
      adptr = Cyc_Tcenv_lookup_aggrdecl(_T6,_T7,_T9);
      _TA = adptr;
      ad = *_TA;
      _pop_handler();
      goto _TL3AE;
      _TL3AD: _TB = Cyc_Core_get_exn_thrown();
      { void * _TE7 = (void *)_TB;
	void * _TE8;
	_TC = (struct Cyc_Dict_Absent_exn_struct *)_TE7;
	_TD = _TC->tag;
	_TE = Cyc_Dict_Absent;
	if (_TD != _TE) { goto _TL3B0;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _TE9;
	  _TE9.tag = 0;
	  _TE9.f1 = _tag_fat("unbound struct/union name ",sizeof(char),27U);
	  _TF = _TE9;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _TE9 = _TF;
	  { struct Cyc_Warn_Qvar_Warn_Warg_struct _TEA;
	    _TEA.tag = 1;
	    _T11 = tn;
	    _TEA.f1 = *_T11;
	    _T10 = _TEA;
	  }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _TEA = _T10;
	    void * _TEB[2];
	    _TEB[0] = &_TE9;
	    _TEB[1] = &_TEA;
	    _T12 = loc;
	    _T13 = _tag_fat(_TEB,sizeof(void *),2);
	    Cyc_Warn_err2(_T12,_T13);
	  }
	}if (topt == 0) { goto _TL3B2;
	}
	_T15 = topt;
	_T14 = *_T15;
	goto _TL3B3;
	_TL3B2: _T14 = Cyc_Absyn_void_type;
	_TL3B3: return _T14;
	_TL3B0: _TE8 = _TE7;
	{ void * exn = _TE8;
	  _rethrow(exn);
	};
      }_TL3AE: ;
    }
  }_T16 = ad_opt;
  *_T16 = ad;
  _T17 = tn;
  _T18 = ad;
  *_T17 = _T18->name;
  _TL3AA: _T19 = ad;
  _T1A = _T19->impl;
  if (_T1A != 0) { goto _TL3B4;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _TE5;
    _TE5.tag = 0;
    _TE5.f1 = _tag_fat("can't construct abstract ",sizeof(char),26U);
    _T1C = _TE5;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _TE5 = _T1C;
    { struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _TE6;
      _TE6.tag = 6;
      _TE6.f1 = ad;
      _T1D = _TE6;
    }{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _TE6 = _T1D;
      void * _TE7[2];
      _TE7[0] = &_TE5;
      _TE7[1] = &_TE6;
      _T1E = te;
      _T1F = loc;
      _T20 = _tag_fat(_TE7,sizeof(void *),2);
      _T1B = Cyc_Tcexp_expr_err(_T1E,_T1F,0,_T20);
    }
  }return _T1B;
  _TL3B4: _T22 = Cyc_Tcenv_new_status(te);
  _T23 = (int)_T22;
  if (_T23 != 1) { goto _TL3B6;
  }
  _T21 = Cyc_Tcenv_set_new_status(2U,te);
  goto _TL3B7;
  _TL3B6: _T21 = te;
  _TL3B7: { struct Cyc_Tcenv_Tenv * te2 = _T21;
    { struct _tuple17 _TE5;
      _TE5.f0 = Cyc_Tcenv_lookup_type_vars(te2);
      _TE5.f1 = Cyc_Core_heap_region;
      _T24 = _TE5;
    }{ struct _tuple17 env = _T24;
      _T26 = Cyc_List_map_c;
      { struct Cyc_List_List * (* _TE5)(struct _tuple18 * (*)(struct _tuple17 *,
							      struct Cyc_Absyn_Tvar *),
					struct _tuple17 *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple18 * (*)(struct _tuple17 *,
																      struct Cyc_Absyn_Tvar *),
														struct _tuple17 *,
														struct Cyc_List_List *))_T26;
	_T25 = _TE5;
      }_T27 = Cyc_Tcutil_r_make_inst_var;
      _T28 = &env;
      _T29 = ad;
      _T2A = _T29->tvs;
      { struct Cyc_List_List * all_inst = _T25(_T27,_T28,_T2A);
	_T2C = Cyc_List_map_c;
	{ struct Cyc_List_List * (* _TE5)(struct _tuple18 * (*)(struct _tuple17 *,
								struct Cyc_Absyn_Tvar *),
					  struct _tuple17 *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple18 * (*)(struct _tuple17 *,
																	struct Cyc_Absyn_Tvar *),
														  struct _tuple17 *,
														  struct Cyc_List_List *))_T2C;
	  _T2B = _TE5;
	}_T2D = Cyc_Tcutil_r_make_inst_var;
	_T2E = &env;
	_T2F = ad;
	_T30 = _T2F->impl;
	_T31 = _check_null(_T30);
	_T32 = _T31->exist_vars;
	{ struct Cyc_List_List * exist_inst = _T2B(_T2D,_T2E,_T32);
	  _T34 = Cyc_List_map;
	  { struct Cyc_List_List * (* _TE5)(void * (*)(struct _tuple18 *),
					    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct _tuple18 *),
												  struct Cyc_List_List *))_T34;
	    _T33 = _TE5;
	  }_T36 = Cyc_Core_snd;
	  { void * (* _TE5)(struct _tuple18 *) = (void * (*)(struct _tuple18 *))_T36;
	    _T35 = _TE5;
	  }_T37 = all_inst;
	  { struct Cyc_List_List * all_typs = _T33(_T35,_T37);
	    _T39 = Cyc_List_map;
	    { struct Cyc_List_List * (* _TE5)(void * (*)(struct _tuple18 *),
					      struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct _tuple18 *),
												    struct Cyc_List_List *))_T39;
	      _T38 = _TE5;
	    }_T3B = Cyc_Core_snd;
	    { void * (* _TE5)(struct _tuple18 *) = (void * (*)(struct _tuple18 *))_T3B;
	      _T3A = _TE5;
	    }_T3C = exist_inst;
	    { struct Cyc_List_List * exist_typs = _T38(_T3A,_T3C);
	      struct Cyc_List_List * inst = Cyc_List_append(all_inst,exist_inst);
	      struct Cyc_List_List * qb_inst = 0;
	      _T3D = ad;
	      _T3E = _T3D->impl;
	      _T3F = _check_null(_T3E);
	      { struct Cyc_List_List * qbit = _T3F->qual_bnd;
		_TL3BB: if (qbit != 0) { goto _TL3B9;
		}else { goto _TL3BA;
		}
		_TL3B9: { struct Cyc_List_List * _TE5 = _cycalloc(sizeof(struct Cyc_List_List));
		  { struct _tuple0 * _TE6 = _cycalloc(sizeof(struct _tuple0));
		    _T42 = inst;
		    _T43 = qbit;
		    _T44 = _T43->hd;
		    _T45 = (struct _tuple0 *)_T44;
		    _T46 = *_T45;
		    _T47 = _T46.f0;
		    _TE6->f0 = Cyc_Tcutil_substitute(_T42,_T47);
		    _T48 = inst;
		    _T49 = qbit;
		    _T4A = _T49->hd;
		    _T4B = (struct _tuple0 *)_T4A;
		    _T4C = *_T4B;
		    _T4D = _T4C.f1;
		    _TE6->f1 = Cyc_Tcutil_substitute(_T48,_T4D);
		    _T41 = (struct _tuple0 *)_TE6;
		  }_TE5->hd = _T41;
		  _TE5->tl = qb_inst;
		  _T40 = (struct Cyc_List_List *)_TE5;
		}qb_inst = _T40;
		_T4E = qbit;
		qbit = _T4E->tl;
		goto _TL3BB;
		_TL3BA: ;
	      }{ void * res_typ;
		if (topt == 0) { goto _TL3BC;
		}
		_T4F = topt;
		{ void * tp = *_T4F;
		  loop: { void * _TE5 = Cyc_Absyn_compress(tp);
		    struct Cyc_List_List * _TE6;
		    struct Cyc_Absyn_Aggrdecl * * _TE7;
		    struct Cyc_Absyn_Vardecl * _TE8;
		    _T50 = (int *)_TE5;
		    _T51 = *_T50;
		    switch (_T51) {
		    case 12: 
		      { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _TE9 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_TE5;
			_TE8 = _TE9->f1;
		      }{ struct Cyc_Absyn_Vardecl * vd = _TE8;
			_T52 = vd;
			tp = _T52->type;
			goto loop;
		      }
		    case 0: 
		      _T53 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TE5;
		      _T54 = _T53->f1;
		      _T55 = (int *)_T54;
		      _T56 = *_T55;
		      if (_T56 != 24) { goto _TL3BF;
		      }
		      _T57 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TE5;
		      _T58 = _T57->f1;
		      _T59 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T58;
		      _T5A = _T59->f1;
		      _T5B = _T5A.KnownAggr;
		      _T5C = _T5B.tag;
		      if (_T5C != 2) { goto _TL3C1;
		      }
		      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE9 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TE5;
			_T5D = _TE9->f1;
			{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TEA = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T5D;
			  _T5E = _TEA->f1;
			  _T5F = _T5E.KnownAggr;
			  _TE7 = _T5F.val;
			}_TE6 = _TE9->f2;
		      }{ struct Cyc_Absyn_Aggrdecl * * adptr2 = _TE7;
			struct Cyc_List_List * all_typs2 = _TE6;
			_T60 = adptr2;
			_T61 = *_T60;
			_T62 = adptr;
			_T63 = *_T62;
			if (_T61 == _T63) { goto _TL3C3;
			}
			goto _LLB;
			_TL3C3: { struct Cyc_List_List * ats = all_typs;
			  _TL3C8: if (ats != 0) { goto _TL3C9;
			  }else { goto _TL3C7;
			  }
			  _TL3C9: if (all_typs2 != 0) { goto _TL3C6;
			  }else { goto _TL3C7;
			  }
			  _TL3C6: _T64 = ats;
			  _T65 = _T64->hd;
			  _T66 = all_typs2;
			  _T67 = _T66->hd;
			  Cyc_Unify_unify(_T65,_T67);
			  _T68 = ats;
			  ats = _T68->tl;
			  _T69 = all_typs2;
			  all_typs2 = _T69->tl;
			  goto _TL3C8;
			  _TL3C7: ;
			}res_typ = tp;
			goto _LL5;
		      }_TL3C1: goto _LLA;
		      _TL3BF: goto _LLA;
		    default: 
		      _LLA: _LLB: _T6A = Cyc_Absyn_KnownAggr(adptr);
		      _T6B = all_typs;
		      res_typ = Cyc_Absyn_aggr_type(_T6A,_T6B);
		    }
		    _LL5: ;
		  }
		}goto _TL3BD;
		_TL3BC: _T6C = Cyc_Absyn_KnownAggr(adptr);
		_T6D = all_typs;
		res_typ = Cyc_Absyn_aggr_type(_T6C,_T6D);
		_TL3BD: _T6E = ts;
		{ struct Cyc_List_List * user_ex_ts = *_T6E;
		  struct Cyc_List_List * ex_ts = exist_typs;
		  _TL3CA: if (user_ex_ts != 0) { goto _TL3CD;
		  }else { goto _TL3CC;
		  }
		  _TL3CD: if (ex_ts != 0) { goto _TL3CB;
		  }else { goto _TL3CC;
		  }
		  _TL3CB: _T6F = loc;
		  _T70 = te2;
		  _T71 = Cyc_Tcenv_lookup_type_vars(te2);
		  _T72 = &Cyc_Kinds_ak;
		  _T73 = (struct Cyc_Absyn_Kind *)_T72;
		  _T74 = user_ex_ts;
		  _T75 = _T74->hd;
		  Cyc_Tctyp_check_type(_T6F,_T70,_T71,_T73,1,0,_T75);
		  _T76 = loc;
		  _T77 = user_ex_ts;
		  _T78 = _T77->hd;
		  Cyc_Tcutil_check_no_qual(_T76,_T78);
		  _T79 = user_ex_ts;
		  _T7A = _T79->hd;
		  _T7B = ex_ts;
		  _T7C = _T7B->hd;
		  _T7D = Cyc_Unify_unify(_T7A,_T7C);
		  if (_T7D) { goto _TL3CE;
		  }else { goto _TL3D0;
		  }
		  _TL3D0: { struct Cyc_Warn_String_Warn_Warg_struct _TE5;
		    _TE5.tag = 0;
		    _TE5.f1 = _tag_fat("bad instantiation of existential type",
				       sizeof(char),38U);
		    _T7E = _TE5;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _TE5 = _T7E;
		    void * _TE6[1];
		    _TE6[0] = &_TE5;
		    _T7F = loc;
		    _T80 = _tag_fat(_TE6,sizeof(void *),1);
		    Cyc_Warn_err2(_T7F,_T80);
		  }Cyc_Unify_explain_failure();
		  goto _TL3CF;
		  _TL3CE: _TL3CF: _T81 = user_ex_ts;
		  user_ex_ts = _T81->tl;
		  _T82 = ex_ts;
		  ex_ts = _T82->tl;
		  goto _TL3CA;
		  _TL3CC: if (user_ex_ts == 0) { goto _TL3D1;
		  }
		  { struct Cyc_Warn_String_Warn_Warg_struct _TE5;
		    _TE5.tag = 0;
		    _TE5.f1 = _tag_fat("too many explicit witness types",
				       sizeof(char),32U);
		    _T83 = _TE5;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _TE5 = _T83;
		    void * _TE6[1];
		    _TE6[0] = &_TE5;
		    _T84 = loc;
		    _T85 = _tag_fat(_TE6,sizeof(void *),1);
		    Cyc_Warn_err2(_T84,_T85);
		  }goto _TL3D2;
		  _TL3D1: _TL3D2: _T86 = ts;
		  *_T86 = exist_typs;
		  _T87 = Cyc_Core_heap_region;
		  _T88 = loc;
		  _T89 = args;
		  _T8A = ad;
		  _T8B = _T8A->kind;
		  _T8C = ad;
		  _T8D = _T8C->impl;
		  _T8E = _T8D->fields;
		  { struct Cyc_List_List * fields = Cyc_Tcutil_resolve_aggregate_designators(_T87,
											     _T88,
											     _T89,
											     _T8B,
											     _T8E);
		    _T8F = te;
		    _T90 = _T8F->le;
		    if (_T90 != 0) { goto _TL3D3;
		    }
		    _T91 = ad;
		    _T92 = _T91->kind;
		    _T93 = (int)_T92;
		    if (_T93 != 1) { goto _TL3D3;
		    }
		    _T94 = fields;
		    _T95 = _T94->hd;
		    { struct _tuple25 * _TE5 = (struct _tuple25 *)_T95;
		      struct Cyc_Absyn_Aggrfield * _TE6;
		      { struct _tuple25 _TE7 = *_TE5;
			_TE6 = _TE7.f0;
		      }{ struct Cyc_Absyn_Aggrfield * f = _TE6;
			_T96 = ad;
			_T97 = _T96->impl;
			{ struct Cyc_List_List * fs = _T97->fields;
			  if (fs == 0) { goto _TL3D7;
			  }else { goto _TL3D8;
			  }
			  _TL3D8: _T98 = f;
			  _T99 = fs;
			  _T9A = _T99->hd;
			  _T9B = (struct Cyc_Absyn_Aggrfield *)_T9A;
			  if (_T98 != _T9B) { goto _TL3D7;
			  }else { goto _TL3D5;
			  }
			  _TL3D7: { struct Cyc_Warn_String_Warn_Warg_struct _TE7;
			    _TE7.tag = 0;
			    _TE7.f1 = _tag_fat("you can only initialize a union at top-level with the first member",
					       sizeof(char),67U);
			    _T9C = _TE7;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _TE7 = _T9C;
			    void * _TE8[1];
			    _TE8[0] = &_TE7;
			    _T9D = loc;
			    _T9E = _tag_fat(_TE8,sizeof(void *),1);
			    Cyc_Warn_err2(_T9D,_T9E);
			  }goto _TL3D6;
			  _TL3D5: _TL3D6: ;
			}
		      }
		    }goto _TL3D4;
		    _TL3D3: _TL3D4: _TL3DC: if (fields != 0) { goto _TL3DA;
		    }else { goto _TL3DB;
		    }
		    _TL3DA: { long bogus = 0;
		      _T9F = fields;
		      _TA0 = _T9F->hd;
		      { struct _tuple25 * _TE5 = (struct _tuple25 *)_TA0;
			struct Cyc_Absyn_Exp * _TE6;
			struct Cyc_Absyn_Aggrfield * _TE7;
			{ struct _tuple25 _TE8 = *_TE5;
			  _TE7 = _TE8.f0;
			  _TE6 = _TE8.f1;
			}{ struct Cyc_Absyn_Aggrfield * field = _TE7;
			  struct Cyc_Absyn_Exp * field_exp = _TE6;
			  _TA1 = inst;
			  _TA2 = field;
			  _TA3 = _TA2->type;
			  { void * inst_fieldtyp = Cyc_Tcutil_substitute(_TA1,
									 _TA3);
			    _TA4 = Cyc_Tcenv_clear_abstract_val_ok(te2);
			    _TA5 = &inst_fieldtyp;
			    _TA6 = field_exp;
			    { void * ftyp = Cyc_Tcexp_tcExpInitializer(_TA4,
								       _TA5,
								       _TA6);
			      _TA7 = Cyc_Tcenv_curr_aquals_bounds(te);
			      _TA8 = field_exp;
			      _TA9 = inst_fieldtyp;
			      _TAA = &bogus;
			      _TAB = Cyc_Tcutil_coerce_arg(_TA7,_TA8,_TA9,
							   _TAA);
			      if (_TAB) { goto _TL3DD;
			      }else { goto _TL3DF;
			      }
			      _TL3DF: Cyc_Unify_unify(ftyp,inst_fieldtyp);
			      { struct Cyc_Warn_String_Warn_Warg_struct _TE8;
				_TE8.tag = 0;
				_TE8.f1 = _tag_fat("field ",sizeof(char),
						   7U);
				_TAC = _TE8;
			      }{ struct Cyc_Warn_String_Warn_Warg_struct _TE8 = _TAC;
				{ struct Cyc_Warn_String_Warn_Warg_struct _TE9;
				  _TE9.tag = 0;
				  _TAE = field;
				  _TAF = _TAE->name;
				  _TE9.f1 = *_TAF;
				  _TAD = _TE9;
				}{ struct Cyc_Warn_String_Warn_Warg_struct _TE9 = _TAD;
				  { struct Cyc_Warn_String_Warn_Warg_struct _TEA;
				    _TEA.tag = 0;
				    _TEA.f1 = _tag_fat(" of ",sizeof(char),
						       5U);
				    _TB0 = _TEA;
				  }{ struct Cyc_Warn_String_Warn_Warg_struct _TEA = _TB0;
				    { struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _TEB;
				      _TEB.tag = 6;
				      _TEB.f1 = ad;
				      _TB1 = _TEB;
				    }{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _TEB = _TB1;
				      { struct Cyc_Warn_String_Warn_Warg_struct _TEC;
					_TEC.tag = 0;
					_TEC.f1 = _tag_fat(" expects type ",
							   sizeof(char),15U);
					_TB2 = _TEC;
				      }{ struct Cyc_Warn_String_Warn_Warg_struct _TEC = _TB2;
					{ struct Cyc_Warn_Typ_Warn_Warg_struct _TED;
					  _TED.tag = 2;
					  _TED.f1 = inst_fieldtyp;
					  _TB3 = _TED;
					}{ struct Cyc_Warn_Typ_Warn_Warg_struct _TED = _TB3;
					  { struct Cyc_Warn_String_Warn_Warg_struct _TEE;
					    _TEE.tag = 0;
					    _TEE.f1 = _tag_fat(" != ",sizeof(char),
							       5U);
					    _TB4 = _TEE;
					  }{ struct Cyc_Warn_String_Warn_Warg_struct _TEE = _TB4;
					    { struct Cyc_Warn_Typ_Warn_Warg_struct _TEF;
					      _TEF.tag = 2;
					      _TEF.f1 = ftyp;
					      _TB5 = _TEF;
					    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _TEF = _TB5;
					      void * _TF0[8];
					      _TF0[0] = &_TE8;
					      _TF0[1] = &_TE9;
					      _TF0[2] = &_TEA;
					      _TF0[3] = &_TEB;
					      _TF0[4] = &_TEC;
					      _TF0[5] = &_TED;
					      _TF0[6] = &_TEE;
					      _TF0[7] = &_TEF;
					      _TB6 = field_exp;
					      _TB7 = _TB6->loc;
					      _TB8 = _tag_fat(_TF0,sizeof(void *),
							      8);
					      Cyc_Tcexp_err_and_explain(_TB7,
									_TB8);
					    }
					  }
					}
				      }
				    }
				  }
				}
			      }goto _TL3DE;
			      _TL3DD: _TL3DE: _TB9 = Cyc_Atts_attribute_cmp;
			      _TBA = field;
			      _TBB = _TBA->attributes;
			      _TBC = &Cyc_Atts_No_throw_att_val;
			      _TBD = (struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct *)_TBC;
			      _TBE = (void *)_TBD;
			      { long nothrow_fld = Cyc_List_mem(_TB9,_TBB,
								_TBE);
				_TBF = nothrow_fld;
				if (! _TBF) { goto _TL3E0;
				}
				_TC0 = Cyc_Tcexp_ensure_nothrow_initializer(field_exp);
				if (_TC0) { goto _TL3E0;
				}else { goto _TL3E2;
				}
				_TL3E2: { struct Cyc_Warn_String_Warn_Warg_struct _TE8;
				  _TE8.tag = 0;
				  _TE8.f1 = _tag_fat("field ",sizeof(char),
						     7U);
				  _TC1 = _TE8;
				}{ struct Cyc_Warn_String_Warn_Warg_struct _TE8 = _TC1;
				  { struct Cyc_Warn_String_Warn_Warg_struct _TE9;
				    _TE9.tag = 0;
				    _TC3 = field;
				    _TC4 = _TC3->name;
				    _TE9.f1 = *_TC4;
				    _TC2 = _TE9;
				  }{ struct Cyc_Warn_String_Warn_Warg_struct _TE9 = _TC2;
				    { struct Cyc_Warn_String_Warn_Warg_struct _TEA;
				      _TEA.tag = 0;
				      _TEA.f1 = _tag_fat(" can only hold a no_throw function",
							 sizeof(char),35U);
				      _TC5 = _TEA;
				    }{ struct Cyc_Warn_String_Warn_Warg_struct _TEA = _TC5;
				      void * _TEB[3];
				      _TEB[0] = &_TE8;
				      _TEB[1] = &_TE9;
				      _TEB[2] = &_TEA;
				      _TC6 = field_exp;
				      _TC7 = _TC6->loc;
				      _TC8 = _tag_fat(_TEB,sizeof(void *),
						      3);
				      Cyc_Warn_err2(_TC7,_TC8);
				    }
				  }
				}goto _TL3E1;
				_TL3E0: _TL3E1: ;
			      }
			    }
			  }
			}
		      }
		    }_TC9 = fields;
		    fields = _TC9->tl;
		    goto _TL3DC;
		    _TL3DB: { struct Cyc_List_List * constraint_checks = 0;
		      _TCA = Cyc_Core_heap_region;
		      _TCB = inst;
		      _TCC = ad;
		      _TCD = _TCC->impl;
		      _TCE = _check_null(_TCD);
		      _TCF = _TCE->effconstr;
		      { struct Cyc_List_List * effc = Cyc_Tcutil_rsubst_effconstr(_TCA,
										  _TCB,
										  _TCF);
			{ struct Cyc_List_List * ec = effc;
			  _TL3E6: if (ec != 0) { goto _TL3E4;
			  }else { goto _TL3E5;
			  }
			  _TL3E4: _TD0 = ec;
			  { void * _TE5 = _TD0->hd;
			    void * _TE6;
			    void * _TE7;
			    _TD1 = (int *)_TE5;
			    _TD2 = *_TD1;
			    switch (_TD2) {
			    case 2: 
			      { struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct * _TE8 = (struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct *)_TE5;
				_TD3 = _TE8->f1;
				_TE7 = (void *)_TD3;
				_TD4 = _TE8->f2;
				_TE6 = (void *)_TD4;
			      }{ void * e1s = _TE7;
				void * e2s = _TE6;
				_TD5 = Cyc_Tcenv_curr_effect_constraints(te);
				_TD6 = e1s;
				{ void * ev1 = Cyc_Tcutil_evaluate_effect(_TD5,
									  _TD6);
				  _TD7 = Cyc_Unify_unify(ev1,e2s);
				  if (_TD7) { goto _TL3E8;
				  }else { goto _TL3EA;
				  }
				  _TL3EA: _TD8 = Cyc_Tcutil_subset_effect(0,
									  ev1,
									  e2s);
				  if (_TD8) { goto _TL3E8;
				  }else { goto _TL3EB;
				  }
				  _TL3EB: { struct Cyc_Warn_String_Warn_Warg_struct _TE8;
				    _TE8.tag = 0;
				    _TE8.f1 = _tag_fat("Effect equality constraint not satisfied",
						       sizeof(char),41U);
				    _TD9 = _TE8;
				  }{ struct Cyc_Warn_String_Warn_Warg_struct _TE8 = _TD9;
				    void * _TE9[1];
				    _TE9[0] = &_TE8;
				    _TDA = loc;
				    _TDB = _tag_fat(_TE9,sizeof(void *),1);
				    Cyc_Warn_err2(_TDA,_TDB);
				  }goto _TL3E9;
				  _TL3E8: _TL3E9: goto _LL12;
				}
			      }
			    case 0: 
			      { struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct * _TE8 = (struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct *)_TE5;
				_TDC = _TE8->f1;
				_TE7 = (void *)_TDC;
			      }{ void * e1 = _TE7;
				{ struct Cyc_List_List * _TE8 = _cycalloc(sizeof(struct Cyc_List_List));
				  _TDE = ec;
				  _TE8->hd = _TDE->hd;
				  _TE8->tl = constraint_checks;
				  _TDD = (struct Cyc_List_List *)_TE8;
				}constraint_checks = _TDD;
				goto _LL12;
			      }
			    default: 
			      _TE0 = Cyc_Warn_impos;
			      { int (* _TE8)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
											 struct _fat_ptr))_TE0;
				_TDF = _TE8;
			      }_TE1 = _tag_fat("Disjoint constraints in aggregates are not supported yet",
					       sizeof(char),57U);
			      _TE2 = _tag_fat(0U,sizeof(void *),0);
			      _TDF(_TE1,_TE2);
			    }
			    _LL12: ;
			  }_TE3 = ec;
			  ec = _TE3->tl;
			  goto _TL3E6;
			  _TL3E5: ;
			}Cyc_Tcenv_check_effect_constraints(te,loc,constraint_checks);
			Cyc_Tcexp_check_all_aqual_bounds(loc,te2,qb_inst);
			_TE4 = res_typ;
			return _TE4;
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
static void * Cyc_Tcexp_tcAnonStruct(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				     void * * topt,struct Cyc_Absyn_Exp * orig,
				     void * * ts,long is_tuple,struct Cyc_List_List * args) {
  void * * _T0;
  void * _T1;
  void * * _T2;
  void * * _T3;
  struct Cyc_Core_Opt * _T4;
  struct Cyc_Core_Opt * _T5;
  struct Cyc_Core_Opt * _T6;
  int * _T7;
  unsigned int _T8;
  struct Cyc_Absyn_Vardecl * _T9;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA;
  void * _TB;
  int * _TC;
  int _TD;
  void * _TE;
  union Cyc_Absyn_AggrInfo _TF;
  struct _union_AggrInfo_UnknownAggr _T10;
  unsigned int _T11;
  union Cyc_Absyn_AggrInfo _T12;
  struct _union_AggrInfo_UnknownAggr _T13;
  struct _tuple3 _T14;
  union Cyc_Absyn_AggrInfo _T15;
  struct _union_AggrInfo_KnownAggr _T16;
  struct Cyc_Absyn_Aggrdecl * * _T17;
  struct Cyc_Absyn_Aggrdecl * _T18;
  struct Cyc_Absyn_Exp * _T19;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T1A;
  struct Cyc_List_List * _T1B;
  void * _T1C;
  struct _tuple20 * _T1D;
  int (* _T1E)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T1F)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  struct Cyc_List_List * _T22;
  int * _T23;
  int _T24;
  int (* _T25)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T26)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T27;
  struct _fat_ptr _T28;
  struct Cyc_Absyn_Aggrfield * _T29;
  struct Cyc_Absyn_Aggrfield * _T2A;
  struct Cyc_Absyn_Aggrfield * _T2B;
  struct Cyc_Core_Opt * _T2C;
  struct Cyc_Core_Opt * _T2D;
  struct Cyc_Core_Opt * _T2E;
  struct Cyc_Absyn_Aggrfield * _T2F;
  struct Cyc_Absyn_Aggrfield * _T30;
  struct Cyc_Absyn_Aggrfield * _T31;
  struct Cyc_List_List * _T32;
  struct Cyc_List_List * _T33;
  void * _T34;
  struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T35;
  void * _T36;
  void * * _T37;
  enum Cyc_Absyn_AggrKind _T38;
  int _T39;
  struct Cyc_Warn_String_Warn_Warg_struct _T3A;
  unsigned int _T3B;
  struct _fat_ptr _T3C;
  struct Cyc_List_List * _T3D;
  void * _T3E;
  struct Cyc_Tcenv_Tenv * _T3F;
  struct Cyc_Absyn_Aggrfield * _T40;
  void * * _T41;
  struct Cyc_Absyn_Exp * _T42;
  struct Cyc_List_List * _T43;
  struct Cyc_Absyn_Exp * _T44;
  struct Cyc_Absyn_Aggrfield * _T45;
  void * _T46;
  long * _T47;
  long _T48;
  struct Cyc_Warn_String_Warn_Warg_struct _T49;
  struct Cyc_Warn_String_Warn_Warg_struct _T4A;
  struct Cyc_Absyn_Aggrfield * _T4B;
  struct _fat_ptr * _T4C;
  struct Cyc_Warn_String_Warn_Warg_struct _T4D;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T4E;
  struct Cyc_Absyn_Aggrfield * _T4F;
  struct Cyc_Warn_String_Warn_Warg_struct _T50;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T51;
  struct Cyc_Absyn_Exp * _T52;
  struct Cyc_Absyn_Exp * _T53;
  unsigned int _T54;
  struct _fat_ptr _T55;
  struct Cyc_List_List * _T56;
  void * * _T57;
  void * _T58;
  void * * _T59;
  void * _T5A;
  void * _T5B;
  struct Cyc_Warn_String_Warn_Warg_struct _T5C;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T5D;
  struct Cyc_Warn_String_Warn_Warg_struct _T5E;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T5F;
  int (* _T60)(struct _fat_ptr);
  void * (* _T61)(struct _fat_ptr);
  struct _fat_ptr _T62;
  void * _T63;
  void * struct_type;
  _T0 = ts;
  _T1 = *_T0;
  if (_T1 == 0) { goto _TL3EC;
  }
  _T2 = ts;
  struct_type = *_T2;
  goto _TL3ED;
  _TL3EC: if (topt == 0) { goto _TL3EE;
  }
  _T3 = topt;
  struct_type = *_T3;
  goto _TL3EF;
  _TL3EE: _T4 = &Cyc_Kinds_mko;
  _T5 = (struct Cyc_Core_Opt *)_T4;
  _T6 = Cyc_Tcenv_lookup_opt_type_vars(te);
  struct_type = Cyc_Absyn_new_evar(_T5,_T6);
  _TL3EF: _TL3ED: loop: { void * _T64 = Cyc_Absyn_compress(struct_type);
    enum Cyc_Absyn_AggrKind _T65;
    struct Cyc_List_List * _T66;
    union Cyc_Absyn_AggrInfo _T67;
    struct Cyc_Absyn_Vardecl * _T68;
    _T7 = (int *)_T64;
    _T8 = *_T7;
    switch (_T8) {
    case 12: 
      { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T69 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T64;
	_T68 = _T69->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T68;
	_T9 = vd;
	struct_type = _T9->type;
	goto loop;
      }
    case 0: 
      _TA = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T64;
      _TB = _TA->f1;
      _TC = (int *)_TB;
      _TD = *_TC;
      if (_TD != 24) { goto _TL3F1;
      }
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T69 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T64;
	_TE = _T69->f1;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T6A = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TE;
	  _T67 = _T6A->f1;
	}_T66 = _T69->f2;
      }{ union Cyc_Absyn_AggrInfo ainfo = _T67;
	struct Cyc_List_List * ts = _T66;
	struct _tuple1 * name;
	struct Cyc_Absyn_Aggrdecl * adopt = 0;
	{ struct Cyc_Absyn_Aggrdecl * _T69;
	  struct _tuple1 * _T6A;
	  _TF = ainfo;
	  _T10 = _TF.UnknownAggr;
	  _T11 = _T10.tag;
	  if (_T11 != 1) { goto _TL3F3;
	  }
	  _T12 = ainfo;
	  _T13 = _T12.UnknownAggr;
	  _T14 = _T13.val;
	  _T6A = _T14.f1;
	  { struct _tuple1 * n = _T6A;
	    name = n;
	    goto _LLB;
	  }_TL3F3: _T15 = ainfo;
	  _T16 = _T15.KnownAggr;
	  _T17 = _T16.val;
	  { struct Cyc_Absyn_Aggrdecl * _T6B = *_T17;
	    _T69 = _T6B;
	  }{ struct Cyc_Absyn_Aggrdecl * ad = _T69;
	    _T18 = ad;
	    name = _T18->name;
	    adopt = ad;
	    goto _LLB;
	  }_LLB: ;
	}_T19 = orig;
	{ struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T69 = _cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));
	  _T69->tag = 28;
	  _T69->f1 = name;
	  _T69->f2 = ts;
	  _T69->f3 = args;
	  _T69->f4 = adopt;
	  _T1A = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T69;
	}_T19->r = (void *)_T1A;
	Cyc_Tcexp_tcExpNoInst(te,topt,orig);
	goto _LL0;
      }_TL3F1: goto _LL9;
    case 1: 
      { struct Cyc_List_List * fs = 0;
	struct Cyc_Core_Opt * tvs = Cyc_Tcenv_lookup_opt_type_vars(te);
	int i = 0;
	{ struct Cyc_List_List * a = args;
	  _TL3F8: if (a != 0) { goto _TL3F6;
	  }else { goto _TL3F7;
	  }
	  _TL3F6: _T1B = a;
	  _T1C = _T1B->hd;
	  _T1D = (struct _tuple20 *)_T1C;
	  { struct _tuple20 _T69 = *_T1D;
	    struct Cyc_List_List * _T6A;
	    _T6A = _T69.f0;
	    { struct Cyc_List_List * ds = _T6A;
	      if (ds != 0) { goto _TL3F9;
	      }
	      _T1F = Cyc_Warn_impos;
	      { int (* _T6B)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									 struct _fat_ptr))_T1F;
		_T1E = _T6B;
	      }_T20 = _tag_fat("tcAnonStruct -- missing designators!",sizeof(char),
			       37U);
	      _T21 = _tag_fat(0U,sizeof(void *),0);
	      _T1E(_T20,_T21);
	      goto _TL3FA;
	      _TL3F9: _TL3FA: { struct _fat_ptr * n;
		_T22 = ds;
		{ void * _T6B = _T22->hd;
		  struct _fat_ptr * _T6C;
		  _T23 = (int *)_T6B;
		  _T24 = *_T23;
		  if (_T24 != 1) { goto _TL3FB;
		  }
		  { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T6D = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T6B;
		    _T6C = _T6D->f1;
		  }{ struct _fat_ptr * name = _T6C;
		    n = name;
		    goto _LL13;
		  }_TL3FB: _T26 = Cyc_Warn_impos;
		  { int (* _T6D)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									     struct _fat_ptr))_T26;
		    _T25 = _T6D;
		  }_T27 = _tag_fat("tcAnonStruct -- designator is array!",
				   sizeof(char),37U);
		  _T28 = _tag_fat(0U,sizeof(void *),0);
		  _T25(_T27,_T28);
		  _LL13: ;
		}{ struct Cyc_Absyn_Aggrfield * f;
		  f = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
		  _T29 = f;
		  _T29->name = n;
		  _T2A = f;
		  _T2A->tq = Cyc_Absyn_empty_tqual(0U);
		  _T2B = f;
		  _T2C = &Cyc_Kinds_mko;
		  _T2D = (struct Cyc_Core_Opt *)_T2C;
		  _T2E = tvs;
		  _T2B->type = Cyc_Absyn_new_evar(_T2D,_T2E);
		  _T2F = f;
		  _T2F->width = 0;
		  _T30 = f;
		  _T30->attributes = 0;
		  _T31 = f;
		  _T31->requires_clause = 0;
		  { struct Cyc_List_List * _T6B = _cycalloc(sizeof(struct Cyc_List_List));
		    _T6B->hd = f;
		    _T6B->tl = fs;
		    _T32 = (struct Cyc_List_List *)_T6B;
		  }fs = _T32;
		}
	      }
	    }
	  }_T33 = a;
	  a = _T33->tl;
	  i = i + 1;
	  goto _TL3F8;
	  _TL3F7: ;
	}fs = Cyc_List_imp_rev(fs);
	_T34 = struct_type;
	{ struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T69 = _cycalloc(sizeof(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct));
	  _T69->tag = 7;
	  _T69->f1 = 0U;
	  _T69->f2 = is_tuple;
	  _T69->f3 = fs;
	  _T35 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T69;
	}_T36 = (void *)_T35;
	Cyc_Unify_unify(_T34,_T36);
	_T37 = ts;
	*_T37 = struct_type;
	_T65 = 0U;
	_T66 = fs;
	goto _LL8;
      }
    case 7: 
      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T69 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T64;
	_T65 = _T69->f1;
	_T66 = _T69->f3;
      }_LL8: { enum Cyc_Absyn_AggrKind k = _T65;
	struct Cyc_List_List * fs = _T66;
	_T38 = k;
	_T39 = (int)_T38;
	if (_T39 != 1) { goto _TL3FD;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T69;
	  _T69.tag = 0;
	  _T69.f1 = _tag_fat("expecting struct but found union",sizeof(char),
			     33U);
	  _T3A = _T69;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T69 = _T3A;
	  void * _T6A[1];
	  _T6A[0] = &_T69;
	  _T3B = loc;
	  _T3C = _tag_fat(_T6A,sizeof(void *),1);
	  Cyc_Warn_err2(_T3B,_T3C);
	}goto _TL3FE;
	_TL3FD: _TL3FE: { struct Cyc_List_List * fields = Cyc_Tcutil_resolve_aggregate_designators(Cyc_Core_heap_region,
												   loc,
												   args,
												   0U,
												   fs);
	  _TL402: if (fields != 0) { goto _TL400;
	  }else { goto _TL401;
	  }
	  _TL400: { long bogus = 0;
	    _T3D = fields;
	    _T3E = _T3D->hd;
	    { struct _tuple25 * _T69 = (struct _tuple25 *)_T3E;
	      struct Cyc_Absyn_Exp * _T6A;
	      struct Cyc_Absyn_Aggrfield * _T6B;
	      { struct _tuple25 _T6C = *_T69;
		_T6B = _T6C.f0;
		_T6A = _T6C.f1;
	      }{ struct Cyc_Absyn_Aggrfield * field = _T6B;
		struct Cyc_Absyn_Exp * field_exp = _T6A;
		_T3F = Cyc_Tcenv_clear_abstract_val_ok(te);
		_T40 = field;
		_T41 = &_T40->type;
		_T42 = field_exp;
		Cyc_Tcexp_tcExpInitializer(_T3F,_T41,_T42);
		_T43 = Cyc_Tcenv_curr_aquals_bounds(te);
		_T44 = field_exp;
		_T45 = field;
		_T46 = _T45->type;
		_T47 = &bogus;
		_T48 = Cyc_Tcutil_coerce_arg(_T43,_T44,_T46,_T47);
		if (_T48) { goto _TL403;
		}else { goto _TL405;
		}
		_TL405: { struct Cyc_Warn_String_Warn_Warg_struct _T6C;
		  _T6C.tag = 0;
		  _T6C.f1 = _tag_fat("field ",sizeof(char),7U);
		  _T49 = _T6C;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T6C = _T49;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T6D;
		    _T6D.tag = 0;
		    _T4B = field;
		    _T4C = _T4B->name;
		    _T6D.f1 = *_T4C;
		    _T4A = _T6D;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T6D = _T4A;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T6E;
		      _T6E.tag = 0;
		      _T6E.f1 = _tag_fat(" of struct expects type ",sizeof(char),
					 25U);
		      _T4D = _T6E;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T6E = _T4D;
		      { struct Cyc_Warn_Typ_Warn_Warg_struct _T6F;
			_T6F.tag = 2;
			_T4F = field;
			_T6F.f1 = _T4F->type;
			_T4E = _T6F;
		      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T6F = _T4E;
			{ struct Cyc_Warn_String_Warn_Warg_struct _T70;
			  _T70.tag = 0;
			  _T70.f1 = _tag_fat(" != ",sizeof(char),5U);
			  _T50 = _T70;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T70 = _T50;
			  { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T71;
			    _T71.tag = 3;
			    _T52 = field_exp;
			    _T71.f1 = _T52->topt;
			    _T51 = _T71;
			  }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T71 = _T51;
			    void * _T72[6];
			    _T72[0] = &_T6C;
			    _T72[1] = &_T6D;
			    _T72[2] = &_T6E;
			    _T72[3] = &_T6F;
			    _T72[4] = &_T70;
			    _T72[5] = &_T71;
			    _T53 = field_exp;
			    _T54 = _T53->loc;
			    _T55 = _tag_fat(_T72,sizeof(void *),6);
			    Cyc_Tcexp_err_and_explain(_T54,_T55);
			  }
			}
		      }
		    }
		  }
		}goto _TL404;
		_TL403: _TL404: ;
	      }
	    }
	  }_T56 = fields;
	  fields = _T56->tl;
	  goto _TL402;
	  _TL401: goto _LL0;
	}
      }
    default: 
      _LL9: _T57 = ts;
      _T58 = *_T57;
      if (_T58 != 0) { goto _TL406;
      }
      if (topt == 0) { goto _TL406;
      }
      _T59 = topt;
      _T5A = *_T59;
      if (_T5A == 0) { goto _TL406;
      }
      _T5B = Cyc_Tcexp_tcAnonStruct(te,loc,0,orig,ts,is_tuple,args);
      return _T5B;
      _TL406: { struct Cyc_Warn_String_Warn_Warg_struct _T69;
	_T69.tag = 0;
	_T69.f1 = _tag_fat("tcAnonStruct: wrong type ",sizeof(char),26U);
	_T5C = _T69;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T69 = _T5C;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T6A;
	  _T6A.tag = 2;
	  _T6A.f1 = struct_type;
	  _T5D = _T6A;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T6A = _T5D;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T6B;
	    _T6B.tag = 0;
	    _T6B.f1 = _tag_fat(" for exp ",sizeof(char),10U);
	    _T5E = _T6B;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T6B = _T5E;
	    { struct Cyc_Warn_Exp_Warn_Warg_struct _T6C;
	      _T6C.tag = 4;
	      _T6C.f1 = orig;
	      _T5F = _T6C;
	    }{ struct Cyc_Warn_Exp_Warn_Warg_struct _T6C = _T5F;
	      void * _T6D[4];
	      _T6D[0] = &_T69;
	      _T6D[1] = &_T6A;
	      _T6D[2] = &_T6B;
	      _T6D[3] = &_T6C;
	      _T61 = Cyc_Warn_impos2;
	      { int (* _T6E)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T61;
		_T60 = _T6E;
	      }_T62 = _tag_fat(_T6D,sizeof(void *),4);
	      _T60(_T62);
	    }
	  }
	}
      };
    }
    _LL0: ;
  }_T63 = struct_type;
  return _T63;
}
static void * Cyc_Tcexp_tcDatatype(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				   void * * topt,struct Cyc_Absyn_Exp * e,
				   struct Cyc_List_List * es,struct Cyc_Absyn_Datatypedecl * tud,
				   struct Cyc_Absyn_Datatypefield * tuf) {
  struct _tuple17 _T0;
  struct Cyc_List_List * (* _T1)(struct _tuple18 * (*)(struct _tuple17 *,
						       struct Cyc_Absyn_Tvar *),
				 struct _tuple17 *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T2)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct _tuple18 * (* _T3)(struct _tuple17 *,struct Cyc_Absyn_Tvar *);
  struct _tuple17 * _T4;
  struct Cyc_Absyn_Datatypedecl * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * (* _T7)(void * (*)(struct _tuple18 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T8)(void * (*)(void *),struct Cyc_List_List *);
  void * (* _T9)(struct _tuple18 *);
  void * (* _TA)(struct _tuple0 *);
  struct Cyc_List_List * _TB;
  union Cyc_Absyn_DatatypeFieldInfo _TC;
  struct Cyc_List_List * _TD;
  void * * _TE;
  void * _TF;
  int * _T10;
  int _T11;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T12;
  void * _T13;
  int * _T14;
  int _T15;
  void * * _T16;
  void * _T17;
  void * _T18;
  struct Cyc_Absyn_Datatypefield * _T19;
  struct Cyc_List_List * _T1A;
  void * _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct _tuple21 * _T1F;
  struct _tuple21 _T20;
  void * _T21;
  struct Cyc_Tcenv_Tenv * _T22;
  void * * _T23;
  struct Cyc_Absyn_Exp * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_Absyn_Exp * _T26;
  void * _T27;
  long * _T28;
  long _T29;
  struct Cyc_Warn_String_Warn_Warg_struct _T2A;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T2B;
  struct Cyc_Absyn_Datatypefield * _T2C;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T2E;
  struct Cyc_Warn_String_Warn_Warg_struct _T2F;
  struct Cyc_Warn_String_Warn_Warg_struct _T30;
  struct Cyc_Absyn_Exp * _T31;
  void * _T32;
  struct _fat_ptr _T33;
  struct Cyc_Absyn_Exp * _T34;
  void * _T35;
  struct Cyc_Absyn_Exp * _T36;
  unsigned int _T37;
  struct _fat_ptr _T38;
  struct Cyc_List_List * _T39;
  struct Cyc_List_List * _T3A;
  void * _T3B;
  struct Cyc_Warn_String_Warn_Warg_struct _T3C;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T3D;
  struct Cyc_Absyn_Datatypefield * _T3E;
  struct Cyc_Tcenv_Tenv * _T3F;
  struct Cyc_List_List * _T40;
  void * _T41;
  struct Cyc_Absyn_Exp * _T42;
  unsigned int _T43;
  void * * _T44;
  struct _fat_ptr _T45;
  void * _T46;
  struct Cyc_Warn_String_Warn_Warg_struct _T47;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T48;
  struct Cyc_Absyn_Datatypefield * _T49;
  struct Cyc_Tcenv_Tenv * _T4A;
  unsigned int _T4B;
  void * * _T4C;
  struct _fat_ptr _T4D;
  void * _T4E;
  { struct _tuple17 _T4F;
    _T4F.f0 = Cyc_Tcenv_lookup_type_vars(te);
    _T4F.f1 = Cyc_Core_heap_region;
    _T0 = _T4F;
  }{ struct _tuple17 env = _T0;
    _T2 = Cyc_List_map_c;
    { struct Cyc_List_List * (* _T4F)(struct _tuple18 * (*)(struct _tuple17 *,
							    struct Cyc_Absyn_Tvar *),
				      struct _tuple17 *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple18 * (*)(struct _tuple17 *,
																    struct Cyc_Absyn_Tvar *),
													      struct _tuple17 *,
													      struct Cyc_List_List *))_T2;
      _T1 = _T4F;
    }_T3 = Cyc_Tcutil_r_make_inst_var;
    _T4 = &env;
    _T5 = tud;
    _T6 = _T5->tvs;
    { struct Cyc_List_List * inst = _T1(_T3,_T4,_T6);
      _T8 = Cyc_List_map;
      { struct Cyc_List_List * (* _T4F)(void * (*)(struct _tuple18 *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct _tuple18 *),
															    struct Cyc_List_List *))_T8;
	_T7 = _T4F;
      }_TA = Cyc_Core_snd;
      { void * (* _T4F)(struct _tuple18 *) = (void * (*)(struct _tuple18 *))_TA;
	_T9 = _T4F;
      }_TB = inst;
      { struct Cyc_List_List * all_typs = _T7(_T9,_TB);
	_TC = Cyc_Absyn_KnownDatatypefield(tud,tuf);
	_TD = all_typs;
	{ void * res = Cyc_Absyn_datatype_field_type(_TC,_TD);
	  if (topt == 0) { goto _TL408;
	  }
	  _TE = topt;
	  _TF = *_TE;
	  { void * _T4F = Cyc_Absyn_compress(_TF);
	    _T10 = (int *)_T4F;
	    _T11 = *_T10;
	    if (_T11 != 0) { goto _TL40A;
	    }
	    _T12 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T4F;
	    _T13 = _T12->f1;
	    _T14 = (int *)_T13;
	    _T15 = *_T14;
	    if (_T15 != 23) { goto _TL40C;
	    }
	    _T16 = topt;
	    _T17 = *_T16;
	    _T18 = res;
	    Cyc_Unify_unify(_T17,_T18);
	    goto _LL0;
	    _TL40C: goto _LL3;
	    _TL40A: _LL3: goto _LL0;
	    _LL0: ;
	  }goto _TL409;
	  _TL408: _TL409: _T19 = tuf;
	  { struct Cyc_List_List * ts = _T19->typs;
	    _TL411: if (es != 0) { goto _TL412;
	    }else { goto _TL410;
	    }
	    _TL412: if (ts != 0) { goto _TL40F;
	    }else { goto _TL410;
	    }
	    _TL40F: { long bogus = 0;
	      _T1A = es;
	      _T1B = _T1A->hd;
	      { struct Cyc_Absyn_Exp * e = (struct Cyc_Absyn_Exp *)_T1B;
		_T1C = inst;
		_T1D = ts;
		_T1E = _T1D->hd;
		_T1F = (struct _tuple21 *)_T1E;
		_T20 = *_T1F;
		_T21 = _T20.f1;
		{ void * t = Cyc_Tcutil_substitute(_T1C,_T21);
		  _T22 = te;
		  _T23 = &t;
		  _T24 = e;
		  Cyc_Tcexp_tcExpInitializer(_T22,_T23,_T24);
		  _T25 = Cyc_Tcenv_curr_aquals_bounds(te);
		  _T26 = e;
		  _T27 = t;
		  _T28 = &bogus;
		  _T29 = Cyc_Tcutil_coerce_arg(_T25,_T26,_T27,_T28);
		  if (_T29) { goto _TL413;
		  }else { goto _TL415;
		  }
		  _TL415: { struct Cyc_Warn_String_Warn_Warg_struct _T4F;
		    _T4F.tag = 0;
		    _T4F.f1 = _tag_fat("datatype constructor ",sizeof(char),
				       22U);
		    _T2A = _T4F;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T4F = _T2A;
		    { struct Cyc_Warn_Qvar_Warn_Warg_struct _T50;
		      _T50.tag = 1;
		      _T2C = tuf;
		      _T50.f1 = _T2C->name;
		      _T2B = _T50;
		    }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T50 = _T2B;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T51;
			_T51.tag = 0;
			_T51.f1 = _tag_fat(" expects argument of type ",sizeof(char),
					   27U);
			_T2D = _T51;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T51 = _T2D;
			{ struct Cyc_Warn_Typ_Warn_Warg_struct _T52;
			  _T52.tag = 2;
			  _T52.f1 = t;
			  _T2E = _T52;
			}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T52 = _T2E;
			  { struct Cyc_Warn_String_Warn_Warg_struct _T53;
			    _T53.tag = 0;
			    _T53.f1 = _tag_fat(" but this argument has type ",
					       sizeof(char),29U);
			    _T2F = _T53;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T53 = _T2F;
			    { struct Cyc_Warn_String_Warn_Warg_struct _T54;
			      _T54.tag = 0;
			      _T31 = e;
			      _T32 = _T31->topt;
			      if (_T32 != 0) { goto _TL416;
			      }
			      _T33 = _tag_fat("?",sizeof(char),2U);
			      _T54.f1 = _T33;
			      goto _TL417;
			      _TL416: _T34 = e;
			      _T35 = _T34->topt;
			      _T54.f1 = Cyc_Absynpp_typ2string(_T35);
			      _TL417: _T30 = _T54;
			    }{ struct Cyc_Warn_String_Warn_Warg_struct _T54 = _T30;
			      void * _T55[6];
			      _T55[0] = &_T4F;
			      _T55[1] = &_T50;
			      _T55[2] = &_T51;
			      _T55[3] = &_T52;
			      _T55[4] = &_T53;
			      _T55[5] = &_T54;
			      _T36 = e;
			      _T37 = _T36->loc;
			      _T38 = _tag_fat(_T55,sizeof(void *),6);
			      Cyc_Warn_err2(_T37,_T38);
			    }
			  }
			}
		      }
		    }
		  }Cyc_Unify_explain_failure();
		  goto _TL414;
		  _TL413: _TL414: ;
		}
	      }
	    }_T39 = es;
	    es = _T39->tl;
	    _T3A = ts;
	    ts = _T3A->tl;
	    goto _TL411;
	    _TL410: if (es == 0) { goto _TL418;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T4F;
	      _T4F.tag = 0;
	      _T4F.f1 = _tag_fat("too many arguments for datatype constructor ",
				 sizeof(char),45U);
	      _T3C = _T4F;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T4F = _T3C;
	      { struct Cyc_Warn_Qvar_Warn_Warg_struct _T50;
		_T50.tag = 1;
		_T3E = tuf;
		_T50.f1 = _T3E->name;
		_T3D = _T50;
	      }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T50 = _T3D;
		void * _T51[2];
		_T51[0] = &_T4F;
		_T51[1] = &_T50;
		_T3F = te;
		_T40 = es;
		_T41 = _T40->hd;
		_T42 = (struct Cyc_Absyn_Exp *)_T41;
		_T43 = _T42->loc;
		_T44 = topt;
		_T45 = _tag_fat(_T51,sizeof(void *),2);
		_T3B = Cyc_Tcexp_expr_err(_T3F,_T43,_T44,_T45);
	      }
	    }return _T3B;
	    _TL418: if (ts == 0) { goto _TL41A;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T4F;
	      _T4F.tag = 0;
	      _T4F.f1 = _tag_fat("too few arguments for datatype constructor ",
				 sizeof(char),44U);
	      _T47 = _T4F;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T4F = _T47;
	      { struct Cyc_Warn_Qvar_Warn_Warg_struct _T50;
		_T50.tag = 1;
		_T49 = tuf;
		_T50.f1 = _T49->name;
		_T48 = _T50;
	      }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T50 = _T48;
		void * _T51[2];
		_T51[0] = &_T4F;
		_T51[1] = &_T50;
		_T4A = te;
		_T4B = loc;
		_T4C = topt;
		_T4D = _tag_fat(_T51,sizeof(void *),2);
		_T46 = Cyc_Tcexp_expr_err(_T4A,_T4B,_T4C,_T4D);
	      }
	    }return _T46;
	    _TL41A: _T4E = res;
	    return _T4E;
	  }
	}
      }
    }
  }
}
static long Cyc_Tcexp_check_malloc_type(long allow_zero,unsigned int loc,
					void * * topt,void * t) {
  long _T0;
  long _T1;
  long _T2;
  void * * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  struct Cyc_Absyn_PtrInfo _T7;
  long _T8;
  _T0 = Cyc_Tcutil_is_bits_only_type(t);
  if (_T0) { goto _TL41E;
  }else { goto _TL41F;
  }
  _TL41F: _T1 = allow_zero;
  if (_T1) { goto _TL420;
  }else { goto _TL41C;
  }
  _TL420: _T2 = Cyc_Tcutil_zeroable_type(t);
  if (_T2) { goto _TL41E;
  }else { goto _TL41C;
  }
  _TL41E: return 1;
  _TL41C: if (topt != 0) { goto _TL421;
  }
  return 0;
  _TL421: _T3 = topt;
  _T4 = *_T3;
  { void * _T9 = Cyc_Absyn_compress(_T4);
    void * _TA;
    _T5 = (int *)_T9;
    _T6 = *_T5;
    if (_T6 != 4) { goto _TL423;
    }
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TB = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T9;
      _T7 = _TB->f1;
      _TA = _T7.elt_type;
    }{ void * elt_typ = _TA;
      Cyc_Unify_unify(elt_typ,t);
      _T8 = Cyc_Tcexp_check_malloc_type(allow_zero,loc,0,t);
      return _T8;
    }_TL423: return 0;
    ;
  }
}
static void * Cyc_Tcexp_mallocRgn(void * rgn) {
  void * _T0;
  _T0 = Cyc_Absyn_heap_rgn_type;
  return _T0;
}
static void * Cyc_Tcexp_tcMalloc(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				 void * * topt,struct Cyc_Absyn_Exp * * ropt,
				 struct Cyc_Absyn_Exp * * aqopt,void * * * t,
				 struct Cyc_Absyn_Exp * * e,enum Cyc_Absyn_MallocKind * mknd,
				 long * is_fat) {
  struct Cyc_Absyn_Exp * * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct Cyc_Core_Opt * _T2;
  struct Cyc_Core_Opt * _T3;
  struct Cyc_Core_Opt * _T4;
  void * _T5;
  struct Cyc_Tcenv_Tenv * _T6;
  void * * _T7;
  struct Cyc_Absyn_Exp * * _T8;
  struct Cyc_Absyn_Exp * _T9;
  struct Cyc_Absyn_Exp * _TA;
  int * _TB;
  int _TC;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TD;
  void * _TE;
  int * _TF;
  int _T10;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  void * _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T16;
  struct Cyc_Absyn_Exp * * _T17;
  struct Cyc_Absyn_Exp * _T18;
  struct Cyc_Absyn_Exp * _T19;
  unsigned int _T1A;
  struct _fat_ptr _T1B;
  void * * _T1C;
  void * _T1D;
  void * * _T1E;
  long _T1F;
  struct Cyc_Absyn_Exp * * _T20;
  struct Cyc_Absyn_Exp * _T21;
  struct Cyc_Core_Opt * _T22;
  struct Cyc_Core_Opt * _T23;
  struct Cyc_Core_Opt * _T24;
  void * _T25;
  struct Cyc_Tcenv_Tenv * _T26;
  void * * _T27;
  struct Cyc_Absyn_Exp * * _T28;
  struct Cyc_Absyn_Exp * _T29;
  struct Cyc_Absyn_Exp * _T2A;
  int * _T2B;
  int _T2C;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2D;
  void * _T2E;
  int * _T2F;
  int _T30;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T31;
  struct Cyc_List_List * _T32;
  struct Cyc_List_List * _T33;
  void * _T34;
  struct Cyc_Warn_String_Warn_Warg_struct _T35;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T36;
  struct Cyc_Absyn_Exp * * _T37;
  struct Cyc_Absyn_Exp * _T38;
  struct Cyc_Absyn_Exp * _T39;
  unsigned int _T3A;
  struct _fat_ptr _T3B;
  struct Cyc_List_List * _T3C;
  void * * _T3D;
  void * _T3E;
  void * _T3F;
  int * _T40;
  int _T41;
  void * _T42;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T43;
  void * _T44;
  int * _T45;
  int _T46;
  void * _T47;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T48;
  void * _T49;
  struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct * _T4A;
  enum Cyc_Absyn_AliasQualVal _T4B;
  struct Cyc_Absyn_Exp * * _T4C;
  struct Cyc_Tcenv_Tenv * _T4D;
  void * * _T4E;
  struct Cyc_Absyn_Exp * * _T4F;
  struct Cyc_Absyn_Exp * _T50;
  enum Cyc_Absyn_MallocKind * _T51;
  enum Cyc_Absyn_MallocKind _T52;
  int _T53;
  void * * * _T54;
  void * * _T55;
  struct Cyc_Warn_String_Warn_Warg_struct _T56;
  int (* _T57)(struct _fat_ptr);
  void * (* _T58)(struct _fat_ptr);
  struct _fat_ptr _T59;
  void * * * _T5A;
  void * * _T5B;
  unsigned int _T5C;
  struct Cyc_Tcenv_Tenv * _T5D;
  struct Cyc_List_List * _T5E;
  struct Cyc_Absyn_Kind * _T5F;
  struct Cyc_Absyn_Kind * _T60;
  void * _T61;
  long _T62;
  struct Cyc_Warn_String_Warn_Warg_struct _T63;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T64;
  struct Cyc_Warn_String_Warn_Warg_struct _T65;
  unsigned int _T66;
  struct _fat_ptr _T67;
  struct Cyc_Absyn_Exp * * _T68;
  struct Cyc_Absyn_Exp * * _T69;
  struct Cyc_Absyn_Exp * _T6A;
  void * _T6B;
  int * _T6C;
  unsigned int _T6D;
  void * _T6E;
  void * _T6F;
  void * * * _T70;
  void * * _T71;
  struct Cyc_Tcenv_Tenv * _T72;
  void * * _T73;
  struct Cyc_Absyn_Exp * _T74;
  void * _T75;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T76;
  enum Cyc_Absyn_Primop _T77;
  void * _T78;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T79;
  struct Cyc_List_List * _T7A;
  void * _T7B;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T7C;
  struct Cyc_List_List * _T7D;
  struct Cyc_List_List * _T7E;
  struct Cyc_List_List * _T7F;
  void * _T80;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T81;
  struct Cyc_List_List * _T82;
  struct Cyc_List_List * _T83;
  struct Cyc_List_List * _T84;
  struct Cyc_List_List * _T85;
  struct Cyc_List_List * _T86;
  void * _T87;
  struct Cyc_List_List * _T88;
  void * _T89;
  struct Cyc_List_List * _T8A;
  void * _T8B;
  struct _tuple0 _T8C;
  struct Cyc_Absyn_Exp * _T8D;
  struct Cyc_Absyn_Exp * _T8E;
  void * _T8F;
  int * _T90;
  int _T91;
  void * _T92;
  void * _T93;
  void * _T94;
  int * _T95;
  int _T96;
  void * _T97;
  void * _T98;
  long _T99;
  long _T9A;
  struct Cyc_Warn_String_Warn_Warg_struct _T9B;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T9C;
  struct Cyc_Warn_String_Warn_Warg_struct _T9D;
  unsigned int _T9E;
  struct _fat_ptr _T9F;
  enum Cyc_Absyn_MallocKind * _TA0;
  void * * * _TA1;
  void * * _TA2;
  struct Cyc_Absyn_Exp * * _TA3;
  struct Cyc_Absyn_Exp * _TA4;
  int * _TA5;
  int _TA6;
  struct Cyc_Absyn_Exp * _TA7;
  void * _TA8;
  void * _TA9;
  int * _TAA;
  int _TAB;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TAC;
  void * _TAD;
  int * _TAE;
  int _TAF;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB0;
  struct Cyc_List_List * _TB1;
  struct Cyc_List_List * _TB2;
  void * _TB3;
  int * _TB4;
  int _TB5;
  struct Cyc_Absyn_Exp * _TB6;
  void * * * _TB7;
  void * * _TB8;
  struct Cyc_Absyn_Exp * * _TB9;
  long * _TBA;
  void * _TBB;
  int * _TBC;
  int _TBD;
  void * _TBE;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TBF;
  void * _TC0;
  int * _TC1;
  int _TC2;
  void * _TC3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TC4;
  void * _TC5;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TC6;
  union Cyc_Absyn_AggrInfo _TC7;
  struct _union_AggrInfo_KnownAggr _TC8;
  unsigned int _TC9;
  void * _TCA;
  void * _TCB;
  union Cyc_Absyn_AggrInfo _TCC;
  struct _union_AggrInfo_KnownAggr _TCD;
  struct Cyc_Absyn_Aggrdecl * * _TCE;
  struct Cyc_Absyn_Aggrdecl * _TCF;
  struct Cyc_Absyn_AggrdeclImpl * _TD0;
  struct Cyc_Absyn_Aggrdecl * _TD1;
  struct Cyc_Absyn_AggrdeclImpl * _TD2;
  struct Cyc_List_List * _TD3;
  struct Cyc_Warn_String_Warn_Warg_struct _TD4;
  unsigned int _TD5;
  struct _fat_ptr _TD6;
  void * * _TD7;
  void * _TD8;
  int * _TD9;
  int _TDA;
  struct Cyc_Absyn_PtrInfo _TDB;
  struct Cyc_Absyn_PtrAtts _TDC;
  struct Cyc_Absyn_PtrInfo _TDD;
  struct Cyc_Absyn_PtrAtts _TDE;
  struct Cyc_Absyn_PtrInfo _TDF;
  struct Cyc_Absyn_PtrAtts _TE0;
  struct Cyc_Absyn_PtrInfo _TE1;
  struct Cyc_Absyn_PtrAtts _TE2;
  long _TE3;
  struct Cyc_Warn_String_Warn_Warg_struct _TE4;
  unsigned int _TE5;
  struct _fat_ptr _TE6;
  long _TE7;
  long _TE8;
  enum Cyc_Absyn_MallocKind * _TE9;
  enum Cyc_Absyn_MallocKind _TEA;
  int _TEB;
  struct Cyc_Warn_String_Warn_Warg_struct _TEC;
  unsigned int _TED;
  struct _fat_ptr _TEE;
  enum Cyc_Absyn_MallocKind * _TEF;
  long _TF0;
  void * _TF1;
  void * _TF2;
  long _TF3;
  long _TF4;
  long _TF5;
  long * _TF6;
  void * _TF7;
  void * _TF8;
  void * _TF9;
  struct Cyc_Absyn_Tqual _TFA;
  void * _TFB;
  void * _TFC;
  void * _TFD;
  void * _TFE;
  struct Cyc_Absyn_Exp * _TFF;
  void * _T100;
  int * _T101;
  int _T102;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T103;
  void * _T104;
  int * _T105;
  int _T106;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T107;
  struct Cyc_List_List * _T108;
  struct Cyc_List_List * _T109;
  void * _T10A;
  void * _T10B;
  struct Cyc_Absyn_Exp * _T10C;
  long _T10D;
  long * _T10E;
  void * _T10F;
  void * _T110;
  void * _T111;
  struct Cyc_Absyn_Tqual _T112;
  void * _T113;
  void * _T114;
  void * _T115;
  void * _T116;
  enum Cyc_Absyn_MallocKind * _T117;
  enum Cyc_Absyn_MallocKind _T118;
  int _T119;
  long _T11A;
  unsigned int _T11B;
  void * _T11C;
  void * _T11D;
  void * _T11E;
  void * _T11F;
  long _T120;
  struct Cyc_Warn_String_Warn_Warg_struct _T121;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T122;
  void * * _T123;
  unsigned int _T124;
  struct _fat_ptr _T125;
  long _T126;
  void * _T127;
  void * _T128;
  void * _T129;
  struct Cyc_Absyn_Tqual _T12A;
  void * _T12B;
  void * _T12C;
  void * _T12D;
  void * rgn = Cyc_Absyn_heap_rgn_type;
  _T0 = ropt;
  _T1 = *_T0;
  if (_T1 == 0) { goto _TL425;
  }
  _T2 = &Cyc_Kinds_eko;
  _T3 = (struct Cyc_Core_Opt *)_T2;
  _T4 = Cyc_Tcenv_lookup_opt_type_vars(te);
  _T5 = Cyc_Absyn_new_evar(_T3,_T4);
  { void * expected_type = Cyc_Absyn_rgn_handle_type(_T5);
    _T6 = te;
    _T7 = &expected_type;
    _T8 = ropt;
    _T9 = *_T8;
    _TA = _check_null(_T9);
    { void * handle_type = Cyc_Tcexp_tcExp(_T6,_T7,_TA);
      void * _T12E = Cyc_Absyn_compress(handle_type);
      void * _T12F;
      _TB = (int *)_T12E;
      _TC = *_TB;
      if (_TC != 0) { goto _TL427;
      }
      _TD = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12E;
      _TE = _TD->f1;
      _TF = (int *)_TE;
      _T10 = *_TF;
      if (_T10 != 4) { goto _TL429;
      }
      _T11 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12E;
      _T12 = _T11->f2;
      if (_T12 == 0) { goto _TL42B;
      }
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T130 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12E;
	_T13 = _T130->f2;
	{ struct Cyc_List_List _T131 = *_T13;
	  _T14 = _T131.hd;
	  _T12F = (void *)_T14;
	}
      }{ void * r = _T12F;
	rgn = r;
	Cyc_Tcenv_check_effect_accessible_nodelay(te,loc,rgn);
	goto _LL0;
      }_TL42B: goto _LL3;
      _TL429: goto _LL3;
      _TL427: _LL3: { struct Cyc_Warn_String_Warn_Warg_struct _T130;
	_T130.tag = 0;
	_T130.f1 = _tag_fat("expecting region_t type but found ",sizeof(char),
			    35U);
	_T15 = _T130;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T130 = _T15;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T131;
	  _T131.tag = 2;
	  _T131.f1 = handle_type;
	  _T16 = _T131;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T131 = _T16;
	  void * _T132[2];
	  _T132[0] = &_T130;
	  _T132[1] = &_T131;
	  _T17 = ropt;
	  _T18 = *_T17;
	  _T19 = _check_null(_T18);
	  _T1A = _T19->loc;
	  _T1B = _tag_fat(_T132,sizeof(void *),2);
	  Cyc_Warn_err2(_T1A,_T1B);
	}
      }goto _LL0;
      _LL0: ;
    }
  }goto _TL426;
  _TL425: if (topt == 0) { goto _TL42D;
  }
  { void * optrgn = Cyc_Absyn_void_type;
    _T1C = topt;
    _T1D = *_T1C;
    _T1E = &optrgn;
    _T1F = Cyc_Tcutil_rgn_of_pointer(_T1D,_T1E);
    if (! _T1F) { goto _TL42F;
    }
    rgn = Cyc_Tcexp_mallocRgn(optrgn);
    goto _TL430;
    _TL42F: _TL430: ;
  }goto _TL42E;
  _TL42D: _TL42E: _TL426: { void * aqual_type = Cyc_Absyn_al_qual_type;
    _T20 = aqopt;
    _T21 = *_T20;
    if (_T21 == 0) { goto _TL431;
    }
    _T22 = &Cyc_Kinds_aqko;
    _T23 = (struct Cyc_Core_Opt *)_T22;
    _T24 = Cyc_Tcenv_lookup_opt_type_vars(te);
    _T25 = Cyc_Absyn_new_evar(_T23,_T24);
    { void * expected_type = Cyc_Absyn_aqual_handle_type(_T25);
      _T26 = te;
      _T27 = &expected_type;
      _T28 = aqopt;
      _T29 = *_T28;
      _T2A = _check_null(_T29);
      { void * qhandle_type = Cyc_Tcexp_tcExp(_T26,_T27,_T2A);
	void * _T12E = Cyc_Absyn_compress(qhandle_type);
	void * _T12F;
	_T2B = (int *)_T12E;
	_T2C = *_T2B;
	if (_T2C != 0) { goto _TL433;
	}
	_T2D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12E;
	_T2E = _T2D->f1;
	_T2F = (int *)_T2E;
	_T30 = *_T2F;
	if (_T30 != 18) { goto _TL435;
	}
	_T31 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12E;
	_T32 = _T31->f2;
	if (_T32 == 0) { goto _TL437;
	}
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T130 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12E;
	  _T33 = _T130->f2;
	  { struct Cyc_List_List _T131 = *_T33;
	    _T34 = _T131.hd;
	    _T12F = (void *)_T34;
	  }
	}{ void * aq = _T12F;
	  aqual_type = aq;
	  goto _LL5;
	}_TL437: goto _LL8;
	_TL435: goto _LL8;
	_TL433: _LL8: { struct Cyc_Warn_String_Warn_Warg_struct _T130;
	  _T130.tag = 0;
	  _T130.f1 = _tag_fat("expecting aqual_t type but found ",sizeof(char),
			      34U);
	  _T35 = _T130;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T130 = _T35;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T131;
	    _T131.tag = 2;
	    _T131.f1 = qhandle_type;
	    _T36 = _T131;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T131 = _T36;
	    void * _T132[2];
	    _T132[0] = &_T130;
	    _T132[1] = &_T131;
	    _T37 = ropt;
	    _T38 = *_T37;
	    _T39 = _check_null(_T38);
	    _T3A = _T39->loc;
	    _T3B = _tag_fat(_T132,sizeof(void *),2);
	    Cyc_Warn_err2(_T3A,_T3B);
	  }
	}goto _LL5;
	_LL5: ;
      }
    }goto _TL432;
    _TL431: if (topt == 0) { goto _TL439;
    }
    _T3C = Cyc_Tcenv_curr_aquals_bounds(te);
    _T3D = topt;
    _T3E = *_T3D;
    { void * aq = Cyc_Tcutil_eval_aquals_of(_T3C,_T3E);
      if (aq == 0) { goto _TL43B;
      }
      if (aq == 0) { goto _TL43D;
      }
      _T3F = aq;
      _T40 = (int *)_T3F;
      _T41 = *_T40;
      if (_T41 != 0) { goto _TL43F;
      }
      _T42 = aq;
      _T43 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T42;
      _T44 = _T43->f1;
      _T45 = (int *)_T44;
      _T46 = *_T45;
      if (_T46 != 16) { goto _TL441;
      }
      _T47 = aq;
      _T48 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T47;
      _T49 = _T48->f1;
      _T4A = (struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct *)_T49;
      _T4B = _T4A->f1;
      if (_T4B != Cyc_Absyn_Unique_qual) { goto _TL443;
      }
      aqual_type = Cyc_Absyn_un_qual_type;
      _T4C = aqopt;
      *_T4C = Cyc_Absyn_uniqueaqual_exp();
      goto _LLA;
      _TL443: goto _LLD;
      _TL441: goto _LLD;
      _TL43F: goto _LLD;
      _TL43D: _LLD: goto _LLA;
      _LLA: goto _TL43C;
      _TL43B: _TL43C: ;
    }goto _TL43A;
    _TL439: _TL43A: _TL432: _T4D = Cyc_Tcenv_clear_abstract_val_ok(te);
    _T4E = &Cyc_Absyn_uint_type;
    _T4F = e;
    _T50 = *_T4F;
    Cyc_Tcexp_tcExp(_T4D,_T4E,_T50);
    { void * elt_type;
      struct Cyc_Absyn_Exp * num_elts;
      long one_elt;
      _T51 = mknd;
      _T52 = *_T51;
      _T53 = (int)_T52;
      if (_T53 != 1) { goto _TL445;
      }
      _T54 = t;
      _T55 = *_T54;
      if (_T55 != 0) { goto _TL447;
      }
      { struct Cyc_Warn_String_Warn_Warg_struct _T12E;
	_T12E.tag = 0;
	_T12E.f1 = _tag_fat("calloc with empty type",sizeof(char),23U);
	_T56 = _T12E;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T12E = _T56;
	void * _T12F[1];
	_T12F[0] = &_T12E;
	_T58 = Cyc_Warn_impos2;
	{ int (* _T130)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T58;
	  _T57 = _T130;
	}_T59 = _tag_fat(_T12F,sizeof(void *),1);
	_T57(_T59);
      }goto _TL448;
      _TL447: _TL448: _T5A = t;
      _T5B = *_T5A;
      elt_type = *_T5B;
      _T5C = loc;
      _T5D = te;
      _T5E = Cyc_Tcenv_lookup_type_vars(te);
      _T5F = &Cyc_Kinds_mk;
      _T60 = (struct Cyc_Absyn_Kind *)_T5F;
      _T61 = elt_type;
      Cyc_Tctyp_check_type(_T5C,_T5D,_T5E,_T60,1,0,_T61);
      Cyc_Tcutil_check_no_qual(loc,elt_type);
      _T62 = Cyc_Tcexp_check_malloc_type(1,loc,topt,elt_type);
      if (_T62) { goto _TL449;
      }else { goto _TL44B;
      }
      _TL44B: { struct Cyc_Warn_String_Warn_Warg_struct _T12E;
	_T12E.tag = 0;
	_T12E.f1 = _tag_fat("calloc cannot be used with type ",sizeof(char),
			    33U);
	_T63 = _T12E;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T12E = _T63;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T12F;
	  _T12F.tag = 2;
	  _T12F.f1 = elt_type;
	  _T64 = _T12F;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T12F = _T64;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T130;
	    _T130.tag = 0;
	    _T130.f1 = _tag_fat("\n\t(type needs initialization)",sizeof(char),
				30U);
	    _T65 = _T130;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T130 = _T65;
	    void * _T131[3];
	    _T131[0] = &_T12E;
	    _T131[1] = &_T12F;
	    _T131[2] = &_T130;
	    _T66 = loc;
	    _T67 = _tag_fat(_T131,sizeof(void *),3);
	    Cyc_Warn_err2(_T66,_T67);
	  }
	}
      }goto _TL44A;
      _TL449: _TL44A: _T68 = e;
      num_elts = *_T68;
      one_elt = 0;
      goto _TL446;
      _TL445: _T69 = e;
      _T6A = *_T69;
      { void * er = _T6A->r;
	retry_sizeof: { struct Cyc_Absyn_Exp * _T12E;
	  struct Cyc_Absyn_Exp * _T12F;
	  void * _T130;
	  _T6B = er;
	  _T6C = (int *)_T6B;
	  _T6D = *_T6C;
	  switch (_T6D) {
	  case 17: 
	    _T6E = er;
	    { struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T131 = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T6E;
	      _T6F = _T131->f1;
	      _T130 = (void *)_T6F;
	    }{ void * t2 = _T130;
	      elt_type = t2;
	      _T70 = t;
	      { void * * _T131 = _cycalloc(sizeof(void *));
		*_T131 = elt_type;
		_T71 = (void * *)_T131;
	      }*_T70 = _T71;
	      num_elts = Cyc_Absyn_uint_exp(1U,0U);
	      _T72 = te;
	      _T73 = &Cyc_Absyn_uint_type;
	      _T74 = num_elts;
	      Cyc_Tcexp_tcExp(_T72,_T73,_T74);
	      one_elt = 1;
	      goto _LLF;
	    }
	  case 3: 
	    _T75 = er;
	    _T76 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T75;
	    _T77 = _T76->f1;
	    if (_T77 != Cyc_Absyn_Times) { goto _TL44D;
	    }
	    _T78 = er;
	    _T79 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T78;
	    _T7A = _T79->f2;
	    if (_T7A == 0) { goto _TL44F;
	    }
	    _T7B = er;
	    _T7C = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T7B;
	    _T7D = _T7C->f2;
	    _T7E = (struct Cyc_List_List *)_T7D;
	    _T7F = _T7E->tl;
	    if (_T7F == 0) { goto _TL451;
	    }
	    _T80 = er;
	    _T81 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T80;
	    _T82 = _T81->f2;
	    _T83 = (struct Cyc_List_List *)_T82;
	    _T84 = _T83->tl;
	    _T85 = (struct Cyc_List_List *)_T84;
	    _T86 = _T85->tl;
	    if (_T86 != 0) { goto _TL453;
	    }
	    _T87 = er;
	    { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T131 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T87;
	      _T88 = _T131->f2;
	      { struct Cyc_List_List _T132 = *_T88;
		_T89 = _T132.hd;
		_T12F = (struct Cyc_Absyn_Exp *)_T89;
		_T8A = _T132.tl;
		{ struct Cyc_List_List _T133 = *_T8A;
		  _T8B = _T133.hd;
		  _T12E = (struct Cyc_Absyn_Exp *)_T8B;
		}
	      }
	    }{ struct Cyc_Absyn_Exp * e1 = _T12F;
	      struct Cyc_Absyn_Exp * e2 = _T12E;
	      { struct _tuple0 _T131;
		_T8D = e1;
		_T131.f0 = _T8D->r;
		_T8E = e2;
		_T131.f1 = _T8E->r;
		_T8C = _T131;
	      }{ struct _tuple0 _T131 = _T8C;
		void * _T132;
		_T8F = _T131.f0;
		_T90 = (int *)_T8F;
		_T91 = *_T90;
		if (_T91 != 17) { goto _TL455;
		}
		_T92 = _T131.f0;
		{ struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T133 = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T92;
		  _T93 = _T133->f1;
		  _T132 = (void *)_T93;
		}{ void * t1 = _T132;
		  e1 = e2;
		  _T132 = t1;
		  goto _LL1A;
		}_TL455: _T94 = _T131.f1;
		_T95 = (int *)_T94;
		_T96 = *_T95;
		if (_T96 != 17) { goto _TL457;
		}
		_T97 = _T131.f1;
		{ struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T133 = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T97;
		  _T98 = _T133->f1;
		  _T132 = (void *)_T98;
		}_LL1A: { void * t2 = _T132;
		  _T99 = Cyc_Tcexp_check_malloc_type(0,loc,topt,t2);
		  if (_T99) { goto _TL459;
		  }else { goto _TL45B;
		  }
		  _TL45B: _T9A = Cyc_Tcexp_check_malloc_type(1,loc,topt,t2);
		  if (_T9A) { goto _TL45C;
		  }else { goto _TL45E;
		  }
		  _TL45E: { struct Cyc_Warn_String_Warn_Warg_struct _T133;
		    _T133.tag = 0;
		    _T133.f1 = _tag_fat("malloc cannot be used with type ",
					sizeof(char),33U);
		    _T9B = _T133;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T133 = _T9B;
		    { struct Cyc_Warn_Typ_Warn_Warg_struct _T134;
		      _T134.tag = 2;
		      _T134.f1 = t2;
		      _T9C = _T134;
		    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T134 = _T9C;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T135;
			_T135.tag = 0;
			_T135.f1 = _tag_fat("\n\t(type needs initialization)",
					    sizeof(char),30U);
			_T9D = _T135;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T135 = _T9D;
			void * _T136[3];
			_T136[0] = &_T133;
			_T136[1] = &_T134;
			_T136[2] = &_T135;
			_T9E = loc;
			_T9F = _tag_fat(_T136,sizeof(void *),3);
			Cyc_Warn_err2(_T9E,_T9F);
		      }
		    }
		  }goto _TL45D;
		  _TL45C: _TA0 = mknd;
		  *_TA0 = 1U;
		  _TL45D: goto _TL45A;
		  _TL459: _TL45A: elt_type = t2;
		  _TA1 = t;
		  { void * * _T133 = _cycalloc(sizeof(void *));
		    *_T133 = elt_type;
		    _TA2 = (void * *)_T133;
		  }*_TA1 = _TA2;
		  num_elts = e1;
		  one_elt = 0;
		  goto _LL16;
		}_TL457: goto No_sizeof;
		_LL16: ;
	      }goto _LLF;
	    }_TL453: goto _LL14;
	    _TL451: goto _LL14;
	    _TL44F: goto _LL14;
	    _TL44D: goto _LL14;
	  default: 
	    _LL14: No_sizeof: _TA3 = e;
	    { struct Cyc_Absyn_Exp * real_e = *_TA3;
	      _TA4 = real_e;
	      { void * _T131 = _TA4->r;
		struct Cyc_Absyn_Exp * _T132;
		_TA5 = (int *)_T131;
		_TA6 = *_TA5;
		if (_TA6 != 14) { goto _TL45F;
		}
		{ struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T133 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T131;
		  _T132 = _T133->f2;
		}{ struct Cyc_Absyn_Exp * e = _T132;
		  real_e = e;
		  goto _LL1D;
		}_TL45F: goto _LL1D;
		_LL1D: ;
	      }_TA7 = real_e;
	      _TA8 = _TA7->topt;
	      _TA9 = _check_null(_TA8);
	      { void * _T131 = Cyc_Absyn_compress(_TA9);
		void * _T132;
		_TAA = (int *)_T131;
		_TAB = *_TAA;
		if (_TAB != 0) { goto _TL461;
		}
		_TAC = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T131;
		_TAD = _TAC->f1;
		_TAE = (int *)_TAD;
		_TAF = *_TAE;
		if (_TAF != 5) { goto _TL463;
		}
		_TB0 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T131;
		_TB1 = _TB0->f2;
		if (_TB1 == 0) { goto _TL465;
		}
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T133 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T131;
		  _TB2 = _T133->f2;
		  { struct Cyc_List_List _T134 = *_TB2;
		    _TB3 = _T134.hd;
		    _T132 = (void *)_TB3;
		  }
		}{ void * tagt = _T132;
		  { void * _T133 = Cyc_Absyn_compress(tagt);
		    struct Cyc_Absyn_Exp * _T134;
		    _TB4 = (int *)_T133;
		    _TB5 = *_TB4;
		    if (_TB5 != 9) { goto _TL467;
		    }
		    { struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _T135 = (struct Cyc_Absyn_ValueofType_Absyn_Type_struct *)_T133;
		      _T134 = _T135->f1;
		    }{ struct Cyc_Absyn_Exp * vexp = _T134;
		      _TB6 = vexp;
		      er = _TB6->r;
		      goto retry_sizeof;
		    }_TL467: goto _LL27;
		    _LL27: ;
		  }goto _LL22;
		}_TL465: goto _LL25;
		_TL463: goto _LL25;
		_TL461: _LL25: goto _LL22;
		_LL22: ;
	      }elt_type = Cyc_Absyn_char_type;
	      _TB7 = t;
	      { void * * _T131 = _cycalloc(sizeof(void *));
		*_T131 = elt_type;
		_TB8 = (void * *)_T131;
	      }*_TB7 = _TB8;
	      _TB9 = e;
	      num_elts = *_TB9;
	      one_elt = 0;
	    }goto _LLF;
	  }
	  _LLF: ;
	}
      }_TL446: _TBA = is_fat;
      *_TBA = ! one_elt;
      { struct Cyc_Absyn_Aggrdecl * _T12E;
	_TBB = elt_type;
	_TBC = (int *)_TBB;
	_TBD = *_TBC;
	if (_TBD != 0) { goto _TL469;
	}
	_TBE = elt_type;
	_TBF = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TBE;
	_TC0 = _TBF->f1;
	_TC1 = (int *)_TC0;
	_TC2 = *_TC1;
	if (_TC2 != 24) { goto _TL46B;
	}
	_TC3 = elt_type;
	_TC4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TC3;
	_TC5 = _TC4->f1;
	_TC6 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TC5;
	_TC7 = _TC6->f1;
	_TC8 = _TC7.KnownAggr;
	_TC9 = _TC8.tag;
	if (_TC9 != 2) { goto _TL46D;
	}
	_TCA = elt_type;
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T12F = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TCA;
	  _TCB = _T12F->f1;
	  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T130 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TCB;
	    _TCC = _T130->f1;
	    _TCD = _TCC.KnownAggr;
	    _TCE = _TCD.val;
	    { struct Cyc_Absyn_Aggrdecl * _T131 = *_TCE;
	      _T12E = _T131;
	    }
	  }
	}{ struct Cyc_Absyn_Aggrdecl * ad = _T12E;
	  _TCF = ad;
	  _TD0 = _TCF->impl;
	  if (_TD0 == 0) { goto _TL46F;
	  }
	  _TD1 = ad;
	  _TD2 = _TD1->impl;
	  _TD3 = _TD2->exist_vars;
	  if (_TD3 == 0) { goto _TL46F;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T12F;
	    _T12F.tag = 0;
	    _T12F.f1 = _tag_fat("malloc with existential types not yet implemented",
				sizeof(char),50U);
	    _TD4 = _T12F;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T12F = _TD4;
	    void * _T130[1];
	    _T130[0] = &_T12F;
	    _TD5 = loc;
	    _TD6 = _tag_fat(_T130,sizeof(void *),1);
	    Cyc_Warn_err2(_TD5,_TD6);
	  }goto _TL470;
	  _TL46F: _TL470: goto _LL2C;
	}_TL46D: goto _LL2F;
	_TL46B: goto _LL2F;
	_TL469: _LL2F: goto _LL2C;
	_LL2C: ;
      }{ void * (* ptr_maker)(void *,void *,void *,struct Cyc_Absyn_Tqual,
			      void *,void *) = Cyc_Absyn_at_type;
	void * zero_term = Cyc_Absyn_false_type;
	if (topt == 0) { goto _TL471;
	}
	_TD7 = topt;
	_TD8 = *_TD7;
	{ void * _T12E = Cyc_Absyn_compress(_TD8);
	  void * _T12F;
	  void * _T130;
	  void * _T131;
	  void * _T132;
	  _TD9 = (int *)_T12E;
	  _TDA = *_TD9;
	  if (_TDA != 4) { goto _TL473;
	  }
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T133 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T12E;
	    _TDB = _T133->f1;
	    _TDC = _TDB.ptr_atts;
	    _T132 = _TDC.nullable;
	    _TDD = _T133->f1;
	    _TDE = _TDD.ptr_atts;
	    _T131 = _TDE.bounds;
	    _TDF = _T133->f1;
	    _TE0 = _TDF.ptr_atts;
	    _T130 = _TE0.zero_term;
	    _TE1 = _T133->f1;
	    _TE2 = _TE1.ptr_atts;
	    _T12F = _TE2.autoreleased;
	  }{ void * n = _T132;
	    void * b = _T131;
	    void * zt = _T130;
	    void * rel = _T12F;
	    zero_term = zt;
	    _TE3 = Cyc_Tcutil_force_type2bool(0,rel);
	    if (! _TE3) { goto _TL475;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T133;
	      _T133.tag = 0;
	      _T133.f1 = _tag_fat("cannot malloc() an autoreleased pointer",
				  sizeof(char),40U);
	      _TE4 = _T133;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T133 = _TE4;
	      void * _T134[1];
	      _T134[0] = &_T133;
	      _TE5 = loc;
	      _TE6 = _tag_fat(_T134,sizeof(void *),1);
	      Cyc_Warn_err2(_TE5,_TE6);
	    }goto _TL476;
	    _TL475: _TL476: _TE7 = Cyc_Tcutil_force_type2bool(0,n);
	    if (! _TE7) { goto _TL477;
	    }
	    ptr_maker = Cyc_Absyn_star_type;
	    goto _TL478;
	    _TL477: _TL478: _TE8 = Cyc_Tcutil_force_type2bool(0,zt);
	    if (! _TE8) { goto _TL479;
	    }
	    _TE9 = mknd;
	    _TEA = *_TE9;
	    _TEB = (int)_TEA;
	    if (_TEB == 1) { goto _TL479;
	    }else { goto _TL47B;
	    }
	    _TL47B: { struct Cyc_Warn_String_Warn_Warg_struct _T133;
	      _T133.tag = 0;
	      _T133.f1 = _tag_fat("converting malloc to calloc to ensure zero-termination",
				  sizeof(char),55U);
	      _TEC = _T133;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T133 = _TEC;
	      void * _T134[1];
	      _T134[0] = &_T133;
	      _TED = loc;
	      _TEE = _tag_fat(_T134,sizeof(void *),1);
	      Cyc_Warn_warn2(_TED,_TEE);
	    }_TEF = mknd;
	    *_TEF = 1U;
	    goto _TL47A;
	    _TL479: _TL47A: _TF0 = Cyc_Tcutil_is_cvar_type(b);
	    if (_TF0) { goto _TL47C;
	    }else { goto _TL47E;
	    }
	    _TL47E: _TF1 = Cyc_Absyn_bounds_one();
	    _TF2 = b;
	    { struct Cyc_Absyn_Exp * eopt = Cyc_Tcutil_get_bounds_exp(_TF1,
								      _TF2);
	      if (eopt == 0) { goto _TL47F;
	      }
	      _TF3 = one_elt;
	      if (_TF3) { goto _TL47F;
	      }else { goto _TL481;
	      }
	      _TL481: { struct Cyc_Absyn_Exp * upper_exp = eopt;
		long is_constant = Cyc_Evexp_c_can_eval(num_elts);
		_TF4 = is_constant;
		if (! _TF4) { goto _TL482;
		}
		_TF5 = Cyc_Evexp_same_uint_const_exp(upper_exp,num_elts);
		if (! _TF5) { goto _TL482;
		}
		_TF6 = is_fat;
		*_TF6 = 0;
		_TF7 = elt_type;
		_TF8 = rgn;
		_TF9 = aqual_type;
		_TFA = Cyc_Absyn_empty_tqual(0U);
		_TFB = b;
		_TFC = zero_term;
		_TFD = Cyc_Absyn_false_type;
		_TFE = Cyc_Absyn_atb_type(_TF7,_TF8,_TF9,_TFA,_TFB,_TFC,_TFD);
		return _TFE;
		_TL482: _TFF = num_elts;
		_T100 = _TFF->topt;
		{ void * _T133 = Cyc_Absyn_compress(_T100);
		  void * _T134;
		  _T101 = (int *)_T133;
		  _T102 = *_T101;
		  if (_T102 != 0) { goto _TL484;
		  }
		  _T103 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T133;
		  _T104 = _T103->f1;
		  _T105 = (int *)_T104;
		  _T106 = *_T105;
		  if (_T106 != 5) { goto _TL486;
		  }
		  _T107 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T133;
		  _T108 = _T107->f2;
		  if (_T108 == 0) { goto _TL488;
		  }
		  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T135 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T133;
		    _T109 = _T135->f2;
		    { struct Cyc_List_List _T136 = *_T109;
		      _T10A = _T136.hd;
		      _T134 = (void *)_T10A;
		    }
		  }{ void * tagtyp = _T134;
		    _T10B = Cyc_Absyn_uint_type;
		    _T10C = Cyc_Absyn_valueof_exp(tagtyp,0U);
		    { struct Cyc_Absyn_Exp * tagtyp_exp = Cyc_Absyn_cast_exp(_T10B,
									     _T10C,
									     0,
									     1U,
									     0U);
		      _T10D = Cyc_Evexp_same_uint_const_exp(tagtyp_exp,upper_exp);
		      if (! _T10D) { goto _TL48A;
		      }
		      _T10E = is_fat;
		      *_T10E = 0;
		      _T10F = elt_type;
		      _T110 = rgn;
		      _T111 = aqual_type;
		      _T112 = Cyc_Absyn_empty_tqual(0U);
		      _T113 = b;
		      _T114 = zero_term;
		      _T115 = Cyc_Absyn_false_type;
		      _T116 = Cyc_Absyn_atb_type(_T10F,_T110,_T111,_T112,
						 _T113,_T114,_T115);
		      return _T116;
		      _TL48A: goto _LL36;
		    }
		  }_TL488: goto _LL39;
		  _TL486: goto _LL39;
		  _TL484: _LL39: goto _LL36;
		  _LL36: ;
		}
	      }goto _TL480;
	      _TL47F: _TL480: ;
	    }goto _TL47D;
	    _TL47C: _T117 = mknd;
	    _T118 = *_T117;
	    _T119 = (int)_T118;
	    if (_T119 != 0) { goto _TL48C;
	    }
	    _T11A = Cyc_Tcutil_is_bits_only_type(elt_type);
	    if (_T11A) { goto _TL48C;
	    }else { goto _TL48E;
	    }
	    _TL48E: _T11B = loc;
	    _T11C = Cyc_Tcutil_ptrbnd_cvar_equivalent(b);
	    _T11D = _check_null(_T11C);
	    _T11E = Cyc_Absyn_thinconst();
	    _T11F = Cyc_BansheeIf_equality_constraint(_T11D,_T11E);
	    _T120 = Cyc_BansheeIf_add_constraint(_T11B,_T11F);
	    if (_T120) { goto _TL48F;
	    }else { goto _TL491;
	    }
	    _TL491: { struct Cyc_Warn_String_Warn_Warg_struct _T133;
	      _T133.tag = 0;
	      _T133.f1 = _tag_fat("Unable to constrain pointer bound",sizeof(char),
				  34U);
	      _T121 = _T133;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T133 = _T121;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T134;
		_T134.tag = 2;
		_T123 = topt;
		_T134.f1 = *_T123;
		_T122 = _T134;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T134 = _T122;
		void * _T135[2];
		_T135[0] = &_T133;
		_T135[1] = &_T134;
		_T124 = loc;
		_T125 = _tag_fat(_T135,sizeof(void *),2);
		Cyc_Warn_err2(_T124,_T125);
	      }
	    }goto _TL490;
	    _TL48F: _TL490: goto _TL48D;
	    _TL48C: _TL48D: _TL47D: goto _LL31;
	  }_TL473: goto _LL31;
	  _LL31: ;
	}goto _TL472;
	_TL471: _TL472: _T126 = one_elt;
	if (_T126) { goto _TL492;
	}else { goto _TL494;
	}
	_TL494: ptr_maker = Cyc_Absyn_fatptr_type;
	goto _TL493;
	_TL492: _TL493: _T127 = elt_type;
	_T128 = rgn;
	_T129 = aqual_type;
	_T12A = Cyc_Absyn_empty_tqual(0U);
	_T12B = zero_term;
	_T12C = Cyc_Absyn_false_type;
	_T12D = ptr_maker(_T127,_T128,_T129,_T12A,_T12B,_T12C);
	return _T12D;
      }
    }
  }
}
static void * Cyc_Tcexp_tcSwap(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
			       void * * topt,struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Tcenv_Tenv * _T2;
  void * * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  void * _T6;
  struct Cyc_Absyn_Exp * _T7;
  void * _T8;
  int * _T9;
  int _TA;
  struct Cyc_Warn_String_Warn_Warg_struct _TB;
  unsigned int _TC;
  struct _fat_ptr _TD;
  long _TE;
  long _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  unsigned int _T11;
  struct _fat_ptr _T12;
  long _T13;
  void * _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  struct Cyc_Tcenv_Tenv * _T16;
  struct Cyc_Absyn_Exp * _T17;
  unsigned int _T18;
  void * * _T19;
  struct _fat_ptr _T1A;
  long _T1B;
  void * _T1C;
  struct Cyc_Warn_String_Warn_Warg_struct _T1D;
  struct Cyc_Tcenv_Tenv * _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  unsigned int _T20;
  void * * _T21;
  struct _fat_ptr _T22;
  enum Cyc_Absyn_Coercion _T23;
  int _T24;
  void * _T25;
  struct Cyc_Warn_String_Warn_Warg_struct _T26;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T27;
  struct Cyc_Warn_String_Warn_Warg_struct _T28;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T29;
  struct Cyc_Tcenv_Tenv * _T2A;
  unsigned int _T2B;
  void * * _T2C;
  struct _fat_ptr _T2D;
  void * _T2E;
  struct Cyc_Tcenv_Tenv * te2 = Cyc_Tcenv_enter_lhs(te);
  Cyc_Tcexp_tcExpNoPromote(te2,0,e1);
  _T0 = e1;
  _T1 = _T0->topt;
  { void * t1 = _check_null(_T1);
    _T2 = te2;
    _T3 = &t1;
    _T4 = e2;
    Cyc_Tcexp_tcExpNoPromote(_T2,_T3,_T4);
    _T5 = e1;
    _T6 = _T5->topt;
    { void * t1 = _check_null(_T6);
      _T7 = e2;
      _T8 = _T7->topt;
      { void * t2 = _check_null(_T8);
	{ void * _T2F = Cyc_Absyn_compress(t1);
	  _T9 = (int *)_T2F;
	  _TA = *_T9;
	  if (_TA != 5) { goto _TL495;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T30;
	    _T30.tag = 0;
	    _T30.f1 = _tag_fat("cannot assign to an array",sizeof(char),26U);
	    _TB = _T30;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T30 = _TB;
	    void * _T31[1];
	    _T31[0] = &_T30;
	    _TC = loc;
	    _TD = _tag_fat(_T31,sizeof(void *),1);
	    Cyc_Warn_err2(_TC,_TD);
	  }goto _LL0;
	  _TL495: goto _LL0;
	  _LL0: ;
	}_TE = Cyc_Tcutil_is_boxed(t1);
	if (_TE) { goto _TL497;
	}else { goto _TL499;
	}
	_TL499: _TF = Cyc_Tcutil_is_pointer_type(t1);
	if (_TF) { goto _TL497;
	}else { goto _TL49A;
	}
	_TL49A: { struct Cyc_Warn_String_Warn_Warg_struct _T2F;
	  _T2F.tag = 0;
	  _T2F.f1 = _tag_fat("swap not allowed for non-pointer or non-word-sized types",
			     sizeof(char),57U);
	  _T10 = _T2F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2F = _T10;
	  void * _T30[1];
	  _T30[0] = &_T2F;
	  _T11 = loc;
	  _T12 = _tag_fat(_T30,sizeof(void *),1);
	  Cyc_Warn_err2(_T11,_T12);
	}goto _TL498;
	_TL497: _TL498: _T13 = Cyc_Absyn_is_lvalue(e1);
	if (_T13) { goto _TL49B;
	}else { goto _TL49D;
	}
	_TL49D: { struct Cyc_Warn_String_Warn_Warg_struct _T2F;
	  _T2F.tag = 0;
	  _T2F.f1 = _tag_fat("swap non-lvalue",sizeof(char),16U);
	  _T15 = _T2F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2F = _T15;
	  void * _T30[1];
	  _T30[0] = &_T2F;
	  _T16 = te;
	  _T17 = e1;
	  _T18 = _T17->loc;
	  _T19 = topt;
	  _T1A = _tag_fat(_T30,sizeof(void *),1);
	  _T14 = Cyc_Tcexp_expr_err(_T16,_T18,_T19,_T1A);
	}return _T14;
	_TL49B: _T1B = Cyc_Absyn_is_lvalue(e2);
	if (_T1B) { goto _TL49E;
	}else { goto _TL4A0;
	}
	_TL4A0: { struct Cyc_Warn_String_Warn_Warg_struct _T2F;
	  _T2F.tag = 0;
	  _T2F.f1 = _tag_fat("swap non-lvalue",sizeof(char),16U);
	  _T1D = _T2F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2F = _T1D;
	  void * _T30[1];
	  _T30[0] = &_T2F;
	  _T1E = te;
	  _T1F = e2;
	  _T20 = _T1F->loc;
	  _T21 = topt;
	  _T22 = _tag_fat(_T30,sizeof(void *),1);
	  _T1C = Cyc_Tcexp_expr_err(_T1E,_T20,_T21,_T22);
	}return _T1C;
	_TL49E: Cyc_Tcexp_check_writable(te,e1);
	Cyc_Tcexp_check_writable(te,e2);
	_T23 = Cyc_Subtype_coercible_exact(loc,t1,t2);
	_T24 = (int)_T23;
	if (_T24 != 0) { goto _TL4A1;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T2F;
	  _T2F.tag = 0;
	  _T2F.f1 = _tag_fat("type mismatch: ",sizeof(char),16U);
	  _T26 = _T2F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2F = _T26;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T30;
	    _T30.tag = 2;
	    _T30.f1 = t1;
	    _T27 = _T30;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T30 = _T27;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T31;
	      _T31.tag = 0;
	      _T31.f1 = _tag_fat(" != ",sizeof(char),5U);
	      _T28 = _T31;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T31 = _T28;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T32;
		_T32.tag = 2;
		_T32.f1 = t2;
		_T29 = _T32;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T32 = _T29;
		void * _T33[4];
		_T33[0] = &_T2F;
		_T33[1] = &_T30;
		_T33[2] = &_T31;
		_T33[3] = &_T32;
		_T2A = te;
		_T2B = loc;
		_T2C = topt;
		_T2D = _tag_fat(_T33,sizeof(void *),4);
		_T25 = Cyc_Tcexp_expr_err(_T2A,_T2B,_T2C,_T2D);
	      }
	    }
	  }
	}return _T25;
	_TL4A1: _T2E = Cyc_Absyn_void_type;
	return _T2E;
      }
    }
  }
}
static void * Cyc_Tcexp_tcStmtExp(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				  void * * topt,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Tcenv_Tenv * _T1;
  struct Cyc_Absyn_Stmt * _T2;
  struct Cyc_Absyn_Stmt * _T3;
  int * _T4;
  unsigned int _T5;
  struct Cyc_Absyn_Exp * _T6;
  void * _T7;
  void * _T8;
  struct Cyc_Core_Opt * _T9;
  void * _TA;
  long _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TD;
  unsigned int _TE;
  struct _fat_ptr _TF;
  void * _T10;
  void * _T11;
  struct Cyc_Warn_String_Warn_Warg_struct _T12;
  struct Cyc_Tcenv_Tenv * _T13;
  unsigned int _T14;
  void * * _T15;
  struct _fat_ptr _T16;
  _T0 = Cyc_Tcenv_clear_abstract_val_ok(te);
  _T1 = Cyc_Tcenv_enter_stmt_exp(_T0);
  _T2 = s;
  Cyc_Tcstmt_tcStmt(_T1,_T2,1);
  _TL4A3: if (1) { goto _TL4A4;
  }else { goto _TL4A5;
  }
  _TL4A4: _T3 = s;
  { void * _T17 = _T3->r;
    struct Cyc_Absyn_Stmt * _T18;
    struct Cyc_Absyn_Exp * _T19;
    _T4 = (int *)_T17;
    _T5 = *_T4;
    switch (_T5) {
    case 1: 
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T1A = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_T17;
	_T19 = _T1A->f1;
      }{ struct Cyc_Absyn_Exp * e = _T19;
	_T6 = e;
	_T7 = _T6->topt;
	{ void * t = _check_null(_T7);
	  _T8 = t;
	  _T9 = Cyc_Tcenv_lookup_opt_type_vars(te);
	  _TA = Cyc_Absyn_wildtyp(_T9);
	  _TB = Cyc_Unify_unify(_T8,_TA);
	  if (_TB) { goto _TL4A7;
	  }else { goto _TL4A9;
	  }
	  _TL4A9: { struct Cyc_Warn_String_Warn_Warg_struct _T1A;
	    _T1A.tag = 0;
	    _T1A.f1 = _tag_fat("statement expression returns type ",sizeof(char),
			       35U);
	    _TC = _T1A;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1A = _TC;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T1B;
	      _T1B.tag = 2;
	      _T1B.f1 = t;
	      _TD = _T1B;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1B = _TD;
	      void * _T1C[2];
	      _T1C[0] = &_T1A;
	      _T1C[1] = &_T1B;
	      _TE = loc;
	      _TF = _tag_fat(_T1C,sizeof(void *),2);
	      Cyc_Tcexp_err_and_explain(_TE,_TF);
	    }
	  }goto _TL4A8;
	  _TL4A7: _TL4A8: _T10 = t;
	  return _T10;
	}
      }
    case 2: 
      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T1A = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T17;
	_T18 = _T1A->f2;
      }{ struct Cyc_Absyn_Stmt * s2 = _T18;
	s = s2;
	goto _TL4A3;
      }
    case 12: 
      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T1A = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T17;
	_T18 = _T1A->f2;
      }{ struct Cyc_Absyn_Stmt * s1 = _T18;
	s = s1;
	goto _TL4A3;
      }
    default: 
      { struct Cyc_Warn_String_Warn_Warg_struct _T1A;
	_T1A.tag = 0;
	_T1A.f1 = _tag_fat("statement expression must end with expression",
			   sizeof(char),46U);
	_T12 = _T1A;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1A = _T12;
	void * _T1B[1];
	_T1B[0] = &_T1A;
	_T13 = te;
	_T14 = loc;
	_T15 = topt;
	_T16 = _tag_fat(_T1B,sizeof(void *),1);
	_T11 = Cyc_Tcexp_expr_err(_T13,_T14,_T15,_T16);
      }return _T11;
    }
    ;
  }goto _TL4A3;
  _TL4A5: ;
}
static void * Cyc_Tcexp_tcTagcheck(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				   void * * topt,struct Cyc_Absyn_Exp * e,
				   struct _fat_ptr * f) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Absyn_Exp * _T1;
  void * _T2;
  void * _T3;
  int * _T4;
  int _T5;
  void * _T6;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T7;
  void * _T8;
  int * _T9;
  int _TA;
  void * _TB;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TC;
  void * _TD;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TE;
  union Cyc_Absyn_AggrInfo _TF;
  struct _union_AggrInfo_KnownAggr _T10;
  unsigned int _T11;
  void * _T12;
  void * _T13;
  union Cyc_Absyn_AggrInfo _T14;
  struct _union_AggrInfo_KnownAggr _T15;
  struct Cyc_Absyn_Aggrdecl * * _T16;
  struct Cyc_Absyn_Aggrdecl * _T17;
  enum Cyc_Absyn_AggrKind _T18;
  int _T19;
  struct Cyc_Absyn_Aggrdecl * _T1A;
  struct Cyc_Absyn_AggrdeclImpl * _T1B;
  struct Cyc_Absyn_Aggrdecl * _T1C;
  struct Cyc_Absyn_AggrdeclImpl * _T1D;
  long _T1E;
  struct Cyc_Warn_String_Warn_Warg_struct _T1F;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T20;
  unsigned int _T21;
  struct _fat_ptr _T22;
  void * _T23;
  _T0 = Cyc_Tcenv_enter_abstract_val_ok(te);
  _T1 = e;
  _T2 = Cyc_Tcexp_tcExp(_T0,0,_T1);
  { void * t = Cyc_Absyn_compress(_T2);
    { struct Cyc_Absyn_Aggrdecl * _T24;
      _T3 = t;
      _T4 = (int *)_T3;
      _T5 = *_T4;
      if (_T5 != 0) { goto _TL4AA;
      }
      _T6 = t;
      _T7 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6;
      _T8 = _T7->f1;
      _T9 = (int *)_T8;
      _TA = *_T9;
      if (_TA != 24) { goto _TL4AC;
      }
      _TB = t;
      _TC = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TB;
      _TD = _TC->f1;
      _TE = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TD;
      _TF = _TE->f1;
      _T10 = _TF.KnownAggr;
      _T11 = _T10.tag;
      if (_T11 != 2) { goto _TL4AE;
      }
      _T12 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T25 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12;
	_T13 = _T25->f1;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T26 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T13;
	  _T14 = _T26->f1;
	  _T15 = _T14.KnownAggr;
	  _T16 = _T15.val;
	  { struct Cyc_Absyn_Aggrdecl * _T27 = *_T16;
	    _T24 = _T27;
	  }
	}
      }{ struct Cyc_Absyn_Aggrdecl * ad = _T24;
	_T17 = ad;
	_T18 = _T17->kind;
	_T19 = (int)_T18;
	if (_T19 != 1) { goto _TL4B0;
	}
	_T1A = ad;
	_T1B = _T1A->impl;
	if (_T1B == 0) { goto _TL4B0;
	}
	_T1C = ad;
	_T1D = _T1C->impl;
	_T1E = _T1D->tagged;
	if (! _T1E) { goto _TL4B0;
	}
	goto _LL0;
	_TL4B0: goto _LL4;
      }_TL4AE: goto _LL3;
      _TL4AC: goto _LL3;
      _TL4AA: _LL3: _LL4: { struct Cyc_Warn_String_Warn_Warg_struct _T25;
	_T25.tag = 0;
	_T25.f1 = _tag_fat("expecting @tagged union but found ",sizeof(char),
			   35U);
	_T1F = _T25;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T25 = _T1F;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T26;
	  _T26.tag = 2;
	  _T26.f1 = t;
	  _T20 = _T26;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T26 = _T20;
	  void * _T27[2];
	  _T27[0] = &_T25;
	  _T27[1] = &_T26;
	  _T21 = loc;
	  _T22 = _tag_fat(_T27,sizeof(void *),2);
	  Cyc_Warn_err2(_T21,_T22);
	}
      }goto _LL0;
      _LL0: ;
    }_T23 = Cyc_Absyn_uint_type;
    return _T23;
  }
}
static void * Cyc_Tcexp_tcAssert(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
				 struct Cyc_Absyn_Exp * e,long static_only) {
  long _T0;
  struct Cyc_Tcenv_Tenv * _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct _fat_ptr _T3;
  struct Cyc_Tcenv_Tenv * _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct _fat_ptr _T6;
  void * _T7;
  _T0 = static_only;
  if (! _T0) { goto _TL4B2;
  }
  _T1 = Cyc_Tcenv_allow_valueof(te);
  _T2 = e;
  _T3 = _tag_fat("@assert",sizeof(char),8U);
  Cyc_Tcexp_tcTest(_T1,_T2,_T3);
  goto _TL4B3;
  _TL4B2: _T4 = te;
  _T5 = e;
  _T6 = _tag_fat("assert",sizeof(char),7U);
  Cyc_Tcexp_tcTest(_T4,_T5,_T6);
  _TL4B3: _T7 = Cyc_Absyn_sint_type;
  return _T7;
}
static void * Cyc_Tcexp_tcNew(struct Cyc_Tcenv_Tenv * te,unsigned int loc,
			      void * * topt,struct Cyc_Absyn_Exp * * rgn_handle,
			      struct Cyc_Absyn_Exp * * qual_hndl,struct Cyc_Absyn_Exp * e,
			      struct Cyc_Absyn_Exp * e1) {
  struct Cyc_Tcenv_Tenv * _T0;
  struct Cyc_Absyn_Exp * * _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct Cyc_Core_Opt * _T3;
  struct Cyc_Core_Opt * _T4;
  struct Cyc_Core_Opt * _T5;
  void * _T6;
  struct Cyc_Tcenv_Tenv * _T7;
  void * * _T8;
  struct Cyc_Absyn_Exp * * _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Exp * _TB;
  int * _TC;
  int _TD;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE;
  void * _TF;
  int * _T10;
  int _T11;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  void * _T15;
  struct Cyc_Warn_String_Warn_Warg_struct _T16;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T17;
  struct Cyc_Absyn_Exp * * _T18;
  struct Cyc_Absyn_Exp * _T19;
  struct Cyc_Absyn_Exp * _T1A;
  unsigned int _T1B;
  struct _fat_ptr _T1C;
  void * * _T1D;
  void * _T1E;
  void * * _T1F;
  long _T20;
  struct Cyc_Absyn_Exp * * _T21;
  struct Cyc_Absyn_Exp * _T22;
  struct Cyc_Core_Opt * _T23;
  struct Cyc_Core_Opt * _T24;
  struct Cyc_Core_Opt * _T25;
  void * _T26;
  struct Cyc_Tcenv_Tenv * _T27;
  void * * _T28;
  struct Cyc_Absyn_Exp * * _T29;
  struct Cyc_Absyn_Exp * _T2A;
  struct Cyc_Absyn_Exp * _T2B;
  int * _T2C;
  int _T2D;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2E;
  void * _T2F;
  int * _T30;
  int _T31;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T32;
  struct Cyc_List_List * _T33;
  struct Cyc_List_List * _T34;
  void * _T35;
  struct Cyc_Warn_String_Warn_Warg_struct _T36;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T37;
  struct Cyc_Absyn_Exp * * _T38;
  struct Cyc_Absyn_Exp * _T39;
  struct Cyc_Absyn_Exp * _T3A;
  unsigned int _T3B;
  struct _fat_ptr _T3C;
  struct Cyc_List_List * _T3D;
  void * * _T3E;
  void * _T3F;
  void * _T40;
  int * _T41;
  int _T42;
  void * _T43;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T44;
  void * _T45;
  int * _T46;
  int _T47;
  void * _T48;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T49;
  void * _T4A;
  struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct * _T4B;
  enum Cyc_Absyn_AliasQualVal _T4C;
  struct Cyc_Absyn_Exp * * _T4D;
  struct Cyc_Absyn_Exp * _T4E;
  int * _T4F;
  unsigned int _T50;
  long _T51;
  struct Cyc_Warn_String_Warn_Warg_struct _T52;
  int (* _T53)(struct _fat_ptr);
  void * (* _T54)(struct _fat_ptr);
  struct _fat_ptr _T55;
  unsigned int _T56;
  void * _T57;
  void * * _T58;
  void * _T59;
  enum Cyc_Absyn_Coercion _T5A;
  int _T5B;
  enum Cyc_Absyn_Coercion _T5C;
  int _T5D;
  struct Cyc_Absyn_Exp * _T5E;
  struct Cyc_Absyn_Exp * _T5F;
  void * * _T60;
  void * _T61;
  void * * _T62;
  void * _T63;
  struct Cyc_Absyn_Exp * _T64;
  struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T65;
  void * * _T66;
  void * _T67;
  int * _T68;
  int _T69;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T6A;
  void * * _T6B;
  struct Cyc_Absyn_PtrInfo _T6C;
  struct Cyc_Absyn_PtrAtts _T6D;
  struct Cyc_Tcenv_Tenv * _T6E;
  struct Cyc_Absyn_Exp * _T6F;
  unsigned int _T70;
  void * * _T71;
  long _T72;
  struct Cyc_List_List * _T73;
  struct Cyc_Absyn_Exp * _T74;
  long _T75;
  struct Cyc_Warn_String_Warn_Warg_struct _T76;
  int (* _T77)(struct _fat_ptr);
  void * (* _T78)(struct _fat_ptr);
  struct _fat_ptr _T79;
  unsigned int _T7A;
  void * _T7B;
  void * * _T7C;
  void * _T7D;
  enum Cyc_Absyn_Coercion _T7E;
  int _T7F;
  enum Cyc_Absyn_Coercion _T80;
  int _T81;
  struct Cyc_Absyn_Exp * _T82;
  struct Cyc_Absyn_Exp * _T83;
  void * * _T84;
  void * _T85;
  void * * _T86;
  void * _T87;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T88;
  union Cyc_Absyn_Cnst _T89;
  struct _union_Cnst_Wstring_c _T8A;
  unsigned int _T8B;
  void * _T8C;
  void * _T8D;
  void * _T8E;
  struct Cyc_Absyn_Tqual _T8F;
  void * _T90;
  void * _T91;
  void * _T92;
  struct Cyc_Tcenv_Tenv * _T93;
  void * * _T94;
  struct Cyc_Absyn_Exp * _T95;
  void * _T96;
  void * _T97;
  void * _T98;
  struct Cyc_Absyn_Tqual _T99;
  struct Cyc_Absyn_Exp * _T9A;
  void * _T9B;
  void * _T9C;
  void * _T9D;
  void * _T9E;
  void * _T9F;
  void * _TA0;
  void * _TA1;
  struct Cyc_Absyn_Tqual _TA2;
  void * _TA3;
  void * _TA4;
  void * _TA5;
  struct Cyc_Tcenv_Tenv * _TA6;
  void * * _TA7;
  struct Cyc_Absyn_Exp * _TA8;
  void * _TA9;
  void * _TAA;
  void * _TAB;
  struct Cyc_Absyn_Tqual _TAC;
  struct Cyc_Absyn_Exp * _TAD;
  void * _TAE;
  void * _TAF;
  void * _TB0;
  void * _TB1;
  void * * _TB2;
  void * _TB3;
  int * _TB4;
  unsigned int _TB5;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TB6;
  void * * _TB7;
  struct Cyc_Absyn_PtrInfo _TB8;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB9;
  void * _TBA;
  int * _TBB;
  int _TBC;
  void * * _TBD;
  struct Cyc_Absyn_Exp * _TBE;
  unsigned int _TBF;
  struct Cyc_List_List * _TC0;
  void * _TC1;
  struct Cyc_Absyn_Exp * _TC2;
  unsigned int _TC3;
  void * _TC4;
  void * * _TC5;
  void * _TC6;
  enum Cyc_Absyn_Coercion _TC7;
  int _TC8;
  enum Cyc_Absyn_Coercion _TC9;
  int _TCA;
  struct Cyc_Absyn_Exp * _TCB;
  struct Cyc_Absyn_Exp * _TCC;
  void * * _TCD;
  void * _TCE;
  enum Cyc_Absyn_Coercion _TCF;
  void * * _TD0;
  void * _TD1;
  void * rgn = Cyc_Absyn_heap_rgn_type;
  _T0 = Cyc_Tcenv_set_new_status(1U,te);
  te = Cyc_Tcenv_clear_abstract_val_ok(_T0);
  _T1 = rgn_handle;
  _T2 = *_T1;
  if (_T2 == 0) { goto _TL4B4;
  }
  _T3 = &Cyc_Kinds_eko;
  _T4 = (struct Cyc_Core_Opt *)_T3;
  _T5 = Cyc_Tcenv_lookup_opt_type_vars(te);
  _T6 = Cyc_Absyn_new_evar(_T4,_T5);
  { void * expected_type = Cyc_Absyn_rgn_handle_type(_T6);
    _T7 = te;
    _T8 = &expected_type;
    _T9 = rgn_handle;
    _TA = *_T9;
    _TB = _check_null(_TA);
    { void * handle_type = Cyc_Tcexp_tcExp(_T7,_T8,_TB);
      void * _TD2 = Cyc_Absyn_compress(handle_type);
      void * _TD3;
      _TC = (int *)_TD2;
      _TD = *_TC;
      if (_TD != 0) { goto _TL4B6;
      }
      _TE = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD2;
      _TF = _TE->f1;
      _T10 = (int *)_TF;
      _T11 = *_T10;
      if (_T11 != 4) { goto _TL4B8;
      }
      _T12 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD2;
      _T13 = _T12->f2;
      if (_T13 == 0) { goto _TL4BA;
      }
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TD4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD2;
	_T14 = _TD4->f2;
	{ struct Cyc_List_List _TD5 = *_T14;
	  _T15 = _TD5.hd;
	  _TD3 = (void *)_T15;
	}
      }{ void * r = _TD3;
	rgn = r;
	Cyc_Tcenv_check_effect_accessible_nodelay(te,loc,rgn);
	goto _LL0;
      }_TL4BA: goto _LL3;
      _TL4B8: goto _LL3;
      _TL4B6: _LL3: { struct Cyc_Warn_String_Warn_Warg_struct _TD4;
	_TD4.tag = 0;
	_TD4.f1 = _tag_fat("expecting region_t type but found ",sizeof(char),
			   35U);
	_T16 = _TD4;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TD4 = _T16;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _TD5;
	  _TD5.tag = 2;
	  _TD5.f1 = handle_type;
	  _T17 = _TD5;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _TD5 = _T17;
	  void * _TD6[2];
	  _TD6[0] = &_TD4;
	  _TD6[1] = &_TD5;
	  _T18 = rgn_handle;
	  _T19 = *_T18;
	  _T1A = _check_null(_T19);
	  _T1B = _T1A->loc;
	  _T1C = _tag_fat(_TD6,sizeof(void *),2);
	  Cyc_Warn_err2(_T1B,_T1C);
	}
      }goto _LL0;
      _LL0: ;
    }
  }goto _TL4B5;
  _TL4B4: if (topt == 0) { goto _TL4BC;
  }
  { void * optrgn = Cyc_Absyn_void_type;
    _T1D = topt;
    _T1E = *_T1D;
    _T1F = &optrgn;
    _T20 = Cyc_Tcutil_rgn_of_pointer(_T1E,_T1F);
    if (! _T20) { goto _TL4BE;
    }
    rgn = Cyc_Tcexp_mallocRgn(optrgn);
    goto _TL4BF;
    _TL4BE: _TL4BF: ;
  }goto _TL4BD;
  _TL4BC: _TL4BD: _TL4B5: { void * aqual = Cyc_Absyn_al_qual_type;
    _T21 = qual_hndl;
    _T22 = *_T21;
    if (_T22 == 0) { goto _TL4C0;
    }
    _T23 = &Cyc_Kinds_aqko;
    _T24 = (struct Cyc_Core_Opt *)_T23;
    _T25 = Cyc_Tcenv_lookup_opt_type_vars(te);
    _T26 = Cyc_Absyn_new_evar(_T24,_T25);
    { void * expected_type = Cyc_Absyn_aqual_handle_type(_T26);
      _T27 = te;
      _T28 = &expected_type;
      _T29 = qual_hndl;
      _T2A = *_T29;
      _T2B = _check_null(_T2A);
      { void * qhndl_type = Cyc_Tcexp_tcExp(_T27,_T28,_T2B);
	void * _TD2 = Cyc_Absyn_compress(qhndl_type);
	void * _TD3;
	_T2C = (int *)_TD2;
	_T2D = *_T2C;
	if (_T2D != 0) { goto _TL4C2;
	}
	_T2E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD2;
	_T2F = _T2E->f1;
	_T30 = (int *)_T2F;
	_T31 = *_T30;
	if (_T31 != 18) { goto _TL4C4;
	}
	_T32 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD2;
	_T33 = _T32->f2;
	if (_T33 == 0) { goto _TL4C6;
	}
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _TD4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD2;
	  _T34 = _TD4->f2;
	  { struct Cyc_List_List _TD5 = *_T34;
	    _T35 = _TD5.hd;
	    _TD3 = (void *)_T35;
	  }
	}{ void * aq = _TD3;
	  aqual = aq;
	  goto _LL5;
	}_TL4C6: goto _LL8;
	_TL4C4: goto _LL8;
	_TL4C2: _LL8: { struct Cyc_Warn_String_Warn_Warg_struct _TD4;
	  _TD4.tag = 0;
	  _TD4.f1 = _tag_fat("expecting aqual_t type but found ",sizeof(char),
			     34U);
	  _T36 = _TD4;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _TD4 = _T36;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _TD5;
	    _TD5.tag = 2;
	    _TD5.f1 = qhndl_type;
	    _T37 = _TD5;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _TD5 = _T37;
	    void * _TD6[2];
	    _TD6[0] = &_TD4;
	    _TD6[1] = &_TD5;
	    _T38 = qual_hndl;
	    _T39 = *_T38;
	    _T3A = _check_null(_T39);
	    _T3B = _T3A->loc;
	    _T3C = _tag_fat(_TD6,sizeof(void *),2);
	    Cyc_Warn_err2(_T3B,_T3C);
	  }
	}goto _LL5;
	_LL5: ;
      }
    }goto _TL4C1;
    _TL4C0: if (topt == 0) { goto _TL4C8;
    }
    _T3D = Cyc_Tcenv_curr_aquals_bounds(te);
    _T3E = topt;
    _T3F = *_T3E;
    { void * aq = Cyc_Tcutil_eval_aquals_of(_T3D,_T3F);
      if (aq == 0) { goto _TL4CA;
      }
      if (aq == 0) { goto _TL4CC;
      }
      _T40 = aq;
      _T41 = (int *)_T40;
      _T42 = *_T41;
      if (_T42 != 0) { goto _TL4CE;
      }
      _T43 = aq;
      _T44 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T43;
      _T45 = _T44->f1;
      _T46 = (int *)_T45;
      _T47 = *_T46;
      if (_T47 != 16) { goto _TL4D0;
      }
      _T48 = aq;
      _T49 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T48;
      _T4A = _T49->f1;
      _T4B = (struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct *)_T4A;
      _T4C = _T4B->f1;
      if (_T4C != Cyc_Absyn_Unique_qual) { goto _TL4D2;
      }
      aqual = Cyc_Absyn_un_qual_type;
      _T4D = qual_hndl;
      *_T4D = Cyc_Absyn_uniqueaqual_exp();
      goto _LLA;
      _TL4D2: goto _LLD;
      _TL4D0: goto _LLD;
      _TL4CE: goto _LLD;
      _TL4CC: _LLD: goto _LLA;
      _LLA: goto _TL4CB;
      _TL4CA: _TL4CB: ;
    }goto _TL4C9;
    _TL4C8: _TL4C9: _TL4C1: _T4E = e1;
    { void * _TD2 = _T4E->r;
      struct Cyc_List_List * _TD3;
      struct Cyc_Core_Opt * _TD4;
      _T4F = (int *)_TD2;
      _T50 = *_T4F;
      switch (_T50) {
      case 26: 
	goto _LL13;
      case 27: 
	_LL13: { void * res_typ = Cyc_Tcexp_tcExpNoPromote(te,topt,e1);
	  _T51 = Cyc_Tcutil_is_array_type(res_typ);
	  if (_T51) { goto _TL4D5;
	  }else { goto _TL4D7;
	  }
	  _TL4D7: { struct Cyc_Warn_String_Warn_Warg_struct _TD5;
	    _TD5.tag = 0;
	    _TD5.f1 = _tag_fat("tcNew: comprehension returned non-array type",
			       sizeof(char),45U);
	    _T52 = _TD5;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TD5 = _T52;
	    void * _TD6[1];
	    _TD6[0] = &_TD5;
	    _T54 = Cyc_Warn_impos2;
	    { int (* _TD7)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T54;
	      _T53 = _TD7;
	    }_T55 = _tag_fat(_TD6,sizeof(void *),1);
	    _T53(_T55);
	  }goto _TL4D6;
	  _TL4D5: _TL4D6: res_typ = Cyc_Tcutil_promote_array(res_typ,rgn,
							     aqual,1);
	  if (topt == 0) { goto _TL4D8;
	  }
	  _T56 = loc;
	  _T57 = res_typ;
	  _T58 = topt;
	  _T59 = *_T58;
	  { enum Cyc_Absyn_Coercion c = Cyc_Subtype_coercible(_T56,_T57,_T59);
	    _T5A = c;
	    _T5B = (int)_T5A;
	    if (_T5B == 0) { goto _TL4DA;
	    }
	    _T5C = c;
	    _T5D = (int)_T5C;
	    if (_T5D == 1) { goto _TL4DA;
	    }
	    _T5E = e;
	    _T5E->topt = res_typ;
	    _T5F = e;
	    _T60 = topt;
	    _T61 = *_T60;
	    Cyc_Tcutil_unchecked_cast(_T5F,_T61,4U);
	    _T62 = topt;
	    res_typ = *_T62;
	    goto _TL4DB;
	    _TL4DA: _TL4DB: ;
	  }goto _TL4D9;
	  _TL4D8: _TL4D9: _T63 = res_typ;
	  return _T63;
	}
      case 35: 
	{ struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _TD5 = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_TD2;
	  _TD4 = _TD5->f1;
	  _TD3 = _TD5->f2;
	}{ struct Cyc_Core_Opt * nopt = _TD4;
	  struct Cyc_List_List * des = _TD3;
	  _T64 = e1;
	  { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _TD5 = _cycalloc(sizeof(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct));
	    _TD5->tag = 25;
	    _TD5->f1 = des;
	    _T65 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_TD5;
	  }_T64->r = (void *)_T65;
	  _TD3 = des;
	  goto _LL17;
	}
      case 25: 
	{ struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _TD5 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_TD2;
	  _TD3 = _TD5->f1;
	}_LL17: { struct Cyc_List_List * des = _TD3;
	  void * * elt_typ_opt = 0;
	  long zero_term = 0;
	  if (topt == 0) { goto _TL4DC;
	  }
	  _T66 = topt;
	  _T67 = *_T66;
	  { void * _TD5 = Cyc_Absyn_compress(_T67);
	    void * _TD6;
	    void * _TD7;
	    _T68 = (int *)_TD5;
	    _T69 = *_T68;
	    if (_T69 != 4) { goto _TL4DE;
	    }
	    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TD8 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TD5;
	      _T6A = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TD5;
	      _T6B = &(_T6A->f1).elt_type;
	      _TD7 = (void * *)_T6B;
	      _T6C = _TD8->f1;
	      _T6D = _T6C.ptr_atts;
	      _TD6 = _T6D.zero_term;
	    }{ void * * elt_typ = (void * *)_TD7;
	      void * zt = _TD6;
	      elt_typ_opt = elt_typ;
	      zero_term = Cyc_Tcutil_force_type2bool(0,zt);
	      goto _LL1E;
	    }_TL4DE: goto _LL1E;
	    _LL1E: ;
	  }goto _TL4DD;
	  _TL4DC: _TL4DD: _T6E = te;
	  _T6F = e1;
	  _T70 = _T6F->loc;
	  _T71 = elt_typ_opt;
	  _T72 = zero_term;
	  _T73 = des;
	  { void * res_typ = Cyc_Tcexp_tcArray(_T6E,_T70,_T71,0,_T72,_T73);
	    _T74 = e1;
	    _T74->topt = res_typ;
	    _T75 = Cyc_Tcutil_is_array_type(res_typ);
	    if (_T75) { goto _TL4E0;
	    }else { goto _TL4E2;
	    }
	    _TL4E2: { struct Cyc_Warn_String_Warn_Warg_struct _TD5;
	      _TD5.tag = 0;
	      _TD5.f1 = _tag_fat("tcExpNoPromote on Array_e returned non-array type",
				 sizeof(char),50U);
	      _T76 = _TD5;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _TD5 = _T76;
	      void * _TD6[1];
	      _TD6[0] = &_TD5;
	      _T78 = Cyc_Warn_impos2;
	      { int (* _TD7)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T78;
		_T77 = _TD7;
	      }_T79 = _tag_fat(_TD6,sizeof(void *),1);
	      _T77(_T79);
	    }goto _TL4E1;
	    _TL4E0: _TL4E1: res_typ = Cyc_Tcutil_promote_array(res_typ,rgn,
							       aqual,0);
	    if (topt == 0) { goto _TL4E3;
	    }
	    _T7A = loc;
	    _T7B = res_typ;
	    _T7C = topt;
	    _T7D = *_T7C;
	    { enum Cyc_Absyn_Coercion c = Cyc_Subtype_coercible(_T7A,_T7B,
								_T7D);
	      _T7E = c;
	      _T7F = (int)_T7E;
	      if (_T7F == 0) { goto _TL4E5;
	      }
	      _T80 = c;
	      _T81 = (int)_T80;
	      if (_T81 == 1) { goto _TL4E5;
	      }
	      _T82 = e;
	      _T82->topt = res_typ;
	      _T83 = e;
	      _T84 = topt;
	      _T85 = *_T84;
	      Cyc_Tcutil_unchecked_cast(_T83,_T85,4U);
	      _T86 = topt;
	      res_typ = *_T86;
	      goto _TL4E6;
	      _TL4E5: _TL4E6: ;
	    }goto _TL4E4;
	    _TL4E3: _TL4E4: _T87 = res_typ;
	    return _T87;
	  }
	}
      case 0: 
	_T88 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_TD2;
	_T89 = _T88->f1;
	_T8A = _T89.Wstring_c;
	_T8B = _T8A.tag;
	switch (_T8B) {
	case 9: 
	  _T8C = Cyc_Absyn_char_type;
	  _T8D = rgn;
	  _T8E = aqual;
	  _T8F = Cyc_Absyn_const_tqual(0U);
	  _T90 = Cyc_Absyn_fat_bound_type;
	  _T91 = Cyc_Absyn_true_type;
	  _T92 = Cyc_Absyn_false_type;
	  { void * topt2 = Cyc_Absyn_atb_type(_T8C,_T8D,_T8E,_T8F,_T90,_T91,
					      _T92);
	    _T93 = te;
	    _T94 = &topt2;
	    _T95 = e1;
	    { void * t = Cyc_Tcexp_tcExp(_T93,_T94,_T95);
	      _T96 = t;
	      _T97 = rgn;
	      _T98 = aqual;
	      _T99 = Cyc_Absyn_empty_tqual(0U);
	      _T9A = Cyc_Absyn_uint_exp(1U,0U);
	      _T9B = Cyc_Absyn_thin_bounds_exp(_T9A);
	      _T9C = Cyc_Absyn_false_type;
	      _T9D = Cyc_Absyn_false_type;
	      _T9E = Cyc_Absyn_atb_type(_T96,_T97,_T98,_T99,_T9B,_T9C,_T9D);
	      return _T9E;
	    }
	  }
	case 10: 
	  _T9F = Cyc_Absyn_wchar_type();
	  _TA0 = rgn;
	  _TA1 = aqual;
	  _TA2 = Cyc_Absyn_const_tqual(0U);
	  _TA3 = Cyc_Absyn_fat_bound_type;
	  _TA4 = Cyc_Absyn_true_type;
	  _TA5 = Cyc_Absyn_false_type;
	  { void * topt2 = Cyc_Absyn_atb_type(_T9F,_TA0,_TA1,_TA2,_TA3,_TA4,
					      _TA5);
	    _TA6 = te;
	    _TA7 = &topt2;
	    _TA8 = e1;
	    { void * t = Cyc_Tcexp_tcExp(_TA6,_TA7,_TA8);
	      _TA9 = t;
	      _TAA = rgn;
	      _TAB = aqual;
	      _TAC = Cyc_Absyn_empty_tqual(0U);
	      _TAD = Cyc_Absyn_uint_exp(1U,0U);
	      _TAE = Cyc_Absyn_thin_bounds_exp(_TAD);
	      _TAF = Cyc_Absyn_false_type;
	      _TB0 = Cyc_Absyn_false_type;
	      _TB1 = Cyc_Absyn_atb_type(_TA9,_TAA,_TAB,_TAC,_TAE,_TAF,_TB0);
	      return _TB1;
	    }
	  }
	default: 
	  goto _LL1C;
	}
	;
      default: 
	_LL1C: { void * bogus = Cyc_Absyn_void_type;
	  void * * topt2 = 0;
	  if (topt == 0) { goto _TL4E8;
	  }
	  _TB2 = topt;
	  _TB3 = *_TB2;
	  { void * _TD5 = Cyc_Absyn_compress(_TB3);
	    struct Cyc_Absyn_Tqual _TD6;
	    void * _TD7;
	    _TB4 = (int *)_TD5;
	    _TB5 = *_TB4;
	    switch (_TB5) {
	    case 4: 
	      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TD8 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TD5;
		_TB6 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TD5;
		_TB7 = &(_TB6->f1).elt_type;
		_TD7 = (void * *)_TB7;
		_TB8 = _TD8->f1;
		_TD6 = _TB8.elt_tq;
	      }{ void * * elttype = (void * *)_TD7;
		struct Cyc_Absyn_Tqual tq = _TD6;
		topt2 = elttype;
		goto _LL23;
	      }
	    case 0: 
	      _TB9 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD5;
	      _TBA = _TB9->f1;
	      _TBB = (int *)_TBA;
	      _TBC = *_TBB;
	      if (_TBC != 22) { goto _TL4EB;
	      }
	      _TBD = topt;
	      bogus = *_TBD;
	      topt2 = &bogus;
	      goto _LL23;
	      _TL4EB: goto _LL28;
	    default: 
	      _LL28: goto _LL23;
	    }
	    _LL23: ;
	  }goto _TL4E9;
	  _TL4E8: _TL4E9: { void * telt = Cyc_Tcexp_tcExp(te,topt2,e1);
	    _TBE = e1;
	    _TBF = _TBE->loc;
	    _TC0 = Cyc_Tcenv_curr_aquals_bounds(te);
	    _TC1 = telt;
	    _TC2 = e1;
	    Cyc_Tcexp_check_consume(_TBF,_TC0,_TC1,_TC2);
	    { struct Cyc_Absyn_PtrInfo pi = Cyc_Tcexp_fresh_pointer_type_with_aqual(te,
										    aqual);
	      pi.elt_type = telt;
	      (pi.ptr_atts).eff = rgn;
	      (pi.ptr_atts).bounds = Cyc_Absyn_bounds_one();
	      (pi.ptr_atts).zero_term = Cyc_Absyn_false_type;
	      (pi.ptr_atts).autoreleased = Cyc_Absyn_false_type;
	      { void * res_typ = Cyc_Absyn_pointer_type(pi);
		if (topt == 0) { goto _TL4ED;
		}
		_TC3 = loc;
		_TC4 = res_typ;
		_TC5 = topt;
		_TC6 = *_TC5;
		{ enum Cyc_Absyn_Coercion c = Cyc_Subtype_coercible(_TC3,
								    _TC4,
								    _TC6);
		  _TC7 = c;
		  _TC8 = (int)_TC7;
		  if (_TC8 == 0) { goto _TL4EF;
		  }
		  _TC9 = c;
		  _TCA = (int)_TC9;
		  if (_TCA == 1) { goto _TL4EF;
		  }
		  _TCB = e;
		  _TCB->topt = res_typ;
		  _TCC = e;
		  _TCD = topt;
		  _TCE = *_TCD;
		  _TCF = c;
		  Cyc_Tcutil_unchecked_cast(_TCC,_TCE,_TCF);
		  _TD0 = topt;
		  res_typ = *_TD0;
		  goto _TL4F0;
		  _TL4EF: _TL4F0: ;
		}goto _TL4EE;
		_TL4ED: _TL4EE: _TD1 = res_typ;
		return _TD1;
	      }
	    }
	  }
	}
      }
      ;
    }
  }
}
void * Cyc_Tcexp_tcExp(struct Cyc_Tcenv_Tenv * te,void * * topt,struct Cyc_Absyn_Exp * e) {
  long _T0;
  struct Cyc_Absyn_Exp * _T1;
  void * _T2;
  struct _tuple19 _T3;
  void * _T4;
  void * _T5;
  int * _T6;
  int _T7;
  struct Cyc_Absyn_Vardecl * _T8;
  void * * _T9;
  void * _TA;
  int * _TB;
  int _TC;
  struct Cyc_Absyn_Vardecl * _TD;
  void * _TE;
  void * t = Cyc_Tcexp_tcExpNoPromote(te,topt,e);
  _T0 = Cyc_Tcutil_is_array_type(t);
  if (! _T0) { goto _TL4F1;
  }
  _T1 = e;
  _T2 = t;
  _T3 = Cyc_Tcutil_addressof_props(e);
  _T4 = _T3.f1;
  _T5 = Cyc_Absyn_al_qual_type;
  t = Cyc_Tcutil_promote_array(_T2,_T4,_T5,0);
  _T1->topt = t;
  goto _TL4F2;
  _TL4F1: _TL4F2: _TL4F3: if (1) { goto _TL4F4;
  }else { goto _TL4F5;
  }
  _TL4F4: { void * _TF = Cyc_Absyn_compress(t);
    struct Cyc_Absyn_Vardecl * _T10;
    _T6 = (int *)_TF;
    _T7 = *_T6;
    if (_T7 != 12) { goto _TL4F6;
    }
    { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T11 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_TF;
      _T10 = _T11->f1;
    }{ struct Cyc_Absyn_Vardecl * vd = _T10;
      if (topt != 0) { goto _TL4F8;
      }
      _T8 = vd;
      t = _T8->type;
      Cyc_Tcutil_unchecked_cast(e,t,1U);
      goto _TL4F3;
      _TL4F8: _T9 = topt;
      _TA = *_T9;
      { void * _T11 = Cyc_Absyn_compress(_TA);
	_TB = (int *)_T11;
	_TC = *_TB;
	if (_TC != 12) { goto _TL4FA;
	}
	goto _LL5;
	_TL4FA: _TD = vd;
	t = _TD->type;
	Cyc_Tcutil_unchecked_cast(e,t,1U);
	goto _TL4F3;
	_LL5: ;
      }goto _LL0;
    }_TL4F6: goto _LL0;
    _LL0: ;
  }goto _TL4F5;
  goto _TL4F3;
  _TL4F5: _TE = t;
  return _TE;
}
void * Cyc_Tcexp_tcExpInitializer(struct Cyc_Tcenv_Tenv * te,void * * topt,
				  struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  int * _T6;
  unsigned int _T7;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T8;
  union Cyc_Absyn_Cnst _T9;
  struct _union_Cnst_String_c _TA;
  unsigned int _TB;
  void * _TC;
  long _TD;
  struct Cyc_Absyn_Exp * _TE;
  void * _TF;
  struct _tuple19 _T10;
  void * _T11;
  void * _T12;
  void * _T13;
  void * t = Cyc_Tcexp_tcExpNoPromote(te,topt,e);
  _T0 = e;
  _T1 = _T0->loc;
  _T2 = Cyc_Tcenv_curr_aquals_bounds(te);
  _T3 = t;
  _T4 = e;
  Cyc_Tcexp_check_consume(_T1,_T2,_T3,_T4);
  _T5 = e;
  { void * _T14 = _T5->r;
    _T6 = (int *)_T14;
    _T7 = *_T6;
    switch (_T7) {
    case 25: 
      goto _LL4;
    case 26: 
      _LL4: goto _LL6;
    case 27: 
      _LL6: goto _LL8;
    case 0: 
      _T8 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T14;
      _T9 = _T8->f1;
      _TA = _T9.String_c;
      _TB = _TA.tag;
      switch (_TB) {
      case 10: 
	_LL8: goto _LLA;
      case 9: 
	_LLA: _TC = t;
	return _TC;
      default: 
	goto _LLB;
      }
      ;
    default: 
      _LLB: _TD = Cyc_Tcutil_is_array_type(t);
      if (! _TD) { goto _TL4FE;
      }
      _TE = e;
      _TF = t;
      _T10 = Cyc_Tcutil_addressof_props(e);
      _T11 = _T10.f1;
      _T12 = Cyc_Absyn_al_qual_type;
      t = Cyc_Tcutil_promote_array(_TF,_T11,_T12,0);
      _TE->topt = t;
      goto _TL4FF;
      _TL4FE: _TL4FF: _T13 = t;
      return _T13;
    }
    ;
  }
}
static void * Cyc_Tcexp_tcExpNoPromote(struct Cyc_Tcenv_Tenv * te,void * * topt,
				       struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct Cyc_Absyn_Exp * _T3;
  void * _T4;
  void * _T5;
  struct Cyc_Absyn_Exp * _T6;
  int * _T7;
  int _T8;
  void * _T9;
  void * _TA;
  int * _TB;
  int _TC;
  void * _TD;
  struct Cyc_Absyn_PtrInfo _TE;
  int * _TF;
  int _T10;
  struct _tuple17 _T11;
  struct Cyc_List_List * (* _T12)(struct _tuple18 * (*)(struct _tuple17 *,
							struct Cyc_Absyn_Tvar *),
				  struct _tuple17 *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T13)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct _tuple18 * (* _T14)(struct _tuple17 *,struct Cyc_Absyn_Tvar *);
  struct _tuple17 * _T15;
  struct Cyc_Absyn_FnInfo _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_List_List * (* _T18)(void * (*)(struct _tuple18 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T19)(void * (*)(void *),struct Cyc_List_List *);
  void * (* _T1A)(struct _tuple18 *);
  void * (* _T1B)(struct _tuple0 *);
  struct Cyc_List_List * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  struct Cyc_Tcenv_Tenv * _T20;
  struct Cyc_Absyn_Exp * _T21;
  unsigned int _T22;
  void * * _T23;
  struct Cyc_Absyn_Exp * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_Absyn_Exp * _T26;
  void * _T27;
  void * _T28;
  void * _T29;
  Cyc_Tcexp_tcExpNoInst(te,topt,e);
  _T0 = e;
  _T1 = _T0->topt;
  { void * cached_type = _check_null(_T1);
    _T2 = e;
    _T3 = e;
    _T4 = _T3->topt;
    _T5 = Cyc_Absyn_pointer_expand(_T4,0);
    _T2->topt = Cyc_Absyn_compress(_T5);
    { void * t = _T2->topt;
      _T6 = e;
      { void * _T2A = _T6->r;
	struct Cyc_Absyn_Exp * _T2B;
	_T7 = (int *)_T2A;
	_T8 = *_T7;
	if (_T8 != 12) { goto _TL500;
	}
	{ struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T2C = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T2A;
	  _T2B = _T2C->f1;
	}{ struct Cyc_Absyn_Exp * e2 = _T2B;
	  _T9 = t;
	  return _T9;
	}_TL500: goto _LL0;
	_LL0: ;
      }{ void * _T2A;
	_TA = t;
	_TB = (int *)_TA;
	_TC = *_TB;
	if (_TC != 4) { goto _TL502;
	}
	_TD = t;
	{ struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T2B = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TD;
	  _TE = _T2B->f1;
	  _T2A = _TE.elt_type;
	}{ void * t2 = _T2A;
	  void * _T2B = Cyc_Absyn_compress(t2);
	  struct Cyc_Absyn_FnInfo _T2C;
	  _TF = (int *)_T2B;
	  _T10 = *_TF;
	  if (_T10 != 6) { goto _TL504;
	  }
	  { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T2D = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T2B;
	    _T2C = _T2D->f1;
	  }{ struct Cyc_Absyn_FnInfo info = _T2C;
	    { struct _tuple17 _T2D;
	      _T2D.f0 = Cyc_Tcenv_lookup_type_vars(te);
	      _T2D.f1 = Cyc_Core_heap_region;
	      _T11 = _T2D;
	    }{ struct _tuple17 env = _T11;
	      _T13 = Cyc_List_map_c;
	      { struct Cyc_List_List * (* _T2D)(struct _tuple18 * (*)(struct _tuple17 *,
								      struct Cyc_Absyn_Tvar *),
						struct _tuple17 *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple18 * (*)(struct _tuple17 *,
																	      struct Cyc_Absyn_Tvar *),
															struct _tuple17 *,
															struct Cyc_List_List *))_T13;
		_T12 = _T2D;
	      }_T14 = Cyc_Tcutil_r_make_inst_var;
	      _T15 = &env;
	      _T16 = info;
	      _T17 = _T16.tvars;
	      { struct Cyc_List_List * inst = _T12(_T14,_T15,_T17);
		_T19 = Cyc_List_map;
		{ struct Cyc_List_List * (* _T2D)(void * (*)(struct _tuple18 *),
						  struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct _tuple18 *),
													struct Cyc_List_List *))_T19;
		  _T18 = _T2D;
		}_T1B = Cyc_Core_snd;
		{ void * (* _T2D)(struct _tuple18 *) = (void * (*)(struct _tuple18 *))_T1B;
		  _T1A = _T2D;
		}_T1C = inst;
		{ struct Cyc_List_List * ts = _T18(_T1A,_T1C);
		  struct Cyc_Absyn_Exp * inner = Cyc_Absyn_copy_exp(e);
		  _T1D = e;
		  { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T2D = _cycalloc(sizeof(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct));
		    _T2D->tag = 13;
		    _T2D->f1 = inner;
		    _T2D->f2 = ts;
		    _T1E = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T2D;
		  }_T1D->r = (void *)_T1E;
		  _T1F = e;
		  _T20 = te;
		  _T21 = e;
		  _T22 = _T21->loc;
		  _T23 = topt;
		  _T24 = inner;
		  _T25 = ts;
		  _T1F->topt = Cyc_Tcexp_doInstantiate(_T20,_T22,_T23,_T24,
						       _T25);
		  _T26 = e;
		  _T27 = _T26->topt;
		  return _T27;
		}
	      }
	    }
	  }_TL504: _T28 = t;
	  return _T28;
	  ;
	}goto _TL503;
	_TL502: _T29 = t;
	return _T29;
	_TL503: ;
      }
    }
  }
}
static long Cyc_Tcexp_insert_alias_stmts(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Exp * e,
					 struct Cyc_Absyn_Exp * fn_exp,struct Cyc_List_List * alias_arg_exps) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Exp * _T3;
  int * _T4;
  int _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  int _T9;
  struct Cyc_Warn_String_Warn_Warg_struct _TA;
  struct Cyc_Warn_Int_Warn_Warg_struct _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  struct Cyc_Warn_Int_Warn_Warg_struct _TD;
  struct Cyc_List_List * _TE;
  void * _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  int (* _T11)(struct _fat_ptr);
  void * (* _T12)(struct _fat_ptr);
  struct _fat_ptr _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * _T16;
  void * _T17;
  struct Cyc_Absyn_Exp * _T18;
  struct Cyc_List_List * _T19;
  void * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  void * _T1C;
  void * _T1D;
  void * _T1E;
  long _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_Absyn_Exp * _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_Warn_String_Warn_Warg_struct _T24;
  int (* _T25)(struct _fat_ptr);
  void * (* _T26)(struct _fat_ptr);
  struct _fat_ptr _T27;
  struct Cyc_Warn_String_Warn_Warg_struct _T28;
  int (* _T29)(struct _fat_ptr);
  void * (* _T2A)(struct _fat_ptr);
  struct _fat_ptr _T2B;
  struct Cyc_List_List * _T2C;
  void * _T2D;
  struct Cyc_Absyn_Decl * _T2E;
  struct Cyc_Absyn_Exp * _T2F;
  struct Cyc_Absyn_Exp * _T30;
  unsigned int _T31;
  struct Cyc_Absyn_Stmt * _T32;
  struct Cyc_Absyn_Exp * _T33;
  unsigned int _T34;
  struct Cyc_Absyn_Stmt * _T35;
  struct Cyc_Absyn_Exp * _T36;
  unsigned int _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_Absyn_Exp * _T39;
  struct Cyc_Absyn_Exp * _T3A;
  struct Cyc_Absyn_Exp * _T3B;
  struct Cyc_List_List * decls = 0;
  _T0 = fn_exp;
  { void * _T3C = _T0->r;
    struct Cyc_List_List * _T3D;
    _T1 = (int *)_T3C;
    _T2 = *_T1;
    if (_T2 != 10) { goto _TL506;
    }
    { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T3E = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T3C;
      _T3D = _T3E->f2;
    }{ struct Cyc_List_List * es = _T3D;
      _T3 = e;
      { void * _T3E = _T3->r;
	struct Cyc_List_List * _T3F;
	_T4 = (int *)_T3E;
	_T5 = *_T4;
	if (_T5 != 10) { goto _TL508;
	}
	{ struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T40 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T3E;
	  _T3F = _T40->f2;
	}{ struct Cyc_List_List * es2 = _T3F;
	  struct Cyc_List_List * arg_exps = alias_arg_exps;
	  int arg_cnt = 0;
	  _TL50A: if (arg_exps != 0) { goto _TL50B;
	  }else { goto _TL50C;
	  }
	  _TL50B: _TL50D: _T6 = arg_cnt;
	  _T7 = arg_exps;
	  _T8 = _T7->hd;
	  _T9 = (int)_T8;
	  if (_T6 != _T9) { goto _TL50E;
	  }else { goto _TL50F;
	  }
	  _TL50E: if (es != 0) { goto _TL510;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T40;
	    _T40.tag = 0;
	    _T40.f1 = _tag_fat("bad count ",sizeof(char),11U);
	    _TA = _T40;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T40 = _TA;
	    { struct Cyc_Warn_Int_Warn_Warg_struct _T41;
	      _T41.tag = 12;
	      _T41.f1 = arg_cnt;
	      _TB = _T41;
	    }{ struct Cyc_Warn_Int_Warn_Warg_struct _T41 = _TB;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T42;
		_T42.tag = 0;
		_T42.f1 = _tag_fat("/",sizeof(char),2U);
		_TC = _T42;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T42 = _TC;
		{ struct Cyc_Warn_Int_Warn_Warg_struct _T43;
		  _T43.tag = 12;
		  _TE = arg_exps;
		  _TF = _TE->hd;
		  _T43.f1 = (int)_TF;
		  _TD = _T43;
		}{ struct Cyc_Warn_Int_Warn_Warg_struct _T43 = _TD;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T44;
		    _T44.tag = 0;
		    _T44.f1 = _tag_fat(" for alias coercion!",sizeof(char),
				       21U);
		    _T10 = _T44;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T44 = _T10;
		    void * _T45[5];
		    _T45[0] = &_T40;
		    _T45[1] = &_T41;
		    _T45[2] = &_T42;
		    _T45[3] = &_T43;
		    _T45[4] = &_T44;
		    _T12 = Cyc_Warn_impos2;
		    { int (* _T46)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T12;
		      _T11 = _T46;
		    }_T13 = _tag_fat(_T45,sizeof(void *),5);
		    _T11(_T13);
		  }
		}
	      }
	    }
	  }goto _TL511;
	  _TL510: _TL511: arg_cnt = arg_cnt + 1;
	  _T14 = es;
	  es = _T14->tl;
	  _T15 = _check_null(es2);
	  es2 = _T15->tl;
	  goto _TL50D;
	  _TL50F: _T16 = _check_null(es);
	  _T17 = _T16->hd;
	  _T18 = (struct Cyc_Absyn_Exp *)_T17;
	  _T19 = _check_null(es2);
	  _T1A = _T19->hd;
	  _T1B = (struct Cyc_Absyn_Exp *)_T1A;
	  _T1C = _T1B->topt;
	  _T1D = _check_null(_T1C);
	  _T1E = Cyc_Tcutil_copy_type(_T1D);
	  { struct _tuple16 _T40 = Cyc_Tcutil_insert_alias(_T18,_T1E);
	    long _T41;
	    struct Cyc_Absyn_Exp * _T42;
	    struct Cyc_Absyn_Decl * _T43;
	    _T43 = _T40.f0;
	    _T42 = _T40.f1;
	    _T41 = _T40.f2;
	    { struct Cyc_Absyn_Decl * d = _T43;
	      struct Cyc_Absyn_Exp * ve = _T42;
	      long succ = _T41;
	      _T1F = succ;
	      if (_T1F) { goto _TL512;
	      }else { goto _TL514;
	      }
	      _TL514: return 0;
	      _TL512: _T20 = es;
	      _T21 = ve;
	      _T20->hd = (void *)_T21;
	      { struct Cyc_List_List * _T44 = _cycalloc(sizeof(struct Cyc_List_List));
		_T44->hd = d;
		_T44->tl = decls;
		_T22 = (struct Cyc_List_List *)_T44;
	      }decls = _T22;
	      _T23 = arg_exps;
	      arg_exps = _T23->tl;
	    }
	  }goto _TL50A;
	  _TL50C: goto _LL5;
	}_TL508: { struct Cyc_Warn_String_Warn_Warg_struct _T40;
	  _T40.tag = 0;
	  _T40.f1 = _tag_fat("not a function call!",sizeof(char),21U);
	  _T24 = _T40;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T40 = _T24;
	  void * _T41[1];
	  _T41[0] = &_T40;
	  _T26 = Cyc_Warn_impos2;
	  { int (* _T42)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T26;
	    _T25 = _T42;
	  }_T27 = _tag_fat(_T41,sizeof(void *),1);
	  _T25(_T27);
	}_LL5: ;
      }goto _LL0;
    }_TL506: { struct Cyc_Warn_String_Warn_Warg_struct _T3E;
      _T3E.tag = 0;
      _T3E.f1 = _tag_fat("not a function call!",sizeof(char),21U);
      _T28 = _T3E;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E = _T28;
      void * _T3F[1];
      _T3F[0] = &_T3E;
      _T2A = Cyc_Warn_impos2;
      { int (* _T40)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T2A;
	_T29 = _T40;
      }_T2B = _tag_fat(_T3F,sizeof(void *),1);
      _T29(_T2B);
    }_LL0: ;
  }_TL515: if (decls != 0) { goto _TL516;
  }else { goto _TL517;
  }
  _TL516: _T2C = decls;
  _T2D = _T2C->hd;
  { struct Cyc_Absyn_Decl * d = (struct Cyc_Absyn_Decl *)_T2D;
    _T2E = d;
    _T2F = fn_exp;
    _T30 = e;
    _T31 = _T30->loc;
    _T32 = Cyc_Absyn_exp_stmt(_T2F,_T31);
    _T33 = e;
    _T34 = _T33->loc;
    _T35 = Cyc_Absyn_decl_stmt(_T2E,_T32,_T34);
    _T36 = e;
    _T37 = _T36->loc;
    fn_exp = Cyc_Absyn_stmt_exp(_T35,_T37);
    _T38 = decls;
    decls = _T38->tl;
  }goto _TL515;
  _TL517: _T39 = e;
  _T39->topt = 0;
  _T3A = e;
  _T3B = fn_exp;
  _T3A->r = _T3B->r;
  return 1;
}
static void Cyc_Tcexp_tcExpNoInst(struct Cyc_Tcenv_Tenv * te,void * * topt,
				  struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  int * _T2;
  unsigned int _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  void * _T6;
  struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T7;
  long _T8;
  struct Cyc_Warn_String_Warn_Warg_struct _T9;
  int (* _TA)(struct _fat_ptr);
  void * (* _TB)(struct _fat_ptr);
  struct _fat_ptr _TC;
  struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _TD;
  struct Cyc_Absyn_VarargCallInfo * * _TE;
  struct _handler_cons * _TF;
  int _T10;
  void * _T11;
  struct Cyc_Core_Failure_exn_struct * _T12;
  char * _T13;
  char * _T14;
  struct Cyc_Tcenv_Tenv * _T15;
  unsigned int _T16;
  void * * _T17;
  struct Cyc_Absyn_Exp * _T18;
  struct Cyc_Absyn_Exp * _T19;
  struct Cyc_List_List * _T1A;
  struct Cyc_Absyn_VarargCallInfo * * _T1B;
  struct Cyc_List_List * * _T1C;
  long _T1D;
  long _T1E;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T1F;
  union Cyc_Absyn_Cnst * _T20;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T21;
  void * * _T22;
  struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T23;
  enum Cyc_Absyn_Primop * _T24;
  void * _T25;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T26;
  enum Cyc_Absyn_Coercion * _T27;
  struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct * _T28;
  struct Cyc_Absyn_Exp * * _T29;
  struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct * _T2A;
  struct Cyc_Absyn_Exp * * _T2B;
  void * _T2C;
  void * _T2D;
  struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T2E;
  long * _T2F;
  struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T30;
  long * _T31;
  struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T32;
  long * _T33;
  struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T34;
  long * _T35;
  void * * _T36;
  void * _T37;
  int * _T38;
  int _T39;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T3A;
  void * * _T3B;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T3C;
  struct Cyc_Absyn_Tqual * _T3D;
  struct Cyc_Absyn_ArrayInfo _T3E;
  struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T3F;
  long * _T40;
  void * _T41;
  struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T42;
  long * _T43;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T44;
  struct _tuple1 * * _T45;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T46;
  struct Cyc_List_List * * _T47;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T48;
  struct Cyc_Absyn_Aggrdecl * * _T49;
  struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T4A;
  void * * _T4B;
  struct Cyc_Absyn_Enumdecl * _T4C;
  struct _tuple1 * _T4D;
  struct Cyc_Absyn_Enumdecl * _T4E;
  void * _T4F;
  struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T50;
  enum Cyc_Absyn_MallocKind * _T51;
  struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T52;
  struct Cyc_Absyn_Exp * * _T53;
  struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T54;
  struct Cyc_Absyn_Exp * * _T55;
  struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T56;
  void * * * _T57;
  struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T58;
  struct Cyc_Absyn_Exp * * _T59;
  struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T5A;
  long * _T5B;
  void * _T5C;
  struct Cyc_Tcenv_Tenv * _T5D;
  long _T5E;
  struct Cyc_Warn_String_Warn_Warg_struct _T5F;
  struct Cyc_Absyn_Exp * _T60;
  unsigned int _T61;
  struct _fat_ptr _T62;
  struct Cyc_Absyn_Exp * _T63;
  _T0 = e;
  { unsigned int loc = _T0->loc;
    void * t;
    _T1 = e;
    { void * _T64 = _T1->r;
      struct _fat_ptr * _T65;
      struct Cyc_Absyn_Exp * _T66;
      void * _T67;
      void * _T68;
      long _T69;
      void * _T6A;
      enum Cyc_Absyn_Incrementor _T6B;
      void * _T6C;
      void * _T6D;
      void * _T6E;
      _T2 = (int *)_T64;
      _T3 = *_T2;
      switch (_T3) {
      case 12: 
	{ struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	}{ struct Cyc_Absyn_Exp * e2 = _T6E;
	  Cyc_Tcexp_tcExpNoInst(te,0,e2);
	  _T4 = e;
	  _T5 = e2;
	  _T6 = _T5->topt;
	  _T4->topt = _check_null(_T6);
	  return;
	}
      case 10: 
	_T7 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T64;
	_T8 = _T7->f4;
	if (_T8 != 0) { goto _TL519;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T6F;
	  _T6F.tag = 0;
	  _T6F.f1 = _tag_fat("unresolved function: tcExpNoInst",sizeof(char),
			     33U);
	  _T9 = _T6F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T6F = _T9;
	  void * _T70[1];
	  _T70[0] = &_T6F;
	  _TB = Cyc_Warn_impos2;
	  { int (* _T71)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_TB;
	    _TA = _T71;
	  }_TC = _tag_fat(_T70,sizeof(void *),1);
	  _TA(_TC);
	}goto _TL51A;
	_TL519: { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	  _TD = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T64;
	  _TE = &_TD->f3;
	  _T6C = (struct Cyc_Absyn_VarargCallInfo * *)_TE;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct Cyc_List_List * es = _T6D;
	  struct Cyc_Absyn_VarargCallInfo * * vci = _T6C;
	  struct Cyc_List_List * alias_arg_exps = 0;
	  long ok = 1;
	  struct Cyc_Absyn_Exp * fn_exp;
	  { struct _handler_cons _T6F;
	    _TF = &_T6F;
	    _push_handler(_TF);
	    { int _T70 = 0;
	      _T10 = setjmp(_T6F.handler);
	      if (! _T10) { goto _TL51B;
	      }
	      _T70 = 1;
	      goto _TL51C;
	      _TL51B: _TL51C: if (_T70) { goto _TL51D;
	      }else { goto _TL51F;
	      }
	      _TL51F: fn_exp = Cyc_Tcutil_deep_copy_exp(0,e);
	      _pop_handler();
	      goto _TL51E;
	      _TL51D: _T11 = Cyc_Core_get_exn_thrown();
	      { void * _T71 = (void *)_T11;
		void * _T72;
		_T12 = (struct Cyc_Core_Failure_exn_struct *)_T71;
		_T13 = _T12->tag;
		_T14 = Cyc_Core_Failure;
		if (_T13 != _T14) { goto _TL520;
		}
		ok = 0;
		fn_exp = e;
		goto _LL59;
		_TL520: _T72 = _T71;
		{ void * exn = _T72;
		  _rethrow(exn);
		}_LL59: ;
	      }_TL51E: ;
	    }
	  }_T15 = te;
	  _T16 = loc;
	  _T17 = topt;
	  _T18 = e;
	  _T19 = e1;
	  _T1A = es;
	  _T1B = vci;
	  _T1C = &alias_arg_exps;
	  t = Cyc_Tcexp_tcFnCall(_T15,_T16,_T17,_T18,_T19,_T1A,_T1B,_T1C);
	  if (alias_arg_exps == 0) { goto _TL522;
	  }
	  _T1D = ok;
	  if (! _T1D) { goto _TL522;
	  }
	  alias_arg_exps = Cyc_List_imp_rev(alias_arg_exps);
	  _T1E = Cyc_Tcexp_insert_alias_stmts(te,e,fn_exp,alias_arg_exps);
	  if (! _T1E) { goto _TL524;
	  }
	  Cyc_Tcexp_tcExpNoInst(te,topt,e);
	  goto _TL525;
	  _TL524: _TL525: goto _TL523;
	  _TL522: _TL523: goto _LL0;
	}_TL51A: ;
      case 35: 
	{ struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	}{ struct Cyc_Core_Opt * nopt = _T6E;
	  struct Cyc_List_List * des = _T6D;
	  Cyc_Tcexp_resolve_unresolved_mem(loc,topt,e,des);
	  Cyc_Tcexp_tcExpNoInst(te,topt,e);
	  return;
	}
      case 0: 
	{ struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T64;
	  _T1F = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T64;
	  _T20 = &_T1F->f1;
	  _T6E = (union Cyc_Absyn_Cnst *)_T20;
	}{ union Cyc_Absyn_Cnst * c = _T6E;
	  t = Cyc_Tcexp_tcConst(te,loc,topt,c,e);
	  goto _LL0;
	}
      case 1: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T64;
	  _T21 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T64;
	  _T22 = &_T21->f1;
	  _T6E = (void * *)_T22;
	}{ void * * b = _T6E;
	  t = Cyc_Tcexp_tcVar(te,loc,topt,e,b);
	  goto _LL0;
	}
      case 2: 
	t = Cyc_Absyn_sint_type;
	goto _LL0;
      case 3: 
	{ struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T64;
	  _T23 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T64;
	  _T24 = &_T23->f1;
	  _T6E = (enum Cyc_Absyn_Primop *)_T24;
	  _T6D = _T6F->f2;
	}{ enum Cyc_Absyn_Primop * p = _T6E;
	  struct Cyc_List_List * es = _T6D;
	  t = Cyc_Tcexp_tcPrimop(te,loc,topt,p,es);
	  goto _LL0;
	}
      case 5: 
	{ struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6B = _T6F->f2;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  enum Cyc_Absyn_Incrementor i = _T6B;
	  t = Cyc_Tcexp_tcIncrement(te,loc,topt,e1,i);
	  goto _LL0;
	}
      case 4: 
	{ struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	  _T6C = _T6F->f3;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct Cyc_Absyn_PrimopOpt * popt = _T6D;
	  struct Cyc_Absyn_Exp * e2 = _T6C;
	  t = Cyc_Tcexp_tcAssignOp(te,loc,topt,e1,popt,e2);
	  goto _LL0;
	}
      case 6: 
	{ struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	  _T6C = _T6F->f3;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct Cyc_Absyn_Exp * e2 = _T6D;
	  struct Cyc_Absyn_Exp * e3 = _T6C;
	  t = Cyc_Tcexp_tcConditional(te,loc,topt,e1,e2,e3);
	  goto _LL0;
	}
      case 7: 
	{ struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct Cyc_Absyn_Exp * e2 = _T6D;
	  t = Cyc_Tcexp_tcAnd(te,loc,e1,e2);
	  goto _LL0;
	}
      case 8: 
	{ struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct Cyc_Absyn_Exp * e2 = _T6D;
	  t = Cyc_Tcexp_tcOr(te,loc,e1,e2);
	  goto _LL0;
	}
      case 9: 
	{ struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct Cyc_Absyn_Exp * e2 = _T6D;
	  t = Cyc_Tcexp_tcSeqExp(te,loc,topt,e1,e2);
	  goto _LL0;
	}
      case 11: 
	{ struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  t = Cyc_Tcexp_tcThrow(te,loc,topt,e1);
	  goto _LL0;
	}
      case 13: 
	{ struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	}{ struct Cyc_Absyn_Exp * e2 = _T6E;
	  struct Cyc_List_List * ts = _T6D;
	  t = Cyc_Tcexp_tcInstantiate(te,loc,topt,e2,ts);
	  goto _LL0;
	}
      case 14: 
	{ struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T64;
	  _T25 = _T6F->f1;
	  _T6E = (void *)_T25;
	  _T6D = _T6F->f2;
	  _T26 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T64;
	  _T27 = &_T26->f4;
	  _T6C = (enum Cyc_Absyn_Coercion *)_T27;
	}{ void * t1 = _T6E;
	  struct Cyc_Absyn_Exp * e1 = _T6D;
	  enum Cyc_Absyn_Coercion * c = _T6C;
	  t = Cyc_Tcexp_tcCast(te,loc,topt,t1,e1,c);
	  goto _LL0;
	}
      case 15: 
	{ struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  t = Cyc_Tcexp_tcAddress(te,loc,e,topt,e1);
	  goto _LL0;
	}
      case 16: 
	{ struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct *)_T64;
	  _T28 = (struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct *)_T64;
	  _T29 = &_T28->f1;
	  _T6E = (struct Cyc_Absyn_Exp * *)_T29;
	  _T6D = _T6F->f2;
	  _T2A = (struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct *)_T64;
	  _T2B = &_T2A->f3;
	  _T6C = (struct Cyc_Absyn_Exp * *)_T2B;
	}{ struct Cyc_Absyn_Exp * * rgn_handle = _T6E;
	  struct Cyc_Absyn_Exp * e1 = _T6D;
	  struct Cyc_Absyn_Exp * * qual_hndl = _T6C;
	  t = Cyc_Tcexp_tcNew(te,loc,topt,rgn_handle,qual_hndl,e,e1);
	  goto _LL0;
	}
      case 18: 
	{ struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  _T6E = Cyc_Tcexp_tcExpNoPromote(te,0,e1);
	  goto _LL2A;
	}
      case 17: 
	{ struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T64;
	  _T2C = _T6F->f1;
	  _T6E = (void *)_T2C;
	}_LL2A: { void * t1 = _T6E;
	  t = Cyc_Tcexp_tcSizeof(te,loc,topt,t1);
	  goto _LL0;
	}
      case 19: 
	{ struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct *)_T64;
	  _T2D = _T6F->f1;
	  _T6E = (void *)_T2D;
	  _T6D = _T6F->f2;
	}{ void * t1 = _T6E;
	  struct Cyc_List_List * l = _T6D;
	  t = Cyc_Tcexp_tcOffsetof(te,loc,topt,t1,l);
	  goto _LL0;
	}
      case 20: 
	{ struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  t = Cyc_Tcexp_tcDeref(te,loc,topt,e,e1);
	  goto _LL0;
	}
      case 21: 
	{ struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	  _T2E = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T64;
	  _T2F = &_T2E->f3;
	  _T6C = (long *)_T2F;
	  _T30 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T64;
	  _T31 = &_T30->f4;
	  _T6A = (long *)_T31;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct _fat_ptr * f = _T6D;
	  long * is_tagged = _T6C;
	  long * is_read = _T6A;
	  t = Cyc_Tcexp_tcAggrMember(te,loc,topt,e1,f,is_tagged,is_read);
	  goto _LL0;
	}
      case 22: 
	{ struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	  _T32 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T64;
	  _T33 = &_T32->f3;
	  _T6C = (long *)_T33;
	  _T34 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T64;
	  _T35 = &_T34->f4;
	  _T6A = (long *)_T35;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct _fat_ptr * f = _T6D;
	  long * is_tagged = _T6C;
	  long * is_read = _T6A;
	  t = Cyc_Tcexp_tcAggrArrow(te,loc,topt,e1,f,is_tagged,is_read);
	  goto _LL0;
	}
      case 23: 
	{ struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct Cyc_Absyn_Exp * e2 = _T6D;
	  t = Cyc_Tcexp_tcSubscript(te,loc,topt,e,e1,e2);
	  goto _LL0;
	}
      case 24: 
	{ struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	}{ struct _tuple9 * t1 = _T6E;
	  struct Cyc_List_List * des = _T6D;
	  t = Cyc_Tcexp_tcCompoundLit(te,loc,e,topt,t1,des);
	  goto _LL0;
	}
      case 25: 
	{ struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	}{ struct Cyc_List_List * des = _T6E;
	  void * * elt_topt = 0;
	  struct Cyc_Absyn_Tqual * elt_tqopt = 0;
	  long zero_term = 0;
	  if (topt == 0) { goto _TL526;
	  }
	  _T36 = topt;
	  _T37 = *_T36;
	  { void * _T6F = Cyc_Absyn_compress(_T37);
	    void * _T70;
	    void * _T71;
	    void * _T72;
	    _T38 = (int *)_T6F;
	    _T39 = *_T38;
	    if (_T39 != 5) { goto _TL528;
	    }
	    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T73 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T6F;
	      _T3A = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T6F;
	      _T3B = &(_T3A->f1).elt_type;
	      _T72 = (void * *)_T3B;
	      _T3C = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T6F;
	      _T3D = &(_T3C->f1).tq;
	      _T71 = (struct Cyc_Absyn_Tqual *)_T3D;
	      _T3E = _T73->f1;
	      _T70 = _T3E.zero_term;
	    }{ void * * et = (void * *)_T72;
	      struct Cyc_Absyn_Tqual * etq = (struct Cyc_Absyn_Tqual *)_T71;
	      void * zt = _T70;
	      elt_topt = et;
	      elt_tqopt = etq;
	      zero_term = Cyc_Tcutil_force_type2bool(0,zt);
	      goto _LL5E;
	    }_TL528: goto _LL5E;
	    _LL5E: ;
	  }goto _TL527;
	  _TL526: _TL527: t = Cyc_Tcexp_tcArray(te,loc,elt_topt,elt_tqopt,
						zero_term,des);
	  goto _LL0;
	}
      case 36: 
	{ struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	}{ struct Cyc_Absyn_Stmt * s = _T6E;
	  t = Cyc_Tcexp_tcStmtExp(te,loc,topt,s);
	  goto _LL0;
	}
      case 26: 
	{ struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	  _T6C = _T6F->f3;
	  _T3F = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T64;
	  _T40 = &_T3F->f4;
	  _T6A = (long *)_T40;
	}{ struct Cyc_Absyn_Vardecl * vd = _T6E;
	  struct Cyc_Absyn_Exp * e1 = _T6D;
	  struct Cyc_Absyn_Exp * e2 = _T6C;
	  long * iszeroterm = _T6A;
	  t = Cyc_Tcexp_tcComprehension(te,loc,topt,vd,e1,e2,iszeroterm);
	  goto _LL0;
	}
      case 27: 
	{ struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T41 = _T6F->f2;
	  _T6D = (void *)_T41;
	  _T42 = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T64;
	  _T43 = &_T42->f3;
	  _T6C = (long *)_T43;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  void * t1 = _T6D;
	  long * iszeroterm = _T6C;
	  t = Cyc_Tcexp_tcComprehensionNoinit(te,loc,topt,e1,t1,iszeroterm);
	  goto _LL0;
	}
      case 28: 
	{ struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T64;
	  _T44 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T64;
	  _T45 = &_T44->f1;
	  _T6E = (struct _tuple1 * *)_T45;
	  _T46 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T64;
	  _T47 = &_T46->f2;
	  _T6D = (struct Cyc_List_List * *)_T47;
	  _T6C = _T6F->f3;
	  _T48 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T64;
	  _T49 = &_T48->f4;
	  _T6A = (struct Cyc_Absyn_Aggrdecl * *)_T49;
	}{ struct _tuple1 * * tn = _T6E;
	  struct Cyc_List_List * * ts = _T6D;
	  struct Cyc_List_List * args = _T6C;
	  struct Cyc_Absyn_Aggrdecl * * sd_opt = _T6A;
	  t = Cyc_Tcexp_tcAggregate(te,loc,topt,tn,ts,args,sd_opt);
	  goto _LL0;
	}
      case 29: 
	{ struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T64;
	  _T4A = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T64;
	  _T4B = &_T4A->f1;
	  _T6E = (void * *)_T4B;
	  _T69 = _T6F->f2;
	  _T6D = _T6F->f3;
	}{ void * * ts = _T6E;
	  long is_tuple = _T69;
	  struct Cyc_List_List * args = _T6D;
	  t = Cyc_Tcexp_tcAnonStruct(te,loc,topt,e,ts,is_tuple,args);
	  goto _LL0;
	}
      case 30: 
	{ struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	  _T6C = _T6F->f3;
	}{ struct Cyc_List_List * es = _T6E;
	  struct Cyc_Absyn_Datatypedecl * tud = _T6D;
	  struct Cyc_Absyn_Datatypefield * tuf = _T6C;
	  t = Cyc_Tcexp_tcDatatype(te,loc,topt,e,es,tud,tuf);
	  goto _LL0;
	}
      case 31: 
	{ struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T6D = _T6F->f2;
	}{ struct Cyc_Absyn_Enumdecl * ed = _T6E;
	  struct Cyc_Absyn_Enumfield * ef = _T6D;
	  _T4C = ed;
	  _T4D = _T4C->name;
	  _T4E = ed;
	  t = Cyc_Absyn_enum_type(_T4D,_T4E);
	  goto _LL0;
	}
      case 32: 
	{ struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct *)_T64;
	  _T4F = _T6F->f1;
	  _T6E = (void *)_T4F;
	  _T6D = _T6F->f2;
	}{ void * t2 = _T6E;
	  struct Cyc_Absyn_Enumfield * ef = _T6D;
	  t = t2;
	  goto _LL0;
	}
      case 33: 
	{ struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T64;
	  _T50 = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T64;
	  _T51 = &(_T50->f1).mknd;
	  _T6E = (enum Cyc_Absyn_MallocKind *)_T51;
	  _T52 = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T64;
	  _T53 = &(_T52->f1).rgn;
	  _T6D = (struct Cyc_Absyn_Exp * *)_T53;
	  _T54 = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T64;
	  _T55 = &(_T54->f1).aqual;
	  _T6C = (struct Cyc_Absyn_Exp * *)_T55;
	  _T56 = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T64;
	  _T57 = &(_T56->f1).elt_type;
	  _T6A = (void * * *)_T57;
	  _T58 = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T64;
	  _T59 = &(_T58->f1).num_elts;
	  _T68 = (struct Cyc_Absyn_Exp * *)_T59;
	  _T5A = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T64;
	  _T5B = &(_T5A->f1).fat_result;
	  _T67 = (long *)_T5B;
	}{ enum Cyc_Absyn_MallocKind * mknd = _T6E;
	  struct Cyc_Absyn_Exp * * ropt = (struct Cyc_Absyn_Exp * *)_T6D;
	  struct Cyc_Absyn_Exp * * aqopt = (struct Cyc_Absyn_Exp * *)_T6C;
	  void * * * t2 = (void * * *)_T6A;
	  struct Cyc_Absyn_Exp * * e2 = (struct Cyc_Absyn_Exp * *)_T68;
	  long * isfat = (long *)_T67;
	  t = Cyc_Tcexp_tcMalloc(te,loc,topt,ropt,aqopt,t2,e2,mknd,isfat);
	  goto _LL0;
	}
      case 34: 
	{ struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T66 = _T6F->f2;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  struct Cyc_Absyn_Exp * e2 = _T66;
	  t = Cyc_Tcexp_tcSwap(te,loc,topt,e1,e2);
	  goto _LL0;
	}
      case 37: 
	{ struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T65 = _T6F->f2;
	}{ struct Cyc_Absyn_Exp * e = _T6E;
	  struct _fat_ptr * f = _T65;
	  t = Cyc_Tcexp_tcTagcheck(te,loc,topt,e,f);
	  goto _LL0;
	}
      case 40: 
	{ struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	}{ struct Cyc_Absyn_Exp * e1 = _T6E;
	  t = Cyc_Tcexp_tcExp(te,topt,e1);
	  goto _LL0;
	}
      case 41: 
	{ struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	  _T69 = _T6F->f2;
	}{ struct Cyc_Absyn_Exp * e = _T6E;
	  long static_only = _T69;
	  t = Cyc_Tcexp_tcAssert(te,loc,e,static_only);
	  goto _LL0;
	}
      case 42: 
	{ struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct *)_T64;
	  _T6E = _T6F->f1;
	}{ struct Cyc_Absyn_Exp * e = _T6E;
	  t = Cyc_Tcexp_tcAssert(te,loc,e,1);
	  goto _LL0;
	}
      case 38: 
	{ struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct *)_T64;
	  _T5C = _T6F->f1;
	  _T6E = (void *)_T5C;
	}{ void * t2 = _T6E;
	  _T5D = te;
	  _T5E = _T5D->allow_valueof;
	  if (_T5E) { goto _TL52A;
	  }else { goto _TL52C;
	  }
	  _TL52C: { struct Cyc_Warn_String_Warn_Warg_struct _T6F;
	    _T6F.tag = 0;
	    _T6F.f1 = _tag_fat("valueof(-) can only occur within types",sizeof(char),
			       39U);
	    _T5F = _T6F;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T6F = _T5F;
	    void * _T70[1];
	    _T70[0] = &_T6F;
	    _T60 = e;
	    _T61 = _T60->loc;
	    _T62 = _tag_fat(_T70,sizeof(void *),1);
	    Cyc_Warn_err2(_T61,_T62);
	  }goto _TL52B;
	  _TL52A: _TL52B: t = Cyc_Absyn_sint_type;
	  goto _LL0;
	}
      default: 
	t = Cyc_Absyn_void_type;
	goto _LL0;
      }
      _LL0: ;
    }_T63 = e;
    _T63->topt = t;
  }
}
