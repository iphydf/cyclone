#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
struct _fat_ptr Cyc_Core_new_string(unsigned int);
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
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_map(void * (*)(void *),struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map_c(void * (*)(void *,void *),void *,
					     struct Cyc_List_List *);
extern void Cyc_List_iter(void (*)(void *),struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_append(struct Cyc_List_List *,
						  struct Cyc_List_List *);
extern long Cyc_List_exists(long (*)(void *),struct Cyc_List_List *);
extern long Cyc_List_mem(int (*)(void *,void *),struct Cyc_List_List *,void *);
extern int Cyc_List_list_cmp(int (*)(void *,void *),struct Cyc_List_List *,
			     struct Cyc_List_List *);
extern long Cyc_List_list_prefix(int (*)(void *,void *),struct Cyc_List_List *,
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
 struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct {
  int tag;
  struct Cyc_Absyn_Kind * f1;
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
 struct Cyc_Absyn_ArrayInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_Absyn_Exp * num_elts;
  void * zero_term;
  unsigned int zt_loc;
};
 struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct {
  int tag;
  struct Cyc_Absyn_Aggrdecl * f1;
};
 struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
};
 struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
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
 struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct {
  int tag;
  int f1;
};
 struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct {
  int tag;
  enum Cyc_Absyn_AliasQualVal f1;
};
 struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct {
  int tag;
  struct _tuple1 * f1;
  struct Cyc_Absyn_Enumdecl * f2;
};
 struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct {
  int tag;
  struct _fat_ptr f1;
  struct Cyc_Absyn_Kind * f2;
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
 struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct {
  int tag;
  void * f1;
  void * f2;
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
 struct Cyc_Absyn_VarType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
};
 struct Cyc_Absyn_Cvar_Absyn_Type_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
  void * f2;
  int f3;
  void * f4;
  const char * f5;
  const char * f6;
  long f7;
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
  struct _tuple1 * f1;
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
enum Cyc_Absyn_Format_Type {
  Cyc_Absyn_Printf_ft = 0U,
  Cyc_Absyn_Scanf_ft = 1U
};
enum Cyc_Absyn_Access_Type {
  Cyc_Absyn_WriteOnly_at = 0U
};
 struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct {
  int tag;
  int f1;
};
 struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Section_att_Absyn_Attribute_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Absyn_Format_att_Absyn_Attribute_struct {
  int tag;
  enum Cyc_Absyn_Format_Type f1;
  int f2;
  int f3;
};
 struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct {
  int tag;
  int f1;
};
 struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct {
  int tag;
  int f1;
};
 struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct {
  int tag;
  int f1;
};
 struct Cyc_Absyn_Mode_att_Absyn_Attribute_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Absyn_Alias_att_Absyn_Attribute_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Absyn_Access_att_Absyn_Attribute_struct {
  int tag;
  enum Cyc_Absyn_Access_Type f1;
  int f2;
  int f3;
};
 struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct {
  int tag;
  int f1;
  int f2;
};
 struct Cyc_Absyn_AllocAlign_att_Absyn_Attribute_struct {
  int tag;
  int f1;
};
 struct Cyc_Absyn_VectorSize_att_Absyn_Attribute_struct {
  int tag;
  int f1;
};
 struct Cyc_Absyn_NoTypes_Absyn_Funcparams_struct {
  int tag;
  struct Cyc_List_List * f1;
  unsigned int f2;
};
 struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct {
  int tag;
  struct Cyc_List_List * f1;
  long f2;
  struct Cyc_Absyn_VarargInfo * f3;
  void * f4;
  struct Cyc_List_List * f5;
  struct Cyc_List_List * f6;
  struct Cyc_Absyn_Exp * f7;
  struct Cyc_Absyn_Exp * f8;
  struct Cyc_Absyn_Exp * f9;
  struct Cyc_Absyn_Exp * f10;
};
 struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct {
  int tag;
  void * f1;
  unsigned int f2;
};
 struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  void * f2;
  unsigned int f3;
};
 struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct {
  int tag;
  struct Cyc_Absyn_PtrAtts f1;
  struct Cyc_Absyn_Tqual f2;
};
 struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct {
  int tag;
  struct Cyc_List_List * f1;
  unsigned int f2;
  long f3;
};
 struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct {
  int tag;
  unsigned int f1;
  struct Cyc_List_List * f2;
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
 struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct {
  int tag;
  long f1;
  struct _fat_ptr f2;
  struct Cyc_List_List * f3;
  struct Cyc_List_List * f4;
  struct Cyc_List_List * f5;
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
 struct _tuple10 {
  struct Cyc_Absyn_Exp * f0;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _tuple10 f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _fat_ptr * f1;
};
 struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _tuple10 f2;
  struct _tuple10 f3;
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
  struct _tuple10 f2;
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
 struct Cyc_Absyn_UnknownId_p_Absyn_Raw_pat_struct {
  int tag;
  struct _tuple1 * f1;
};
 struct Cyc_Absyn_UnknownCall_p_Absyn_Raw_pat_struct {
  int tag;
  struct _tuple1 * f1;
  struct Cyc_List_List * f2;
  long f3;
};
 struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
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
 struct Cyc_Absyn_Typedefdecl {
  struct _tuple1 * name;
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
 struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Aggrdecl * f1;
};
 struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
};
 struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
};
 struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Typedefdecl * f1;
};
 struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct {
  int tag;
  struct _fat_ptr * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct {
  int tag;
  struct _tuple1 * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct _tuple11 {
  unsigned int f0;
  struct Cyc_List_List * f1;
};
 struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
  struct Cyc_List_List * f3;
  struct _tuple11 * f4;
};
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
int Cyc_Absyn_qvar_cmp(struct _tuple1 *,struct _tuple1 *);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned int);
void * Cyc_Absyn_compress(void *);
long Cyc_Absyn_type2bool(long,void *);
void * Cyc_Absyn_new_evar(struct Cyc_Core_Opt *,struct Cyc_Core_Opt *);
struct Cyc_Absyn_Exp * Cyc_Absyn_sizeoftype_exp(void *,unsigned int);
 struct _tuple12 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple1 * f1;
};
struct _tuple12 Cyc_Absyn_aggr_kinded_name(union Cyc_Absyn_AggrInfo);
struct _tuple1 * Cyc_Absyn_binding2qvar(void *);
void Cyc_Absyn_visit_type(long (*)(void *,void *),void *,void *);
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
extern int Cyc_PP_tex_output;
struct Cyc_PP_Doc;
extern void Cyc_PP_file_of_doc(struct Cyc_PP_Doc *,int,struct Cyc___cycFILE *);
extern struct _fat_ptr Cyc_PP_string_of_doc(struct Cyc_PP_Doc *,int);
extern struct Cyc_PP_Doc * Cyc_PP_nil_doc();
extern struct Cyc_PP_Doc * Cyc_PP_blank_doc();
extern struct Cyc_PP_Doc * Cyc_PP_line_doc();
extern struct Cyc_PP_Doc * Cyc_PP_text(struct _fat_ptr);
extern struct Cyc_PP_Doc * Cyc_PP_textptr(struct _fat_ptr *);
extern struct Cyc_PP_Doc * Cyc_PP_text_width(struct _fat_ptr,int);
extern struct Cyc_PP_Doc * Cyc_PP_nest(int,struct Cyc_PP_Doc *);
extern struct Cyc_PP_Doc * Cyc_PP_cat(struct _fat_ptr);
extern struct Cyc_PP_Doc * Cyc_PP_seq(struct _fat_ptr,struct Cyc_List_List *);
extern struct Cyc_PP_Doc * Cyc_PP_ppseq(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
					struct Cyc_List_List *);
extern struct Cyc_PP_Doc * Cyc_PP_seql(struct _fat_ptr,struct Cyc_List_List *);
extern struct Cyc_PP_Doc * Cyc_PP_ppseql(struct Cyc_PP_Doc * (*)(void *),
					 struct _fat_ptr,struct Cyc_List_List *);
extern struct Cyc_PP_Doc * Cyc_PP_group(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr,
					struct Cyc_List_List *);
extern struct Cyc_PP_Doc * Cyc_PP_egroup(struct _fat_ptr,struct _fat_ptr,
					 struct _fat_ptr,struct Cyc_List_List *);
 struct Cyc_Absynpp_Params {
  long expand_typedefs;
  long qvar_to_Cids;
  long add_cyc_prefix;
  long decls_first;
  long rewrite_temp_tvars;
  long print_all_tvars;
  long print_all_kinds;
  long print_all_effects;
  long print_using_stmts;
  long print_externC_stmts;
  long print_full_evars;
  long print_zeroterm;
  long generate_line_directives;
  long use_curr_namespace;
  struct Cyc_List_List * curr_namespace;
  long gen_clean_cyclone;
};
extern int Cyc_Absynpp_print_for_cycdoc;
struct Cyc_PP_Doc * Cyc_Absynpp_decl2doc(struct Cyc_Absyn_Decl *);
struct _fat_ptr Cyc_Absynpp_attribute2string(void *);
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp *);
extern struct _fat_ptr Cyc_Absynpp_cyc_string;
extern struct _fat_ptr * Cyc_Absynpp_cyc_stringptr;
 struct _tuple13 {
  struct Cyc_Absyn_Tqual f0;
  void * f1;
  struct Cyc_List_List * f2;
};
 struct _tuple14 {
  long f0;
  struct Cyc_List_List * f1;
};
 struct _tuple15 {
  unsigned int f0;
  long f1;
};
extern struct _tuple15 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp *);
extern long Cyc_Flags_interproc;
extern long Cyc_Flags_no_merge;
enum Cyc_Flags_C_Compilers {
  Cyc_Flags_Gcc_c = 0U,
  Cyc_Flags_Vc_c = 1U
};
extern enum Cyc_Flags_C_Compilers Cyc_Flags_c_compiler;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ek;
struct _fat_ptr Cyc_Kinds_kind2string(struct Cyc_Absyn_Kind *);
void * Cyc_Kinds_compress_kb(void *);
struct Cyc_Absyn_Kind * Cyc_Tcutil_type_kind(void *);
long Cyc_Tcutil_is_temp_tvar(struct Cyc_Absyn_Tvar *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Typ_Warn_Warg_struct {
  int tag;
  void * f1;
};
void * Cyc_Warn_impos2(struct _fat_ptr);
extern void * Cyc___assert_fail(struct _fat_ptr,struct _fat_ptr,unsigned int);
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_str_sepstr(struct Cyc_List_List *,struct _fat_ptr);
 struct _tuple18 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Pat * f1;
};
struct Cyc_PP_Doc * Cyc_Absynpp_dp2doc(struct _tuple18 *);
struct Cyc_PP_Doc * Cyc_Absynpp_switchclauses2doc(struct Cyc_List_List *);
struct Cyc_PP_Doc * Cyc_Absynpp_typ2doc(void *);
struct Cyc_PP_Doc * Cyc_Absynpp_aggrfields2doc(struct Cyc_List_List *);
struct Cyc_PP_Doc * Cyc_Absynpp_stmt2doc(struct Cyc_Absyn_Stmt *,long,struct Cyc_List_List *,
					 long);
struct Cyc_PP_Doc * Cyc_Absynpp_exp2doc(struct Cyc_Absyn_Exp *);
struct Cyc_PP_Doc * Cyc_Absynpp_exps2doc_prec(int,struct Cyc_List_List *);
struct Cyc_PP_Doc * Cyc_Absynpp_qvar2doc(struct _tuple1 *);
struct Cyc_PP_Doc * Cyc_Absynpp_cnst2doc(union Cyc_Absyn_Cnst);
struct Cyc_PP_Doc * Cyc_Absynpp_prim2doc(enum Cyc_Absyn_Primop);
struct Cyc_PP_Doc * Cyc_Absynpp_primapp2doc(int,enum Cyc_Absyn_Primop,struct Cyc_List_List *);
 struct _tuple19 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Exp * f1;
};
struct Cyc_PP_Doc * Cyc_Absynpp_de2doc(struct _tuple19 *);
struct Cyc_PP_Doc * Cyc_Absynpp_tqtd2doc(struct Cyc_Absyn_Tqual,void *,struct Cyc_Core_Opt *);
struct Cyc_PP_Doc * Cyc_Absynpp_funargs2doc(struct Cyc_List_List *,long,struct Cyc_Absyn_VarargInfo *,
					    void *,struct Cyc_List_List *,
					    struct Cyc_List_List *,struct Cyc_Absyn_Exp *,
					    struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					    struct Cyc_Absyn_Exp *);
struct Cyc_PP_Doc * Cyc_Absynpp_datatypefields2doc(struct Cyc_List_List *);
struct Cyc_PP_Doc * Cyc_Absynpp_enumfields2doc(struct Cyc_List_List *);
struct Cyc_PP_Doc * Cyc_Absynpp_vardecl2doc(struct Cyc_Absyn_Vardecl *,long);
struct Cyc_PP_Doc * Cyc_Absynpp_aggrdecl2doc(struct Cyc_Absyn_Aggrdecl *);
struct Cyc_PP_Doc * Cyc_Absynpp_enumdecl2doc(struct Cyc_Absyn_Enumdecl *);
struct Cyc_PP_Doc * Cyc_Absynpp_datatypedecl2doc(struct Cyc_Absyn_Datatypedecl *);
struct Cyc_PP_Doc * Cyc_Absynpp_ntyp2doc(void *);
static long Cyc_Absynpp_expand_typedefs;
static long Cyc_Absynpp_qvar_to_Cids;
static char _TmpG0[4U] = "Cyc";
struct _fat_ptr Cyc_Absynpp_cyc_string = {(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
					  (unsigned char *)_TmpG0 + 4U};
struct _fat_ptr * Cyc_Absynpp_cyc_stringptr = (struct _fat_ptr *)&Cyc_Absynpp_cyc_string;
static char _TmpG1[14U] = "__NoCycPrefix";
static struct _fat_ptr Cyc_Absynpp_nocyc_str = {(unsigned char *)_TmpG1,(unsigned char *)_TmpG1,
						(unsigned char *)_TmpG1 + 14U};
static struct _fat_ptr * Cyc_Absynpp_nocyc_strptr = (struct _fat_ptr *)&Cyc_Absynpp_nocyc_str;
static long Cyc_Absynpp_add_cyc_prefix;
static long Cyc_Absynpp_decls_first;
static long Cyc_Absynpp_rewrite_temp_tvars;
static long Cyc_Absynpp_print_all_tvars;
static long Cyc_Absynpp_print_all_kinds;
static long Cyc_Absynpp_print_all_effects;
static long Cyc_Absynpp_print_using_stmts;
static long Cyc_Absynpp_print_externC_stmts;
static long Cyc_Absynpp_print_full_evars;
static long Cyc_Absynpp_gen_clean_cyclone;
static long Cyc_Absynpp_inside_function_type = 0;
static long Cyc_Absynpp_generate_line_directives;
static long Cyc_Absynpp_use_curr_namespace;
static long Cyc_Absynpp_print_zeroterm;
static struct Cyc_List_List * Cyc_Absynpp_curr_namespace = 0;
int Cyc_Absynpp_print_for_cycdoc = 0;
void Cyc_Absynpp_set_params(struct Cyc_Absynpp_Params * fs) {
  struct Cyc_Absynpp_Params * _T0;
  struct Cyc_Absynpp_Params * _T1;
  struct Cyc_Absynpp_Params * _T2;
  struct Cyc_Absynpp_Params * _T3;
  struct Cyc_Absynpp_Params * _T4;
  struct Cyc_Absynpp_Params * _T5;
  struct Cyc_Absynpp_Params * _T6;
  struct Cyc_Absynpp_Params * _T7;
  struct Cyc_Absynpp_Params * _T8;
  struct Cyc_Absynpp_Params * _T9;
  struct Cyc_Absynpp_Params * _TA;
  struct Cyc_Absynpp_Params * _TB;
  struct Cyc_Absynpp_Params * _TC;
  struct Cyc_Absynpp_Params * _TD;
  struct Cyc_Absynpp_Params * _TE;
  struct Cyc_Absynpp_Params * _TF;
  _T0 = fs;
  Cyc_Absynpp_expand_typedefs = _T0->expand_typedefs;
  _T1 = fs;
  Cyc_Absynpp_qvar_to_Cids = _T1->qvar_to_Cids;
  _T2 = fs;
  Cyc_Absynpp_add_cyc_prefix = _T2->add_cyc_prefix;
  _T3 = fs;
  Cyc_Absynpp_decls_first = _T3->decls_first;
  _T4 = fs;
  Cyc_Absynpp_rewrite_temp_tvars = _T4->rewrite_temp_tvars;
  _T5 = fs;
  Cyc_Absynpp_print_all_tvars = _T5->print_all_tvars;
  _T6 = fs;
  Cyc_Absynpp_print_all_kinds = _T6->print_all_kinds;
  _T7 = fs;
  Cyc_Absynpp_print_all_effects = _T7->print_all_effects;
  _T8 = fs;
  Cyc_Absynpp_print_using_stmts = _T8->print_using_stmts;
  _T9 = fs;
  Cyc_Absynpp_print_externC_stmts = _T9->print_externC_stmts;
  _TA = fs;
  Cyc_Absynpp_print_full_evars = _TA->print_full_evars;
  _TB = fs;
  Cyc_Absynpp_print_zeroterm = _TB->print_zeroterm;
  _TC = fs;
  Cyc_Absynpp_generate_line_directives = _TC->generate_line_directives;
  _TD = fs;
  Cyc_Absynpp_use_curr_namespace = _TD->use_curr_namespace;
  _TE = fs;
  Cyc_Absynpp_curr_namespace = _TE->curr_namespace;
  _TF = fs;
  Cyc_Absynpp_gen_clean_cyclone = _TF->gen_clean_cyclone;
}
struct Cyc_Absynpp_Params Cyc_Absynpp_cyc_params_r = {0,
						      0,
						      0,
						      0,
						      1,
						      0,
						      0,
						      0,
						      1,
						      1,
						      0,
						      1,
						      0,
						      1,
						      0,
						      0};
struct Cyc_Absynpp_Params Cyc_Absynpp_cycinf_params_r = {0,
							 0,
							 0,
							 0,
							 1,
							 0,
							 0,
							 1,
							 1,
							 1,
							 0,
							 1,
							 0,
							 1,
							 0,
							 1};
struct Cyc_Absynpp_Params Cyc_Absynpp_cyci_params_r = {1,
						       0,
						       1,
						       0,
						       1,
						       0,
						       0,
						       0,
						       1,
						       1,
						       0,
						       1,
						       0,
						       1,
						       0,
						       0};
struct Cyc_Absynpp_Params Cyc_Absynpp_c_params_r = {1,
						    1,
						    1,
						    1,
						    0,
						    0,
						    0,
						    0,
						    0,
						    0,
						    0,
						    0,
						    1,
						    0,
						    0,
						    0};
struct Cyc_Absynpp_Params Cyc_Absynpp_tc_params_r = {0,
						     0,
						     0,
						     0,
						     1,
						     0,
						     0,
						     0,
						     1,
						     1,
						     0,
						     1,
						     0,
						     0,
						     0,
						     0};
static void Cyc_Absynpp_curr_namespace_add(struct _fat_ptr * v) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  _T0 = Cyc_Absynpp_curr_namespace;
  { struct Cyc_List_List * _T2 = _cycalloc(sizeof(struct Cyc_List_List));
    _T2->hd = v;
    _T2->tl = 0;
    _T1 = (struct Cyc_List_List *)_T2;
  }Cyc_Absynpp_curr_namespace = Cyc_List_imp_append(_T0,_T1);
}
static void Cyc_Absynpp_suppr_last(struct Cyc_List_List * * l) {
  struct Cyc_List_List * * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * * _T4;
  struct Cyc_List_List * * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * * _T7;
  _T0 = l;
  _T1 = *_T0;
  _T2 = _check_null(_T1);
  _T3 = _T2->tl;
  if (_T3 != 0) { goto _TL0;
  }
  _T4 = l;
  *_T4 = 0;
  goto _TL1;
  _TL0: _T5 = l;
  _T6 = *_T5;
  _T7 = &_T6->tl;
  Cyc_Absynpp_suppr_last(_T7);
  _TL1: ;
}
static void Cyc_Absynpp_curr_namespace_drop() {
  struct Cyc_List_List * * _T0;
  _T0 = &Cyc_Absynpp_curr_namespace;
  Cyc_Absynpp_suppr_last(_T0);
}
struct _fat_ptr Cyc_Absynpp_char_escape(unsigned char c) {
  unsigned char _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  unsigned char _TC;
  int _TD;
  unsigned char _TE;
  int _TF;
  struct _fat_ptr _T10;
  unsigned char * _T11;
  char * _T12;
  char * _T13;
  unsigned char _T14;
  unsigned int _T15;
  unsigned char * _T16;
  char * _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  unsigned char * _T1A;
  char * _T1B;
  char * _T1C;
  unsigned int _T1D;
  unsigned char * _T1E;
  char * _T1F;
  struct _fat_ptr _T20;
  unsigned char * _T21;
  char * _T22;
  unsigned char _T23;
  int _T24;
  int _T25;
  int _T26;
  unsigned int _T27;
  unsigned char * _T28;
  char * _T29;
  struct _fat_ptr _T2A;
  unsigned char * _T2B;
  char * _T2C;
  unsigned char _T2D;
  int _T2E;
  int _T2F;
  int _T30;
  unsigned int _T31;
  unsigned char * _T32;
  char * _T33;
  struct _fat_ptr _T34;
  unsigned char * _T35;
  char * _T36;
  unsigned char _T37;
  int _T38;
  int _T39;
  int _T3A;
  unsigned int _T3B;
  unsigned char * _T3C;
  char * _T3D;
  struct _fat_ptr _T3E;
  _T0 = c;
  _T1 = (int)_T0;
  switch (_T1) {
  case 7: 
    _T2 = _tag_fat("\\a",sizeof(char),3U);
    return _T2;
  case 8: 
    _T3 = _tag_fat("\\b",sizeof(char),3U);
    return _T3;
  case 12: 
    _T4 = _tag_fat("\\f",sizeof(char),3U);
    return _T4;
  case 10: 
    _T5 = _tag_fat("\\n",sizeof(char),3U);
    return _T5;
  case 13: 
    _T6 = _tag_fat("\\r",sizeof(char),3U);
    return _T6;
  case 9: 
    _T7 = _tag_fat("\\t",sizeof(char),3U);
    return _T7;
  case 11: 
    _T8 = _tag_fat("\\v",sizeof(char),3U);
    return _T8;
  case 92: 
    _T9 = _tag_fat("\\\\",sizeof(char),3U);
    return _T9;
  case 34: 
    _TA = _tag_fat("\"",sizeof(char),2U);
    return _TA;
  case 39: 
    _TB = _tag_fat("\\'",sizeof(char),3U);
    return _TB;
  default: 
    _TC = c;
    _TD = (int)_TC;
    if (_TD < 32) { goto _TL3;
    }
    _TE = c;
    _TF = (int)_TE;
    if (_TF > 126) { goto _TL3;
    }
    { struct _fat_ptr t = Cyc_Core_new_string(2U);
      _T10 = t;
      { struct _fat_ptr _T3F = _fat_ptr_plus(_T10,sizeof(char),0);
	_T11 = _T3F.curr;
	_T12 = (char *)_T11;
	_T13 = _check_null(_T12);
	{ char _T40 = *_T13;
	  _T14 = c;
	  { char _T41 = (char)_T14;
	    _T15 = _get_fat_size(_T3F,sizeof(char));
	    if (_T15 != 1U) { goto _TL5;
	    }
	    if (_T40 != 0) { goto _TL5;
	    }
	    if (_T41 == 0) { goto _TL5;
	    }
	    _throw_arraybounds();
	    goto _TL6;
	    _TL5: _TL6: _T16 = _T3F.curr;
	    _T17 = (char *)_T16;
	    *_T17 = _T41;
	  }
	}
      }_T18 = t;
      return _T18;
    }_TL3: { struct _fat_ptr t = Cyc_Core_new_string(5U);
      _T19 = t;
      { struct _fat_ptr _T3F = _fat_ptr_plus(_T19,sizeof(char),0);
	_T1A = _T3F.curr;
	_T1B = (char *)_T1A;
	_T1C = _check_null(_T1B);
	{ char _T40 = *_T1C;
	  char _T41 = '\\';
	  _T1D = _get_fat_size(_T3F,sizeof(char));
	  if (_T1D != 1U) { goto _TL7;
	  }
	  if (_T40 != 0) { goto _TL7;
	  }
	  if (_T41 == 0) { goto _TL7;
	  }
	  _throw_arraybounds();
	  goto _TL8;
	  _TL7: _TL8: _T1E = _T3F.curr;
	  _T1F = (char *)_T1E;
	  *_T1F = _T41;
	}
      }_T20 = t;
      { struct _fat_ptr _T3F = _fat_ptr_plus(_T20,sizeof(char),1);
	_T21 = _T3F.curr;
	_T22 = (char *)_T21;
	{ char _T40 = *_T22;
	  _T23 = c >> 6;
	  _T24 = (int)_T23;
	  _T25 = _T24 & 3;
	  _T26 = 48 + _T25;
	  { char _T41 = (char)_T26;
	    _T27 = _get_fat_size(_T3F,sizeof(char));
	    if (_T27 != 1U) { goto _TL9;
	    }
	    if (_T40 != 0) { goto _TL9;
	    }
	    if (_T41 == 0) { goto _TL9;
	    }
	    _throw_arraybounds();
	    goto _TLA;
	    _TL9: _TLA: _T28 = _T3F.curr;
	    _T29 = (char *)_T28;
	    *_T29 = _T41;
	  }
	}
      }_T2A = t;
      { struct _fat_ptr _T3F = _fat_ptr_plus(_T2A,sizeof(char),2);
	_T2B = _T3F.curr;
	_T2C = (char *)_T2B;
	{ char _T40 = *_T2C;
	  _T2D = c >> 3;
	  _T2E = (int)_T2D;
	  _T2F = _T2E & 7;
	  _T30 = 48 + _T2F;
	  { char _T41 = (char)_T30;
	    _T31 = _get_fat_size(_T3F,sizeof(char));
	    if (_T31 != 1U) { goto _TLB;
	    }
	    if (_T40 != 0) { goto _TLB;
	    }
	    if (_T41 == 0) { goto _TLB;
	    }
	    _throw_arraybounds();
	    goto _TLC;
	    _TLB: _TLC: _T32 = _T3F.curr;
	    _T33 = (char *)_T32;
	    *_T33 = _T41;
	  }
	}
      }_T34 = t;
      { struct _fat_ptr _T3F = _fat_ptr_plus(_T34,sizeof(char),3);
	_T35 = _T3F.curr;
	_T36 = (char *)_T35;
	{ char _T40 = *_T36;
	  _T37 = c >> 0;
	  _T38 = (int)_T37;
	  _T39 = _T38 & 7;
	  _T3A = 48 + _T39;
	  { char _T41 = (char)_T3A;
	    _T3B = _get_fat_size(_T3F,sizeof(char));
	    if (_T3B != 1U) { goto _TLD;
	    }
	    if (_T40 != 0) { goto _TLD;
	    }
	    if (_T41 == 0) { goto _TLD;
	    }
	    _throw_arraybounds();
	    goto _TLE;
	    _TLD: _TLE: _T3C = _T3F.curr;
	    _T3D = (char *)_T3C;
	    *_T3D = _T41;
	  }
	}
      }_T3E = t;
      return _T3E;
    }
  }
  ;
}
static long Cyc_Absynpp_special(struct _fat_ptr s) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  const char * _T5;
  const char * _T6;
  int _T7;
  char _T8;
  int _T9;
  char _TA;
  int _TB;
  char _TC;
  int _TD;
  char _TE;
  int _TF;
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  _T2 = _T1 - 1U;
  { int sz = (int)_T2;
    { int i = 0;
      _TL12: if (i < sz) { goto _TL10;
      }else { goto _TL11;
      }
      _TL10: _T3 = s;
      _T4 = _T3.curr;
      _T5 = (const char *)_T4;
      _T6 = _check_null(_T5);
      _T7 = i;
      { char c = _T6[_T7];
	_T8 = c;
	_T9 = (int)_T8;
	if (_T9 <= 32) { goto _TL15;
	}else { goto _TL18;
	}
	_TL18: _TA = c;
	_TB = (int)_TA;
	if (_TB >= 126) { goto _TL15;
	}else { goto _TL17;
	}
	_TL17: _TC = c;
	_TD = (int)_TC;
	if (_TD == 34) { goto _TL15;
	}else { goto _TL16;
	}
	_TL16: _TE = c;
	_TF = (int)_TE;
	if (_TF == 92) { goto _TL15;
	}else { goto _TL13;
	}
	_TL15: return 1;
	_TL13: ;
      }i = i + 1;
      goto _TL12;
      _TL11: ;
    }return 0;
  }
}
struct _fat_ptr Cyc_Absynpp_string_escape(struct _fat_ptr s) {
  long _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  const char * _T7;
  int _T8;
  char _T9;
  int _TA;
  struct _fat_ptr _TB;
  int _TC;
  unsigned char * _TD;
  const char * _TE;
  int _TF;
  char _T10;
  int _T11;
  char _T12;
  int _T13;
  int _T14;
  unsigned int _T15;
  struct _fat_ptr _T16;
  unsigned char * _T17;
  const char * _T18;
  int _T19;
  int _T1A;
  struct _fat_ptr _T1B;
  int _T1C;
  int _T1D;
  unsigned char * _T1E;
  char * _T1F;
  unsigned int _T20;
  unsigned char * _T21;
  char * _T22;
  struct _fat_ptr _T23;
  int _T24;
  int _T25;
  unsigned char * _T26;
  char * _T27;
  unsigned int _T28;
  unsigned char * _T29;
  char * _T2A;
  struct _fat_ptr _T2B;
  int _T2C;
  int _T2D;
  unsigned char * _T2E;
  char * _T2F;
  unsigned int _T30;
  unsigned char * _T31;
  char * _T32;
  struct _fat_ptr _T33;
  int _T34;
  int _T35;
  unsigned char * _T36;
  char * _T37;
  unsigned int _T38;
  unsigned char * _T39;
  char * _T3A;
  struct _fat_ptr _T3B;
  int _T3C;
  int _T3D;
  unsigned char * _T3E;
  char * _T3F;
  unsigned int _T40;
  unsigned char * _T41;
  char * _T42;
  struct _fat_ptr _T43;
  int _T44;
  int _T45;
  unsigned char * _T46;
  char * _T47;
  unsigned int _T48;
  unsigned char * _T49;
  char * _T4A;
  struct _fat_ptr _T4B;
  int _T4C;
  int _T4D;
  unsigned char * _T4E;
  char * _T4F;
  unsigned int _T50;
  unsigned char * _T51;
  char * _T52;
  struct _fat_ptr _T53;
  int _T54;
  int _T55;
  unsigned char * _T56;
  char * _T57;
  unsigned int _T58;
  unsigned char * _T59;
  char * _T5A;
  struct _fat_ptr _T5B;
  int _T5C;
  int _T5D;
  unsigned char * _T5E;
  char * _T5F;
  unsigned int _T60;
  unsigned char * _T61;
  char * _T62;
  struct _fat_ptr _T63;
  int _T64;
  int _T65;
  unsigned char * _T66;
  char * _T67;
  unsigned int _T68;
  unsigned char * _T69;
  char * _T6A;
  struct _fat_ptr _T6B;
  int _T6C;
  int _T6D;
  unsigned char * _T6E;
  char * _T6F;
  unsigned int _T70;
  unsigned char * _T71;
  char * _T72;
  struct _fat_ptr _T73;
  int _T74;
  int _T75;
  unsigned char * _T76;
  char * _T77;
  unsigned int _T78;
  unsigned char * _T79;
  char * _T7A;
  struct _fat_ptr _T7B;
  int _T7C;
  int _T7D;
  unsigned char * _T7E;
  char * _T7F;
  unsigned int _T80;
  unsigned char * _T81;
  char * _T82;
  struct _fat_ptr _T83;
  int _T84;
  int _T85;
  unsigned char * _T86;
  char * _T87;
  unsigned int _T88;
  unsigned char * _T89;
  char * _T8A;
  struct _fat_ptr _T8B;
  int _T8C;
  int _T8D;
  unsigned char * _T8E;
  char * _T8F;
  unsigned int _T90;
  unsigned char * _T91;
  char * _T92;
  struct _fat_ptr _T93;
  int _T94;
  int _T95;
  unsigned char * _T96;
  char * _T97;
  unsigned int _T98;
  unsigned char * _T99;
  char * _T9A;
  struct _fat_ptr _T9B;
  int _T9C;
  int _T9D;
  unsigned char * _T9E;
  char * _T9F;
  unsigned int _TA0;
  unsigned char * _TA1;
  char * _TA2;
  struct _fat_ptr _TA3;
  int _TA4;
  int _TA5;
  unsigned char * _TA6;
  char * _TA7;
  unsigned int _TA8;
  unsigned char * _TA9;
  char * _TAA;
  char _TAB;
  int _TAC;
  char _TAD;
  int _TAE;
  struct _fat_ptr _TAF;
  int _TB0;
  int _TB1;
  unsigned char * _TB2;
  char * _TB3;
  unsigned int _TB4;
  unsigned char * _TB5;
  char * _TB6;
  char _TB7;
  struct _fat_ptr _TB8;
  int _TB9;
  int _TBA;
  unsigned char * _TBB;
  char * _TBC;
  unsigned int _TBD;
  unsigned char * _TBE;
  char * _TBF;
  struct _fat_ptr _TC0;
  int _TC1;
  int _TC2;
  unsigned char * _TC3;
  char * _TC4;
  unsigned char _TC5;
  int _TC6;
  int _TC7;
  int _TC8;
  unsigned int _TC9;
  unsigned char * _TCA;
  char * _TCB;
  struct _fat_ptr _TCC;
  int _TCD;
  int _TCE;
  unsigned char * _TCF;
  char * _TD0;
  unsigned char _TD1;
  int _TD2;
  int _TD3;
  int _TD4;
  unsigned int _TD5;
  unsigned char * _TD6;
  char * _TD7;
  struct _fat_ptr _TD8;
  int _TD9;
  int _TDA;
  unsigned char * _TDB;
  char * _TDC;
  unsigned char _TDD;
  int _TDE;
  int _TDF;
  int _TE0;
  unsigned int _TE1;
  unsigned char * _TE2;
  char * _TE3;
  struct _fat_ptr _TE4;
  _T0 = Cyc_Absynpp_special(s);
  if (_T0) { goto _TL19;
  }else { goto _TL1B;
  }
  _TL1B: _T1 = s;
  return _T1;
  _TL19: _T2 = s;
  _T3 = _get_fat_size(_T2,sizeof(char));
  _T4 = _T3 - 1U;
  { int n = (int)_T4;
    if (n <= 0) { goto _TL1C;
    }
    _T5 = s;
    _T6 = _T5.curr;
    _T7 = (const char *)_T6;
    _T8 = n;
    _T9 = _T7[_T8];
    _TA = (int)_T9;
    if (_TA != 0) { goto _TL1C;
    }
    n = n + -1;
    goto _TL1D;
    _TL1C: _TL1D: { int len = 0;
      { int i = 0;
	_TL21: if (i <= n) { goto _TL1F;
	}else { goto _TL20;
	}
	_TL1F: _TB = s;
	_TC = i;
	_TD = _check_fat_subscript(_TB,sizeof(char),_TC);
	_TE = (const char *)_TD;
	{ char _TE5 = *_TE;
	  char _TE6;
	  _TF = (int)_TE5;
	  switch (_TF) {
	  case 7: 
	    goto _LL4;
	  case 8: 
	    _LL4: goto _LL6;
	  case 12: 
	    _LL6: goto _LL8;
	  case 10: 
	    _LL8: goto _LLA;
	  case 13: 
	    _LLA: goto _LLC;
	  case 9: 
	    _LLC: goto _LLE;
	  case 11: 
	    _LLE: goto _LL10;
	  case 92: 
	    _LL10: goto _LL12;
	  case 34: 
	    _LL12: len = len + 2;
	    goto _LL0;
	  default: 
	    _TE6 = _TE5;
	    { char c = _TE6;
	      _T10 = c;
	      _T11 = (int)_T10;
	      if (_T11 < 32) { goto _TL23;
	      }
	      _T12 = c;
	      _T13 = (int)_T12;
	      if (_T13 > 126) { goto _TL23;
	      }
	      len = len + 1;
	      goto _TL24;
	      _TL23: len = len + 4;
	      _TL24: goto _LL0;
	    }
	  }
	  _LL0: ;
	}i = i + 1;
	goto _TL21;
	_TL20: ;
      }_T14 = len + 1;
      _T15 = (unsigned int)_T14;
      { struct _fat_ptr t = Cyc_Core_new_string(_T15);
	int j = 0;
	{ int i = 0;
	  _TL28: if (i <= n) { goto _TL26;
	  }else { goto _TL27;
	  }
	  _TL26: _T16 = s;
	  _T17 = _T16.curr;
	  _T18 = (const char *)_T17;
	  _T19 = i;
	  { char _TE5 = _T18[_T19];
	    char _TE6;
	    _T1A = (int)_TE5;
	    switch (_T1A) {
	    case 7: 
	      _T1B = t;
	      _T1C = j;
	      j = _T1C + 1;
	      _T1D = _T1C;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T1B,sizeof(char),_T1D);
		_T1E = _TE7.curr;
		_T1F = (char *)_T1E;
		{ char _TE8 = *_T1F;
		  char _TE9 = '\\';
		  _T20 = _get_fat_size(_TE7,sizeof(char));
		  if (_T20 != 1U) { goto _TL2A;
		  }
		  if (_TE8 != 0) { goto _TL2A;
		  }
		  if (_TE9 == 0) { goto _TL2A;
		  }
		  _throw_arraybounds();
		  goto _TL2B;
		  _TL2A: _TL2B: _T21 = _TE7.curr;
		  _T22 = (char *)_T21;
		  *_T22 = _TE9;
		}
	      }_T23 = t;
	      _T24 = j;
	      j = _T24 + 1;
	      _T25 = _T24;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T23,sizeof(char),_T25);
		_T26 = _TE7.curr;
		_T27 = (char *)_T26;
		{ char _TE8 = *_T27;
		  char _TE9 = 'a';
		  _T28 = _get_fat_size(_TE7,sizeof(char));
		  if (_T28 != 1U) { goto _TL2C;
		  }
		  if (_TE8 != 0) { goto _TL2C;
		  }
		  if (_TE9 == 0) { goto _TL2C;
		  }
		  _throw_arraybounds();
		  goto _TL2D;
		  _TL2C: _TL2D: _T29 = _TE7.curr;
		  _T2A = (char *)_T29;
		  *_T2A = _TE9;
		}
	      }goto _LL15;
	    case 8: 
	      _T2B = t;
	      _T2C = j;
	      j = _T2C + 1;
	      _T2D = _T2C;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T2B,sizeof(char),_T2D);
		_T2E = _TE7.curr;
		_T2F = (char *)_T2E;
		{ char _TE8 = *_T2F;
		  char _TE9 = '\\';
		  _T30 = _get_fat_size(_TE7,sizeof(char));
		  if (_T30 != 1U) { goto _TL2E;
		  }
		  if (_TE8 != 0) { goto _TL2E;
		  }
		  if (_TE9 == 0) { goto _TL2E;
		  }
		  _throw_arraybounds();
		  goto _TL2F;
		  _TL2E: _TL2F: _T31 = _TE7.curr;
		  _T32 = (char *)_T31;
		  *_T32 = _TE9;
		}
	      }_T33 = t;
	      _T34 = j;
	      j = _T34 + 1;
	      _T35 = _T34;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T33,sizeof(char),_T35);
		_T36 = _TE7.curr;
		_T37 = (char *)_T36;
		{ char _TE8 = *_T37;
		  char _TE9 = 'b';
		  _T38 = _get_fat_size(_TE7,sizeof(char));
		  if (_T38 != 1U) { goto _TL30;
		  }
		  if (_TE8 != 0) { goto _TL30;
		  }
		  if (_TE9 == 0) { goto _TL30;
		  }
		  _throw_arraybounds();
		  goto _TL31;
		  _TL30: _TL31: _T39 = _TE7.curr;
		  _T3A = (char *)_T39;
		  *_T3A = _TE9;
		}
	      }goto _LL15;
	    case 12: 
	      _T3B = t;
	      _T3C = j;
	      j = _T3C + 1;
	      _T3D = _T3C;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T3B,sizeof(char),_T3D);
		_T3E = _TE7.curr;
		_T3F = (char *)_T3E;
		{ char _TE8 = *_T3F;
		  char _TE9 = '\\';
		  _T40 = _get_fat_size(_TE7,sizeof(char));
		  if (_T40 != 1U) { goto _TL32;
		  }
		  if (_TE8 != 0) { goto _TL32;
		  }
		  if (_TE9 == 0) { goto _TL32;
		  }
		  _throw_arraybounds();
		  goto _TL33;
		  _TL32: _TL33: _T41 = _TE7.curr;
		  _T42 = (char *)_T41;
		  *_T42 = _TE9;
		}
	      }_T43 = t;
	      _T44 = j;
	      j = _T44 + 1;
	      _T45 = _T44;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T43,sizeof(char),_T45);
		_T46 = _TE7.curr;
		_T47 = (char *)_T46;
		{ char _TE8 = *_T47;
		  char _TE9 = 'f';
		  _T48 = _get_fat_size(_TE7,sizeof(char));
		  if (_T48 != 1U) { goto _TL34;
		  }
		  if (_TE8 != 0) { goto _TL34;
		  }
		  if (_TE9 == 0) { goto _TL34;
		  }
		  _throw_arraybounds();
		  goto _TL35;
		  _TL34: _TL35: _T49 = _TE7.curr;
		  _T4A = (char *)_T49;
		  *_T4A = _TE9;
		}
	      }goto _LL15;
	    case 10: 
	      _T4B = t;
	      _T4C = j;
	      j = _T4C + 1;
	      _T4D = _T4C;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T4B,sizeof(char),_T4D);
		_T4E = _TE7.curr;
		_T4F = (char *)_T4E;
		{ char _TE8 = *_T4F;
		  char _TE9 = '\\';
		  _T50 = _get_fat_size(_TE7,sizeof(char));
		  if (_T50 != 1U) { goto _TL36;
		  }
		  if (_TE8 != 0) { goto _TL36;
		  }
		  if (_TE9 == 0) { goto _TL36;
		  }
		  _throw_arraybounds();
		  goto _TL37;
		  _TL36: _TL37: _T51 = _TE7.curr;
		  _T52 = (char *)_T51;
		  *_T52 = _TE9;
		}
	      }_T53 = t;
	      _T54 = j;
	      j = _T54 + 1;
	      _T55 = _T54;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T53,sizeof(char),_T55);
		_T56 = _TE7.curr;
		_T57 = (char *)_T56;
		{ char _TE8 = *_T57;
		  char _TE9 = 'n';
		  _T58 = _get_fat_size(_TE7,sizeof(char));
		  if (_T58 != 1U) { goto _TL38;
		  }
		  if (_TE8 != 0) { goto _TL38;
		  }
		  if (_TE9 == 0) { goto _TL38;
		  }
		  _throw_arraybounds();
		  goto _TL39;
		  _TL38: _TL39: _T59 = _TE7.curr;
		  _T5A = (char *)_T59;
		  *_T5A = _TE9;
		}
	      }goto _LL15;
	    case 13: 
	      _T5B = t;
	      _T5C = j;
	      j = _T5C + 1;
	      _T5D = _T5C;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T5B,sizeof(char),_T5D);
		_T5E = _TE7.curr;
		_T5F = (char *)_T5E;
		{ char _TE8 = *_T5F;
		  char _TE9 = '\\';
		  _T60 = _get_fat_size(_TE7,sizeof(char));
		  if (_T60 != 1U) { goto _TL3A;
		  }
		  if (_TE8 != 0) { goto _TL3A;
		  }
		  if (_TE9 == 0) { goto _TL3A;
		  }
		  _throw_arraybounds();
		  goto _TL3B;
		  _TL3A: _TL3B: _T61 = _TE7.curr;
		  _T62 = (char *)_T61;
		  *_T62 = _TE9;
		}
	      }_T63 = t;
	      _T64 = j;
	      j = _T64 + 1;
	      _T65 = _T64;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T63,sizeof(char),_T65);
		_T66 = _TE7.curr;
		_T67 = (char *)_T66;
		{ char _TE8 = *_T67;
		  char _TE9 = 'r';
		  _T68 = _get_fat_size(_TE7,sizeof(char));
		  if (_T68 != 1U) { goto _TL3C;
		  }
		  if (_TE8 != 0) { goto _TL3C;
		  }
		  if (_TE9 == 0) { goto _TL3C;
		  }
		  _throw_arraybounds();
		  goto _TL3D;
		  _TL3C: _TL3D: _T69 = _TE7.curr;
		  _T6A = (char *)_T69;
		  *_T6A = _TE9;
		}
	      }goto _LL15;
	    case 9: 
	      _T6B = t;
	      _T6C = j;
	      j = _T6C + 1;
	      _T6D = _T6C;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T6B,sizeof(char),_T6D);
		_T6E = _TE7.curr;
		_T6F = (char *)_T6E;
		{ char _TE8 = *_T6F;
		  char _TE9 = '\\';
		  _T70 = _get_fat_size(_TE7,sizeof(char));
		  if (_T70 != 1U) { goto _TL3E;
		  }
		  if (_TE8 != 0) { goto _TL3E;
		  }
		  if (_TE9 == 0) { goto _TL3E;
		  }
		  _throw_arraybounds();
		  goto _TL3F;
		  _TL3E: _TL3F: _T71 = _TE7.curr;
		  _T72 = (char *)_T71;
		  *_T72 = _TE9;
		}
	      }_T73 = t;
	      _T74 = j;
	      j = _T74 + 1;
	      _T75 = _T74;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T73,sizeof(char),_T75);
		_T76 = _TE7.curr;
		_T77 = (char *)_T76;
		{ char _TE8 = *_T77;
		  char _TE9 = 't';
		  _T78 = _get_fat_size(_TE7,sizeof(char));
		  if (_T78 != 1U) { goto _TL40;
		  }
		  if (_TE8 != 0) { goto _TL40;
		  }
		  if (_TE9 == 0) { goto _TL40;
		  }
		  _throw_arraybounds();
		  goto _TL41;
		  _TL40: _TL41: _T79 = _TE7.curr;
		  _T7A = (char *)_T79;
		  *_T7A = _TE9;
		}
	      }goto _LL15;
	    case 11: 
	      _T7B = t;
	      _T7C = j;
	      j = _T7C + 1;
	      _T7D = _T7C;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T7B,sizeof(char),_T7D);
		_T7E = _TE7.curr;
		_T7F = (char *)_T7E;
		{ char _TE8 = *_T7F;
		  char _TE9 = '\\';
		  _T80 = _get_fat_size(_TE7,sizeof(char));
		  if (_T80 != 1U) { goto _TL42;
		  }
		  if (_TE8 != 0) { goto _TL42;
		  }
		  if (_TE9 == 0) { goto _TL42;
		  }
		  _throw_arraybounds();
		  goto _TL43;
		  _TL42: _TL43: _T81 = _TE7.curr;
		  _T82 = (char *)_T81;
		  *_T82 = _TE9;
		}
	      }_T83 = t;
	      _T84 = j;
	      j = _T84 + 1;
	      _T85 = _T84;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T83,sizeof(char),_T85);
		_T86 = _TE7.curr;
		_T87 = (char *)_T86;
		{ char _TE8 = *_T87;
		  char _TE9 = 'v';
		  _T88 = _get_fat_size(_TE7,sizeof(char));
		  if (_T88 != 1U) { goto _TL44;
		  }
		  if (_TE8 != 0) { goto _TL44;
		  }
		  if (_TE9 == 0) { goto _TL44;
		  }
		  _throw_arraybounds();
		  goto _TL45;
		  _TL44: _TL45: _T89 = _TE7.curr;
		  _T8A = (char *)_T89;
		  *_T8A = _TE9;
		}
	      }goto _LL15;
	    case 92: 
	      _T8B = t;
	      _T8C = j;
	      j = _T8C + 1;
	      _T8D = _T8C;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T8B,sizeof(char),_T8D);
		_T8E = _TE7.curr;
		_T8F = (char *)_T8E;
		{ char _TE8 = *_T8F;
		  char _TE9 = '\\';
		  _T90 = _get_fat_size(_TE7,sizeof(char));
		  if (_T90 != 1U) { goto _TL46;
		  }
		  if (_TE8 != 0) { goto _TL46;
		  }
		  if (_TE9 == 0) { goto _TL46;
		  }
		  _throw_arraybounds();
		  goto _TL47;
		  _TL46: _TL47: _T91 = _TE7.curr;
		  _T92 = (char *)_T91;
		  *_T92 = _TE9;
		}
	      }_T93 = t;
	      _T94 = j;
	      j = _T94 + 1;
	      _T95 = _T94;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T93,sizeof(char),_T95);
		_T96 = _TE7.curr;
		_T97 = (char *)_T96;
		{ char _TE8 = *_T97;
		  char _TE9 = '\\';
		  _T98 = _get_fat_size(_TE7,sizeof(char));
		  if (_T98 != 1U) { goto _TL48;
		  }
		  if (_TE8 != 0) { goto _TL48;
		  }
		  if (_TE9 == 0) { goto _TL48;
		  }
		  _throw_arraybounds();
		  goto _TL49;
		  _TL48: _TL49: _T99 = _TE7.curr;
		  _T9A = (char *)_T99;
		  *_T9A = _TE9;
		}
	      }goto _LL15;
	    case 34: 
	      _T9B = t;
	      _T9C = j;
	      j = _T9C + 1;
	      _T9D = _T9C;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_T9B,sizeof(char),_T9D);
		_T9E = _TE7.curr;
		_T9F = (char *)_T9E;
		{ char _TE8 = *_T9F;
		  char _TE9 = '\\';
		  _TA0 = _get_fat_size(_TE7,sizeof(char));
		  if (_TA0 != 1U) { goto _TL4A;
		  }
		  if (_TE8 != 0) { goto _TL4A;
		  }
		  if (_TE9 == 0) { goto _TL4A;
		  }
		  _throw_arraybounds();
		  goto _TL4B;
		  _TL4A: _TL4B: _TA1 = _TE7.curr;
		  _TA2 = (char *)_TA1;
		  *_TA2 = _TE9;
		}
	      }_TA3 = t;
	      _TA4 = j;
	      j = _TA4 + 1;
	      _TA5 = _TA4;
	      { struct _fat_ptr _TE7 = _fat_ptr_plus(_TA3,sizeof(char),_TA5);
		_TA6 = _TE7.curr;
		_TA7 = (char *)_TA6;
		{ char _TE8 = *_TA7;
		  char _TE9 = '"';
		  _TA8 = _get_fat_size(_TE7,sizeof(char));
		  if (_TA8 != 1U) { goto _TL4C;
		  }
		  if (_TE8 != 0) { goto _TL4C;
		  }
		  if (_TE9 == 0) { goto _TL4C;
		  }
		  _throw_arraybounds();
		  goto _TL4D;
		  _TL4C: _TL4D: _TA9 = _TE7.curr;
		  _TAA = (char *)_TA9;
		  *_TAA = _TE9;
		}
	      }goto _LL15;
	    default: 
	      _TE6 = _TE5;
	      { char c = _TE6;
		_TAB = c;
		_TAC = (int)_TAB;
		if (_TAC < 32) { goto _TL4E;
		}
		_TAD = c;
		_TAE = (int)_TAD;
		if (_TAE > 126) { goto _TL4E;
		}
		_TAF = t;
		_TB0 = j;
		j = _TB0 + 1;
		_TB1 = _TB0;
		{ struct _fat_ptr _TE7 = _fat_ptr_plus(_TAF,sizeof(char),
						       _TB1);
		  _TB2 = _TE7.curr;
		  _TB3 = (char *)_TB2;
		  { char _TE8 = *_TB3;
		    char _TE9 = c;
		    _TB4 = _get_fat_size(_TE7,sizeof(char));
		    if (_TB4 != 1U) { goto _TL50;
		    }
		    if (_TE8 != 0) { goto _TL50;
		    }
		    if (_TE9 == 0) { goto _TL50;
		    }
		    _throw_arraybounds();
		    goto _TL51;
		    _TL50: _TL51: _TB5 = _TE7.curr;
		    _TB6 = (char *)_TB5;
		    *_TB6 = _TE9;
		  }
		}goto _TL4F;
		_TL4E: _TB7 = c;
		{ unsigned char uc = (unsigned char)_TB7;
		  _TB8 = t;
		  _TB9 = j;
		  j = _TB9 + 1;
		  _TBA = _TB9;
		  { struct _fat_ptr _TE7 = _fat_ptr_plus(_TB8,sizeof(char),
							 _TBA);
		    _TBB = _TE7.curr;
		    _TBC = (char *)_TBB;
		    { char _TE8 = *_TBC;
		      char _TE9 = '\\';
		      _TBD = _get_fat_size(_TE7,sizeof(char));
		      if (_TBD != 1U) { goto _TL52;
		      }
		      if (_TE8 != 0) { goto _TL52;
		      }
		      if (_TE9 == 0) { goto _TL52;
		      }
		      _throw_arraybounds();
		      goto _TL53;
		      _TL52: _TL53: _TBE = _TE7.curr;
		      _TBF = (char *)_TBE;
		      *_TBF = _TE9;
		    }
		  }_TC0 = t;
		  _TC1 = j;
		  j = _TC1 + 1;
		  _TC2 = _TC1;
		  { struct _fat_ptr _TE7 = _fat_ptr_plus(_TC0,sizeof(char),
							 _TC2);
		    _TC3 = _TE7.curr;
		    _TC4 = (char *)_TC3;
		    { char _TE8 = *_TC4;
		      _TC5 = uc >> 6;
		      _TC6 = (int)_TC5;
		      _TC7 = _TC6 & 7;
		      _TC8 = 48 + _TC7;
		      { char _TE9 = (char)_TC8;
			_TC9 = _get_fat_size(_TE7,sizeof(char));
			if (_TC9 != 1U) { goto _TL54;
			}
			if (_TE8 != 0) { goto _TL54;
			}
			if (_TE9 == 0) { goto _TL54;
			}
			_throw_arraybounds();
			goto _TL55;
			_TL54: _TL55: _TCA = _TE7.curr;
			_TCB = (char *)_TCA;
			*_TCB = _TE9;
		      }
		    }
		  }_TCC = t;
		  _TCD = j;
		  j = _TCD + 1;
		  _TCE = _TCD;
		  { struct _fat_ptr _TE7 = _fat_ptr_plus(_TCC,sizeof(char),
							 _TCE);
		    _TCF = _TE7.curr;
		    _TD0 = (char *)_TCF;
		    { char _TE8 = *_TD0;
		      _TD1 = uc >> 3;
		      _TD2 = (int)_TD1;
		      _TD3 = _TD2 & 7;
		      _TD4 = 48 + _TD3;
		      { char _TE9 = (char)_TD4;
			_TD5 = _get_fat_size(_TE7,sizeof(char));
			if (_TD5 != 1U) { goto _TL56;
			}
			if (_TE8 != 0) { goto _TL56;
			}
			if (_TE9 == 0) { goto _TL56;
			}
			_throw_arraybounds();
			goto _TL57;
			_TL56: _TL57: _TD6 = _TE7.curr;
			_TD7 = (char *)_TD6;
			*_TD7 = _TE9;
		      }
		    }
		  }_TD8 = t;
		  _TD9 = j;
		  j = _TD9 + 1;
		  _TDA = _TD9;
		  { struct _fat_ptr _TE7 = _fat_ptr_plus(_TD8,sizeof(char),
							 _TDA);
		    _TDB = _TE7.curr;
		    _TDC = (char *)_TDB;
		    { char _TE8 = *_TDC;
		      _TDD = uc >> 0;
		      _TDE = (int)_TDD;
		      _TDF = _TDE & 7;
		      _TE0 = 48 + _TDF;
		      { char _TE9 = (char)_TE0;
			_TE1 = _get_fat_size(_TE7,sizeof(char));
			if (_TE1 != 1U) { goto _TL58;
			}
			if (_TE8 != 0) { goto _TL58;
			}
			if (_TE9 == 0) { goto _TL58;
			}
			_throw_arraybounds();
			goto _TL59;
			_TL58: _TL59: _TE2 = _TE7.curr;
			_TE3 = (char *)_TE2;
			*_TE3 = _TE9;
		      }
		    }
		  }
		}_TL4F: goto _LL15;
	      }
	    }
	    _LL15: ;
	  }i = i + 1;
	  goto _TL28;
	  _TL27: ;
	}_TE4 = t;
	return _TE4;
      }
    }
  }
}
static char _TmpG2[6U] = "const";
static char _TmpG3[9U] = "volatile";
static char _TmpG4[9U] = "restrict";
struct Cyc_PP_Doc * Cyc_Absynpp_tqual2doc(struct Cyc_Absyn_Tqual tq) {
  struct Cyc_Absyn_Tqual _T0;
  long _T1;
  struct Cyc_List_List * _T2;
  struct _fat_ptr * _T3;
  struct Cyc_Absyn_Tqual _T4;
  long _T5;
  struct Cyc_List_List * _T6;
  struct _fat_ptr * _T7;
  struct Cyc_Absyn_Tqual _T8;
  long _T9;
  struct Cyc_List_List * _TA;
  struct _fat_ptr * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct Cyc_List_List * (* _TF)(struct Cyc_PP_Doc * (*)(struct _fat_ptr *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T10)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T11)(struct _fat_ptr *);
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_PP_Doc * _T14;
  static struct _fat_ptr restrict_string = {(unsigned char *)_TmpG4,(unsigned char *)_TmpG4,
					    (unsigned char *)_TmpG4 + 9U};
  static struct _fat_ptr volatile_string = {(unsigned char *)_TmpG3,(unsigned char *)_TmpG3,
					    (unsigned char *)_TmpG3 + 9U};
  static struct _fat_ptr const_string = {(unsigned char *)_TmpG2,(unsigned char *)_TmpG2,
					 (unsigned char *)_TmpG2 + 6U};
  struct Cyc_List_List * l = 0;
  _T0 = tq;
  _T1 = _T0.q_restrict;
  if (! _T1) { goto _TL5A;
  }
  { struct Cyc_List_List * _T15 = _cycalloc(sizeof(struct Cyc_List_List));
    _T3 = &restrict_string;
    _T15->hd = (struct _fat_ptr *)_T3;
    _T15->tl = l;
    _T2 = (struct Cyc_List_List *)_T15;
  }l = _T2;
  goto _TL5B;
  _TL5A: _TL5B: _T4 = tq;
  _T5 = _T4.q_volatile;
  if (! _T5) { goto _TL5C;
  }
  { struct Cyc_List_List * _T15 = _cycalloc(sizeof(struct Cyc_List_List));
    _T7 = &volatile_string;
    _T15->hd = (struct _fat_ptr *)_T7;
    _T15->tl = l;
    _T6 = (struct Cyc_List_List *)_T15;
  }l = _T6;
  goto _TL5D;
  _TL5C: _TL5D: _T8 = tq;
  _T9 = _T8.print_const;
  if (! _T9) { goto _TL5E;
  }
  { struct Cyc_List_List * _T15 = _cycalloc(sizeof(struct Cyc_List_List));
    _TB = &const_string;
    _T15->hd = (struct _fat_ptr *)_TB;
    _T15->tl = l;
    _TA = (struct Cyc_List_List *)_T15;
  }l = _TA;
  goto _TL5F;
  _TL5E: _TL5F: _TC = _tag_fat("",sizeof(char),1U);
  _TD = _tag_fat(" ",sizeof(char),2U);
  _TE = _tag_fat(" ",sizeof(char),2U);
  _T10 = Cyc_List_map;
  { struct Cyc_List_List * (* _T15)(struct Cyc_PP_Doc * (*)(struct _fat_ptr *),
				    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _fat_ptr *),
											  struct Cyc_List_List *))_T10;
    _TF = _T15;
  }_T11 = Cyc_PP_textptr;
  _T12 = l;
  _T13 = _TF(_T11,_T12);
  _T14 = Cyc_PP_egroup(_TC,_TD,_TE,_T13);
  return _T14;
}
struct _fat_ptr Cyc_Absynpp_kind2string(struct Cyc_Absyn_Kind * ka) {
  struct _fat_ptr _T0;
  _T0 = Cyc_Kinds_kind2string(ka);
  return _T0;
}
struct Cyc_PP_Doc * Cyc_Absynpp_kind2doc(struct Cyc_Absyn_Kind * k) {
  struct _fat_ptr _T0;
  struct Cyc_PP_Doc * _T1;
  _T0 = Cyc_Absynpp_kind2string(k);
  _T1 = Cyc_PP_text(_T0);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_kindbound2string(void * c) {
  int * _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  int _T4;
  struct _fat_ptr _T5;
  struct Cyc_String_pa_PrintArg_struct _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  void * _T9 = Cyc_Kinds_compress_kb(c);
  struct Cyc_Absyn_Kind * _TA;
  _T0 = (int *)_T9;
  _T1 = *_T0;
  switch (_T1) {
  case 0: 
    { struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _TB = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T9;
      _TA = _TB->f1;
    }{ struct Cyc_Absyn_Kind * k = _TA;
      _T2 = Cyc_Absynpp_kind2string(k);
      return _T2;
    }
  case 1: 
    _T4 = Cyc_PP_tex_output;
    if (! _T4) { goto _TL61;
    }
    _T3 = _tag_fat("{?}",sizeof(char),4U);
    goto _TL62;
    _TL61: _T3 = _tag_fat("?",sizeof(char),2U);
    _TL62: return _T3;
  default: 
    { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _TB = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T9;
      _TA = _TB->f2;
    }{ struct Cyc_Absyn_Kind * k = _TA;
      { struct Cyc_String_pa_PrintArg_struct _TB;
	_TB.tag = 0;
	_TB.f1 = Cyc_Absynpp_kind2string(k);
	_T6 = _TB;
      }{ struct Cyc_String_pa_PrintArg_struct _TB = _T6;
	void * _TC[1];
	_TC[0] = &_TB;
	_T7 = _tag_fat("<=%s",sizeof(char),5U);
	_T8 = _tag_fat(_TC,sizeof(void *),1);
	_T5 = Cyc_aprintf(_T7,_T8);
      }return _T5;
    }
  }
  ;
}
struct Cyc_PP_Doc * Cyc_Absynpp_kindbound2doc(void * c) {
  int * _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  struct Cyc_PP_Doc * _T3;
  struct Cyc_PP_Doc * _T4;
  int _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_PP_Doc * _T9;
  void * _TA = Cyc_Kinds_compress_kb(c);
  struct Cyc_Absyn_Kind * _TB;
  _T0 = (int *)_TA;
  _T1 = *_T0;
  switch (_T1) {
  case 0: 
    { struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _TC = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_TA;
      _TB = _TC->f1;
    }{ struct Cyc_Absyn_Kind * k = _TB;
      _T2 = Cyc_Absynpp_kind2string(k);
      _T3 = Cyc_PP_text(_T2);
      return _T3;
    }
  case 1: 
    _T5 = Cyc_PP_tex_output;
    if (! _T5) { goto _TL64;
    }
    _T6 = _tag_fat("{?}",sizeof(char),4U);
    _T4 = Cyc_PP_text(_T6);
    goto _TL65;
    _TL64: _T7 = _tag_fat("?",sizeof(char),2U);
    _T4 = Cyc_PP_text(_T7);
    _TL65: return _T4;
  default: 
    { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _TC = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_TA;
      _TB = _TC->f2;
    }{ struct Cyc_Absyn_Kind * k = _TB;
      _T8 = Cyc_Absynpp_kind2string(k);
      _T9 = Cyc_PP_text(_T8);
      return _T9;
    }
  }
  ;
}
static long Cyc_Absynpp_emptydoc(struct Cyc_PP_Doc * a) {
  struct _fat_ptr _T0;
  unsigned long _T1;
  int _T2;
  _T0 = Cyc_PP_string_of_doc(a,72);
  _T1 = Cyc_strlen(_T0);
  _T2 = _T1 == 0U;
  return _T2;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_tps2doc(struct Cyc_List_List * ts) {
  long _T0;
  long _T1;
  long _T2;
  struct Cyc_List_List * _T3;
  unsigned int _T4;
  struct Cyc_List_List * _T5;
  int * _T6;
  int _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * (* _TB)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _TC)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TD)(void *);
  struct Cyc_List_List * _TE;
  long _TF;
  struct Cyc_List_List * _T10;
  unsigned int _T11;
  struct Cyc_List_List * _T12;
  void * _T13;
  struct Cyc_PP_Doc * _T14;
  long _T15;
  long _T16;
  int (* _T17)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T18)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct Cyc_List_List * _T1B;
  struct Cyc_PP_Doc * _T1C;
  struct Cyc_List_List * _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct Cyc_List_List * _T21;
  struct Cyc_PP_Doc * _T22;
  _T0 = Cyc_Absynpp_gen_clean_cyclone;
  if (! _T0) { goto _TL66;
  }
  _T1 = Cyc_Absynpp_inside_function_type;
  if (_T1) { goto _TL66;
  }else { goto _TL68;
  }
  _TL68: { long foundEvar = 0;
    struct Cyc_List_List * cleanTs = 0;
    { struct Cyc_List_List * ts2 = ts;
      _TL6C: _T2 = foundEvar;
      if (_T2) { goto _TL6B;
      }else { goto _TL6D;
      }
      _TL6D: _T3 = ts2;
      _T4 = (unsigned int)_T3;
      if (_T4) { goto _TL6A;
      }else { goto _TL6B;
      }
      _TL6A: _T5 = ts2;
      { void * _T23 = _T5->hd;
	_T6 = (int *)_T23;
	_T7 = *_T6;
	if (_T7 != 1) { goto _TL6E;
	}
	foundEvar = 1;
	goto _LL0;
	_TL6E: { struct Cyc_List_List * _T24 = _cycalloc(sizeof(struct Cyc_List_List));
	  _T9 = ts2;
	  _T24->hd = _T9->hd;
	  _T24->tl = cleanTs;
	  _T8 = (struct Cyc_List_List *)_T24;
	}cleanTs = _T8;
	goto _LL0;
	_LL0: ;
      }_TA = ts2;
      ts2 = _TA->tl;
      goto _TL6C;
      _TL6B: ;
    }ts = Cyc_List_imp_rev(cleanTs);
  }goto _TL67;
  _TL66: _TL67: _TC = Cyc_List_map;
  { struct Cyc_List_List * (* _T23)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(void *),
															  struct Cyc_List_List *))_TC;
    _TB = _T23;
  }_TD = Cyc_Absynpp_typ2doc;
  _TE = ts;
  { struct Cyc_List_List * l = _TB(_TD,_TE);
    _TF = Cyc_Absynpp_gen_clean_cyclone;
    if (! _TF) { goto _TL70;
    }
    { struct Cyc_List_List * prev = 0;
      long foundEmptyDoc = 0;
      { struct Cyc_List_List * ll = l;
	_TL75: _T10 = ll;
	_T11 = (unsigned int)_T10;
	if (_T11) { goto _TL73;
	}else { goto _TL74;
	}
	_TL73: _T12 = ll;
	_T13 = _T12->hd;
	_T14 = (struct Cyc_PP_Doc *)_T13;
	_T15 = Cyc_Absynpp_emptydoc(_T14);
	if (_T15) { goto _TL76;
	}else { goto _TL78;
	}
	_TL78: _T16 = foundEmptyDoc;
	if (! _T16) { goto _TL79;
	}
	_T18 = Cyc_Warn_impos;
	{ int (* _T23)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_T18;
	  _T17 = _T23;
	}_T19 = _tag_fat("Found non-empty doc after an empty doc",sizeof(char),
			 39U);
	_T1A = _tag_fat(0U,sizeof(void *),0);
	_T17(_T19,_T1A);
	goto _TL7A;
	_TL79: _TL7A: prev = ll;
	goto _TL77;
	_TL76: foundEmptyDoc = 1;
	_TL77: _T1B = ll;
	ll = _T1B->tl;
	goto _TL75;
	_TL74: ;
      }if (prev != 0) { goto _TL7B;
      }
      _T1C = Cyc_PP_nil_doc();
      return _T1C;
      _TL7B: _T1D = prev;
      _T1D->tl = 0;
    }goto _TL71;
    _TL70: _TL71: _T1E = _tag_fat("<",sizeof(char),2U);
    _T1F = _tag_fat(">",sizeof(char),2U);
    _T20 = _tag_fat(",",sizeof(char),2U);
    _T21 = l;
    _T22 = Cyc_PP_egroup(_T1E,_T1F,_T20,_T21);
    return _T22;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_tvar2doc(struct Cyc_Absyn_Tvar * tv) {
  struct Cyc_Absyn_Tvar * _T0;
  struct _fat_ptr * _T1;
  long _T2;
  long _T3;
  struct Cyc_Absyn_Tvar * _T4;
  void * _T5;
  int * _T6;
  unsigned int _T7;
  struct _fat_ptr _T8;
  struct Cyc_String_pa_PrintArg_struct _T9;
  struct Cyc_String_pa_PrintArg_struct _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct Cyc_PP_Doc * _TE;
  struct Cyc_PP_Doc * _TF;
  _T0 = tv;
  _T1 = _T0->name;
  { struct _fat_ptr n = *_T1;
    _T2 = Cyc_Absynpp_rewrite_temp_tvars;
    if (! _T2) { goto _TL7D;
    }
    _T3 = Cyc_Tcutil_is_temp_tvar(tv);
    if (! _T3) { goto _TL7D;
    }
    { struct _fat_ptr kstring = _tag_fat("K",sizeof(char),2U);
      _T4 = tv;
      _T5 = _T4->kind;
      { void * _T10 = Cyc_Kinds_compress_kb(_T5);
	struct Cyc_Absyn_Kind * _T11;
	_T6 = (int *)_T10;
	_T7 = *_T6;
	switch (_T7) {
	case 2: 
	  { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T12 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T10;
	    _T11 = _T12->f2;
	  }{ struct Cyc_Absyn_Kind * k = _T11;
	    _T11 = k;
	    goto _LL4;
	  }
	case 0: 
	  { struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T12 = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T10;
	    _T11 = _T12->f1;
	  }_LL4: { struct Cyc_Absyn_Kind * k = _T11;
	    kstring = Cyc_Absynpp_kind2string(k);
	    goto _LL0;
	  }
	default: 
	  goto _LL0;
	}
	_LL0: ;
      }{ struct Cyc_String_pa_PrintArg_struct _T10;
	_T10.tag = 0;
	_T10.f1 = kstring;
	_T9 = _T10;
      }{ struct Cyc_String_pa_PrintArg_struct _T10 = _T9;
	{ struct Cyc_String_pa_PrintArg_struct _T11;
	  _T11.tag = 0;
	  _TB = n;
	  _T11.f1 = _fat_ptr_plus(_TB,sizeof(char),1);
	  _TA = _T11;
	}{ struct Cyc_String_pa_PrintArg_struct _T11 = _TA;
	  void * _T12[2];
	  _T12[0] = &_T10;
	  _T12[1] = &_T11;
	  _TC = _tag_fat("`G%s%s",sizeof(char),7U);
	  _TD = _tag_fat(_T12,sizeof(void *),2);
	  _T8 = Cyc_aprintf(_TC,_TD);
	}
      }_TE = Cyc_PP_text(_T8);
      return _TE;
    }_TL7D: _TF = Cyc_PP_text(n);
    return _TF;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_ktvar2doc(struct Cyc_Absyn_Tvar * tv) {
  struct Cyc_Absyn_Tvar * _T0;
  void * _T1;
  int * _T2;
  unsigned int _T3;
  struct Cyc_PP_Doc * _T4;
  struct Cyc_PP_Doc * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  _T0 = tv;
  _T1 = _T0->kind;
  { void * _T8 = Cyc_Kinds_compress_kb(_T1);
    struct Cyc_Absyn_Kind * _T9;
    _T2 = (int *)_T8;
    _T3 = *_T2;
    switch (_T3) {
    case 1: 
      _T4 = Cyc_Absynpp_tvar2doc(tv);
      return _T4;
    case 2: 
      { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _TA = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T8;
	_T9 = _TA->f2;
      }{ struct Cyc_Absyn_Kind * k = _T9;
	_T9 = k;
	goto _LL6;
      }
    default: 
      { struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _TA = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T8;
	_T9 = _TA->f1;
      }_LL6: { struct Cyc_Absyn_Kind * k = _T9;
	{ struct Cyc_PP_Doc * _TA[3];
	  _TA[0] = Cyc_Absynpp_tvar2doc(tv);
	  _T6 = _tag_fat("::",sizeof(char),3U);
	  _TA[1] = Cyc_PP_text(_T6);
	  _TA[2] = Cyc_Absynpp_kind2doc(k);
	  _T7 = _tag_fat(_TA,sizeof(struct Cyc_PP_Doc *),3);
	  _T5 = Cyc_PP_cat(_T7);
	}return _T5;
      }
    }
    ;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_ktvars2doc(struct Cyc_List_List * tvs) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_List_List * (* _T3)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T4)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_PP_Doc * _T7;
  _T0 = _tag_fat("<",sizeof(char),2U);
  _T1 = _tag_fat(">",sizeof(char),2U);
  _T2 = _tag_fat(",",sizeof(char),2U);
  _T4 = Cyc_List_map;
  { struct Cyc_List_List * (* _T8)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
				   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
											 struct Cyc_List_List *))_T4;
    _T3 = _T8;
  }_T5 = tvs;
  _T6 = _T3(Cyc_Absynpp_ktvar2doc,_T5);
  _T7 = Cyc_PP_egroup(_T0,_T1,_T2,_T6);
  return _T7;
}
struct Cyc_PP_Doc * Cyc_Absynpp_tvars2doc(struct Cyc_List_List * tvs) {
  struct Cyc_PP_Doc * (* _T0)(struct Cyc_Absyn_Tvar *);
  long _T1;
  long _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_List_List * (* _T6)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T7)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T8)(struct Cyc_Absyn_Tvar *);
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_PP_Doc * _TB;
  _T1 = Cyc_Absynpp_print_all_kinds;
  if (_T1) { goto _TL83;
  }else { goto _TL84;
  }
  _TL84: _T2 = Cyc_Absynpp_gen_clean_cyclone;
  if (_T2) { goto _TL83;
  }else { goto _TL81;
  }
  _TL83: _T0 = Cyc_Absynpp_ktvar2doc;
  goto _TL82;
  _TL81: _T0 = Cyc_Absynpp_tvar2doc;
  _TL82: { struct Cyc_PP_Doc * (* f)(struct Cyc_Absyn_Tvar *) = _T0;
    _T3 = _tag_fat("<",sizeof(char),2U);
    _T4 = _tag_fat(">",sizeof(char),2U);
    _T5 = _tag_fat(",",sizeof(char),2U);
    _T7 = Cyc_List_map;
    { struct Cyc_List_List * (* _TC)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
				     struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
											   struct Cyc_List_List *))_T7;
      _T6 = _TC;
    }_T8 = f;
    _T9 = tvs;
    _TA = _T6(_T8,_T9);
    _TB = Cyc_PP_egroup(_T3,_T4,_T5,_TA);
    return _TB;
  }
}
 struct _tuple20 {
  struct Cyc_Absyn_Tqual f0;
  void * f1;
};
struct Cyc_PP_Doc * Cyc_Absynpp_arg2doc(struct _tuple20 * t) {
  struct _tuple20 * _T0;
  struct _tuple20 _T1;
  struct Cyc_Absyn_Tqual _T2;
  struct _tuple20 * _T3;
  struct _tuple20 _T4;
  void * _T5;
  struct Cyc_PP_Doc * _T6;
  _T0 = t;
  _T1 = *_T0;
  _T2 = _T1.f0;
  _T3 = t;
  _T4 = *_T3;
  _T5 = _T4.f1;
  _T6 = Cyc_Absynpp_tqtd2doc(_T2,_T5,0);
  return _T6;
}
struct Cyc_PP_Doc * Cyc_Absynpp_args2doc(struct Cyc_List_List * ts) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_List_List * (* _T3)(struct Cyc_PP_Doc * (*)(struct _tuple20 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T4)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_PP_Doc * _T7;
  _T0 = _tag_fat("(",sizeof(char),2U);
  _T1 = _tag_fat(")",sizeof(char),2U);
  _T2 = _tag_fat(",",sizeof(char),2U);
  _T4 = Cyc_List_map;
  { struct Cyc_List_List * (* _T8)(struct Cyc_PP_Doc * (*)(struct _tuple20 *),
				   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple20 *),
											 struct Cyc_List_List *))_T4;
    _T3 = _T8;
  }_T5 = ts;
  _T6 = _T3(Cyc_Absynpp_arg2doc,_T5);
  _T7 = Cyc_PP_group(_T0,_T1,_T2,_T6);
  return _T7;
}
struct Cyc_PP_Doc * Cyc_Absynpp_noncallatt2doc(void * att) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_PP_Doc * _T3;
  struct _fat_ptr _T4;
  struct Cyc_PP_Doc * _T5;
  _T0 = att;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 1: 
    goto _LL4;
  case 2: 
    _LL4: goto _LL6;
  case 3: 
    _LL6: _T3 = Cyc_PP_nil_doc();
    return _T3;
  default: 
    _T4 = Cyc_Absynpp_attribute2string(att);
    _T5 = Cyc_PP_text(_T4);
    return _T5;
  }
  ;
}
struct Cyc_PP_Doc * Cyc_Absynpp_callconv2doc(struct Cyc_List_List * atts) {
  struct Cyc_List_List * _T0;
  int * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct Cyc_PP_Doc * _T4;
  struct _fat_ptr _T5;
  struct Cyc_PP_Doc * _T6;
  struct _fat_ptr _T7;
  struct Cyc_PP_Doc * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_PP_Doc * _TA;
  _TL89: if (atts != 0) { goto _TL87;
  }else { goto _TL88;
  }
  _TL87: _T0 = atts;
  { void * _TB = _T0->hd;
    _T1 = (int *)_TB;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      _T3 = _tag_fat(" _stdcall ",sizeof(char),11U);
      _T4 = Cyc_PP_text(_T3);
      return _T4;
    case 2: 
      _T5 = _tag_fat(" _cdecl ",sizeof(char),9U);
      _T6 = Cyc_PP_text(_T5);
      return _T6;
    case 3: 
      _T7 = _tag_fat(" _fastcall ",sizeof(char),12U);
      _T8 = Cyc_PP_text(_T7);
      return _T8;
    default: 
      goto _LL0;
    }
    _LL0: ;
  }_T9 = atts;
  atts = _T9->tl;
  goto _TL89;
  _TL88: _TA = Cyc_PP_nil_doc();
  return _TA;
}
struct Cyc_PP_Doc * Cyc_Absynpp_noncallconv2doc(struct Cyc_List_List * atts) {
  struct Cyc_List_List * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_List_List * _T3;
  long _T4;
  struct Cyc_PP_Doc * _T5;
  struct Cyc_PP_Doc * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct Cyc_List_List * (* _TB)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _TC)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  long hasatt = 0;
  { struct Cyc_List_List * atts2 = atts;
    _TL8E: if (atts2 != 0) { goto _TL8C;
    }else { goto _TL8D;
    }
    _TL8C: _T0 = atts2;
    { void * _T11 = _T0->hd;
      _T1 = (int *)_T11;
      _T2 = *_T1;
      switch (_T2) {
      case 1: 
	goto _LL4;
      case 2: 
	_LL4: goto _LL6;
      case 3: 
	_LL6: goto _LL0;
      default: 
	hasatt = 1;
	goto _LL0;
      }
      _LL0: ;
    }_T3 = atts2;
    atts2 = _T3->tl;
    goto _TL8E;
    _TL8D: ;
  }_T4 = hasatt;
  if (_T4) { goto _TL90;
  }else { goto _TL92;
  }
  _TL92: _T5 = Cyc_PP_nil_doc();
  return _T5;
  _TL90: { struct Cyc_PP_Doc * _T11[3];
    _T7 = _tag_fat(" __declspec(",sizeof(char),13U);
    _T11[0] = Cyc_PP_text(_T7);
    _T8 = _tag_fat("",sizeof(char),1U);
    _T9 = _tag_fat("",sizeof(char),1U);
    _TA = _tag_fat(" ",sizeof(char),2U);
    _TC = Cyc_List_map;
    { struct Cyc_List_List * (* _T12)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(void *),
															    struct Cyc_List_List *))_TC;
      _TB = _T12;
    }_TD = atts;
    _TE = _TB(Cyc_Absynpp_noncallatt2doc,_TD);
    _T11[1] = Cyc_PP_group(_T8,_T9,_TA,_TE);
    _TF = _tag_fat(")",sizeof(char),2U);
    _T11[2] = Cyc_PP_text(_TF);
    _T10 = _tag_fat(_T11,sizeof(struct Cyc_PP_Doc *),3);
    _T6 = Cyc_PP_cat(_T10);
  }return _T6;
}
struct _fat_ptr Cyc_Absynpp_attribute2string(void * a) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct _fat_ptr _T4;
  struct Cyc_Int_pa_PrintArg_struct _T5;
  int _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  void * _TF;
  struct _fat_ptr _T10;
  enum Cyc_Flags_C_Compilers _T11;
  int _T12;
  struct _fat_ptr _T13;
  struct Cyc_String_pa_PrintArg_struct _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct _fat_ptr _T17;
  struct Cyc_String_pa_PrintArg_struct _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  void * _T1C;
  struct _fat_ptr _T1D;
  struct Cyc_String_pa_PrintArg_struct _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  struct _fat_ptr _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  struct _fat_ptr _T2A;
  void * _T2B;
  struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T2C;
  enum Cyc_Absyn_Format_Type _T2D;
  int _T2E;
  void * _T2F;
  struct _fat_ptr _T30;
  struct Cyc_Int_pa_PrintArg_struct _T31;
  int _T32;
  struct Cyc_Int_pa_PrintArg_struct _T33;
  int _T34;
  struct _fat_ptr _T35;
  struct _fat_ptr _T36;
  void * _T37;
  struct _fat_ptr _T38;
  struct Cyc_Int_pa_PrintArg_struct _T39;
  int _T3A;
  struct Cyc_Int_pa_PrintArg_struct _T3B;
  int _T3C;
  struct _fat_ptr _T3D;
  struct _fat_ptr _T3E;
  void * _T3F;
  int (* _T40)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T41)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T42;
  struct _fat_ptr _T43;
  void * _T44;
  struct _fat_ptr _T45;
  struct Cyc_Int_pa_PrintArg_struct _T46;
  int _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  void * _T4A;
  struct _fat_ptr _T4B;
  struct Cyc_Int_pa_PrintArg_struct _T4C;
  int _T4D;
  struct _fat_ptr _T4E;
  struct _fat_ptr _T4F;
  void * _T50;
  struct _fat_ptr _T51;
  struct Cyc_Int_pa_PrintArg_struct _T52;
  int _T53;
  struct _fat_ptr _T54;
  struct _fat_ptr _T55;
  struct _fat_ptr _T56;
  struct _fat_ptr _T57;
  void * _T58;
  struct _fat_ptr _T59;
  struct Cyc_String_pa_PrintArg_struct _T5A;
  struct _fat_ptr _T5B;
  struct _fat_ptr _T5C;
  void * _T5D;
  struct _fat_ptr _T5E;
  struct Cyc_String_pa_PrintArg_struct _T5F;
  struct _fat_ptr _T60;
  struct _fat_ptr _T61;
  struct _fat_ptr _T62;
  struct _fat_ptr _T63;
  struct _fat_ptr _T64;
  struct _fat_ptr _T65;
  void * _T66;
  struct Cyc_Absyn_Access_att_Absyn_Attribute_struct * _T67;
  enum Cyc_Absyn_Access_Type _T68;
  void * _T69;
  struct _fat_ptr _T6A;
  struct Cyc_Int_pa_PrintArg_struct _T6B;
  int _T6C;
  struct Cyc_Int_pa_PrintArg_struct _T6D;
  int _T6E;
  struct _fat_ptr _T6F;
  struct _fat_ptr _T70;
  void * _T71;
  int (* _T72)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T73)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T74;
  struct _fat_ptr _T75;
  struct _fat_ptr _T76;
  void * _T77;
  struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct * _T78;
  int _T79;
  void * _T7A;
  struct _fat_ptr _T7B;
  struct Cyc_Int_pa_PrintArg_struct _T7C;
  int _T7D;
  struct _fat_ptr _T7E;
  struct _fat_ptr _T7F;
  void * _T80;
  struct _fat_ptr _T81;
  struct Cyc_Int_pa_PrintArg_struct _T82;
  int _T83;
  struct Cyc_Int_pa_PrintArg_struct _T84;
  int _T85;
  struct _fat_ptr _T86;
  struct _fat_ptr _T87;
  void * _T88;
  struct _fat_ptr _T89;
  struct Cyc_Int_pa_PrintArg_struct _T8A;
  int _T8B;
  struct _fat_ptr _T8C;
  struct _fat_ptr _T8D;
  struct _fat_ptr _T8E;
  struct _fat_ptr _T8F;
  void * _T90;
  struct _fat_ptr _T91;
  struct Cyc_Int_pa_PrintArg_struct _T92;
  int _T93;
  struct _fat_ptr _T94;
  struct _fat_ptr _T95;
  int _T96;
  struct _fat_ptr _T97;
  struct Cyc_Absyn_Exp * _T98;
  int _T99;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = a;
    { struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct *)_T3;
      _T99 = _T9A->f1;
    }{ int i = _T99;
      { struct Cyc_Int_pa_PrintArg_struct _T9A;
	_T9A.tag = 1;
	_T6 = i;
	_T9A.f1 = (unsigned long)_T6;
	_T5 = _T9A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T5;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T7 = _tag_fat("regparm(%d)",sizeof(char),12U);
	_T8 = _tag_fat(_T9B,sizeof(void *),1);
	_T4 = Cyc_aprintf(_T7,_T8);
      }return _T4;
    }
  case 1: 
    _T9 = _tag_fat("stdcall",sizeof(char),8U);
    return _T9;
  case 2: 
    _TA = _tag_fat("cdecl",sizeof(char),6U);
    return _TA;
  case 3: 
    _TB = _tag_fat("fastcall",sizeof(char),9U);
    return _TB;
  case 4: 
    _TC = _tag_fat("noreturn",sizeof(char),9U);
    return _TC;
  case 5: 
    _TD = _tag_fat("const",sizeof(char),6U);
    return _TD;
  case 6: 
    _TE = _tag_fat("availability",sizeof(char),13U);
    return _TE;
  case 7: 
    _TF = a;
    { struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct *)_TF;
      _T98 = _T9A->f1;
    }{ struct Cyc_Absyn_Exp * e = _T98;
      if (e != 0) { goto _TL94;
      }
      _T10 = _tag_fat("aligned",sizeof(char),8U);
      return _T10;
      _TL94: _T11 = Cyc_Flags_c_compiler;
      _T12 = (int)_T11;
      switch (_T12) {
      case Cyc_Flags_Gcc_c: 
	{ struct Cyc_String_pa_PrintArg_struct _T9A;
	  _T9A.tag = 0;
	  _T9A.f1 = Cyc_Absynpp_exp2string(e);
	  _T14 = _T9A;
	}{ struct Cyc_String_pa_PrintArg_struct _T9A = _T14;
	  void * _T9B[1];
	  _T9B[0] = &_T9A;
	  _T15 = _tag_fat("aligned(%s)",sizeof(char),12U);
	  _T16 = _tag_fat(_T9B,sizeof(void *),1);
	  _T13 = Cyc_aprintf(_T15,_T16);
	}return _T13;
      case Cyc_Flags_Vc_c: 
	goto _LL5D;
      default: 
	_LL5D: { struct Cyc_String_pa_PrintArg_struct _T9A;
	  _T9A.tag = 0;
	  _T9A.f1 = Cyc_Absynpp_exp2string(e);
	  _T18 = _T9A;
	}{ struct Cyc_String_pa_PrintArg_struct _T9A = _T18;
	  void * _T9B[1];
	  _T9B[0] = &_T9A;
	  _T19 = _tag_fat("align(%s)",sizeof(char),10U);
	  _T1A = _tag_fat(_T9B,sizeof(void *),1);
	  _T17 = Cyc_aprintf(_T19,_T1A);
	}return _T17;
      }
      ;
    }
  case 8: 
    _T1B = _tag_fat("packed",sizeof(char),7U);
    return _T1B;
  case 9: 
    _T1C = a;
    { struct Cyc_Absyn_Section_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Section_att_Absyn_Attribute_struct *)_T1C;
      _T97 = _T9A->f1;
    }{ struct _fat_ptr s = _T97;
      { struct Cyc_String_pa_PrintArg_struct _T9A;
	_T9A.tag = 0;
	_T9A.f1 = s;
	_T1E = _T9A;
      }{ struct Cyc_String_pa_PrintArg_struct _T9A = _T1E;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T1F = _tag_fat("section(\"%s\")",sizeof(char),14U);
	_T20 = _tag_fat(_T9B,sizeof(void *),1);
	_T1D = Cyc_aprintf(_T1F,_T20);
      }return _T1D;
    }
  case 10: 
    _T21 = _tag_fat("nocommon",sizeof(char),9U);
    return _T21;
  case 11: 
    _T22 = _tag_fat("shared",sizeof(char),7U);
    return _T22;
  case 12: 
    _T23 = _tag_fat("unused",sizeof(char),7U);
    return _T23;
  case 13: 
    _T24 = _tag_fat("weak",sizeof(char),5U);
    return _T24;
  case 14: 
    _T25 = _tag_fat("dllimport",sizeof(char),10U);
    return _T25;
  case 15: 
    _T26 = _tag_fat("dllexport",sizeof(char),10U);
    return _T26;
  case 16: 
    _T27 = _tag_fat("no_instrument_function",sizeof(char),23U);
    return _T27;
  case 17: 
    _T28 = _tag_fat("constructor",sizeof(char),12U);
    return _T28;
  case 18: 
    _T29 = _tag_fat("destructor",sizeof(char),11U);
    return _T29;
  case 19: 
    _T2A = _tag_fat("no_check_memory_usage",sizeof(char),22U);
    return _T2A;
  case 20: 
    _T2B = a;
    _T2C = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T2B;
    _T2D = _T2C->f1;
    _T2E = (int)_T2D;
    switch (_T2E) {
    case Cyc_Absyn_Printf_ft: 
      _T2F = a;
      { struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T2F;
	_T99 = _T9A->f2;
	_T96 = _T9A->f3;
      }{ int n = _T99;
	int m = _T96;
	{ struct Cyc_Int_pa_PrintArg_struct _T9A;
	  _T9A.tag = 1;
	  _T32 = n;
	  _T9A.f1 = (unsigned int)_T32;
	  _T31 = _T9A;
	}{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T31;
	  { struct Cyc_Int_pa_PrintArg_struct _T9B;
	    _T9B.tag = 1;
	    _T34 = m;
	    _T9B.f1 = (unsigned int)_T34;
	    _T33 = _T9B;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T9B = _T33;
	    void * _T9C[2];
	    _T9C[0] = &_T9A;
	    _T9C[1] = &_T9B;
	    _T35 = _tag_fat("format(printf,%u,%u)",sizeof(char),21U);
	    _T36 = _tag_fat(_T9C,sizeof(void *),2);
	    _T30 = Cyc_aprintf(_T35,_T36);
	  }
	}return _T30;
      }
    case Cyc_Absyn_Scanf_ft: 
      _T37 = a;
      { struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T37;
	_T99 = _T9A->f2;
	_T96 = _T9A->f3;
      }{ int n = _T99;
	int m = _T96;
	{ struct Cyc_Int_pa_PrintArg_struct _T9A;
	  _T9A.tag = 1;
	  _T3A = n;
	  _T9A.f1 = (unsigned int)_T3A;
	  _T39 = _T9A;
	}{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T39;
	  { struct Cyc_Int_pa_PrintArg_struct _T9B;
	    _T9B.tag = 1;
	    _T3C = m;
	    _T9B.f1 = (unsigned int)_T3C;
	    _T3B = _T9B;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T9B = _T3B;
	    void * _T9C[2];
	    _T9C[0] = &_T9A;
	    _T9C[1] = &_T9B;
	    _T3D = _tag_fat("format(scanf,%u,%u)",sizeof(char),20U);
	    _T3E = _tag_fat(_T9C,sizeof(void *),2);
	    _T38 = Cyc_aprintf(_T3D,_T3E);
	  }
	}return _T38;
      }
    default: 
      _T3F = a;
      { struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T3F;
	_T99 = _T9A->f2;
	_T96 = _T9A->f3;
      }{ int n = _T99;
	int m = _T96;
	_T41 = Cyc_Warn_impos;
	{ int (* _T9A)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_T41;
	  _T40 = _T9A;
	}_T42 = _tag_fat("Unknown format specifier",sizeof(char),25U);
	_T43 = _tag_fat(0U,sizeof(void *),0);
	_T40(_T42,_T43);
      }
    }
    ;
  case 21: 
    _T44 = a;
    { struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct *)_T44;
      _T99 = _T9A->f1;
    }{ int n = _T99;
      { struct Cyc_Int_pa_PrintArg_struct _T9A;
	_T9A.tag = 1;
	_T47 = n;
	_T9A.f1 = (unsigned long)_T47;
	_T46 = _T9A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T46;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T48 = _tag_fat("initializes(%d)",sizeof(char),16U);
	_T49 = _tag_fat(_T9B,sizeof(void *),1);
	_T45 = Cyc_aprintf(_T48,_T49);
      }return _T45;
    }
  case 22: 
    _T4A = a;
    { struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct *)_T4A;
      _T99 = _T9A->f1;
    }{ int n = _T99;
      { struct Cyc_Int_pa_PrintArg_struct _T9A;
	_T9A.tag = 1;
	_T4D = n;
	_T9A.f1 = (unsigned long)_T4D;
	_T4C = _T9A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T4C;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T4E = _tag_fat("noliveunique(%d)",sizeof(char),17U);
	_T4F = _tag_fat(_T9B,sizeof(void *),1);
	_T4B = Cyc_aprintf(_T4E,_T4F);
      }return _T4B;
    }
  case 23: 
    _T50 = a;
    { struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct *)_T50;
      _T99 = _T9A->f1;
    }{ int n = _T99;
      { struct Cyc_Int_pa_PrintArg_struct _T9A;
	_T9A.tag = 1;
	_T53 = n;
	_T9A.f1 = (unsigned long)_T53;
	_T52 = _T9A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T52;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T54 = _tag_fat("consume(%d)",sizeof(char),12U);
	_T55 = _tag_fat(_T9B,sizeof(void *),1);
	_T51 = Cyc_aprintf(_T54,_T55);
      }return _T51;
    }
  case 24: 
    _T56 = _tag_fat("pure",sizeof(char),5U);
    return _T56;
  case 27: 
    _T57 = _tag_fat("always_inline",sizeof(char),14U);
    return _T57;
  case 25: 
    _T58 = a;
    { struct Cyc_Absyn_Mode_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Mode_att_Absyn_Attribute_struct *)_T58;
      _T97 = _T9A->f1;
    }{ struct _fat_ptr s = _T97;
      { struct Cyc_String_pa_PrintArg_struct _T9A;
	_T9A.tag = 0;
	_T9A.f1 = s;
	_T5A = _T9A;
      }{ struct Cyc_String_pa_PrintArg_struct _T9A = _T5A;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T5B = _tag_fat("__mode__(\"%s\")",sizeof(char),15U);
	_T5C = _tag_fat(_T9B,sizeof(void *),1);
	_T59 = Cyc_aprintf(_T5B,_T5C);
      }return _T59;
    }
  case 26: 
    _T5D = a;
    { struct Cyc_Absyn_Alias_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Alias_att_Absyn_Attribute_struct *)_T5D;
      _T97 = _T9A->f1;
    }{ struct _fat_ptr s = _T97;
      { struct Cyc_String_pa_PrintArg_struct _T9A;
	_T9A.tag = 0;
	_T9A.f1 = s;
	_T5F = _T9A;
      }{ struct Cyc_String_pa_PrintArg_struct _T9A = _T5F;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T60 = _tag_fat("alias(\"%s\")",sizeof(char),12U);
	_T61 = _tag_fat(_T9B,sizeof(void *),1);
	_T5E = Cyc_aprintf(_T60,_T61);
      }return _T5E;
    }
  case 28: 
    _T62 = _tag_fat("no_throw",sizeof(char),9U);
    return _T62;
  case 29: 
    _T63 = _tag_fat("deprecated",sizeof(char),11U);
    return _T63;
  case 30: 
    _T64 = _tag_fat("leaf",sizeof(char),5U);
    return _T64;
  case 31: 
    _T65 = _tag_fat("malloc",sizeof(char),7U);
    return _T65;
  case 32: 
    _T66 = a;
    _T67 = (struct Cyc_Absyn_Access_att_Absyn_Attribute_struct *)_T66;
    _T68 = _T67->f1;
    if (_T68 != Cyc_Absyn_WriteOnly_at) { goto _TL98;
    }
    _T69 = a;
    { struct Cyc_Absyn_Access_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Access_att_Absyn_Attribute_struct *)_T69;
      _T99 = _T9A->f2;
      _T96 = _T9A->f3;
    }{ int n = _T99;
      int m = _T96;
      { struct Cyc_Int_pa_PrintArg_struct _T9A;
	_T9A.tag = 1;
	_T6C = n;
	_T9A.f1 = (unsigned int)_T6C;
	_T6B = _T9A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T6B;
	{ struct Cyc_Int_pa_PrintArg_struct _T9B;
	  _T9B.tag = 1;
	  _T6E = m;
	  _T9B.f1 = (unsigned int)_T6E;
	  _T6D = _T9B;
	}{ struct Cyc_Int_pa_PrintArg_struct _T9B = _T6D;
	  void * _T9C[2];
	  _T9C[0] = &_T9A;
	  _T9C[1] = &_T9B;
	  _T6F = _tag_fat("access(write_only,%u,%u)",sizeof(char),25U);
	  _T70 = _tag_fat(_T9C,sizeof(void *),2);
	  _T6A = Cyc_aprintf(_T6F,_T70);
	}
      }return _T6A;
    }_TL98: _T71 = a;
    { struct Cyc_Absyn_Access_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_Access_att_Absyn_Attribute_struct *)_T71;
      _T99 = _T9A->f2;
      _T96 = _T9A->f3;
    }{ int n = _T99;
      int m = _T96;
      _T73 = Cyc_Warn_impos;
      { int (* _T9A)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_T73;
	_T72 = _T9A;
      }_T74 = _tag_fat("Unknown access specifier",sizeof(char),25U);
      _T75 = _tag_fat(0U,sizeof(void *),0);
      _T72(_T74,_T75);
    };
  case 33: 
    _T76 = _tag_fat("cold",sizeof(char),5U);
    return _T76;
  case 34: 
    _T77 = a;
    _T78 = (struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct *)_T77;
    _T79 = _T78->f2;
    if (_T79 != 0) { goto _TL9A;
    }
    _T7A = a;
    { struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct *)_T7A;
      _T99 = _T9A->f1;
    }{ int n = _T99;
      { struct Cyc_Int_pa_PrintArg_struct _T9A;
	_T9A.tag = 1;
	_T7D = n;
	_T9A.f1 = (unsigned int)_T7D;
	_T7C = _T9A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T7C;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T7E = _tag_fat("alloc_size(%u)",sizeof(char),15U);
	_T7F = _tag_fat(_T9B,sizeof(void *),1);
	_T7B = Cyc_aprintf(_T7E,_T7F);
      }return _T7B;
    }_TL9A: _T80 = a;
    { struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct *)_T80;
      _T99 = _T9A->f1;
      _T96 = _T9A->f2;
    }{ int n = _T99;
      int m = _T96;
      { struct Cyc_Int_pa_PrintArg_struct _T9A;
	_T9A.tag = 1;
	_T83 = n;
	_T9A.f1 = (unsigned int)_T83;
	_T82 = _T9A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T82;
	{ struct Cyc_Int_pa_PrintArg_struct _T9B;
	  _T9B.tag = 1;
	  _T85 = m;
	  _T9B.f1 = (unsigned int)_T85;
	  _T84 = _T9B;
	}{ struct Cyc_Int_pa_PrintArg_struct _T9B = _T84;
	  void * _T9C[2];
	  _T9C[0] = &_T9A;
	  _T9C[1] = &_T9B;
	  _T86 = _tag_fat("alloc_size(%u,%u)",sizeof(char),18U);
	  _T87 = _tag_fat(_T9C,sizeof(void *),2);
	  _T81 = Cyc_aprintf(_T86,_T87);
	}
      }return _T81;
    }
  case 35: 
    _T88 = a;
    { struct Cyc_Absyn_AllocAlign_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_AllocAlign_att_Absyn_Attribute_struct *)_T88;
      _T99 = _T9A->f1;
    }{ int n = _T99;
      { struct Cyc_Int_pa_PrintArg_struct _T9A;
	_T9A.tag = 1;
	_T8B = n;
	_T9A.f1 = (unsigned int)_T8B;
	_T8A = _T9A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T8A;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T8C = _tag_fat("alloc_align(%u)",sizeof(char),16U);
	_T8D = _tag_fat(_T9B,sizeof(void *),1);
	_T89 = Cyc_aprintf(_T8C,_T8D);
      }return _T89;
    }
  case 36: 
    _T8E = _tag_fat("warn_unused_result",sizeof(char),19U);
    return _T8E;
  case 37: 
    _T8F = _tag_fat("may_alias",sizeof(char),10U);
    return _T8F;
  default: 
    _T90 = a;
    { struct Cyc_Absyn_VectorSize_att_Absyn_Attribute_struct * _T9A = (struct Cyc_Absyn_VectorSize_att_Absyn_Attribute_struct *)_T90;
      _T99 = _T9A->f1;
    }{ int n = _T99;
      { struct Cyc_Int_pa_PrintArg_struct _T9A;
	_T9A.tag = 1;
	_T93 = n;
	_T9A.f1 = (unsigned int)_T93;
	_T92 = _T9A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T9A = _T92;
	void * _T9B[1];
	_T9B[0] = &_T9A;
	_T94 = _tag_fat("vector_size(%u)",sizeof(char),16U);
	_T95 = _tag_fat(_T9B,sizeof(void *),1);
	_T91 = Cyc_aprintf(_T94,_T95);
      }return _T91;
    }
  }
  ;
}
struct Cyc_PP_Doc * Cyc_Absynpp_att2doc(void * a) {
  struct _fat_ptr _T0;
  struct Cyc_PP_Doc * _T1;
  _T0 = Cyc_Absynpp_attribute2string(a);
  _T1 = Cyc_PP_text(_T0);
  return _T1;
}
struct Cyc_PP_Doc * Cyc_Absynpp_atts2doc(struct Cyc_List_List * atts) {
  struct Cyc_PP_Doc * _T0;
  enum Cyc_Flags_C_Compilers _T1;
  struct Cyc_PP_Doc * _T2;
  struct Cyc_PP_Doc * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct Cyc_List_List * (* _T8)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T9)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct _fat_ptr _TC;
  if (atts != 0) { goto _TL9C;
  }
  _T0 = Cyc_PP_nil_doc();
  return _T0;
  _TL9C: _T1 = Cyc_Flags_c_compiler;
  if (_T1 != Cyc_Flags_Vc_c) { goto _TL9E;
  }
  _T2 = Cyc_Absynpp_noncallconv2doc(atts);
  return _T2;
  _TL9E: { struct Cyc_PP_Doc * _TD[2];
    _T4 = _tag_fat(" __attribute__",sizeof(char),15U);
    _TD[0] = Cyc_PP_text(_T4);
    _T5 = _tag_fat("((",sizeof(char),3U);
    _T6 = _tag_fat("))",sizeof(char),3U);
    _T7 = _tag_fat(",",sizeof(char),2U);
    _T9 = Cyc_List_map;
    { struct Cyc_List_List * (* _TE)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(void *),
															   struct Cyc_List_List *))_T9;
      _T8 = _TE;
    }_TA = atts;
    _TB = _T8(Cyc_Absynpp_att2doc,_TA);
    _TD[1] = Cyc_PP_group(_T5,_T6,_T7,_TB);
    _TC = _tag_fat(_TD,sizeof(struct Cyc_PP_Doc *),2);
    _T3 = Cyc_PP_cat(_TC);
  }return _T3;
  ;
}
long Cyc_Absynpp_next_is_pointer(struct Cyc_List_List * tms) {
  struct Cyc_List_List * _T0;
  int * _T1;
  unsigned int _T2;
  enum Cyc_Flags_C_Compilers _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  long _T6;
  if (tms != 0) { goto _TLA0;
  }
  return 0;
  _TLA0: _T0 = tms;
  { void * _T7 = _T0->hd;
    _T1 = (int *)_T7;
    _T2 = *_T1;
    switch (_T2) {
    case 2: 
      return 1;
    case 5: 
      _T3 = Cyc_Flags_c_compiler;
      if (_T3 != Cyc_Flags_Gcc_c) { goto _TLA3;
      }
      return 0;
      _TLA3: _T4 = tms;
      _T5 = _T4->tl;
      _T6 = Cyc_Absynpp_next_is_pointer(_T5);
      return _T6;
      ;
    default: 
      return 0;
    }
    ;
  }
}
static struct Cyc_PP_Doc * Cyc_Absynpp_question() {
  struct Cyc_PP_Doc * _T0;
  unsigned int _T1;
  struct Cyc_PP_Doc * _T2;
  int _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_PP_Doc * _T6;
  static struct Cyc_PP_Doc * cache_question = 0;
  _T0 = cache_question;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TLA5;
  }else { goto _TLA7;
  }
  _TLA7: _T3 = Cyc_PP_tex_output;
  if (! _T3) { goto _TLA8;
  }
  _T4 = _tag_fat("{?}",sizeof(char),4U);
  _T2 = Cyc_PP_text_width(_T4,1);
  goto _TLA9;
  _TLA8: _T5 = _tag_fat("?",sizeof(char),2U);
  _T2 = Cyc_PP_text(_T5);
  _TLA9: cache_question = _T2;
  goto _TLA6;
  _TLA5: _TLA6: _T6 = cache_question;
  return _T6;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_lb() {
  struct Cyc_PP_Doc * _T0;
  unsigned int _T1;
  struct Cyc_PP_Doc * _T2;
  int _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_PP_Doc * _T6;
  static struct Cyc_PP_Doc * cache_lb = 0;
  _T0 = cache_lb;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TLAA;
  }else { goto _TLAC;
  }
  _TLAC: _T3 = Cyc_PP_tex_output;
  if (! _T3) { goto _TLAD;
  }
  _T4 = _tag_fat("{\\lb}",sizeof(char),6U);
  _T2 = Cyc_PP_text_width(_T4,1);
  goto _TLAE;
  _TLAD: _T5 = _tag_fat("{",sizeof(char),2U);
  _T2 = Cyc_PP_text(_T5);
  _TLAE: cache_lb = _T2;
  goto _TLAB;
  _TLAA: _TLAB: _T6 = cache_lb;
  return _T6;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_rb() {
  struct Cyc_PP_Doc * _T0;
  unsigned int _T1;
  struct Cyc_PP_Doc * _T2;
  int _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_PP_Doc * _T6;
  static struct Cyc_PP_Doc * cache_rb = 0;
  _T0 = cache_rb;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TLAF;
  }else { goto _TLB1;
  }
  _TLB1: _T3 = Cyc_PP_tex_output;
  if (! _T3) { goto _TLB2;
  }
  _T4 = _tag_fat("{\\rb}",sizeof(char),6U);
  _T2 = Cyc_PP_text_width(_T4,1);
  goto _TLB3;
  _TLB2: _T5 = _tag_fat("}",sizeof(char),2U);
  _T2 = Cyc_PP_text(_T5);
  _TLB3: cache_rb = _T2;
  goto _TLB0;
  _TLAF: _TLB0: _T6 = cache_rb;
  return _T6;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_dollar() {
  struct Cyc_PP_Doc * _T0;
  unsigned int _T1;
  struct Cyc_PP_Doc * _T2;
  int _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_PP_Doc * _T6;
  static struct Cyc_PP_Doc * cache_dollar = 0;
  _T0 = cache_dollar;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TLB4;
  }else { goto _TLB6;
  }
  _TLB6: _T3 = Cyc_PP_tex_output;
  if (! _T3) { goto _TLB7;
  }
  _T4 = _tag_fat("\\$",sizeof(char),3U);
  _T2 = Cyc_PP_text_width(_T4,1);
  goto _TLB8;
  _TLB7: _T5 = _tag_fat("$",sizeof(char),2U);
  _T2 = Cyc_PP_text(_T5);
  _TLB8: cache_dollar = _T2;
  goto _TLB5;
  _TLB4: _TLB5: _T6 = cache_dollar;
  return _T6;
}
struct Cyc_PP_Doc * Cyc_Absynpp_group_braces(struct _fat_ptr sep,struct Cyc_List_List * ss) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  { struct Cyc_PP_Doc * _T2[3];
    _T2[0] = Cyc_Absynpp_lb();
    _T2[1] = Cyc_PP_seq(sep,ss);
    _T2[2] = Cyc_Absynpp_rb();
    _T1 = _tag_fat(_T2,sizeof(struct Cyc_PP_Doc *),3);
    _T0 = Cyc_PP_cat(_T1);
  }return _T0;
}
static void Cyc_Absynpp_print_tms(struct Cyc_List_List * tms) {
  struct Cyc_List_List * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc___cycFILE * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc___cycFILE * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct * _T9;
  void * _TA;
  int * _TB;
  int _TC;
  void * _TD;
  struct Cyc___cycFILE * _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct Cyc_List_List * _T11;
  void * _T12;
  struct _tuple9 * _T13;
  struct _tuple9 _T14;
  struct Cyc___cycFILE * _T15;
  struct _fat_ptr _T16;
  struct _fat_ptr _T17;
  struct Cyc___cycFILE * _T18;
  struct _fat_ptr * _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc___cycFILE * _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct Cyc_List_List * _T21;
  struct Cyc___cycFILE * _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  struct Cyc___cycFILE * _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  struct Cyc___cycFILE * _T28;
  struct _fat_ptr _T29;
  struct _fat_ptr _T2A;
  struct Cyc___cycFILE * _T2B;
  struct _fat_ptr _T2C;
  struct _fat_ptr _T2D;
  struct Cyc___cycFILE * _T2E;
  struct _fat_ptr _T2F;
  struct _fat_ptr _T30;
  struct Cyc_List_List * _T31;
  struct Cyc___cycFILE * _T32;
  struct _fat_ptr _T33;
  struct _fat_ptr _T34;
  _TLBC: if (tms != 0) { goto _TLBA;
  }else { goto _TLBB;
  }
  _TLBA: _T0 = tms;
  { void * _T35 = _T0->hd;
    struct Cyc_List_List * _T36;
    _T1 = (int *)_T35;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      _T3 = Cyc_stderr;
      _T4 = _tag_fat("Carray_mod ",sizeof(char),12U);
      _T5 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T3,_T4,_T5);
      goto _LL0;
    case 1: 
      _T6 = Cyc_stderr;
      _T7 = _tag_fat("ConstArray_mod ",sizeof(char),16U);
      _T8 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T6,_T7,_T8);
      goto _LL0;
    case 3: 
      _T9 = (struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct *)_T35;
      _TA = _T9->f1;
      _TB = (int *)_TA;
      _TC = *_TB;
      if (_TC != 1) { goto _TLBE;
      }
      { struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct * _T37 = (struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct *)_T35;
	_TD = _T37->f1;
	{ struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct * _T38 = (struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct *)_TD;
	  _T36 = _T38->f1;
	}
      }{ struct Cyc_List_List * ys = _T36;
	_TE = Cyc_stderr;
	_TF = _tag_fat("Function_mod(",sizeof(char),14U);
	_T10 = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_TE,_TF,_T10);
	_TLC3: if (ys != 0) { goto _TLC1;
	}else { goto _TLC2;
	}
	_TLC1: _T11 = ys;
	_T12 = _T11->hd;
	_T13 = (struct _tuple9 *)_T12;
	_T14 = *_T13;
	{ struct _fat_ptr * v = _T14.f0;
	  if (v != 0) { goto _TLC4;
	  }
	  _T15 = Cyc_stderr;
	  _T16 = _tag_fat("?",sizeof(char),2U);
	  _T17 = _tag_fat(0U,sizeof(void *),0);
	  Cyc_fprintf(_T15,_T16,_T17);
	  goto _TLC5;
	  _TLC4: _T18 = Cyc_stderr;
	  _T19 = v;
	  _T1A = *_T19;
	  _T1B = _tag_fat(0U,sizeof(void *),0);
	  Cyc_fprintf(_T18,_T1A,_T1B);
	  _TLC5: _T1C = ys;
	  _T1D = _T1C->tl;
	  if (_T1D == 0) { goto _TLC6;
	  }
	  _T1E = Cyc_stderr;
	  _T1F = _tag_fat(",",sizeof(char),2U);
	  _T20 = _tag_fat(0U,sizeof(void *),0);
	  Cyc_fprintf(_T1E,_T1F,_T20);
	  goto _TLC7;
	  _TLC6: _TLC7: ;
	}_T21 = ys;
	ys = _T21->tl;
	goto _TLC3;
	_TLC2: _T22 = Cyc_stderr;
	_T23 = _tag_fat(") ",sizeof(char),3U);
	_T24 = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T22,_T23,_T24);
	goto _LL0;
      }_TLBE: _T25 = Cyc_stderr;
      _T26 = _tag_fat("Function_mod()",sizeof(char),15U);
      _T27 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T25,_T26,_T27);
      goto _LL0;
    case 5: 
      _T28 = Cyc_stderr;
      _T29 = _tag_fat("Attributes_mod ",sizeof(char),16U);
      _T2A = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T28,_T29,_T2A);
      goto _LL0;
    case 4: 
      _T2B = Cyc_stderr;
      _T2C = _tag_fat("TypeParams_mod ",sizeof(char),16U);
      _T2D = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T2B,_T2C,_T2D);
      goto _LL0;
    default: 
      _T2E = Cyc_stderr;
      _T2F = _tag_fat("Pointer_mod ",sizeof(char),13U);
      _T30 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T2E,_T2F,_T30);
      goto _LL0;
    }
    _LL0: ;
  }_T31 = tms;
  tms = _T31->tl;
  goto _TLBC;
  _TLBB: _T32 = Cyc_stderr;
  _T33 = _tag_fat("\n",sizeof(char),2U);
  _T34 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T32,_T33,_T34);
}
static struct Cyc_PP_Doc *const  (* Cyc_Absynpp_rgn2doc)(void *) = (struct Cyc_PP_Doc *const  (*)(void *))Cyc_Absynpp_ntyp2doc;
struct Cyc_PP_Doc * Cyc_Absynpp_scope2doc(enum Cyc_Absyn_Scope sc) {
  int _T0;
  struct Cyc_PP_Doc * _T1;
  enum Cyc_Absyn_Scope _T2;
  int _T3;
  struct _fat_ptr _T4;
  struct Cyc_PP_Doc * _T5;
  struct Cyc_PP_Doc * _T6;
  struct _fat_ptr _T7;
  struct Cyc_PP_Doc * _T8;
  struct _fat_ptr _T9;
  struct Cyc_PP_Doc * _TA;
  struct _fat_ptr _TB;
  struct Cyc_PP_Doc * _TC;
  struct _fat_ptr _TD;
  struct Cyc_PP_Doc * _TE;
  struct Cyc_PP_Doc * _TF;
  _T0 = Cyc_Absynpp_print_for_cycdoc;
  if (! _T0) { goto _TLC8;
  }
  _T1 = Cyc_PP_nil_doc();
  return _T1;
  _TLC8: _T2 = sc;
  _T3 = (int)_T2;
  switch (_T3) {
  case Cyc_Absyn_Static: 
    _T4 = _tag_fat("static ",sizeof(char),8U);
    _T5 = Cyc_PP_text(_T4);
    return _T5;
  case Cyc_Absyn_Public: 
    _T6 = Cyc_PP_nil_doc();
    return _T6;
  case Cyc_Absyn_Extern: 
    _T7 = _tag_fat("extern ",sizeof(char),8U);
    _T8 = Cyc_PP_text(_T7);
    return _T8;
  case Cyc_Absyn_ExternC: 
    _T9 = _tag_fat("extern \"C\" ",sizeof(char),12U);
    _TA = Cyc_PP_text(_T9);
    return _TA;
  case Cyc_Absyn_Abstract: 
    _TB = _tag_fat("abstract ",sizeof(char),10U);
    _TC = Cyc_PP_text(_TB);
    return _TC;
  case Cyc_Absyn_Register: 
    _TD = _tag_fat("register ",sizeof(char),10U);
    _TE = Cyc_PP_text(_TD);
    return _TE;
  default: 
    _TF = Cyc_PP_nil_doc();
    return _TF;
  }
  ;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_aqual_val2doc(enum Cyc_Absyn_AliasQualVal aqv) {
  enum Cyc_Absyn_AliasQualVal _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct Cyc_PP_Doc * _T3;
  struct _fat_ptr _T4;
  struct Cyc_PP_Doc * _T5;
  struct _fat_ptr _T6;
  struct Cyc_PP_Doc * _T7;
  struct _fat_ptr _T8;
  struct Cyc_PP_Doc * _T9;
  struct Cyc_Core_Failure_exn_struct * _TA;
  void * _TB;
  _T0 = aqv;
  _T1 = (int)_T0;
  switch (_T1) {
  case Cyc_Absyn_Aliasable_qual: 
    _T2 = _tag_fat("ALIASABLE",sizeof(char),10U);
    _T3 = Cyc_PP_text(_T2);
    return _T3;
  case Cyc_Absyn_Unique_qual: 
    _T4 = _tag_fat("UNIQUE",sizeof(char),7U);
    _T5 = Cyc_PP_text(_T4);
    return _T5;
  case Cyc_Absyn_Refcnt_qual: 
    _T6 = _tag_fat("REFCNT",sizeof(char),7U);
    _T7 = Cyc_PP_text(_T6);
    return _T7;
  case Cyc_Absyn_Restricted_qual: 
    _T8 = _tag_fat("RESTRICTED",sizeof(char),11U);
    _T9 = Cyc_PP_text(_T8);
    return _T9;
  default: 
    { struct Cyc_Core_Failure_exn_struct * _TC = _cycalloc(sizeof(struct Cyc_Core_Failure_exn_struct));
      _TC->tag = Cyc_Core_Failure;
      _TC->f1 = _tag_fat("Absynpp::aqual_val2doc unrecognized value",sizeof(char),
			 42U);
      _TA = (struct Cyc_Core_Failure_exn_struct *)_TC;
    }_TB = (void *)_TA;
    _throw(_TB);
  }
  ;
}
static long Cyc_Absynpp_is_function_tms(struct Cyc_List_List * tms) {
  struct Cyc_List_List * _T0;
  int * _T1;
  int _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  long _T5;
  if (tms != 0) { goto _TLCC;
  }
  return 0;
  _TLCC: _T0 = tms;
  { void * _T6 = _T0->hd;
    _T1 = (int *)_T6;
    _T2 = *_T1;
    if (_T2 != 3) { goto _TLCE;
    }
    return 1;
    _TLCE: _T3 = tms;
    _T4 = _T3->tl;
    _T5 = Cyc_Absynpp_is_function_tms(_T4);
    return _T5;
    ;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_dtms2doc(long is_char_ptr,struct Cyc_PP_Doc * d,
					 struct Cyc_List_List * tms) {
  struct Cyc_PP_Doc * _T0;
  long _T1;
  long _T2;
  struct Cyc_PP_Doc * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_PP_Doc * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct Cyc_List_List * _TA;
  int * _TB;
  unsigned int _TC;
  void * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  long _T10;
  struct Cyc_PP_Doc * _T11;
  long _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  struct Cyc_PP_Doc * _T16;
  void * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_List_List * _T19;
  long _T1A;
  struct Cyc_PP_Doc * _T1B;
  struct _fat_ptr _T1C;
  long _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct Cyc_PP_Doc * _T21;
  void * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_List_List * _T24;
  long _T25;
  void * _T26;
  int * _T27;
  int _T28;
  void * _T29;
  void * _T2A;
  struct Cyc_PP_Doc * _T2B;
  struct _fat_ptr _T2C;
  struct Cyc_PP_Doc * _T2D;
  void * _T2E;
  struct Cyc_PP_Doc * _T2F;
  struct _fat_ptr _T30;
  struct _fat_ptr _T31;
  struct _fat_ptr _T32;
  struct Cyc_List_List * (* _T33)(struct Cyc_PP_Doc * (*)(struct _fat_ptr *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T34)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T35)(struct _fat_ptr *);
  struct Cyc_List_List * _T36;
  struct Cyc_List_List * _T37;
  struct _fat_ptr _T38;
  struct Cyc_PP_Doc * _T39;
  enum Cyc_Flags_C_Compilers _T3A;
  struct Cyc_List_List * _T3B;
  struct Cyc_List_List * _T3C;
  long _T3D;
  struct Cyc_PP_Doc * _T3E;
  struct _fat_ptr _T3F;
  struct Cyc_PP_Doc * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_List_List * _T42;
  long _T43;
  struct Cyc_PP_Doc * _T44;
  struct _fat_ptr _T45;
  struct Cyc_PP_Doc * _T46;
  struct Cyc_PP_Doc * _T47;
  struct Cyc_List_List * _T48;
  struct Cyc_List_List * _T49;
  long _T4A;
  long _T4B;
  struct Cyc_PP_Doc * _T4C;
  struct _fat_ptr _T4D;
  struct Cyc_PP_Doc * _T4E;
  struct Cyc_PP_Doc * _T4F;
  struct _fat_ptr _T50;
  struct Cyc_PP_Doc * _T51;
  struct Cyc_Absyn_PtrAtts _T52;
  struct Cyc_Absyn_PtrAtts _T53;
  struct Cyc_Absyn_PtrAtts _T54;
  struct Cyc_Absyn_PtrAtts _T55;
  struct Cyc_Absyn_PtrAtts _T56;
  struct Cyc_Absyn_PtrAtts _T57;
  int * _T58;
  int _T59;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5A;
  void * _T5B;
  int * _T5C;
  unsigned int _T5D;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5E;
  struct Cyc_List_List * _T5F;
  struct Cyc_List_List * _T60;
  void * _T61;
  void * _T62;
  int * _T63;
  int _T64;
  void * _T65;
  struct _fat_ptr _T66;
  long _T67;
  long _T68;
  struct Cyc_PP_Doc * _T69;
  struct _fat_ptr _T6A;
  struct _fat_ptr _T6B;
  long _T6C;
  struct Cyc_PP_Doc * _T6D;
  void * _T6E;
  struct _fat_ptr _T6F;
  struct _fat_ptr _T70;
  long _T71;
  struct Cyc_PP_Doc * _T72;
  struct _fat_ptr _T73;
  long _T74;
  int * _T75;
  unsigned int _T76;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T77;
  void * _T78;
  int * _T79;
  unsigned int _T7A;
  void * _T7B;
  enum Cyc_Absyn_AliasQualVal _T7C;
  struct Cyc_PP_Doc * _T7D;
  struct _fat_ptr _T7E;
  struct _fat_ptr _T7F;
  struct _fat_ptr _T80;
  long _T81;
  struct Cyc_List_List * _T82;
  void * _T83;
  int * _T84;
  int _T85;
  struct Cyc_PP_Doc * _T86;
  struct _fat_ptr _T87;
  struct Cyc_List_List * _T88;
  void * _T89;
  void * _T8A;
  struct _fat_ptr _T8B;
  struct _fat_ptr _T8C;
  struct Cyc_PP_Doc * _T8D;
  struct _fat_ptr _T8E;
  struct Cyc_List_List * _T8F;
  void * _T90;
  void * _T91;
  struct _fat_ptr _T92;
  struct _fat_ptr _T93;
  long _T94;
  struct Cyc_PP_Doc * _T95;
  struct _fat_ptr _T96;
  struct _fat_ptr _T97;
  struct _fat_ptr _T98;
  struct Cyc_Warn_String_Warn_Warg_struct _T99;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T9A;
  int (* _T9B)(struct _fat_ptr);
  void * (* _T9C)(struct _fat_ptr);
  struct _fat_ptr _T9D;
  long _T9E;
  long _T9F;
  long _TA0;
  struct _fat_ptr _TA1;
  long _TA2;
  long _TA3;
  long _TA4;
  struct _fat_ptr _TA5;
  long _TA6;
  struct _fat_ptr _TA7;
  long _TA8;
  long _TA9;
  void * _TAA;
  int * _TAB;
  int _TAC;
  int * _TAD;
  unsigned int _TAE;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TAF;
  void * _TB0;
  int * _TB1;
  int _TB2;
  long _TB3;
  long _TB4;
  struct _fat_ptr _TB5;
  int _TB6;
  long _TB7;
  long _TB8;
  struct Cyc_PP_Doc * _TB9;
  struct _fat_ptr _TBA;
  struct Cyc_PP_Doc * _TBB;
  struct _fat_ptr _TBC;
  struct Cyc_PP_Doc * _TBD;
  struct _fat_ptr _TBE;
  struct Cyc_PP_Doc * _TBF;
  struct _fat_ptr _TC0;
  struct Cyc_PP_Doc * _TC1;
  if (tms != 0) { goto _TLD0;
  }
  _T0 = d;
  return _T0;
  _TLD0: { long save_ift = Cyc_Absynpp_inside_function_type;
    _T1 = Cyc_Absynpp_gen_clean_cyclone;
    if (! _T1) { goto _TLD2;
    }
    _T2 = Cyc_Absynpp_is_function_tms(tms);
    if (! _T2) { goto _TLD2;
    }
    Cyc_Absynpp_inside_function_type = 1;
    goto _TLD3;
    _TLD2: _TLD3: _T3 = d;
    _T4 = tms;
    _T5 = _T4->tl;
    { struct Cyc_PP_Doc * rest = Cyc_Absynpp_dtms2doc(0,_T3,_T5);
      { struct Cyc_PP_Doc * _TC2[3];
	_T7 = _tag_fat("(",sizeof(char),2U);
	_TC2[0] = Cyc_PP_text(_T7);
	_TC2[1] = rest;
	_T8 = _tag_fat(")",sizeof(char),2U);
	_TC2[2] = Cyc_PP_text(_T8);
	_T9 = _tag_fat(_TC2,sizeof(struct Cyc_PP_Doc *),3);
	_T6 = Cyc_PP_cat(_T9);
      }{ struct Cyc_PP_Doc * p_rest = _T6;
	struct Cyc_PP_Doc * s;
	_TA = tms;
	{ void * _TC2 = _TA->hd;
	  struct Cyc_Absyn_Tqual _TC3;
	  void * _TC4;
	  void * _TC5;
	  void * _TC6;
	  void * _TC7;
	  long _TC8;
	  unsigned int _TC9;
	  void * _TCA;
	  void * _TCB;
	  _TB = (int *)_TC2;
	  _TC = *_TB;
	  switch (_TC) {
	  case 0: 
	    { struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct * _TCC = (struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct *)_TC2;
	      _TD = _TCC->f1;
	      _TCB = (void *)_TD;
	    }{ void * zeroterm = _TCB;
	      _TE = tms;
	      _TF = _TE->tl;
	      _T10 = Cyc_Absynpp_next_is_pointer(_TF);
	      if (! _T10) { goto _TLD5;
	      }
	      rest = p_rest;
	      goto _TLD6;
	      _TLD5: _TLD6: { struct Cyc_PP_Doc * _TCC[2];
		_TCC[0] = rest;
		_T12 = Cyc_Absyn_type2bool(0,zeroterm);
		if (! _T12) { goto _TLD7;
		}
		_T13 = _tag_fat("[]@zeroterm",sizeof(char),12U);
		_TCC[1] = Cyc_PP_text(_T13);
		goto _TLD8;
		_TLD7: _T14 = _tag_fat("[]",sizeof(char),3U);
		_TCC[1] = Cyc_PP_text(_T14);
		_TLD8: _T15 = _tag_fat(_TCC,sizeof(struct Cyc_PP_Doc *),2);
		_T11 = Cyc_PP_cat(_T15);
	      }s = _T11;
	      Cyc_Absynpp_inside_function_type = save_ift;
	      _T16 = s;
	      return _T16;
	    }
	  case 1: 
	    { struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct * _TCC = (struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct *)_TC2;
	      _TCB = _TCC->f1;
	      _T17 = _TCC->f2;
	      _TCA = (void *)_T17;
	    }{ struct Cyc_Absyn_Exp * e = _TCB;
	      void * zeroterm = _TCA;
	      _T18 = tms;
	      _T19 = _T18->tl;
	      _T1A = Cyc_Absynpp_next_is_pointer(_T19);
	      if (! _T1A) { goto _TLD9;
	      }
	      rest = p_rest;
	      goto _TLDA;
	      _TLD9: _TLDA: { struct Cyc_PP_Doc * _TCC[4];
		_TCC[0] = rest;
		_T1C = _tag_fat("[",sizeof(char),2U);
		_TCC[1] = Cyc_PP_text(_T1C);
		_TCC[2] = Cyc_Absynpp_exp2doc(e);
		_T1D = Cyc_Absyn_type2bool(0,zeroterm);
		if (! _T1D) { goto _TLDB;
		}
		_T1E = _tag_fat("]@zeroterm",sizeof(char),11U);
		_TCC[3] = Cyc_PP_text(_T1E);
		goto _TLDC;
		_TLDB: _T1F = _tag_fat("]",sizeof(char),2U);
		_TCC[3] = Cyc_PP_text(_T1F);
		_TLDC: _T20 = _tag_fat(_TCC,sizeof(struct Cyc_PP_Doc *),4);
		_T1B = Cyc_PP_cat(_T20);
	      }s = _T1B;
	      Cyc_Absynpp_inside_function_type = save_ift;
	      _T21 = s;
	      return _T21;
	    }
	  case 3: 
	    { struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct * _TCC = (struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct *)_TC2;
	      _T22 = _TCC->f1;
	      _TCB = (void *)_T22;
	    }{ void * args = _TCB;
	      _T23 = tms;
	      _T24 = _T23->tl;
	      _T25 = Cyc_Absynpp_next_is_pointer(_T24);
	      if (! _T25) { goto _TLDD;
	      }
	      rest = p_rest;
	      goto _TLDE;
	      _TLDD: _TLDE: { unsigned int _TCC;
		struct Cyc_Absyn_Exp * _TCD;
		struct Cyc_Absyn_Exp * _TCE;
		struct Cyc_Absyn_Exp * _TCF;
		struct Cyc_Absyn_Exp * _TD0;
		struct Cyc_List_List * _TD1;
		struct Cyc_List_List * _TD2;
		void * _TD3;
		struct Cyc_Absyn_VarargInfo * _TD4;
		long _TD5;
		struct Cyc_List_List * _TD6;
		_T26 = args;
		_T27 = (int *)_T26;
		_T28 = *_T27;
		if (_T28 != 1) { goto _TLDF;
		}
		_T29 = args;
		{ struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct * _TD7 = (struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct *)_T29;
		  _TD6 = _TD7->f1;
		  _TD5 = _TD7->f2;
		  _TD4 = _TD7->f3;
		  _T2A = _TD7->f4;
		  _TD3 = (void *)_T2A;
		  _TD2 = _TD7->f5;
		  _TD1 = _TD7->f6;
		  _TD0 = _TD7->f7;
		  _TCF = _TD7->f8;
		  _TCE = _TD7->f9;
		  _TCD = _TD7->f10;
		}{ struct Cyc_List_List * args2 = _TD6;
		  long c_varargs = _TD5;
		  struct Cyc_Absyn_VarargInfo * cyc_varargs = _TD4;
		  void * effopt = _TD3;
		  struct Cyc_List_List * effc = _TD2;
		  struct Cyc_List_List * qb = _TD1;
		  struct Cyc_Absyn_Exp * chk = _TD0;
		  struct Cyc_Absyn_Exp * req = _TCF;
		  struct Cyc_Absyn_Exp * ens = _TCE;
		  struct Cyc_Absyn_Exp * thrws = _TCD;
		  { struct Cyc_PP_Doc * _TD7[2];
		    _TD7[0] = rest;
		    _TD7[1] = Cyc_Absynpp_funargs2doc(args2,c_varargs,cyc_varargs,
						      effopt,effc,qb,chk,
						      req,ens,thrws);
		    _T2C = _tag_fat(_TD7,sizeof(struct Cyc_PP_Doc *),2);
		    _T2B = Cyc_PP_cat(_T2C);
		  }s = _T2B;
		  Cyc_Absynpp_inside_function_type = save_ift;
		  _T2D = s;
		  return _T2D;
		}_TLDF: _T2E = args;
		{ struct Cyc_Absyn_NoTypes_Absyn_Funcparams_struct * _TD7 = (struct Cyc_Absyn_NoTypes_Absyn_Funcparams_struct *)_T2E;
		  _TD6 = _TD7->f1;
		  _TCC = _TD7->f2;
		}{ struct Cyc_List_List * sl = _TD6;
		  unsigned int loc = _TCC;
		  { struct Cyc_PP_Doc * _TD7[2];
		    _TD7[0] = rest;
		    _T30 = _tag_fat("(",sizeof(char),2U);
		    _T31 = _tag_fat(")",sizeof(char),2U);
		    _T32 = _tag_fat(",",sizeof(char),2U);
		    _T34 = Cyc_List_map;
		    { struct Cyc_List_List * (* _TD8)(struct Cyc_PP_Doc * (*)(struct _fat_ptr *),
						      struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _fat_ptr *),
													    struct Cyc_List_List *))_T34;
		      _T33 = _TD8;
		    }_T35 = Cyc_PP_textptr;
		    _T36 = sl;
		    _T37 = _T33(_T35,_T36);
		    _TD7[1] = Cyc_PP_group(_T30,_T31,_T32,_T37);
		    _T38 = _tag_fat(_TD7,sizeof(struct Cyc_PP_Doc *),2);
		    _T2F = Cyc_PP_cat(_T38);
		  }s = _T2F;
		  Cyc_Absynpp_inside_function_type = save_ift;
		  _T39 = s;
		  return _T39;
		};
	      }
	    }
	  case 5: 
	    { struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct * _TCC = (struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct *)_TC2;
	      _TCB = _TCC->f2;
	    }{ struct Cyc_List_List * atts = _TCB;
	      _T3A = Cyc_Flags_c_compiler;
	      if (_T3A != Cyc_Flags_Gcc_c) { goto _TLE1;
	      }
	      _T3B = tms;
	      _T3C = _T3B->tl;
	      _T3D = Cyc_Absynpp_next_is_pointer(_T3C);
	      if (! _T3D) { goto _TLE3;
	      }
	      rest = p_rest;
	      goto _TLE4;
	      _TLE3: _TLE4: { struct Cyc_PP_Doc * _TCC[2];
		_TCC[0] = rest;
		_TCC[1] = Cyc_Absynpp_atts2doc(atts);
		_T3F = _tag_fat(_TCC,sizeof(struct Cyc_PP_Doc *),2);
		_T3E = Cyc_PP_cat(_T3F);
	      }s = _T3E;
	      Cyc_Absynpp_inside_function_type = save_ift;
	      _T40 = s;
	      return _T40;
	      _TLE1: _T41 = tms;
	      _T42 = _T41->tl;
	      _T43 = Cyc_Absynpp_next_is_pointer(_T42);
	      if (! _T43) { goto _TLE5;
	      }
	      { struct Cyc_PP_Doc * _TCC[2];
		_TCC[0] = Cyc_Absynpp_callconv2doc(atts);
		_TCC[1] = rest;
		_T45 = _tag_fat(_TCC,sizeof(struct Cyc_PP_Doc *),2);
		_T44 = Cyc_PP_cat(_T45);
	      }s = _T44;
	      Cyc_Absynpp_inside_function_type = save_ift;
	      _T46 = s;
	      return _T46;
	      _TLE5: Cyc_Absynpp_inside_function_type = save_ift;
	      _T47 = rest;
	      return _T47;
	      ;
	    }
	  case 4: 
	    { struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct * _TCC = (struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct *)_TC2;
	      _TCB = _TCC->f1;
	      _TC9 = _TCC->f2;
	      _TC8 = _TCC->f3;
	    }{ struct Cyc_List_List * ts = _TCB;
	      unsigned int loc = _TC9;
	      long print_kinds = _TC8;
	      _T48 = tms;
	      _T49 = _T48->tl;
	      _T4A = Cyc_Absynpp_next_is_pointer(_T49);
	      if (! _T4A) { goto _TLE7;
	      }
	      rest = p_rest;
	      goto _TLE8;
	      _TLE7: _TLE8: _T4B = print_kinds;
	      if (! _T4B) { goto _TLE9;
	      }
	      { struct Cyc_PP_Doc * _TCC[2];
		_TCC[0] = rest;
		_TCC[1] = Cyc_Absynpp_ktvars2doc(ts);
		_T4D = _tag_fat(_TCC,sizeof(struct Cyc_PP_Doc *),2);
		_T4C = Cyc_PP_cat(_T4D);
	      }s = _T4C;
	      Cyc_Absynpp_inside_function_type = save_ift;
	      _T4E = s;
	      return _T4E;
	      _TLE9: { struct Cyc_PP_Doc * _TCC[2];
		_TCC[0] = rest;
		_TCC[1] = Cyc_Absynpp_tvars2doc(ts);
		_T50 = _tag_fat(_TCC,sizeof(struct Cyc_PP_Doc *),2);
		_T4F = Cyc_PP_cat(_T50);
	      }s = _T4F;
	      Cyc_Absynpp_inside_function_type = save_ift;
	      _T51 = s;
	      return _T51;
	    }
	  default: 
	    { struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct * _TCC = (struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct *)_TC2;
	      _T52 = _TCC->f1;
	      _TCB = _T52.eff;
	      _T53 = _TCC->f1;
	      _TCA = _T53.nullable;
	      _T54 = _TCC->f1;
	      _TC7 = _T54.bounds;
	      _T55 = _TCC->f1;
	      _TC6 = _T55.zero_term;
	      _T56 = _TCC->f1;
	      _TC5 = _T56.autoreleased;
	      _T57 = _TCC->f1;
	      _TC4 = _T57.aqual;
	      _TC3 = _TCC->f2;
	    }{ void * rgn = _TCB;
	      void * nullable = _TCA;
	      void * bd = _TC7;
	      void * zt = _TC6;
	      void * rel = _TC5;
	      void * aq = _TC4;
	      struct Cyc_Absyn_Tqual tq2 = _TC3;
	      struct Cyc_PP_Doc * ptr;
	      struct Cyc_PP_Doc * mt = Cyc_PP_nil_doc();
	      struct Cyc_PP_Doc * aqd = mt;
	      struct Cyc_PP_Doc * ztd = mt;
	      struct Cyc_PP_Doc * reld = mt;
	      struct Cyc_PP_Doc * rgd = mt;
	      struct Cyc_PP_Doc * tqd = Cyc_Absynpp_tqual2doc(tq2);
	      { void * _TCC = Cyc_Absyn_compress(bd);
		void * _TCD;
		_T58 = (int *)_TCC;
		_T59 = *_T58;
		if (_T59 != 0) { goto _TLEB;
		}
		_T5A = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TCC;
		_T5B = _T5A->f1;
		_T5C = (int *)_T5B;
		_T5D = *_T5C;
		switch (_T5D) {
		case 14: 
		  ptr = Cyc_Absynpp_question();
		  goto _LL17;
		case 13: 
		  _T5E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TCC;
		  _T5F = _T5E->f2;
		  if (_T5F == 0) { goto _TLEE;
		  }
		  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TCE = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TCC;
		    _T60 = _TCE->f2;
		    { struct Cyc_List_List _TCF = *_T60;
		      _T61 = _TCF.hd;
		      _TCD = (void *)_T61;
		    }
		  }{ void * targ = _TCD;
		    { struct Cyc_Absyn_Exp * _TCE;
		      _T62 = targ;
		      _T63 = (int *)_T62;
		      _T64 = *_T63;
		      if (_T64 != 9) { goto _TLF0;
		      }
		      _T65 = targ;
		      { struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _TCF = (struct Cyc_Absyn_ValueofType_Absyn_Type_struct *)_T65;
			_TCE = _TCF->f1;
		      }{ struct Cyc_Absyn_Exp * e = _TCE;
			_T67 = Cyc_Absyn_type2bool(1,nullable);
			if (! _T67) { goto _TLF2;
			}
			_T66 = _tag_fat("*",sizeof(char),2U);
			goto _TLF3;
			_TLF2: _T66 = _tag_fat("@",sizeof(char),2U);
			_TLF3: ptr = Cyc_PP_text(_T66);
			{ struct _tuple15 _TCF = Cyc_Evexp_eval_const_uint_exp(e);
			  long _TD0;
			  unsigned int _TD1;
			  _TD1 = _TCF.f0;
			  _TD0 = _TCF.f1;
			  { unsigned int val = _TD1;
			    long known = _TD0;
			    _T68 = known;
			    if (_T68) { goto _TLF7;
			    }else { goto _TLF6;
			    }
			    _TLF7: if (val != 1U) { goto _TLF6;
			    }else { goto _TLF4;
			    }
			    _TLF6: { struct Cyc_PP_Doc * _TD2[4];
			      _TD2[0] = ptr;
			      _TD2[1] = Cyc_Absynpp_lb();
			      _TD2[2] = Cyc_Absynpp_exp2doc(e);
			      _TD2[3] = Cyc_Absynpp_rb();
			      _T6A = _tag_fat(_TD2,sizeof(struct Cyc_PP_Doc *),
					      4);
			      _T69 = Cyc_PP_cat(_T6A);
			    }ptr = _T69;
			    goto _TLF5;
			    _TLF4: _TLF5: goto _LL1E;
			  }
			}
		      }_TLF0: _T6C = Cyc_Absyn_type2bool(1,nullable);
		      if (! _T6C) { goto _TLF8;
		      }
		      _T6B = _tag_fat("*",sizeof(char),2U);
		      goto _TLF9;
		      _TLF8: _T6B = _tag_fat("@",sizeof(char),2U);
		      _TLF9: ptr = Cyc_PP_text(_T6B);
		      { struct Cyc_PP_Doc * _TCF[4];
			_TCF[0] = ptr;
			_TCF[1] = Cyc_Absynpp_lb();
			_T6E = Cyc_Absyn_compress(targ);
			_TCF[2] = Cyc_Absynpp_typ2doc(_T6E);
			_TCF[3] = Cyc_Absynpp_rb();
			_T6F = _tag_fat(_TCF,sizeof(struct Cyc_PP_Doc *),
					4);
			_T6D = Cyc_PP_cat(_T6F);
		      }ptr = _T6D;
		      goto _LL1E;
		      _LL1E: ;
		    }goto _LL17;
		  }_TLEE: goto _LL1C;
		default: 
		  goto _LL1C;
		}
		goto _TLEC;
		_TLEB: _LL1C: _T71 = Cyc_Absyn_type2bool(1,nullable);
		if (! _T71) { goto _TLFA;
		}
		_T70 = _tag_fat("*",sizeof(char),2U);
		goto _TLFB;
		_TLFA: _T70 = _tag_fat("@",sizeof(char),2U);
		_TLFB: ptr = Cyc_PP_text(_T70);
		{ struct Cyc_PP_Doc * _TCE[4];
		  _TCE[0] = ptr;
		  _TCE[1] = Cyc_Absynpp_lb();
		  _TCE[2] = Cyc_Absynpp_typ2doc(bd);
		  _TCE[3] = Cyc_Absynpp_rb();
		  _T73 = _tag_fat(_TCE,sizeof(struct Cyc_PP_Doc *),4);
		  _T72 = Cyc_PP_cat(_T73);
		}ptr = _T72;
		goto _LL17;
		_TLEC: _LL17: ;
	      }_T74 = Cyc_Absynpp_print_zeroterm;
	      if (! _T74) { goto _TLFC;
	      }
	      { void * _TCC = Cyc_Absyn_compress(aq);
		struct Cyc_List_List * _TCD;
		enum Cyc_Absyn_AliasQualVal _TCE;
		_T75 = (int *)_TCC;
		_T76 = *_T75;
		switch (_T76) {
		case 0: 
		  _T77 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TCC;
		  _T78 = _T77->f1;
		  _T79 = (int *)_T78;
		  _T7A = *_T79;
		  switch (_T7A) {
		  case 16: 
		    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TCF = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TCC;
		      _T7B = _TCF->f1;
		      { struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct * _TD0 = (struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct *)_T7B;
			_TCE = _TD0->f1;
		      }
		    }{ enum Cyc_Absyn_AliasQualVal aqv = _TCE;
		      _T7C = aqv;
		      if (_T7C != Cyc_Absyn_Aliasable_qual) { goto _TL100;
		      }
		      goto _LL2F;
		      _TL100: { struct Cyc_PP_Doc * _TCF[3];
			_T7E = _tag_fat("@aqual(",sizeof(char),8U);
			_TCF[0] = Cyc_PP_text(_T7E);
			_TCF[1] = Cyc_Absynpp_aqual_val2doc(aqv);
			_T7F = _tag_fat(")",sizeof(char),2U);
			_TCF[2] = Cyc_PP_text(_T7F);
			_T80 = _tag_fat(_TCF,sizeof(struct Cyc_PP_Doc *),
					3);
			_T7D = Cyc_PP_cat(_T80);
		      }aqd = _T7D;
		      goto _LL2F;
		      _LL2F: goto _LL26;
		    }
		  case 17: 
		    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TCF = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TCC;
		      _TCD = _TCF->f2;
		    }{ struct Cyc_List_List * tv = _TCD;
		      _T81 = Cyc_Absynpp_gen_clean_cyclone;
		      if (! _T81) { goto _TL102;
		      }
		      _T82 = _check_null(tv);
		      _T83 = _T82->hd;
		      { void * _TCF = Cyc_Absyn_compress(_T83);
			_T84 = (int *)_TCF;
			_T85 = *_T84;
			if (_T85 != 1) { goto _TL104;
			}
			goto _LL34;
			_TL104: { struct Cyc_PP_Doc * _TD0[3];
			  _T87 = _tag_fat("@aqual(",sizeof(char),8U);
			  _TD0[0] = Cyc_PP_text(_T87);
			  _T88 = tv;
			  _T89 = _T88->hd;
			  _T8A = Cyc_Absyn_compress(_T89);
			  _TD0[1] = Cyc_Absynpp_typ2doc(_T8A);
			  _T8B = _tag_fat(")",sizeof(char),2U);
			  _TD0[2] = Cyc_PP_text(_T8B);
			  _T8C = _tag_fat(_TD0,sizeof(struct Cyc_PP_Doc *),
					  3);
			  _T86 = Cyc_PP_cat(_T8C);
			}aqd = _T86;
			goto _LL34;
			_LL34: ;
		      }goto _TL103;
		      _TL102: { struct Cyc_PP_Doc * _TCF[3];
			_T8E = _tag_fat("@aqual(",sizeof(char),8U);
			_TCF[0] = Cyc_PP_text(_T8E);
			_T8F = _check_null(tv);
			_T90 = _T8F->hd;
			_T91 = Cyc_Absyn_compress(_T90);
			_TCF[1] = Cyc_Absynpp_typ2doc(_T91);
			_T92 = _tag_fat(")",sizeof(char),2U);
			_TCF[2] = Cyc_PP_text(_T92);
			_T93 = _tag_fat(_TCF,sizeof(struct Cyc_PP_Doc *),
					3);
			_T8D = Cyc_PP_cat(_T93);
		      }aqd = _T8D;
		      _TL103: goto _LL26;
		    }
		  default: 
		    goto _LL2D;
		  }
		  ;
		case 1: 
		  _T94 = Cyc_Absynpp_gen_clean_cyclone;
		  if (_T94) { goto _TL106;
		  }else { goto _TL108;
		  }
		  _TL108: { struct Cyc_PP_Doc * _TCF[3];
		    _T96 = _tag_fat("@aqual(",sizeof(char),8U);
		    _TCF[0] = Cyc_PP_text(_T96);
		    _TCF[1] = Cyc_Absynpp_typ2doc(aq);
		    _T97 = _tag_fat(")",sizeof(char),2U);
		    _TCF[2] = Cyc_PP_text(_T97);
		    _T98 = _tag_fat(_TCF,sizeof(struct Cyc_PP_Doc *),3);
		    _T95 = Cyc_PP_cat(_T98);
		  }aqd = _T95;
		  goto _TL107;
		  _TL106: _TL107: goto _LL26;
		default: 
		  _LL2D: { struct Cyc_Warn_String_Warn_Warg_struct _TCF;
		    _TCF.tag = 0;
		    _TCF.f1 = _tag_fat("unexpected alias qualifier",sizeof(char),
				       27U);
		    _T99 = _TCF;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _TCF = _T99;
		    { struct Cyc_Warn_Typ_Warn_Warg_struct _TD0;
		      _TD0.tag = 2;
		      _TD0.f1 = aq;
		      _T9A = _TD0;
		    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _TD0 = _T9A;
		      void * _TD1[2];
		      _TD1[0] = &_TCF;
		      _TD1[1] = &_TD0;
		      _T9C = Cyc_Warn_impos2;
		      { int (* _TD2)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T9C;
			_T9B = _TD2;
		      }_T9D = _tag_fat(_TD1,sizeof(void *),2);
		      _T9B(_T9D);
		    }
		  }
		}
		_LL26: ;
	      }_T9E = Cyc_Absynpp_gen_clean_cyclone;
	      if (_T9E) { goto _TL10B;
	      }else { goto _TL10C;
	      }
	      _TL10C: _T9F = is_char_ptr;
	      if (_T9F) { goto _TL109;
	      }else { goto _TL10B;
	      }
	      _TL10B: _TA0 = Cyc_Absyn_type2bool(0,zt);
	      if (! _TA0) { goto _TL109;
	      }
	      _TA1 = _tag_fat("@zeroterm",sizeof(char),10U);
	      ztd = Cyc_PP_text(_TA1);
	      goto _TL10A;
	      _TL109: _TA2 = Cyc_Absynpp_gen_clean_cyclone;
	      if (_TA2) { goto _TL10F;
	      }else { goto _TL110;
	      }
	      _TL110: _TA3 = is_char_ptr;
	      if (_TA3) { goto _TL10F;
	      }else { goto _TL10D;
	      }
	      _TL10F: _TA4 = Cyc_Absyn_type2bool(0,zt);
	      if (_TA4) { goto _TL10D;
	      }else { goto _TL111;
	      }
	      _TL111: _TA5 = _tag_fat("@nozeroterm",sizeof(char),12U);
	      ztd = Cyc_PP_text(_TA5);
	      goto _TL10E;
	      _TL10D: _TL10E: _TL10A: _TA6 = Cyc_Absyn_type2bool(0,rel);
	      if (! _TA6) { goto _TL112;
	      }
	      _TA7 = _tag_fat("@autoreleased",sizeof(char),14U);
	      reld = Cyc_PP_text(_TA7);
	      goto _TL113;
	      _TL112: _TL113: goto _TLFD;
	      _TLFC: _TLFD: { long was_evar = 0;
		_TA8 = Cyc_Absynpp_gen_clean_cyclone;
		if (! _TA8) { goto _TL114;
		}
		_TA9 = Cyc_Absynpp_inside_function_type;
		if (_TA9) { goto _TL114;
		}else { goto _TL116;
		}
		_TL116: _TAA = rgn;
		_TAB = (int *)_TAA;
		_TAC = *_TAB;
		if (_TAC != 1) { goto _TL117;
		}
		was_evar = 1;
		goto _LL39;
		_TL117: goto _LL39;
		_LL39: goto _TL115;
		_TL114: _TL115: { void * _TCC = Cyc_Absyn_compress(rgn);
		  _TAD = (int *)_TCC;
		  _TAE = *_TAD;
		  switch (_TAE) {
		  case 0: 
		    _TAF = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TCC;
		    _TB0 = _TAF->f1;
		    _TB1 = (int *)_TB0;
		    _TB2 = *_TB1;
		    if (_TB2 != 6) { goto _TL11A;
		    }
		    _TB3 = Cyc_Flags_interproc;
		    if (! _TB3) { goto _TL11C;
		    }
		    _TB4 = Cyc_Flags_no_merge;
		    if (! _TB4) { goto _TL11C;
		    }
		    _TB5 = _tag_fat("`H",sizeof(char),3U);
		    rgd = Cyc_PP_text(_TB5);
		    goto _TL11D;
		    _TL11C: _TL11D: goto _LL3E;
		    _TL11A: goto _LL43;
		  case 1: 
		    _TB6 = Cyc_Absynpp_print_for_cycdoc;
		    if (_TB6) { goto _TL120;
		    }else { goto _TL121;
		    }
		    _TL121: _TB7 = Cyc_Absynpp_gen_clean_cyclone;
		    if (_TB7) { goto _TL120;
		    }else { goto _TL11E;
		    }
		    _TL120: goto _LL3E;
		    _TL11E: goto _LL43;
		  default: 
		    _LL43: _TB8 = was_evar;
		    if (_TB8) { goto _TL122;
		    }else { goto _TL124;
		    }
		    _TL124: rgd = Cyc_Absynpp_rgn2doc(rgn);
		    goto _TL123;
		    _TL122: _TL123: ;
		  }
		  _LL3E: ;
		}if (reld == mt) { goto _TL125;
		}
		if (ztd == mt) { goto _TL125;
		}
		_TBA = _tag_fat(" ",sizeof(char),2U);
		_TB9 = Cyc_PP_text(_TBA);
		goto _TL126;
		_TL125: _TB9 = mt;
		_TL126: { struct Cyc_PP_Doc * spacer0 = _TB9;
		  if (tqd == mt) { goto _TL127;
		  }
		  if (ztd != mt) { goto _TL129;
		  }else { goto _TL12B;
		  }
		  _TL12B: if (rgd != mt) { goto _TL129;
		  }else { goto _TL12A;
		  }
		  _TL12A: if (reld != mt) { goto _TL129;
		  }else { goto _TL127;
		  }
		  _TL129: _TBC = _tag_fat(" ",sizeof(char),2U);
		  _TBB = Cyc_PP_text(_TBC);
		  goto _TL128;
		  _TL127: _TBB = mt;
		  _TL128: { struct Cyc_PP_Doc * spacer1 = _TBB;
		    if (rest == mt) { goto _TL12C;
		    }
		    _TBE = _tag_fat(" ",sizeof(char),2U);
		    _TBD = Cyc_PP_text(_TBE);
		    goto _TL12D;
		    _TL12C: _TBD = mt;
		    _TL12D: { struct Cyc_PP_Doc * spacer2 = _TBD;
		      { struct Cyc_PP_Doc * _TCC[10];
			_TCC[0] = ptr;
			_TCC[1] = aqd;
			_TCC[2] = ztd;
			_TCC[3] = spacer0;
			_TCC[4] = reld;
			_TCC[5] = rgd;
			_TCC[6] = spacer1;
			_TCC[7] = tqd;
			_TCC[8] = spacer2;
			_TCC[9] = rest;
			_TC0 = _tag_fat(_TCC,sizeof(struct Cyc_PP_Doc *),
					10);
			_TBF = Cyc_PP_cat(_TC0);
		      }s = _TBF;
		      Cyc_Absynpp_inside_function_type = save_ift;
		      _TC1 = s;
		      return _TC1;
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
  }
}
static void Cyc_Absynpp_effects2docs(struct Cyc_List_List * * rgions,struct Cyc_List_List * * effects,
				     void * t) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2;
  void * _T3;
  int * _T4;
  int _T5;
  struct Cyc_List_List * * _T6;
  struct Cyc_List_List * * _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * * _TD;
  void * _TE = Cyc_Absyn_compress(t);
  struct Cyc_List_List * _TF;
  _T0 = (int *)_TE;
  _T1 = *_T0;
  if (_T1 != 0) { goto _TL12E;
  }
  _T2 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TE;
  _T3 = _T2->f1;
  _T4 = (int *)_T3;
  _T5 = *_T4;
  if (_T5 != 9) { goto _TL130;
  }
  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T10 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TE;
    _TF = _T10->f2;
  }{ struct Cyc_List_List * ts = _TF;
    _TL135: if (ts != 0) { goto _TL133;
    }else { goto _TL134;
    }
    _TL133: _T6 = rgions;
    _T7 = effects;
    _T8 = ts;
    _T9 = _T8->hd;
    Cyc_Absynpp_effects2docs(_T6,_T7,_T9);
    _TA = ts;
    ts = _TA->tl;
    goto _TL135;
    _TL134: goto _LL0;
  }_TL130: goto _LL3;
  _TL12E: _LL3: _TB = effects;
  { struct Cyc_List_List * _T10 = _cycalloc(sizeof(struct Cyc_List_List));
    _T10->hd = Cyc_Absynpp_typ2doc(t);
    _TD = effects;
    _T10->tl = *_TD;
    _TC = (struct Cyc_List_List *)_T10;
  }*_TB = _TC;
  goto _LL0;
  _LL0: ;
}
struct Cyc_PP_Doc * Cyc_Absynpp_eff2doc(void * t) {
  struct Cyc_List_List * * _T0;
  struct Cyc_List_List * * _T1;
  void * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_PP_Doc * _T7;
  struct _fat_ptr _T8;
  struct Cyc_List_List * _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_PP_Doc * _T10;
  struct Cyc_List_List * rgions = 0;
  struct Cyc_List_List * effects = 0;
  _T0 = &rgions;
  _T1 = &effects;
  _T2 = t;
  Cyc_Absynpp_effects2docs(_T0,_T1,_T2);
  rgions = Cyc_List_imp_rev(rgions);
  effects = Cyc_List_imp_rev(effects);
  if (rgions != 0) { goto _TL136;
  }
  if (effects == 0) { goto _TL136;
  }
  _T3 = _tag_fat("",sizeof(char),1U);
  _T4 = _tag_fat("",sizeof(char),1U);
  _T5 = _tag_fat("+",sizeof(char),2U);
  _T6 = effects;
  _T7 = Cyc_PP_group(_T3,_T4,_T5,_T6);
  return _T7;
  _TL136: _T8 = _tag_fat(",",sizeof(char),2U);
  _T9 = rgions;
  { struct Cyc_PP_Doc * doc1 = Cyc_Absynpp_group_braces(_T8,_T9);
    _TA = _tag_fat("",sizeof(char),1U);
    _TB = _tag_fat("",sizeof(char),1U);
    _TC = _tag_fat("+",sizeof(char),2U);
    _TD = effects;
    { struct Cyc_List_List * _T11 = _cycalloc(sizeof(struct Cyc_List_List));
      _T11->hd = doc1;
      _T11->tl = 0;
      _TE = (struct Cyc_List_List *)_T11;
    }_TF = Cyc_List_imp_append(_TD,_TE);
    _T10 = Cyc_PP_group(_TA,_TB,_TC,_TF);
    return _T10;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_aggr_kind2doc(enum Cyc_Absyn_AggrKind k) {
  struct Cyc_PP_Doc * _T0;
  enum Cyc_Absyn_AggrKind _T1;
  int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  _T1 = k;
  _T2 = (int)_T1;
  if (_T2 != 0) { goto _TL138;
  }
  _T3 = _tag_fat("struct ",sizeof(char),8U);
  _T0 = Cyc_PP_text(_T3);
  goto _TL139;
  _TL138: _T4 = _tag_fat("union ",sizeof(char),7U);
  _T0 = Cyc_PP_text(_T4);
  _TL139: return _T0;
}
static struct _tuple20 * Cyc_Absynpp_aggrfield2arg(struct Cyc_Absyn_Aggrfield * f) {
  struct _tuple20 * _T0;
  struct Cyc_Absyn_Aggrfield * _T1;
  struct Cyc_Absyn_Aggrfield * _T2;
  { struct _tuple20 * _T3 = _cycalloc(sizeof(struct _tuple20));
    _T1 = f;
    _T3->f0 = _T1->tq;
    _T2 = f;
    _T3->f1 = _T2->type;
    _T0 = (struct _tuple20 *)_T3;
  }return _T0;
}
struct Cyc_PP_Doc * Cyc_Absynpp_ntyp2doc(void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct Cyc_PP_Doc * _T4;
  struct Cyc_PP_Doc * _T5;
  struct Cyc_PP_Doc * _T6;
  void * _T7;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T8;
  void * _T9;
  int * _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  struct Cyc_PP_Doc * _TD;
  void * _TE;
  void * _TF;
  union Cyc_Absyn_DatatypeInfo _T10;
  struct _union_DatatypeInfo_UnknownDatatype _T11;
  unsigned int _T12;
  union Cyc_Absyn_DatatypeInfo _T13;
  struct _union_DatatypeInfo_UnknownDatatype _T14;
  struct Cyc_Absyn_UnknownDatatypeInfo _T15;
  union Cyc_Absyn_DatatypeInfo _T16;
  struct _union_DatatypeInfo_UnknownDatatype _T17;
  struct Cyc_Absyn_UnknownDatatypeInfo _T18;
  union Cyc_Absyn_DatatypeInfo _T19;
  struct _union_DatatypeInfo_KnownDatatype _T1A;
  struct Cyc_Absyn_Datatypedecl * * _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_PP_Doc * _T1D;
  long _T1E;
  struct _fat_ptr _T1F;
  struct Cyc_PP_Doc * _T20;
  struct _fat_ptr _T21;
  void * _T22;
  void * _T23;
  union Cyc_Absyn_DatatypeFieldInfo _T24;
  struct _union_DatatypeFieldInfo_UnknownDatatypefield _T25;
  unsigned int _T26;
  union Cyc_Absyn_DatatypeFieldInfo _T27;
  struct _union_DatatypeFieldInfo_UnknownDatatypefield _T28;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo _T29;
  union Cyc_Absyn_DatatypeFieldInfo _T2A;
  struct _union_DatatypeFieldInfo_UnknownDatatypefield _T2B;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo _T2C;
  union Cyc_Absyn_DatatypeFieldInfo _T2D;
  struct _union_DatatypeFieldInfo_UnknownDatatypefield _T2E;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo _T2F;
  union Cyc_Absyn_DatatypeFieldInfo _T30;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T31;
  struct _tuple2 _T32;
  struct Cyc_Absyn_Datatypedecl * _T33;
  union Cyc_Absyn_DatatypeFieldInfo _T34;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T35;
  struct _tuple2 _T36;
  struct Cyc_Absyn_Datatypefield * _T37;
  struct _fat_ptr _T38;
  long _T39;
  struct Cyc_PP_Doc * _T3A;
  struct _fat_ptr _T3B;
  struct _fat_ptr _T3C;
  void * _T3D;
  void * _T3E;
  enum Cyc_Absyn_Sign _T3F;
  int _T40;
  enum Cyc_Absyn_Size_of _T41;
  int _T42;
  enum Cyc_Absyn_Sign _T43;
  int _T44;
  enum Cyc_Flags_C_Compilers _T45;
  struct _fat_ptr _T46;
  struct Cyc_String_pa_PrintArg_struct _T47;
  struct Cyc_String_pa_PrintArg_struct _T48;
  struct _fat_ptr _T49;
  struct _fat_ptr _T4A;
  struct Cyc_PP_Doc * _T4B;
  void * _T4C;
  void * _T4D;
  int _T4E;
  int _T4F;
  struct _fat_ptr _T50;
  struct Cyc_PP_Doc * _T51;
  struct _fat_ptr _T52;
  struct Cyc_PP_Doc * _T53;
  struct _fat_ptr _T54;
  struct Cyc_PP_Doc * _T55;
  void * _T56;
  struct Cyc_PP_Doc * _T57;
  struct _fat_ptr _T58;
  struct Cyc_List_List * _T59;
  void * _T5A;
  struct _fat_ptr _T5B;
  void * _T5C;
  void * _T5D;
  struct Cyc_PP_Doc * _T5E;
  struct _fat_ptr _T5F;
  void * _T60;
  void * _T61;
  struct Cyc_PP_Doc * _T62;
  struct _fat_ptr _T63;
  struct Cyc_PP_Doc * _T64;
  struct _fat_ptr _T65;
  void * _T66;
  void * _T67;
  struct Cyc_PP_Doc * _T68;
  struct _fat_ptr _T69;
  struct _fat_ptr _T6A;
  void * _T6B;
  void * _T6C;
  struct Cyc_PP_Doc * _T6D;
  void * _T6E;
  struct Cyc_PP_Doc * _T6F;
  struct _fat_ptr _T70;
  struct Cyc_List_List * _T71;
  void * _T72;
  struct _fat_ptr _T73;
  struct _fat_ptr _T74;
  void * _T75;
  struct Cyc_PP_Doc * _T76;
  struct _fat_ptr _T77;
  struct Cyc_List_List * _T78;
  void * _T79;
  struct _fat_ptr _T7A;
  struct _fat_ptr _T7B;
  void * _T7C;
  struct Cyc_List_List * _T7D;
  void * _T7E;
  struct Cyc_PP_Doc * _T7F;
  void * _T80;
  struct Cyc_PP_Doc * _T81;
  struct _fat_ptr _T82;
  struct Cyc_List_List * _T83;
  void * _T84;
  struct _fat_ptr _T85;
  struct _fat_ptr _T86;
  void * _T87;
  struct Cyc_PP_Doc * _T88;
  struct _fat_ptr _T89;
  struct Cyc_List_List * _T8A;
  void * _T8B;
  struct _fat_ptr _T8C;
  struct _fat_ptr _T8D;
  struct _fat_ptr _T8E;
  struct Cyc_PP_Doc * _T8F;
  struct _fat_ptr _T90;
  struct Cyc_PP_Doc * _T91;
  struct _fat_ptr _T92;
  struct Cyc_PP_Doc * _T93;
  struct Cyc_PP_Doc * _T94;
  void * _T95;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T96;
  struct Cyc_List_List * _T97;
  void * _T98;
  struct Cyc_List_List * _T99;
  void * _T9A;
  struct Cyc_PP_Doc * _T9B;
  struct _fat_ptr _T9C;
  struct _fat_ptr _T9D;
  struct _fat_ptr _T9E;
  struct Cyc_PP_Doc * _T9F;
  void * _TA0;
  void * _TA1;
  struct Cyc_PP_Doc * _TA2;
  void * _TA3;
  struct Cyc_PP_Doc * _TA4;
  struct _fat_ptr _TA5;
  struct Cyc_List_List * _TA6;
  void * _TA7;
  struct _fat_ptr _TA8;
  struct _fat_ptr _TA9;
  struct _fat_ptr _TAA;
  struct Cyc_PP_Doc * _TAB;
  struct _fat_ptr _TAC;
  struct Cyc_PP_Doc * _TAD;
  struct _fat_ptr _TAE;
  struct Cyc_PP_Doc * _TAF;
  void * _TB0;
  void * _TB1;
  struct _fat_ptr _TB2;
  struct Cyc_Core_Opt * _TB3;
  void * _TB4;
  struct Cyc_Absyn_Kind * _TB5;
  const char * _TB6;
  unsigned int _TB7;
  struct _fat_ptr _TB8;
  struct Cyc_String_pa_PrintArg_struct _TB9;
  struct Cyc_String_pa_PrintArg_struct _TBA;
  struct _fat_ptr _TBB;
  void * _TBC;
  void * _TBD;
  unsigned int _TBE;
  struct _fat_ptr _TBF;
  struct _fat_ptr _TC0;
  struct Cyc_PP_Doc * _TC1;
  struct _fat_ptr _TC2;
  struct Cyc_String_pa_PrintArg_struct _TC3;
  struct Cyc_Int_pa_PrintArg_struct _TC4;
  int _TC5;
  struct _fat_ptr _TC6;
  struct _fat_ptr _TC7;
  struct Cyc_PP_Doc * _TC8;
  void * _TC9;
  void * _TCA;
  struct Cyc_PP_Doc * _TCB;
  long _TCC;
  struct Cyc_PP_Doc * _TCD;
  struct _fat_ptr _TCE;
  struct Cyc_Core_Opt * _TCF;
  void * _TD0;
  struct Cyc_Absyn_Kind * _TD1;
  struct _fat_ptr _TD2;
  struct Cyc_String_pa_PrintArg_struct _TD3;
  struct Cyc_Int_pa_PrintArg_struct _TD4;
  int _TD5;
  struct _fat_ptr _TD6;
  struct _fat_ptr _TD7;
  struct Cyc_PP_Doc * _TD8;
  void * _TD9;
  long _TDA;
  struct Cyc_PP_Doc * _TDB;
  struct _fat_ptr _TDC;
  struct Cyc_Absyn_Tvar * _TDD;
  void * _TDE;
  struct _fat_ptr _TDF;
  struct Cyc_PP_Doc * _TE0;
  void * _TE1;
  long _TE2;
  struct Cyc_PP_Doc * _TE3;
  struct Cyc_List_List * (* _TE4)(struct _tuple20 * (*)(struct Cyc_Absyn_Aggrfield *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TE5)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _TE6;
  struct Cyc_List_List * _TE7;
  struct _fat_ptr _TE8;
  struct Cyc_PP_Doc * _TE9;
  struct Cyc_PP_Doc * _TEA;
  struct _fat_ptr _TEB;
  void * _TEC;
  struct Cyc_PP_Doc * _TED;
  struct _fat_ptr _TEE;
  struct _fat_ptr _TEF;
  struct _fat_ptr _TF0;
  void * _TF1;
  struct Cyc_PP_Doc * _TF2;
  struct _fat_ptr _TF3;
  struct _fat_ptr _TF4;
  struct _fat_ptr _TF5;
  void * _TF6;
  struct Cyc_PP_Doc * _TF7;
  struct _fat_ptr _TF8;
  void * _TF9;
  struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _TFA;
  struct Cyc_Absyn_TypeDecl * _TFB;
  struct Cyc_Absyn_TypeDecl * _TFC;
  void * _TFD;
  int * _TFE;
  unsigned int _TFF;
  void * _T100;
  struct Cyc_Absyn_TypeDecl * _T101;
  void * _T102;
  struct Cyc_PP_Doc * _T103;
  void * _T104;
  struct Cyc_Absyn_TypeDecl * _T105;
  void * _T106;
  struct Cyc_PP_Doc * _T107;
  void * _T108;
  struct Cyc_Absyn_TypeDecl * _T109;
  void * _T10A;
  struct Cyc_PP_Doc * _T10B;
  void * _T10C;
  struct Cyc_PP_Doc * _T10D;
  struct _fat_ptr _T10E;
  struct _fat_ptr _T10F;
  struct _fat_ptr _T110;
  struct _fat_ptr _T111;
  struct _fat_ptr _T112;
  struct Cyc_Absyn_Vardecl * _T113;
  struct Cyc_Absyn_Datatypedecl * _T114;
  struct Cyc_Absyn_Enumdecl * _T115;
  struct Cyc_Absyn_Aggrdecl * _T116;
  struct Cyc_Absyn_Typedefdecl * _T117;
  struct _tuple1 * _T118;
  struct Cyc_Absyn_Exp * _T119;
  struct Cyc_List_List * _T11A;
  enum Cyc_Absyn_AggrKind _T11B;
  struct Cyc_Absyn_Tvar * _T11C;
  struct Cyc_Core_Opt * _T11D;
  const char * _T11E;
  struct Cyc_Core_Opt * _T11F;
  enum Cyc_Absyn_AliasQualVal _T120;
  struct _fat_ptr _T121;
  union Cyc_Absyn_AggrInfo _T122;
  long _T123;
  enum Cyc_Absyn_Size_of _T124;
  enum Cyc_Absyn_Sign _T125;
  union Cyc_Absyn_DatatypeFieldInfo _T126;
  void * _T127;
  union Cyc_Absyn_DatatypeInfo _T128;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 5: 
    _T3 = _tag_fat("[[[array]]]",sizeof(char),12U);
    _T4 = Cyc_PP_text(_T3);
    return _T4;
  case 6: 
    _T5 = Cyc_PP_nil_doc();
    return _T5;
  case 4: 
    _T6 = Cyc_PP_nil_doc();
    return _T6;
  case 0: 
    _T7 = t;
    _T8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T7;
    _T9 = _T8->f1;
    _TA = (int *)_T9;
    _TB = *_TA;
    switch (_TB) {
    case 0: 
      _TC = _tag_fat("void",sizeof(char),5U);
      _TD = Cyc_PP_text(_TC);
      return _TD;
    case 22: 
      _TE = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TE;
	_TF = _T129->f1;
	{ struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T12A = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_TF;
	  _T128 = _T12A->f1;
	}_T127 = _T129->f2;
      }{ union Cyc_Absyn_DatatypeInfo tu_info = _T128;
	struct Cyc_List_List * ts = _T127;
	long _T129;
	struct _tuple1 * _T12A;
	_T10 = tu_info;
	_T11 = _T10.UnknownDatatype;
	_T12 = _T11.tag;
	if (_T12 != 1) { goto _TL13C;
	}
	_T13 = tu_info;
	_T14 = _T13.UnknownDatatype;
	_T15 = _T14.val;
	_T12A = _T15.name;
	_T16 = tu_info;
	_T17 = _T16.UnknownDatatype;
	_T18 = _T17.val;
	_T129 = _T18.is_extensible;
	{ struct _tuple1 * n = _T12A;
	  long is_x = _T129;
	  _T12A = n;
	  _T129 = is_x;
	  goto _LL55;
	}_TL13C: _T19 = tu_info;
	_T1A = _T19.KnownDatatype;
	_T1B = _T1A.val;
	{ struct Cyc_Absyn_Datatypedecl * _T12B = *_T1B;
	  struct Cyc_Absyn_Datatypedecl _T12C = *_T12B;
	  _T12A = _T12C.name;
	  _T129 = _T12C.is_extensible;
	}_LL55: { struct _tuple1 * n = _T12A;
	  long is_x = _T129;
	  _T1C = _tag_fat("datatype ",sizeof(char),10U);
	  { struct Cyc_PP_Doc * kw = Cyc_PP_text(_T1C);
	    _T1E = is_x;
	    if (! _T1E) { goto _TL13E;
	    }
	    _T1F = _tag_fat("@extensible ",sizeof(char),13U);
	    _T1D = Cyc_PP_text(_T1F);
	    goto _TL13F;
	    _TL13E: _T1D = Cyc_PP_nil_doc();
	    _TL13F: { struct Cyc_PP_Doc * ext = _T1D;
	      { struct Cyc_PP_Doc * _T12B[4];
		_T12B[0] = ext;
		_T12B[1] = kw;
		_T12B[2] = Cyc_Absynpp_qvar2doc(n);
		_T12B[3] = Cyc_Absynpp_tps2doc(ts);
		_T21 = _tag_fat(_T12B,sizeof(struct Cyc_PP_Doc *),4);
		_T20 = Cyc_PP_cat(_T21);
	      }return _T20;
	    }
	  }
	};
      }
    case 23: 
      _T22 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T22;
	_T23 = _T129->f1;
	{ struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _T12A = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_T23;
	  _T126 = _T12A->f1;
	}_T127 = _T129->f2;
      }{ union Cyc_Absyn_DatatypeFieldInfo tuf_info = _T126;
	struct Cyc_List_List * ts = _T127;
	long _T129;
	struct _tuple1 * _T12A;
	struct _tuple1 * _T12B;
	_T24 = tuf_info;
	_T25 = _T24.UnknownDatatypefield;
	_T26 = _T25.tag;
	if (_T26 != 1) { goto _TL140;
	}
	_T27 = tuf_info;
	_T28 = _T27.UnknownDatatypefield;
	_T29 = _T28.val;
	_T12B = _T29.datatype_name;
	_T2A = tuf_info;
	_T2B = _T2A.UnknownDatatypefield;
	_T2C = _T2B.val;
	_T12A = _T2C.field_name;
	_T2D = tuf_info;
	_T2E = _T2D.UnknownDatatypefield;
	_T2F = _T2E.val;
	_T129 = _T2F.is_extensible;
	{ struct _tuple1 * tname = _T12B;
	  struct _tuple1 * fname = _T12A;
	  long is_x = _T129;
	  _T12B = tname;
	  _T129 = is_x;
	  _T12A = fname;
	  goto _LL5A;
	}_TL140: _T30 = tuf_info;
	_T31 = _T30.KnownDatatypefield;
	_T32 = _T31.val;
	_T33 = _T32.f0;
	{ struct Cyc_Absyn_Datatypedecl _T12C = *_T33;
	  _T12B = _T12C.name;
	  _T129 = _T12C.is_extensible;
	}_T34 = tuf_info;
	_T35 = _T34.KnownDatatypefield;
	_T36 = _T35.val;
	_T37 = _T36.f1;
	{ struct Cyc_Absyn_Datatypefield _T12C = *_T37;
	  _T12A = _T12C.name;
	}_LL5A: { struct _tuple1 * tname = _T12B;
	  long is_x = _T129;
	  struct _tuple1 * fname = _T12A;
	  _T39 = is_x;
	  if (! _T39) { goto _TL142;
	  }
	  _T38 = _tag_fat("@extensible datatype ",sizeof(char),22U);
	  goto _TL143;
	  _TL142: _T38 = _tag_fat("datatype ",sizeof(char),10U);
	  _TL143: { struct Cyc_PP_Doc * kw = Cyc_PP_text(_T38);
	    { struct Cyc_PP_Doc * _T12C[4];
	      _T12C[0] = kw;
	      _T12C[1] = Cyc_Absynpp_qvar2doc(tname);
	      _T3B = _tag_fat(".",sizeof(char),2U);
	      _T12C[2] = Cyc_PP_text(_T3B);
	      _T12C[3] = Cyc_Absynpp_qvar2doc(fname);
	      _T3C = _tag_fat(_T12C,sizeof(struct Cyc_PP_Doc *),4);
	      _T3A = Cyc_PP_cat(_T3C);
	    }return _T3A;
	  }
	};
      }
    case 1: 
      _T3D = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3D;
	_T3E = _T129->f1;
	{ struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T12A = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T3E;
	  _T125 = _T12A->f1;
	  _T124 = _T12A->f2;
	}
      }{ enum Cyc_Absyn_Sign sn = _T125;
	enum Cyc_Absyn_Size_of sz = _T124;
	struct _fat_ptr sns;
	struct _fat_ptr ts;
	_T3F = sn;
	_T40 = (int)_T3F;
	switch (_T40) {
	case Cyc_Absyn_None: 
	  goto _LL5F;
	case Cyc_Absyn_Signed: 
	  _LL5F: sns = _tag_fat("",sizeof(char),1U);
	  goto _LL5B;
	default: 
	  sns = _tag_fat("unsigned ",sizeof(char),10U);
	  goto _LL5B;
	}
	_LL5B: _T41 = sz;
	_T42 = (int)_T41;
	switch (_T42) {
	case Cyc_Absyn_Char_sz: 
	  _T43 = sn;
	  _T44 = (int)_T43;
	  switch (_T44) {
	  case Cyc_Absyn_None: 
	    sns = _tag_fat("",sizeof(char),1U);
	    goto _LL6F;
	  case Cyc_Absyn_Signed: 
	    sns = _tag_fat("signed ",sizeof(char),8U);
	    goto _LL6F;
	  default: 
	    sns = _tag_fat("unsigned ",sizeof(char),10U);
	    goto _LL6F;
	  }
	  _LL6F: ts = _tag_fat("char",sizeof(char),5U);
	  goto _LL62;
	case Cyc_Absyn_Short_sz: 
	  ts = _tag_fat("short",sizeof(char),6U);
	  goto _LL62;
	case Cyc_Absyn_Int_sz: 
	  ts = _tag_fat("int",sizeof(char),4U);
	  goto _LL62;
	case Cyc_Absyn_Long_sz: 
	  ts = _tag_fat("long",sizeof(char),5U);
	  goto _LL62;
	case Cyc_Absyn_LongLong_sz: 
	  goto _LL6E;
	default: 
	  _LL6E: _T45 = Cyc_Flags_c_compiler;
	  if (_T45 != Cyc_Flags_Gcc_c) { goto _TL147;
	  }
	  ts = _tag_fat("long long",sizeof(char),10U);
	  goto _LL76;
	  _TL147: ts = _tag_fat("__int64",sizeof(char),8U);
	  goto _LL76;
	  _LL76: goto _LL62;
	}
	_LL62: { struct Cyc_String_pa_PrintArg_struct _T129;
	  _T129.tag = 0;
	  _T129.f1 = sns;
	  _T47 = _T129;
	}{ struct Cyc_String_pa_PrintArg_struct _T129 = _T47;
	  { struct Cyc_String_pa_PrintArg_struct _T12A;
	    _T12A.tag = 0;
	    _T12A.f1 = ts;
	    _T48 = _T12A;
	  }{ struct Cyc_String_pa_PrintArg_struct _T12A = _T48;
	    void * _T12B[2];
	    _T12B[0] = &_T129;
	    _T12B[1] = &_T12A;
	    _T49 = _tag_fat("%s%s",sizeof(char),5U);
	    _T4A = _tag_fat(_T12B,sizeof(void *),2);
	    _T46 = Cyc_aprintf(_T49,_T4A);
	  }
	}_T4B = Cyc_PP_text(_T46);
	return _T4B;
      }
    case 2: 
      _T4C = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T4C;
	_T4D = _T129->f1;
	{ struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct * _T12A = (struct Cyc_Absyn_FloatCon_Absyn_TyCon_struct *)_T4D;
	  _T123 = _T12A->f1;
	}
      }{ int i = _T123;
	_T4E = i;
	_T4F = (int)_T4E;
	switch (_T4F) {
	case 0: 
	  _T50 = _tag_fat("float",sizeof(char),6U);
	  _T51 = Cyc_PP_text(_T50);
	  return _T51;
	case 1: 
	  _T52 = _tag_fat("double",sizeof(char),7U);
	  _T53 = Cyc_PP_text(_T52);
	  return _T53;
	default: 
	  _T54 = _tag_fat("long double",sizeof(char),12U);
	  _T55 = Cyc_PP_text(_T54);
	  return _T55;
	}
	;
      }
    case 3: 
      _T56 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T56;
	_T127 = _T129->f2;
      }{ struct Cyc_List_List * ts = _T127;
	{ struct Cyc_PP_Doc * _T129[2];
	  _T58 = _tag_fat("_Complex ",sizeof(char),10U);
	  _T129[0] = Cyc_PP_text(_T58);
	  _T59 = _check_null(ts);
	  _T5A = _T59->hd;
	  _T129[1] = Cyc_Absynpp_ntyp2doc(_T5A);
	  _T5B = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),2);
	  _T57 = Cyc_PP_cat(_T5B);
	}return _T57;
      }
    case 24: 
      _T5C = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5C;
	_T5D = _T129->f1;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T12A = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T5D;
	  _T122 = _T12A->f1;
	}_T127 = _T129->f2;
      }{ union Cyc_Absyn_AggrInfo info = _T122;
	struct Cyc_List_List * ts = _T127;
	struct _tuple12 _T129 = Cyc_Absyn_aggr_kinded_name(info);
	struct _tuple1 * _T12A;
	enum Cyc_Absyn_AggrKind _T12B;
	_T12B = _T129.f0;
	_T12A = _T129.f1;
	{ enum Cyc_Absyn_AggrKind k = _T12B;
	  struct _tuple1 * n = _T12A;
	  { struct Cyc_PP_Doc * _T12C[3];
	    _T12C[0] = Cyc_Absynpp_aggr_kind2doc(k);
	    _T12C[1] = Cyc_Absynpp_qvar2doc(n);
	    _T12C[2] = Cyc_Absynpp_tps2doc(ts);
	    _T5F = _tag_fat(_T12C,sizeof(struct Cyc_PP_Doc *),3);
	    _T5E = Cyc_PP_cat(_T5F);
	  }return _T5E;
	}
      }
    case 20: 
      _T60 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T60;
	_T61 = _T129->f1;
	{ struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct * _T12A = (struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct *)_T61;
	  _T127 = _T12A->f1;
	}
      }{ struct Cyc_List_List * fs = _T127;
	{ struct Cyc_PP_Doc * _T129[4];
	  _T63 = _tag_fat("enum ",sizeof(char),6U);
	  _T129[0] = Cyc_PP_text(_T63);
	  _T129[1] = Cyc_Absynpp_lb();
	  _T64 = Cyc_Absynpp_enumfields2doc(fs);
	  _T129[2] = Cyc_PP_nest(2,_T64);
	  _T129[3] = Cyc_Absynpp_rb();
	  _T65 = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),4);
	  _T62 = Cyc_PP_cat(_T65);
	}return _T62;
      }
    case 19: 
      _T66 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T66;
	_T67 = _T129->f1;
	{ struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct * _T12A = (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct *)_T67;
	  _T127 = _T12A->f1;
	}
      }{ struct _tuple1 * n = _T127;
	{ struct Cyc_PP_Doc * _T129[2];
	  _T69 = _tag_fat("enum ",sizeof(char),6U);
	  _T129[0] = Cyc_PP_text(_T69);
	  _T129[1] = Cyc_Absynpp_qvar2doc(n);
	  _T6A = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),2);
	  _T68 = Cyc_PP_cat(_T6A);
	}return _T68;
      }
    case 21: 
      _T6B = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6B;
	_T6C = _T129->f1;
	{ struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct * _T12A = (struct Cyc_Absyn_BuiltinCon_Absyn_TyCon_struct *)_T6C;
	  _T121 = _T12A->f1;
	}
      }{ struct _fat_ptr t = _T121;
	_T6D = Cyc_PP_text(t);
	return _T6D;
      }
    case 4: 
      _T6E = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6E;
	_T127 = _T129->f2;
      }{ struct Cyc_List_List * ts = _T127;
	{ struct Cyc_PP_Doc * _T129[3];
	  _T70 = _tag_fat("region_t<",sizeof(char),10U);
	  _T129[0] = Cyc_PP_text(_T70);
	  _T71 = _check_null(ts);
	  _T72 = _T71->hd;
	  _T129[1] = Cyc_Absynpp_rgn2doc(_T72);
	  _T73 = _tag_fat(">",sizeof(char),2U);
	  _T129[2] = Cyc_PP_text(_T73);
	  _T74 = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),3);
	  _T6F = Cyc_PP_cat(_T74);
	}return _T6F;
      }
    case 18: 
      _T75 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T75;
	_T127 = _T129->f2;
      }{ struct Cyc_List_List * ts = _T127;
	{ struct Cyc_PP_Doc * _T129[3];
	  _T77 = _tag_fat("aqual_t<",sizeof(char),9U);
	  _T129[0] = Cyc_PP_text(_T77);
	  _T78 = _check_null(ts);
	  _T79 = _T78->hd;
	  _T129[1] = Cyc_Absynpp_typ2doc(_T79);
	  _T7A = _tag_fat(">",sizeof(char),2U);
	  _T129[2] = Cyc_PP_text(_T7A);
	  _T7B = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),3);
	  _T76 = Cyc_PP_cat(_T7B);
	}return _T76;
      }
    case 17: 
      _T7C = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T7C;
	_T127 = _T129->f2;
      }{ struct Cyc_List_List * ts = _T127;
	_T7D = _check_null(ts);
	_T7E = _T7D->hd;
	_T7F = Cyc_Absynpp_typ2doc(_T7E);
	return _T7F;
      }
    case 5: 
      _T80 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T80;
	_T127 = _T129->f2;
      }{ struct Cyc_List_List * ts = _T127;
	{ struct Cyc_PP_Doc * _T129[3];
	  _T82 = _tag_fat("tag_t<",sizeof(char),7U);
	  _T129[0] = Cyc_PP_text(_T82);
	  _T83 = _check_null(ts);
	  _T84 = _T83->hd;
	  _T129[1] = Cyc_Absynpp_typ2doc(_T84);
	  _T85 = _tag_fat(">",sizeof(char),2U);
	  _T129[2] = Cyc_PP_text(_T85);
	  _T86 = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),3);
	  _T81 = Cyc_PP_cat(_T86);
	}return _T81;
      }
    case 10: 
      _T87 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T87;
	_T127 = _T129->f2;
      }{ struct Cyc_List_List * ts = _T127;
	{ struct Cyc_PP_Doc * _T129[3];
	  _T89 = _tag_fat("regions(",sizeof(char),9U);
	  _T129[0] = Cyc_PP_text(_T89);
	  _T8A = _check_null(ts);
	  _T8B = _T8A->hd;
	  _T129[1] = Cyc_Absynpp_typ2doc(_T8B);
	  _T8C = _tag_fat(")",sizeof(char),2U);
	  _T129[2] = Cyc_PP_text(_T8C);
	  _T8D = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),3);
	  _T88 = Cyc_PP_cat(_T8D);
	}return _T88;
      }
    case 6: 
      _T8E = _tag_fat("`H",sizeof(char),3U);
      _T8F = Cyc_PP_text(_T8E);
      return _T8F;
    case 7: 
      _T90 = _tag_fat("`U",sizeof(char),3U);
      _T91 = Cyc_PP_text(_T90);
      return _T91;
    case 8: 
      _T92 = _tag_fat("`RC",sizeof(char),4U);
      _T93 = Cyc_PP_text(_T92);
      return _T93;
    case 9: 
      _T94 = Cyc_Absynpp_eff2doc(t);
      return _T94;
    case 13: 
      _T95 = t;
      _T96 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T95;
      _T97 = _T96->f2;
      if (_T97 == 0) { goto _TL14A;
      }
      _T98 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T98;
	_T99 = _T129->f2;
	{ struct Cyc_List_List _T12A = *_T99;
	  _T9A = _T12A.hd;
	  _T127 = (void *)_T9A;
	}
      }{ void * t = _T127;
	{ struct Cyc_PP_Doc * _T129[4];
	  _T9C = _tag_fat("@thin @numelts",sizeof(char),15U);
	  _T129[0] = Cyc_PP_text(_T9C);
	  _T129[1] = Cyc_Absynpp_lb();
	  _T129[2] = Cyc_Absynpp_typ2doc(t);
	  _T129[3] = Cyc_Absynpp_rb();
	  _T9D = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),4);
	  _T9B = Cyc_PP_cat(_T9D);
	}return _T9B;
      }_TL14A: _T9E = _tag_fat("@thin",sizeof(char),6U);
      _T9F = Cyc_PP_text(_T9E);
      return _T9F;
    case 16: 
      _TA0 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA0;
	_TA1 = _T129->f1;
	{ struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct * _T12A = (struct Cyc_Absyn_AqualConstCon_Absyn_TyCon_struct *)_TA1;
	  _T120 = _T12A->f1;
	}
      }{ enum Cyc_Absyn_AliasQualVal aqv = _T120;
	_TA2 = Cyc_Absynpp_aqual_val2doc(aqv);
	return _TA2;
      }
    case 15: 
      _TA3 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
	_T127 = _T129->f2;
      }{ struct Cyc_List_List * qtv = _T127;
	{ struct Cyc_PP_Doc * _T129[3];
	  _TA5 = _tag_fat("aquals(",sizeof(char),8U);
	  _T129[0] = Cyc_PP_text(_TA5);
	  _TA6 = _check_null(qtv);
	  _TA7 = _TA6->hd;
	  _T129[1] = Cyc_Absynpp_typ2doc(_TA7);
	  _TA8 = _tag_fat(")",sizeof(char),2U);
	  _T129[2] = Cyc_PP_text(_TA8);
	  _TA9 = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),3);
	  _TA4 = Cyc_PP_cat(_TA9);
	}return _TA4;
      }
    case 14: 
      _TAA = _tag_fat("@fat",sizeof(char),5U);
      _TAB = Cyc_PP_text(_TAA);
      return _TAB;
    case 11: 
      _TAC = _tag_fat("@true",sizeof(char),6U);
      _TAD = Cyc_PP_text(_TAC);
      return _TAD;
    default: 
      _TAE = _tag_fat("@false",sizeof(char),7U);
      _TAF = Cyc_PP_text(_TAE);
      return _TAF;
    }
    ;
  case 3: 
    _TB0 = t;
    { struct Cyc_Absyn_Cvar_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_Cvar_Absyn_Type_struct *)_TB0;
      _T11F = _T129->f1;
      _TB1 = _T129->f2;
      _T127 = (void *)_TB1;
      _T123 = _T129->f3;
      _T11E = _T129->f5;
    }{ struct Cyc_Core_Opt * k = _T11F;
      void * topt = _T127;
      int i = _T123;
      const char * name = _T11E;
      if (k != 0) { goto _TL14C;
      }
      _TB2 = _tag_fat("K",sizeof(char),2U);
      goto _TL14D;
      _TL14C: _TB3 = k;
      _TB4 = _TB3->v;
      _TB5 = (struct Cyc_Absyn_Kind *)_TB4;
      _TB2 = Cyc_Absynpp_kind2string(_TB5);
      _TL14D: { struct _fat_ptr kindstring = _TB2;
	_TB6 = name;
	_TB7 = (unsigned int)_TB6;
	if (! _TB7) { goto _TL14E;
	}
	{ struct Cyc_String_pa_PrintArg_struct _T129;
	  _T129.tag = 0;
	  _T129.f1 = kindstring;
	  _TB9 = _T129;
	}{ struct Cyc_String_pa_PrintArg_struct _T129 = _TB9;
	  { struct Cyc_String_pa_PrintArg_struct _T12A;
	    _T12A.tag = 0;
	    { const char * _T12B = name;
	      _TBC = (void *)_T12B;
	      _TBD = (void *)_T12B;
	      _TBE = _get_zero_arr_size_char(_TBD,1U);
	      _TBB = _tag_fat(_TBC,sizeof(char),_TBE);
	    }_T12A.f1 = _TBB;
	    _TBA = _T12A;
	  }{ struct Cyc_String_pa_PrintArg_struct _T12A = _TBA;
	    void * _T12B[2];
	    _T12B[0] = &_T129;
	    _T12B[1] = &_T12A;
	    _TBF = _tag_fat("`C_%s_%s",sizeof(char),9U);
	    _TC0 = _tag_fat(_T12B,sizeof(void *),2);
	    _TB8 = Cyc_aprintf(_TBF,_TC0);
	  }
	}_TC1 = Cyc_PP_text(_TB8);
	return _TC1;
	_TL14E: { struct Cyc_String_pa_PrintArg_struct _T129;
	  _T129.tag = 0;
	  _T129.f1 = kindstring;
	  _TC3 = _T129;
	}{ struct Cyc_String_pa_PrintArg_struct _T129 = _TC3;
	  { struct Cyc_Int_pa_PrintArg_struct _T12A;
	    _T12A.tag = 1;
	    _TC5 = i;
	    _T12A.f1 = (unsigned long)_TC5;
	    _TC4 = _T12A;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T12A = _TC4;
	    void * _T12B[2];
	    _T12B[0] = &_T129;
	    _T12B[1] = &_T12A;
	    _TC6 = _tag_fat("`C_%s_%d",sizeof(char),9U);
	    _TC7 = _tag_fat(_T12B,sizeof(void *),2);
	    _TC2 = Cyc_aprintf(_TC6,_TC7);
	  }
	}_TC8 = Cyc_PP_text(_TC2);
	return _TC8;
      }
    }
  case 1: 
    _TC9 = t;
    { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_TC9;
      _T11F = _T129->f1;
      _TCA = _T129->f2;
      _T127 = (void *)_TCA;
      _T123 = _T129->f3;
      _T11D = _T129->f4;
    }{ struct Cyc_Core_Opt * k = _T11F;
      void * topt = _T127;
      int i = _T123;
      struct Cyc_Core_Opt * tvs = _T11D;
      if (topt == 0) { goto _TL150;
      }
      _TCB = Cyc_Absynpp_ntyp2doc(topt);
      return _TCB;
      _TL150: _TCC = Cyc_Absynpp_gen_clean_cyclone;
      if (! _TCC) { goto _TL152;
      }
      _TCD = Cyc_PP_nil_doc();
      return _TCD;
      _TL152: if (k != 0) { goto _TL154;
      }
      _TCE = _tag_fat("K",sizeof(char),2U);
      goto _TL155;
      _TL154: _TCF = k;
      _TD0 = _TCF->v;
      _TD1 = (struct Cyc_Absyn_Kind *)_TD0;
      _TCE = Cyc_Absynpp_kind2string(_TD1);
      _TL155: { struct _fat_ptr kindstring = _TCE;
	{ struct Cyc_String_pa_PrintArg_struct _T129;
	  _T129.tag = 0;
	  _T129.f1 = kindstring;
	  _TD3 = _T129;
	}{ struct Cyc_String_pa_PrintArg_struct _T129 = _TD3;
	  { struct Cyc_Int_pa_PrintArg_struct _T12A;
	    _T12A.tag = 1;
	    _TD5 = i;
	    _T12A.f1 = (unsigned long)_TD5;
	    _TD4 = _T12A;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T12A = _TD4;
	    void * _T12B[2];
	    _T12B[0] = &_T129;
	    _T12B[1] = &_T12A;
	    _TD6 = _tag_fat("`E%s%d",sizeof(char),7U);
	    _TD7 = _tag_fat(_T12B,sizeof(void *),2);
	    _TD2 = Cyc_aprintf(_TD6,_TD7);
	  }
	}_TD8 = Cyc_PP_text(_TD2);
	return _TD8;
      }
    }
  case 2: 
    _TD9 = t;
    { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_TD9;
      _T11C = _T129->f1;
    }{ struct Cyc_Absyn_Tvar * tv = _T11C;
      struct Cyc_PP_Doc * s = Cyc_Absynpp_tvar2doc(tv);
      _TDA = Cyc_Absynpp_print_all_kinds;
      if (! _TDA) { goto _TL156;
      }
      { struct Cyc_PP_Doc * _T129[3];
	_T129[0] = s;
	_TDC = _tag_fat("::",sizeof(char),3U);
	_T129[1] = Cyc_PP_text(_TDC);
	_TDD = tv;
	_TDE = _TDD->kind;
	_T129[2] = Cyc_Absynpp_kindbound2doc(_TDE);
	_TDF = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),3);
	_TDB = Cyc_PP_cat(_TDF);
      }s = _TDB;
      goto _TL157;
      _TL156: _TL157: _TE0 = s;
      return _TE0;
    }
  case 7: 
    _TE1 = t;
    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_TE1;
      _T11B = _T129->f1;
      _T123 = _T129->f2;
      _T11A = _T129->f3;
    }{ enum Cyc_Absyn_AggrKind k = _T11B;
      long is_tuple = _T123;
      struct Cyc_List_List * fs = _T11A;
      _TE2 = is_tuple;
      if (! _TE2) { goto _TL158;
      }
      { struct Cyc_PP_Doc * _T129[2];
	_T129[0] = Cyc_Absynpp_dollar();
	_TE5 = Cyc_List_map;
	{ struct Cyc_List_List * (* _T12A)(struct _tuple20 * (*)(struct Cyc_Absyn_Aggrfield *),
					   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple20 * (*)(struct Cyc_Absyn_Aggrfield *),
												 struct Cyc_List_List *))_TE5;
	  _TE4 = _T12A;
	}_TE6 = fs;
	_TE7 = _TE4(Cyc_Absynpp_aggrfield2arg,_TE6);
	_T129[1] = Cyc_Absynpp_args2doc(_TE7);
	_TE8 = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),2);
	_TE3 = Cyc_PP_cat(_TE8);
      }return _TE3;
      _TL158: { struct Cyc_PP_Doc * _T129[4];
	_T129[0] = Cyc_Absynpp_aggr_kind2doc(k);
	_T129[1] = Cyc_Absynpp_lb();
	_TEA = Cyc_Absynpp_aggrfields2doc(fs);
	_T129[2] = Cyc_PP_nest(2,_TEA);
	_T129[3] = Cyc_Absynpp_rb();
	_TEB = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),4);
	_TE9 = Cyc_PP_cat(_TEB);
      }return _TE9;
    }
  case 9: 
    _TEC = t;
    { struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_ValueofType_Absyn_Type_struct *)_TEC;
      _T119 = _T129->f1;
    }{ struct Cyc_Absyn_Exp * e = _T119;
      { struct Cyc_PP_Doc * _T129[3];
	_TEE = _tag_fat("valueof_t(",sizeof(char),11U);
	_T129[0] = Cyc_PP_text(_TEE);
	_T129[1] = Cyc_Absynpp_exp2doc(e);
	_TEF = _tag_fat(")",sizeof(char),2U);
	_T129[2] = Cyc_PP_text(_TEF);
	_TF0 = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),3);
	_TED = Cyc_PP_cat(_TF0);
      }return _TED;
    }
  case 11: 
    _TF1 = t;
    { struct Cyc_Absyn_TypeofType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_TypeofType_Absyn_Type_struct *)_TF1;
      _T119 = _T129->f1;
    }{ struct Cyc_Absyn_Exp * e = _T119;
      { struct Cyc_PP_Doc * _T129[3];
	_TF3 = _tag_fat("typeof(",sizeof(char),8U);
	_T129[0] = Cyc_PP_text(_TF3);
	_T129[1] = Cyc_Absynpp_exp2doc(e);
	_TF4 = _tag_fat(")",sizeof(char),2U);
	_T129[2] = Cyc_PP_text(_TF4);
	_TF5 = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),3);
	_TF2 = Cyc_PP_cat(_TF5);
      }return _TF2;
    }
  case 8: 
    _TF6 = t;
    { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_TF6;
      _T118 = _T129->f1;
      _T11A = _T129->f2;
      _T117 = _T129->f3;
    }{ struct _tuple1 * n = _T118;
      struct Cyc_List_List * ts = _T11A;
      struct Cyc_Absyn_Typedefdecl * kopt = _T117;
      { struct Cyc_PP_Doc * _T129[2];
	_T129[0] = Cyc_Absynpp_qvar2doc(n);
	_T129[1] = Cyc_Absynpp_tps2doc(ts);
	_TF8 = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),2);
	_TF7 = Cyc_PP_cat(_TF8);
      }return _TF7;
    }
  case 10: 
    _TF9 = t;
    _TFA = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_TF9;
    _TFB = _TFA->f1;
    _TFC = (struct Cyc_Absyn_TypeDecl *)_TFB;
    _TFD = _TFC->r;
    _TFE = (int *)_TFD;
    _TFF = *_TFE;
    switch (_TFF) {
    case 0: 
      _T100 = t;
      { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T100;
	_T101 = _T129->f1;
	{ struct Cyc_Absyn_TypeDecl _T12A = *_T101;
	  _T102 = _T12A.r;
	  { struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct * _T12B = (struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct *)_T102;
	    _T116 = _T12B->f1;
	  }
	}
      }{ struct Cyc_Absyn_Aggrdecl * d = _T116;
	_T103 = Cyc_Absynpp_aggrdecl2doc(d);
	return _T103;
      }
    case 1: 
      _T104 = t;
      { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T104;
	_T105 = _T129->f1;
	{ struct Cyc_Absyn_TypeDecl _T12A = *_T105;
	  _T106 = _T12A.r;
	  { struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct * _T12B = (struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct *)_T106;
	    _T115 = _T12B->f1;
	  }
	}
      }{ struct Cyc_Absyn_Enumdecl * d = _T115;
	_T107 = Cyc_Absynpp_enumdecl2doc(d);
	return _T107;
      }
    default: 
      _T108 = t;
      { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T108;
	_T109 = _T129->f1;
	{ struct Cyc_Absyn_TypeDecl _T12A = *_T109;
	  _T10A = _T12A.r;
	  { struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct * _T12B = (struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct *)_T10A;
	    _T114 = _T12B->f1;
	  }
	}
      }{ struct Cyc_Absyn_Datatypedecl * d = _T114;
	_T10B = Cyc_Absynpp_datatypedecl2doc(d);
	return _T10B;
      }
    }
    ;
  default: 
    _T10C = t;
    { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T129 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T10C;
      _T113 = _T129->f1;
      _T119 = _T129->f2;
    }{ struct Cyc_Absyn_Vardecl * vd = _T113;
      struct Cyc_Absyn_Exp * e = _T119;
      { struct Cyc_PP_Doc * _T129[6];
	_T10E = _tag_fat("@subset",sizeof(char),8U);
	_T129[0] = Cyc_PP_text(_T10E);
	_T10F = _tag_fat("(",sizeof(char),2U);
	_T129[1] = Cyc_PP_text(_T10F);
	_T129[2] = Cyc_Absynpp_vardecl2doc(vd,0);
	_T110 = _tag_fat(" | ",sizeof(char),4U);
	_T129[3] = Cyc_PP_text(_T110);
	_T129[4] = Cyc_Absynpp_exp2doc(e);
	_T111 = _tag_fat(")",sizeof(char),2U);
	_T129[5] = Cyc_PP_text(_T111);
	_T112 = _tag_fat(_T129,sizeof(struct Cyc_PP_Doc *),6);
	_T10D = Cyc_PP_cat(_T112);
      }return _T10D;
    }
  }
  ;
}
struct Cyc_PP_Doc * Cyc_Absynpp_rgn_cmp2doc(struct _tuple0 * cmp) {
  struct _tuple0 * _T0;
  struct Cyc_PP_Doc * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  void * _T4;
  void * _T5;
  _T0 = cmp;
  { struct _tuple0 _T6 = *_T0;
    _T5 = _T6.f0;
    _T4 = _T6.f1;
  }{ void * r1 = _T5;
    void * r2 = _T4;
    { struct Cyc_PP_Doc * _T6[3];
      _T6[0] = Cyc_Absynpp_rgn2doc(r1);
      _T2 = _tag_fat(" > ",sizeof(char),4U);
      _T6[1] = Cyc_PP_text(_T2);
      _T6[2] = Cyc_Absynpp_rgn2doc(r2);
      _T3 = _tag_fat(_T6,sizeof(struct Cyc_PP_Doc *),3);
      _T1 = Cyc_PP_cat(_T3);
    }return _T1;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_rgnpo2doc(struct Cyc_List_List * po) {
  struct Cyc_PP_Doc * (* _T0)(struct Cyc_PP_Doc * (*)(struct _tuple0 *),struct _fat_ptr,
			      struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T1)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			      struct Cyc_List_List *);
  struct _fat_ptr _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_PP_Doc * _T4;
  _T1 = Cyc_PP_ppseq;
  { struct Cyc_PP_Doc * (* _T5)(struct Cyc_PP_Doc * (*)(struct _tuple0 *),
				struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct _tuple0 *),
												   struct _fat_ptr,
												   struct Cyc_List_List *))_T1;
    _T0 = _T5;
  }_T2 = _tag_fat(",",sizeof(char),2U);
  _T3 = po;
  _T4 = _T0(Cyc_Absynpp_rgn_cmp2doc,_T2,_T3);
  return _T4;
}
struct Cyc_PP_Doc * Cyc_Absynpp_one_ec2doc(void * ec) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  struct Cyc_PP_Doc * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  void * _T9;
  void * _TA;
  void * _TB;
  struct Cyc_PP_Doc * _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  void * _TF;
  void * _T10;
  struct Cyc_PP_Doc * _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  void * _T15;
  void * _T16;
  _T0 = ec;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 2: 
    _T3 = ec;
    { struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct * _T17 = (struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct *)_T3;
      _T4 = _T17->f1;
      _T16 = (void *)_T4;
      _T5 = _T17->f2;
      _T15 = (void *)_T5;
    }{ void * e1 = _T16;
      void * e2 = _T15;
      { struct Cyc_PP_Doc * _T17[3];
	_T17[0] = Cyc_Absynpp_eff2doc(e1);
	_T7 = _tag_fat(" <= ",sizeof(char),5U);
	_T17[1] = Cyc_PP_text(_T7);
	_T17[2] = Cyc_Absynpp_eff2doc(e2);
	_T8 = _tag_fat(_T17,sizeof(struct Cyc_PP_Doc *),3);
	_T6 = Cyc_PP_cat(_T8);
      }return _T6;
    }
  case 1: 
    _T9 = ec;
    { struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct * _T17 = (struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct *)_T9;
      _TA = _T17->f1;
      _T16 = (void *)_TA;
      _TB = _T17->f2;
      _T15 = (void *)_TB;
    }{ void * e1 = _T16;
      void * e2 = _T15;
      { struct Cyc_PP_Doc * _T17[3];
	_T17[0] = Cyc_Absynpp_eff2doc(e1);
	_TD = _tag_fat(" | ",sizeof(char),4U);
	_T17[1] = Cyc_PP_text(_TD);
	_T17[2] = Cyc_Absynpp_eff2doc(e2);
	_TE = _tag_fat(_T17,sizeof(struct Cyc_PP_Doc *),3);
	_TC = Cyc_PP_cat(_TE);
      }return _TC;
    }
  default: 
    _TF = ec;
    { struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct * _T17 = (struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct *)_TF;
      _T10 = _T17->f1;
      _T16 = (void *)_T10;
    }{ void * e = _T16;
      { struct Cyc_PP_Doc * _T17[3];
	_T12 = _tag_fat("single(",sizeof(char),8U);
	_T17[0] = Cyc_PP_text(_T12);
	_T17[1] = Cyc_Absynpp_eff2doc(e);
	_T13 = _tag_fat(")",sizeof(char),2U);
	_T17[2] = Cyc_PP_text(_T13);
	_T14 = _tag_fat(_T17,sizeof(struct Cyc_PP_Doc *),3);
	_T11 = Cyc_PP_cat(_T14);
      }return _T11;
    }
  }
  ;
}
struct Cyc_PP_Doc * Cyc_Absynpp_effconstr2doc(struct Cyc_List_List * effc) {
  struct _fat_ptr _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_PP_Doc * _T2;
  _T0 = _tag_fat(",",sizeof(char),2U);
  _T1 = effc;
  _T2 = Cyc_PP_ppseq(Cyc_Absynpp_one_ec2doc,_T0,_T1);
  return _T2;
}
struct Cyc_PP_Doc * Cyc_Absynpp_qb_cmp2doc(struct _tuple0 * cmp) {
  struct _tuple0 * _T0;
  struct Cyc_PP_Doc * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  void * _T4;
  void * _T5;
  _T0 = cmp;
  { struct _tuple0 _T6 = *_T0;
    _T5 = _T6.f0;
    _T4 = _T6.f1;
  }{ void * t1 = _T5;
    void * t2 = _T4;
    { struct Cyc_PP_Doc * _T6[3];
      _T6[0] = Cyc_Absynpp_ntyp2doc(t2);
      _T2 = _tag_fat(" >= ",sizeof(char),5U);
      _T6[1] = Cyc_PP_text(_T2);
      _T6[2] = Cyc_Absynpp_ntyp2doc(t1);
      _T3 = _tag_fat(_T6,sizeof(struct Cyc_PP_Doc *),3);
      _T1 = Cyc_PP_cat(_T3);
    }return _T1;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_qualbnd2doc(struct Cyc_List_List * qb) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_List_List * (* _T3)(struct Cyc_PP_Doc * (*)(struct _tuple0 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T4)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_PP_Doc * _T7;
  _T0 = _tag_fat("",sizeof(char),1U);
  _T1 = _tag_fat("",sizeof(char),1U);
  _T2 = _tag_fat(",",sizeof(char),2U);
  _T4 = Cyc_List_map;
  { struct Cyc_List_List * (* _T8)(struct Cyc_PP_Doc * (*)(struct _tuple0 *),
				   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple0 *),
											 struct Cyc_List_List *))_T4;
    _T3 = _T8;
  }_T5 = qb;
  _T6 = _T3(Cyc_Absynpp_qb_cmp2doc,_T5);
  _T7 = Cyc_PP_group(_T0,_T1,_T2,_T6);
  return _T7;
}
struct Cyc_PP_Doc * Cyc_Absynpp_funarg2doc(struct _tuple9 * t) {
  struct _tuple9 * _T0;
  struct _tuple9 _T1;
  struct Cyc_Core_Opt * _T2;
  struct Cyc_Core_Opt * _T3;
  struct _fat_ptr * _T4;
  struct _fat_ptr _T5;
  struct _tuple9 * _T6;
  struct _tuple9 _T7;
  struct Cyc_Absyn_Tqual _T8;
  struct _tuple9 * _T9;
  struct _tuple9 _TA;
  void * _TB;
  struct Cyc_Core_Opt * _TC;
  struct Cyc_PP_Doc * _TD;
  _T0 = t;
  _T1 = *_T0;
  { struct _fat_ptr * vo = _T1.f0;
    if (vo != 0) { goto _TL15C;
    }
    _T2 = 0;
    goto _TL15D;
    _TL15C: { struct Cyc_Core_Opt * _TE = _cycalloc(sizeof(struct Cyc_Core_Opt));
      _T4 = vo;
      _T5 = *_T4;
      _TE->v = Cyc_PP_text(_T5);
      _T3 = (struct Cyc_Core_Opt *)_TE;
    }_T2 = _T3;
    _TL15D: { struct Cyc_Core_Opt * dopt = _T2;
      _T6 = t;
      _T7 = *_T6;
      _T8 = _T7.f1;
      _T9 = t;
      _TA = *_T9;
      _TB = _TA.f2;
      _TC = dopt;
      _TD = Cyc_Absynpp_tqtd2doc(_T8,_TB,_TC);
      return _TD;
    }
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_funargs2doc(struct Cyc_List_List * args,long c_varargs,
					    struct Cyc_Absyn_VarargInfo * cyc_varargs,
					    void * effopt,struct Cyc_List_List * effc,
					    struct Cyc_List_List * qb,struct Cyc_Absyn_Exp * chk,
					    struct Cyc_Absyn_Exp * req,struct Cyc_Absyn_Exp * ens,
					    struct Cyc_Absyn_Exp * thrws) {
  struct Cyc_List_List * (* _T0)(struct Cyc_PP_Doc * (*)(struct _tuple9 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T1)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T2;
  long _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct _fat_ptr _T6;
  struct Cyc_PP_Doc * _T7;
  struct _fat_ptr _T8;
  struct Cyc_Absyn_VarargInfo * _T9;
  long _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct _tuple9 * _TD;
  struct Cyc_Absyn_VarargInfo * _TE;
  struct Cyc_Absyn_VarargInfo * _TF;
  struct Cyc_Absyn_VarargInfo * _T10;
  struct _fat_ptr _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct Cyc_List_List * _T17;
  long _T18;
  struct Cyc_PP_Doc * _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_PP_Doc * _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  struct Cyc_PP_Doc * _T1F;
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  struct Cyc_PP_Doc * _T22;
  struct _fat_ptr _T23;
  struct Cyc_PP_Doc * _T24;
  struct _fat_ptr _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  struct Cyc_PP_Doc * _T28;
  struct _fat_ptr _T29;
  struct _fat_ptr _T2A;
  struct _fat_ptr _T2B;
  struct Cyc_PP_Doc * _T2C;
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr _T2F;
  struct Cyc_PP_Doc * _T30;
  struct _fat_ptr _T31;
  struct _fat_ptr _T32;
  struct _fat_ptr _T33;
  struct Cyc_PP_Doc * _T34;
  struct _fat_ptr _T35;
  struct _fat_ptr _T36;
  struct _fat_ptr _T37;
  struct Cyc_PP_Doc * _T38;
  _T1 = Cyc_List_map;
  { struct Cyc_List_List * (* _T39)(struct Cyc_PP_Doc * (*)(struct _tuple9 *),
				    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple9 *),
											  struct Cyc_List_List *))_T1;
    _T0 = _T39;
  }_T2 = args;
  { struct Cyc_List_List * arg_docs = _T0(Cyc_Absynpp_funarg2doc,_T2);
    struct Cyc_PP_Doc * eff_doc;
    _T3 = c_varargs;
    if (! _T3) { goto _TL15E;
    }
    _T4 = arg_docs;
    { struct Cyc_List_List * _T39 = _cycalloc(sizeof(struct Cyc_List_List));
      _T6 = _tag_fat("...",sizeof(char),4U);
      _T39->hd = Cyc_PP_text(_T6);
      _T39->tl = 0;
      _T5 = (struct Cyc_List_List *)_T39;
    }arg_docs = Cyc_List_append(_T4,_T5);
    goto _TL15F;
    _TL15E: if (cyc_varargs == 0) { goto _TL160;
    }
    { struct Cyc_PP_Doc * _T39[3];
      _T8 = _tag_fat("...",sizeof(char),4U);
      _T39[0] = Cyc_PP_text(_T8);
      _T9 = cyc_varargs;
      _TA = _T9->inject;
      if (! _TA) { goto _TL162;
      }
      _TB = _tag_fat(" inject ",sizeof(char),9U);
      _T39[1] = Cyc_PP_text(_TB);
      goto _TL163;
      _TL162: _TC = _tag_fat(" ",sizeof(char),2U);
      _T39[1] = Cyc_PP_text(_TC);
      _TL163: { struct _tuple9 * _T3A = _cycalloc(sizeof(struct _tuple9));
	_TE = cyc_varargs;
	_T3A->f0 = _TE->name;
	_TF = cyc_varargs;
	_T3A->f1 = _TF->tq;
	_T10 = cyc_varargs;
	_T3A->f2 = _T10->type;
	_TD = (struct _tuple9 *)_T3A;
      }_T39[2] = Cyc_Absynpp_funarg2doc(_TD);
      _T11 = _tag_fat(_T39,sizeof(struct Cyc_PP_Doc *),3);
      _T7 = Cyc_PP_cat(_T11);
    }{ struct Cyc_PP_Doc * varargs_doc = _T7;
      _T12 = arg_docs;
      { struct Cyc_List_List * _T39 = _cycalloc(sizeof(struct Cyc_List_List));
	_T39->hd = varargs_doc;
	_T39->tl = 0;
	_T13 = (struct Cyc_List_List *)_T39;
      }arg_docs = Cyc_List_append(_T12,_T13);
    }goto _TL161;
    _TL160: _TL161: _TL15F: _T14 = _tag_fat("",sizeof(char),1U);
    _T15 = _tag_fat("",sizeof(char),1U);
    _T16 = _tag_fat(",",sizeof(char),2U);
    _T17 = arg_docs;
    { struct Cyc_PP_Doc * arg_doc = Cyc_PP_group(_T14,_T15,_T16,_T17);
      if (effopt == 0) { goto _TL164;
      }
      _T18 = Cyc_Absynpp_print_all_effects;
      if (! _T18) { goto _TL164;
      }
      { struct Cyc_PP_Doc * _T39[3];
	_T39[0] = arg_doc;
	_T1A = _tag_fat(";",sizeof(char),2U);
	_T39[1] = Cyc_PP_text(_T1A);
	_T39[2] = Cyc_Absynpp_eff2doc(effopt);
	_T1B = _tag_fat(_T39,sizeof(struct Cyc_PP_Doc *),3);
	_T19 = Cyc_PP_cat(_T1B);
      }arg_doc = _T19;
      goto _TL165;
      _TL164: _TL165: if (effc == 0) { goto _TL166;
      }
      { struct Cyc_PP_Doc * _T39[3];
	_T39[0] = arg_doc;
	_T1D = _tag_fat(":",sizeof(char),2U);
	_T39[1] = Cyc_PP_text(_T1D);
	_T39[2] = Cyc_Absynpp_effconstr2doc(effc);
	_T1E = _tag_fat(_T39,sizeof(struct Cyc_PP_Doc *),3);
	_T1C = Cyc_PP_cat(_T1E);
      }arg_doc = _T1C;
      goto _TL167;
      _TL166: _TL167: if (qb == 0) { goto _TL168;
      }
      if (effc != 0) { goto _TL16A;
      }
      _T20 = _tag_fat(":",sizeof(char),2U);
      _T1F = Cyc_PP_text(_T20);
      goto _TL16B;
      _TL16A: _T21 = _tag_fat(",",sizeof(char),2U);
      _T1F = Cyc_PP_text(_T21);
      _TL16B: { struct Cyc_PP_Doc * sep = _T1F;
	{ struct Cyc_PP_Doc * _T39[3];
	  _T39[0] = arg_doc;
	  _T39[1] = sep;
	  _T39[2] = Cyc_Absynpp_qualbnd2doc(qb);
	  _T23 = _tag_fat(_T39,sizeof(struct Cyc_PP_Doc *),3);
	  _T22 = Cyc_PP_cat(_T23);
	}arg_doc = _T22;
      }goto _TL169;
      _TL168: _TL169: { struct Cyc_PP_Doc * _T39[3];
	_T25 = _tag_fat("(",sizeof(char),2U);
	_T39[0] = Cyc_PP_text(_T25);
	_T39[1] = arg_doc;
	_T26 = _tag_fat(")",sizeof(char),2U);
	_T39[2] = Cyc_PP_text(_T26);
	_T27 = _tag_fat(_T39,sizeof(struct Cyc_PP_Doc *),3);
	_T24 = Cyc_PP_cat(_T27);
      }{ struct Cyc_PP_Doc * res = _T24;
	if (chk == 0) { goto _TL16C;
	}
	{ struct Cyc_PP_Doc * _T39[4];
	  _T39[0] = res;
	  _T29 = _tag_fat(" @checks(",sizeof(char),10U);
	  _T39[1] = Cyc_PP_text(_T29);
	  _T39[2] = Cyc_Absynpp_exp2doc(chk);
	  _T2A = _tag_fat(")",sizeof(char),2U);
	  _T39[3] = Cyc_PP_text(_T2A);
	  _T2B = _tag_fat(_T39,sizeof(struct Cyc_PP_Doc *),4);
	  _T28 = Cyc_PP_cat(_T2B);
	}res = _T28;
	goto _TL16D;
	_TL16C: _TL16D: if (req == 0) { goto _TL16E;
	}
	{ struct Cyc_PP_Doc * _T39[4];
	  _T39[0] = res;
	  _T2D = _tag_fat(" @requires(",sizeof(char),12U);
	  _T39[1] = Cyc_PP_text(_T2D);
	  _T39[2] = Cyc_Absynpp_exp2doc(req);
	  _T2E = _tag_fat(")",sizeof(char),2U);
	  _T39[3] = Cyc_PP_text(_T2E);
	  _T2F = _tag_fat(_T39,sizeof(struct Cyc_PP_Doc *),4);
	  _T2C = Cyc_PP_cat(_T2F);
	}res = _T2C;
	goto _TL16F;
	_TL16E: _TL16F: if (ens == 0) { goto _TL170;
	}
	{ struct Cyc_PP_Doc * _T39[4];
	  _T39[0] = res;
	  _T31 = _tag_fat(" @ensures(",sizeof(char),11U);
	  _T39[1] = Cyc_PP_text(_T31);
	  _T39[2] = Cyc_Absynpp_exp2doc(ens);
	  _T32 = _tag_fat(")",sizeof(char),2U);
	  _T39[3] = Cyc_PP_text(_T32);
	  _T33 = _tag_fat(_T39,sizeof(struct Cyc_PP_Doc *),4);
	  _T30 = Cyc_PP_cat(_T33);
	}res = _T30;
	goto _TL171;
	_TL170: _TL171: if (thrws == 0) { goto _TL172;
	}
	{ struct Cyc_PP_Doc * _T39[4];
	  _T39[0] = res;
	  _T35 = _tag_fat(" @throws(",sizeof(char),10U);
	  _T39[1] = Cyc_PP_text(_T35);
	  _T39[2] = Cyc_Absynpp_exp2doc(thrws);
	  _T36 = _tag_fat(")",sizeof(char),2U);
	  _T39[3] = Cyc_PP_text(_T36);
	  _T37 = _tag_fat(_T39,sizeof(struct Cyc_PP_Doc *),4);
	  _T34 = Cyc_PP_cat(_T37);
	}res = _T34;
	goto _TL173;
	_TL172: _TL173: _T38 = res;
	return _T38;
      }
    }
  }
}
struct _fat_ptr Cyc_Absynpp_qvar2string(struct _tuple1 * q) {
  struct _tuple1 * _T0;
  struct _tuple1 _T1;
  struct _union_Nmspace_C_n _T2;
  unsigned int _T3;
  struct _union_Nmspace_Rel_n _T4;
  struct Cyc_List_List * _T5;
  unsigned int _T6;
  long _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct _fat_ptr * _TA;
  struct _fat_ptr * _TB;
  int _TC;
  struct Cyc_List_List * _TD;
  struct _union_Nmspace_C_n _TE;
  long _TF;
  int _T10;
  long _T11;
  long (* _T12)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
		struct Cyc_List_List *);
  long (* _T13)(int (*)(void *,void *),struct Cyc_List_List *,struct Cyc_List_List *);
  int (* _T14)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * _T16;
  struct _union_Nmspace_Abs_n _T17;
  int _T18;
  long _T19;
  long (* _T1A)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
		struct Cyc_List_List *);
  long (* _T1B)(int (*)(void *,void *),struct Cyc_List_List *,struct Cyc_List_List *);
  int (* _T1C)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  unsigned int _T20;
  long _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  struct _fat_ptr * _T24;
  struct _fat_ptr * _T25;
  int _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_List_List * _T28;
  long _T29;
  struct Cyc_List_List * _T2A;
  long _T2B;
  struct Cyc_List_List * _T2C;
  struct Cyc_List_List * _T2D;
  struct _tuple1 * _T2E;
  struct _tuple1 _T2F;
  struct Cyc_List_List * _T30;
  struct _fat_ptr _T31;
  struct _fat_ptr _T32;
  long _T33;
  struct _tuple1 * _T34;
  struct _tuple1 _T35;
  struct _fat_ptr * _T36;
  struct _fat_ptr _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_List_List * _T39;
  struct _tuple1 * _T3A;
  struct _tuple1 _T3B;
  struct Cyc_List_List * _T3C;
  struct _fat_ptr _T3D;
  struct _fat_ptr _T3E;
  struct Cyc_List_List * prefix = 0;
  long match;
  _T0 = q;
  _T1 = *_T0;
  { union Cyc_Absyn_Nmspace _T3F = _T1.f0;
    struct Cyc_List_List * _T40;
    _T2 = _T3F.C_n;
    _T3 = _T2.tag;
    switch (_T3) {
    case 4: 
      _T40 = 0;
      goto _LL4;
    case 2: 
      _T4 = _T3F.Rel_n;
      _T40 = _T4.val;
      _LL4: { struct Cyc_List_List * x = _T40;
	match = 0;
	_T5 = x;
	_T6 = (unsigned int)_T5;
	if (! _T6) { goto _TL175;
	}
	_T7 = Cyc_Absynpp_qvar_to_Cids;
	if (! _T7) { goto _TL175;
	}
	_T8 = x;
	_T9 = _T8->hd;
	_TA = (struct _fat_ptr *)_T9;
	_TB = Cyc_Absynpp_nocyc_strptr;
	_TC = Cyc_strptrcmp(_TA,_TB);
	if (_TC) { goto _TL175;
	}else { goto _TL177;
	}
	_TL177: _TD = x;
	prefix = _TD->tl;
	goto _TL176;
	_TL175: prefix = x;
	_TL176: goto _LL0;
      }
    case 3: 
      _TE = _T3F.C_n;
      _T40 = _TE.val;
      { struct Cyc_List_List * x = _T40;
	_TF = Cyc_Absynpp_gen_clean_cyclone;
	if (! _TF) { goto _TL178;
	}
	_T40 = x;
	goto _LL8;
	_TL178: _T11 = Cyc_Absynpp_use_curr_namespace;
	if (! _T11) { goto _TL17A;
	}
	_T13 = Cyc_List_list_prefix;
	{ long (* _T41)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
			struct Cyc_List_List *) = (long (*)(int (*)(struct _fat_ptr *,
								    struct _fat_ptr *),
							    struct Cyc_List_List *,
							    struct Cyc_List_List *))_T13;
	  _T12 = _T41;
	}_T14 = Cyc_strptrcmp;
	_T15 = x;
	_T16 = Cyc_Absynpp_curr_namespace;
	_T10 = _T12(_T14,_T15,_T16);
	goto _TL17B;
	_TL17A: _T10 = 0;
	_TL17B: match = _T10;
	goto _LL0;
      }
    default: 
      _T17 = _T3F.Abs_n;
      _T40 = _T17.val;
      _LL8: { struct Cyc_List_List * x = _T40;
	_T19 = Cyc_Absynpp_use_curr_namespace;
	if (! _T19) { goto _TL17C;
	}
	_T1B = Cyc_List_list_prefix;
	{ long (* _T41)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
			struct Cyc_List_List *) = (long (*)(int (*)(struct _fat_ptr *,
								    struct _fat_ptr *),
							    struct Cyc_List_List *,
							    struct Cyc_List_List *))_T1B;
	  _T1A = _T41;
	}_T1C = Cyc_strptrcmp;
	_T1D = x;
	_T1E = Cyc_Absynpp_curr_namespace;
	_T18 = _T1A(_T1C,_T1D,_T1E);
	goto _TL17D;
	_TL17C: _T18 = 0;
	_TL17D: match = _T18;
	_T1F = x;
	_T20 = (unsigned int)_T1F;
	if (! _T20) { goto _TL17E;
	}
	_T21 = Cyc_Absynpp_qvar_to_Cids;
	if (! _T21) { goto _TL17E;
	}
	_T22 = x;
	_T23 = _T22->hd;
	_T24 = (struct _fat_ptr *)_T23;
	_T25 = Cyc_Absynpp_nocyc_strptr;
	_T26 = Cyc_strptrcmp(_T24,_T25);
	if (_T26) { goto _TL17E;
	}else { goto _TL180;
	}
	_TL180: _T27 = x;
	prefix = _T27->tl;
	goto _TL17F;
	_TL17E: _T29 = Cyc_Absynpp_add_cyc_prefix;
	if (! _T29) { goto _TL181;
	}
	{ struct Cyc_List_List * _T41 = _cycalloc(sizeof(struct Cyc_List_List));
	  _T41->hd = Cyc_Absynpp_cyc_stringptr;
	  _T41->tl = x;
	  _T2A = (struct Cyc_List_List *)_T41;
	}_T28 = _T2A;
	goto _TL182;
	_TL181: _T28 = x;
	_TL182: prefix = _T28;
	_TL17F: goto _LL0;
      }
    }
    _LL0: ;
  }_T2B = Cyc_Absynpp_qvar_to_Cids;
  if (! _T2B) { goto _TL183;
  }
  _T2C = prefix;
  { struct Cyc_List_List * _T3F = _cycalloc(sizeof(struct Cyc_List_List));
    _T2E = q;
    _T2F = *_T2E;
    _T3F->hd = _T2F.f1;
    _T3F->tl = 0;
    _T2D = (struct Cyc_List_List *)_T3F;
  }_T30 = Cyc_List_append(_T2C,_T2D);
  _T31 = _tag_fat("_",sizeof(char),2U);
  _T32 = Cyc_str_sepstr(_T30,_T31);
  return _T32;
  _TL183: _T33 = match;
  if (! _T33) { goto _TL185;
  }
  _T34 = q;
  _T35 = *_T34;
  _T36 = _T35.f1;
  _T37 = *_T36;
  return _T37;
  _TL185: _T38 = prefix;
  { struct Cyc_List_List * _T3F = _cycalloc(sizeof(struct Cyc_List_List));
    _T3A = q;
    _T3B = *_T3A;
    _T3F->hd = _T3B.f1;
    _T3F->tl = 0;
    _T39 = (struct Cyc_List_List *)_T3F;
  }_T3C = Cyc_List_append(_T38,_T39);
  _T3D = _tag_fat("::",sizeof(char),3U);
  _T3E = Cyc_str_sepstr(_T3C,_T3D);
  return _T3E;
}
struct _fat_ptr Cyc_Absynpp_fullqvar2string(struct _tuple1 * q) {
  struct _tuple1 * _T0;
  struct _tuple1 _T1;
  struct _union_Nmspace_C_n _T2;
  unsigned int _T3;
  struct _union_Nmspace_Rel_n _T4;
  struct _union_Nmspace_C_n _T5;
  struct _union_Nmspace_Abs_n _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct _tuple1 * _T9;
  struct _tuple1 _TA;
  struct Cyc_List_List * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct Cyc_List_List * prefix = 0;
  _T0 = q;
  _T1 = *_T0;
  { union Cyc_Absyn_Nmspace _TE = _T1.f0;
    struct Cyc_List_List * _TF;
    _T2 = _TE.C_n;
    _T3 = _T2.tag;
    switch (_T3) {
    case 4: 
      _TF = 0;
      goto _LL4;
    case 2: 
      _T4 = _TE.Rel_n;
      _TF = _T4.val;
      _LL4: { struct Cyc_List_List * x = _TF;
	prefix = x;
	goto _LL0;
      }
    case 3: 
      _T5 = _TE.C_n;
      _TF = _T5.val;
      { struct Cyc_List_List * x = _TF;
	goto _LL0;
      }
    default: 
      _T6 = _TE.Abs_n;
      _TF = _T6.val;
      { struct Cyc_List_List * x = _TF;
	prefix = x;
	goto _LL0;
      }
    }
    _LL0: ;
  }_T7 = prefix;
  { struct Cyc_List_List * _TE = _cycalloc(sizeof(struct Cyc_List_List));
    _T9 = q;
    _TA = *_T9;
    _TE->hd = _TA.f1;
    _TE->tl = 0;
    _T8 = (struct Cyc_List_List *)_TE;
  }_TB = Cyc_List_append(_T7,_T8);
  _TC = _tag_fat("_",sizeof(char),2U);
  _TD = Cyc_str_sepstr(_TB,_TC);
  return _TD;
}
struct _fat_ptr Cyc_Absynpp_typedef_name2string(struct _tuple1 * v) {
  long _T0;
  struct _fat_ptr _T1;
  long _T2;
  struct _tuple1 * _T3;
  struct _tuple1 _T4;
  struct _union_Nmspace_C_n _T5;
  unsigned int _T6;
  struct _union_Nmspace_Rel_n _T7;
  struct Cyc_List_List * _T8;
  struct _tuple1 * _T9;
  struct _tuple1 _TA;
  struct _fat_ptr * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct _union_Nmspace_C_n _T10;
  struct _union_Nmspace_Abs_n _T11;
  int (* _T12)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
	       struct Cyc_List_List *);
  int (* _T13)(int (*)(void *,void *),struct Cyc_List_List *,struct Cyc_List_List *);
  int (* _T14)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * _T16;
  int _T17;
  struct _tuple1 * _T18;
  struct _tuple1 _T19;
  struct _fat_ptr * _T1A;
  struct _fat_ptr _T1B;
  struct _tuple1 * _T1C;
  struct _tuple1 _T1D;
  struct _fat_ptr * _T1E;
  struct _fat_ptr _T1F;
  _T0 = Cyc_Absynpp_qvar_to_Cids;
  if (! _T0) { goto _TL188;
  }
  _T1 = Cyc_Absynpp_qvar2string(v);
  return _T1;
  _TL188: _T2 = Cyc_Absynpp_use_curr_namespace;
  if (! _T2) { goto _TL18A;
  }
  _T3 = v;
  _T4 = *_T3;
  { union Cyc_Absyn_Nmspace _T20 = _T4.f0;
    struct Cyc_List_List * _T21;
    _T5 = _T20.C_n;
    _T6 = _T5.tag;
    switch (_T6) {
    case 4: 
      goto _LL4;
    case 2: 
      _T7 = _T20.Rel_n;
      _T8 = _T7.val;
      if (_T8 != 0) { goto _TL18D;
      }
      _LL4: _T9 = v;
      _TA = *_T9;
      _TB = _TA.f1;
      _TC = *_TB;
      return _TC;
      _TL18D: _LLA: _TD = _tag_fat("/* bad namespace : */ ",sizeof(char),
				   23U);
      _TE = Cyc_Absynpp_qvar2string(v);
      _TF = Cyc_strconcat(_TD,_TE);
      return _TF;
    case 3: 
      _T10 = _T20.C_n;
      _T21 = _T10.val;
      { struct Cyc_List_List * l = _T21;
	_T21 = l;
	goto _LL8;
      }
    default: 
      _T11 = _T20.Abs_n;
      _T21 = _T11.val;
      _LL8: { struct Cyc_List_List * l = _T21;
	_T13 = Cyc_List_list_cmp;
	{ int (* _T22)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
		       struct Cyc_List_List *) = (int (*)(int (*)(struct _fat_ptr *,
								  struct _fat_ptr *),
							  struct Cyc_List_List *,
							  struct Cyc_List_List *))_T13;
	  _T12 = _T22;
	}_T14 = Cyc_strptrcmp;
	_T15 = l;
	_T16 = Cyc_Absynpp_curr_namespace;
	_T17 = _T12(_T14,_T15,_T16);
	if (_T17 != 0) { goto _TL18F;
	}
	_T18 = v;
	_T19 = *_T18;
	_T1A = _T19.f1;
	_T1B = *_T1A;
	return _T1B;
	_TL18F: goto _LLA;
      }
    }
    ;
  }goto _TL18B;
  _TL18A: _TL18B: _T1C = v;
  _T1D = *_T1C;
  _T1E = _T1D.f1;
  _T1F = *_T1E;
  return _T1F;
}
struct Cyc_PP_Doc * Cyc_Absynpp_qvar2doc(struct _tuple1 * q) {
  struct _fat_ptr _T0;
  struct Cyc_PP_Doc * _T1;
  _T0 = Cyc_Absynpp_qvar2string(q);
  _T1 = Cyc_PP_text(_T0);
  return _T1;
}
struct Cyc_PP_Doc * Cyc_Absynpp_typedef_name2doc(struct _tuple1 * v) {
  struct _fat_ptr _T0;
  struct Cyc_PP_Doc * _T1;
  _T0 = Cyc_Absynpp_typedef_name2string(v);
  _T1 = Cyc_PP_text(_T0);
  return _T1;
}
struct Cyc_PP_Doc * Cyc_Absynpp_qvar2bolddoc(struct _tuple1 * q) {
  int _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  unsigned long _T6;
  int _T7;
  struct Cyc_PP_Doc * _T8;
  struct Cyc_PP_Doc * _T9;
  struct _fat_ptr qs = Cyc_Absynpp_qvar2string(q);
  _T0 = Cyc_PP_tex_output;
  if (! _T0) { goto _TL191;
  }
  _T1 = _tag_fat("\\textbf{",sizeof(char),9U);
  _T2 = qs;
  _T3 = Cyc_strconcat(_T1,_T2);
  _T4 = _tag_fat("}",sizeof(char),2U);
  _T5 = Cyc_strconcat(_T3,_T4);
  _T6 = Cyc_strlen(qs);
  _T7 = (int)_T6;
  _T8 = Cyc_PP_text_width(_T5,_T7);
  return _T8;
  _TL191: _T9 = Cyc_PP_text(qs);
  return _T9;
}
struct Cyc_PP_Doc * Cyc_Absynpp_typedef_name2bolddoc(struct _tuple1 * v) {
  int _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  unsigned long _T6;
  int _T7;
  struct Cyc_PP_Doc * _T8;
  struct Cyc_PP_Doc * _T9;
  struct _fat_ptr vs = Cyc_Absynpp_typedef_name2string(v);
  _T0 = Cyc_PP_tex_output;
  if (! _T0) { goto _TL193;
  }
  _T1 = _tag_fat("\\textbf{",sizeof(char),9U);
  _T2 = vs;
  _T3 = Cyc_strconcat(_T1,_T2);
  _T4 = _tag_fat("}",sizeof(char),2U);
  _T5 = Cyc_strconcat(_T3,_T4);
  _T6 = Cyc_strlen(vs);
  _T7 = (int)_T6;
  _T8 = Cyc_PP_text_width(_T5,_T7);
  return _T8;
  _TL193: _T9 = Cyc_PP_text(vs);
  return _T9;
}
struct Cyc_PP_Doc * Cyc_Absynpp_typ2doc(void * t) {
  struct Cyc_Absyn_Tqual _T0;
  void * _T1;
  struct Cyc_PP_Doc * _T2;
  _T0 = Cyc_Absyn_empty_tqual(0U);
  _T1 = t;
  _T2 = Cyc_Absynpp_tqtd2doc(_T0,_T1,0);
  return _T2;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_offsetof_field_to_doc(void * f) {
  void * _T0;
  struct Cyc_PP_Doc * _T1;
  struct _fat_ptr * _T2;
  _T0 = f;
  { struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct * _T3 = (struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct *)_T0;
    _T2 = _T3->f1;
  }{ struct _fat_ptr * n = _T2;
    _T1 = Cyc_PP_textptr(n);
    return _T1;
  };
}
int Cyc_Absynpp_exp_prec(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  enum Cyc_Absyn_Primop _T3;
  int _T4;
  int _T5;
  int _T6;
  _T0 = e;
  { void * _T7 = _T0->r;
    struct Cyc_Absyn_Exp * _T8;
    enum Cyc_Absyn_Primop _T9;
    _T1 = (int *)_T7;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      goto _LL4;
    case 1: 
      _LL4: return 10000;
    case 3: 
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _TA = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T7;
	_T9 = _TA->f1;
      }{ enum Cyc_Absyn_Primop p = _T9;
	_T3 = p;
	_T4 = (int)_T3;
	switch (_T4) {
	case Cyc_Absyn_Plus: 
	  return 100;
	case Cyc_Absyn_Times: 
	  return 110;
	case Cyc_Absyn_Minus: 
	  return 100;
	case Cyc_Absyn_Div: 
	  goto _LL61;
	case Cyc_Absyn_UDiv: 
	  _LL61: goto _LL63;
	case Cyc_Absyn_Mod: 
	  _LL63: goto _LL65;
	case Cyc_Absyn_UMod: 
	  _LL65: return 110;
	case Cyc_Absyn_Eq: 
	  goto _LL69;
	case Cyc_Absyn_Neq: 
	  _LL69: return 70;
	case Cyc_Absyn_Gt: 
	  goto _LL6D;
	case Cyc_Absyn_Lt: 
	  _LL6D: goto _LL6F;
	case Cyc_Absyn_Gte: 
	  _LL6F: goto _LL71;
	case Cyc_Absyn_Lte: 
	  _LL71: goto _LL73;
	case Cyc_Absyn_UGt: 
	  _LL73: goto _LL75;
	case Cyc_Absyn_ULt: 
	  _LL75: goto _LL77;
	case Cyc_Absyn_UGte: 
	  _LL77: goto _LL79;
	case Cyc_Absyn_ULte: 
	  _LL79: return 80;
	case Cyc_Absyn_Not: 
	  goto _LL7D;
	case Cyc_Absyn_Bitnot: 
	  _LL7D: return 130;
	case Cyc_Absyn_Bitand: 
	  return 60;
	case Cyc_Absyn_Bitor: 
	  return 40;
	case Cyc_Absyn_Bitxor: 
	  return 50;
	case Cyc_Absyn_Bitlshift: 
	  return 90;
	case Cyc_Absyn_Bitlrshift: 
	  return 80;
	case Cyc_Absyn_Numelts: 
	  return 140;
	case Cyc_Absyn_Tagof: 
	  return 140;
	default: 
	  return 140;
	}
	;
      }
    case 4: 
      return 20;
    case 5: 
      return 130;
    case 6: 
      return 30;
    case 7: 
      return 35;
    case 8: 
      return 30;
    case 9: 
      _T5 = - 10;
      return _T5;
    case 10: 
      return 140;
    case 2: 
      return 140;
    case 11: 
      return 130;
    case 12: 
      { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _TA = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T7;
	_T8 = _TA->f1;
      }{ struct Cyc_Absyn_Exp * e2 = _T8;
	_T8 = e2;
	goto _LL1C;
      }
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _TA = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T7;
	_T8 = _TA->f1;
      }_LL1C: { struct Cyc_Absyn_Exp * e2 = _T8;
	_T6 = Cyc_Absynpp_exp_prec(e2);
	return _T6;
      }
    case 14: 
      return 120;
    case 16: 
      return 15;
    case 15: 
      goto _LL24;
    case 17: 
      _LL24: goto _LL26;
    case 18: 
      _LL26: goto _LL28;
    case 38: 
      _LL28: goto _LL2A;
    case 39: 
      _LL2A: goto _LL2C;
    case 37: 
      _LL2C: goto _LL2E;
    case 19: 
      _LL2E: goto _LL30;
    case 20: 
      _LL30: goto _LL32;
    case 41: 
      _LL32: goto _LL34;
    case 42: 
      _LL34: goto _LL36;
    case 40: 
      _LL36: return 130;
    case 21: 
      goto _LL3A;
    case 22: 
      _LL3A: goto _LL3C;
    case 23: 
      _LL3C: return 140;
    case 24: 
      goto _LL40;
    case 25: 
      _LL40: goto _LL42;
    case 26: 
      _LL42: goto _LL44;
    case 27: 
      _LL44: goto _LL46;
    case 28: 
      _LL46: goto _LL48;
    case 29: 
      _LL48: goto _LL4A;
    case 30: 
      _LL4A: goto _LL4C;
    case 31: 
      _LL4C: goto _LL4E;
    case 32: 
      _LL4E: goto _LL50;
    case 33: 
      _LL50: goto _LL52;
    case 34: 
      _LL52: goto _LL54;
    case 35: 
      _LL54: return 140;
    default: 
      return 10000;
    }
    ;
  }
}
 struct _tuple21 {
  struct _fat_ptr f0;
  struct Cyc_Absyn_Exp * f1;
};
static struct Cyc_PP_Doc * Cyc_Absynpp_asm_iolist_doc_in(struct Cyc_List_List * o) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_PP_Doc * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  unsigned int _TB;
  struct Cyc_PP_Doc * _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct Cyc_PP_Doc * _TF;
  struct Cyc_PP_Doc * s = Cyc_PP_nil_doc();
  _TL197: _T0 = o;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TL198;
  }else { goto _TL199;
  }
  _TL198: _T2 = o;
  _T3 = _T2->hd;
  { struct _tuple21 * _T10 = (struct _tuple21 *)_T3;
    struct Cyc_Absyn_Exp * _T11;
    struct _fat_ptr _T12;
    { struct _tuple21 _T13 = *_T10;
      _T12 = _T13.f0;
      _T11 = _T13.f1;
    }{ struct _fat_ptr c = _T12;
      struct Cyc_Absyn_Exp * e = _T11;
      { struct Cyc_PP_Doc * _T13[6];
	_T13[0] = s;
	_T5 = _tag_fat("\"",sizeof(char),2U);
	_T13[1] = Cyc_PP_text(_T5);
	_T13[2] = Cyc_PP_text(c);
	_T6 = _tag_fat("\" (",sizeof(char),4U);
	_T13[3] = Cyc_PP_text(_T6);
	_T13[4] = Cyc_Absynpp_exp2doc(e);
	_T7 = _tag_fat(")",sizeof(char),2U);
	_T13[5] = Cyc_PP_text(_T7);
	_T8 = _tag_fat(_T13,sizeof(struct Cyc_PP_Doc *),6);
	_T4 = Cyc_PP_cat(_T8);
      }s = _T4;
      _T9 = o;
      o = _T9->tl;
      _TA = o;
      _TB = (unsigned int)_TA;
      if (! _TB) { goto _TL19A;
      }
      { struct Cyc_PP_Doc * _T13[2];
	_T13[0] = s;
	_TD = _tag_fat(",",sizeof(char),2U);
	_T13[1] = Cyc_PP_text(_TD);
	_TE = _tag_fat(_T13,sizeof(struct Cyc_PP_Doc *),2);
	_TC = Cyc_PP_cat(_TE);
      }s = _TC;
      goto _TL19B;
      _TL19A: _TL19B: ;
    }
  }goto _TL197;
  _TL199: _TF = s;
  return _TF;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_asm_iolist_doc(struct Cyc_List_List * o,
						      struct Cyc_List_List * i,
						      struct Cyc_List_List * cl) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_PP_Doc * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct Cyc_List_List * _T5;
  unsigned int _T6;
  struct Cyc_List_List * _T7;
  unsigned int _T8;
  struct Cyc_PP_Doc * _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct Cyc_PP_Doc * _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct Cyc_List_List * _TF;
  unsigned int _T10;
  int _T11;
  struct Cyc_List_List * _T12;
  unsigned int _T13;
  int _T14;
  struct Cyc_List_List * _T15;
  unsigned int _T16;
  struct Cyc_PP_Doc * _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_PP_Doc * _T1C;
  struct _fat_ptr _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  struct _fat_ptr * _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct _fat_ptr _T23;
  struct Cyc_List_List * _T24;
  struct Cyc_List_List * _T25;
  unsigned int _T26;
  struct Cyc_PP_Doc * _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  struct Cyc_PP_Doc * _T2A;
  struct Cyc_PP_Doc * s = Cyc_PP_nil_doc();
  _T0 = o;
  _T1 = (unsigned int)_T0;
  if (! _T1) { goto _TL19C;
  }
  { struct Cyc_PP_Doc * _T2B[2];
    _T3 = _tag_fat(": ",sizeof(char),3U);
    _T2B[0] = Cyc_PP_text(_T3);
    _T2B[1] = Cyc_Absynpp_asm_iolist_doc_in(o);
    _T4 = _tag_fat(_T2B,sizeof(struct Cyc_PP_Doc *),2);
    _T2 = Cyc_PP_cat(_T4);
  }s = _T2;
  goto _TL19D;
  _TL19C: _TL19D: _T5 = i;
  _T6 = (unsigned int)_T5;
  if (! _T6) { goto _TL19E;
  }
  _T7 = o;
  _T8 = (unsigned int)_T7;
  if (_T8) { goto _TL1A0;
  }else { goto _TL1A2;
  }
  _TL1A2: { struct Cyc_PP_Doc * _T2B[3];
    _T2B[0] = s;
    _TA = _tag_fat(": : ",sizeof(char),5U);
    _T2B[1] = Cyc_PP_text(_TA);
    _T2B[2] = Cyc_Absynpp_asm_iolist_doc_in(i);
    _TB = _tag_fat(_T2B,sizeof(struct Cyc_PP_Doc *),3);
    _T9 = Cyc_PP_cat(_TB);
  }s = _T9;
  goto _TL1A1;
  _TL1A0: { struct Cyc_PP_Doc * _T2B[3];
    _T2B[0] = s;
    _TD = _tag_fat(" : ",sizeof(char),4U);
    _T2B[1] = Cyc_PP_text(_TD);
    _T2B[2] = Cyc_Absynpp_asm_iolist_doc_in(i);
    _TE = _tag_fat(_T2B,sizeof(struct Cyc_PP_Doc *),3);
    _TC = Cyc_PP_cat(_TE);
  }s = _TC;
  _TL1A1: goto _TL19F;
  _TL19E: _TL19F: _TF = cl;
  _T10 = (unsigned int)_TF;
  if (! _T10) { goto _TL1A3;
  }
  _T12 = i;
  _T13 = (unsigned int)_T12;
  if (! _T13) { goto _TL1A5;
  }
  _T11 = 2;
  goto _TL1A6;
  _TL1A5: _T15 = o;
  _T16 = (unsigned int)_T15;
  if (! _T16) { goto _TL1A7;
  }
  _T14 = 1;
  goto _TL1A8;
  _TL1A7: _T14 = 0;
  _TL1A8: _T11 = _T14;
  _TL1A6: { int ncol = _T11;
    { struct Cyc_PP_Doc * _T2B[2];
      _T2B[0] = s;
      if (ncol != 0) { goto _TL1A9;
      }
      _T18 = _tag_fat(": : :",sizeof(char),6U);
      _T2B[1] = Cyc_PP_text(_T18);
      goto _TL1AA;
      _TL1A9: if (ncol != 1) { goto _TL1AB;
      }
      _T19 = _tag_fat(" : : ",sizeof(char),6U);
      _T2B[1] = Cyc_PP_text(_T19);
      goto _TL1AC;
      _TL1AB: _T1A = _tag_fat(" : ",sizeof(char),4U);
      _T2B[1] = Cyc_PP_text(_T1A);
      _TL1AC: _TL1AA: _T1B = _tag_fat(_T2B,sizeof(struct Cyc_PP_Doc *),2);
      _T17 = Cyc_PP_cat(_T1B);
    }s = _T17;
    _TL1AD: if (cl != 0) { goto _TL1AE;
    }else { goto _TL1AF;
    }
    _TL1AE: { struct Cyc_PP_Doc * _T2B[4];
      _T2B[0] = s;
      _T1D = _tag_fat("\"",sizeof(char),2U);
      _T2B[1] = Cyc_PP_text(_T1D);
      _T1E = cl;
      _T1F = _T1E->hd;
      _T20 = (struct _fat_ptr *)_T1F;
      _T21 = *_T20;
      _T2B[2] = Cyc_PP_text(_T21);
      _T22 = _tag_fat("\"",sizeof(char),2U);
      _T2B[3] = Cyc_PP_text(_T22);
      _T23 = _tag_fat(_T2B,sizeof(struct Cyc_PP_Doc *),4);
      _T1C = Cyc_PP_cat(_T23);
    }s = _T1C;
    _T24 = cl;
    cl = _T24->tl;
    _T25 = cl;
    _T26 = (unsigned int)_T25;
    if (! _T26) { goto _TL1B0;
    }
    { struct Cyc_PP_Doc * _T2B[2];
      _T2B[0] = s;
      _T28 = _tag_fat(", ",sizeof(char),3U);
      _T2B[1] = Cyc_PP_text(_T28);
      _T29 = _tag_fat(_T2B,sizeof(struct Cyc_PP_Doc *),2);
      _T27 = Cyc_PP_cat(_T29);
    }s = _T27;
    goto _TL1B1;
    _TL1B0: _TL1B1: goto _TL1AD;
    _TL1AF: ;
  }goto _TL1A4;
  _TL1A3: _TL1A4: _T2A = s;
  return _T2A;
}
char Cyc_Absynpp_Implicit_region[16U] = "Implicit_region";
 struct Cyc_Absynpp_Implicit_region_exn_struct {
  char * tag;
};
struct Cyc_Absynpp_Implicit_region_exn_struct Cyc_Absynpp_Implicit_region_val = {Cyc_Absynpp_Implicit_region};
static long Cyc_Absynpp_may_contain_implicit_regions(long * res,void * t) {
  struct Cyc_Absyn_Kind * _T0;
  struct Cyc_Absyn_Kind * _T1;
  struct Cyc_Absyn_Kind * _T2;
  int * _T3;
  int _T4;
  long _T5;
  long * _T6;
  struct Cyc_Absynpp_Implicit_region_exn_struct * _T7;
  struct Cyc_Absynpp_Implicit_region_exn_struct * _T8;
  _T0 = Cyc_Tcutil_type_kind(t);
  _T1 = &Cyc_Kinds_ek;
  _T2 = (struct Cyc_Absyn_Kind *)_T1;
  if (_T0 != _T2) { goto _TL1B2;
  }
  { void * _T9 = Cyc_Absyn_compress(t);
    struct Cyc_Absyn_Tvar * _TA;
    _T3 = (int *)_T9;
    _T4 = *_T3;
    if (_T4 != 2) { goto _TL1B4;
    }
    { struct Cyc_Absyn_VarType_Absyn_Type_struct * _TB = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T9;
      _TA = _TB->f1;
    }{ struct Cyc_Absyn_Tvar * tv = _TA;
      _T5 = Cyc_Tcutil_is_temp_tvar(tv);
      if (! _T5) { goto _TL1B6;
      }
      _T6 = _check_null(res);
      *_T6 = 1;
      _T7 = &Cyc_Absynpp_Implicit_region_val;
      _T8 = (struct Cyc_Absynpp_Implicit_region_exn_struct *)_T7;
      _throw(_T8);
      goto _TL1B7;
      _TL1B6: _TL1B7: goto _LL0;
    }_TL1B4: goto _LL0;
    _LL0: ;
  }goto _TL1B3;
  _TL1B2: _TL1B3: return 1;
}
static long Cyc_Absynpp_is_clean_cast(void * nt,struct Cyc_Absyn_Exp * e) {
  struct _tuple0 _T0;
  struct Cyc_Absyn_Exp * _T1;
  void * _T2;
  int * _T3;
  int _T4;
  void * _T5;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6;
  void * _T7;
  int * _T8;
  int _T9;
  void * _TA;
  void * _TB;
  int * _TC;
  int _TD;
  void * _TE;
  struct Cyc_Absyn_PtrInfo _TF;
  struct Cyc_Absyn_PtrAtts _T10;
  int * _T11;
  unsigned int _T12;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T13;
  void * _T14;
  int * _T15;
  int _T16;
  struct Cyc_Absyn_Exp * _T17;
  int * _T18;
  int _T19;
  struct _handler_cons * _T1A;
  int _T1B;
  void (* _T1C)(long (*)(long *,void *),long *,void *);
  void (* _T1D)(long (*)(void *,void *),void *,void *);
  long * _T1E;
  void * _T1F;
  void * _T20;
  struct Cyc_Absynpp_Implicit_region_exn_struct * _T21;
  char * _T22;
  char * _T23;
  { struct _tuple0 _T24;
    _T24.f0 = nt;
    _T1 = e;
    _T24.f1 = _T1->topt;
    _T0 = _T24;
  }{ struct _tuple0 _T24 = _T0;
    struct Cyc_Absyn_PtrInfo _T25;
    _T2 = _T24.f0;
    _T3 = (int *)_T2;
    _T4 = *_T3;
    if (_T4 != 0) { goto _TL1B8;
    }
    _T5 = _T24.f0;
    _T6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5;
    _T7 = _T6->f1;
    _T8 = (int *)_T7;
    _T9 = *_T8;
    if (_T9 != 1) { goto _TL1BA;
    }
    _TA = _T24.f1;
    if (_TA == 0) { goto _TL1BC;
    }
    _TB = _T24.f1;
    _TC = (int *)_TB;
    _TD = *_TC;
    if (_TD != 4) { goto _TL1BE;
    }
    _TE = _T24.f1;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T26 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TE;
      _T25 = _T26->f1;
    }{ struct Cyc_Absyn_PtrInfo p1 = _T25;
      _TF = p1;
      _T10 = _TF.ptr_atts;
      { void * _T26 = _T10.bounds;
	_T11 = (int *)_T26;
	_T12 = *_T11;
	switch (_T12) {
	case 3: 
	  goto _LL9;
	case 0: 
	  _T13 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T26;
	  _T14 = _T13->f1;
	  _T15 = (int *)_T14;
	  _T16 = *_T15;
	  if (_T16 != 14) { goto _TL1C1;
	  }
	  _LL9: return 0;
	  _TL1C1: goto _LLA;
	default: 
	  _LLA: return 1;
	}
	;
      }
    }goto _TL1BF;
    _TL1BE: goto _LL3;
    _TL1BF: goto _TL1BD;
    _TL1BC: goto _LL3;
    _TL1BD: goto _TL1BB;
    _TL1BA: goto _LL3;
    _TL1BB: goto _TL1B9;
    _TL1B8: _LL3: _T17 = e;
    { void * _T26 = _T17->r;
      _T18 = (int *)_T26;
      _T19 = *_T18;
      if (_T19 != 12) { goto _TL1C3;
      }
      return 0;
      _TL1C3: { long br = 0;
	struct _handler_cons _T27;
	_T1A = &_T27;
	_push_handler(_T1A);
	{ int _T28 = 0;
	  _T1B = setjmp(_T27.handler);
	  if (! _T1B) { goto _TL1C5;
	  }
	  _T28 = 1;
	  goto _TL1C6;
	  _TL1C5: _TL1C6: if (_T28) { goto _TL1C7;
	  }else { goto _TL1C9;
	  }
	  _TL1C9: _T1D = Cyc_Absyn_visit_type;
	  { void (* _T29)(long (*)(long *,void *),long *,void *) = (void (*)(long (*)(long *,
										      void *),
									     long *,
									     void *))_T1D;
	    _T1C = _T29;
	  }_T1E = &br;
	  _T1F = nt;
	  _T1C(Cyc_Absynpp_may_contain_implicit_regions,_T1E,_T1F);
	  { long _T29 = 1;
	    _npop_handler(0);
	    return _T29;
	  }_pop_handler();
	  goto _TL1C8;
	  _TL1C7: _T20 = Cyc_Core_get_exn_thrown();
	  { void * _T29 = (void *)_T20;
	    void * _T2A;
	    _T21 = (struct Cyc_Absynpp_Implicit_region_exn_struct *)_T29;
	    _T22 = _T21->tag;
	    _T23 = Cyc_Absynpp_Implicit_region;
	    if (_T22 != _T23) { goto _TL1CA;
	    }
	    return 0;
	    _TL1CA: _T2A = _T29;
	    { void * exn = _T2A;
	      _rethrow(exn);
	    };
	  }_TL1C8: ;
	}
      };
    }_TL1B9: ;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_exp2doc_prec(int inprec,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct _tuple1 * _T4;
  struct Cyc_PP_Doc * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct Cyc_PP_Doc * _TA;
  struct _fat_ptr _TB;
  struct Cyc_Absyn_PrimopOpt * _TC;
  enum Cyc_Absyn_Primop _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  enum Cyc_Absyn_Incrementor _T10;
  int _T11;
  struct Cyc_PP_Doc * _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct Cyc_PP_Doc * _T15;
  struct _fat_ptr _T16;
  struct _fat_ptr _T17;
  struct Cyc_PP_Doc * _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct Cyc_PP_Doc * _T1B;
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  struct Cyc_PP_Doc * _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  struct Cyc_PP_Doc * _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  struct Cyc_PP_Doc * _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  struct Cyc_PP_Doc * _T28;
  int _T29;
  struct Cyc_Absyn_Exp * _T2A;
  struct _fat_ptr _T2B;
  int _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  struct _fat_ptr _T2E;
  struct Cyc_PP_Doc * _T2F;
  struct _fat_ptr _T30;
  struct _fat_ptr _T31;
  struct _fat_ptr _T32;
  struct Cyc_PP_Doc * _T33;
  struct _fat_ptr _T34;
  struct _fat_ptr _T35;
  long _T36;
  struct Cyc_PP_Doc * _T37;
  struct _fat_ptr _T38;
  struct _fat_ptr _T39;
  struct _fat_ptr _T3A;
  struct _fat_ptr _T3B;
  long _T3C;
  long _T3D;
  struct Cyc_PP_Doc * _T3E;
  struct _fat_ptr _T3F;
  struct _fat_ptr _T40;
  struct _fat_ptr _T41;
  struct _fat_ptr _T42;
  void * _T43;
  long _T44;
  long _T45;
  long _T46;
  struct Cyc_PP_Doc * _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  struct _fat_ptr _T4A;
  struct Cyc_PP_Doc * _T4B;
  struct _fat_ptr _T4C;
  struct Cyc_PP_Doc * _T4D;
  struct _fat_ptr _T4E;
  struct _fat_ptr _T4F;
  struct Cyc_Absyn_Exp * _T50;
  unsigned int _T51;
  struct Cyc_PP_Doc * _T52;
  struct _fat_ptr _T53;
  struct _fat_ptr _T54;
  struct _fat_ptr _T55;
  struct Cyc_PP_Doc * _T56;
  struct _fat_ptr _T57;
  struct _fat_ptr _T58;
  struct _fat_ptr _T59;
  struct Cyc_Absyn_Exp * _T5A;
  unsigned int _T5B;
  struct Cyc_PP_Doc * _T5C;
  struct _fat_ptr _T5D;
  struct _fat_ptr _T5E;
  struct Cyc_PP_Doc * _T5F;
  struct _fat_ptr _T60;
  struct _fat_ptr _T61;
  struct _fat_ptr _T62;
  void * _T63;
  struct Cyc_PP_Doc * _T64;
  struct _fat_ptr _T65;
  struct _fat_ptr _T66;
  struct _fat_ptr _T67;
  struct Cyc_PP_Doc * _T68;
  struct _fat_ptr _T69;
  struct _fat_ptr _T6A;
  struct _fat_ptr _T6B;
  long _T6C;
  struct Cyc_PP_Doc * _T6D;
  struct _fat_ptr _T6E;
  struct _fat_ptr _T6F;
  struct _fat_ptr _T70;
  struct Cyc_PP_Doc * _T71;
  struct _fat_ptr _T72;
  struct _fat_ptr _T73;
  struct _fat_ptr _T74;
  struct Cyc_PP_Doc * _T75;
  struct _fat_ptr _T76;
  struct _fat_ptr _T77;
  struct _fat_ptr _T78;
  struct Cyc_PP_Doc * _T79;
  struct _fat_ptr _T7A;
  struct _fat_ptr _T7B;
  struct _fat_ptr _T7C;
  void * _T7D;
  struct Cyc_PP_Doc * _T7E;
  struct _fat_ptr _T7F;
  struct _fat_ptr _T80;
  struct _fat_ptr _T81;
  struct _fat_ptr _T82;
  long _T83;
  struct Cyc_PP_Doc * _T84;
  struct _fat_ptr _T85;
  struct _fat_ptr _T86;
  struct Cyc_PP_Doc * _T87;
  struct _fat_ptr _T88;
  struct _fat_ptr _T89;
  struct _fat_ptr _T8A;
  struct _fat_ptr _T8B;
  struct _fat_ptr _T8C;
  struct Cyc_PP_Doc * _T8D;
  struct _fat_ptr _T8E;
  struct _fat_ptr _T8F;
  struct _fat_ptr _T90;
  struct _fat_ptr _T91;
  void * _T92;
  struct Cyc_PP_Doc * _T93;
  struct _fat_ptr _T94;
  struct _fat_ptr _T95;
  struct _fat_ptr _T96;
  struct Cyc_List_List * (* _T97)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T98)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T99;
  struct Cyc_List_List * _T9A;
  struct _fat_ptr _T9B;
  struct _fat_ptr _T9C;
  struct Cyc_PP_Doc * _T9D;
  struct _fat_ptr _T9E;
  struct _fat_ptr _T9F;
  struct Cyc_PP_Doc * _TA0;
  struct _fat_ptr _TA1;
  struct _fat_ptr _TA2;
  struct Cyc_PP_Doc * _TA3;
  struct _fat_ptr _TA4;
  struct _fat_ptr _TA5;
  struct Cyc_PP_Doc * _TA6;
  struct _fat_ptr _TA7;
  struct _fat_ptr _TA8;
  struct _fat_ptr _TA9;
  struct Cyc_PP_Doc * _TAA;
  struct _fat_ptr _TAB;
  struct _tuple9 * _TAC;
  struct _tuple9 _TAD;
  void * _TAE;
  struct _fat_ptr _TAF;
  struct _fat_ptr _TB0;
  struct Cyc_List_List * (* _TB1)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TB2)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TB3)(struct _tuple19 *);
  struct Cyc_List_List * _TB4;
  struct Cyc_List_List * _TB5;
  struct _fat_ptr _TB6;
  struct _fat_ptr _TB7;
  struct Cyc_List_List * (* _TB8)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TB9)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TBA)(struct _tuple19 *);
  struct Cyc_List_List * _TBB;
  struct Cyc_List_List * _TBC;
  struct Cyc_PP_Doc * _TBD;
  struct _fat_ptr _TBE;
  struct Cyc_Absyn_Vardecl * _TBF;
  struct _tuple1 * _TC0;
  struct _tuple1 _TC1;
  struct _fat_ptr * _TC2;
  struct _fat_ptr _TC3;
  struct _fat_ptr _TC4;
  struct _fat_ptr _TC5;
  struct _fat_ptr _TC6;
  void * _TC7;
  struct Cyc_PP_Doc * _TC8;
  struct _fat_ptr _TC9;
  struct _fat_ptr _TCA;
  struct _fat_ptr _TCB;
  struct _fat_ptr _TCC;
  struct Cyc_List_List * (* _TCD)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TCE)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TCF)(struct _tuple19 *);
  struct Cyc_List_List * _TD0;
  struct Cyc_PP_Doc * _TD1;
  struct _fat_ptr _TD2;
  struct Cyc_List_List * _TD3;
  struct _fat_ptr _TD4;
  long _TD5;
  struct Cyc_PP_Doc * _TD6;
  struct _fat_ptr _TD7;
  struct Cyc_List_List * (* _TD8)(struct Cyc_Absyn_Exp * (*)(struct _tuple19 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TD9)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Exp * (* _TDA)(struct _tuple19 *);
  void * (* _TDB)(struct _tuple0 *);
  struct Cyc_List_List * _TDC;
  struct Cyc_List_List * _TDD;
  struct _fat_ptr _TDE;
  struct _fat_ptr _TDF;
  struct _fat_ptr _TE0;
  struct Cyc_List_List * (* _TE1)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TE2)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TE3)(struct _tuple19 *);
  struct Cyc_List_List * _TE4;
  struct Cyc_List_List * _TE5;
  struct Cyc_PP_Doc * _TE6;
  struct Cyc_Absyn_Datatypefield * _TE7;
  struct _tuple1 * _TE8;
  struct _fat_ptr _TE9;
  struct _fat_ptr _TEA;
  struct _fat_ptr _TEB;
  struct Cyc_List_List * (* _TEC)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Exp *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TED)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TEE)(struct Cyc_Absyn_Exp *);
  struct Cyc_List_List * _TEF;
  struct Cyc_List_List * _TF0;
  struct _fat_ptr _TF1;
  struct Cyc_Absyn_Enumfield * _TF2;
  struct _tuple1 * _TF3;
  struct Cyc_Absyn_MallocInfo _TF4;
  struct Cyc_Absyn_MallocInfo _TF5;
  struct Cyc_Absyn_MallocInfo _TF6;
  struct Cyc_Absyn_MallocInfo _TF7;
  struct Cyc_Absyn_MallocInfo _TF8;
  struct Cyc_Absyn_MallocInfo _TF9;
  enum Cyc_Absyn_MallocKind _TFA;
  int _TFB;
  void * * _TFC;
  void * _TFD;
  struct Cyc_PP_Doc * _TFE;
  struct _fat_ptr _TFF;
  struct _fat_ptr _T100;
  struct _fat_ptr _T101;
  struct _fat_ptr _T102;
  struct Cyc_PP_Doc * _T103;
  struct _fat_ptr _T104;
  struct _fat_ptr _T105;
  struct Cyc_PP_Doc * _T106;
  struct _fat_ptr _T107;
  struct _fat_ptr _T108;
  struct _fat_ptr _T109;
  struct _fat_ptr _T10A;
  struct _fat_ptr _T10B;
  struct _fat_ptr _T10C;
  struct _fat_ptr _T10D;
  void * * _T10E;
  unsigned int _T10F;
  int (* _T110)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T111)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T112;
  struct _fat_ptr _T113;
  struct Cyc_PP_Doc * _T114;
  struct _fat_ptr _T115;
  struct _fat_ptr _T116;
  enum Cyc_Absyn_MallocKind _T117;
  int _T118;
  long _T119;
  struct Cyc_PP_Doc * _T11A;
  struct Cyc_PP_Doc * _T11B;
  struct _fat_ptr _T11C;
  struct _fat_ptr _T11D;
  struct _fat_ptr _T11E;
  struct _fat_ptr _T11F;
  struct _fat_ptr _T120;
  struct _fat_ptr _T121;
  struct Cyc_PP_Doc * _T122;
  struct _fat_ptr _T123;
  struct _fat_ptr _T124;
  struct _fat_ptr _T125;
  struct Cyc_List_List * (* _T126)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
				   struct Cyc_List_List *);
  struct Cyc_List_List * (* _T127)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T128)(struct _tuple19 *);
  struct Cyc_List_List * _T129;
  struct Cyc_List_List * _T12A;
  struct Cyc_PP_Doc * _T12B;
  struct _fat_ptr _T12C;
  struct Cyc_PP_Doc * _T12D;
  struct _fat_ptr _T12E;
  struct _fat_ptr _T12F;
  struct Cyc_PP_Doc * _T130;
  struct _fat_ptr _T131;
  struct _fat_ptr _T132;
  struct _fat_ptr _T133;
  struct Cyc_PP_Doc * _T134;
  int myprec = Cyc_Absynpp_exp_prec(e);
  struct Cyc_PP_Doc * s;
  _T0 = e;
  { void * _T135 = _T0->r;
    struct Cyc_Absyn_Stmt * _T136;
    struct Cyc_Core_Opt * _T137;
    struct Cyc_Absyn_Exp * _T138;
    void * * _T139;
    enum Cyc_Absyn_MallocKind _T13A;
    struct Cyc_Absyn_Enumfield * _T13B;
    struct Cyc_Absyn_Datatypefield * _T13C;
    struct _tuple1 * _T13D;
    struct _fat_ptr * _T13E;
    struct Cyc_List_List * _T13F;
    enum Cyc_Absyn_Coercion _T140;
    long _T141;
    struct Cyc_List_List * _T142;
    struct Cyc_Absyn_Exp * _T143;
    enum Cyc_Absyn_Incrementor _T144;
    struct Cyc_Absyn_Exp * _T145;
    struct Cyc_Absyn_PrimopOpt * _T146;
    enum Cyc_Absyn_Primop _T147;
    struct _fat_ptr _T148;
    void * _T149;
    union Cyc_Absyn_Cnst _T14A;
    _T1 = (int *)_T135;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      { struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T135;
	_T14A = _T14B->f1;
      }{ union Cyc_Absyn_Cnst c = _T14A;
	s = Cyc_Absynpp_cnst2doc(c);
	goto _LL0;
      }
    case 1: 
      { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T135;
	_T3 = _T14B->f1;
	_T149 = (void *)_T3;
      }{ void * b = _T149;
	_T4 = Cyc_Absyn_binding2qvar(b);
	s = Cyc_Absynpp_qvar2doc(_T4);
	goto _LL0;
      }
    case 2: 
      { struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct *)_T135;
	_T148 = _T14B->f1;
      }{ struct _fat_ptr p = _T148;
	{ struct Cyc_PP_Doc * _T14B[4];
	  _T6 = _tag_fat("__cyclone_pragma__",sizeof(char),19U);
	  _T14B[0] = Cyc_PP_text(_T6);
	  _T7 = _tag_fat("(",sizeof(char),2U);
	  _T14B[1] = Cyc_PP_text(_T7);
	  _T14B[2] = Cyc_PP_text(p);
	  _T8 = _tag_fat(")",sizeof(char),2U);
	  _T14B[3] = Cyc_PP_text(_T8);
	  _T9 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),4);
	  _T5 = Cyc_PP_cat(_T9);
	}s = _T5;
	goto _LL0;
      }
    case 3: 
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T135;
	_T147 = _T14B->f1;
	_T149 = _T14B->f2;
      }{ enum Cyc_Absyn_Primop p = _T147;
	struct Cyc_List_List * es = _T149;
	s = Cyc_Absynpp_primapp2doc(myprec,p,es);
	goto _LL0;
      }
    case 4: 
      { struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T146 = _T14B->f2;
	_T145 = _T14B->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct Cyc_Absyn_PrimopOpt * popt = _T146;
	struct Cyc_Absyn_Exp * e2 = _T145;
	{ struct Cyc_PP_Doc * _T14B[5];
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _TB = _tag_fat(" ",sizeof(char),2U);
	  _T14B[1] = Cyc_PP_text(_TB);
	  if (popt != 0) { goto _TL1CD;
	  }
	  _T14B[2] = Cyc_PP_nil_doc();
	  goto _TL1CE;
	  _TL1CD: _TC = popt;
	  _TD = _TC->v;
	  _T14B[2] = Cyc_Absynpp_prim2doc(_TD);
	  _TL1CE: _TE = _tag_fat("= ",sizeof(char),3U);
	  _T14B[3] = Cyc_PP_text(_TE);
	  _T14B[4] = Cyc_Absynpp_exp2doc_prec(myprec,e2);
	  _TF = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),5);
	  _TA = Cyc_PP_cat(_TF);
	}s = _TA;
	goto _LL0;
      }
    case 5: 
      { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T144 = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e2 = _T149;
	enum Cyc_Absyn_Incrementor i = _T144;
	struct Cyc_PP_Doc * es = Cyc_Absynpp_exp2doc_prec(myprec,e2);
	_T10 = i;
	_T11 = (int)_T10;
	switch (_T11) {
	case Cyc_Absyn_PreInc: 
	  { struct Cyc_PP_Doc * _T14B[2];
	    _T13 = _tag_fat("++",sizeof(char),3U);
	    _T14B[0] = Cyc_PP_text(_T13);
	    _T14B[1] = es;
	    _T14 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	    _T12 = Cyc_PP_cat(_T14);
	  }s = _T12;
	  goto _LL57;
	case Cyc_Absyn_PreDec: 
	  { struct Cyc_PP_Doc * _T14B[2];
	    _T16 = _tag_fat("--",sizeof(char),3U);
	    _T14B[0] = Cyc_PP_text(_T16);
	    _T14B[1] = es;
	    _T17 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	    _T15 = Cyc_PP_cat(_T17);
	  }s = _T15;
	  goto _LL57;
	case Cyc_Absyn_PostInc: 
	  { struct Cyc_PP_Doc * _T14B[2];
	    _T14B[0] = es;
	    _T19 = _tag_fat("++",sizeof(char),3U);
	    _T14B[1] = Cyc_PP_text(_T19);
	    _T1A = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	    _T18 = Cyc_PP_cat(_T1A);
	  }s = _T18;
	  goto _LL57;
	case Cyc_Absyn_PostDec: 
	  goto _LL61;
	default: 
	  _LL61: { struct Cyc_PP_Doc * _T14B[2];
	    _T14B[0] = es;
	    _T1C = _tag_fat("--",sizeof(char),3U);
	    _T14B[1] = Cyc_PP_text(_T1C);
	    _T1D = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	    _T1B = Cyc_PP_cat(_T1D);
	  }s = _T1B;
	  goto _LL57;
	}
	_LL57: goto _LL0;
      }
    case 6: 
      { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T145 = _T14B->f2;
	_T143 = _T14B->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct Cyc_Absyn_Exp * e2 = _T145;
	struct Cyc_Absyn_Exp * e3 = _T143;
	{ struct Cyc_PP_Doc * _T14B[5];
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _T1F = _tag_fat(" ? ",sizeof(char),4U);
	  _T14B[1] = Cyc_PP_text(_T1F);
	  _T14B[2] = Cyc_Absynpp_exp2doc_prec(0,e2);
	  _T20 = _tag_fat(" : ",sizeof(char),4U);
	  _T14B[3] = Cyc_PP_text(_T20);
	  _T14B[4] = Cyc_Absynpp_exp2doc_prec(myprec,e3);
	  _T21 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),5);
	  _T1E = Cyc_PP_cat(_T21);
	}s = _T1E;
	goto _LL0;
      }
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T145 = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct Cyc_Absyn_Exp * e2 = _T145;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _T23 = _tag_fat(" && ",sizeof(char),5U);
	  _T14B[1] = Cyc_PP_text(_T23);
	  _T14B[2] = Cyc_Absynpp_exp2doc_prec(myprec,e2);
	  _T24 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T22 = Cyc_PP_cat(_T24);
	}s = _T22;
	goto _LL0;
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T145 = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct Cyc_Absyn_Exp * e2 = _T145;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _T26 = _tag_fat(" || ",sizeof(char),5U);
	  _T14B[1] = Cyc_PP_text(_T26);
	  _T14B[2] = Cyc_Absynpp_exp2doc_prec(myprec,e2);
	  _T27 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T25 = Cyc_PP_cat(_T27);
	}s = _T25;
	goto _LL0;
      }
    case 9: 
      { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T145 = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct Cyc_Absyn_Exp * e2 = _T145;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T29 = myprec - 1;
	  _T2A = e1;
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(_T29,_T2A);
	  _T2B = _tag_fat(", ",sizeof(char),3U);
	  _T14B[1] = Cyc_PP_text(_T2B);
	  _T2C = myprec - 1;
	  _T2D = e2;
	  _T14B[2] = Cyc_Absynpp_exp2doc_prec(_T2C,_T2D);
	  _T2E = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T28 = Cyc_PP_cat(_T2E);
	}s = _T28;
	goto _LL0;
      }
    case 10: 
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T142 = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct Cyc_List_List * es = _T142;
	{ struct Cyc_PP_Doc * _T14B[4];
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _T30 = _tag_fat("(",sizeof(char),2U);
	  _T14B[1] = Cyc_PP_text(_T30);
	  _T14B[2] = Cyc_Absynpp_exps2doc_prec(20,es);
	  _T31 = _tag_fat(")",sizeof(char),2U);
	  _T14B[3] = Cyc_PP_text(_T31);
	  _T32 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),4);
	  _T2F = Cyc_PP_cat(_T32);
	}s = _T2F;
	goto _LL0;
      }
    case 11: 
      { struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	{ struct Cyc_PP_Doc * _T14B[2];
	  _T34 = _tag_fat("throw ",sizeof(char),7U);
	  _T14B[0] = Cyc_PP_text(_T34);
	  _T14B[1] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _T35 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	  _T33 = Cyc_PP_cat(_T35);
	}s = _T33;
	goto _LL0;
      }
    case 12: 
      { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	s = Cyc_Absynpp_exp2doc_prec(inprec,e1);
	_T36 = Cyc_Absynpp_gen_clean_cyclone;
	if (! _T36) { goto _TL1D0;
	}
	{ struct Cyc_PP_Doc * _T14B[4];
	  _T38 = _tag_fat("(",sizeof(char),2U);
	  _T14B[0] = Cyc_PP_text(_T38);
	  _T14B[1] = s;
	  _T39 = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T39);
	  _T3A = _tag_fat("<>",sizeof(char),3U);
	  _T14B[3] = Cyc_PP_text(_T3A);
	  _T3B = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),4);
	  _T37 = Cyc_PP_cat(_T3B);
	}s = _T37;
	goto _TL1D1;
	_TL1D0: _TL1D1: goto _LL0;
      }
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T142 = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct Cyc_List_List * ts = _T142;
	s = Cyc_Absynpp_exp2doc_prec(inprec,e1);
	_T3C = Cyc_Absynpp_gen_clean_cyclone;
	if (! _T3C) { goto _TL1D2;
	}
	{ struct Cyc_PP_Doc * inst = Cyc_Absynpp_tps2doc(ts);
	  _T3D = Cyc_Absynpp_emptydoc(inst);
	  if (_T3D) { goto _TL1D4;
	  }else { goto _TL1D6;
	  }
	  _TL1D6: { struct Cyc_PP_Doc * _T14B[5];
	    _T3F = _tag_fat("(",sizeof(char),2U);
	    _T14B[0] = Cyc_PP_text(_T3F);
	    _T14B[1] = s;
	    _T40 = _tag_fat(")",sizeof(char),2U);
	    _T14B[2] = Cyc_PP_text(_T40);
	    _T41 = _tag_fat("@",sizeof(char),2U);
	    _T14B[3] = Cyc_PP_text(_T41);
	    _T14B[4] = inst;
	    _T42 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),5);
	    _T3E = Cyc_PP_cat(_T42);
	  }s = _T3E;
	  goto _TL1D5;
	  _TL1D4: _TL1D5: ;
	}goto _TL1D3;
	_TL1D2: _TL1D3: goto _LL0;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T135;
	_T43 = _T14B->f1;
	_T149 = (void *)_T43;
	_T145 = _T14B->f2;
	_T141 = _T14B->f3;
	_T140 = _T14B->f4;
      }{ void * t = _T149;
	struct Cyc_Absyn_Exp * e1 = _T145;
	long u = _T141;
	enum Cyc_Absyn_Coercion c = _T140;
	struct Cyc_PP_Doc * castStr = Cyc_PP_nil_doc();
	long printType = 1;
	_T44 = Cyc_Absynpp_gen_clean_cyclone;
	if (! _T44) { goto _TL1D7;
	}
	_T45 = u;
	if (_T45) { goto _TL1D7;
	}else { goto _TL1D9;
	}
	_TL1D9: printType = Cyc_Absynpp_is_clean_cast(t,e1);
	goto _TL1D8;
	_TL1D7: _TL1D8: _T46 = printType;
	if (! _T46) { goto _TL1DA;
	}
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T48 = _tag_fat("(",sizeof(char),2U);
	  _T14B[0] = Cyc_PP_text(_T48);
	  _T14B[1] = Cyc_Absynpp_typ2doc(t);
	  _T49 = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T49);
	  _T4A = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T47 = Cyc_PP_cat(_T4A);
	}castStr = _T47;
	goto _TL1DB;
	_TL1DA: _TL1DB: { struct Cyc_PP_Doc * _T14B[2];
	  _T14B[0] = castStr;
	  _T14B[1] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _T4C = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	  _T4B = Cyc_PP_cat(_T4C);
	}s = _T4B;
	goto _LL0;
      }
    case 15: 
      { struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	{ struct Cyc_PP_Doc * _T14B[2];
	  _T4E = _tag_fat("&",sizeof(char),2U);
	  _T14B[0] = Cyc_PP_text(_T4E);
	  _T14B[1] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _T4F = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	  _T4D = Cyc_PP_cat(_T4F);
	}s = _T4D;
	goto _LL0;
      }
    case 16: 
      { struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T145 = _T14B->f2;
	_T143 = _T14B->f3;
      }{ struct Cyc_Absyn_Exp * ropt = _T149;
	struct Cyc_Absyn_Exp * e1 = _T145;
	struct Cyc_Absyn_Exp * qual = _T143;
	if (ropt != 0) { goto _TL1DC;
	}
	{ struct Cyc_PP_Doc * qd = Cyc_PP_nil_doc();
	  _T50 = qual;
	  _T51 = (unsigned int)_T50;
	  if (! _T51) { goto _TL1DE;
	  }
	  { struct Cyc_PP_Doc * _T14B[3];
	    _T53 = _tag_fat("(",sizeof(char),2U);
	    _T14B[0] = Cyc_PP_text(_T53);
	    _T14B[1] = Cyc_Absynpp_exp2doc(qual);
	    _T54 = _tag_fat(")",sizeof(char),2U);
	    _T14B[2] = Cyc_PP_text(_T54);
	    _T55 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	    _T52 = Cyc_PP_cat(_T55);
	  }qd = _T52;
	  goto _TL1DF;
	  _TL1DE: _TL1DF: { struct Cyc_PP_Doc * _T14B[3];
	    if (qual != 0) { goto _TL1E0;
	    }
	    _T57 = _tag_fat("new ",sizeof(char),5U);
	    _T14B[0] = Cyc_PP_text(_T57);
	    goto _TL1E1;
	    _TL1E0: _T58 = _tag_fat("qnew ",sizeof(char),6U);
	    _T14B[0] = Cyc_PP_text(_T58);
	    _TL1E1: _T14B[1] = qd;
	    _T14B[2] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	    _T59 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	    _T56 = Cyc_PP_cat(_T59);
	  }s = _T56;
	}goto _TL1DD;
	_TL1DC: { struct Cyc_PP_Doc * qd = Cyc_PP_nil_doc();
	  _T5A = qual;
	  _T5B = (unsigned int)_T5A;
	  if (! _T5B) { goto _TL1E2;
	  }
	  { struct Cyc_PP_Doc * _T14B[2];
	    _T5D = _tag_fat(",",sizeof(char),2U);
	    _T14B[0] = Cyc_PP_text(_T5D);
	    _T14B[1] = Cyc_Absynpp_exp2doc(qual);
	    _T5E = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	    _T5C = Cyc_PP_cat(_T5E);
	  }qd = _T5C;
	  goto _TL1E3;
	  _TL1E2: _TL1E3: { struct Cyc_PP_Doc * _T14B[5];
	    _T60 = _tag_fat("rnew(",sizeof(char),6U);
	    _T14B[0] = Cyc_PP_text(_T60);
	    _T14B[1] = Cyc_Absynpp_exp2doc(ropt);
	    _T14B[2] = qd;
	    _T61 = _tag_fat(") ",sizeof(char),3U);
	    _T14B[3] = Cyc_PP_text(_T61);
	    _T14B[4] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	    _T62 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),5);
	    _T5F = Cyc_PP_cat(_T62);
	  }s = _T5F;
	}_TL1DD: goto _LL0;
      }
    case 17: 
      { struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T135;
	_T63 = _T14B->f1;
	_T149 = (void *)_T63;
      }{ void * t = _T149;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T65 = _tag_fat("sizeof(",sizeof(char),8U);
	  _T14B[0] = Cyc_PP_text(_T65);
	  _T14B[1] = Cyc_Absynpp_typ2doc(t);
	  _T66 = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T66);
	  _T67 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T64 = Cyc_PP_cat(_T67);
	}s = _T64;
	goto _LL0;
      }
    case 18: 
      { struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T69 = _tag_fat("sizeof(",sizeof(char),8U);
	  _T14B[0] = Cyc_PP_text(_T69);
	  _T14B[1] = Cyc_Absynpp_exp2doc(e1);
	  _T6A = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T6A);
	  _T6B = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T68 = Cyc_PP_cat(_T6B);
	}s = _T68;
	goto _LL0;
      }
    case 41: 
      { struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T141 = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e = _T149;
	long static_only = _T141;
	_T6C = static_only;
	if (! _T6C) { goto _TL1E4;
	}
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T6E = _tag_fat("@assert(",sizeof(char),9U);
	  _T14B[0] = Cyc_PP_text(_T6E);
	  _T14B[1] = Cyc_Absynpp_exp2doc(e);
	  _T6F = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T6F);
	  _T70 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T6D = Cyc_PP_cat(_T70);
	}s = _T6D;
	goto _TL1E5;
	_TL1E4: { struct Cyc_PP_Doc * _T14B[3];
	  _T72 = _tag_fat("assert(",sizeof(char),8U);
	  _T14B[0] = Cyc_PP_text(_T72);
	  _T14B[1] = Cyc_Absynpp_exp2doc(e);
	  _T73 = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T73);
	  _T74 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T71 = Cyc_PP_cat(_T74);
	}s = _T71;
	_TL1E5: goto _LL0;
      }
    case 42: 
      { struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
      }{ struct Cyc_Absyn_Exp * e = _T149;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T76 = _tag_fat("@assert_false(",sizeof(char),15U);
	  _T14B[0] = Cyc_PP_text(_T76);
	  _T14B[1] = Cyc_Absynpp_exp2doc(e);
	  _T77 = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T77);
	  _T78 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T75 = Cyc_PP_cat(_T78);
	}s = _T75;
	goto _LL0;
      }
    case 40: 
      { struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
      }{ struct Cyc_Absyn_Exp * e = _T149;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T7A = _tag_fat("__extension__(",sizeof(char),15U);
	  _T14B[0] = Cyc_PP_text(_T7A);
	  _T14B[1] = Cyc_Absynpp_exp2doc(e);
	  _T7B = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T7B);
	  _T7C = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T79 = Cyc_PP_cat(_T7C);
	}s = _T79;
	goto _LL0;
      }
    case 38: 
      { struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct *)_T135;
	_T7D = _T14B->f1;
	_T149 = (void *)_T7D;
      }{ void * t = _T149;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T7F = _tag_fat("valueof(",sizeof(char),9U);
	  _T14B[0] = Cyc_PP_text(_T7F);
	  _T14B[1] = Cyc_Absynpp_typ2doc(t);
	  _T80 = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T80);
	  _T81 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T7E = Cyc_PP_cat(_T81);
	}s = _T7E;
	goto _LL0;
      }
    case 39: 
      { struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct *)_T135;
	_T141 = _T14B->f1;
	_T148 = _T14B->f2;
	_T149 = _T14B->f3;
	_T142 = _T14B->f4;
	_T13F = _T14B->f5;
      }{ long vol = _T141;
	struct _fat_ptr t = _T148;
	struct Cyc_List_List * o = _T149;
	struct Cyc_List_List * i = _T142;
	struct Cyc_List_List * cl = _T13F;
	_T82 = _tag_fat("__asm__",sizeof(char),8U);
	s = Cyc_PP_text(_T82);
	_T83 = vol;
	if (! _T83) { goto _TL1E6;
	}
	{ struct Cyc_PP_Doc * _T14B[2];
	  _T14B[0] = s;
	  _T85 = _tag_fat(" volatile ",sizeof(char),11U);
	  _T14B[1] = Cyc_PP_text(_T85);
	  _T86 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	  _T84 = Cyc_PP_cat(_T86);
	}s = _T84;
	goto _TL1E7;
	_TL1E6: _TL1E7: { struct Cyc_PP_Doc * _T14B[6];
	  _T14B[0] = s;
	  _T88 = _tag_fat("(\"",sizeof(char),3U);
	  _T14B[1] = Cyc_PP_text(_T88);
	  _T89 = Cyc_Absynpp_string_escape(t);
	  _T14B[2] = Cyc_PP_text(_T89);
	  _T8A = _tag_fat("\"",sizeof(char),2U);
	  _T14B[3] = Cyc_PP_text(_T8A);
	  _T14B[4] = Cyc_Absynpp_asm_iolist_doc(o,i,cl);
	  _T8B = _tag_fat(")",sizeof(char),2U);
	  _T14B[5] = Cyc_PP_text(_T8B);
	  _T8C = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),6);
	  _T87 = Cyc_PP_cat(_T8C);
	}s = _T87;
	goto _LL0;
      }
    case 37: 
      { struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T13E = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e = _T149;
	struct _fat_ptr * f = _T13E;
	{ struct Cyc_PP_Doc * _T14B[5];
	  _T8E = _tag_fat("tagcheck(",sizeof(char),10U);
	  _T14B[0] = Cyc_PP_text(_T8E);
	  _T14B[1] = Cyc_Absynpp_exp2doc(e);
	  _T8F = _tag_fat(".",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T8F);
	  _T14B[3] = Cyc_PP_textptr(f);
	  _T90 = _tag_fat(")",sizeof(char),2U);
	  _T14B[4] = Cyc_PP_text(_T90);
	  _T91 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),5);
	  _T8D = Cyc_PP_cat(_T91);
	}s = _T8D;
	goto _LL0;
      }
    case 19: 
      { struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct *)_T135;
	_T92 = _T14B->f1;
	_T149 = (void *)_T92;
	_T142 = _T14B->f2;
      }{ void * t = _T149;
	struct Cyc_List_List * l = _T142;
	{ struct Cyc_PP_Doc * _T14B[5];
	  _T94 = _tag_fat("offsetof(",sizeof(char),10U);
	  _T14B[0] = Cyc_PP_text(_T94);
	  _T14B[1] = Cyc_Absynpp_typ2doc(t);
	  _T95 = _tag_fat(",",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_T95);
	  _T96 = _tag_fat(".",sizeof(char),2U);
	  _T98 = Cyc_List_map;
	  { struct Cyc_List_List * (* _T14C)(struct Cyc_PP_Doc * (*)(void *),
					     struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(void *),
												   struct Cyc_List_List *))_T98;
	    _T97 = _T14C;
	  }_T99 = l;
	  _T9A = _T97(Cyc_Absynpp_offsetof_field_to_doc,_T99);
	  _T14B[3] = Cyc_PP_seq(_T96,_T9A);
	  _T9B = _tag_fat(")",sizeof(char),2U);
	  _T14B[4] = Cyc_PP_text(_T9B);
	  _T9C = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),5);
	  _T93 = Cyc_PP_cat(_T9C);
	}s = _T93;
	goto _LL0;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	{ struct Cyc_PP_Doc * _T14B[2];
	  _T9E = _tag_fat("*",sizeof(char),2U);
	  _T14B[0] = Cyc_PP_text(_T9E);
	  _T14B[1] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _T9F = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	  _T9D = Cyc_PP_cat(_T9F);
	}s = _T9D;
	goto _LL0;
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T13E = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct _fat_ptr * n = _T13E;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _TA1 = _tag_fat(".",sizeof(char),2U);
	  _T14B[1] = Cyc_PP_text(_TA1);
	  _T14B[2] = Cyc_PP_textptr(n);
	  _TA2 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _TA0 = Cyc_PP_cat(_TA2);
	}s = _TA0;
	goto _LL0;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T13E = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct _fat_ptr * n = _T13E;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _TA4 = _tag_fat("->",sizeof(char),3U);
	  _T14B[1] = Cyc_PP_text(_TA4);
	  _T14B[2] = Cyc_PP_textptr(n);
	  _TA5 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _TA3 = Cyc_PP_cat(_TA5);
	}s = _TA3;
	goto _LL0;
      }
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T145 = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T149;
	struct Cyc_Absyn_Exp * e2 = _T145;
	{ struct Cyc_PP_Doc * _T14B[4];
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _TA7 = _tag_fat("[",sizeof(char),2U);
	  _T14B[1] = Cyc_PP_text(_TA7);
	  _T14B[2] = Cyc_Absynpp_exp2doc(e2);
	  _TA8 = _tag_fat("]",sizeof(char),2U);
	  _T14B[3] = Cyc_PP_text(_TA8);
	  _TA9 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),4);
	  _TA6 = Cyc_PP_cat(_TA9);
	}s = _TA6;
	goto _LL0;
      }
    case 24: 
      { struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T142 = _T14B->f2;
      }{ struct _tuple9 * vat = _T149;
	struct Cyc_List_List * des = _T142;
	{ struct Cyc_PP_Doc * _T14B[4];
	  _TAB = _tag_fat("(",sizeof(char),2U);
	  _T14B[0] = Cyc_PP_text(_TAB);
	  _TAC = vat;
	  _TAD = *_TAC;
	  _TAE = _TAD.f2;
	  _T14B[1] = Cyc_Absynpp_typ2doc(_TAE);
	  _TAF = _tag_fat(")",sizeof(char),2U);
	  _T14B[2] = Cyc_PP_text(_TAF);
	  _TB0 = _tag_fat(",",sizeof(char),2U);
	  _TB2 = Cyc_List_map;
	  { struct Cyc_List_List * (* _T14C)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
					     struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
												   struct Cyc_List_List *))_TB2;
	    _TB1 = _T14C;
	  }_TB3 = Cyc_Absynpp_de2doc;
	  _TB4 = des;
	  _TB5 = _TB1(_TB3,_TB4);
	  _T14B[3] = Cyc_Absynpp_group_braces(_TB0,_TB5);
	  _TB6 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),4);
	  _TAA = Cyc_PP_cat(_TB6);
	}s = _TAA;
	goto _LL0;
      }
    case 25: 
      { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
      }{ struct Cyc_List_List * des = _T149;
	_TB7 = _tag_fat(",",sizeof(char),2U);
	_TB9 = Cyc_List_map;
	{ struct Cyc_List_List * (* _T14B)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
					   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
												 struct Cyc_List_List *))_TB9;
	  _TB8 = _T14B;
	}_TBA = Cyc_Absynpp_de2doc;
	_TBB = des;
	_TBC = _TB8(_TBA,_TBB);
	s = Cyc_Absynpp_group_braces(_TB7,_TBC);
	goto _LL0;
      }
    case 26: 
      { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T135;
	_T149 = _T14B->f1;
	_T145 = _T14B->f2;
	_T143 = _T14B->f3;
      }{ struct Cyc_Absyn_Vardecl * vd = _T149;
	struct Cyc_Absyn_Exp * e1 = _T145;
	struct Cyc_Absyn_Exp * e2 = _T143;
	{ struct Cyc_PP_Doc * _T14B[8];
	  _T14B[0] = Cyc_Absynpp_lb();
	  _TBE = _tag_fat("for ",sizeof(char),5U);
	  _T14B[1] = Cyc_PP_text(_TBE);
	  _TBF = vd;
	  _TC0 = _TBF->name;
	  _TC1 = *_TC0;
	  _TC2 = _TC1.f1;
	  _TC3 = *_TC2;
	  _T14B[2] = Cyc_PP_text(_TC3);
	  _TC4 = _tag_fat(" < ",sizeof(char),4U);
	  _T14B[3] = Cyc_PP_text(_TC4);
	  _T14B[4] = Cyc_Absynpp_exp2doc(e1);
	  _TC5 = _tag_fat(" : ",sizeof(char),4U);
	  _T14B[5] = Cyc_PP_text(_TC5);
	  _T14B[6] = Cyc_Absynpp_exp2doc(e2);
	  _T14B[7] = Cyc_Absynpp_rb();
	  _TC6 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),8);
	  _TBD = Cyc_PP_cat(_TC6);
	}s = _TBD;
	goto _LL0;
      }
    case 27: 
      { struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T135;
	_T145 = _T14B->f1;
	_TC7 = _T14B->f2;
	_T149 = (void *)_TC7;
      }{ struct Cyc_Absyn_Exp * e = _T145;
	void * t = _T149;
	{ struct Cyc_PP_Doc * _T14B[7];
	  _T14B[0] = Cyc_Absynpp_lb();
	  _TC9 = _tag_fat("for x ",sizeof(char),7U);
	  _T14B[1] = Cyc_PP_text(_TC9);
	  _TCA = _tag_fat(" < ",sizeof(char),4U);
	  _T14B[2] = Cyc_PP_text(_TCA);
	  _T14B[3] = Cyc_Absynpp_exp2doc(e);
	  _TCB = _tag_fat(" : ",sizeof(char),4U);
	  _T14B[4] = Cyc_PP_text(_TCB);
	  _T14B[5] = Cyc_Absynpp_typ2doc(t);
	  _T14B[6] = Cyc_Absynpp_rb();
	  _TCC = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),7);
	  _TC8 = Cyc_PP_cat(_TCC);
	}s = _TC8;
	goto _LL0;
      }
    case 28: 
      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T135;
	_T13D = _T14B->f1;
	_T142 = _T14B->f2;
	_T13F = _T14B->f3;
      }{ struct _tuple1 * n = _T13D;
	struct Cyc_List_List * ts = _T142;
	struct Cyc_List_List * des = _T13F;
	_TCE = Cyc_List_map;
	{ struct Cyc_List_List * (* _T14B)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
					   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
												 struct Cyc_List_List *))_TCE;
	  _TCD = _T14B;
	}_TCF = Cyc_Absynpp_de2doc;
	_TD0 = des;
	{ struct Cyc_List_List * des_doc = _TCD(_TCF,_TD0);
	  { struct Cyc_PP_Doc * _T14B[4];
	    _T14B[0] = Cyc_Absynpp_qvar2doc(n);
	    _T14B[1] = Cyc_Absynpp_lb();
	    _TD2 = _tag_fat(",",sizeof(char),2U);
	    _TD3 = des_doc;
	    _T14B[2] = Cyc_PP_seq(_TD2,_TD3);
	    _T14B[3] = Cyc_Absynpp_rb();
	    _TD4 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),4);
	    _TD1 = Cyc_PP_cat(_TD4);
	  }s = _TD1;
	  goto _LL0;
	}
      }
    case 29: 
      { struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T135;
	_T141 = _T14B->f2;
	_T142 = _T14B->f3;
      }{ long is_tuple = _T141;
	struct Cyc_List_List * des = _T142;
	_TD5 = is_tuple;
	if (! _TD5) { goto _TL1E8;
	}
	{ struct Cyc_PP_Doc * _T14B[4];
	  _T14B[0] = Cyc_Absynpp_dollar();
	  _TD7 = _tag_fat("(",sizeof(char),2U);
	  _T14B[1] = Cyc_PP_text(_TD7);
	  _TD9 = Cyc_List_map;
	  { struct Cyc_List_List * (* _T14C)(struct Cyc_Absyn_Exp * (*)(struct _tuple19 *),
					     struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Exp * (*)(struct _tuple19 *),
												   struct Cyc_List_List *))_TD9;
	    _TD8 = _T14C;
	  }_TDB = Cyc_Core_snd;
	  { struct Cyc_Absyn_Exp * (* _T14C)(struct _tuple19 *) = (struct Cyc_Absyn_Exp * (*)(struct _tuple19 *))_TDB;
	    _TDA = _T14C;
	  }_TDC = des;
	  _TDD = _TD8(_TDA,_TDC);
	  _T14B[2] = Cyc_Absynpp_exps2doc_prec(20,_TDD);
	  _TDE = _tag_fat(")",sizeof(char),2U);
	  _T14B[3] = Cyc_PP_text(_TDE);
	  _TDF = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),4);
	  _TD6 = Cyc_PP_cat(_TDF);
	}s = _TD6;
	goto _TL1E9;
	_TL1E8: _TE0 = _tag_fat(",",sizeof(char),2U);
	_TE2 = Cyc_List_map;
	{ struct Cyc_List_List * (* _T14B)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
					   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
												 struct Cyc_List_List *))_TE2;
	  _TE1 = _T14B;
	}_TE3 = Cyc_Absynpp_de2doc;
	_TE4 = des;
	_TE5 = _TE1(_TE3,_TE4);
	s = Cyc_Absynpp_group_braces(_TE0,_TE5);
	_TL1E9: goto _LL0;
      }
    case 30: 
      { struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct *)_T135;
	_T142 = _T14B->f1;
	_T13C = _T14B->f3;
      }{ struct Cyc_List_List * es = _T142;
	struct Cyc_Absyn_Datatypefield * tuf = _T13C;
	{ struct Cyc_PP_Doc * _T14B[2];
	  _TE7 = tuf;
	  _TE8 = _TE7->name;
	  _T14B[0] = Cyc_Absynpp_qvar2doc(_TE8);
	  _TE9 = _tag_fat("(",sizeof(char),2U);
	  _TEA = _tag_fat(")",sizeof(char),2U);
	  _TEB = _tag_fat(",",sizeof(char),2U);
	  _TED = Cyc_List_map;
	  { struct Cyc_List_List * (* _T14C)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Exp *),
					     struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Exp *),
												   struct Cyc_List_List *))_TED;
	    _TEC = _T14C;
	  }_TEE = Cyc_Absynpp_exp2doc;
	  _TEF = es;
	  _TF0 = _TEC(_TEE,_TEF);
	  _T14B[1] = Cyc_PP_egroup(_TE9,_TEA,_TEB,_TF0);
	  _TF1 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),2);
	  _TE6 = Cyc_PP_cat(_TF1);
	}s = _TE6;
	goto _LL0;
      }
    case 31: 
      { struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct *)_T135;
	_T13B = _T14B->f2;
      }{ struct Cyc_Absyn_Enumfield * ef = _T13B;
	_T13B = ef;
	goto _LL4E;
      }
    case 32: 
      { struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct *)_T135;
	_T13B = _T14B->f2;
      }_LL4E: { struct Cyc_Absyn_Enumfield * ef = _T13B;
	_TF2 = ef;
	_TF3 = _TF2->name;
	s = Cyc_Absynpp_qvar2doc(_TF3);
	goto _LL0;
      }
    case 33: 
      { struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T135;
	_TF4 = _T14B->f1;
	_T13A = _TF4.mknd;
	_TF5 = _T14B->f1;
	_T145 = _TF5.rgn;
	_TF6 = _T14B->f1;
	_T143 = _TF6.aqual;
	_TF7 = _T14B->f1;
	_T139 = _TF7.elt_type;
	_TF8 = _T14B->f1;
	_T138 = _TF8.num_elts;
	_TF9 = _T14B->f1;
	_T141 = _TF9.inline_call;
      }{ enum Cyc_Absyn_MallocKind mknd = _T13A;
	struct Cyc_Absyn_Exp * rgnopt = _T145;
	struct Cyc_Absyn_Exp * aqopt = _T143;
	void * * topt = _T139;
	struct Cyc_Absyn_Exp * e = _T138;
	long inline_call = _T141;
	_TFA = mknd;
	_TFB = (int)_TFA;
	if (_TFB != 1) { goto _TL1EA;
	}
	_TFC = _check_null(topt);
	_TFD = *_TFC;
	{ struct Cyc_Absyn_Exp * st = Cyc_Absyn_sizeoftype_exp(_TFD,0U);
	  if (rgnopt != 0) { goto _TL1EC;
	  }
	  { struct Cyc_PP_Doc * _T14B[5];
	    _TFF = _tag_fat("calloc(",sizeof(char),8U);
	    _T14B[0] = Cyc_PP_text(_TFF);
	    _T14B[1] = Cyc_Absynpp_exp2doc(e);
	    _T100 = _tag_fat(",",sizeof(char),2U);
	    _T14B[2] = Cyc_PP_text(_T100);
	    _T14B[3] = Cyc_Absynpp_exp2doc(st);
	    _T101 = _tag_fat(")",sizeof(char),2U);
	    _T14B[4] = Cyc_PP_text(_T101);
	    _T102 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),5);
	    _TFE = Cyc_PP_cat(_T102);
	  }s = _TFE;
	  goto _TL1ED;
	  _TL1EC: { struct Cyc_PP_Doc * _T14B[7];
	    if (aqopt == 0) { goto _TL1EE;
	    }
	    _T104 = _tag_fat("qcalloc(",sizeof(char),9U);
	    _T14B[0] = Cyc_PP_text(_T104);
	    goto _TL1EF;
	    _TL1EE: _T105 = _tag_fat("rcalloc(",sizeof(char),9U);
	    _T14B[0] = Cyc_PP_text(_T105);
	    _TL1EF: _T14B[1] = Cyc_Absynpp_exp2doc(rgnopt);
	    if (aqopt == 0) { goto _TL1F0;
	    }
	    { struct Cyc_PP_Doc * _T14C[3];
	      _T107 = _tag_fat(",",sizeof(char),2U);
	      _T14C[0] = Cyc_PP_text(_T107);
	      _T14C[1] = Cyc_Absynpp_exp2doc(aqopt);
	      _T108 = _tag_fat(",",sizeof(char),2U);
	      _T14C[2] = Cyc_PP_text(_T108);
	      _T109 = _tag_fat(_T14C,sizeof(struct Cyc_PP_Doc *),3);
	      _T106 = Cyc_PP_cat(_T109);
	    }_T14B[2] = _T106;
	    goto _TL1F1;
	    _TL1F0: _T10A = _tag_fat(",",sizeof(char),2U);
	    _T14B[2] = Cyc_PP_text(_T10A);
	    _TL1F1: _T14B[3] = Cyc_Absynpp_exp2doc(e);
	    _T10B = _tag_fat(",",sizeof(char),2U);
	    _T14B[4] = Cyc_PP_text(_T10B);
	    _T14B[5] = Cyc_Absynpp_exp2doc(st);
	    _T10C = _tag_fat(")",sizeof(char),2U);
	    _T14B[6] = Cyc_PP_text(_T10C);
	    _T10D = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),7);
	    _T103 = Cyc_PP_cat(_T10D);
	  }s = _T103;
	  _TL1ED: ;
	}goto _TL1EB;
	_TL1EA: { struct Cyc_PP_Doc * new_e = Cyc_Absynpp_exp2doc(e);
	  _T10E = topt;
	  _T10F = (unsigned int)_T10E;
	  if (! _T10F) { goto _TL1F2;
	  }
	  goto _TL1F3;
	  _TL1F2: _T111 = Cyc___assert_fail;
	  { int (* _T14B)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
										   struct _fat_ptr,
										   unsigned int))_T111;
	    _T110 = _T14B;
	  }_T112 = _tag_fat("topt",sizeof(char),5U);
	  _T113 = _tag_fat("cyclone/library/compiler/absynpp.cyc",sizeof(char),
			   37U);
	  _T110(_T112,_T113,1907U);
	  _TL1F3: { struct _fat_ptr fn_name = _tag_fat("malloc(",sizeof(char),
						       8U);
	    if (rgnopt != 0) { goto _TL1F4;
	    }
	    { struct Cyc_PP_Doc * _T14B[3];
	      _T14B[0] = Cyc_PP_text(fn_name);
	      _T14B[1] = new_e;
	      _T115 = _tag_fat(")",sizeof(char),2U);
	      _T14B[2] = Cyc_PP_text(_T115);
	      _T116 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	      _T114 = Cyc_PP_cat(_T116);
	    }s = _T114;
	    goto _TL1F5;
	    _TL1F4: _T117 = mknd;
	    _T118 = (int)_T117;
	    if (_T118 != 2) { goto _TL1F6;
	    }
	    fn_name = _tag_fat("rvmalloc(",sizeof(char),10U);
	    goto _TL1F7;
	    _TL1F6: _T119 = inline_call;
	    if (! _T119) { goto _TL1F8;
	    }
	    fn_name = _tag_fat("rmalloc_inline(",sizeof(char),16U);
	    goto _TL1F9;
	    _TL1F8: if (aqopt == 0) { goto _TL1FA;
	    }
	    fn_name = _tag_fat("qmalloc(",sizeof(char),9U);
	    goto _TL1FB;
	    _TL1FA: fn_name = _tag_fat("rmalloc(",sizeof(char),9U);
	    _TL1FB: _TL1F9: _TL1F7: { struct Cyc_PP_Doc * _T14B[5];
	      _T14B[0] = Cyc_PP_text(fn_name);
	      _T14B[1] = Cyc_Absynpp_exp2doc(rgnopt);
	      if (aqopt == 0) { goto _TL1FC;
	      }
	      { struct Cyc_PP_Doc * _T14C[3];
		_T11C = _tag_fat(",",sizeof(char),2U);
		_T14C[0] = Cyc_PP_text(_T11C);
		_T14C[1] = Cyc_Absynpp_exp2doc(aqopt);
		_T11D = _tag_fat(",",sizeof(char),2U);
		_T14C[2] = Cyc_PP_text(_T11D);
		_T11E = _tag_fat(_T14C,sizeof(struct Cyc_PP_Doc *),3);
		_T11B = Cyc_PP_cat(_T11E);
	      }_T14B[2] = _T11B;
	      goto _TL1FD;
	      _TL1FC: _T11F = _tag_fat(",",sizeof(char),2U);
	      _T14B[2] = Cyc_PP_text(_T11F);
	      _TL1FD: _T14B[3] = new_e;
	      _T120 = _tag_fat(")",sizeof(char),2U);
	      _T14B[4] = Cyc_PP_text(_T120);
	      _T121 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),5);
	      _T11A = Cyc_PP_cat(_T121);
	    }s = _T11A;
	    _TL1F5: ;
	  }
	}_TL1EB: goto _LL0;
      }
    case 34: 
      { struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct *)_T135;
	_T145 = _T14B->f1;
	_T143 = _T14B->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T145;
	struct Cyc_Absyn_Exp * e2 = _T143;
	{ struct Cyc_PP_Doc * _T14B[3];
	  _T14B[0] = Cyc_Absynpp_exp2doc_prec(myprec,e1);
	  _T123 = _tag_fat(" :=: ",sizeof(char),6U);
	  _T14B[1] = Cyc_PP_text(_T123);
	  _T14B[2] = Cyc_Absynpp_exp2doc_prec(myprec,e2);
	  _T124 = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),3);
	  _T122 = Cyc_PP_cat(_T124);
	}s = _T122;
	goto _LL0;
      }
    case 35: 
      { struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T135;
	_T137 = _T14B->f1;
	_T142 = _T14B->f2;
      }{ struct Cyc_Core_Opt * n = _T137;
	struct Cyc_List_List * des = _T142;
	_T125 = _tag_fat(",",sizeof(char),2U);
	_T127 = Cyc_List_map;
	{ struct Cyc_List_List * (* _T14B)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
					   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple19 *),
												 struct Cyc_List_List *))_T127;
	  _T126 = _T14B;
	}_T128 = Cyc_Absynpp_de2doc;
	_T129 = des;
	_T12A = _T126(_T128,_T129);
	s = Cyc_Absynpp_group_braces(_T125,_T12A);
	goto _LL0;
      }
    default: 
      { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T14B = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T135;
	_T136 = _T14B->f1;
      }{ struct Cyc_Absyn_Stmt * s2 = _T136;
	{ struct Cyc_PP_Doc * _T14B[7];
	  _T12C = _tag_fat("(",sizeof(char),2U);
	  _T14B[0] = Cyc_PP_text(_T12C);
	  _T14B[1] = Cyc_Absynpp_lb();
	  _T14B[2] = Cyc_PP_blank_doc();
	  _T12D = Cyc_Absynpp_stmt2doc(s2,1,0,1);
	  _T14B[3] = Cyc_PP_nest(2,_T12D);
	  _T14B[4] = Cyc_PP_blank_doc();
	  _T14B[5] = Cyc_Absynpp_rb();
	  _T12E = _tag_fat(")",sizeof(char),2U);
	  _T14B[6] = Cyc_PP_text(_T12E);
	  _T12F = _tag_fat(_T14B,sizeof(struct Cyc_PP_Doc *),7);
	  _T12B = Cyc_PP_cat(_T12F);
	}s = _T12B;
	goto _LL0;
      }
    }
    _LL0: ;
  }if (inprec < myprec) { goto _TL1FE;
  }
  { struct Cyc_PP_Doc * _T135[3];
    _T131 = _tag_fat("(",sizeof(char),2U);
    _T135[0] = Cyc_PP_text(_T131);
    _T135[1] = s;
    _T132 = _tag_fat(")",sizeof(char),2U);
    _T135[2] = Cyc_PP_text(_T132);
    _T133 = _tag_fat(_T135,sizeof(struct Cyc_PP_Doc *),3);
    _T130 = Cyc_PP_cat(_T133);
  }s = _T130;
  goto _TL1FF;
  _TL1FE: _TL1FF: _T134 = s;
  return _T134;
}
struct Cyc_PP_Doc * Cyc_Absynpp_exp2doc(struct Cyc_Absyn_Exp * e) {
  struct Cyc_PP_Doc * _T0;
  _T0 = Cyc_Absynpp_exp2doc_prec(0,e);
  return _T0;
}
struct Cyc_PP_Doc * Cyc_Absynpp_designator2doc(void * d) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_PP_Doc * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  void * _T8;
  struct Cyc_PP_Doc * _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr * _TC;
  struct Cyc_Absyn_Exp * _TD;
  _T0 = d;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL200;
  }
  _T3 = d;
  { struct Cyc_Absyn_ArrayElement_Absyn_Designator_struct * _TE = (struct Cyc_Absyn_ArrayElement_Absyn_Designator_struct *)_T3;
    _TD = _TE->f1;
  }{ struct Cyc_Absyn_Exp * e = _TD;
    { struct Cyc_PP_Doc * _TE[3];
      _T5 = _tag_fat(".[",sizeof(char),3U);
      _TE[0] = Cyc_PP_text(_T5);
      _TE[1] = Cyc_Absynpp_exp2doc(e);
      _T6 = _tag_fat("]",sizeof(char),2U);
      _TE[2] = Cyc_PP_text(_T6);
      _T7 = _tag_fat(_TE,sizeof(struct Cyc_PP_Doc *),3);
      _T4 = Cyc_PP_cat(_T7);
    }return _T4;
  }_TL200: _T8 = d;
  { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _TE = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T8;
    _TC = _TE->f1;
  }{ struct _fat_ptr * v = _TC;
    { struct Cyc_PP_Doc * _TE[2];
      _TA = _tag_fat(".",sizeof(char),2U);
      _TE[0] = Cyc_PP_text(_TA);
      _TE[1] = Cyc_PP_textptr(v);
      _TB = _tag_fat(_TE,sizeof(struct Cyc_PP_Doc *),2);
      _T9 = Cyc_PP_cat(_TB);
    }return _T9;
  };
}
struct Cyc_PP_Doc * Cyc_Absynpp_de2doc(struct _tuple19 * de) {
  struct _tuple19 * _T0;
  struct _tuple19 _T1;
  struct Cyc_List_List * _T2;
  struct _tuple19 * _T3;
  struct _tuple19 _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct Cyc_PP_Doc * _T6;
  struct Cyc_PP_Doc * _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct Cyc_List_List * (* _TB)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _TC)(void * (*)(void *),struct Cyc_List_List *);
  struct _tuple19 * _TD;
  struct _tuple19 _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  struct _tuple19 * _T11;
  struct _tuple19 _T12;
  struct Cyc_Absyn_Exp * _T13;
  struct _fat_ptr _T14;
  _T0 = de;
  _T1 = *_T0;
  _T2 = _T1.f0;
  if (_T2 != 0) { goto _TL202;
  }
  _T3 = de;
  _T4 = *_T3;
  _T5 = _T4.f1;
  _T6 = Cyc_Absynpp_exp2doc(_T5);
  return _T6;
  _TL202: { struct Cyc_PP_Doc * _T15[2];
    _T8 = _tag_fat("",sizeof(char),1U);
    _T9 = _tag_fat("=",sizeof(char),2U);
    _TA = _tag_fat("=",sizeof(char),2U);
    _TC = Cyc_List_map;
    { struct Cyc_List_List * (* _T16)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(void *),
															    struct Cyc_List_List *))_TC;
      _TB = _T16;
    }_TD = de;
    _TE = *_TD;
    _TF = _TE.f0;
    _T10 = _TB(Cyc_Absynpp_designator2doc,_TF);
    _T15[0] = Cyc_PP_egroup(_T8,_T9,_TA,_T10);
    _T11 = de;
    _T12 = *_T11;
    _T13 = _T12.f1;
    _T15[1] = Cyc_Absynpp_exp2doc(_T13);
    _T14 = _tag_fat(_T15,sizeof(struct Cyc_PP_Doc *),2);
    _T7 = Cyc_PP_cat(_T14);
  }return _T7;
}
struct Cyc_PP_Doc * Cyc_Absynpp_exps2doc_prec(int inprec,struct Cyc_List_List * es) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_List_List * (* _T3)(struct Cyc_PP_Doc * (*)(int,struct Cyc_Absyn_Exp *),
				 int,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T4)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  int _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_PP_Doc * _T8;
  _T0 = _tag_fat("",sizeof(char),1U);
  _T1 = _tag_fat("",sizeof(char),1U);
  _T2 = _tag_fat(",",sizeof(char),2U);
  _T4 = Cyc_List_map_c;
  { struct Cyc_List_List * (* _T9)(struct Cyc_PP_Doc * (*)(int,struct Cyc_Absyn_Exp *),
				   int,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(int,
														     struct Cyc_Absyn_Exp *),
											     int,
											     struct Cyc_List_List *))_T4;
    _T3 = _T9;
  }_T5 = inprec;
  _T6 = es;
  _T7 = _T3(Cyc_Absynpp_exp2doc_prec,_T5,_T6);
  _T8 = Cyc_PP_group(_T0,_T1,_T2,_T7);
  return _T8;
}
struct _fat_ptr Cyc_Absynpp_longlong2string(unsigned long long i) {
  char * _T0;
  char * _T1;
  unsigned int _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  unsigned char * _T5;
  char * _T6;
  unsigned int _T7;
  unsigned char * _T8;
  char * _T9;
  struct _fat_ptr _TA;
  unsigned char * _TB;
  char * _TC;
  unsigned int _TD;
  unsigned char * _TE;
  char * _TF;
  struct _fat_ptr _T10;
  unsigned char * _T11;
  char * _T12;
  unsigned int _T13;
  unsigned char * _T14;
  char * _T15;
  struct _fat_ptr _T16;
  unsigned char * _T17;
  char * _T18;
  unsigned int _T19;
  unsigned char * _T1A;
  char * _T1B;
  struct _fat_ptr _T1C;
  unsigned char * _T1D;
  char * _T1E;
  unsigned int _T1F;
  unsigned char * _T20;
  char * _T21;
  struct _fat_ptr _T22;
  int _T23;
  int _T24;
  unsigned char * _T25;
  char * _T26;
  unsigned long long _T27;
  unsigned long long _T28;
  unsigned int _T29;
  unsigned char * _T2A;
  char * _T2B;
  struct _fat_ptr _T2C;
  int _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr _T2F;
  { unsigned int _T30 = 28U + 1U;
    _T2 = _check_times(_T30,sizeof(char));
    { char * _T31 = _cycalloc_atomic(_T2);
      { unsigned int _T32 = _T30;
	unsigned int i;
	i = 0;
	_TL207: if (i < _T32) { goto _TL205;
	}else { goto _TL206;
	}
	_TL205: _T3 = i;
	_T31[_T3] = 'z';
	i = i + 1;
	goto _TL207;
	_TL206: _T31[_T32] = 0;
      }_T1 = (char *)_T31;
    }_T0 = _T1;
  }{ struct _fat_ptr x = _tag_fat(_T0,sizeof(char),29U);
    _T4 = x;
    { struct _fat_ptr _T30 = _fat_ptr_plus(_T4,sizeof(char),27);
      _T5 = _T30.curr;
      _T6 = (char *)_T5;
      { char _T31 = *_T6;
	char _T32 = '\000';
	_T7 = _get_fat_size(_T30,sizeof(char));
	if (_T7 != 1U) { goto _TL208;
	}
	if (_T31 != 0) { goto _TL208;
	}
	if (_T32 == 0) { goto _TL208;
	}
	_throw_arraybounds();
	goto _TL209;
	_TL208: _TL209: _T8 = _T30.curr;
	_T9 = (char *)_T8;
	*_T9 = _T32;
      }
    }_TA = x;
    { struct _fat_ptr _T30 = _fat_ptr_plus(_TA,sizeof(char),26);
      _TB = _T30.curr;
      _TC = (char *)_TB;
      { char _T31 = *_TC;
	char _T32 = 'L';
	_TD = _get_fat_size(_T30,sizeof(char));
	if (_TD != 1U) { goto _TL20A;
	}
	if (_T31 != 0) { goto _TL20A;
	}
	if (_T32 == 0) { goto _TL20A;
	}
	_throw_arraybounds();
	goto _TL20B;
	_TL20A: _TL20B: _TE = _T30.curr;
	_TF = (char *)_TE;
	*_TF = _T32;
      }
    }_T10 = x;
    { struct _fat_ptr _T30 = _fat_ptr_plus(_T10,sizeof(char),25);
      _T11 = _T30.curr;
      _T12 = (char *)_T11;
      { char _T31 = *_T12;
	char _T32 = 'L';
	_T13 = _get_fat_size(_T30,sizeof(char));
	if (_T13 != 1U) { goto _TL20C;
	}
	if (_T31 != 0) { goto _TL20C;
	}
	if (_T32 == 0) { goto _TL20C;
	}
	_throw_arraybounds();
	goto _TL20D;
	_TL20C: _TL20D: _T14 = _T30.curr;
	_T15 = (char *)_T14;
	*_T15 = _T32;
      }
    }_T16 = x;
    { struct _fat_ptr _T30 = _fat_ptr_plus(_T16,sizeof(char),24);
      _T17 = _T30.curr;
      _T18 = (char *)_T17;
      { char _T31 = *_T18;
	char _T32 = 'U';
	_T19 = _get_fat_size(_T30,sizeof(char));
	if (_T19 != 1U) { goto _TL20E;
	}
	if (_T31 != 0) { goto _TL20E;
	}
	if (_T32 == 0) { goto _TL20E;
	}
	_throw_arraybounds();
	goto _TL20F;
	_TL20E: _TL20F: _T1A = _T30.curr;
	_T1B = (char *)_T1A;
	*_T1B = _T32;
      }
    }_T1C = x;
    { struct _fat_ptr _T30 = _fat_ptr_plus(_T1C,sizeof(char),23);
      _T1D = _T30.curr;
      _T1E = (char *)_T1D;
      { char _T31 = *_T1E;
	char _T32 = '0';
	_T1F = _get_fat_size(_T30,sizeof(char));
	if (_T1F != 1U) { goto _TL210;
	}
	if (_T31 != 0) { goto _TL210;
	}
	if (_T32 == 0) { goto _TL210;
	}
	_throw_arraybounds();
	goto _TL211;
	_TL210: _TL211: _T20 = _T30.curr;
	_T21 = (char *)_T20;
	*_T21 = _T32;
      }
    }{ int index = 23;
      _TL212: if (i != 0U) { goto _TL213;
      }else { goto _TL214;
      }
      _TL213: _T22 = x;
      _T23 = index;
      index = _T23 + -1;
      _T24 = _T23;
      { struct _fat_ptr _T30 = _fat_ptr_plus(_T22,sizeof(char),_T24);
	_T25 = _T30.curr;
	_T26 = (char *)_T25;
	{ char _T31 = *_T26;
	  _T27 = i % 10U;
	  _T28 = 48U + _T27;
	  { char _T32 = (char)_T28;
	    _T29 = _get_fat_size(_T30,sizeof(char));
	    if (_T29 != 1U) { goto _TL215;
	    }
	    if (_T31 != 0) { goto _TL215;
	    }
	    if (_T32 == 0) { goto _TL215;
	    }
	    _throw_arraybounds();
	    goto _TL216;
	    _TL215: _TL216: _T2A = _T30.curr;
	    _T2B = (char *)_T2A;
	    *_T2B = _T32;
	  }
	}
      }i = i / 10U;
      goto _TL212;
      _TL214: _T2C = x;
      _T2D = index;
      _T2E = _fat_ptr_plus(_T2C,sizeof(char),_T2D);
      _T2F = _fat_ptr_plus(_T2E,sizeof(char),1);
      return _T2F;
    }
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_cnst2doc(union Cyc_Absyn_Cnst c) {
  union Cyc_Absyn_Cnst _T0;
  struct _union_Cnst_String_c _T1;
  unsigned int _T2;
  union Cyc_Absyn_Cnst _T3;
  struct _union_Cnst_Char_c _T4;
  struct _tuple4 _T5;
  union Cyc_Absyn_Cnst _T6;
  struct _union_Cnst_Char_c _T7;
  struct _tuple4 _T8;
  struct _fat_ptr _T9;
  struct Cyc_String_pa_PrintArg_struct _TA;
  char _TB;
  unsigned char _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct Cyc_PP_Doc * _TF;
  union Cyc_Absyn_Cnst _T10;
  struct _union_Cnst_Wchar_c _T11;
  struct _fat_ptr _T12;
  struct Cyc_String_pa_PrintArg_struct _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  struct Cyc_PP_Doc * _T16;
  union Cyc_Absyn_Cnst _T17;
  struct _union_Cnst_Short_c _T18;
  struct _tuple5 _T19;
  union Cyc_Absyn_Cnst _T1A;
  struct _union_Cnst_Short_c _T1B;
  struct _tuple5 _T1C;
  struct _fat_ptr _T1D;
  struct Cyc_Int_pa_PrintArg_struct _T1E;
  short _T1F;
  int _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct Cyc_PP_Doc * _T23;
  union Cyc_Absyn_Cnst _T24;
  struct _union_Cnst_Int_c _T25;
  struct _tuple6 _T26;
  union Cyc_Absyn_Cnst _T27;
  struct _union_Cnst_Int_c _T28;
  struct _tuple6 _T29;
  enum Cyc_Absyn_Sign _T2A;
  int _T2B;
  struct _fat_ptr _T2C;
  struct Cyc_Int_pa_PrintArg_struct _T2D;
  int _T2E;
  struct _fat_ptr _T2F;
  struct _fat_ptr _T30;
  struct Cyc_PP_Doc * _T31;
  struct _fat_ptr _T32;
  struct Cyc_Int_pa_PrintArg_struct _T33;
  int _T34;
  struct _fat_ptr _T35;
  struct _fat_ptr _T36;
  struct Cyc_PP_Doc * _T37;
  union Cyc_Absyn_Cnst _T38;
  struct _union_Cnst_LongLong_c _T39;
  struct _tuple7 _T3A;
  union Cyc_Absyn_Cnst _T3B;
  struct _union_Cnst_LongLong_c _T3C;
  struct _tuple7 _T3D;
  long long _T3E;
  unsigned long long _T3F;
  struct _fat_ptr _T40;
  struct Cyc_PP_Doc * _T41;
  union Cyc_Absyn_Cnst _T42;
  struct _union_Cnst_Int128_c _T43;
  struct _tuple7 _T44;
  union Cyc_Absyn_Cnst _T45;
  struct _union_Cnst_Int128_c _T46;
  struct _tuple7 _T47;
  long long _T48;
  unsigned long long _T49;
  struct _fat_ptr _T4A;
  struct Cyc_PP_Doc * _T4B;
  union Cyc_Absyn_Cnst _T4C;
  struct _union_Cnst_Float_c _T4D;
  struct _tuple8 _T4E;
  struct Cyc_PP_Doc * _T4F;
  struct _fat_ptr _T50;
  struct Cyc_PP_Doc * _T51;
  union Cyc_Absyn_Cnst _T52;
  struct _union_Cnst_String_c _T53;
  struct Cyc_PP_Doc * _T54;
  struct _fat_ptr _T55;
  struct _fat_ptr _T56;
  struct _fat_ptr _T57;
  struct _fat_ptr _T58;
  union Cyc_Absyn_Cnst _T59;
  struct _union_Cnst_Wstring_c _T5A;
  struct Cyc_PP_Doc * _T5B;
  struct _fat_ptr _T5C;
  struct _fat_ptr _T5D;
  struct _fat_ptr _T5E;
  long long _T5F;
  int _T60;
  short _T61;
  struct _fat_ptr _T62;
  char _T63;
  enum Cyc_Absyn_Sign _T64;
  _T0 = c;
  _T1 = _T0.String_c;
  _T2 = _T1.tag;
  switch (_T2) {
  case 2: 
    _T3 = c;
    _T4 = _T3.Char_c;
    _T5 = _T4.val;
    _T64 = _T5.f0;
    _T6 = c;
    _T7 = _T6.Char_c;
    _T8 = _T7.val;
    _T63 = _T8.f1;
    { enum Cyc_Absyn_Sign sg = _T64;
      char ch = _T63;
      { struct Cyc_String_pa_PrintArg_struct _T65;
	_T65.tag = 0;
	_TB = ch;
	_TC = (unsigned char)_TB;
	_T65.f1 = Cyc_Absynpp_char_escape(_TC);
	_TA = _T65;
      }{ struct Cyc_String_pa_PrintArg_struct _T65 = _TA;
	void * _T66[1];
	_T66[0] = &_T65;
	_TD = _tag_fat("'%s'",sizeof(char),5U);
	_TE = _tag_fat(_T66,sizeof(void *),1);
	_T9 = Cyc_aprintf(_TD,_TE);
      }_TF = Cyc_PP_text(_T9);
      return _TF;
    }
  case 3: 
    _T10 = c;
    _T11 = _T10.Wchar_c;
    _T62 = _T11.val;
    { struct _fat_ptr s = _T62;
      { struct Cyc_String_pa_PrintArg_struct _T65;
	_T65.tag = 0;
	_T65.f1 = s;
	_T13 = _T65;
      }{ struct Cyc_String_pa_PrintArg_struct _T65 = _T13;
	void * _T66[1];
	_T66[0] = &_T65;
	_T14 = _tag_fat("L'%s'",sizeof(char),6U);
	_T15 = _tag_fat(_T66,sizeof(void *),1);
	_T12 = Cyc_aprintf(_T14,_T15);
      }_T16 = Cyc_PP_text(_T12);
      return _T16;
    }
  case 4: 
    _T17 = c;
    _T18 = _T17.Short_c;
    _T19 = _T18.val;
    _T64 = _T19.f0;
    _T1A = c;
    _T1B = _T1A.Short_c;
    _T1C = _T1B.val;
    _T61 = _T1C.f1;
    { enum Cyc_Absyn_Sign sg = _T64;
      short s = _T61;
      { struct Cyc_Int_pa_PrintArg_struct _T65;
	_T65.tag = 1;
	_T1F = s;
	_T20 = (int)_T1F;
	_T65.f1 = (unsigned long)_T20;
	_T1E = _T65;
      }{ struct Cyc_Int_pa_PrintArg_struct _T65 = _T1E;
	void * _T66[1];
	_T66[0] = &_T65;
	_T21 = _tag_fat("%d",sizeof(char),3U);
	_T22 = _tag_fat(_T66,sizeof(void *),1);
	_T1D = Cyc_aprintf(_T21,_T22);
      }_T23 = Cyc_PP_text(_T1D);
      return _T23;
    }
  case 5: 
    _T24 = c;
    _T25 = _T24.Int_c;
    _T26 = _T25.val;
    _T64 = _T26.f0;
    _T27 = c;
    _T28 = _T27.Int_c;
    _T29 = _T28.val;
    _T60 = _T29.f1;
    { enum Cyc_Absyn_Sign sn = _T64;
      int i = _T60;
      _T2A = sn;
      _T2B = (int)_T2A;
      if (_T2B != 1) { goto _TL218;
      }
      { struct Cyc_Int_pa_PrintArg_struct _T65;
	_T65.tag = 1;
	_T2E = i;
	_T65.f1 = (unsigned int)_T2E;
	_T2D = _T65;
      }{ struct Cyc_Int_pa_PrintArg_struct _T65 = _T2D;
	void * _T66[1];
	_T66[0] = &_T65;
	_T2F = _tag_fat("%uU",sizeof(char),4U);
	_T30 = _tag_fat(_T66,sizeof(void *),1);
	_T2C = Cyc_aprintf(_T2F,_T30);
      }_T31 = Cyc_PP_text(_T2C);
      return _T31;
      _TL218: { struct Cyc_Int_pa_PrintArg_struct _T65;
	_T65.tag = 1;
	_T34 = i;
	_T65.f1 = (unsigned long)_T34;
	_T33 = _T65;
      }{ struct Cyc_Int_pa_PrintArg_struct _T65 = _T33;
	void * _T66[1];
	_T66[0] = &_T65;
	_T35 = _tag_fat("%d",sizeof(char),3U);
	_T36 = _tag_fat(_T66,sizeof(void *),1);
	_T32 = Cyc_aprintf(_T35,_T36);
      }_T37 = Cyc_PP_text(_T32);
      return _T37;
    }
  case 6: 
    _T38 = c;
    _T39 = _T38.LongLong_c;
    _T3A = _T39.val;
    _T64 = _T3A.f0;
    _T3B = c;
    _T3C = _T3B.LongLong_c;
    _T3D = _T3C.val;
    _T5F = _T3D.f1;
    { enum Cyc_Absyn_Sign sg = _T64;
      long long i = _T5F;
      _T3E = i;
      _T3F = (unsigned long long)_T3E;
      _T40 = Cyc_Absynpp_longlong2string(_T3F);
      _T41 = Cyc_PP_text(_T40);
      return _T41;
    }
  case 7: 
    _T42 = c;
    _T43 = _T42.Int128_c;
    _T44 = _T43.val;
    _T64 = _T44.f0;
    _T45 = c;
    _T46 = _T45.Int128_c;
    _T47 = _T46.val;
    _T5F = _T47.f1;
    { enum Cyc_Absyn_Sign sg = _T64;
      long long i = _T5F;
      _T48 = i;
      _T49 = (unsigned long long)_T48;
      _T4A = Cyc_Absynpp_longlong2string(_T49);
      _T4B = Cyc_PP_text(_T4A);
      return _T4B;
    }
  case 8: 
    _T4C = c;
    _T4D = _T4C.Float_c;
    _T4E = _T4D.val;
    _T62 = _T4E.f0;
    { struct _fat_ptr x = _T62;
      _T4F = Cyc_PP_text(x);
      return _T4F;
    }
  case 1: 
    _T50 = _tag_fat("NULL",sizeof(char),5U);
    _T51 = Cyc_PP_text(_T50);
    return _T51;
  case 9: 
    _T52 = c;
    _T53 = _T52.String_c;
    _T62 = _T53.val;
    { struct _fat_ptr s = _T62;
      { struct Cyc_PP_Doc * _T65[3];
	_T55 = _tag_fat("\"",sizeof(char),2U);
	_T65[0] = Cyc_PP_text(_T55);
	_T56 = Cyc_Absynpp_string_escape(s);
	_T65[1] = Cyc_PP_text(_T56);
	_T57 = _tag_fat("\"",sizeof(char),2U);
	_T65[2] = Cyc_PP_text(_T57);
	_T58 = _tag_fat(_T65,sizeof(struct Cyc_PP_Doc *),3);
	_T54 = Cyc_PP_cat(_T58);
      }return _T54;
    }
  default: 
    _T59 = c;
    _T5A = _T59.Wstring_c;
    _T62 = _T5A.val;
    { struct _fat_ptr s = _T62;
      { struct Cyc_PP_Doc * _T65[3];
	_T5C = _tag_fat("L\"",sizeof(char),3U);
	_T65[0] = Cyc_PP_text(_T5C);
	_T65[1] = Cyc_PP_text(s);
	_T5D = _tag_fat("\"",sizeof(char),2U);
	_T65[2] = Cyc_PP_text(_T5D);
	_T5E = _tag_fat(_T65,sizeof(struct Cyc_PP_Doc *),3);
	_T5B = Cyc_PP_cat(_T5E);
      }return _T5B;
    }
  }
  ;
}
struct Cyc_PP_Doc * Cyc_Absynpp_primapp2doc(int inprec,enum Cyc_Absyn_Primop p,
					    struct Cyc_List_List * es) {
  enum Cyc_Absyn_Primop _T0;
  int _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_String_pa_PrintArg_struct _T4;
  int (* _T5)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T6)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_PP_Doc * _T9;
  struct _fat_ptr _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  enum Cyc_Absyn_Primop _T10;
  int _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_String_pa_PrintArg_struct _T14;
  int (* _T15)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T16)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  struct Cyc_PP_Doc * _T19;
  struct _fat_ptr _T1A;
  struct Cyc_List_List * _T1B;
  void * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  struct Cyc_List_List * (* _T20)(struct Cyc_PP_Doc * (*)(int,struct Cyc_Absyn_Exp *),
				  int,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T21)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  int _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_String_pa_PrintArg_struct _T24;
  int (* _T25)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T26)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T27;
  struct _fat_ptr _T28;
  struct Cyc_List_List * _T29;
  struct Cyc_List_List * _T2A;
  struct Cyc_PP_Doc * _T2B;
  struct _fat_ptr _T2C;
  struct Cyc_List_List * _T2D;
  void * _T2E;
  struct _fat_ptr _T2F;
  struct Cyc_List_List * _T30;
  struct Cyc_List_List * _T31;
  struct Cyc_List_List * _T32;
  struct Cyc_String_pa_PrintArg_struct _T33;
  int (* _T34)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T35)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T36;
  struct _fat_ptr _T37;
  struct Cyc_PP_Doc * _T38;
  struct Cyc_List_List * _T39;
  void * _T3A;
  struct _fat_ptr _T3B;
  struct _fat_ptr _T3C;
  struct Cyc_List_List * _T3D;
  struct Cyc_List_List * _T3E;
  struct Cyc_List_List * _T3F;
  void * _T40;
  struct _fat_ptr _T41;
  struct Cyc_PP_Doc * ps = Cyc_Absynpp_prim2doc(p);
  _T0 = p;
  _T1 = (int)_T0;
  if (_T1 != 18) { goto _TL21A;
  }
  if (es == 0) { goto _TL21E;
  }else { goto _TL21F;
  }
  _TL21F: _T2 = es;
  _T3 = _T2->tl;
  if (_T3 != 0) { goto _TL21E;
  }else { goto _TL21C;
  }
  _TL21E: { struct Cyc_String_pa_PrintArg_struct _T42;
    _T42.tag = 0;
    _T42.f1 = Cyc_PP_string_of_doc(ps,72);
    _T4 = _T42;
  }{ struct Cyc_String_pa_PrintArg_struct _T42 = _T4;
    void * _T43[1];
    _T43[0] = &_T42;
    _T6 = Cyc_Warn_impos;
    { int (* _T44)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							       struct _fat_ptr))_T6;
      _T5 = _T44;
    }_T7 = _tag_fat("Absynpp::primapp2doc Numelts: %s with bad args",sizeof(char),
		    47U);
    _T8 = _tag_fat(_T43,sizeof(void *),1);
    _T5(_T7,_T8);
  }goto _TL21D;
  _TL21C: _TL21D: { struct Cyc_PP_Doc * _T42[3];
    _TA = _tag_fat("numelts(",sizeof(char),9U);
    _T42[0] = Cyc_PP_text(_TA);
    _TB = es;
    _TC = _TB->hd;
    _TD = (struct Cyc_Absyn_Exp *)_TC;
    _T42[1] = Cyc_Absynpp_exp2doc(_TD);
    _TE = _tag_fat(")",sizeof(char),2U);
    _T42[2] = Cyc_PP_text(_TE);
    _TF = _tag_fat(_T42,sizeof(struct Cyc_PP_Doc *),3);
    _T9 = Cyc_PP_cat(_TF);
  }return _T9;
  _TL21A: _T10 = p;
  _T11 = (int)_T10;
  if (_T11 != 19) { goto _TL220;
  }
  if (es == 0) { goto _TL224;
  }else { goto _TL225;
  }
  _TL225: _T12 = es;
  _T13 = _T12->tl;
  if (_T13 != 0) { goto _TL224;
  }else { goto _TL222;
  }
  _TL224: { struct Cyc_String_pa_PrintArg_struct _T42;
    _T42.tag = 0;
    _T42.f1 = Cyc_PP_string_of_doc(ps,72);
    _T14 = _T42;
  }{ struct Cyc_String_pa_PrintArg_struct _T42 = _T14;
    void * _T43[1];
    _T43[0] = &_T42;
    _T16 = Cyc_Warn_impos;
    { int (* _T44)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							       struct _fat_ptr))_T16;
      _T15 = _T44;
    }_T17 = _tag_fat("Absynpp::primapp2doc Tagof: %s with bad args",sizeof(char),
		     45U);
    _T18 = _tag_fat(_T43,sizeof(void *),1);
    _T15(_T17,_T18);
  }goto _TL223;
  _TL222: _TL223: { struct Cyc_PP_Doc * _T42[3];
    _T1A = _tag_fat("tagof(",sizeof(char),7U);
    _T42[0] = Cyc_PP_text(_T1A);
    _T1B = es;
    _T1C = _T1B->hd;
    _T1D = (struct Cyc_Absyn_Exp *)_T1C;
    _T42[1] = Cyc_Absynpp_exp2doc(_T1D);
    _T1E = _tag_fat(")",sizeof(char),2U);
    _T42[2] = Cyc_PP_text(_T1E);
    _T1F = _tag_fat(_T42,sizeof(struct Cyc_PP_Doc *),3);
    _T19 = Cyc_PP_cat(_T1F);
  }return _T19;
  _TL220: _T21 = Cyc_List_map_c;
  { struct Cyc_List_List * (* _T42)(struct Cyc_PP_Doc * (*)(int,struct Cyc_Absyn_Exp *),
				    int,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(int,
														      struct Cyc_Absyn_Exp *),
											      int,
											      struct Cyc_List_List *))_T21;
    _T20 = _T42;
  }_T22 = inprec;
  _T23 = es;
  { struct Cyc_List_List * ds = _T20(Cyc_Absynpp_exp2doc_prec,_T22,_T23);
    if (ds != 0) { goto _TL226;
    }
    { struct Cyc_String_pa_PrintArg_struct _T42;
      _T42.tag = 0;
      _T42.f1 = Cyc_PP_string_of_doc(ps,72);
      _T24 = _T42;
    }{ struct Cyc_String_pa_PrintArg_struct _T42 = _T24;
      void * _T43[1];
      _T43[0] = &_T42;
      _T26 = Cyc_Warn_impos;
      { int (* _T44)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_T26;
	_T25 = _T44;
      }_T27 = _tag_fat("Absynpp::primapp2doc: %s with no args",sizeof(char),
		       38U);
      _T28 = _tag_fat(_T43,sizeof(void *),1);
      _T25(_T27,_T28);
    }goto _TL227;
    _TL226: _TL227: _T29 = ds;
    _T2A = _T29->tl;
    if (_T2A != 0) { goto _TL228;
    }
    { struct Cyc_PP_Doc * _T42[3];
      _T42[0] = ps;
      _T2C = _tag_fat(" ",sizeof(char),2U);
      _T42[1] = Cyc_PP_text(_T2C);
      _T2D = ds;
      _T2E = _T2D->hd;
      _T42[2] = (struct Cyc_PP_Doc *)_T2E;
      _T2F = _tag_fat(_T42,sizeof(struct Cyc_PP_Doc *),3);
      _T2B = Cyc_PP_cat(_T2F);
    }return _T2B;
    _TL228: _T30 = ds;
    _T31 = _T30->tl;
    _T32 = _T31->tl;
    if (_T32 == 0) { goto _TL22A;
    }
    { struct Cyc_String_pa_PrintArg_struct _T42;
      _T42.tag = 0;
      _T42.f1 = Cyc_PP_string_of_doc(ps,72);
      _T33 = _T42;
    }{ struct Cyc_String_pa_PrintArg_struct _T42 = _T33;
      void * _T43[1];
      _T43[0] = &_T42;
      _T35 = Cyc_Warn_impos;
      { int (* _T44)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_T35;
	_T34 = _T44;
      }_T36 = _tag_fat("Absynpp::primapp2doc: %s with more than 2 args",sizeof(char),
		       47U);
      _T37 = _tag_fat(_T43,sizeof(void *),1);
      _T34(_T36,_T37);
    }goto _TL22B;
    _TL22A: _TL22B: { struct Cyc_PP_Doc * _T42[5];
      _T39 = ds;
      _T3A = _T39->hd;
      _T42[0] = (struct Cyc_PP_Doc *)_T3A;
      _T3B = _tag_fat(" ",sizeof(char),2U);
      _T42[1] = Cyc_PP_text(_T3B);
      _T42[2] = ps;
      _T3C = _tag_fat(" ",sizeof(char),2U);
      _T42[3] = Cyc_PP_text(_T3C);
      _T3D = ds;
      _T3E = _T3D->tl;
      _T3F = _check_null(_T3E);
      _T40 = _T3F->hd;
      _T42[4] = (struct Cyc_PP_Doc *)_T40;
      _T41 = _tag_fat(_T42,sizeof(struct Cyc_PP_Doc *),5);
      _T38 = Cyc_PP_cat(_T41);
    }return _T38;
  }
}
struct _fat_ptr Cyc_Absynpp_prim2str(enum Cyc_Absyn_Primop p) {
  enum Cyc_Absyn_Primop _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  int _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct _fat_ptr _T17;
  _T0 = p;
  _T1 = (int)_T0;
  switch (_T1) {
  case Cyc_Absyn_Plus: 
    _T2 = _tag_fat("+",sizeof(char),2U);
    return _T2;
  case Cyc_Absyn_Times: 
    _T3 = _tag_fat("*",sizeof(char),2U);
    return _T3;
  case Cyc_Absyn_Minus: 
    _T4 = _tag_fat("-",sizeof(char),2U);
    return _T4;
  case Cyc_Absyn_UDiv: 
    goto _LLA;
  case Cyc_Absyn_Div: 
    _LLA: _T5 = _tag_fat("/",sizeof(char),2U);
    return _T5;
  case Cyc_Absyn_UMod: 
    goto _LLE;
  case Cyc_Absyn_Mod: 
    _LLE: _T7 = Cyc_Absynpp_print_for_cycdoc;
    if (! _T7) { goto _TL22D;
    }
    _T6 = _tag_fat("\\%",sizeof(char),3U);
    goto _TL22E;
    _TL22D: _T6 = _tag_fat("%",sizeof(char),2U);
    _TL22E: return _T6;
  case Cyc_Absyn_Eq: 
    _T8 = _tag_fat("==",sizeof(char),3U);
    return _T8;
  case Cyc_Absyn_Neq: 
    _T9 = _tag_fat("!=",sizeof(char),3U);
    return _T9;
  case Cyc_Absyn_UGt: 
    goto _LL16;
  case Cyc_Absyn_Gt: 
    _LL16: _TA = _tag_fat(">",sizeof(char),2U);
    return _TA;
  case Cyc_Absyn_ULt: 
    goto _LL1A;
  case Cyc_Absyn_Lt: 
    _LL1A: _TB = _tag_fat("<",sizeof(char),2U);
    return _TB;
  case Cyc_Absyn_UGte: 
    goto _LL1E;
  case Cyc_Absyn_Gte: 
    _LL1E: _TC = _tag_fat(">=",sizeof(char),3U);
    return _TC;
  case Cyc_Absyn_ULte: 
    goto _LL22;
  case Cyc_Absyn_Lte: 
    _LL22: _TD = _tag_fat("<=",sizeof(char),3U);
    return _TD;
  case Cyc_Absyn_Not: 
    _TE = _tag_fat("!",sizeof(char),2U);
    return _TE;
  case Cyc_Absyn_Bitnot: 
    _TF = _tag_fat("~",sizeof(char),2U);
    return _TF;
  case Cyc_Absyn_Bitand: 
    _T10 = _tag_fat("&",sizeof(char),2U);
    return _T10;
  case Cyc_Absyn_Bitor: 
    _T11 = _tag_fat("|",sizeof(char),2U);
    return _T11;
  case Cyc_Absyn_Bitxor: 
    _T12 = _tag_fat("^",sizeof(char),2U);
    return _T12;
  case Cyc_Absyn_Bitlshift: 
    _T13 = _tag_fat("<<",sizeof(char),3U);
    return _T13;
  case Cyc_Absyn_Bitlrshift: 
    _T14 = _tag_fat(">>",sizeof(char),3U);
    return _T14;
  case Cyc_Absyn_Numelts: 
    _T15 = _tag_fat("numelts",sizeof(char),8U);
    return _T15;
  case Cyc_Absyn_Tagof: 
    _T16 = _tag_fat("tagof",sizeof(char),6U);
    return _T16;
  default: 
    _T17 = _tag_fat("?",sizeof(char),2U);
    return _T17;
  }
  ;
}
struct Cyc_PP_Doc * Cyc_Absynpp_prim2doc(enum Cyc_Absyn_Primop p) {
  struct _fat_ptr _T0;
  struct Cyc_PP_Doc * _T1;
  _T0 = Cyc_Absynpp_prim2str(p);
  _T1 = Cyc_PP_text(_T0);
  return _T1;
}
long Cyc_Absynpp_is_declaration(struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  int _T2;
  _T0 = s;
  { void * _T3 = _T0->r;
    _T1 = (int *)_T3;
    _T2 = *_T1;
    if (_T2 != 12) { goto _TL22F;
    }
    return 1;
    _TL22F: return 0;
    ;
  }
}
static long Cyc_Absynpp_is_region_decl(struct Cyc_Absyn_Decl * d) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  int _T2;
  _T0 = d;
  { void * _T3 = _T0->r;
    _T1 = (int *)_T3;
    _T2 = *_T1;
    if (_T2 != 4) { goto _TL231;
    }
    return 1;
    _TL231: return 0;
    ;
  }
}
struct _tuple14 Cyc_Absynpp_shadows(struct Cyc_Absyn_Decl * d,struct Cyc_List_List * varsinblock) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  int _T2;
  long (* _T3)(int (*)(struct _tuple1 *,struct _tuple1 *),struct Cyc_List_List *,
	       struct _tuple1 *);
  long (* _T4)(int (*)(void *,void *),struct Cyc_List_List *,void *);
  int (* _T5)(struct _tuple1 *,struct _tuple1 *);
  struct Cyc_List_List * _T6;
  struct Cyc_Absyn_Vardecl * _T7;
  struct _tuple1 * _T8;
  long _T9;
  struct _tuple14 _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_Absyn_Vardecl * _TC;
  struct _tuple14 _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_Absyn_Vardecl * _TF;
  struct _tuple14 _T10;
  _T0 = d;
  { void * _T11 = _T0->r;
    struct Cyc_Absyn_Vardecl * _T12;
    _T1 = (int *)_T11;
    _T2 = *_T1;
    if (_T2 != 0) { goto _TL233;
    }
    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T13 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T11;
      _T12 = _T13->f1;
    }{ struct Cyc_Absyn_Vardecl * vd = _T12;
      _T4 = Cyc_List_mem;
      { long (* _T13)(int (*)(struct _tuple1 *,struct _tuple1 *),struct Cyc_List_List *,
		      struct _tuple1 *) = (long (*)(int (*)(struct _tuple1 *,
							    struct _tuple1 *),
						    struct Cyc_List_List *,
						    struct _tuple1 *))_T4;
	_T3 = _T13;
      }_T5 = Cyc_Absyn_qvar_cmp;
      _T6 = varsinblock;
      _T7 = vd;
      _T8 = _T7->name;
      _T9 = _T3(_T5,_T6,_T8);
      if (! _T9) { goto _TL235;
      }
      { struct _tuple14 _T13;
	_T13.f0 = 1;
	{ struct Cyc_List_List * _T14 = _cycalloc(sizeof(struct Cyc_List_List));
	  _TC = vd;
	  _T14->hd = _TC->name;
	  _T14->tl = 0;
	  _TB = (struct Cyc_List_List *)_T14;
	}_T13.f1 = _TB;
	_TA = _T13;
      }return _TA;
      _TL235: { struct _tuple14 _T13;
	_T13.f0 = 0;
	{ struct Cyc_List_List * _T14 = _cycalloc(sizeof(struct Cyc_List_List));
	  _TF = vd;
	  _T14->hd = _TF->name;
	  _T14->tl = varsinblock;
	  _TE = (struct Cyc_List_List *)_T14;
	}_T13.f1 = _TE;
	_TD = _T13;
      }return _TD;
    }_TL233: { struct _tuple14 _T13;
      _T13.f0 = 0;
      _T13.f1 = varsinblock;
      _T10 = _T13;
    }return _T10;
    ;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_block(long stmtexp,struct Cyc_PP_Doc * d) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  long _T2;
  struct Cyc_PP_Doc * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc_PP_Doc * _T7;
  { struct Cyc_PP_Doc * _T8[5];
    _T8[0] = Cyc_Absynpp_lb();
    _T8[1] = Cyc_PP_blank_doc();
    _T8[2] = Cyc_PP_nest(2,d);
    _T8[3] = Cyc_PP_line_doc();
    _T8[4] = Cyc_Absynpp_rb();
    _T1 = _tag_fat(_T8,sizeof(struct Cyc_PP_Doc *),5);
    _T0 = Cyc_PP_cat(_T1);
  }{ struct Cyc_PP_Doc * block = _T0;
    _T2 = stmtexp;
    if (! _T2) { goto _TL237;
    }
    { struct Cyc_PP_Doc * _T8[4];
      _T4 = _tag_fat("(",sizeof(char),2U);
      _T8[0] = Cyc_PP_text(_T4);
      _T8[1] = block;
      _T5 = _tag_fat(");",sizeof(char),3U);
      _T8[2] = Cyc_PP_text(_T5);
      _T8[3] = Cyc_PP_line_doc();
      _T6 = _tag_fat(_T8,sizeof(struct Cyc_PP_Doc *),4);
      _T3 = Cyc_PP_cat(_T6);
    }block = _T3;
    goto _TL238;
    _TL237: _TL238: _T7 = block;
    return _T7;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_stmt2doc(struct Cyc_Absyn_Stmt * st,long stmtexp,
					 struct Cyc_List_List * varsinblock,
					 long prevdecl) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct Cyc_PP_Doc * _T4;
  struct Cyc_PP_Doc * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  long _T8;
  struct Cyc_PP_Doc * _T9;
  struct _fat_ptr _TA;
  long _TB;
  struct Cyc_PP_Doc * _TC;
  struct Cyc_PP_Doc * _TD;
  long _TE;
  long _TF;
  struct Cyc_PP_Doc * _T10;
  struct _fat_ptr _T11;
  long _T12;
  struct Cyc_PP_Doc * _T13;
  long _T14;
  struct Cyc_PP_Doc * _T15;
  struct _fat_ptr _T16;
  struct Cyc_PP_Doc * _T17;
  struct _fat_ptr _T18;
  struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T19;
  struct Cyc_Absyn_Exp * _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_PP_Doc * _T1C;
  struct Cyc_PP_Doc * _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct Cyc_Absyn_Stmt * _T21;
  int * _T22;
  int _T23;
  struct Cyc_PP_Doc * _T24;
  struct _fat_ptr _T25;
  struct _fat_ptr _T26;
  struct Cyc_PP_Doc * _T27;
  long _T28;
  struct Cyc_PP_Doc * _T29;
  struct _fat_ptr _T2A;
  struct Cyc_PP_Doc * _T2B;
  struct _fat_ptr _T2C;
  struct _fat_ptr _T2D;
  struct _tuple10 _T2E;
  struct Cyc_PP_Doc * _T2F;
  struct _fat_ptr _T30;
  struct _fat_ptr _T31;
  struct Cyc_PP_Doc * _T32;
  struct _fat_ptr _T33;
  struct _fat_ptr _T34;
  struct Cyc_PP_Doc * _T35;
  struct _fat_ptr _T36;
  struct Cyc_PP_Doc * _T37;
  struct _fat_ptr _T38;
  struct Cyc_String_pa_PrintArg_struct _T39;
  struct _fat_ptr * _T3A;
  struct _fat_ptr _T3B;
  struct _fat_ptr _T3C;
  struct Cyc_PP_Doc * _T3D;
  struct _tuple10 _T3E;
  struct _tuple10 _T3F;
  struct Cyc_PP_Doc * _T40;
  struct _fat_ptr _T41;
  struct _fat_ptr _T42;
  struct _fat_ptr _T43;
  struct _fat_ptr _T44;
  struct Cyc_PP_Doc * _T45;
  struct _fat_ptr _T46;
  struct Cyc_PP_Doc * _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  struct _fat_ptr _T4A;
  struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct * _T4B;
  struct Cyc_List_List * _T4C;
  struct _fat_ptr _T4D;
  struct Cyc_PP_Doc * _T4E;
  struct Cyc_PP_Doc * _T4F;
  struct _fat_ptr _T50;
  struct _fat_ptr _T51;
  struct _fat_ptr _T52;
  struct Cyc_PP_Doc * _T53;
  struct _fat_ptr _T54;
  long _T55;
  long _T56;
  struct Cyc_PP_Doc * _T57;
  long _T58;
  long _T59;
  struct Cyc_PP_Doc * _T5A;
  struct _fat_ptr _T5B;
  long _T5C;
  struct Cyc_PP_Doc * _T5D;
  struct _fat_ptr _T5E;
  struct Cyc_PP_Doc * _T5F;
  struct _fat_ptr _T60;
  struct _fat_ptr _T61;
  struct _tuple10 _T62;
  struct Cyc_PP_Doc * _T63;
  struct _fat_ptr _T64;
  struct Cyc_PP_Doc * _T65;
  struct _fat_ptr _T66;
  struct _fat_ptr _T67;
  struct _fat_ptr _T68;
  struct Cyc_PP_Doc * _T69;
  struct _fat_ptr _T6A;
  struct Cyc_PP_Doc * _T6B;
  struct _fat_ptr _T6C;
  struct Cyc_PP_Doc * _T6D;
  struct _fat_ptr _T6E;
  _T0 = st;
  { void * _T6F = _T0->r;
    struct Cyc_Absyn_Decl * _T70;
    struct Cyc_List_List * _T71;
    struct Cyc_Absyn_Exp * _T72;
    struct Cyc_Absyn_Exp * _T73;
    struct _fat_ptr * _T74;
    struct Cyc_Absyn_Stmt * _T75;
    struct Cyc_Absyn_Stmt * _T76;
    struct Cyc_Absyn_Exp * _T77;
    _T1 = (int *)_T6F;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      _T3 = _tag_fat(";",sizeof(char),2U);
      _T4 = Cyc_PP_text(_T3);
      return _T4;
    case 1: 
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_T6F;
	_T77 = _T78->f1;
      }{ struct Cyc_Absyn_Exp * e = _T77;
	{ struct Cyc_PP_Doc * _T78[2];
	  _T78[0] = Cyc_Absynpp_exp2doc(e);
	  _T6 = _tag_fat(";",sizeof(char),2U);
	  _T78[1] = Cyc_PP_text(_T6);
	  _T7 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),2);
	  _T5 = Cyc_PP_cat(_T7);
	}return _T5;
      }
    case 2: 
      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T6F;
	_T76 = _T78->f1;
	_T75 = _T78->f2;
      }{ struct Cyc_Absyn_Stmt * s1 = _T76;
	struct Cyc_Absyn_Stmt * s2 = _T75;
	_T8 = Cyc_Absynpp_decls_first;
	if (_T8) { goto _TL23A;
	}else { goto _TL23C;
	}
	_TL23C: { struct Cyc_PP_Doc * _T78[3];
	  _T78[0] = Cyc_Absynpp_stmt2doc(s1,0,0,prevdecl);
	  _T78[1] = Cyc_PP_line_doc();
	  _T78[2] = Cyc_Absynpp_stmt2doc(s2,stmtexp,0,0);
	  _TA = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),3);
	  _T9 = Cyc_PP_cat(_TA);
	}return _T9;
	_TL23A: _TB = Cyc_Absynpp_is_declaration(s1);
	if (! _TB) { goto _TL23D;
	}
	{ struct Cyc_PP_Doc * _T78[2];
	  _TD = Cyc_Absynpp_stmt2doc(s1,0,0,prevdecl);
	  _T78[0] = Cyc_Absynpp_block(0,_TD);
	  _TE = Cyc_Absynpp_is_declaration(s2);
	  if (! _TE) { goto _TL23F;
	  }
	  _TF = stmtexp;
	  _T10 = Cyc_Absynpp_stmt2doc(s2,stmtexp,0,0);
	  _T78[1] = Cyc_Absynpp_block(_TF,_T10);
	  goto _TL240;
	  _TL23F: _T78[1] = Cyc_Absynpp_stmt2doc(s2,stmtexp,varsinblock,0);
	  _TL240: _T11 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),2);
	  _TC = Cyc_PP_cat(_T11);
	}return _TC;
	_TL23D: _T12 = Cyc_Absynpp_is_declaration(s2);
	if (! _T12) { goto _TL241;
	}
	{ struct Cyc_PP_Doc * _T78[3];
	  _T78[0] = Cyc_Absynpp_stmt2doc(s1,0,varsinblock,prevdecl);
	  _T78[1] = Cyc_PP_line_doc();
	  _T14 = stmtexp;
	  _T15 = Cyc_Absynpp_stmt2doc(s2,stmtexp,0,0);
	  _T78[2] = Cyc_Absynpp_block(_T14,_T15);
	  _T16 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),3);
	  _T13 = Cyc_PP_cat(_T16);
	}return _T13;
	_TL241: { struct Cyc_PP_Doc * _T78[3];
	  _T78[0] = Cyc_Absynpp_stmt2doc(s1,0,varsinblock,prevdecl);
	  _T78[1] = Cyc_PP_line_doc();
	  _T78[2] = Cyc_Absynpp_stmt2doc(s2,stmtexp,varsinblock,0);
	  _T18 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),3);
	  _T17 = Cyc_PP_cat(_T18);
	}return _T17;
      }
    case 3: 
      _T19 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T6F;
      _T1A = _T19->f1;
      if (_T1A != 0) { goto _TL243;
      }
      _T1B = _tag_fat("return;",sizeof(char),8U);
      _T1C = Cyc_PP_text(_T1B);
      return _T1C;
      _TL243: { struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T6F;
	_T77 = _T78->f1;
      }{ struct Cyc_Absyn_Exp * eopt = _T77;
	{ struct Cyc_PP_Doc * _T78[3];
	  _T1E = _tag_fat("return ",sizeof(char),8U);
	  _T78[0] = Cyc_PP_text(_T1E);
	  _T78[1] = Cyc_Absynpp_exp2doc(eopt);
	  _T1F = _tag_fat(";",sizeof(char),2U);
	  _T78[2] = Cyc_PP_text(_T1F);
	  _T20 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),3);
	  _T1D = Cyc_PP_cat(_T20);
	}return _T1D;
      }
    case 4: 
      { struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct *)_T6F;
	_T77 = _T78->f1;
	_T76 = _T78->f2;
	_T75 = _T78->f3;
      }{ struct Cyc_Absyn_Exp * e = _T77;
	struct Cyc_Absyn_Stmt * s1 = _T76;
	struct Cyc_Absyn_Stmt * s2 = _T75;
	long print_else;
	_T21 = s2;
	{ void * _T78 = _T21->r;
	  _T22 = (int *)_T78;
	  _T23 = *_T22;
	  if (_T23 != 0) { goto _TL245;
	  }
	  print_else = 0;
	  goto _LL25;
	  _TL245: print_else = 1;
	  goto _LL25;
	  _LL25: ;
	}{ struct Cyc_PP_Doc * _T78[5];
	  _T25 = _tag_fat("if (",sizeof(char),5U);
	  _T78[0] = Cyc_PP_text(_T25);
	  _T78[1] = Cyc_Absynpp_exp2doc(e);
	  _T26 = _tag_fat(") ",sizeof(char),3U);
	  _T78[2] = Cyc_PP_text(_T26);
	  _T27 = Cyc_Absynpp_stmt2doc(s1,0,0,1);
	  _T78[3] = Cyc_Absynpp_block(0,_T27);
	  _T28 = print_else;
	  if (! _T28) { goto _TL247;
	  }
	  { struct Cyc_PP_Doc * _T79[2];
	    _T2A = _tag_fat("else ",sizeof(char),6U);
	    _T79[0] = Cyc_PP_text(_T2A);
	    _T2B = Cyc_Absynpp_stmt2doc(s2,0,0,1);
	    _T79[1] = Cyc_Absynpp_block(0,_T2B);
	    _T2C = _tag_fat(_T79,sizeof(struct Cyc_PP_Doc *),2);
	    _T29 = Cyc_PP_cat(_T2C);
	  }_T78[4] = _T29;
	  goto _TL248;
	  _TL247: _T78[4] = Cyc_PP_nil_doc();
	  _TL248: _T2D = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),5);
	  _T24 = Cyc_PP_cat(_T2D);
	}return _T24;
      }
    case 5: 
      { struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct *)_T6F;
	_T2E = _T78->f1;
	_T77 = _T2E.f0;
	_T76 = _T78->f2;
      }{ struct Cyc_Absyn_Exp * e = _T77;
	struct Cyc_Absyn_Stmt * s1 = _T76;
	{ struct Cyc_PP_Doc * _T78[4];
	  _T30 = _tag_fat("while (",sizeof(char),8U);
	  _T78[0] = Cyc_PP_text(_T30);
	  _T78[1] = Cyc_Absynpp_exp2doc(e);
	  _T31 = _tag_fat(") ",sizeof(char),3U);
	  _T78[2] = Cyc_PP_text(_T31);
	  _T32 = Cyc_Absynpp_stmt2doc(s1,0,0,1);
	  _T78[3] = Cyc_Absynpp_block(0,_T32);
	  _T33 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),4);
	  _T2F = Cyc_PP_cat(_T33);
	}return _T2F;
      }
    case 6: 
      _T34 = _tag_fat("break;",sizeof(char),7U);
      _T35 = Cyc_PP_text(_T34);
      return _T35;
    case 7: 
      _T36 = _tag_fat("continue;",sizeof(char),10U);
      _T37 = Cyc_PP_text(_T36);
      return _T37;
    case 8: 
      { struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct *)_T6F;
	_T74 = _T78->f1;
      }{ struct _fat_ptr * x = _T74;
	{ struct Cyc_String_pa_PrintArg_struct _T78;
	  _T78.tag = 0;
	  _T3A = x;
	  _T78.f1 = *_T3A;
	  _T39 = _T78;
	}{ struct Cyc_String_pa_PrintArg_struct _T78 = _T39;
	  void * _T79[1];
	  _T79[0] = &_T78;
	  _T3B = _tag_fat("goto %s;",sizeof(char),9U);
	  _T3C = _tag_fat(_T79,sizeof(void *),1);
	  _T38 = Cyc_aprintf(_T3B,_T3C);
	}_T3D = Cyc_PP_text(_T38);
	return _T3D;
      }
    case 9: 
      { struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct *)_T6F;
	_T77 = _T78->f1;
	_T3E = _T78->f2;
	_T73 = _T3E.f0;
	_T3F = _T78->f3;
	_T72 = _T3F.f0;
	_T76 = _T78->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T77;
	struct Cyc_Absyn_Exp * e2 = _T73;
	struct Cyc_Absyn_Exp * e3 = _T72;
	struct Cyc_Absyn_Stmt * s1 = _T76;
	{ struct Cyc_PP_Doc * _T78[8];
	  _T41 = _tag_fat("for(",sizeof(char),5U);
	  _T78[0] = Cyc_PP_text(_T41);
	  _T78[1] = Cyc_Absynpp_exp2doc(e1);
	  _T42 = _tag_fat("; ",sizeof(char),3U);
	  _T78[2] = Cyc_PP_text(_T42);
	  _T78[3] = Cyc_Absynpp_exp2doc(e2);
	  _T43 = _tag_fat("; ",sizeof(char),3U);
	  _T78[4] = Cyc_PP_text(_T43);
	  _T78[5] = Cyc_Absynpp_exp2doc(e3);
	  _T44 = _tag_fat(") ",sizeof(char),3U);
	  _T78[6] = Cyc_PP_text(_T44);
	  _T45 = Cyc_Absynpp_stmt2doc(s1,0,0,1);
	  _T78[7] = Cyc_Absynpp_block(0,_T45);
	  _T46 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),8);
	  _T40 = Cyc_PP_cat(_T46);
	}return _T40;
      }
    case 10: 
      { struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_T6F;
	_T77 = _T78->f1;
	_T71 = _T78->f2;
      }{ struct Cyc_Absyn_Exp * e = _T77;
	struct Cyc_List_List * ss = _T71;
	{ struct Cyc_PP_Doc * _T78[8];
	  _T48 = _tag_fat("switch (",sizeof(char),9U);
	  _T78[0] = Cyc_PP_text(_T48);
	  _T78[1] = Cyc_Absynpp_exp2doc(e);
	  _T49 = _tag_fat(") ",sizeof(char),3U);
	  _T78[2] = Cyc_PP_text(_T49);
	  _T78[3] = Cyc_Absynpp_lb();
	  _T78[4] = Cyc_PP_line_doc();
	  _T78[5] = Cyc_Absynpp_switchclauses2doc(ss);
	  _T78[6] = Cyc_PP_line_doc();
	  _T78[7] = Cyc_Absynpp_rb();
	  _T4A = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),8);
	  _T47 = Cyc_PP_cat(_T4A);
	}return _T47;
      }
    case 11: 
      _T4B = (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct *)_T6F;
      _T4C = _T4B->f1;
      if (_T4C != 0) { goto _TL249;
      }
      _T4D = _tag_fat("fallthru;",sizeof(char),10U);
      _T4E = Cyc_PP_text(_T4D);
      return _T4E;
      _TL249: { struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct *)_T6F;
	_T71 = _T78->f1;
      }{ struct Cyc_List_List * es = _T71;
	{ struct Cyc_PP_Doc * _T78[3];
	  _T50 = _tag_fat("fallthru(",sizeof(char),10U);
	  _T78[0] = Cyc_PP_text(_T50);
	  _T78[1] = Cyc_Absynpp_exps2doc_prec(20,es);
	  _T51 = _tag_fat(");",sizeof(char),3U);
	  _T78[2] = Cyc_PP_text(_T51);
	  _T52 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),3);
	  _T4F = Cyc_PP_cat(_T52);
	}return _T4F;
      }
    case 12: 
      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T6F;
	_T70 = _T78->f1;
	_T76 = _T78->f2;
      }{ struct Cyc_Absyn_Decl * d = _T70;
	struct Cyc_Absyn_Stmt * s1 = _T76;
	struct _tuple14 _T78 = Cyc_Absynpp_shadows(d,varsinblock);
	struct Cyc_List_List * _T79;
	long _T7A;
	_T7A = _T78.f0;
	_T79 = _T78.f1;
	{ long newblock = _T7A;
	  struct Cyc_List_List * newvarsinblock = _T79;
	  { struct Cyc_PP_Doc * _T7B[3];
	    _T7B[0] = Cyc_Absynpp_decl2doc(d);
	    _T7B[1] = Cyc_PP_line_doc();
	    _T7B[2] = Cyc_Absynpp_stmt2doc(s1,stmtexp,newvarsinblock,1);
	    _T54 = _tag_fat(_T7B,sizeof(struct Cyc_PP_Doc *),3);
	    _T53 = Cyc_PP_cat(_T54);
	  }{ struct Cyc_PP_Doc * s = _T53;
	    _T55 = newblock;
	    if (_T55) { goto _TL24D;
	    }else { goto _TL24E;
	    }
	    _TL24E: _T56 = Cyc_Absynpp_gen_clean_cyclone;
	    if (_T56) { goto _TL24D;
	    }else { goto _TL24B;
	    }
	    _TL24D: s = Cyc_Absynpp_block(stmtexp,s);
	    goto _TL24C;
	    _TL24B: _TL24C: _T57 = s;
	    return _T57;
	  }
	}
      }
    case 13: 
      { struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_T6F;
	_T74 = _T78->f1;
	_T76 = _T78->f2;
      }{ struct _fat_ptr * x = _T74;
	struct Cyc_Absyn_Stmt * s1 = _T76;
	_T58 = Cyc_Absynpp_decls_first;
	if (! _T58) { goto _TL24F;
	}
	_T59 = Cyc_Absynpp_is_declaration(s1);
	if (! _T59) { goto _TL24F;
	}
	{ struct Cyc_PP_Doc * _T78[3];
	  _T78[0] = Cyc_PP_textptr(x);
	  _T5B = _tag_fat(": ",sizeof(char),3U);
	  _T78[1] = Cyc_PP_text(_T5B);
	  _T5C = stmtexp;
	  _T5D = Cyc_Absynpp_stmt2doc(s1,stmtexp,0,0);
	  _T78[2] = Cyc_Absynpp_block(_T5C,_T5D);
	  _T5E = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),3);
	  _T5A = Cyc_PP_cat(_T5E);
	}return _T5A;
	_TL24F: { struct Cyc_PP_Doc * _T78[3];
	  _T78[0] = Cyc_PP_textptr(x);
	  _T60 = _tag_fat(": ",sizeof(char),3U);
	  _T78[1] = Cyc_PP_text(_T60);
	  _T78[2] = Cyc_Absynpp_stmt2doc(s1,stmtexp,varsinblock,0);
	  _T61 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),3);
	  _T5F = Cyc_PP_cat(_T61);
	}return _T5F;
      }
    case 14: 
      { struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct *)_T6F;
	_T76 = _T78->f1;
	_T62 = _T78->f2;
	_T77 = _T62.f0;
      }{ struct Cyc_Absyn_Stmt * s1 = _T76;
	struct Cyc_Absyn_Exp * e = _T77;
	{ struct Cyc_PP_Doc * _T78[5];
	  _T64 = _tag_fat("do ",sizeof(char),4U);
	  _T78[0] = Cyc_PP_text(_T64);
	  _T65 = Cyc_Absynpp_stmt2doc(s1,0,0,1);
	  _T78[1] = Cyc_Absynpp_block(0,_T65);
	  _T66 = _tag_fat(" while (",sizeof(char),9U);
	  _T78[2] = Cyc_PP_text(_T66);
	  _T78[3] = Cyc_Absynpp_exp2doc(e);
	  _T67 = _tag_fat(");",sizeof(char),3U);
	  _T78[4] = Cyc_PP_text(_T67);
	  _T68 = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),5);
	  _T63 = Cyc_PP_cat(_T68);
	}return _T63;
      }
    default: 
      { struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct * _T78 = (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct *)_T6F;
	_T76 = _T78->f1;
	_T71 = _T78->f2;
      }{ struct Cyc_Absyn_Stmt * s1 = _T76;
	struct Cyc_List_List * ss = _T71;
	{ struct Cyc_PP_Doc * _T78[4];
	  _T6A = _tag_fat("try ",sizeof(char),5U);
	  _T78[0] = Cyc_PP_text(_T6A);
	  _T6B = Cyc_Absynpp_stmt2doc(s1,0,0,1);
	  _T78[1] = Cyc_Absynpp_block(0,_T6B);
	  _T6C = _tag_fat(" catch ",sizeof(char),8U);
	  _T78[2] = Cyc_PP_text(_T6C);
	  _T6D = Cyc_Absynpp_switchclauses2doc(ss);
	  _T78[3] = Cyc_Absynpp_block(0,_T6D);
	  _T6E = _tag_fat(_T78,sizeof(struct Cyc_PP_Doc *),4);
	  _T69 = Cyc_PP_cat(_T6E);
	}return _T69;
      }
    }
    ;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_pat2doc(struct Cyc_Absyn_Pat * p) {
  struct Cyc_Absyn_Pat * _T0;
  int * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct Cyc_PP_Doc * _T4;
  struct _fat_ptr _T5;
  struct Cyc_PP_Doc * _T6;
  enum Cyc_Absyn_Sign _T7;
  int _T8;
  struct _fat_ptr _T9;
  struct Cyc_Int_pa_PrintArg_struct _TA;
  int _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct Cyc_PP_Doc * _TE;
  struct _fat_ptr _TF;
  struct Cyc_Int_pa_PrintArg_struct _T10;
  int _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc_PP_Doc * _T14;
  struct _fat_ptr _T15;
  struct Cyc_String_pa_PrintArg_struct _T16;
  char _T17;
  unsigned char _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct Cyc_PP_Doc * _T1B;
  struct Cyc_PP_Doc * _T1C;
  struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T1D;
  struct Cyc_Absyn_Pat * _T1E;
  struct Cyc_Absyn_Pat * _T1F;
  void * _T20;
  int * _T21;
  int _T22;
  struct Cyc_Absyn_Vardecl * _T23;
  struct _tuple1 * _T24;
  struct Cyc_PP_Doc * _T25;
  struct Cyc_PP_Doc * _T26;
  struct Cyc_Absyn_Vardecl * _T27;
  struct _tuple1 * _T28;
  struct _fat_ptr _T29;
  struct _fat_ptr _T2A;
  struct Cyc_PP_Doc * _T2B;
  struct _fat_ptr _T2C;
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr _T2F;
  struct Cyc_PP_Doc * _T30;
  struct Cyc_Absyn_Vardecl * _T31;
  struct _tuple1 * _T32;
  struct _fat_ptr _T33;
  struct _fat_ptr _T34;
  struct _fat_ptr _T35;
  struct Cyc_PP_Doc * _T36;
  struct _fat_ptr _T37;
  struct _fat_ptr _T38;
  struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _T39;
  struct Cyc_Absyn_Pat * _T3A;
  struct Cyc_Absyn_Pat * _T3B;
  void * _T3C;
  int * _T3D;
  int _T3E;
  struct Cyc_PP_Doc * _T3F;
  struct _fat_ptr _T40;
  struct Cyc_Absyn_Vardecl * _T41;
  struct _tuple1 * _T42;
  struct _fat_ptr _T43;
  struct Cyc_PP_Doc * _T44;
  struct _fat_ptr _T45;
  struct Cyc_Absyn_Vardecl * _T46;
  struct _tuple1 * _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  struct Cyc_PP_Doc * _T4A;
  struct _fat_ptr _T4B;
  long _T4C;
  struct Cyc_PP_Doc * _T4D;
  struct _fat_ptr _T4E;
  struct _fat_ptr _T4F;
  struct _fat_ptr _T50;
  struct Cyc_List_List * (* _T51)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Pat *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T52)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T53;
  struct Cyc_List_List * _T54;
  struct _fat_ptr _T55;
  void * _T56;
  long _T57;
  struct Cyc_PP_Doc * _T58;
  struct _fat_ptr _T59;
  struct Cyc_PP_Doc * (* _T5A)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Pat *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T5B)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _T5C;
  struct Cyc_List_List * (* _T5D)(struct Cyc_Absyn_Pat * (*)(struct _tuple18 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T5E)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Pat * (* _T5F)(struct _tuple18 *);
  void * (* _T60)(struct _tuple0 *);
  struct Cyc_List_List * _T61;
  struct Cyc_List_List * _T62;
  long _T63;
  struct _fat_ptr _T64;
  struct _fat_ptr _T65;
  struct _fat_ptr _T66;
  struct _fat_ptr _T67;
  long _T68;
  int * _T69;
  int _T6A;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6B;
  void * _T6C;
  int * _T6D;
  int _T6E;
  void * _T6F;
  struct Cyc_PP_Doc * _T70;
  struct _fat_ptr _T71;
  struct _fat_ptr _T72;
  struct _fat_ptr _T73;
  struct Cyc_List_List * (* _T74)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T75)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T76;
  struct Cyc_List_List * _T77;
  struct _fat_ptr _T78;
  struct _fat_ptr _T79;
  struct _fat_ptr _T7A;
  struct Cyc_List_List * (* _T7B)(struct Cyc_PP_Doc * (*)(struct _tuple18 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T7C)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T7D)(struct _tuple18 *);
  struct Cyc_List_List * _T7E;
  struct Cyc_List_List * _T7F;
  struct _fat_ptr _T80;
  struct Cyc_PP_Doc * _T81;
  struct _fat_ptr _T82;
  struct _fat_ptr _T83;
  struct _fat_ptr _T84;
  struct Cyc_List_List * (* _T85)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T86)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T87;
  struct Cyc_List_List * _T88;
  struct _fat_ptr _T89;
  struct _fat_ptr _T8A;
  struct _fat_ptr _T8B;
  struct Cyc_List_List * (* _T8C)(struct Cyc_PP_Doc * (*)(struct _tuple18 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T8D)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T8E)(struct _tuple18 *);
  struct Cyc_List_List * _T8F;
  struct Cyc_List_List * _T90;
  struct _fat_ptr _T91;
  struct Cyc_Absyn_Enumfield * _T92;
  struct _tuple1 * _T93;
  struct Cyc_PP_Doc * _T94;
  struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T95;
  struct Cyc_List_List * _T96;
  struct Cyc_Absyn_Datatypefield * _T97;
  struct _tuple1 * _T98;
  struct Cyc_PP_Doc * _T99;
  struct _fat_ptr _T9A;
  long _T9B;
  struct Cyc_PP_Doc * _T9C;
  struct Cyc_Absyn_Datatypefield * _T9D;
  struct _tuple1 * _T9E;
  struct _fat_ptr _T9F;
  struct _fat_ptr _TA0;
  struct _fat_ptr _TA1;
  struct Cyc_List_List * (* _TA2)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Pat *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TA3)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _TA4;
  struct Cyc_List_List * _TA5;
  struct _fat_ptr _TA6;
  struct Cyc_PP_Doc * _TA7;
  _T0 = p;
  { void * _TA8 = _T0->r;
    struct Cyc_Absyn_Exp * _TA9;
    struct Cyc_Absyn_Datatypefield * _TAA;
    struct Cyc_Absyn_Enumfield * _TAB;
    long _TAC;
    struct Cyc_List_List * _TAD;
    struct Cyc_List_List * _TAE;
    struct Cyc_Absyn_Vardecl * _TAF;
    struct Cyc_Absyn_Pat * _TB0;
    void * _TB1;
    struct _fat_ptr _TB2;
    char _TB3;
    long _TB4;
    enum Cyc_Absyn_Sign _TB5;
    _T1 = (int *)_TA8;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      _T3 = _tag_fat("_",sizeof(char),2U);
      _T4 = Cyc_PP_text(_T3);
      return _T4;
    case 8: 
      _T5 = _tag_fat("NULL",sizeof(char),5U);
      _T6 = Cyc_PP_text(_T5);
      return _T6;
    case 9: 
      { struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct *)_TA8;
	_TB5 = _TB6->f1;
	_TB4 = _TB6->f2;
      }{ enum Cyc_Absyn_Sign sg = _TB5;
	int i = _TB4;
	_T7 = sg;
	_T8 = (int)_T7;
	if (_T8 == 1) { goto _TL252;
	}
	{ struct Cyc_Int_pa_PrintArg_struct _TB6;
	  _TB6.tag = 1;
	  _TB = i;
	  _TB6.f1 = (unsigned long)_TB;
	  _TA = _TB6;
	}{ struct Cyc_Int_pa_PrintArg_struct _TB6 = _TA;
	  void * _TB7[1];
	  _TB7[0] = &_TB6;
	  _TC = _tag_fat("%d",sizeof(char),3U);
	  _TD = _tag_fat(_TB7,sizeof(void *),1);
	  _T9 = Cyc_aprintf(_TC,_TD);
	}_TE = Cyc_PP_text(_T9);
	return _TE;
	_TL252: { struct Cyc_Int_pa_PrintArg_struct _TB6;
	  _TB6.tag = 1;
	  _T11 = i;
	  _TB6.f1 = (unsigned int)_T11;
	  _T10 = _TB6;
	}{ struct Cyc_Int_pa_PrintArg_struct _TB6 = _T10;
	  void * _TB7[1];
	  _TB7[0] = &_TB6;
	  _T12 = _tag_fat("%u",sizeof(char),3U);
	  _T13 = _tag_fat(_TB7,sizeof(void *),1);
	  _TF = Cyc_aprintf(_T12,_T13);
	}_T14 = Cyc_PP_text(_TF);
	return _T14;
      }
    case 10: 
      { struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct *)_TA8;
	_TB3 = _TB6->f1;
      }{ char ch = _TB3;
	{ struct Cyc_String_pa_PrintArg_struct _TB6;
	  _TB6.tag = 0;
	  _T17 = ch;
	  _T18 = (unsigned char)_T17;
	  _TB6.f1 = Cyc_Absynpp_char_escape(_T18);
	  _T16 = _TB6;
	}{ struct Cyc_String_pa_PrintArg_struct _TB6 = _T16;
	  void * _TB7[1];
	  _TB7[0] = &_TB6;
	  _T19 = _tag_fat("'%s'",sizeof(char),5U);
	  _T1A = _tag_fat(_TB7,sizeof(void *),1);
	  _T15 = Cyc_aprintf(_T19,_T1A);
	}_T1B = Cyc_PP_text(_T15);
	return _T1B;
      }
    case 11: 
      { struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct *)_TA8;
	_TB2 = _TB6->f1;
      }{ struct _fat_ptr x = _TB2;
	_T1C = Cyc_PP_text(x);
	return _T1C;
      }
    case 1: 
      _T1D = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_TA8;
      _T1E = _T1D->f2;
      _T1F = (struct Cyc_Absyn_Pat *)_T1E;
      _T20 = _T1F->r;
      _T21 = (int *)_T20;
      _T22 = *_T21;
      if (_T22 != 0) { goto _TL254;
      }
      { struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_TA8;
	_TB1 = _TB6->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _TB1;
	_T23 = vd;
	_T24 = _T23->name;
	_T25 = Cyc_Absynpp_qvar2doc(_T24);
	return _T25;
      }_TL254: { struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_TA8;
	_TB1 = _TB6->f1;
	_TB0 = _TB6->f2;
      }{ struct Cyc_Absyn_Vardecl * vd = _TB1;
	struct Cyc_Absyn_Pat * p2 = _TB0;
	{ struct Cyc_PP_Doc * _TB6[3];
	  _T27 = vd;
	  _T28 = _T27->name;
	  _TB6[0] = Cyc_Absynpp_qvar2doc(_T28);
	  _T29 = _tag_fat(" as ",sizeof(char),5U);
	  _TB6[1] = Cyc_PP_text(_T29);
	  _TB6[2] = Cyc_Absynpp_pat2doc(p2);
	  _T2A = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),3);
	  _T26 = Cyc_PP_cat(_T2A);
	}return _T26;
      }
    case 2: 
      { struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct *)_TA8;
	_TB1 = _TB6->f1;
	_TAF = _TB6->f2;
      }{ struct Cyc_Absyn_Tvar * tv = _TB1;
	struct Cyc_Absyn_Vardecl * vd = _TAF;
	{ struct Cyc_PP_Doc * _TB6[5];
	  _T2C = _tag_fat("alias",sizeof(char),6U);
	  _TB6[0] = Cyc_PP_text(_T2C);
	  _T2D = _tag_fat(" <",sizeof(char),3U);
	  _TB6[1] = Cyc_PP_text(_T2D);
	  _TB6[2] = Cyc_Absynpp_tvar2doc(tv);
	  _T2E = _tag_fat("> ",sizeof(char),3U);
	  _TB6[3] = Cyc_PP_text(_T2E);
	  _TB6[4] = Cyc_Absynpp_vardecl2doc(vd,0);
	  _T2F = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),5);
	  _T2B = Cyc_PP_cat(_T2F);
	}return _T2B;
      }
    case 4: 
      { struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct *)_TA8;
	_TB1 = _TB6->f1;
	_TAF = _TB6->f2;
      }{ struct Cyc_Absyn_Tvar * tv = _TB1;
	struct Cyc_Absyn_Vardecl * vd = _TAF;
	{ struct Cyc_PP_Doc * _TB6[4];
	  _T31 = vd;
	  _T32 = _T31->name;
	  _TB6[0] = Cyc_Absynpp_qvar2doc(_T32);
	  _T33 = _tag_fat("<",sizeof(char),2U);
	  _TB6[1] = Cyc_PP_text(_T33);
	  _TB6[2] = Cyc_Absynpp_tvar2doc(tv);
	  _T34 = _tag_fat(">",sizeof(char),2U);
	  _TB6[3] = Cyc_PP_text(_T34);
	  _T35 = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),4);
	  _T30 = Cyc_PP_cat(_T35);
	}return _T30;
      }
    case 5: 
      { struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct *)_TA8;
	_TB1 = _TB6->f1;
      }{ struct Cyc_Absyn_Pat * p2 = _TB1;
	{ struct Cyc_PP_Doc * _TB6[2];
	  _T37 = _tag_fat("&",sizeof(char),2U);
	  _TB6[0] = Cyc_PP_text(_T37);
	  _TB6[1] = Cyc_Absynpp_pat2doc(p2);
	  _T38 = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),2);
	  _T36 = Cyc_PP_cat(_T38);
	}return _T36;
      }
    case 3: 
      _T39 = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_TA8;
      _T3A = _T39->f2;
      _T3B = (struct Cyc_Absyn_Pat *)_T3A;
      _T3C = _T3B->r;
      _T3D = (int *)_T3C;
      _T3E = *_T3D;
      if (_T3E != 0) { goto _TL256;
      }
      { struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_TA8;
	_TB1 = _TB6->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _TB1;
	{ struct Cyc_PP_Doc * _TB6[2];
	  _T40 = _tag_fat("*",sizeof(char),2U);
	  _TB6[0] = Cyc_PP_text(_T40);
	  _T41 = vd;
	  _T42 = _T41->name;
	  _TB6[1] = Cyc_Absynpp_qvar2doc(_T42);
	  _T43 = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),2);
	  _T3F = Cyc_PP_cat(_T43);
	}return _T3F;
      }_TL256: { struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_TA8;
	_TB1 = _TB6->f1;
	_TB0 = _TB6->f2;
      }{ struct Cyc_Absyn_Vardecl * vd = _TB1;
	struct Cyc_Absyn_Pat * p2 = _TB0;
	{ struct Cyc_PP_Doc * _TB6[4];
	  _T45 = _tag_fat("*",sizeof(char),2U);
	  _TB6[0] = Cyc_PP_text(_T45);
	  _T46 = vd;
	  _T47 = _T46->name;
	  _TB6[1] = Cyc_Absynpp_qvar2doc(_T47);
	  _T48 = _tag_fat(" as ",sizeof(char),5U);
	  _TB6[2] = Cyc_PP_text(_T48);
	  _TB6[3] = Cyc_Absynpp_pat2doc(p2);
	  _T49 = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),4);
	  _T44 = Cyc_PP_cat(_T49);
	}return _T44;
      }
    case 14: 
      { struct Cyc_Absyn_UnknownId_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_UnknownId_p_Absyn_Raw_pat_struct *)_TA8;
	_TB1 = _TB6->f1;
      }{ struct _tuple1 * q = _TB1;
	_T4A = Cyc_Absynpp_qvar2doc(q);
	return _T4A;
      }
    case 15: 
      { struct Cyc_Absyn_UnknownCall_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_UnknownCall_p_Absyn_Raw_pat_struct *)_TA8;
	_TB1 = _TB6->f1;
	_TAE = _TB6->f2;
	_TB4 = _TB6->f3;
      }{ struct _tuple1 * q = _TB1;
	struct Cyc_List_List * ps = _TAE;
	long dots = _TB4;
	_T4C = dots;
	if (! _T4C) { goto _TL258;
	}
	_T4B = _tag_fat(", ...)",sizeof(char),7U);
	goto _TL259;
	_TL258: _T4B = _tag_fat(")",sizeof(char),2U);
	_TL259: { struct _fat_ptr term = _T4B;
	  { struct Cyc_PP_Doc * _TB6[2];
	    _TB6[0] = Cyc_Absynpp_qvar2doc(q);
	    _T4E = _tag_fat("(",sizeof(char),2U);
	    _T4F = term;
	    _T50 = _tag_fat(",",sizeof(char),2U);
	    _T52 = Cyc_List_map;
	    { struct Cyc_List_List * (* _TB7)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Pat *),
					      struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Pat *),
												    struct Cyc_List_List *))_T52;
	      _T51 = _TB7;
	    }_T53 = ps;
	    _T54 = _T51(Cyc_Absynpp_pat2doc,_T53);
	    _TB6[1] = Cyc_PP_group(_T4E,_T4F,_T50,_T54);
	    _T55 = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),2);
	    _T4D = Cyc_PP_cat(_T55);
	  }return _T4D;
	}
      }
    case 6: 
      { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_TA8;
	_T56 = _TB6->f1;
	_TB1 = (void *)_T56;
	_TB4 = _TB6->f2;
	_TAE = _TB6->f3;
	_TAD = _TB6->f4;
	_TAC = _TB6->f5;
      }{ void * topt = _TB1;
	long is_tuple = _TB4;
	struct Cyc_List_List * exists = _TAE;
	struct Cyc_List_List * dps = _TAD;
	long dots = _TAC;
	_T57 = is_tuple;
	if (! _T57) { goto _TL25A;
	}
	{ struct Cyc_PP_Doc * _TB6[4];
	  _TB6[0] = Cyc_Absynpp_dollar();
	  _T59 = _tag_fat("(",sizeof(char),2U);
	  _TB6[1] = Cyc_PP_text(_T59);
	  _T5B = Cyc_PP_ppseq;
	  { struct Cyc_PP_Doc * (* _TB7)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Pat *),
					 struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Pat *),
													    struct _fat_ptr,
													    struct Cyc_List_List *))_T5B;
	    _T5A = _TB7;
	  }_T5C = _tag_fat(",",sizeof(char),2U);
	  _T5E = Cyc_List_map;
	  { struct Cyc_List_List * (* _TB7)(struct Cyc_Absyn_Pat * (*)(struct _tuple18 *),
					    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Pat * (*)(struct _tuple18 *),
												  struct Cyc_List_List *))_T5E;
	    _T5D = _TB7;
	  }_T60 = Cyc_Core_snd;
	  { struct Cyc_Absyn_Pat * (* _TB7)(struct _tuple18 *) = (struct Cyc_Absyn_Pat * (*)(struct _tuple18 *))_T60;
	    _T5F = _TB7;
	  }_T61 = dps;
	  _T62 = _T5D(_T5F,_T61);
	  _TB6[2] = _T5A(Cyc_Absynpp_pat2doc,_T5C,_T62);
	  _T63 = dots;
	  if (! _T63) { goto _TL25C;
	  }
	  _T64 = _tag_fat(", ...)",sizeof(char),7U);
	  _TB6[3] = Cyc_PP_text(_T64);
	  goto _TL25D;
	  _TL25C: _T65 = _tag_fat(")",sizeof(char),2U);
	  _TB6[3] = Cyc_PP_text(_T65);
	  _TL25D: _T66 = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),4);
	  _T58 = Cyc_PP_cat(_T66);
	}return _T58;
	_TL25A: _T68 = dots;
	if (! _T68) { goto _TL25E;
	}
	_T67 = _tag_fat(", ...}",sizeof(char),7U);
	goto _TL25F;
	_TL25E: _T67 = _tag_fat("}",sizeof(char),2U);
	_TL25F: { struct _fat_ptr term = _T67;
	  if (topt == 0) { goto _TL260;
	  }
	  { void * _TB6 = Cyc_Absyn_compress(topt);
	    union Cyc_Absyn_AggrInfo _TB7;
	    _T69 = (int *)_TB6;
	    _T6A = *_T69;
	    if (_T6A != 0) { goto _TL262;
	    }
	    _T6B = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TB6;
	    _T6C = _T6B->f1;
	    _T6D = (int *)_T6C;
	    _T6E = *_T6D;
	    if (_T6E != 24) { goto _TL264;
	    }
	    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TB6;
	      _T6F = _TB8->f1;
	      { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TB9 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T6F;
		_TB7 = _TB9->f1;
	      }
	    }{ union Cyc_Absyn_AggrInfo info = _TB7;
	      struct _tuple12 _TB8 = Cyc_Absyn_aggr_kinded_name(info);
	      struct _tuple1 * _TB9;
	      _TB9 = _TB8.f1;
	      { struct _tuple1 * n = _TB9;
		{ struct Cyc_PP_Doc * _TBA[4];
		  _TBA[0] = Cyc_Absynpp_qvar2doc(n);
		  _TBA[1] = Cyc_Absynpp_lb();
		  _T71 = _tag_fat("<",sizeof(char),2U);
		  _T72 = _tag_fat(">",sizeof(char),2U);
		  _T73 = _tag_fat(",",sizeof(char),2U);
		  _T75 = Cyc_List_map;
		  { struct Cyc_List_List * (* _TBB)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
						    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
													  struct Cyc_List_List *))_T75;
		    _T74 = _TBB;
		  }_T76 = exists;
		  _T77 = _T74(Cyc_Absynpp_tvar2doc,_T76);
		  _TBA[2] = Cyc_PP_egroup(_T71,_T72,_T73,_T77);
		  _T78 = _tag_fat("",sizeof(char),1U);
		  _T79 = term;
		  _T7A = _tag_fat(",",sizeof(char),2U);
		  _T7C = Cyc_List_map;
		  { struct Cyc_List_List * (* _TBB)(struct Cyc_PP_Doc * (*)(struct _tuple18 *),
						    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple18 *),
													  struct Cyc_List_List *))_T7C;
		    _T7B = _TBB;
		  }_T7D = Cyc_Absynpp_dp2doc;
		  _T7E = dps;
		  _T7F = _T7B(_T7D,_T7E);
		  _TBA[3] = Cyc_PP_group(_T78,_T79,_T7A,_T7F);
		  _T80 = _tag_fat(_TBA,sizeof(struct Cyc_PP_Doc *),4);
		  _T70 = Cyc_PP_cat(_T80);
		}return _T70;
	      }
	    }_TL264: goto _LL2C;
	    _TL262: _LL2C: goto _LL29;
	    _LL29: ;
	  }goto _TL261;
	  _TL260: _TL261: { struct Cyc_PP_Doc * _TB6[3];
	    _TB6[0] = Cyc_Absynpp_lb();
	    _T82 = _tag_fat("<",sizeof(char),2U);
	    _T83 = _tag_fat(">",sizeof(char),2U);
	    _T84 = _tag_fat(",",sizeof(char),2U);
	    _T86 = Cyc_List_map;
	    { struct Cyc_List_List * (* _TB7)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
					      struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Tvar *),
												    struct Cyc_List_List *))_T86;
	      _T85 = _TB7;
	    }_T87 = exists;
	    _T88 = _T85(Cyc_Absynpp_tvar2doc,_T87);
	    _TB6[1] = Cyc_PP_egroup(_T82,_T83,_T84,_T88);
	    _T89 = _tag_fat("",sizeof(char),1U);
	    _T8A = term;
	    _T8B = _tag_fat(",",sizeof(char),2U);
	    _T8D = Cyc_List_map;
	    { struct Cyc_List_List * (* _TB7)(struct Cyc_PP_Doc * (*)(struct _tuple18 *),
					      struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct _tuple18 *),
												    struct Cyc_List_List *))_T8D;
	      _T8C = _TB7;
	    }_T8E = Cyc_Absynpp_dp2doc;
	    _T8F = dps;
	    _T90 = _T8C(_T8E,_T8F);
	    _TB6[2] = Cyc_PP_group(_T89,_T8A,_T8B,_T90);
	    _T91 = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),3);
	    _T81 = Cyc_PP_cat(_T91);
	  }return _T81;
	}
      }
    case 12: 
      { struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct *)_TA8;
	_TAB = _TB6->f2;
      }{ struct Cyc_Absyn_Enumfield * ef = _TAB;
	_TAB = ef;
	goto _LL22;
      }
    case 13: 
      { struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct *)_TA8;
	_TAB = _TB6->f2;
      }_LL22: { struct Cyc_Absyn_Enumfield * ef = _TAB;
	_T92 = ef;
	_T93 = _T92->name;
	_T94 = Cyc_Absynpp_qvar2doc(_T93);
	return _T94;
      }
    case 7: 
      _T95 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_TA8;
      _T96 = _T95->f3;
      if (_T96 != 0) { goto _TL266;
      }
      { struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_TA8;
	_TAA = _TB6->f2;
      }{ struct Cyc_Absyn_Datatypefield * tuf = _TAA;
	_T97 = tuf;
	_T98 = _T97->name;
	_T99 = Cyc_Absynpp_qvar2doc(_T98);
	return _T99;
      }_TL266: { struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_TA8;
	_TAA = _TB6->f2;
	_TAE = _TB6->f3;
	_TB4 = _TB6->f4;
      }{ struct Cyc_Absyn_Datatypefield * tuf = _TAA;
	struct Cyc_List_List * ps = _TAE;
	long dots = _TB4;
	_T9B = dots;
	if (! _T9B) { goto _TL268;
	}
	_T9A = _tag_fat(", ...)",sizeof(char),7U);
	goto _TL269;
	_TL268: _T9A = _tag_fat(")",sizeof(char),2U);
	_TL269: { struct _fat_ptr term = _T9A;
	  { struct Cyc_PP_Doc * _TB6[2];
	    _T9D = tuf;
	    _T9E = _T9D->name;
	    _TB6[0] = Cyc_Absynpp_qvar2doc(_T9E);
	    _T9F = _tag_fat("(",sizeof(char),2U);
	    _TA0 = term;
	    _TA1 = _tag_fat(",",sizeof(char),2U);
	    _TA3 = Cyc_List_map;
	    { struct Cyc_List_List * (* _TB7)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Pat *),
					      struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Pat *),
												    struct Cyc_List_List *))_TA3;
	      _TA2 = _TB7;
	    }_TA4 = ps;
	    _TA5 = _TA2(Cyc_Absynpp_pat2doc,_TA4);
	    _TB6[1] = Cyc_PP_egroup(_T9F,_TA0,_TA1,_TA5);
	    _TA6 = _tag_fat(_TB6,sizeof(struct Cyc_PP_Doc *),2);
	    _T9C = Cyc_PP_cat(_TA6);
	  }return _T9C;
	}
      }
    default: 
      { struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct * _TB6 = (struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct *)_TA8;
	_TA9 = _TB6->f1;
      }{ struct Cyc_Absyn_Exp * e = _TA9;
	_TA7 = Cyc_Absynpp_exp2doc(e);
	return _TA7;
      }
    }
    ;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_dp2doc(struct _tuple18 * dp) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_List_List * (* _T4)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T5)(void * (*)(void *),struct Cyc_List_List *);
  struct _tuple18 * _T6;
  struct _tuple18 _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct _tuple18 * _TA;
  struct _tuple18 _TB;
  struct Cyc_Absyn_Pat * _TC;
  struct _fat_ptr _TD;
  { struct Cyc_PP_Doc * _TE[2];
    _T1 = _tag_fat("",sizeof(char),1U);
    _T2 = _tag_fat("=",sizeof(char),2U);
    _T3 = _tag_fat("=",sizeof(char),2U);
    _T5 = Cyc_List_map;
    { struct Cyc_List_List * (* _TF)(struct Cyc_PP_Doc * (*)(void *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(void *),
															   struct Cyc_List_List *))_T5;
      _T4 = _TF;
    }_T6 = dp;
    _T7 = *_T6;
    _T8 = _T7.f0;
    _T9 = _T4(Cyc_Absynpp_designator2doc,_T8);
    _TE[0] = Cyc_PP_egroup(_T1,_T2,_T3,_T9);
    _TA = dp;
    _TB = *_TA;
    _TC = _TB.f1;
    _TE[1] = Cyc_Absynpp_pat2doc(_TC);
    _TD = _tag_fat(_TE,sizeof(struct Cyc_PP_Doc *),2);
    _T0 = Cyc_PP_cat(_TD);
  }return _T0;
}
struct Cyc_PP_Doc * Cyc_Absynpp_switchclause2doc(struct Cyc_Absyn_Switch_clause * c) {
  struct Cyc_Absyn_Switch_clause * _T0;
  struct Cyc_Absyn_Stmt * _T1;
  long _T2;
  struct Cyc_Absyn_Switch_clause * _T3;
  struct Cyc_Absyn_Stmt * _T4;
  long _T5;
  struct Cyc_Absyn_Switch_clause * _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Absyn_Switch_clause * _T8;
  struct Cyc_Absyn_Pat * _T9;
  void * _TA;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _TB;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _TC;
  void * _TD;
  struct Cyc_PP_Doc * _TE;
  struct _fat_ptr _TF;
  struct Cyc_PP_Doc * _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  struct Cyc_Absyn_Switch_clause * _T13;
  struct Cyc_Absyn_Exp * _T14;
  struct Cyc_PP_Doc * _T15;
  struct _fat_ptr _T16;
  struct Cyc_Absyn_Switch_clause * _T17;
  struct Cyc_Absyn_Pat * _T18;
  struct _fat_ptr _T19;
  struct Cyc_PP_Doc * _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_PP_Doc * _T1D;
  struct _fat_ptr _T1E;
  struct Cyc_Absyn_Switch_clause * _T1F;
  struct Cyc_Absyn_Pat * _T20;
  struct _fat_ptr _T21;
  struct Cyc_Absyn_Switch_clause * _T22;
  struct Cyc_Absyn_Exp * _T23;
  struct _fat_ptr _T24;
  struct Cyc_PP_Doc * _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  _T0 = c;
  _T1 = _T0->body;
  { struct Cyc_PP_Doc * body = Cyc_Absynpp_stmt2doc(_T1,0,0,0);
    _T2 = Cyc_Absynpp_decls_first;
    if (! _T2) { goto _TL26A;
    }
    _T3 = c;
    _T4 = _T3->body;
    _T5 = Cyc_Absynpp_is_declaration(_T4);
    if (! _T5) { goto _TL26A;
    }
    body = Cyc_Absynpp_block(0,body);
    goto _TL26B;
    _TL26A: _TL26B: _T6 = c;
    _T7 = _T6->where_clause;
    if (_T7 != 0) { goto _TL26C;
    }
    _T8 = c;
    _T9 = _T8->pattern;
    _TA = _T9->r;
    _TB = &Cyc_Absyn_Wild_p_val;
    _TC = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_TB;
    _TD = (void *)_TC;
    if (_TA != _TD) { goto _TL26C;
    }
    { struct Cyc_PP_Doc * _T28[2];
      _TF = _tag_fat("default: ",sizeof(char),10U);
      _T28[0] = Cyc_PP_text(_TF);
      { struct Cyc_PP_Doc * _T29[2];
	_T29[0] = Cyc_PP_line_doc();
	_T29[1] = body;
	_T11 = _tag_fat(_T29,sizeof(struct Cyc_PP_Doc *),2);
	_T10 = Cyc_PP_cat(_T11);
      }_T28[1] = Cyc_PP_nest(2,_T10);
      _T12 = _tag_fat(_T28,sizeof(struct Cyc_PP_Doc *),2);
      _TE = Cyc_PP_cat(_T12);
    }return _TE;
    _TL26C: _T13 = c;
    _T14 = _T13->where_clause;
    if (_T14 != 0) { goto _TL26E;
    }
    { struct Cyc_PP_Doc * _T28[4];
      _T16 = _tag_fat("case ",sizeof(char),6U);
      _T28[0] = Cyc_PP_text(_T16);
      _T17 = c;
      _T18 = _T17->pattern;
      _T28[1] = Cyc_Absynpp_pat2doc(_T18);
      _T19 = _tag_fat(": ",sizeof(char),3U);
      _T28[2] = Cyc_PP_text(_T19);
      { struct Cyc_PP_Doc * _T29[2];
	_T29[0] = Cyc_PP_line_doc();
	_T29[1] = body;
	_T1B = _tag_fat(_T29,sizeof(struct Cyc_PP_Doc *),2);
	_T1A = Cyc_PP_cat(_T1B);
      }_T28[3] = Cyc_PP_nest(2,_T1A);
      _T1C = _tag_fat(_T28,sizeof(struct Cyc_PP_Doc *),4);
      _T15 = Cyc_PP_cat(_T1C);
    }return _T15;
    _TL26E: { struct Cyc_PP_Doc * _T28[6];
      _T1E = _tag_fat("case ",sizeof(char),6U);
      _T28[0] = Cyc_PP_text(_T1E);
      _T1F = c;
      _T20 = _T1F->pattern;
      _T28[1] = Cyc_Absynpp_pat2doc(_T20);
      _T21 = _tag_fat(" && ",sizeof(char),5U);
      _T28[2] = Cyc_PP_text(_T21);
      _T22 = c;
      _T23 = _T22->where_clause;
      _T28[3] = Cyc_Absynpp_exp2doc(_T23);
      _T24 = _tag_fat(": ",sizeof(char),3U);
      _T28[4] = Cyc_PP_text(_T24);
      { struct Cyc_PP_Doc * _T29[2];
	_T29[0] = Cyc_PP_line_doc();
	_T29[1] = body;
	_T26 = _tag_fat(_T29,sizeof(struct Cyc_PP_Doc *),2);
	_T25 = Cyc_PP_cat(_T26);
      }_T28[5] = Cyc_PP_nest(2,_T25);
      _T27 = _tag_fat(_T28,sizeof(struct Cyc_PP_Doc *),6);
      _T1D = Cyc_PP_cat(_T27);
    }return _T1D;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_switchclauses2doc(struct Cyc_List_List * cs) {
  struct Cyc_PP_Doc * (* _T0)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Switch_clause *),
			      struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T1)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			      struct Cyc_List_List *);
  struct _fat_ptr _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_PP_Doc * _T4;
  _T1 = Cyc_PP_ppseql;
  { struct Cyc_PP_Doc * (* _T5)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Switch_clause *),
				struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Switch_clause *),
												   struct _fat_ptr,
												   struct Cyc_List_List *))_T1;
    _T0 = _T5;
  }_T2 = _tag_fat("",sizeof(char),1U);
  _T3 = cs;
  _T4 = _T0(Cyc_Absynpp_switchclause2doc,_T2,_T3);
  return _T4;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_enumfield2doc(struct Cyc_Absyn_Enumfield * f) {
  struct Cyc_Absyn_Enumfield * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct Cyc_Absyn_Enumfield * _T2;
  struct _tuple1 * _T3;
  struct Cyc_PP_Doc * _T4;
  struct Cyc_PP_Doc * _T5;
  struct Cyc_Absyn_Enumfield * _T6;
  struct _tuple1 * _T7;
  struct _fat_ptr _T8;
  struct Cyc_Absyn_Enumfield * _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct _fat_ptr _TC;
  _T0 = f;
  _T1 = _T0->tag;
  if (_T1 != 0) { goto _TL270;
  }
  _T2 = f;
  _T3 = _T2->name;
  _T4 = Cyc_Absynpp_qvar2doc(_T3);
  return _T4;
  _TL270: { struct Cyc_PP_Doc * _TD[3];
    _T6 = f;
    _T7 = _T6->name;
    _TD[0] = Cyc_Absynpp_qvar2doc(_T7);
    _T8 = _tag_fat(" = ",sizeof(char),4U);
    _TD[1] = Cyc_PP_text(_T8);
    _T9 = f;
    _TA = _T9->tag;
    _TB = _check_null(_TA);
    _TD[2] = Cyc_Absynpp_exp2doc(_TB);
    _TC = _tag_fat(_TD,sizeof(struct Cyc_PP_Doc *),3);
    _T5 = Cyc_PP_cat(_TC);
  }return _T5;
}
struct Cyc_PP_Doc * Cyc_Absynpp_enumfields2doc(struct Cyc_List_List * fs) {
  struct Cyc_PP_Doc * (* _T0)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Enumfield *),
			      struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T1)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			      struct Cyc_List_List *);
  struct _fat_ptr _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_PP_Doc * _T4;
  _T1 = Cyc_PP_ppseql;
  { struct Cyc_PP_Doc * (* _T5)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Enumfield *),
				struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Enumfield *),
												   struct _fat_ptr,
												   struct Cyc_List_List *))_T1;
    _T0 = _T5;
  }_T2 = _tag_fat(",",sizeof(char),2U);
  _T3 = fs;
  _T4 = _T0(Cyc_Absynpp_enumfield2doc,_T2,_T3);
  return _T4;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_id2doc(struct Cyc_Absyn_Vardecl * v) {
  struct Cyc_Absyn_Vardecl * _T0;
  struct _tuple1 * _T1;
  struct Cyc_PP_Doc * _T2;
  _T0 = v;
  _T1 = _T0->name;
  _T2 = Cyc_Absynpp_qvar2doc(_T1);
  return _T2;
}
static struct Cyc_PP_Doc * Cyc_Absynpp_ids2doc(struct Cyc_List_List * vds) {
  struct Cyc_PP_Doc * (* _T0)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Vardecl *),
			      struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T1)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			      struct Cyc_List_List *);
  struct _fat_ptr _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_PP_Doc * _T4;
  _T1 = Cyc_PP_ppseq;
  { struct Cyc_PP_Doc * (* _T5)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Vardecl *),
				struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Vardecl *),
												   struct _fat_ptr,
												   struct Cyc_List_List *))_T1;
    _T0 = _T5;
  }_T2 = _tag_fat(",",sizeof(char),2U);
  _T3 = vds;
  _T4 = _T0(Cyc_Absynpp_id2doc,_T2,_T3);
  return _T4;
}
struct Cyc_PP_Doc * Cyc_Absynpp_vardecl2doc(struct Cyc_Absyn_Vardecl * vd,
					    long add_semicolon) {
  struct Cyc_Absyn_Vardecl * _T0;
  enum Cyc_Flags_C_Compilers _T1;
  int * _T2;
  int _T3;
  struct Cyc_Absyn_FnInfo _T4;
  enum Cyc_Flags_C_Compilers _T5;
  struct Cyc_PP_Doc * _T6;
  struct Cyc_Absyn_Tqual _T7;
  void * _T8;
  struct Cyc_Core_Opt * _T9;
  struct Cyc_PP_Doc * _TA;
  struct _fat_ptr _TB;
  struct Cyc_PP_Doc * _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  long _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  struct Cyc_PP_Doc * _T12;
  struct Cyc_Absyn_Exp * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_Absyn_Exp * _T15;
  void * _T16;
  struct Cyc_Absyn_Tqual _T17;
  unsigned int _T18;
  struct _tuple1 * _T19;
  enum Cyc_Absyn_Scope _T1A;
  _T0 = vd;
  { struct Cyc_Absyn_Vardecl _T1B = *_T0;
    _T1A = _T1B.sc;
    _T19 = _T1B.name;
    _T18 = _T1B.varloc;
    _T17 = _T1B.tq;
    _T16 = _T1B.type;
    _T15 = _T1B.initializer;
    _T14 = _T1B.attributes;
    _T13 = _T1B.rename;
  }{ enum Cyc_Absyn_Scope sc = _T1A;
    struct _tuple1 * name = _T19;
    unsigned int varloc = _T18;
    struct Cyc_Absyn_Tqual tq = _T17;
    void * type = _T16;
    struct Cyc_Absyn_Exp * initializer = _T15;
    struct Cyc_List_List * atts = _T14;
    struct Cyc_Absyn_Exp * rename = _T13;
    struct Cyc_PP_Doc * s;
    struct Cyc_PP_Doc * sn = Cyc_Absynpp_typedef_name2bolddoc(name);
    struct Cyc_PP_Doc * attsdoc = Cyc_Absynpp_atts2doc(atts);
    struct Cyc_PP_Doc * beforenamedoc;
    _T1 = Cyc_Flags_c_compiler;
    if (_T1 != Cyc_Flags_Gcc_c) { goto _TL272;
    }
    beforenamedoc = attsdoc;
    goto _LL3;
    _TL272: { void * _T1B = Cyc_Absyn_compress(type);
      struct Cyc_List_List * _T1C;
      _T2 = (int *)_T1B;
      _T3 = *_T2;
      if (_T3 != 6) { goto _TL274;
      }
      { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T1D = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T1B;
	_T4 = _T1D->f1;
	_T1C = _T4.attributes;
      }{ struct Cyc_List_List * atts2 = _T1C;
	beforenamedoc = Cyc_Absynpp_callconv2doc(atts2);
	goto _LL8;
      }_TL274: beforenamedoc = Cyc_PP_nil_doc();
      goto _LL8;
      _LL8: ;
    }goto _LL3;
    _LL3: { struct Cyc_PP_Doc * tmp_doc;
      _T5 = Cyc_Flags_c_compiler;
      if (_T5 != Cyc_Flags_Gcc_c) { goto _TL276;
      }
      tmp_doc = Cyc_PP_nil_doc();
      goto _LLD;
      _TL276: tmp_doc = attsdoc;
      goto _LLD;
      _LLD: { struct Cyc_PP_Doc * _T1B[6];
	_T1B[0] = tmp_doc;
	_T1B[1] = Cyc_Absynpp_scope2doc(sc);
	_T7 = tq;
	_T8 = type;
	{ struct Cyc_Core_Opt * _T1C = _cycalloc(sizeof(struct Cyc_Core_Opt));
	  { struct Cyc_PP_Doc * _T1D[2];
	    _T1D[0] = beforenamedoc;
	    _T1D[1] = sn;
	    _TB = _tag_fat(_T1D,sizeof(struct Cyc_PP_Doc *),2);
	    _TA = Cyc_PP_cat(_TB);
	  }_T1C->v = _TA;
	  _T9 = (struct Cyc_Core_Opt *)_T1C;
	}_T1B[2] = Cyc_Absynpp_tqtd2doc(_T7,_T8,_T9);
	if (rename != 0) { goto _TL278;
	}
	_T1B[3] = Cyc_PP_nil_doc();
	goto _TL279;
	_TL278: _T1B[3] = Cyc_Absynpp_exp2doc(rename);
	_TL279: if (initializer != 0) { goto _TL27A;
	}
	_T1B[4] = Cyc_PP_nil_doc();
	goto _TL27B;
	_TL27A: { struct Cyc_PP_Doc * _T1C[2];
	  _TD = _tag_fat(" = ",sizeof(char),4U);
	  _T1C[0] = Cyc_PP_text(_TD);
	  _T1C[1] = Cyc_Absynpp_exp2doc(initializer);
	  _TE = _tag_fat(_T1C,sizeof(struct Cyc_PP_Doc *),2);
	  _TC = Cyc_PP_cat(_TE);
	}_T1B[4] = _TC;
	_TL27B: _TF = add_semicolon;
	if (! _TF) { goto _TL27C;
	}
	_T10 = _tag_fat(";",sizeof(char),2U);
	_T1B[5] = Cyc_PP_text(_T10);
	goto _TL27D;
	_TL27C: _T1B[5] = Cyc_PP_nil_doc();
	_TL27D: _T11 = _tag_fat(_T1B,sizeof(struct Cyc_PP_Doc *),6);
	_T6 = Cyc_PP_cat(_T11);
      }s = _T6;
      _T12 = s;
      return _T12;
    }
  }
}
 struct _tuple22 {
  unsigned int f0;
  struct _tuple1 * f1;
  long f2;
};
struct Cyc_PP_Doc * Cyc_Absynpp_export2doc(struct _tuple22 * x) {
  struct _tuple22 * _T0;
  struct _tuple22 _T1;
  struct _tuple1 * _T2;
  struct Cyc_PP_Doc * _T3;
  _T0 = x;
  _T1 = *_T0;
  _T2 = _T1.f1;
  _T3 = Cyc_Absynpp_qvar2doc(_T2);
  return _T3;
}
struct Cyc_PP_Doc * Cyc_Absynpp_aggrdecl2doc(struct Cyc_Absyn_Aggrdecl * ad) {
  struct Cyc_Absyn_Aggrdecl * _T0;
  struct Cyc_Absyn_AggrdeclImpl * _T1;
  struct Cyc_PP_Doc * _T2;
  struct Cyc_Absyn_Aggrdecl * _T3;
  enum Cyc_Absyn_Scope _T4;
  struct Cyc_Absyn_Aggrdecl * _T5;
  enum Cyc_Absyn_AggrKind _T6;
  struct Cyc_Absyn_Aggrdecl * _T7;
  struct _tuple1 * _T8;
  struct Cyc_Absyn_Aggrdecl * _T9;
  struct Cyc_List_List * _TA;
  struct _fat_ptr _TB;
  struct Cyc_PP_Doc * _TC;
  struct Cyc_Absyn_Aggrdecl * _TD;
  enum Cyc_Absyn_Scope _TE;
  struct Cyc_Absyn_Aggrdecl * _TF;
  struct Cyc_Absyn_AggrdeclImpl * _T10;
  struct Cyc_Absyn_AggrdeclImpl * _T11;
  long _T12;
  struct _fat_ptr _T13;
  struct Cyc_Absyn_Aggrdecl * _T14;
  enum Cyc_Absyn_AggrKind _T15;
  struct Cyc_Absyn_Aggrdecl * _T16;
  struct _tuple1 * _T17;
  struct Cyc_Absyn_Aggrdecl * _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_Absyn_Aggrdecl * _T1A;
  struct Cyc_Absyn_AggrdeclImpl * _T1B;
  struct Cyc_Absyn_AggrdeclImpl * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_Absyn_Aggrdecl * _T1E;
  struct Cyc_Absyn_AggrdeclImpl * _T1F;
  struct Cyc_Absyn_AggrdeclImpl * _T20;
  struct Cyc_List_List * _T21;
  struct Cyc_PP_Doc * _T22;
  struct _fat_ptr _T23;
  struct Cyc_Absyn_Aggrdecl * _T24;
  struct Cyc_Absyn_AggrdeclImpl * _T25;
  struct Cyc_Absyn_AggrdeclImpl * _T26;
  struct Cyc_List_List * _T27;
  struct _fat_ptr _T28;
  struct Cyc_Absyn_Aggrdecl * _T29;
  struct Cyc_Absyn_AggrdeclImpl * _T2A;
  struct Cyc_Absyn_AggrdeclImpl * _T2B;
  struct Cyc_List_List * _T2C;
  struct Cyc_PP_Doc * _T2D;
  struct _fat_ptr _T2E;
  struct Cyc_Absyn_Aggrdecl * _T2F;
  struct Cyc_Absyn_AggrdeclImpl * _T30;
  struct Cyc_List_List * _T31;
  struct Cyc_Absyn_Aggrdecl * _T32;
  struct Cyc_Absyn_AggrdeclImpl * _T33;
  struct Cyc_Absyn_AggrdeclImpl * _T34;
  struct Cyc_List_List * _T35;
  struct _fat_ptr _T36;
  struct Cyc_PP_Doc * _T37;
  struct Cyc_Absyn_Aggrdecl * _T38;
  struct Cyc_Absyn_AggrdeclImpl * _T39;
  struct Cyc_Absyn_AggrdeclImpl * _T3A;
  struct Cyc_List_List * _T3B;
  struct _fat_ptr _T3C;
  struct Cyc_Absyn_Aggrdecl * _T3D;
  struct Cyc_List_List * _T3E;
  struct _fat_ptr _T3F;
  _T0 = ad;
  _T1 = _T0->impl;
  if (_T1 != 0) { goto _TL27E;
  }
  { struct Cyc_PP_Doc * _T40[4];
    _T3 = ad;
    _T4 = _T3->sc;
    _T40[0] = Cyc_Absynpp_scope2doc(_T4);
    _T5 = ad;
    _T6 = _T5->kind;
    _T40[1] = Cyc_Absynpp_aggr_kind2doc(_T6);
    _T7 = ad;
    _T8 = _T7->name;
    _T40[2] = Cyc_Absynpp_qvar2bolddoc(_T8);
    _T9 = ad;
    _TA = _T9->tvs;
    _T40[3] = Cyc_Absynpp_ktvars2doc(_TA);
    _TB = _tag_fat(_T40,sizeof(struct Cyc_PP_Doc *),4);
    _T2 = Cyc_PP_cat(_TB);
  }return _T2;
  _TL27E: { struct Cyc_PP_Doc * _T40[14];
    _TD = ad;
    _TE = _TD->sc;
    _T40[0] = Cyc_Absynpp_scope2doc(_TE);
    _TF = ad;
    _T10 = _TF->impl;
    _T11 = _check_null(_T10);
    _T12 = _T11->tagged;
    if (! _T12) { goto _TL280;
    }
    _T13 = _tag_fat("@tagged ",sizeof(char),9U);
    _T40[1] = Cyc_PP_text(_T13);
    goto _TL281;
    _TL280: _T40[1] = Cyc_PP_blank_doc();
    _TL281: _T14 = ad;
    _T15 = _T14->kind;
    _T40[2] = Cyc_Absynpp_aggr_kind2doc(_T15);
    _T16 = ad;
    _T17 = _T16->name;
    _T40[3] = Cyc_Absynpp_qvar2bolddoc(_T17);
    _T18 = ad;
    _T19 = _T18->tvs;
    _T40[4] = Cyc_Absynpp_ktvars2doc(_T19);
    _T40[5] = Cyc_PP_blank_doc();
    _T40[6] = Cyc_Absynpp_lb();
    _T1A = ad;
    _T1B = _T1A->impl;
    _T1C = _check_null(_T1B);
    _T1D = _T1C->exist_vars;
    _T40[7] = Cyc_Absynpp_ktvars2doc(_T1D);
    _T1E = ad;
    _T1F = _T1E->impl;
    _T20 = _check_null(_T1F);
    _T21 = _T20->effconstr;
    if (_T21 != 0) { goto _TL282;
    }
    _T40[8] = Cyc_PP_nil_doc();
    goto _TL283;
    _TL282: { struct Cyc_PP_Doc * _T41[2];
      _T23 = _tag_fat(":",sizeof(char),2U);
      _T41[0] = Cyc_PP_text(_T23);
      _T24 = ad;
      _T25 = _T24->impl;
      _T26 = _check_null(_T25);
      _T27 = _T26->effconstr;
      _T41[1] = Cyc_Absynpp_effconstr2doc(_T27);
      _T28 = _tag_fat(_T41,sizeof(struct Cyc_PP_Doc *),2);
      _T22 = Cyc_PP_cat(_T28);
    }_T40[8] = _T22;
    _TL283: _T29 = ad;
    _T2A = _T29->impl;
    _T2B = _check_null(_T2A);
    _T2C = _T2B->qual_bnd;
    if (_T2C != 0) { goto _TL284;
    }
    _T40[9] = Cyc_PP_nil_doc();
    goto _TL285;
    _TL284: { struct Cyc_PP_Doc * _T41[2];
      _T2F = ad;
      _T30 = _T2F->impl;
      _T31 = _T30->effconstr;
      if (_T31 != 0) { goto _TL286;
      }
      _T2E = _tag_fat(":",sizeof(char),2U);
      goto _TL287;
      _TL286: _T2E = _tag_fat(",",sizeof(char),2U);
      _TL287: _T41[0] = Cyc_PP_text(_T2E);
      _T32 = ad;
      _T33 = _T32->impl;
      _T34 = _check_null(_T33);
      _T35 = _T34->qual_bnd;
      _T41[1] = Cyc_Absynpp_qualbnd2doc(_T35);
      _T36 = _tag_fat(_T41,sizeof(struct Cyc_PP_Doc *),2);
      _T2D = Cyc_PP_cat(_T36);
    }_T40[9] = _T2D;
    _TL285: { struct Cyc_PP_Doc * _T41[2];
      _T41[0] = Cyc_PP_line_doc();
      _T38 = ad;
      _T39 = _T38->impl;
      _T3A = _check_null(_T39);
      _T3B = _T3A->fields;
      _T41[1] = Cyc_Absynpp_aggrfields2doc(_T3B);
      _T3C = _tag_fat(_T41,sizeof(struct Cyc_PP_Doc *),2);
      _T37 = Cyc_PP_cat(_T3C);
    }_T40[10] = Cyc_PP_nest(2,_T37);
    _T40[11] = Cyc_PP_line_doc();
    _T40[12] = Cyc_Absynpp_rb();
    _T3D = ad;
    _T3E = _T3D->attributes;
    _T40[13] = Cyc_Absynpp_atts2doc(_T3E);
    _T3F = _tag_fat(_T40,sizeof(struct Cyc_PP_Doc *),14);
    _TC = Cyc_PP_cat(_T3F);
  }return _TC;
}
struct Cyc_PP_Doc * Cyc_Absynpp_datatypedecl2doc(struct Cyc_Absyn_Datatypedecl * dd) {
  struct Cyc_Absyn_Datatypedecl * _T0;
  struct Cyc_PP_Doc * _T1;
  long _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  long _T5;
  struct _fat_ptr _T6;
  struct Cyc_PP_Doc * _T7;
  struct Cyc_PP_Doc * _T8;
  struct Cyc_Core_Opt * _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct Cyc_PP_Doc * _TE;
  long _TF;
  struct Cyc_Core_Opt * _T10;
  struct Cyc_List_List * _T11;
  struct _tuple1 * _T12;
  enum Cyc_Absyn_Scope _T13;
  _T0 = dd;
  { struct Cyc_Absyn_Datatypedecl _T14 = *_T0;
    _T13 = _T14.sc;
    _T12 = _T14.name;
    _T11 = _T14.tvs;
    _T10 = _T14.fields;
    _TF = _T14.is_extensible;
  }{ enum Cyc_Absyn_Scope sc = _T13;
    struct _tuple1 * name = _T12;
    struct Cyc_List_List * tvs = _T11;
    struct Cyc_Core_Opt * fields = _T10;
    long is_x = _TF;
    { struct Cyc_PP_Doc * _T14[5];
      _T14[0] = Cyc_Absynpp_scope2doc(sc);
      _T2 = is_x;
      if (! _T2) { goto _TL288;
      }
      _T3 = _tag_fat("@extensible ",sizeof(char),13U);
      _T14[1] = Cyc_PP_text(_T3);
      goto _TL289;
      _TL288: _T14[1] = Cyc_PP_blank_doc();
      _TL289: _T4 = _tag_fat("datatype ",sizeof(char),10U);
      _T14[2] = Cyc_PP_text(_T4);
      _T5 = is_x;
      if (! _T5) { goto _TL28A;
      }
      _T14[3] = Cyc_Absynpp_qvar2bolddoc(name);
      goto _TL28B;
      _TL28A: _T14[3] = Cyc_Absynpp_typedef_name2bolddoc(name);
      _TL28B: _T14[4] = Cyc_Absynpp_ktvars2doc(tvs);
      _T6 = _tag_fat(_T14,sizeof(struct Cyc_PP_Doc *),5);
      _T1 = Cyc_PP_cat(_T6);
    }{ struct Cyc_PP_Doc * decl = _T1;
      if (fields == 0) { goto _TL28C;
      }
      { struct Cyc_PP_Doc * _T14[6];
	_T14[0] = decl;
	_T14[1] = Cyc_PP_blank_doc();
	_T14[2] = Cyc_Absynpp_lb();
	{ struct Cyc_PP_Doc * _T15[2];
	  _T15[0] = Cyc_PP_line_doc();
	  _T9 = fields;
	  _TA = _T9->v;
	  _TB = (struct Cyc_List_List *)_TA;
	  _T15[1] = Cyc_Absynpp_datatypefields2doc(_TB);
	  _TC = _tag_fat(_T15,sizeof(struct Cyc_PP_Doc *),2);
	  _T8 = Cyc_PP_cat(_TC);
	}_T14[3] = Cyc_PP_nest(2,_T8);
	_T14[4] = Cyc_PP_line_doc();
	_T14[5] = Cyc_Absynpp_rb();
	_TD = _tag_fat(_T14,sizeof(struct Cyc_PP_Doc *),6);
	_T7 = Cyc_PP_cat(_TD);
      }decl = _T7;
      goto _TL28D;
      _TL28C: _TL28D: _TE = decl;
      return _TE;
    }
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_enumdecl2doc(struct Cyc_Absyn_Enumdecl * ed) {
  struct Cyc_Absyn_Enumdecl * _T0;
  struct Cyc_PP_Doc * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_PP_Doc * _T4;
  struct _fat_ptr _T5;
  struct Cyc_PP_Doc * _T6;
  struct Cyc_Core_Opt * _T7;
  void * _T8;
  struct Cyc_List_List * _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct Cyc_Core_Opt * _TC;
  struct _tuple1 * _TD;
  enum Cyc_Absyn_Scope _TE;
  _T0 = ed;
  { struct Cyc_Absyn_Enumdecl _TF = *_T0;
    _TE = _TF.sc;
    _TD = _TF.name;
    _TC = _TF.fields;
  }{ enum Cyc_Absyn_Scope sc = _TE;
    struct _tuple1 * n = _TD;
    struct Cyc_Core_Opt * fields = _TC;
    if (fields != 0) { goto _TL28E;
    }
    { struct Cyc_PP_Doc * _TF[3];
      _TF[0] = Cyc_Absynpp_scope2doc(sc);
      _T2 = _tag_fat("enum ",sizeof(char),6U);
      _TF[1] = Cyc_PP_text(_T2);
      _TF[2] = Cyc_Absynpp_typedef_name2bolddoc(n);
      _T3 = _tag_fat(_TF,sizeof(struct Cyc_PP_Doc *),3);
      _T1 = Cyc_PP_cat(_T3);
    }return _T1;
    _TL28E: { struct Cyc_PP_Doc * _TF[8];
      _TF[0] = Cyc_Absynpp_scope2doc(sc);
      _T5 = _tag_fat("enum ",sizeof(char),6U);
      _TF[1] = Cyc_PP_text(_T5);
      _TF[2] = Cyc_Absynpp_qvar2bolddoc(n);
      _TF[3] = Cyc_PP_blank_doc();
      _TF[4] = Cyc_Absynpp_lb();
      { struct Cyc_PP_Doc * _T10[2];
	_T10[0] = Cyc_PP_line_doc();
	_T7 = fields;
	_T8 = _T7->v;
	_T9 = (struct Cyc_List_List *)_T8;
	_T10[1] = Cyc_Absynpp_enumfields2doc(_T9);
	_TA = _tag_fat(_T10,sizeof(struct Cyc_PP_Doc *),2);
	_T6 = Cyc_PP_cat(_TA);
      }_TF[5] = Cyc_PP_nest(2,_T6);
      _TF[6] = Cyc_PP_line_doc();
      _TF[7] = Cyc_Absynpp_rb();
      _TB = _tag_fat(_TF,sizeof(struct Cyc_PP_Doc *),8);
      _T4 = Cyc_PP_cat(_TB);
    }return _T4;
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_decl2doc(struct Cyc_Absyn_Decl * d) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Fndecl * _T3;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T4;
  struct Cyc_Absyn_Fndecl * _T5;
  void * _T6;
  struct Cyc_Absyn_Fndecl * _T7;
  void * _T8;
  int * _T9;
  int _TA;
  struct Cyc_Absyn_Fndecl * _TB;
  struct Cyc_Absyn_Fndecl * _TC;
  struct Cyc_Absyn_FnInfo _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_Absyn_FnInfo _TF;
  struct Cyc_List_List * _T10;
  int (* _T11)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T12)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct Cyc_Absyn_Fndecl * _T15;
  struct Cyc_Absyn_FnInfo _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_Absyn_Fndecl * _T18;
  long _T19;
  enum Cyc_Flags_C_Compilers _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_Absyn_Fndecl * _T1D;
  enum Cyc_Absyn_Scope _T1E;
  enum Cyc_Flags_C_Compilers _T1F;
  struct Cyc_Absyn_Fndecl * _T20;
  struct Cyc_Absyn_FnInfo _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_Absyn_Fndecl * _T23;
  struct _tuple1 * _T24;
  struct Cyc_Absyn_Tqual _T25;
  void * _T26;
  struct Cyc_Core_Opt * _T27;
  struct Cyc_PP_Doc * _T28;
  struct _fat_ptr _T29;
  struct Cyc_PP_Doc * _T2A;
  struct Cyc_PP_Doc * _T2B;
  struct Cyc_Absyn_Fndecl * _T2C;
  struct Cyc_Absyn_Stmt * _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr _T2F;
  struct Cyc_PP_Doc * _T30;
  struct _fat_ptr _T31;
  enum Cyc_Flags_C_Compilers _T32;
  struct Cyc_PP_Doc * _T33;
  struct _fat_ptr _T34;
  struct Cyc_PP_Doc * _T35;
  struct _fat_ptr _T36;
  struct _fat_ptr _T37;
  struct Cyc_PP_Doc * _T38;
  struct _fat_ptr _T39;
  struct _fat_ptr _T3A;
  struct Cyc_PP_Doc * _T3B;
  struct _fat_ptr _T3C;
  struct _fat_ptr _T3D;
  struct _fat_ptr _T3E;
  struct Cyc_PP_Doc * _T3F;
  struct _fat_ptr _T40;
  struct _fat_ptr _T41;
  struct Cyc_PP_Doc * _T42;
  struct _fat_ptr _T43;
  struct Cyc_Absyn_Exp * _T44;
  unsigned int _T45;
  struct Cyc_PP_Doc * _T46;
  struct _fat_ptr _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  struct _fat_ptr _T4A;
  struct Cyc_Absyn_Vardecl * _T4B;
  struct _tuple1 * _T4C;
  struct Cyc_Absyn_Exp * _T4D;
  unsigned int _T4E;
  struct Cyc_PP_Doc * _T4F;
  struct _fat_ptr _T50;
  struct _fat_ptr _T51;
  struct _fat_ptr _T52;
  struct _fat_ptr _T53;
  struct _fat_ptr _T54;
  struct Cyc_PP_Doc * _T55;
  struct _fat_ptr _T56;
  struct _fat_ptr _T57;
  struct _fat_ptr _T58;
  struct _fat_ptr _T59;
  void * _T5A;
  struct Cyc_Absyn_Typedefdecl * _T5B;
  void * _T5C;
  struct Cyc_Absyn_Typedefdecl * _T5D;
  struct Cyc_Absyn_Typedefdecl * _T5E;
  struct Cyc_Core_Opt * _T5F;
  struct Cyc_PP_Doc * _T60;
  struct _fat_ptr _T61;
  struct Cyc_Absyn_Typedefdecl * _T62;
  struct Cyc_Absyn_Tqual _T63;
  void * _T64;
  struct Cyc_Core_Opt * _T65;
  struct Cyc_PP_Doc * _T66;
  struct Cyc_Absyn_Typedefdecl * _T67;
  struct _tuple1 * _T68;
  struct Cyc_Absyn_Typedefdecl * _T69;
  struct Cyc_List_List * _T6A;
  struct _fat_ptr _T6B;
  struct Cyc_Absyn_Typedefdecl * _T6C;
  struct Cyc_List_List * _T6D;
  struct _fat_ptr _T6E;
  struct _fat_ptr _T6F;
  long _T70;
  struct Cyc_PP_Doc * _T71;
  struct _fat_ptr _T72;
  struct Cyc_PP_Doc * (* _T73)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T74)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _T75;
  struct Cyc_List_List * _T76;
  struct _fat_ptr _T77;
  long _T78;
  long _T79;
  struct Cyc_PP_Doc * _T7A;
  struct _fat_ptr _T7B;
  struct Cyc_PP_Doc * (* _T7C)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T7D)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _T7E;
  struct Cyc_List_List * _T7F;
  struct _fat_ptr _T80;
  struct Cyc_PP_Doc * _T81;
  struct _fat_ptr _T82;
  struct _fat_ptr _T83;
  struct Cyc_PP_Doc * (* _T84)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T85)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _T86;
  struct Cyc_List_List * _T87;
  struct _fat_ptr _T88;
  struct _fat_ptr _T89;
  struct _fat_ptr _T8A;
  long _T8B;
  struct Cyc_PP_Doc * _T8C;
  struct _fat_ptr _T8D;
  struct Cyc_PP_Doc * (* _T8E)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T8F)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _T90;
  struct Cyc_List_List * _T91;
  struct _fat_ptr _T92;
  struct Cyc_PP_Doc * _T93;
  struct _fat_ptr _T94;
  struct _fat_ptr _T95;
  struct Cyc_PP_Doc * (* _T96)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T97)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _T98;
  struct Cyc_List_List * _T99;
  struct _fat_ptr _T9A;
  struct _fat_ptr _T9B;
  struct _fat_ptr _T9C;
  long _T9D;
  struct Cyc_PP_Doc * _T9E;
  struct _fat_ptr _T9F;
  struct Cyc_PP_Doc * (* _TA0)(struct Cyc_PP_Doc * (*)(struct _tuple22 *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TA1)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _TA2;
  struct Cyc_List_List * _TA3;
  struct _fat_ptr _TA4;
  struct Cyc_PP_Doc * _TA5;
  struct _fat_ptr _TA6;
  struct Cyc_PP_Doc * (* _TA7)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TA8)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _TA9;
  struct Cyc_List_List * _TAA;
  struct _fat_ptr _TAB;
  struct Cyc_PP_Doc * _TAC;
  struct _fat_ptr _TAD;
  struct Cyc_PP_Doc * (* _TAE)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TAF)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _TB0;
  struct Cyc_List_List * _TB1;
  struct _fat_ptr _TB2;
  struct Cyc_PP_Doc * _TB3;
  struct _fat_ptr _TB4;
  struct _fat_ptr _TB5;
  struct Cyc_PP_Doc * (* _TB6)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
			       struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _TB7)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			       struct Cyc_List_List *);
  struct _fat_ptr _TB8;
  struct Cyc_List_List * _TB9;
  struct _fat_ptr _TBA;
  struct _fat_ptr _TBB;
  struct _fat_ptr _TBC;
  struct Cyc_PP_Doc * _TBD;
  struct _fat_ptr _TBE;
  struct _fat_ptr _TBF;
  struct Cyc_PP_Doc * _TC0;
  struct _fat_ptr _TC1;
  struct _fat_ptr _TC2;
  struct Cyc_PP_Doc * _TC3;
  struct _fat_ptr _TC4;
  struct _fat_ptr _TC5;
  struct Cyc_PP_Doc * _TC6;
  struct _fat_ptr _TC7;
  struct _fat_ptr _TC8;
  struct Cyc_PP_Doc * _TC9;
  struct Cyc_PP_Doc * s;
  _T0 = d;
  { void * _TCA = _T0->r;
    struct _tuple11 * _TCB;
    struct Cyc_List_List * _TCC;
    struct Cyc_List_List * _TCD;
    struct _tuple1 * _TCE;
    struct _fat_ptr * _TCF;
    struct Cyc_Absyn_Typedefdecl * _TD0;
    struct Cyc_Absyn_Pat * _TD1;
    struct Cyc_Absyn_Exp * _TD2;
    struct Cyc_Absyn_Tvar * _TD3;
    struct Cyc_Absyn_Enumdecl * _TD4;
    struct Cyc_List_List * _TD5;
    struct Cyc_Absyn_Datatypedecl * _TD6;
    struct Cyc_Absyn_Vardecl * _TD7;
    struct Cyc_Absyn_Aggrdecl * _TD8;
    struct Cyc_Absyn_Fndecl * _TD9;
    _T1 = (int *)_TCA;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_TCA;
	_TD9 = _TDA->f1;
      }{ struct Cyc_Absyn_Fndecl * fd = _TD9;
	_T3 = fd;
	{ struct Cyc_Absyn_FnInfo type_info = _T3->i;
	  type_info.attributes = 0;
	  { struct Cyc_Absyn_FnType_Absyn_Type_struct * _TDA = _cycalloc(sizeof(struct Cyc_Absyn_FnType_Absyn_Type_struct));
	    _TDA->tag = 6;
	    _TDA->f1 = type_info;
	    _T4 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_TDA;
	  }{ void * t = (void *)_T4;
	    _T5 = fd;
	    _T6 = _T5->cached_type;
	    if (_T6 == 0) { goto _TL291;
	    }
	    _T7 = fd;
	    _T8 = _T7->cached_type;
	    { void * _TDA = Cyc_Absyn_compress(_T8);
	      struct Cyc_Absyn_FnInfo _TDB;
	      _T9 = (int *)_TDA;
	      _TA = *_T9;
	      if (_TA != 6) { goto _TL293;
	      }
	      { struct Cyc_Absyn_FnType_Absyn_Type_struct * _TDC = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_TDA;
		_TDB = _TDC->f1;
	      }{ struct Cyc_Absyn_FnInfo i = _TDB;
		_TB = fd;
		_TC = fd;
		_TD = _TC->i;
		_TE = _TD.attributes;
		_TF = i;
		_T10 = _TF.attributes;
		(_TB->i).attributes = Cyc_List_append(_TE,_T10);
		goto _LL23;
	      }_TL293: _T12 = Cyc_Warn_impos;
	      { int (* _TDC)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									 struct _fat_ptr))_T12;
		_T11 = _TDC;
	      }_T13 = _tag_fat("function has non-function type",sizeof(char),
			       31U);
	      _T14 = _tag_fat(0U,sizeof(void *),0);
	      _T11(_T13,_T14);
	      _LL23: ;
	    }goto _TL292;
	    _TL291: _TL292: _T15 = fd;
	    _T16 = _T15->i;
	    _T17 = _T16.attributes;
	    { struct Cyc_PP_Doc * attsdoc = Cyc_Absynpp_atts2doc(_T17);
	      struct Cyc_PP_Doc * inlinedoc;
	      _T18 = fd;
	      _T19 = _T18->is_inline;
	      if (! _T19) { goto _TL295;
	      }
	      _T1A = Cyc_Flags_c_compiler;
	      if (_T1A != Cyc_Flags_Gcc_c) { goto _TL297;
	      }
	      _T1B = _tag_fat("inline ",sizeof(char),8U);
	      inlinedoc = Cyc_PP_text(_T1B);
	      goto _LL28;
	      _TL297: _T1C = _tag_fat("__inline ",sizeof(char),10U);
	      inlinedoc = Cyc_PP_text(_T1C);
	      goto _LL28;
	      _LL28: goto _TL296;
	      _TL295: inlinedoc = Cyc_PP_nil_doc();
	      _TL296: _T1D = fd;
	      _T1E = _T1D->sc;
	      { struct Cyc_PP_Doc * scopedoc = Cyc_Absynpp_scope2doc(_T1E);
		struct Cyc_PP_Doc * beforenamedoc;
		_T1F = Cyc_Flags_c_compiler;
		if (_T1F != Cyc_Flags_Gcc_c) { goto _TL299;
		}
		beforenamedoc = attsdoc;
		goto _LL2D;
		_TL299: _T20 = fd;
		_T21 = _T20->i;
		_T22 = _T21.attributes;
		beforenamedoc = Cyc_Absynpp_callconv2doc(_T22);
		goto _LL2D;
		_LL2D: _T23 = fd;
		_T24 = _T23->name;
		{ struct Cyc_PP_Doc * namedoc = Cyc_Absynpp_typedef_name2doc(_T24);
		  _T25 = Cyc_Absyn_empty_tqual(0U);
		  _T26 = t;
		  { struct Cyc_Core_Opt * _TDA = _cycalloc(sizeof(struct Cyc_Core_Opt));
		    { struct Cyc_PP_Doc * _TDB[2];
		      _TDB[0] = beforenamedoc;
		      _TDB[1] = namedoc;
		      _T29 = _tag_fat(_TDB,sizeof(struct Cyc_PP_Doc *),2);
		      _T28 = Cyc_PP_cat(_T29);
		    }_TDA->v = _T28;
		    _T27 = (struct Cyc_Core_Opt *)_TDA;
		  }{ struct Cyc_PP_Doc * tqtddoc = Cyc_Absynpp_tqtd2doc(_T25,
									_T26,
									_T27);
		    { struct Cyc_PP_Doc * _TDA[5];
		      _TDA[0] = Cyc_PP_blank_doc();
		      _TDA[1] = Cyc_Absynpp_lb();
		      { struct Cyc_PP_Doc * _TDB[2];
			_TDB[0] = Cyc_PP_line_doc();
			_T2C = fd;
			_T2D = _T2C->body;
			_TDB[1] = Cyc_Absynpp_stmt2doc(_T2D,0,0,1);
			_T2E = _tag_fat(_TDB,sizeof(struct Cyc_PP_Doc *),
					2);
			_T2B = Cyc_PP_cat(_T2E);
		      }_TDA[2] = Cyc_PP_nest(2,_T2B);
		      _TDA[3] = Cyc_PP_line_doc();
		      _TDA[4] = Cyc_Absynpp_rb();
		      _T2F = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),5);
		      _T2A = Cyc_PP_cat(_T2F);
		    }{ struct Cyc_PP_Doc * bodydoc = _T2A;
		      { struct Cyc_PP_Doc * _TDA[4];
			_TDA[0] = inlinedoc;
			_TDA[1] = scopedoc;
			_TDA[2] = tqtddoc;
			_TDA[3] = bodydoc;
			_T31 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),
					4);
			_T30 = Cyc_PP_cat(_T31);
		      }s = _T30;
		      _T32 = Cyc_Flags_c_compiler;
		      if (_T32 != Cyc_Flags_Vc_c) { goto _TL29B;
		      }
		      { struct Cyc_PP_Doc * _TDA[2];
			_TDA[0] = attsdoc;
			_TDA[1] = s;
			_T34 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),
					2);
			_T33 = Cyc_PP_cat(_T34);
		      }s = _T33;
		      goto _LL32;
		      _TL29B: goto _LL32;
		      _LL32: goto _LL0;
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    case 5: 
      { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_TCA;
	_TD8 = _TDA->f1;
      }{ struct Cyc_Absyn_Aggrdecl * ad = _TD8;
	{ struct Cyc_PP_Doc * _TDA[2];
	  _TDA[0] = Cyc_Absynpp_aggrdecl2doc(ad);
	  _T36 = _tag_fat(";",sizeof(char),2U);
	  _TDA[1] = Cyc_PP_text(_T36);
	  _T37 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),2);
	  _T35 = Cyc_PP_cat(_T37);
	}s = _T35;
	goto _LL0;
      }
    case 0: 
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TCA;
	_TD7 = _TDA->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _TD7;
	s = Cyc_Absynpp_vardecl2doc(vd,1);
	goto _LL0;
      }
    case 6: 
      { struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct *)_TCA;
	_TD6 = _TDA->f1;
      }{ struct Cyc_Absyn_Datatypedecl * dd = _TD6;
	{ struct Cyc_PP_Doc * _TDA[2];
	  _TDA[0] = Cyc_Absynpp_datatypedecl2doc(dd);
	  _T39 = _tag_fat(";",sizeof(char),2U);
	  _TDA[1] = Cyc_PP_text(_T39);
	  _T3A = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),2);
	  _T38 = Cyc_PP_cat(_T3A);
	}s = _T38;
	goto _LL0;
      }
    case 3: 
      { struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct *)_TCA;
	_TD5 = _TDA->f1;
      }{ struct Cyc_List_List * vds = _TD5;
	{ struct Cyc_PP_Doc * _TDA[3];
	  _T3C = _tag_fat("let ",sizeof(char),5U);
	  _TDA[0] = Cyc_PP_text(_T3C);
	  _TDA[1] = Cyc_Absynpp_ids2doc(vds);
	  _T3D = _tag_fat(";",sizeof(char),2U);
	  _TDA[2] = Cyc_PP_text(_T3D);
	  _T3E = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),3);
	  _T3B = Cyc_PP_cat(_T3E);
	}s = _T3B;
	goto _LL0;
      }
    case 7: 
      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_TCA;
	_TD4 = _TDA->f1;
      }{ struct Cyc_Absyn_Enumdecl * ed = _TD4;
	{ struct Cyc_PP_Doc * _TDA[2];
	  _TDA[0] = Cyc_Absynpp_enumdecl2doc(ed);
	  _T40 = _tag_fat(";",sizeof(char),2U);
	  _TDA[1] = Cyc_PP_text(_T40);
	  _T41 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),2);
	  _T3F = Cyc_PP_cat(_T41);
	}s = _T3F;
	goto _LL0;
      }
    case 4: 
      { struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct *)_TCA;
	_TD3 = _TDA->f1;
	_TD7 = _TDA->f2;
	_TD2 = _TDA->f3;
      }{ struct Cyc_Absyn_Tvar * tv = _TD3;
	struct Cyc_Absyn_Vardecl * vd = _TD7;
	struct Cyc_Absyn_Exp * open_exp_opt = _TD2;
	{ struct Cyc_PP_Doc * _TDA[6];
	  _T43 = _tag_fat("region",sizeof(char),7U);
	  _TDA[0] = Cyc_PP_text(_T43);
	  _T44 = open_exp_opt;
	  _T45 = (unsigned int)_T44;
	  if (! _T45) { goto _TL29D;
	  }
	  _TDA[1] = Cyc_PP_nil_doc();
	  goto _TL29E;
	  _TL29D: { struct Cyc_PP_Doc * _TDB[3];
	    _T47 = _tag_fat("<",sizeof(char),2U);
	    _TDB[0] = Cyc_PP_text(_T47);
	    _TDB[1] = Cyc_Absynpp_tvar2doc(tv);
	    _T48 = _tag_fat(">",sizeof(char),2U);
	    _TDB[2] = Cyc_PP_text(_T48);
	    _T49 = _tag_fat(_TDB,sizeof(struct Cyc_PP_Doc *),3);
	    _T46 = Cyc_PP_cat(_T49);
	  }_TDA[1] = _T46;
	  _TL29E: _T4A = _tag_fat(" ",sizeof(char),2U);
	  _TDA[2] = Cyc_PP_text(_T4A);
	  _T4B = vd;
	  _T4C = _T4B->name;
	  _TDA[3] = Cyc_Absynpp_qvar2doc(_T4C);
	  _T4D = open_exp_opt;
	  _T4E = (unsigned int)_T4D;
	  if (! _T4E) { goto _TL29F;
	  }
	  { struct Cyc_PP_Doc * _TDB[3];
	    _T50 = _tag_fat(" = open(",sizeof(char),9U);
	    _TDB[0] = Cyc_PP_text(_T50);
	    _TDB[1] = Cyc_Absynpp_exp2doc(open_exp_opt);
	    _T51 = _tag_fat(")",sizeof(char),2U);
	    _TDB[2] = Cyc_PP_text(_T51);
	    _T52 = _tag_fat(_TDB,sizeof(struct Cyc_PP_Doc *),3);
	    _T4F = Cyc_PP_cat(_T52);
	  }_TDA[4] = _T4F;
	  goto _TL2A0;
	  _TL29F: _TDA[4] = Cyc_PP_nil_doc();
	  _TL2A0: _T53 = _tag_fat(";",sizeof(char),2U);
	  _TDA[5] = Cyc_PP_text(_T53);
	  _T54 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),6);
	  _T42 = Cyc_PP_cat(_T54);
	}s = _T42;
	goto _LL0;
      }
    case 2: 
      { struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_TCA;
	_TD1 = _TDA->f1;
	_TD2 = _TDA->f3;
      }{ struct Cyc_Absyn_Pat * p = _TD1;
	struct Cyc_Absyn_Exp * e = _TD2;
	{ struct Cyc_PP_Doc * _TDA[5];
	  _T56 = _tag_fat("let ",sizeof(char),5U);
	  _TDA[0] = Cyc_PP_text(_T56);
	  _TDA[1] = Cyc_Absynpp_pat2doc(p);
	  _T57 = _tag_fat(" = ",sizeof(char),4U);
	  _TDA[2] = Cyc_PP_text(_T57);
	  _TDA[3] = Cyc_Absynpp_exp2doc(e);
	  _T58 = _tag_fat(";",sizeof(char),2U);
	  _TDA[4] = Cyc_PP_text(_T58);
	  _T59 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),5);
	  _T55 = Cyc_PP_cat(_T59);
	}s = _T55;
	goto _LL0;
      }
    case 8: 
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_TCA;
	_TD0 = _TDA->f1;
      }{ struct Cyc_Absyn_Typedefdecl * td = _TD0;
	_T5B = td;
	_T5C = _T5B->defn;
	if (_T5C == 0) { goto _TL2A1;
	}
	_T5D = td;
	_T5A = _T5D->defn;
	goto _TL2A2;
	_TL2A1: _T5E = td;
	_T5F = _T5E->kind;
	_T5A = Cyc_Absyn_new_evar(_T5F,0);
	_TL2A2: { void * t = _T5A;
	  { struct Cyc_PP_Doc * _TDA[4];
	    _T61 = _tag_fat("typedef ",sizeof(char),9U);
	    _TDA[0] = Cyc_PP_text(_T61);
	    _T62 = td;
	    _T63 = _T62->tq;
	    _T64 = t;
	    { struct Cyc_Core_Opt * _TDB = _cycalloc(sizeof(struct Cyc_Core_Opt));
	      { struct Cyc_PP_Doc * _TDC[2];
		_T67 = td;
		_T68 = _T67->name;
		_TDC[0] = Cyc_Absynpp_typedef_name2bolddoc(_T68);
		_T69 = td;
		_T6A = _T69->tvs;
		_TDC[1] = Cyc_Absynpp_tvars2doc(_T6A);
		_T6B = _tag_fat(_TDC,sizeof(struct Cyc_PP_Doc *),2);
		_T66 = Cyc_PP_cat(_T6B);
	      }_TDB->v = _T66;
	      _T65 = (struct Cyc_Core_Opt *)_TDB;
	    }_TDA[1] = Cyc_Absynpp_tqtd2doc(_T63,_T64,_T65);
	    _T6C = td;
	    _T6D = _T6C->atts;
	    _TDA[2] = Cyc_Absynpp_atts2doc(_T6D);
	    _T6E = _tag_fat(";",sizeof(char),2U);
	    _TDA[3] = Cyc_PP_text(_T6E);
	    _T6F = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),4);
	    _T60 = Cyc_PP_cat(_T6F);
	  }s = _T60;
	  goto _LL0;
	}
      }
    case 9: 
      { struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_TCA;
	_TCF = _TDA->f1;
	_TD5 = _TDA->f2;
      }{ struct _fat_ptr * v = _TCF;
	struct Cyc_List_List * tdl = _TD5;
	_T70 = Cyc_Absynpp_use_curr_namespace;
	if (! _T70) { goto _TL2A3;
	}
	Cyc_Absynpp_curr_namespace_add(v);
	goto _TL2A4;
	_TL2A3: _TL2A4: { struct Cyc_PP_Doc * _TDA[8];
	  _T72 = _tag_fat("namespace ",sizeof(char),11U);
	  _TDA[0] = Cyc_PP_text(_T72);
	  _TDA[1] = Cyc_PP_textptr(v);
	  _TDA[2] = Cyc_PP_blank_doc();
	  _TDA[3] = Cyc_Absynpp_lb();
	  _TDA[4] = Cyc_PP_line_doc();
	  _T74 = Cyc_PP_ppseql;
	  { struct Cyc_PP_Doc * (* _TDB)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
					 struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
													    struct _fat_ptr,
													    struct Cyc_List_List *))_T74;
	    _T73 = _TDB;
	  }_T75 = _tag_fat("",sizeof(char),1U);
	  _T76 = tdl;
	  _TDA[5] = _T73(Cyc_Absynpp_decl2doc,_T75,_T76);
	  _TDA[6] = Cyc_PP_line_doc();
	  _TDA[7] = Cyc_Absynpp_rb();
	  _T77 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),8);
	  _T71 = Cyc_PP_cat(_T77);
	}s = _T71;
	_T78 = Cyc_Absynpp_use_curr_namespace;
	if (! _T78) { goto _TL2A5;
	}
	Cyc_Absynpp_curr_namespace_drop();
	goto _TL2A6;
	_TL2A5: _TL2A6: goto _LL0;
      }
    case 10: 
      { struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct *)_TCA;
	_TCE = _TDA->f1;
	_TD5 = _TDA->f2;
      }{ struct _tuple1 * q = _TCE;
	struct Cyc_List_List * tdl = _TD5;
	_T79 = Cyc_Absynpp_print_using_stmts;
	if (! _T79) { goto _TL2A7;
	}
	{ struct Cyc_PP_Doc * _TDA[8];
	  _T7B = _tag_fat("using ",sizeof(char),7U);
	  _TDA[0] = Cyc_PP_text(_T7B);
	  _TDA[1] = Cyc_Absynpp_qvar2doc(q);
	  _TDA[2] = Cyc_PP_blank_doc();
	  _TDA[3] = Cyc_Absynpp_lb();
	  _TDA[4] = Cyc_PP_line_doc();
	  _T7D = Cyc_PP_ppseql;
	  { struct Cyc_PP_Doc * (* _TDB)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
					 struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
													    struct _fat_ptr,
													    struct Cyc_List_List *))_T7D;
	    _T7C = _TDB;
	  }_T7E = _tag_fat("",sizeof(char),1U);
	  _T7F = tdl;
	  _TDA[5] = _T7C(Cyc_Absynpp_decl2doc,_T7E,_T7F);
	  _TDA[6] = Cyc_PP_line_doc();
	  _TDA[7] = Cyc_Absynpp_rb();
	  _T80 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),8);
	  _T7A = Cyc_PP_cat(_T80);
	}s = _T7A;
	goto _TL2A8;
	_TL2A7: { struct Cyc_PP_Doc * _TDA[11];
	  _T82 = _tag_fat("/* using ",sizeof(char),10U);
	  _TDA[0] = Cyc_PP_text(_T82);
	  _TDA[1] = Cyc_Absynpp_qvar2doc(q);
	  _TDA[2] = Cyc_PP_blank_doc();
	  _TDA[3] = Cyc_Absynpp_lb();
	  _T83 = _tag_fat(" */",sizeof(char),4U);
	  _TDA[4] = Cyc_PP_text(_T83);
	  _TDA[5] = Cyc_PP_line_doc();
	  _T85 = Cyc_PP_ppseql;
	  { struct Cyc_PP_Doc * (* _TDB)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
					 struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
													    struct _fat_ptr,
													    struct Cyc_List_List *))_T85;
	    _T84 = _TDB;
	  }_T86 = _tag_fat("",sizeof(char),1U);
	  _T87 = tdl;
	  _TDA[6] = _T84(Cyc_Absynpp_decl2doc,_T86,_T87);
	  _TDA[7] = Cyc_PP_line_doc();
	  _T88 = _tag_fat("/* ",sizeof(char),4U);
	  _TDA[8] = Cyc_PP_text(_T88);
	  _TDA[9] = Cyc_Absynpp_rb();
	  _T89 = _tag_fat(" */",sizeof(char),4U);
	  _TDA[10] = Cyc_PP_text(_T89);
	  _T8A = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),11);
	  _T81 = Cyc_PP_cat(_T8A);
	}s = _T81;
	_TL2A8: goto _LL0;
      }
    case 11: 
      { struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct *)_TCA;
	_TD5 = _TDA->f1;
      }{ struct Cyc_List_List * tdl = _TD5;
	_T8B = Cyc_Absynpp_print_externC_stmts;
	if (! _T8B) { goto _TL2A9;
	}
	{ struct Cyc_PP_Doc * _TDA[6];
	  _T8D = _tag_fat("extern \"C\" ",sizeof(char),12U);
	  _TDA[0] = Cyc_PP_text(_T8D);
	  _TDA[1] = Cyc_Absynpp_lb();
	  _TDA[2] = Cyc_PP_line_doc();
	  _T8F = Cyc_PP_ppseql;
	  { struct Cyc_PP_Doc * (* _TDB)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
					 struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
													    struct _fat_ptr,
													    struct Cyc_List_List *))_T8F;
	    _T8E = _TDB;
	  }_T90 = _tag_fat("",sizeof(char),1U);
	  _T91 = tdl;
	  _TDA[3] = _T8E(Cyc_Absynpp_decl2doc,_T90,_T91);
	  _TDA[4] = Cyc_PP_line_doc();
	  _TDA[5] = Cyc_Absynpp_rb();
	  _T92 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),6);
	  _T8C = Cyc_PP_cat(_T92);
	}s = _T8C;
	goto _TL2AA;
	_TL2A9: { struct Cyc_PP_Doc * _TDA[9];
	  _T94 = _tag_fat("/* extern \"C\" ",sizeof(char),15U);
	  _TDA[0] = Cyc_PP_text(_T94);
	  _TDA[1] = Cyc_Absynpp_lb();
	  _T95 = _tag_fat(" */",sizeof(char),4U);
	  _TDA[2] = Cyc_PP_text(_T95);
	  _TDA[3] = Cyc_PP_line_doc();
	  _T97 = Cyc_PP_ppseql;
	  { struct Cyc_PP_Doc * (* _TDB)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
					 struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
													    struct _fat_ptr,
													    struct Cyc_List_List *))_T97;
	    _T96 = _TDB;
	  }_T98 = _tag_fat("",sizeof(char),1U);
	  _T99 = tdl;
	  _TDA[4] = _T96(Cyc_Absynpp_decl2doc,_T98,_T99);
	  _TDA[5] = Cyc_PP_line_doc();
	  _T9A = _tag_fat("/* ",sizeof(char),4U);
	  _TDA[6] = Cyc_PP_text(_T9A);
	  _TDA[7] = Cyc_Absynpp_rb();
	  _T9B = _tag_fat(" */",sizeof(char),4U);
	  _TDA[8] = Cyc_PP_text(_T9B);
	  _T9C = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),9);
	  _T93 = Cyc_PP_cat(_T9C);
	}s = _T93;
	_TL2AA: goto _LL0;
      }
    case 12: 
      { struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct * _TDA = (struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct *)_TCA;
	_TD5 = _TDA->f1;
	_TCD = _TDA->f2;
	_TCC = _TDA->f3;
	_TCB = _TDA->f4;
      }{ struct Cyc_List_List * tdl = _TD5;
	struct Cyc_List_List * ovrs = _TCD;
	struct Cyc_List_List * exs = _TCC;
	struct _tuple11 * wc = _TCB;
	_T9D = Cyc_Absynpp_print_externC_stmts;
	if (! _T9D) { goto _TL2AB;
	}
	{ struct Cyc_PP_Doc * exs_doc;
	  struct Cyc_PP_Doc * ovrs_doc;
	  if (exs == 0) { goto _TL2AD;
	  }
	  { struct Cyc_PP_Doc * _TDA[7];
	    _TDA[0] = Cyc_Absynpp_rb();
	    _T9F = _tag_fat(" export ",sizeof(char),9U);
	    _TDA[1] = Cyc_PP_text(_T9F);
	    _TDA[2] = Cyc_Absynpp_lb();
	    _TDA[3] = Cyc_PP_line_doc();
	    _TA1 = Cyc_PP_ppseql;
	    { struct Cyc_PP_Doc * (* _TDB)(struct Cyc_PP_Doc * (*)(struct _tuple22 *),
					   struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct _tuple22 *),
													      struct _fat_ptr,
													      struct Cyc_List_List *))_TA1;
	      _TA0 = _TDB;
	    }_TA2 = _tag_fat(",",sizeof(char),2U);
	    _TA3 = exs;
	    _TDA[4] = _TA0(Cyc_Absynpp_export2doc,_TA2,_TA3);
	    _TDA[5] = Cyc_PP_line_doc();
	    _TDA[6] = Cyc_Absynpp_rb();
	    _TA4 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),7);
	    _T9E = Cyc_PP_cat(_TA4);
	  }exs_doc = _T9E;
	  goto _TL2AE;
	  _TL2AD: exs_doc = Cyc_Absynpp_rb();
	  _TL2AE: if (ovrs == 0) { goto _TL2AF;
	  }
	  { struct Cyc_PP_Doc * _TDA[7];
	    _TDA[0] = Cyc_Absynpp_rb();
	    _TA6 = _tag_fat(" cycdef ",sizeof(char),9U);
	    _TDA[1] = Cyc_PP_text(_TA6);
	    _TDA[2] = Cyc_Absynpp_lb();
	    _TDA[3] = Cyc_PP_line_doc();
	    _TA8 = Cyc_PP_ppseql;
	    { struct Cyc_PP_Doc * (* _TDB)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
					   struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
													      struct _fat_ptr,
													      struct Cyc_List_List *))_TA8;
	      _TA7 = _TDB;
	    }_TA9 = _tag_fat("",sizeof(char),1U);
	    _TAA = ovrs;
	    _TDA[4] = _TA7(Cyc_Absynpp_decl2doc,_TA9,_TAA);
	    _TDA[5] = Cyc_PP_line_doc();
	    _TDA[6] = Cyc_Absynpp_rb();
	    _TAB = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),7);
	    _TA5 = Cyc_PP_cat(_TAB);
	  }ovrs_doc = _TA5;
	  goto _TL2B0;
	  _TL2AF: ovrs_doc = Cyc_Absynpp_rb();
	  _TL2B0: { struct Cyc_PP_Doc * _TDA[6];
	    _TAD = _tag_fat("extern \"C include\" ",sizeof(char),20U);
	    _TDA[0] = Cyc_PP_text(_TAD);
	    _TDA[1] = Cyc_Absynpp_lb();
	    _TDA[2] = Cyc_PP_line_doc();
	    _TAF = Cyc_PP_ppseql;
	    { struct Cyc_PP_Doc * (* _TDB)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
					   struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
													      struct _fat_ptr,
													      struct Cyc_List_List *))_TAF;
	      _TAE = _TDB;
	    }_TB0 = _tag_fat("",sizeof(char),1U);
	    _TB1 = tdl;
	    _TDA[3] = _TAE(Cyc_Absynpp_decl2doc,_TB0,_TB1);
	    _TDA[4] = Cyc_PP_line_doc();
	    _TDA[5] = exs_doc;
	    _TB2 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),6);
	    _TAC = Cyc_PP_cat(_TB2);
	  }s = _TAC;
	}goto _TL2AC;
	_TL2AB: { struct Cyc_PP_Doc * _TDA[9];
	  _TB4 = _tag_fat("/* extern \"C include\" ",sizeof(char),23U);
	  _TDA[0] = Cyc_PP_text(_TB4);
	  _TDA[1] = Cyc_Absynpp_lb();
	  _TB5 = _tag_fat(" */",sizeof(char),4U);
	  _TDA[2] = Cyc_PP_text(_TB5);
	  _TDA[3] = Cyc_PP_line_doc();
	  _TB7 = Cyc_PP_ppseql;
	  { struct Cyc_PP_Doc * (* _TDB)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
					 struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
													    struct _fat_ptr,
													    struct Cyc_List_List *))_TB7;
	    _TB6 = _TDB;
	  }_TB8 = _tag_fat("",sizeof(char),1U);
	  _TB9 = tdl;
	  _TDA[4] = _TB6(Cyc_Absynpp_decl2doc,_TB8,_TB9);
	  _TDA[5] = Cyc_PP_line_doc();
	  _TBA = _tag_fat("/* ",sizeof(char),4U);
	  _TDA[6] = Cyc_PP_text(_TBA);
	  _TDA[7] = Cyc_Absynpp_rb();
	  _TBB = _tag_fat(" */",sizeof(char),4U);
	  _TDA[8] = Cyc_PP_text(_TBB);
	  _TBC = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),9);
	  _TB3 = Cyc_PP_cat(_TBC);
	}s = _TB3;
	_TL2AC: goto _LL0;
      }
    case 13: 
      { struct Cyc_PP_Doc * _TDA[2];
	_TBE = _tag_fat("__cyclone_port_on__;",sizeof(char),21U);
	_TDA[0] = Cyc_PP_text(_TBE);
	_TDA[1] = Cyc_Absynpp_lb();
	_TBF = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),2);
	_TBD = Cyc_PP_cat(_TBF);
      }s = _TBD;
      goto _LL0;
    case 14: 
      { struct Cyc_PP_Doc * _TDA[2];
	_TC1 = _tag_fat("__cyclone_port_off__;",sizeof(char),22U);
	_TDA[0] = Cyc_PP_text(_TC1);
	_TDA[1] = Cyc_Absynpp_lb();
	_TC2 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),2);
	_TC0 = Cyc_PP_cat(_TC2);
      }s = _TC0;
      goto _LL0;
    case 15: 
      { struct Cyc_PP_Doc * _TDA[2];
	_TC4 = _tag_fat("__tempest_on__;",sizeof(char),16U);
	_TDA[0] = Cyc_PP_text(_TC4);
	_TDA[1] = Cyc_Absynpp_lb();
	_TC5 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),2);
	_TC3 = Cyc_PP_cat(_TC5);
      }s = _TC3;
      goto _LL0;
    default: 
      { struct Cyc_PP_Doc * _TDA[2];
	_TC7 = _tag_fat("__tempest_off__;",sizeof(char),17U);
	_TDA[0] = Cyc_PP_text(_TC7);
	_TDA[1] = Cyc_Absynpp_lb();
	_TC8 = _tag_fat(_TDA,sizeof(struct Cyc_PP_Doc *),2);
	_TC6 = Cyc_PP_cat(_TC8);
      }s = _TC6;
      goto _LL0;
    }
    _LL0: ;
  }_TC9 = s;
  return _TC9;
}
long Cyc_Absynpp_exists_temp_tvar_in_effect(void * t) {
  int * _T0;
  unsigned int _T1;
  long _T2;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  long _T8;
  void * _T9 = Cyc_Absyn_compress(t);
  struct Cyc_List_List * _TA;
  struct Cyc_Absyn_Tvar * _TB;
  _T0 = (int *)_T9;
  _T1 = *_T0;
  switch (_T1) {
  case 2: 
    { struct Cyc_Absyn_VarType_Absyn_Type_struct * _TC = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T9;
      _TB = _TC->f1;
    }{ struct Cyc_Absyn_Tvar * tv = _TB;
      _T2 = Cyc_Tcutil_is_temp_tvar(tv);
      return _T2;
    }
  case 0: 
    _T3 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T9;
    _T4 = _T3->f1;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    if (_T6 != 9) { goto _TL2B2;
    }
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TC = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T9;
      _TA = _TC->f2;
    }{ struct Cyc_List_List * l = _TA;
      _T7 = l;
      _T8 = Cyc_List_exists(Cyc_Absynpp_exists_temp_tvar_in_effect,_T7);
      return _T8;
    }_TL2B2: goto _LL5;
  default: 
    _LL5: return 0;
  }
  ;
}
long Cyc_Absynpp_is_anon_aggrtype(void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T4;
  void * _T5;
  int * _T6;
  int _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  long _TB;
  void * _TC;
  struct Cyc_Absyn_Typedefdecl * _TD;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 7: 
    goto _LL4;
  case 0: 
    _T3 = t;
    _T4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3;
    _T5 = _T4->f1;
    _T6 = (int *)_T5;
    _T7 = *_T6;
    if (_T7 != 20) { goto _TL2B5;
    }
    _LL4: return 1;
    _TL2B5: goto _LL7;
  case 8: 
    _T8 = t;
    { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _TE = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T8;
      _TD = _TE->f3;
      _T9 = _TE->f4;
      _TC = (void *)_T9;
    }_TA = (void *)_TC;
    if (_TA == 0) { goto _TL2B7;
    }
    { struct Cyc_Absyn_Typedefdecl * td = _TD;
      void * x = _TC;
      _TB = Cyc_Absynpp_is_anon_aggrtype(x);
      return _TB;
    }_TL2B7: goto _LL7;
  default: 
    _LL7: return 0;
  }
  ;
}
static struct Cyc_List_List * Cyc_Absynpp_bubble_attributes(struct _RegionHandle * r,
							    void * atts,struct Cyc_List_List * tms) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  struct _tuple0 _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  int * _T7;
  int _T8;
  void * _T9;
  int * _TA;
  int _TB;
  struct Cyc_List_List * _TC;
  struct _RegionHandle * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  struct _RegionHandle * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  struct _RegionHandle * _T13;
  void * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_List_List * _T18;
  struct _RegionHandle * _T19;
  if (tms == 0) { goto _TL2B9;
  }
  _T0 = tms;
  _T1 = _T0->tl;
  if (_T1 == 0) { goto _TL2B9;
  }
  { struct _tuple0 _T1A;
    _T3 = tms;
    _T1A.f0 = _T3->hd;
    _T4 = tms;
    _T5 = _T4->tl;
    _T1A.f1 = _T5->hd;
    _T2 = _T1A;
  }{ struct _tuple0 _T1A = _T2;
    _T6 = _T1A.f0;
    _T7 = (int *)_T6;
    _T8 = *_T7;
    if (_T8 != 2) { goto _TL2BB;
    }
    _T9 = _T1A.f1;
    _TA = (int *)_T9;
    _TB = *_TA;
    if (_TB != 3) { goto _TL2BD;
    }
    _TD = r;
    { struct Cyc_List_List * _T1B = _region_malloc(_TD,0U,sizeof(struct Cyc_List_List));
      _TE = tms;
      _T1B->hd = _TE->hd;
      _T10 = r;
      { struct Cyc_List_List * _T1C = _region_malloc(_T10,0U,sizeof(struct Cyc_List_List));
	_T11 = tms;
	_T12 = _T11->tl;
	_T1C->hd = _T12->hd;
	_T13 = r;
	_T14 = atts;
	_T15 = tms;
	_T16 = _T15->tl;
	_T17 = _T16->tl;
	_T1C->tl = Cyc_Absynpp_bubble_attributes(_T13,_T14,_T17);
	_TF = (struct Cyc_List_List *)_T1C;
      }_T1B->tl = _TF;
      _TC = (struct Cyc_List_List *)_T1B;
    }return _TC;
    _TL2BD: goto _LL3;
    _TL2BB: _LL3: goto _LL0;
    _LL0: ;
  }goto _TL2BA;
  _TL2B9: _TL2BA: _T19 = r;
  { struct Cyc_List_List * _T1A = _region_malloc(_T19,0U,sizeof(struct Cyc_List_List));
    _T1A->hd = atts;
    _T1A->tl = tms;
    _T18 = (struct Cyc_List_List *)_T1A;
  }return _T18;
}
static void Cyc_Absynpp_rewrite_temp_tvar(struct Cyc_Absyn_Tvar * t) {
  long _T0;
  struct _fat_ptr _T1;
  struct Cyc_Absyn_Tvar * _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  char * _T7;
  unsigned int _T8;
  unsigned char * _T9;
  char * _TA;
  struct Cyc_Absyn_Tvar * _TB;
  struct _fat_ptr * _TC;
  struct _fat_ptr _TD;
  _T0 = Cyc_Tcutil_is_temp_tvar(t);
  if (_T0) { goto _TL2BF;
  }else { goto _TL2C1;
  }
  _TL2C1: return;
  _TL2BF: _T1 = _tag_fat("`",sizeof(char),2U);
  _T2 = t;
  _T3 = _T2->name;
  _T4 = *_T3;
  { struct _fat_ptr s = Cyc_strconcat(_T1,_T4);
    _T5 = s;
    { struct _fat_ptr _TE = _fat_ptr_plus(_T5,sizeof(char),1);
      _T6 = _check_fat_subscript(_TE,sizeof(char),0U);
      _T7 = (char *)_T6;
      { char _TF = *_T7;
	char _T10 = 't';
	_T8 = _get_fat_size(_TE,sizeof(char));
	if (_T8 != 1U) { goto _TL2C2;
	}
	if (_TF != 0) { goto _TL2C2;
	}
	if (_T10 == 0) { goto _TL2C2;
	}
	_throw_arraybounds();
	goto _TL2C3;
	_TL2C2: _TL2C3: _T9 = _TE.curr;
	_TA = (char *)_T9;
	*_TA = _T10;
      }
    }_TB = t;
    { struct _fat_ptr * _TE = _cycalloc(sizeof(struct _fat_ptr));
      _TD = s;
      *_TE = _TD;
      _TC = (struct _fat_ptr *)_TE;
    }_TB->name = _TC;
  }
}
struct _tuple13 Cyc_Absynpp_to_tms(struct _RegionHandle * r,struct Cyc_Absyn_Tqual tq,
				   void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Absyn_ArrayInfo _T4;
  struct Cyc_Absyn_ArrayInfo _T5;
  struct Cyc_Absyn_ArrayInfo _T6;
  struct Cyc_Absyn_ArrayInfo _T7;
  struct Cyc_Absyn_ArrayInfo _T8;
  struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct * _T9;
  struct _RegionHandle * _TA;
  struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct * _TB;
  struct _RegionHandle * _TC;
  struct _tuple13 _TD;
  struct Cyc_List_List * _TE;
  struct _RegionHandle * _TF;
  void * _T10;
  struct Cyc_Absyn_PtrInfo _T11;
  struct Cyc_Absyn_PtrInfo _T12;
  struct Cyc_Absyn_PtrInfo _T13;
  struct Cyc_List_List * _T14;
  struct _RegionHandle * _T15;
  struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct * _T16;
  struct _RegionHandle * _T17;
  struct _tuple13 _T18;
  void * _T19;
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
  long _T28;
  long _T29;
  long _T2A;
  void (* _T2B)(void (*)(struct Cyc_Absyn_Tvar *),struct Cyc_List_List *);
  void (* _T2C)(void (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T2D;
  enum Cyc_Flags_C_Compilers _T2E;
  struct _RegionHandle * _T2F;
  struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct * _T30;
  struct _RegionHandle * _T31;
  void * _T32;
  struct Cyc_List_List * _T33;
  struct Cyc_List_List * _T34;
  struct _RegionHandle * _T35;
  struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct * _T36;
  struct _RegionHandle * _T37;
  struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct * _T38;
  struct _RegionHandle * _T39;
  struct Cyc_List_List * _T3A;
  struct _RegionHandle * _T3B;
  struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct * _T3C;
  struct _RegionHandle * _T3D;
  struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct * _T3E;
  struct _RegionHandle * _T3F;
  struct Cyc_List_List * _T40;
  int * _T41;
  unsigned int _T42;
  struct Cyc_List_List * _T43;
  struct _RegionHandle * _T44;
  struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct * _T45;
  struct _RegionHandle * _T46;
  struct Cyc_List_List * _T47;
  struct Cyc_List_List * _T48;
  struct Cyc_List_List * _T49;
  struct Cyc_List_List * _T4A;
  struct _RegionHandle * _T4B;
  struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct * _T4C;
  struct _RegionHandle * _T4D;
  struct _tuple13 _T4E;
  void * _T4F;
  void * _T50;
  struct _tuple13 _T51;
  struct _tuple13 _T52;
  void * _T53;
  void * _T54;
  long _T55;
  struct _tuple13 _T56;
  struct Cyc_Absyn_Tqual _T57;
  long _T58;
  struct Cyc_Absyn_Tqual _T59;
  struct _tuple13 _T5A;
  struct _tuple13 _T5B;
  struct Cyc_Absyn_Typedefdecl * _T5C;
  struct _tuple1 * _T5D;
  struct Cyc_List_List * _T5E;
  struct Cyc_Absyn_Exp * _T5F;
  struct Cyc_Absyn_Exp * _T60;
  struct Cyc_Absyn_Exp * _T61;
  struct Cyc_Absyn_Exp * _T62;
  struct Cyc_List_List * _T63;
  struct Cyc_List_List * _T64;
  struct Cyc_Absyn_VarargInfo * _T65;
  int _T66;
  struct Cyc_List_List * _T67;
  struct Cyc_Absyn_PtrAtts _T68;
  unsigned int _T69;
  void * _T6A;
  void * _T6B;
  struct Cyc_Absyn_Tqual _T6C;
  void * _T6D;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 5: 
    _T3 = t;
    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T6E = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T3;
      _T4 = _T6E->f1;
      _T6D = _T4.elt_type;
      _T5 = _T6E->f1;
      _T6C = _T5.tq;
      _T6 = _T6E->f1;
      _T6B = _T6.num_elts;
      _T7 = _T6E->f1;
      _T6A = _T7.zero_term;
      _T8 = _T6E->f1;
      _T69 = _T8.zt_loc;
    }{ void * t2 = _T6D;
      struct Cyc_Absyn_Tqual tq2 = _T6C;
      struct Cyc_Absyn_Exp * e = _T6B;
      void * zeroterm = _T6A;
      unsigned int ztl = _T69;
      struct _tuple13 _T6E = Cyc_Absynpp_to_tms(r,tq2,t2);
      struct Cyc_List_List * _T6F;
      void * _T70;
      struct Cyc_Absyn_Tqual _T71;
      _T71 = _T6E.f0;
      _T70 = _T6E.f1;
      _T6F = _T6E.f2;
      { struct Cyc_Absyn_Tqual tq3 = _T71;
	void * t3 = _T70;
	struct Cyc_List_List * tml3 = _T6F;
	void * tm;
	if (e != 0) { goto _TL2C5;
	}
	_TA = r;
	{ struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct * _T72 = _region_malloc(_TA,
											 0U,
											 sizeof(struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct));
	  _T72->tag = 0;
	  _T72->f1 = zeroterm;
	  _T72->f2 = ztl;
	  _T9 = (struct Cyc_Absyn_Carray_mod_Absyn_Type_modifier_struct *)_T72;
	}tm = (void *)_T9;
	goto _TL2C6;
	_TL2C5: _TC = r;
	{ struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct * _T72 = _region_malloc(_TC,
											     0U,
											     sizeof(struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct));
	  _T72->tag = 1;
	  _T72->f1 = e;
	  _T72->f2 = zeroterm;
	  _T72->f3 = ztl;
	  _TB = (struct Cyc_Absyn_ConstArray_mod_Absyn_Type_modifier_struct *)_T72;
	}tm = (void *)_TB;
	_TL2C6: { struct _tuple13 _T72;
	  _T72.f0 = tq3;
	  _T72.f1 = t3;
	  _TF = r;
	  { struct Cyc_List_List * _T73 = _region_malloc(_TF,0U,sizeof(struct Cyc_List_List));
	    _T73->hd = tm;
	    _T73->tl = tml3;
	    _TE = (struct Cyc_List_List *)_T73;
	  }_T72.f2 = _TE;
	  _TD = _T72;
	}return _TD;
      }
    }
  case 4: 
    _T10 = t;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T6E = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T10;
      _T11 = _T6E->f1;
      _T6D = _T11.elt_type;
      _T12 = _T6E->f1;
      _T6C = _T12.elt_tq;
      _T13 = _T6E->f1;
      _T68 = _T13.ptr_atts;
    }{ void * t2 = _T6D;
      struct Cyc_Absyn_Tqual tq2 = _T6C;
      struct Cyc_Absyn_PtrAtts ptratts = _T68;
      struct _tuple13 _T6E = Cyc_Absynpp_to_tms(r,tq2,t2);
      struct Cyc_List_List * _T6F;
      void * _T70;
      struct Cyc_Absyn_Tqual _T71;
      _T71 = _T6E.f0;
      _T70 = _T6E.f1;
      _T6F = _T6E.f2;
      { struct Cyc_Absyn_Tqual tq3 = _T71;
	void * t3 = _T70;
	struct Cyc_List_List * tml3 = _T6F;
	_T15 = r;
	{ struct Cyc_List_List * _T72 = _region_malloc(_T15,0U,sizeof(struct Cyc_List_List));
	  _T17 = r;
	  { struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct * _T73 = _region_malloc(_T17,
											    0U,
											    sizeof(struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct));
	    _T73->tag = 2;
	    _T73->f1 = ptratts;
	    _T73->f2 = tq;
	    _T16 = (struct Cyc_Absyn_Pointer_mod_Absyn_Type_modifier_struct *)_T73;
	  }_T72->hd = (void *)_T16;
	  _T72->tl = tml3;
	  _T14 = (struct Cyc_List_List *)_T72;
	}tml3 = _T14;
	{ struct _tuple13 _T72;
	  _T72.f0 = tq3;
	  _T72.f1 = t3;
	  _T72.f2 = tml3;
	  _T18 = _T72;
	}return _T18;
      }
    }
  case 6: 
    _T19 = t;
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T6E = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T19;
      _T1A = _T6E->f1;
      _T6D = _T1A.tvars;
      _T1B = _T6E->f1;
      _T6B = _T1B.effect;
      _T1C = _T6E->f1;
      _T6C = _T1C.ret_tqual;
      _T1D = _T6E->f1;
      _T6A = _T1D.ret_type;
      _T1E = _T6E->f1;
      _T67 = _T1E.args;
      _T1F = _T6E->f1;
      _T66 = _T1F.c_varargs;
      _T20 = _T6E->f1;
      _T65 = _T20.cyc_varargs;
      _T21 = _T6E->f1;
      _T64 = _T21.qual_bnd;
      _T22 = _T6E->f1;
      _T63 = _T22.attributes;
      _T23 = _T6E->f1;
      _T62 = _T23.checks_clause;
      _T24 = _T6E->f1;
      _T61 = _T24.requires_clause;
      _T25 = _T6E->f1;
      _T60 = _T25.ensures_clause;
      _T26 = _T6E->f1;
      _T5F = _T26.throws_clause;
      _T27 = _T6E->f1;
      _T5E = _T27.effconstr;
    }{ struct Cyc_List_List * typvars = _T6D;
      void * effopt = _T6B;
      struct Cyc_Absyn_Tqual t2qual = _T6C;
      void * t2 = _T6A;
      struct Cyc_List_List * args = _T67;
      long c_varargs = _T66;
      struct Cyc_Absyn_VarargInfo * cyc_varargs = _T65;
      struct Cyc_List_List * qb = _T64;
      struct Cyc_List_List * fn_atts = _T63;
      struct Cyc_Absyn_Exp * chk = _T62;
      struct Cyc_Absyn_Exp * req = _T61;
      struct Cyc_Absyn_Exp * ens = _T60;
      struct Cyc_Absyn_Exp * thrws = _T5F;
      struct Cyc_List_List * effc = _T5E;
      _T28 = Cyc_Absynpp_print_all_tvars;
      if (_T28) { goto _TL2C7;
      }else { goto _TL2C9;
      }
      _TL2C9: if (effopt == 0) { goto _TL2CC;
      }else { goto _TL2CD;
      }
      _TL2CD: _T29 = Cyc_Absynpp_exists_temp_tvar_in_effect(effopt);
      if (_T29) { goto _TL2CC;
      }else { goto _TL2CA;
      }
      _TL2CC: effopt = 0;
      typvars = 0;
      goto _TL2CB;
      _TL2CA: _TL2CB: goto _TL2C8;
      _TL2C7: _T2A = Cyc_Absynpp_rewrite_temp_tvars;
      if (! _T2A) { goto _TL2CE;
      }
      _T2C = Cyc_List_iter;
      { void (* _T6E)(void (*)(struct Cyc_Absyn_Tvar *),struct Cyc_List_List *) = (void (*)(void (*)(struct Cyc_Absyn_Tvar *),
											    struct Cyc_List_List *))_T2C;
	_T2B = _T6E;
      }_T2D = typvars;
      _T2B(Cyc_Absynpp_rewrite_temp_tvar,_T2D);
      goto _TL2CF;
      _TL2CE: _TL2CF: _TL2C8: { struct _tuple13 _T6E = Cyc_Absynpp_to_tms(r,
									  t2qual,
									  t2);
	struct Cyc_List_List * _T6F;
	void * _T70;
	struct Cyc_Absyn_Tqual _T71;
	_T71 = _T6E.f0;
	_T70 = _T6E.f1;
	_T6F = _T6E.f2;
	{ struct Cyc_Absyn_Tqual tq3 = _T71;
	  void * t3 = _T70;
	  struct Cyc_List_List * tml3 = _T6F;
	  struct Cyc_List_List * tms = tml3;
	  _T2E = Cyc_Flags_c_compiler;
	  if (_T2E != Cyc_Flags_Gcc_c) { goto _TL2D0;
	  }
	  if (fn_atts == 0) { goto _TL2D2;
	  }
	  _T2F = r;
	  _T31 = r;
	  { struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct * _T72 = _region_malloc(_T31,
											       0U,
											       sizeof(struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct));
	    _T72->tag = 5;
	    _T72->f1 = 0U;
	    _T72->f2 = fn_atts;
	    _T30 = (struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct *)_T72;
	  }_T32 = (void *)_T30;
	  _T33 = tms;
	  tms = Cyc_Absynpp_bubble_attributes(_T2F,_T32,_T33);
	  goto _TL2D3;
	  _TL2D2: _TL2D3: _T35 = r;
	  { struct Cyc_List_List * _T72 = _region_malloc(_T35,0U,sizeof(struct Cyc_List_List));
	    _T37 = r;
	    { struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct * _T73 = _region_malloc(_T37,
											       0U,
											       sizeof(struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct));
	      _T73->tag = 3;
	      _T39 = r;
	      { struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct * _T74 = _region_malloc(_T39,
											   0U,
											   sizeof(struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct));
		_T74->tag = 1;
		_T74->f1 = args;
		_T74->f2 = c_varargs;
		_T74->f3 = cyc_varargs;
		_T74->f4 = effopt;
		_T74->f5 = effc;
		_T74->f6 = qb;
		_T74->f7 = chk;
		_T74->f8 = req;
		_T74->f9 = ens;
		_T74->f10 = thrws;
		_T38 = (struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct *)_T74;
	      }_T73->f1 = (void *)_T38;
	      _T36 = (struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct *)_T73;
	    }_T72->hd = (void *)_T36;
	    _T72->tl = tms;
	    _T34 = (struct Cyc_List_List *)_T72;
	  }tms = _T34;
	  goto _LL16;
	  _TL2D0: _T3B = r;
	  { struct Cyc_List_List * _T72 = _region_malloc(_T3B,0U,sizeof(struct Cyc_List_List));
	    _T3D = r;
	    { struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct * _T73 = _region_malloc(_T3D,
											       0U,
											       sizeof(struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct));
	      _T73->tag = 3;
	      _T3F = r;
	      { struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct * _T74 = _region_malloc(_T3F,
											   0U,
											   sizeof(struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct));
		_T74->tag = 1;
		_T74->f1 = args;
		_T74->f2 = c_varargs;
		_T74->f3 = cyc_varargs;
		_T74->f4 = effopt;
		_T74->f5 = effc;
		_T74->f6 = qb;
		_T74->f7 = chk;
		_T74->f8 = req;
		_T74->f9 = ens;
		_T74->f10 = thrws;
		_T3E = (struct Cyc_Absyn_WithTypes_Absyn_Funcparams_struct *)_T74;
	      }_T73->f1 = (void *)_T3E;
	      _T3C = (struct Cyc_Absyn_Function_mod_Absyn_Type_modifier_struct *)_T73;
	    }_T72->hd = (void *)_T3C;
	    _T72->tl = tms;
	    _T3A = (struct Cyc_List_List *)_T72;
	  }tms = _T3A;
	  _TL2D7: if (fn_atts != 0) { goto _TL2D5;
	  }else { goto _TL2D6;
	  }
	  _TL2D5: _T40 = fn_atts;
	  { void * _T72 = _T40->hd;
	    _T41 = (int *)_T72;
	    _T42 = *_T41;
	    switch (_T42) {
	    case 1: 
	      goto _LL1F;
	    case 2: 
	      _LL1F: goto _LL21;
	    case 3: 
	      _LL21: _T44 = r;
	      { struct Cyc_List_List * _T73 = _region_malloc(_T44,0U,sizeof(struct Cyc_List_List));
		_T46 = r;
		{ struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct * _T74 = _region_malloc(_T46,
												     0U,
												     sizeof(struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct));
		  _T74->tag = 5;
		  _T74->f1 = 0U;
		  { struct Cyc_List_List * _T75 = _cycalloc(sizeof(struct Cyc_List_List));
		    _T48 = fn_atts;
		    _T75->hd = _T48->hd;
		    _T75->tl = 0;
		    _T47 = (struct Cyc_List_List *)_T75;
		  }_T74->f2 = _T47;
		  _T45 = (struct Cyc_Absyn_Attributes_mod_Absyn_Type_modifier_struct *)_T74;
		}_T73->hd = (void *)_T45;
		_T73->tl = tms;
		_T43 = (struct Cyc_List_List *)_T73;
	      }tms = _T43;
	      goto AfterAtts;
	    default: 
	      goto _LL1B;
	    }
	    _LL1B: ;
	  }_T49 = fn_atts;
	  fn_atts = _T49->tl;
	  goto _TL2D7;
	  _TL2D6: goto _LL16;
	  _LL16: AfterAtts: if (typvars == 0) { goto _TL2D9;
	  }
	  _T4B = r;
	  { struct Cyc_List_List * _T72 = _region_malloc(_T4B,0U,sizeof(struct Cyc_List_List));
	    _T4D = r;
	    { struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct * _T73 = _region_malloc(_T4D,
												 0U,
												 sizeof(struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct));
	      _T73->tag = 4;
	      _T73->f1 = typvars;
	      _T73->f2 = 0U;
	      _T73->f3 = 1;
	      _T4C = (struct Cyc_Absyn_TypeParams_mod_Absyn_Type_modifier_struct *)_T73;
	    }_T72->hd = (void *)_T4C;
	    _T72->tl = tms;
	    _T4A = (struct Cyc_List_List *)_T72;
	  }tms = _T4A;
	  goto _TL2DA;
	  _TL2D9: _TL2DA: { struct _tuple13 _T72;
	    _T72.f0 = tq3;
	    _T72.f1 = t3;
	    _T72.f2 = tms;
	    _T4E = _T72;
	  }return _T4E;
	}
      }
    }
  case 1: 
    _T4F = t;
    { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T6E = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T4F;
      _T6D = _T6E->f1;
      _T50 = _T6E->f2;
      _T6B = (void *)_T50;
      _T66 = _T6E->f3;
    }{ struct Cyc_Core_Opt * k = _T6D;
      void * topt = _T6B;
      int i = _T66;
      if (topt != 0) { goto _TL2DB;
      }
      { struct _tuple13 _T6E;
	_T6E.f0 = tq;
	_T6E.f1 = t;
	_T6E.f2 = 0;
	_T52 = _T6E;
      }_T51 = _T52;
      goto _TL2DC;
      _TL2DB: _T51 = Cyc_Absynpp_to_tms(r,tq,topt);
      _TL2DC: return _T51;
    }
  case 8: 
    _T53 = t;
    { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T6E = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T53;
      _T5D = _T6E->f1;
      _T67 = _T6E->f2;
      _T5C = _T6E->f3;
      _T54 = _T6E->f4;
      _T6D = (void *)_T54;
    }{ struct _tuple1 * n = _T5D;
      struct Cyc_List_List * ts = _T67;
      struct Cyc_Absyn_Typedefdecl * td = _T5C;
      void * topt = _T6D;
      if (topt == 0) { goto _TL2DF;
      }else { goto _TL2E0;
      }
      _TL2E0: _T55 = Cyc_Absynpp_expand_typedefs;
      if (_T55) { goto _TL2DD;
      }else { goto _TL2DF;
      }
      _TL2DF: { struct _tuple13 _T6E;
	_T6E.f0 = tq;
	_T6E.f1 = t;
	_T6E.f2 = 0;
	_T56 = _T6E;
      }return _T56;
      _TL2DD: _T57 = tq;
      _T58 = _T57.real_const;
      if (! _T58) { goto _TL2E1;
      }
      _T59 = tq;
      tq.print_const = _T59.real_const;
      goto _TL2E2;
      _TL2E1: _TL2E2: _T5A = Cyc_Absynpp_to_tms(r,tq,topt);
      return _T5A;
    }
  default: 
    { struct _tuple13 _T6E;
      _T6E.f0 = tq;
      _T6E.f1 = t;
      _T6E.f2 = 0;
      _T5B = _T6E;
    }return _T5B;
  }
  ;
}
static long Cyc_Absynpp_is_char_ptr(void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  long _T6;
  void * _T7;
  struct Cyc_Absyn_PtrInfo _T8;
  void * _T9;
  int * _TA;
  unsigned int _TB;
  void * _TC;
  void * _TD;
  void * _TE;
  void * _TF;
  void * _T10;
  void * _T11;
  void * _T12;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T13;
  void * _T14;
  int * _T15;
  int _T16;
  void * _T17;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T18;
  void * _T19;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T1A;
  enum Cyc_Absyn_Size_of _T1B;
  void * _T1C;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 1: 
    _T3 = t;
    { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T1D = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T3;
      _T4 = _T1D->f2;
      _T1C = (void *)_T4;
    }_T5 = (void *)_T1C;
    if (_T5 == 0) { goto _TL2E4;
    }
    { void * def = _T1C;
      _T6 = Cyc_Absynpp_is_char_ptr(def);
      return _T6;
    }_TL2E4: goto _LL5;
  case 4: 
    _T7 = t;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T1D = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T7;
      _T8 = _T1D->f1;
      _T1C = _T8.elt_type;
    }{ void * elt_typ = _T1C;
      _TL2E6: if (1) { goto _TL2E7;
      }else { goto _TL2E8;
      }
      _TL2E7: { void * _T1D;
	_T9 = elt_typ;
	_TA = (int *)_T9;
	_TB = *_TA;
	switch (_TB) {
	case 1: 
	  _TC = elt_typ;
	  { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T1E = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_TC;
	    _TD = _T1E->f2;
	    _T1D = (void *)_TD;
	  }_TE = (void *)_T1D;
	  if (_TE == 0) { goto _TL2EA;
	  }
	  { void * t = _T1D;
	    elt_typ = t;
	    goto _TL2E6;
	  }_TL2EA: goto _LLE;
	case 8: 
	  _TF = elt_typ;
	  { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T1E = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_TF;
	    _T10 = _T1E->f4;
	    _T1D = (void *)_T10;
	  }_T11 = (void *)_T1D;
	  if (_T11 == 0) { goto _TL2EC;
	  }
	  { void * t = _T1D;
	    elt_typ = t;
	    goto _TL2E6;
	  }_TL2EC: goto _LLE;
	case 0: 
	  _T12 = elt_typ;
	  _T13 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12;
	  _T14 = _T13->f1;
	  _T15 = (int *)_T14;
	  _T16 = *_T15;
	  if (_T16 != 1) { goto _TL2EE;
	  }
	  _T17 = elt_typ;
	  _T18 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T17;
	  _T19 = _T18->f1;
	  _T1A = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T19;
	  _T1B = _T1A->f2;
	  if (_T1B != Cyc_Absyn_Char_sz) { goto _TL2F0;
	  }
	  return 1;
	  _TL2F0: goto _LLE;
	  _TL2EE: goto _LLE;
	default: 
	  _LLE: return 0;
	}
	;
      }goto _TL2E6;
      _TL2E8: ;
    }
  default: 
    _LL5: return 0;
  }
  ;
}
struct Cyc_PP_Doc * Cyc_Absynpp_tqtd2doc(struct Cyc_Absyn_Tqual tq,void * typ,
					 struct Cyc_Core_Opt * dopt) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  struct Cyc_PP_Doc * _T2;
  struct _fat_ptr _T3;
  long _T4;
  struct Cyc_PP_Doc * _T5;
  struct Cyc_Core_Opt * _T6;
  void * _T7;
  struct Cyc_List_List * _T8;
  struct _fat_ptr _T9;
  struct _RegionHandle _TA = _new_region(0U,"temp");
  struct _RegionHandle * temp = &_TA;
  _push_region(temp);
  { struct _tuple13 _TB = Cyc_Absynpp_to_tms(temp,tq,typ);
    struct Cyc_List_List * _TC;
    void * _TD;
    struct Cyc_Absyn_Tqual _TE;
    _TE = _TB.f0;
    _TD = _TB.f1;
    _TC = _TB.f2;
    { struct Cyc_Absyn_Tqual tq = _TE;
      void * t = _TD;
      struct Cyc_List_List * tms = _TC;
      tms = Cyc_List_imp_rev(tms);
      if (tms != 0) { goto _TL2F2;
      }
      if (dopt != 0) { goto _TL2F2;
      }
      { struct Cyc_PP_Doc * _TF[2];
	_TF[0] = Cyc_Absynpp_tqual2doc(tq);
	_TF[1] = Cyc_Absynpp_ntyp2doc(t);
	_T1 = _tag_fat(_TF,sizeof(struct Cyc_PP_Doc *),2);
	_T0 = Cyc_PP_cat(_T1);
      }{ struct Cyc_PP_Doc * _TF = _T0;
	_npop_handler(0);
	return _TF;
      }_TL2F2: { struct Cyc_PP_Doc * _TF[4];
	_TF[0] = Cyc_Absynpp_tqual2doc(tq);
	_TF[1] = Cyc_Absynpp_ntyp2doc(t);
	_T3 = _tag_fat(" ",sizeof(char),2U);
	_TF[2] = Cyc_PP_text(_T3);
	_T4 = Cyc_Absynpp_is_char_ptr(typ);
	if (dopt != 0) { goto _TL2F4;
	}
	_T5 = Cyc_PP_nil_doc();
	goto _TL2F5;
	_TL2F4: _T6 = dopt;
	_T7 = _T6->v;
	_T5 = (struct Cyc_PP_Doc *)_T7;
	_TL2F5: _T8 = tms;
	_TF[3] = Cyc_Absynpp_dtms2doc(_T4,_T5,_T8);
	_T9 = _tag_fat(_TF,sizeof(struct Cyc_PP_Doc *),4);
	_T2 = Cyc_PP_cat(_T9);
      }{ struct Cyc_PP_Doc * _TF = _T2;
	_npop_handler(0);
	return _TF;
      }
    }
  }_pop_region();
}
struct Cyc_PP_Doc * Cyc_Absynpp_aggrfield2doc(struct Cyc_Absyn_Aggrfield * f) {
  struct Cyc_Absyn_Aggrfield * _T0;
  struct Cyc_Absyn_Aggrfield * _T1;
  struct Cyc_PP_Doc * _T2;
  struct Cyc_Absyn_Exp * _T3;
  unsigned int _T4;
  struct Cyc_PP_Doc * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct Cyc_PP_Doc * _T8;
  struct Cyc_Absyn_Exp * _T9;
  unsigned int _TA;
  struct Cyc_PP_Doc * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  enum Cyc_Flags_C_Compilers _TE;
  struct Cyc_PP_Doc * _TF;
  struct Cyc_Absyn_Aggrfield * _T10;
  struct Cyc_Absyn_Tqual _T11;
  struct Cyc_Absyn_Aggrfield * _T12;
  void * _T13;
  struct Cyc_Core_Opt * _T14;
  struct Cyc_Absyn_Aggrfield * _T15;
  struct _fat_ptr * _T16;
  struct Cyc_Absyn_Aggrfield * _T17;
  struct Cyc_List_List * _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct Cyc_PP_Doc * _T1B;
  struct Cyc_Absyn_Aggrfield * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_Absyn_Aggrfield * _T1E;
  struct Cyc_Absyn_Tqual _T1F;
  struct Cyc_Absyn_Aggrfield * _T20;
  void * _T21;
  struct Cyc_Core_Opt * _T22;
  struct Cyc_Absyn_Aggrfield * _T23;
  struct _fat_ptr * _T24;
  struct _fat_ptr _T25;
  struct _fat_ptr _T26;
  _T0 = f;
  { struct Cyc_Absyn_Exp * req = _T0->requires_clause;
    _T1 = f;
    { struct Cyc_Absyn_Exp * wid = _T1->width;
      _T3 = req;
      _T4 = (unsigned int)_T3;
      if (! _T4) { goto _TL2F6;
      }
      { struct Cyc_PP_Doc * _T27[2];
	_T6 = _tag_fat("@requires ",sizeof(char),11U);
	_T27[0] = Cyc_PP_text(_T6);
	_T27[1] = Cyc_Absynpp_exp2doc(req);
	_T7 = _tag_fat(_T27,sizeof(struct Cyc_PP_Doc *),2);
	_T5 = Cyc_PP_cat(_T7);
      }_T2 = _T5;
      goto _TL2F7;
      _TL2F6: _T2 = Cyc_PP_nil_doc();
      _TL2F7: { struct Cyc_PP_Doc * requires_doc = _T2;
	_T9 = wid;
	_TA = (unsigned int)_T9;
	if (! _TA) { goto _TL2F8;
	}
	{ struct Cyc_PP_Doc * _T27[2];
	  _TC = _tag_fat(":",sizeof(char),2U);
	  _T27[0] = Cyc_PP_text(_TC);
	  _T27[1] = Cyc_Absynpp_exp2doc(wid);
	  _TD = _tag_fat(_T27,sizeof(struct Cyc_PP_Doc *),2);
	  _TB = Cyc_PP_cat(_TD);
	}_T8 = _TB;
	goto _TL2F9;
	_TL2F8: _T8 = Cyc_PP_nil_doc();
	_TL2F9: { struct Cyc_PP_Doc * width_doc = _T8;
	  _TE = Cyc_Flags_c_compiler;
	  if (_TE != Cyc_Flags_Gcc_c) { goto _TL2FA;
	  }
	  { struct Cyc_PP_Doc * _T27[5];
	    _T10 = f;
	    _T11 = _T10->tq;
	    _T12 = f;
	    _T13 = _T12->type;
	    { struct Cyc_Core_Opt * _T28 = _cycalloc(sizeof(struct Cyc_Core_Opt));
	      _T15 = f;
	      _T16 = _T15->name;
	      _T28->v = Cyc_PP_textptr(_T16);
	      _T14 = (struct Cyc_Core_Opt *)_T28;
	    }_T27[0] = Cyc_Absynpp_tqtd2doc(_T11,_T13,_T14);
	    _T27[1] = width_doc;
	    _T17 = f;
	    _T18 = _T17->attributes;
	    _T27[2] = Cyc_Absynpp_atts2doc(_T18);
	    _T27[3] = requires_doc;
	    _T19 = _tag_fat(";",sizeof(char),2U);
	    _T27[4] = Cyc_PP_text(_T19);
	    _T1A = _tag_fat(_T27,sizeof(struct Cyc_PP_Doc *),5);
	    _TF = Cyc_PP_cat(_T1A);
	  }return _TF;
	  _TL2FA: { struct Cyc_PP_Doc * _T27[5];
	    _T1C = f;
	    _T1D = _T1C->attributes;
	    _T27[0] = Cyc_Absynpp_atts2doc(_T1D);
	    _T1E = f;
	    _T1F = _T1E->tq;
	    _T20 = f;
	    _T21 = _T20->type;
	    { struct Cyc_Core_Opt * _T28 = _cycalloc(sizeof(struct Cyc_Core_Opt));
	      _T23 = f;
	      _T24 = _T23->name;
	      _T28->v = Cyc_PP_textptr(_T24);
	      _T22 = (struct Cyc_Core_Opt *)_T28;
	    }_T27[1] = Cyc_Absynpp_tqtd2doc(_T1F,_T21,_T22);
	    _T27[2] = width_doc;
	    _T27[3] = requires_doc;
	    _T25 = _tag_fat(";",sizeof(char),2U);
	    _T27[4] = Cyc_PP_text(_T25);
	    _T26 = _tag_fat(_T27,sizeof(struct Cyc_PP_Doc *),5);
	    _T1B = Cyc_PP_cat(_T26);
	  }return _T1B;
	  ;
	}
      }
    }
  }
}
struct Cyc_PP_Doc * Cyc_Absynpp_aggrfields2doc(struct Cyc_List_List * fields) {
  struct Cyc_PP_Doc * (* _T0)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Aggrfield *),
			      struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T1)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			      struct Cyc_List_List *);
  struct _fat_ptr _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_PP_Doc * _T4;
  _T1 = Cyc_PP_ppseql;
  { struct Cyc_PP_Doc * (* _T5)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Aggrfield *),
				struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Aggrfield *),
												   struct _fat_ptr,
												   struct Cyc_List_List *))_T1;
    _T0 = _T5;
  }_T2 = _tag_fat("",sizeof(char),1U);
  _T3 = fields;
  _T4 = _T0(Cyc_Absynpp_aggrfield2doc,_T2,_T3);
  return _T4;
}
struct Cyc_PP_Doc * Cyc_Absynpp_datatypefield2doc(struct Cyc_Absyn_Datatypefield * f) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_Absyn_Datatypefield * _T1;
  enum Cyc_Absyn_Scope _T2;
  struct Cyc_Absyn_Datatypefield * _T3;
  struct _tuple1 * _T4;
  struct Cyc_Absyn_Datatypefield * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_Absyn_Datatypefield * _T7;
  struct Cyc_List_List * _T8;
  struct _fat_ptr _T9;
  { struct Cyc_PP_Doc * _TA[3];
    _T1 = f;
    _T2 = _T1->sc;
    _TA[0] = Cyc_Absynpp_scope2doc(_T2);
    _T3 = f;
    _T4 = _T3->name;
    _TA[1] = Cyc_Absynpp_typedef_name2doc(_T4);
    _T5 = f;
    _T6 = _T5->typs;
    if (_T6 != 0) { goto _TL2FC;
    }
    _TA[2] = Cyc_PP_nil_doc();
    goto _TL2FD;
    _TL2FC: _T7 = f;
    _T8 = _T7->typs;
    _TA[2] = Cyc_Absynpp_args2doc(_T8);
    _TL2FD: _T9 = _tag_fat(_TA,sizeof(struct Cyc_PP_Doc *),3);
    _T0 = Cyc_PP_cat(_T9);
  }return _T0;
}
struct Cyc_PP_Doc * Cyc_Absynpp_datatypefields2doc(struct Cyc_List_List * fields) {
  struct Cyc_PP_Doc * (* _T0)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Datatypefield *),
			      struct _fat_ptr,struct Cyc_List_List *);
  struct Cyc_PP_Doc * (* _T1)(struct Cyc_PP_Doc * (*)(void *),struct _fat_ptr,
			      struct Cyc_List_List *);
  struct _fat_ptr _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_PP_Doc * _T4;
  _T1 = Cyc_PP_ppseql;
  { struct Cyc_PP_Doc * (* _T5)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Datatypefield *),
				struct _fat_ptr,struct Cyc_List_List *) = (struct Cyc_PP_Doc * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Datatypefield *),
												   struct _fat_ptr,
												   struct Cyc_List_List *))_T1;
    _T0 = _T5;
  }_T2 = _tag_fat(",",sizeof(char),2U);
  _T3 = fields;
  _T4 = _T0(Cyc_Absynpp_datatypefield2doc,_T2,_T3);
  return _T4;
}
void Cyc_Absynpp_decllist2file(struct Cyc_List_List * tdl,struct Cyc___cycFILE * f) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Decl * _T2;
  struct Cyc_PP_Doc * _T3;
  struct Cyc___cycFILE * _T4;
  struct Cyc___cycFILE * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct Cyc_List_List * _T8;
  _TL301: if (tdl != 0) { goto _TL2FF;
  }else { goto _TL300;
  }
  _TL2FF: _T0 = tdl;
  _T1 = _T0->hd;
  _T2 = (struct Cyc_Absyn_Decl *)_T1;
  _T3 = Cyc_Absynpp_decl2doc(_T2);
  _T4 = f;
  Cyc_PP_file_of_doc(_T3,72,_T4);
  _T5 = f;
  _T6 = _tag_fat("\n",sizeof(char),2U);
  _T7 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T5,_T6,_T7);
  _T8 = tdl;
  tdl = _T8->tl;
  goto _TL301;
  _TL300: ;
}
struct _fat_ptr Cyc_Absynpp_decllist2string(struct Cyc_List_List * tdl) {
  struct _fat_ptr _T0;
  struct Cyc_List_List * (* _T1)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T2)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_PP_Doc * _T5;
  struct _fat_ptr _T6;
  _T0 = _tag_fat("",sizeof(char),1U);
  _T2 = Cyc_List_map;
  { struct Cyc_List_List * (* _T7)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
				   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_PP_Doc * (*)(struct Cyc_Absyn_Decl *),
											 struct Cyc_List_List *))_T2;
    _T1 = _T7;
  }_T3 = tdl;
  _T4 = _T1(Cyc_Absynpp_decl2doc,_T3);
  _T5 = Cyc_PP_seql(_T0,_T4);
  _T6 = Cyc_PP_string_of_doc(_T5,72);
  return _T6;
}
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp * e) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_exp2doc(e);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_stmt2string(struct Cyc_Absyn_Stmt * s) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_stmt2doc(s,0,0,0);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_typ2string(void * t) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_typ2doc(t);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_tvar2string(struct Cyc_Absyn_Tvar * t) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_tvar2doc(t);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_prim2string(enum Cyc_Absyn_Primop p) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_prim2doc(p);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_pat2string(struct Cyc_Absyn_Pat * p) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_pat2doc(p);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_scope2string(enum Cyc_Absyn_Scope s) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_scope2doc(s);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_cnst2string(union Cyc_Absyn_Cnst c) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_cnst2doc(c);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_rgnpo2string(struct Cyc_List_List * po) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_rgnpo2doc(po);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_effconstr2string(struct Cyc_List_List * effc) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  _T0 = Cyc_Absynpp_effconstr2doc(effc);
  _T1 = Cyc_PP_string_of_doc(_T0,72);
  return _T1;
}
struct _fat_ptr Cyc_Absynpp_typ2cstring(void * t) {
  struct _fat_ptr _T0;
  long old_qvar_to_Cids = Cyc_Absynpp_qvar_to_Cids;
  long old_add_cyc_prefix = Cyc_Absynpp_add_cyc_prefix;
  Cyc_Absynpp_qvar_to_Cids = 1;
  Cyc_Absynpp_add_cyc_prefix = 0;
  { struct _fat_ptr s = Cyc_Absynpp_typ2string(t);
    Cyc_Absynpp_qvar_to_Cids = old_qvar_to_Cids;
    Cyc_Absynpp_add_cyc_prefix = old_add_cyc_prefix;
    _T0 = s;
    return _T0;
  }
}
