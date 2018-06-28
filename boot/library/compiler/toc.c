#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
extern char Cyc_Core_Not_found[10U];
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
extern unsigned int Cyc_Core_unique_qual;
void Cyc_Core_ufree(void *);
struct _fat_ptr Cyc_Core_alias_refptr(struct _fat_ptr);
struct Cyc_Core_DynamicRegion;
 struct Cyc_Core_NewDynamicRegion {
  struct Cyc_Core_DynamicRegion * key;
};
struct Cyc_Core_NewDynamicRegion Cyc_Core__new_rckey(unsigned int,const char *,
						     const char *,int);
void Cyc_Core_free_rckey(struct Cyc_Core_DynamicRegion *);
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
extern struct Cyc_List_List * Cyc_List_rlist(struct _RegionHandle *,struct _fat_ptr);
extern int Cyc_List_length(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map(void * (*)(void *),struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map_c(void * (*)(void *,void *),void *,
					     struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rmap_c(struct _RegionHandle *,void * (*)(void *,
										void *),
					      void *,struct Cyc_List_List *);
extern void Cyc_List_iter_c(void (*)(void *,void *),void *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_append(struct Cyc_List_List *,
						  struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_zip(struct Cyc_List_List *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rzip(struct _RegionHandle *,struct _RegionHandle *,
					    struct Cyc_List_List *,struct Cyc_List_List *);
 struct _tuple0 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
};
extern struct _tuple0 Cyc_List_split(struct Cyc_List_List *);
extern void * Cyc_List_assoc(struct Cyc_List_List *,void *);
extern struct Cyc_List_List * Cyc_List_from_array(struct _fat_ptr);
extern int Cyc_List_list_cmp(int (*)(void *,void *),struct Cyc_List_List *,
			     struct Cyc_List_List *);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
extern struct _fat_ptr Cyc_rstr_sepstr(struct _RegionHandle *,struct Cyc_List_List *,
				       struct _fat_ptr);
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
union Cyc_Absyn_AggrInfo Cyc_Absyn_UnknownAggr(enum Cyc_Absyn_AggrKind,struct _tuple1 *,
					       struct Cyc_Core_Opt *);
union Cyc_Absyn_AggrInfo Cyc_Absyn_KnownAggr(struct Cyc_Absyn_Aggrdecl * *);
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
 struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct {
  int tag;
  struct _tuple1 * f1;
  struct Cyc_Absyn_Enumdecl * f2;
};
 struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct {
  int tag;
  struct Cyc_List_List * f1;
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
 struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
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
 struct Cyc_Absyn_Exp {
  void * topt;
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct {
  int tag;
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
 struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct {
  int tag;
  struct _tuple1 * f1;
};
 struct Cyc_Absyn_Global_b_Absyn_Binding_struct {
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
extern char Cyc_Absyn_EmptyAnnot[11U];
 struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct Cyc_Absyn_EmptyAnnot_val;
int Cyc_Absyn_qvar_cmp(struct _tuple1 *,struct _tuple1 *);
union Cyc_Absyn_Nmspace Cyc_Absyn_Loc_n();
union Cyc_Absyn_Nmspace Cyc_Absyn_Rel_n(struct Cyc_List_List *);
union Cyc_Absyn_Nmspace Cyc_Absyn_Abs_n(struct Cyc_List_List *,long);
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned int);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned int);
long Cyc_Absyn_equal_tqual(struct Cyc_Absyn_Tqual,struct Cyc_Absyn_Tqual);
void * Cyc_Absyn_compress(void *);
extern void * Cyc_Absyn_char_type;
extern void * Cyc_Absyn_uchar_type;
extern void * Cyc_Absyn_uint_type;
extern void * Cyc_Absyn_sint_type;
void * Cyc_Absyn_gen_float_type(unsigned int);
extern void * Cyc_Absyn_heap_rgn_type;
extern void * Cyc_Absyn_al_qual_type;
extern void * Cyc_Absyn_true_type;
extern void * Cyc_Absyn_false_type;
extern void * Cyc_Absyn_void_type;
extern void * Cyc_Absyn_enum_type(struct _tuple1 *,struct Cyc_Absyn_Enumdecl *);
void * Cyc_Absyn_exn_type();
void * Cyc_Absyn_bounds_one();
void * Cyc_Absyn_star_type(void *,void *,void *,struct Cyc_Absyn_Tqual,void *,
			   void *);
void * Cyc_Absyn_cstar_type(void *,struct Cyc_Absyn_Tqual);
void * Cyc_Absyn_fatptr_type(void *,void *,void *,struct Cyc_Absyn_Tqual,
			     void *,void *);
void * Cyc_Absyn_strct(struct _fat_ptr *);
void * Cyc_Absyn_strctq(struct _tuple1 *);
void * Cyc_Absyn_unionq_type(struct _tuple1 *);
void * Cyc_Absyn_array_type(void *,struct Cyc_Absyn_Tqual,struct Cyc_Absyn_Exp *,
			    void *,unsigned int);
void * Cyc_Absyn_aggr_type(union Cyc_Absyn_AggrInfo,struct Cyc_List_List *);
struct Cyc_Absyn_Exp * Cyc_Absyn_new_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_int_exp(enum Cyc_Absyn_Sign,int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_signed_int_exp(int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_uint_exp(unsigned int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_float_exp(struct _fat_ptr,int,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_string_exp(struct _fat_ptr,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_var_exp(struct _tuple1 *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_varb_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_prim1_exp(enum Cyc_Absyn_Primop,struct Cyc_Absyn_Exp *,
					   unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_prim2_exp(enum Cyc_Absyn_Primop,struct Cyc_Absyn_Exp *,
					   struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_add_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					 unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_times_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					   unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_divide_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					    unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_eq_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_neq_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					 unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_assignop_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_PrimopOpt *,
					      struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_assign_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					    unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_increment_exp(struct Cyc_Absyn_Exp *,enum Cyc_Absyn_Incrementor,
					       unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_conditional_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
						 struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_and_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					 unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_fncall_exp(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,
					    unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_cast_exp(void *,struct Cyc_Absyn_Exp *,long,
					  enum Cyc_Absyn_Coercion,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_address_exp(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_sizeoftype_exp(void *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_deref_exp(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_aggrmember_exp(struct Cyc_Absyn_Exp *,struct _fat_ptr *,
						unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_aggrarrow_exp(struct Cyc_Absyn_Exp *,struct _fat_ptr *,
					       unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_subscript_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					       unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_stmt_exp(struct Cyc_Absyn_Stmt *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_array_exp(struct Cyc_List_List *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_unresolvedmem_exp(struct Cyc_Core_Opt *,
						   struct Cyc_List_List *,
						   unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_set_type(struct Cyc_Absyn_Exp *,void *);
struct Cyc_Absyn_Stmt * Cyc_Absyn_new_stmt(void *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_skip_stmt(unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_seq_stmt(struct Cyc_Absyn_Stmt *,struct Cyc_Absyn_Stmt *,
					   unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_return_stmt(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_ifthenelse_stmt(struct Cyc_Absyn_Exp *,
						  struct Cyc_Absyn_Stmt *,
						  struct Cyc_Absyn_Stmt *,
						  unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl *,struct Cyc_Absyn_Stmt *,
					    unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_declare_stmt(struct _tuple1 *,void *,struct Cyc_Absyn_Exp *,
					       struct Cyc_Absyn_Stmt *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_label_stmt(struct _fat_ptr *,struct Cyc_Absyn_Stmt *,
					     unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_goto_stmt(struct _fat_ptr *,unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_assign_stmt(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
					      unsigned int);
struct Cyc_Absyn_Pat * Cyc_Absyn_new_pat(void *,unsigned int);
struct Cyc_Absyn_Decl * Cyc_Absyn_new_decl(void *,unsigned int);
struct Cyc_Absyn_Vardecl * Cyc_Absyn_new_vardecl(unsigned int,struct _tuple1 *,
						 void *,struct Cyc_Absyn_Exp *,
						 struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Vardecl * Cyc_Absyn_static_vardecl(struct _tuple1 *,void *,
						    struct Cyc_Absyn_Exp *);
void * Cyc_Absyn_function_type(struct Cyc_List_List *,
			       void *,
			       struct Cyc_Absyn_Tqual,
			       void *,
			       struct Cyc_List_List *,
			       long,
			       struct Cyc_Absyn_VarargInfo *,
			       struct Cyc_List_List *,
			       struct Cyc_List_List *,
			       struct Cyc_List_List *,
			       struct Cyc_Absyn_Exp *,
			       struct Cyc_Absyn_Exp *,
			       struct Cyc_Absyn_Exp *,
			       struct Cyc_Absyn_Exp *);
long Cyc_Absyn_is_lvalue(struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Aggrfield * Cyc_Absyn_lookup_field(struct Cyc_List_List *,
						    struct _fat_ptr *);
struct _fat_ptr * Cyc_Absyn_fieldname(int);
 struct _tuple12 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple1 * f1;
};
struct _tuple12 Cyc_Absyn_aggr_kinded_name(union Cyc_Absyn_AggrInfo);
struct Cyc_Absyn_Aggrdecl * Cyc_Absyn_get_known_aggrdecl(union Cyc_Absyn_AggrInfo);
struct _fat_ptr * Cyc_Absyn_designatorlist_to_fieldname(struct Cyc_List_List *);
void Cyc_Absyn_visit_stmt(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									   struct Cyc_Absyn_Stmt *),
			  void *,struct Cyc_Absyn_Stmt *);
void Cyc_Absyn_visit_exp(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									  struct Cyc_Absyn_Stmt *),
			 void *,struct Cyc_Absyn_Exp *);
long Cyc_Absyn_var_may_appear_exp(struct _tuple1 *,struct Cyc_Absyn_Exp *);
struct Cyc_List_List * Cyc_Atts_atts2c(struct Cyc_List_List *);
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
extern struct Cyc_Dict_Dict Cyc_Dict_rempty(struct _RegionHandle *,int (*)(void *,
									   void *));
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void *,void *);
extern void * Cyc_Dict_lookup_other(struct Cyc_Dict_Dict,int (*)(void *,void *),
				    void *);
extern void * * Cyc_Dict_lookup_opt(struct Cyc_Dict_Dict,void *);
struct Cyc_Set_Set;
extern struct Cyc_Set_Set * Cyc_Set_rempty(struct _RegionHandle *,int (*)(void *,
									  void *));
extern struct Cyc_Set_Set * Cyc_Set_rinsert(struct _RegionHandle *,struct Cyc_Set_Set *,
					    void *);
extern long Cyc_Set_member(struct Cyc_Set_Set *,void *);
 struct Cyc_Xarray_Xarray {
  struct _fat_ptr elmts;
  int num_elmts;
};
extern int Cyc_Xarray_length(struct Cyc_Xarray_Xarray *);
extern void * Cyc_Xarray_get(struct Cyc_Xarray_Xarray *,int);
extern struct Cyc_Xarray_Xarray * Cyc_Xarray_rcreate_empty(struct _RegionHandle *);
extern int Cyc_Xarray_add_ind(struct Cyc_Xarray_Xarray *,void *);
extern void Cyc_Xarray_reuse(struct Cyc_Xarray_Xarray *);
 struct _tuple13 {
  unsigned int f0;
  long f1;
};
extern struct _tuple13 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp *);
extern long Cyc_Evexp_c_can_eval(struct Cyc_Absyn_Exp *);
extern long Cyc_Flags_no_regions;
extern long Cyc_Flags_no_reaps;
extern long Cyc_Flags_noexpand_r;
struct Cyc_Hashtable_Table;
extern void * Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table *,void *);
extern char Cyc_InsertChecks_FatBound[9U];
 struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_InsertChecks_NoCheck[8U];
 struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_InsertChecks_NullAndFatBound[16U];
 struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_InsertChecks_NullAndThinBound[17U];
 struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct {
  char * tag;
  struct Cyc_Absyn_Exp * f1;
};
extern char Cyc_InsertChecks_NullOnly[9U];
 struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_InsertChecks_ThinBound[10U];
 struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct {
  char * tag;
  struct Cyc_Absyn_Exp * f1;
};
extern struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NoCheck_val;
extern struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullAndFatBound_val;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ak;
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
struct Cyc_Absyn_Kind * Cyc_Kinds_tvar_kind(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Kind *);
long Cyc_Kinds_kind_leq(struct Cyc_Absyn_Kind *,struct Cyc_Absyn_Kind *);
 struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct {
  int tag;
  struct _fat_ptr f1;
  int f2;
};
 struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct {
  int tag;
  unsigned int f1;
};
 struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct {
  int tag;
  int f1;
  struct Cyc_Absyn_Datatypedecl * f2;
  struct Cyc_Absyn_Datatypefield * f3;
};
 struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct {
  int tag;
  void * f1;
  struct _fat_ptr * f2;
  int f3;
};
 struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
  struct Cyc_Absyn_Datatypefield * f2;
};
 struct Cyc_Tcpat_Deref_Tcpat_Access_struct {
  int tag;
  void * f1;
};
 struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
  struct Cyc_Absyn_Datatypefield * f2;
  unsigned int f3;
  void * f4;
};
 struct Cyc_Tcpat_AggrField_Tcpat_Access_struct {
  int tag;
  void * f1;
  long f2;
  struct _fat_ptr * f3;
  void * f4;
};
 struct _union_PatOrWhere_pattern {
  int tag;
  struct Cyc_Absyn_Pat * val;
};
 struct _union_PatOrWhere_where_clause {
  int tag;
  struct Cyc_Absyn_Exp * val;
};
 union Cyc_Tcpat_PatOrWhere {
  struct _union_PatOrWhere_pattern pattern;
  struct _union_PatOrWhere_where_clause where_clause;
};
 struct Cyc_Tcpat_PathNode {
  union Cyc_Tcpat_PatOrWhere orig_pat;
  void * access;
};
 struct Cyc_Tcpat_Rhs {
  long used;
  unsigned int pat_loc;
  struct Cyc_Absyn_Stmt * rhs;
};
 struct Cyc_Tcpat_Success_Tcpat_Decision_struct {
  int tag;
  struct Cyc_Tcpat_Rhs * f1;
};
 struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct {
  int tag;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
  void * f3;
};
long Cyc_Tcutil_is_void_type(void *);
long Cyc_Tcutil_is_char_type(void *);
long Cyc_Tcutil_is_arithmetic_type(void *);
long Cyc_Tcutil_is_pointer_type(void *);
long Cyc_Tcutil_is_array_type(void *);
long Cyc_Tcutil_is_boxed(void *);
long Cyc_Tcutil_is_fat_ptr(void *);
long Cyc_Tcutil_is_zeroterm_pointer_type(void *);
long Cyc_Tcutil_is_fat_pointer_type(void *);
void * Cyc_Tcutil_pointer_elt_type(void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_get_bounds_exp_constrain(void *,void *,
							   long);
long Cyc_Tcutil_is_fat_pointer_type_elt(void *,void * *);
long Cyc_Tcutil_is_zero_pointer_type_elt(void *,void * *);
long Cyc_Tcutil_is_zero(struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_deep_copy_exp(long,struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Kind * Cyc_Tcutil_type_kind(void *);
int Cyc_Tcutil_typecmp(void *,void *);
int Cyc_Tcutil_aggrfield_cmp(struct Cyc_Absyn_Aggrfield *,struct Cyc_Absyn_Aggrfield *);
void * Cyc_Tcutil_substitute(struct Cyc_List_List *,void *);
void * Cyc_Tcutil_rsubstitute(struct _RegionHandle *,struct Cyc_List_List *,
			      void *);
struct Cyc_List_List * Cyc_Tcutil_resolve_aggregate_designators(struct _RegionHandle *,
								unsigned int,
								struct Cyc_List_List *,
								enum Cyc_Absyn_AggrKind,
								struct Cyc_List_List *);
long Cyc_Tcutil_is_zero_ptr_deref(struct Cyc_Absyn_Exp *,void * *,long *,
				  void * *);
long Cyc_Tcutil_is_noalias_qual(void *,long);
struct Cyc_List_List * Cyc_Tcutil_filter_nulls(struct Cyc_List_List *);
long Cyc_Tcutil_force_type2bool(long,void *);
void * Cyc_Tcutil_get_pointer_bounds(void *);
void * Cyc_Toc_typ_to_c(void *);
extern struct _fat_ptr Cyc_Toc_globals;
extern char Cyc_Toc_NewInfo[8U];
 struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct {
  char * tag;
  struct Cyc_Absyn_Exp * f1;
  void * f2;
};
long Cyc_Unify_unify(void *,void *);
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Typ_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_Exp_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Warn_Stmt_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Warn_Aggrdecl_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Aggrdecl * f1;
};
void Cyc_Warn_err2(unsigned int,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned int,struct _fat_ptr);
void * Cyc_Warn_vimpos2(struct _fat_ptr);
void * Cyc_Warn_impos2(struct _fat_ptr);
void * Cyc_Warn_impos_loc2(unsigned int,struct _fat_ptr);
char Cyc_Toc_NewInfo[8U] = "NewInfo";
static void * Cyc_Toc_unimp(struct _fat_ptr str) {
  struct Cyc_Warn_String_Warn_Warg_struct _T0;
  struct _fat_ptr _T1;
  { struct Cyc_Warn_String_Warn_Warg_struct _T2;
    _T2.tag = 0;
    _T2.f1 = str;
    _T0 = _T2;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T2 = _T0;
    void * _T3[1];
    _T3[0] = &_T2;
    _T1 = _tag_fat(_T3,sizeof(void *),1);
    Cyc_Warn_impos2(_T1);
  }
}
static void * Cyc_Toc_toc_impos(struct _fat_ptr ap) {
  struct Cyc_Warn_String_Warn_Warg_struct * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  void * * _T4;
  unsigned int _T5;
  unsigned int _T6;
  unsigned int _T7;
  struct _fat_ptr _T8;
  unsigned char * _T9;
  void * * _TA;
  void * * _TB;
  unsigned int _TC;
  int _TD;
  { struct Cyc_Warn_String_Warn_Warg_struct * _TE = _cycalloc(sizeof(struct Cyc_Warn_String_Warn_Warg_struct));
    _TE->tag = 0;
    _TE->f1 = _tag_fat("Toc: ",sizeof(char),6U);
    _T0 = (struct Cyc_Warn_String_Warn_Warg_struct *)_TE;
  }{ void * toc = (void *)_T0;
    _T2 = ap;
    _T3 = _get_fat_size(_T2,sizeof(void *));
    { unsigned int _TE = _T3 + 1U;
      _T5 = _check_times(_TE,sizeof(void *));
      { void * * _TF = _cycalloc(_T5);
	{ unsigned int _T10 = _TE;
	  unsigned int i;
	  i = 0;
	  _TL3: if (i < _T10) { goto _TL1;
	  }else { goto _TL2;
	  }
	  _TL1: if (i != 0U) { goto _TL4;
	  }
	  _T6 = i;
	  _TF[_T6] = toc;
	  goto _TL5;
	  _TL4: _T7 = i;
	  _T8 = ap;
	  _T9 = _T8.curr;
	  _TA = (void * *)_T9;
	  _TB = _check_null(_TA);
	  _TC = i - 1U;
	  _TD = (int)_TC;
	  _TF[_T7] = _TB[_TD];
	  _TL5: i = i + 1;
	  goto _TL3;
	  _TL2: ;
	}_T4 = (void * *)_TF;
      }_T1 = _tag_fat(_T4,sizeof(void *),_TE);
    }{ struct _fat_ptr args = _T1;
      Cyc_Warn_vimpos2(args);
    }
  }
}
struct _fat_ptr Cyc_Toc_globals = {(void *)0,(void *)0,(void *)(0 + 0)};
static struct Cyc_Hashtable_Table * * Cyc_Toc_gpop_tables = 0;
static struct Cyc_Hashtable_Table * * Cyc_Toc_fn_pop_table = 0;
static int Cyc_Toc_tuple_type_counter = 0;
static int Cyc_Toc_temp_var_counter = 0;
static int Cyc_Toc_fresh_label_counter = 0;
static struct Cyc_List_List * Cyc_Toc_result_decls = 0;
static int Cyc_Toc_get_npop(struct Cyc_Absyn_Stmt * s) {
  int (* _T0)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *);
  void * (* _T1)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Hashtable_Table * * _T2;
  struct Cyc_Hashtable_Table * _T3;
  struct Cyc_Absyn_Stmt * _T4;
  int _T5;
  _T1 = Cyc_Hashtable_lookup;
  { int (* _T6)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *) = (int (*)(struct Cyc_Hashtable_Table *,
										 struct Cyc_Absyn_Stmt *))_T1;
    _T0 = _T6;
  }_T2 = _check_null(Cyc_Toc_fn_pop_table);
  _T3 = *_T2;
  _T4 = s;
  _T5 = _T0(_T3,_T4);
  return _T5;
}
 struct Cyc_Toc_TocState {
  struct Cyc_List_List * * tuple_types;
  struct Cyc_List_List * * anon_aggr_types;
  struct Cyc_Dict_Dict * aggrs_so_far;
  struct Cyc_List_List * * abs_struct_types;
  struct Cyc_Set_Set * * datatypes_so_far;
  struct Cyc_Dict_Dict * xdatatypes_so_far;
  struct Cyc_Dict_Dict * qvar_tags;
  struct Cyc_Xarray_Xarray * temp_labels;
};
 struct _tuple16 {
  struct _tuple1 * f0;
  struct _tuple1 * f1;
};
static int Cyc_Toc_qvar_tag_cmp(struct _tuple16 * x,struct _tuple16 * y) {
  struct _tuple16 * _T0;
  struct _tuple16 _T1;
  struct _tuple1 * _T2;
  struct _tuple16 * _T3;
  struct _tuple16 _T4;
  struct _tuple1 * _T5;
  int _T6;
  struct _tuple16 * _T7;
  struct _tuple16 _T8;
  struct _tuple1 * _T9;
  struct _tuple16 * _TA;
  struct _tuple16 _TB;
  struct _tuple1 * _TC;
  int _TD;
  _T0 = x;
  _T1 = *_T0;
  _T2 = _T1.f0;
  _T3 = y;
  _T4 = *_T3;
  _T5 = _T4.f0;
  { int i = Cyc_Absyn_qvar_cmp(_T2,_T5);
    if (i == 0) { goto _TL6;
    }
    _T6 = i;
    return _T6;
    _TL6: _T7 = x;
    _T8 = *_T7;
    _T9 = _T8.f1;
    _TA = y;
    _TB = *_TA;
    _TC = _TB.f1;
    _TD = Cyc_Absyn_qvar_cmp(_T9,_TC);
    return _TD;
  }
}
static struct Cyc_Toc_TocState * Cyc_Toc_empty_toc_state(struct _RegionHandle * d) {
  struct Cyc_Toc_TocState * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_List_List * * _T2;
  struct _RegionHandle * _T3;
  struct Cyc_List_List * * _T4;
  struct _RegionHandle * _T5;
  struct Cyc_Dict_Dict * _T6;
  struct _RegionHandle * _T7;
  struct Cyc_Dict_Dict (* _T8)(struct _RegionHandle *,int (*)(struct _tuple1 *,
							      struct _tuple1 *));
  struct Cyc_Dict_Dict (* _T9)(struct _RegionHandle *,int (*)(void *,void *));
  struct _RegionHandle * _TA;
  int (* _TB)(struct _tuple1 *,struct _tuple1 *);
  struct Cyc_List_List * * _TC;
  struct _RegionHandle * _TD;
  struct Cyc_Set_Set * * _TE;
  struct _RegionHandle * _TF;
  struct Cyc_Set_Set * (* _T10)(struct _RegionHandle *,int (*)(struct _tuple1 *,
							       struct _tuple1 *));
  struct Cyc_Set_Set * (* _T11)(struct _RegionHandle *,int (*)(void *,void *));
  struct _RegionHandle * _T12;
  int (* _T13)(struct _tuple1 *,struct _tuple1 *);
  struct Cyc_Dict_Dict * _T14;
  struct _RegionHandle * _T15;
  struct Cyc_Dict_Dict (* _T16)(struct _RegionHandle *,int (*)(struct _tuple1 *,
							       struct _tuple1 *));
  struct Cyc_Dict_Dict (* _T17)(struct _RegionHandle *,int (*)(void *,void *));
  struct _RegionHandle * _T18;
  int (* _T19)(struct _tuple1 *,struct _tuple1 *);
  struct Cyc_Dict_Dict * _T1A;
  struct _RegionHandle * _T1B;
  struct Cyc_Dict_Dict (* _T1C)(struct _RegionHandle *,int (*)(struct _tuple16 *,
							       struct _tuple16 *));
  struct Cyc_Dict_Dict (* _T1D)(struct _RegionHandle *,int (*)(void *,void *));
  struct _RegionHandle * _T1E;
  _T1 = d;
  { struct Cyc_Toc_TocState * _T1F = _region_malloc(_T1,0U,sizeof(struct Cyc_Toc_TocState));
    _T3 = d;
    { struct Cyc_List_List * * _T20 = _region_malloc(_T3,0U,sizeof(struct Cyc_List_List *));
      *_T20 = 0;
      _T2 = (struct Cyc_List_List * *)_T20;
    }_T1F->tuple_types = _T2;
    _T5 = d;
    { struct Cyc_List_List * * _T20 = _region_malloc(_T5,0U,sizeof(struct Cyc_List_List *));
      *_T20 = 0;
      _T4 = (struct Cyc_List_List * *)_T20;
    }_T1F->anon_aggr_types = _T4;
    _T7 = d;
    { struct Cyc_Dict_Dict * _T20 = _region_malloc(_T7,0U,sizeof(struct Cyc_Dict_Dict));
      _T9 = Cyc_Dict_rempty;
      { struct Cyc_Dict_Dict (* _T21)(struct _RegionHandle *,int (*)(struct _tuple1 *,
								     struct _tuple1 *)) = (struct Cyc_Dict_Dict (*)(struct _RegionHandle *,
														    int (*)(struct _tuple1 *,
															    struct _tuple1 *)))_T9;
	_T8 = _T21;
      }_TA = d;
      _TB = Cyc_Absyn_qvar_cmp;
      *_T20 = _T8(_TA,_TB);
      _T6 = (struct Cyc_Dict_Dict *)_T20;
    }_T1F->aggrs_so_far = _T6;
    _TD = d;
    { struct Cyc_List_List * * _T20 = _region_malloc(_TD,0U,sizeof(struct Cyc_List_List *));
      *_T20 = 0;
      _TC = (struct Cyc_List_List * *)_T20;
    }_T1F->abs_struct_types = _TC;
    _TF = d;
    { struct Cyc_Set_Set * * _T20 = _region_malloc(_TF,0U,sizeof(struct Cyc_Set_Set *));
      _T11 = Cyc_Set_rempty;
      { struct Cyc_Set_Set * (* _T21)(struct _RegionHandle *,int (*)(struct _tuple1 *,
								     struct _tuple1 *)) = (struct Cyc_Set_Set * (*)(struct _RegionHandle *,
														    int (*)(struct _tuple1 *,
															    struct _tuple1 *)))_T11;
	_T10 = _T21;
      }_T12 = d;
      _T13 = Cyc_Absyn_qvar_cmp;
      *_T20 = _T10(_T12,_T13);
      _TE = (struct Cyc_Set_Set * *)_T20;
    }_T1F->datatypes_so_far = _TE;
    _T15 = d;
    { struct Cyc_Dict_Dict * _T20 = _region_malloc(_T15,0U,sizeof(struct Cyc_Dict_Dict));
      _T17 = Cyc_Dict_rempty;
      { struct Cyc_Dict_Dict (* _T21)(struct _RegionHandle *,int (*)(struct _tuple1 *,
								     struct _tuple1 *)) = (struct Cyc_Dict_Dict (*)(struct _RegionHandle *,
														    int (*)(struct _tuple1 *,
															    struct _tuple1 *)))_T17;
	_T16 = _T21;
      }_T18 = d;
      _T19 = Cyc_Absyn_qvar_cmp;
      *_T20 = _T16(_T18,_T19);
      _T14 = (struct Cyc_Dict_Dict *)_T20;
    }_T1F->xdatatypes_so_far = _T14;
    _T1B = d;
    { struct Cyc_Dict_Dict * _T20 = _region_malloc(_T1B,0U,sizeof(struct Cyc_Dict_Dict));
      _T1D = Cyc_Dict_rempty;
      { struct Cyc_Dict_Dict (* _T21)(struct _RegionHandle *,int (*)(struct _tuple16 *,
								     struct _tuple16 *)) = (struct Cyc_Dict_Dict (*)(struct _RegionHandle *,
														     int (*)(struct _tuple16 *,
															     struct _tuple16 *)))_T1D;
	_T1C = _T21;
      }_T1E = d;
      *_T20 = _T1C(_T1E,Cyc_Toc_qvar_tag_cmp);
      _T1A = (struct Cyc_Dict_Dict *)_T20;
    }_T1F->qvar_tags = _T1A;
    _T1F->temp_labels = Cyc_Xarray_rcreate_empty(d);
    _T0 = (struct Cyc_Toc_TocState *)_T1F;
  }return _T0;
}
 struct Cyc_Toc_TocStateWrap {
  struct Cyc_Core_DynamicRegion * dyn;
  struct Cyc_Toc_TocState * state;
};
static struct Cyc_Toc_TocStateWrap * Cyc_Toc_toc_state = 0;
 struct _tuple17 {
  struct Cyc_Toc_TocState * f0;
  void * f1;
};
static void * Cyc_Toc_use_toc_state(void * arg,void * (* f)(struct _RegionHandle *,
							    struct _tuple17 *)) {
  struct Cyc_Toc_TocStateWrap * _T0;
  struct Cyc_Core_DynamicRegion * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Toc_TocStateWrap * _T3;
  struct Cyc_Toc_TocStateWrap _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  unsigned char * _T7;
  struct Cyc_Core_DynamicRegion * _T8;
  struct _tuple17 _T9;
  struct _RegionHandle * _TA;
  struct _tuple17 * _TB;
  struct _fat_ptr _TC;
  unsigned char * _TD;
  struct Cyc_Core_DynamicRegion * _TE;
  void * _TF;
  struct Cyc_Toc_TocStateWrap * ts = 0;
  { struct Cyc_Toc_TocStateWrap * _T10 = ts;
    struct Cyc_Toc_TocStateWrap * _T11 = Cyc_Toc_toc_state;
    ts = _T11;
    Cyc_Toc_toc_state = _T10;
  }_T0 = _check_null(ts);
  { struct Cyc_Toc_TocStateWrap _T10 = *_T0;
    struct Cyc_Toc_TocState * _T11;
    struct Cyc_Core_DynamicRegion * _T12;
    _T12 = _T10.dyn;
    _T11 = _T10.state;
    { struct Cyc_Core_DynamicRegion * dyn = _T12;
      struct Cyc_Toc_TocState * s = _T11;
      _T1 = dyn;
      _T2 = _tag_fat(_T1,sizeof(struct Cyc_Core_DynamicRegion),1U);
      { struct _fat_ptr dyn2 = Cyc_Core_alias_refptr(_T2);
	_T3 = ts;
	{ struct Cyc_Toc_TocStateWrap _T13;
	  _T13.dyn = dyn;
	  _T13.state = s;
	  _T4 = _T13;
	}*_T3 = _T4;
	{ struct Cyc_Toc_TocStateWrap * _T13 = ts;
	  struct Cyc_Toc_TocStateWrap * _T14 = Cyc_Toc_toc_state;
	  ts = _T14;
	  Cyc_Toc_toc_state = _T13;
	}{ void * res;
	  _T5 = _check_fat_at_base(dyn2);
	  _T6 = _untag_fat_ptr_check_bound(_T5,sizeof(struct Cyc_Core_DynamicRegion),
					   1U);
	  _T7 = _check_null(_T6);
	  _T8 = (struct Cyc_Core_DynamicRegion *)_T7;
	  { struct _RegionHandle * h = &_T8->h;
	    { struct _tuple17 _T13;
	      _T13.f0 = s;
	      _T13.f1 = arg;
	      _T9 = _T13;
	    }{ struct _tuple17 env = _T9;
	      _TA = h;
	      _TB = &env;
	      res = f(_TA,_TB);
	    }
	  }_TC = _check_fat_at_base(dyn2);
	  _TD = _untag_fat_ptr(_TC,sizeof(struct Cyc_Core_DynamicRegion),
			       1U);
	  _TE = (struct Cyc_Core_DynamicRegion *)_TD;
	  Cyc_Core_free_rckey(_TE);
	  _TF = res;
	  return _TF;
	}
      }
    }
  }
}
 struct _tuple18 {
  struct _tuple1 * f0;
  void * (* f1)(struct _tuple1 *);
};
 struct _tuple19 {
  struct Cyc_Toc_TocState * f0;
  struct _tuple18 * f1;
};
 struct _tuple20 {
  struct Cyc_Absyn_Aggrdecl * f0;
  void * f1;
};
static void * Cyc_Toc_aggrdecl_type_body(struct _RegionHandle * d,struct _tuple19 * env) {
  struct _tuple19 * _T0;
  struct _tuple18 * _T1;
  struct _tuple20 * * (* _T2)(struct Cyc_Dict_Dict,struct _tuple1 *);
  void * * (* _T3)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Toc_TocState * _T4;
  struct Cyc_Dict_Dict * _T5;
  struct Cyc_Dict_Dict _T6;
  struct _tuple1 * _T7;
  void * _T8;
  struct _tuple20 * * _T9;
  struct _tuple20 * _TA;
  struct _tuple20 _TB;
  _T0 = env;
  { struct _tuple19 _TC = *_T0;
    void * (* _TD)(struct _tuple1 *);
    struct _tuple1 * _TE;
    struct Cyc_Toc_TocState * _TF;
    _TF = _TC.f0;
    _T1 = _TC.f1;
    { struct _tuple18 _T10 = *_T1;
      _TE = _T10.f0;
      _TD = _T10.f1;
    }{ struct Cyc_Toc_TocState * s = _TF;
      struct _tuple1 * q = _TE;
      void * (* type_maker)(struct _tuple1 *) = _TD;
      _T3 = Cyc_Dict_lookup_opt;
      { struct _tuple20 * * (* _T10)(struct Cyc_Dict_Dict,struct _tuple1 *) = (struct _tuple20 * * (*)(struct Cyc_Dict_Dict,
												       struct _tuple1 *))_T3;
	_T2 = _T10;
      }_T4 = s;
      _T5 = _T4->aggrs_so_far;
      _T6 = *_T5;
      _T7 = q;
      { struct _tuple20 * * v = _T2(_T6,_T7);
	if (v != 0) { goto _TL8;
	}
	_T8 = type_maker(q);
	goto _TL9;
	_TL8: _T9 = v;
	_TA = *_T9;
	_TB = *_TA;
	_T8 = _TB.f1;
	_TL9: return _T8;
      }
    }
  }
}
static void * Cyc_Toc_aggrdecl_type(struct _tuple1 * q,void * (* type_maker)(struct _tuple1 *)) {
  struct _tuple18 _T0;
  void * (* _T1)(struct _tuple18 *,void * (*)(struct _RegionHandle *,struct _tuple19 *));
  struct _tuple18 * _T2;
  void * _T3;
  { struct _tuple18 _T4;
    _T4.f0 = q;
    _T4.f1 = type_maker;
    _T0 = _T4;
  }{ struct _tuple18 env = _T0;
    { void * (* _T4)(struct _tuple18 *,void * (*)(struct _RegionHandle *,
						  struct _tuple19 *)) = (void * (*)(struct _tuple18 *,
										    void * (*)(struct _RegionHandle *,
											       struct _tuple19 *)))Cyc_Toc_use_toc_state;
      _T1 = _T4;
    }_T2 = &env;
    _T3 = _T1(_T2,Cyc_Toc_aggrdecl_type_body);
    return _T3;
  }
}
 struct _tuple21 {
  struct _fat_ptr * f0;
  struct _fat_ptr * f1;
  void * f2;
};
static void * Cyc_Toc_tagged_union_field_struct(void * t,struct _fat_ptr * f) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2;
  void * _T3;
  int * _T4;
  int _T5;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6;
  void * _T7;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T8;
  union Cyc_Absyn_AggrInfo _T9;
  struct _union_AggrInfo_KnownAggr _TA;
  unsigned int _TB;
  void * _TC;
  union Cyc_Absyn_AggrInfo _TD;
  struct _union_AggrInfo_KnownAggr _TE;
  struct Cyc_Absyn_Aggrdecl * * _TF;
  struct Cyc_Absyn_Aggrdecl * _T10;
  void * _T11;
  union Cyc_Absyn_AggrInfo _T12;
  struct _union_AggrInfo_UnknownAggr _T13;
  struct _tuple3 _T14;
  struct _tuple1 * _T15;
  struct Cyc_List_List * _T16;
  void * _T17;
  int _T18;
  int _T19;
  void * _T1A;
  struct Cyc_List_List * _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_String_pa_PrintArg_struct _T1D;
  struct _fat_ptr * _T1E;
  struct Cyc_String_pa_PrintArg_struct _T1F;
  struct _fat_ptr * _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct _fat_ptr * _T23;
  struct Cyc_List_List * _T24;
  struct _tuple21 * _T25;
  void * _T26;
  struct Cyc_Warn_String_Warn_Warg_struct _T27;
  int (* _T28)(struct _fat_ptr ap);
  struct _fat_ptr _T29;
  static struct Cyc_List_List * cache = 0;
  void * _T2A = Cyc_Absyn_compress(t);
  struct _tuple1 * _T2B;
  struct Cyc_Absyn_Aggrdecl * _T2C;
  _T0 = (int *)_T2A;
  _T1 = *_T0;
  if (_T1 != 0) { goto _TLA;
  }
  _T2 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T2A;
  _T3 = _T2->f1;
  _T4 = (int *)_T3;
  _T5 = *_T4;
  if (_T5 != 24) { goto _TLC;
  }
  _T6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T2A;
  _T7 = _T6->f1;
  _T8 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T7;
  _T9 = _T8->f1;
  _TA = _T9.KnownAggr;
  _TB = _TA.tag;
  if (_TB != 2) { goto _TLE;
  }
  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T2A;
    _TC = _T2D->f1;
    { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T2E = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TC;
      _TD = _T2E->f1;
      _TE = _TD.KnownAggr;
      _TF = _TE.val;
      { struct Cyc_Absyn_Aggrdecl * _T2F = *_TF;
	_T2C = _T2F;
      }
    }
  }{ struct Cyc_Absyn_Aggrdecl * ad = _T2C;
    _T10 = ad;
    _T2B = _T10->name;
    goto _LL4;
  }_TLE: { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T2A;
    _T11 = _T2D->f1;
    { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T2E = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T11;
      _T12 = _T2E->f1;
      _T13 = _T12.UnknownAggr;
      _T14 = _T13.val;
      _T2B = _T14.f1;
    }
  }_LL4: { struct _tuple1 * name = _T2B;
    struct _fat_ptr * _T2D;
    _T15 = name;
    { struct _tuple1 _T2E = *_T15;
      _T2D = _T2E.f1;
    }{ struct _fat_ptr * n = _T2D;
      { struct Cyc_List_List * c = cache;
	_TL13: if (c != 0) { goto _TL11;
	}else { goto _TL12;
	}
	_TL11: _T16 = c;
	_T17 = _T16->hd;
	{ struct _tuple21 * _T2E = (struct _tuple21 *)_T17;
	  void * _T2F;
	  struct _fat_ptr * _T30;
	  struct _fat_ptr * _T31;
	  { struct _tuple21 _T32 = *_T2E;
	    _T31 = _T32.f0;
	    _T30 = _T32.f1;
	    _T2F = _T32.f2;
	  }{ struct _fat_ptr * n2 = _T31;
	    struct _fat_ptr * f2 = _T30;
	    void * t = _T2F;
	    _T18 = Cyc_strptrcmp(n2,n);
	    if (_T18 != 0) { goto _TL14;
	    }
	    _T19 = Cyc_strptrcmp(f,f2);
	    if (_T19 != 0) { goto _TL14;
	    }
	    _T1A = t;
	    return _T1A;
	    _TL14: ;
	  }
	}_T1B = c;
	c = _T1B->tl;
	goto _TL13;
	_TL12: ;
      }{ struct Cyc_String_pa_PrintArg_struct _T2E;
	_T2E.tag = 0;
	_T1E = n;
	_T2E.f1 = *_T1E;
	_T1D = _T2E;
      }{ struct Cyc_String_pa_PrintArg_struct _T2E = _T1D;
	{ struct Cyc_String_pa_PrintArg_struct _T2F;
	  _T2F.tag = 0;
	  _T20 = f;
	  _T2F.f1 = *_T20;
	  _T1F = _T2F;
	}{ struct Cyc_String_pa_PrintArg_struct _T2F = _T1F;
	  void * _T30[2];
	  _T30[0] = &_T2E;
	  _T30[1] = &_T2F;
	  _T21 = _tag_fat("_union_%s_%s",sizeof(char),13U);
	  _T22 = _tag_fat(_T30,sizeof(void *),2);
	  _T1C = Cyc_aprintf(_T21,_T22);
	}
      }{ struct _fat_ptr str = _T1C;
	{ struct _fat_ptr * _T2E = _cycalloc(sizeof(struct _fat_ptr));
	  *_T2E = str;
	  _T23 = (struct _fat_ptr *)_T2E;
	}t = Cyc_Absyn_strct(_T23);
	{ struct Cyc_List_List * _T2E = _cycalloc(sizeof(struct Cyc_List_List));
	  { struct _tuple21 * _T2F = _cycalloc(sizeof(struct _tuple21));
	    _T2F->f0 = n;
	    _T2F->f1 = f;
	    _T2F->f2 = t;
	    _T25 = (struct _tuple21 *)_T2F;
	  }_T2E->hd = _T25;
	  _T2E->tl = cache;
	  _T24 = (struct Cyc_List_List *)_T2E;
	}cache = _T24;
	_T26 = t;
	return _T26;
      }
    }
  }_TLC: goto _LL5;
  _TLA: _LL5: { struct Cyc_Warn_String_Warn_Warg_struct _T2D;
    _T2D.tag = 0;
    _T2D.f1 = _tag_fat("tagged_union_field_struct",sizeof(char),26U);
    _T27 = _T2D;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T2D = _T27;
    void * _T2E[1];
    _T2E[0] = &_T2D;
    { int (* _T2F)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
      _T28 = _T2F;
    }_T29 = _tag_fat(_T2E,sizeof(void *),1);
    _T28(_T29);
  };
}
static char _TmpG0[5U] = "curr";
static struct _fat_ptr Cyc_Toc_curr_string = {(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
					      (unsigned char *)_TmpG0 + 5U};
static struct _fat_ptr * Cyc_Toc_curr_sp = (struct _fat_ptr *)&Cyc_Toc_curr_string;
static char _TmpG1[4U] = "tag";
static struct _fat_ptr Cyc_Toc_tag_string = {(unsigned char *)_TmpG1,(unsigned char *)_TmpG1,
					     (unsigned char *)_TmpG1 + 4U};
static struct _fat_ptr * Cyc_Toc_tag_sp = (struct _fat_ptr *)&Cyc_Toc_tag_string;
static char _TmpG2[4U] = "val";
static struct _fat_ptr Cyc_Toc_val_string = {(unsigned char *)_TmpG2,(unsigned char *)_TmpG2,
					     (unsigned char *)_TmpG2 + 4U};
static struct _fat_ptr * Cyc_Toc_val_sp = (struct _fat_ptr *)&Cyc_Toc_val_string;
static char _TmpG3[14U] = "_handler_cons";
static struct _fat_ptr Cyc_Toc__handler_cons_string = {(unsigned char *)_TmpG3,
						       (unsigned char *)_TmpG3,
						       (unsigned char *)_TmpG3 + 14U};
static struct _fat_ptr * Cyc_Toc__handler_cons_sp = (struct _fat_ptr *)&Cyc_Toc__handler_cons_string;
static char _TmpG4[8U] = "handler";
static struct _fat_ptr Cyc_Toc_handler_string = {(unsigned char *)_TmpG4,
						 (unsigned char *)_TmpG4,
						 (unsigned char *)_TmpG4 + 8U};
static struct _fat_ptr * Cyc_Toc_handler_sp = (struct _fat_ptr *)&Cyc_Toc_handler_string;
static char _TmpG5[14U] = "_RegionHandle";
static struct _fat_ptr Cyc_Toc__RegionHandle_string = {(unsigned char *)_TmpG5,
						       (unsigned char *)_TmpG5,
						       (unsigned char *)_TmpG5 + 14U};
static struct _fat_ptr * Cyc_Toc__RegionHandle_sp = (struct _fat_ptr *)&Cyc_Toc__RegionHandle_string;
static char _TmpG6[7U] = "_throw";
static struct _fat_ptr Cyc_Toc__throw_str = {(unsigned char *)_TmpG6,(unsigned char *)_TmpG6,
					     (unsigned char *)_TmpG6 + 7U};
static struct _tuple1 Cyc_Toc__throw_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__throw_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__throw_bnd = {0,
										&Cyc_Toc__throw_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__throw_re = {1,
									(void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__throw_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__throw_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__throw_re),
						 0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__throw_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__throw_ev;
static char _TmpG7[7U] = "setjmp";
static struct _fat_ptr Cyc_Toc_setjmp_str = {(unsigned char *)_TmpG7,(unsigned char *)_TmpG7,
					     (unsigned char *)_TmpG7 + 7U};
static struct _tuple1 Cyc_Toc_setjmp_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc_setjmp_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc_setjmp_bnd = {0,
										&Cyc_Toc_setjmp_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc_setjmp_re = {1,
									(void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc_setjmp_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc_setjmp_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc_setjmp_re),
						 0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc_setjmp_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc_setjmp_ev;
static char _TmpG8[14U] = "_push_handler";
static struct _fat_ptr Cyc_Toc__push_handler_str = {(unsigned char *)_TmpG8,
						    (unsigned char *)_TmpG8,
						    (unsigned char *)_TmpG8 + 14U};
static struct _tuple1 Cyc_Toc__push_handler_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__push_handler_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__push_handler_bnd = {0,
										       &Cyc_Toc__push_handler_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__push_handler_re = {1,
									       (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__push_handler_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__push_handler_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__push_handler_re),
							0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__push_handler_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__push_handler_ev;
static char _TmpG9[13U] = "_pop_handler";
static struct _fat_ptr Cyc_Toc__pop_handler_str = {(unsigned char *)_TmpG9,
						   (unsigned char *)_TmpG9,
						   (unsigned char *)_TmpG9 + 13U};
static struct _tuple1 Cyc_Toc__pop_handler_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__pop_handler_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__pop_handler_bnd = {0,
										      &Cyc_Toc__pop_handler_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__pop_handler_re = {1,
									      (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__pop_handler_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__pop_handler_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__pop_handler_re),
						       0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__pop_handler_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__pop_handler_ev;
static char _TmpGA[12U] = "_exn_thrown";
static struct _fat_ptr Cyc_Toc__exn_thrown_str = {(unsigned char *)_TmpGA,
						  (unsigned char *)_TmpGA,
						  (unsigned char *)_TmpGA + 12U};
static struct _tuple1 Cyc_Toc__exn_thrown_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__exn_thrown_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__exn_thrown_bnd = {0,
										     &Cyc_Toc__exn_thrown_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__exn_thrown_re = {1,
									     (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__exn_thrown_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__exn_thrown_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__exn_thrown_re),
						      0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__exn_thrown_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__exn_thrown_ev;
static char _TmpGB[14U] = "_npop_handler";
static struct _fat_ptr Cyc_Toc__npop_handler_str = {(unsigned char *)_TmpGB,
						    (unsigned char *)_TmpGB,
						    (unsigned char *)_TmpGB + 14U};
static struct _tuple1 Cyc_Toc__npop_handler_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__npop_handler_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__npop_handler_bnd = {0,
										       &Cyc_Toc__npop_handler_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__npop_handler_re = {1,
									       (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__npop_handler_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__npop_handler_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__npop_handler_re),
							0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__npop_handler_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__npop_handler_ev;
static char _TmpGC[12U] = "_check_null";
static struct _fat_ptr Cyc_Toc__check_null_str = {(unsigned char *)_TmpGC,
						  (unsigned char *)_TmpGC,
						  (unsigned char *)_TmpGC + 12U};
static struct _tuple1 Cyc_Toc__check_null_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__check_null_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_null_bnd = {0,
										     &Cyc_Toc__check_null_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_null_re = {1,
									     (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__check_null_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__check_null_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__check_null_re),
						      0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__check_null_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__check_null_ev;
static char _TmpGD[28U] = "_check_known_subscript_null";
static struct _fat_ptr Cyc_Toc__check_known_subscript_null_str = {(unsigned char *)_TmpGD,
								  (unsigned char *)_TmpGD,
								  (unsigned char *)_TmpGD + 28U};
static struct _tuple1 Cyc_Toc__check_known_subscript_null_pr = {.f0={.Abs_n={1,
									     0}},
								.f1=(struct _fat_ptr *)&Cyc_Toc__check_known_subscript_null_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_known_subscript_null_bnd = {0,
												     &Cyc_Toc__check_known_subscript_null_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_known_subscript_null_re = {1,
											     (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__check_known_subscript_null_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__check_known_subscript_null_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__check_known_subscript_null_re),
								      0U,
								      (void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__check_known_subscript_null_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__check_known_subscript_null_ev;
static char _TmpGE[31U] = "_check_known_subscript_notnull";
static struct _fat_ptr Cyc_Toc__check_known_subscript_notnull_str = {(unsigned char *)_TmpGE,
								     (unsigned char *)_TmpGE,
								     (unsigned char *)_TmpGE + 31U};
static struct _tuple1 Cyc_Toc__check_known_subscript_notnull_pr = {.f0={.Abs_n={1,
										0}},
								   .f1=(struct _fat_ptr *)&Cyc_Toc__check_known_subscript_notnull_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_known_subscript_notnull_bnd = {0,
													&Cyc_Toc__check_known_subscript_notnull_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_known_subscript_notnull_re = {1,
												(void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__check_known_subscript_notnull_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__check_known_subscript_notnull_ev = {0,
									 (void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__check_known_subscript_notnull_re),
									 0U,
									 (void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__check_known_subscript_notnull_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__check_known_subscript_notnull_ev;
static char _TmpGF[21U] = "_check_fat_subscript";
static struct _fat_ptr Cyc_Toc__check_fat_subscript_str = {(unsigned char *)_TmpGF,
							   (unsigned char *)_TmpGF,
							   (unsigned char *)_TmpGF + 21U};
static struct _tuple1 Cyc_Toc__check_fat_subscript_pr = {.f0={.Abs_n={1,0}},
							 .f1=(struct _fat_ptr *)&Cyc_Toc__check_fat_subscript_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_fat_subscript_bnd = {0,
											      &Cyc_Toc__check_fat_subscript_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_fat_subscript_re = {1,
										      (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__check_fat_subscript_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__check_fat_subscript_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__check_fat_subscript_re),
							       0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__check_fat_subscript_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__check_fat_subscript_ev;
static char _TmpG10[9U] = "_fat_ptr";
static struct _fat_ptr Cyc_Toc__fat_ptr_str = {(unsigned char *)_TmpG10,(unsigned char *)_TmpG10,
					       (unsigned char *)_TmpG10 + 9U};
static struct _tuple1 Cyc_Toc__fat_ptr_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__fat_ptr_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_bnd = {0,
										  &Cyc_Toc__fat_ptr_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_re = {1,
									  (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__fat_ptr_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__fat_ptr_re),
						   0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__fat_ptr_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__fat_ptr_ev;
static char _TmpG11[9U] = "_tag_fat";
static struct _fat_ptr Cyc_Toc__tag_fat_str = {(unsigned char *)_TmpG11,(unsigned char *)_TmpG11,
					       (unsigned char *)_TmpG11 + 9U};
static struct _tuple1 Cyc_Toc__tag_fat_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__tag_fat_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__tag_fat_bnd = {0,
										  &Cyc_Toc__tag_fat_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__tag_fat_re = {1,
									  (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__tag_fat_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__tag_fat_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__tag_fat_re),
						   0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__tag_fat_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__tag_fat_ev;
static char _TmpG12[27U] = "_untag_fat_ptr_check_bound";
static struct _fat_ptr Cyc_Toc__untag_fat_ptr_check_bound_str = {(unsigned char *)_TmpG12,
								 (unsigned char *)_TmpG12,
								 (unsigned char *)_TmpG12 + 27U};
static struct _tuple1 Cyc_Toc__untag_fat_ptr_check_bound_pr = {.f0={.Abs_n={1,
									    0}},
							       .f1=(struct _fat_ptr *)&Cyc_Toc__untag_fat_ptr_check_bound_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__untag_fat_ptr_check_bound_bnd = {0,
												    &Cyc_Toc__untag_fat_ptr_check_bound_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__untag_fat_ptr_check_bound_re = {1,
											    (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__untag_fat_ptr_check_bound_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__untag_fat_ptr_check_bound_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__untag_fat_ptr_check_bound_re),
								     0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__untag_fat_ptr_check_bound_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__untag_fat_ptr_check_bound_ev;
static char _TmpG13[15U] = "_untag_fat_ptr";
static struct _fat_ptr Cyc_Toc__untag_fat_ptr_str = {(unsigned char *)_TmpG13,
						     (unsigned char *)_TmpG13,
						     (unsigned char *)_TmpG13 + 15U};
static struct _tuple1 Cyc_Toc__untag_fat_ptr_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__untag_fat_ptr_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__untag_fat_ptr_bnd = {0,
											&Cyc_Toc__untag_fat_ptr_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__untag_fat_ptr_re = {1,
										(void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__untag_fat_ptr_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__untag_fat_ptr_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__untag_fat_ptr_re),
							 0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__untag_fat_ptr_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__untag_fat_ptr_ev;
static char _TmpG14[19U] = "_check_fat_at_base";
static struct _fat_ptr Cyc_Toc__check_fat_at_base_str = {(unsigned char *)_TmpG14,
							 (unsigned char *)_TmpG14,
							 (unsigned char *)_TmpG14 + 19U};
static struct _tuple1 Cyc_Toc__check_fat_at_base_pr = {.f0={.Abs_n={1,0}},
						       .f1=(struct _fat_ptr *)&Cyc_Toc__check_fat_at_base_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_fat_at_base_bnd = {0,
											    &Cyc_Toc__check_fat_at_base_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_fat_at_base_re = {1,
										    (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__check_fat_at_base_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__check_fat_at_base_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__check_fat_at_base_re),
							     0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__check_fat_at_base_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__check_fat_at_base_ev;
static char _TmpG15[14U] = "_get_fat_size";
static struct _fat_ptr Cyc_Toc__get_fat_size_str = {(unsigned char *)_TmpG15,
						    (unsigned char *)_TmpG15,
						    (unsigned char *)_TmpG15 + 14U};
static struct _tuple1 Cyc_Toc__get_fat_size_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__get_fat_size_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__get_fat_size_bnd = {0,
										       &Cyc_Toc__get_fat_size_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__get_fat_size_re = {1,
									       (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__get_fat_size_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__get_fat_size_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__get_fat_size_re),
							0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__get_fat_size_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__get_fat_size_ev;
static char _TmpG16[23U] = "_fat_ptr_decrease_size";
static struct _fat_ptr Cyc_Toc__fat_ptr_decrease_size_str = {(unsigned char *)_TmpG16,
							     (unsigned char *)_TmpG16,
							     (unsigned char *)_TmpG16 + 23U};
static struct _tuple1 Cyc_Toc__fat_ptr_decrease_size_pr = {.f0={.Abs_n={1,
									0}},
							   .f1=(struct _fat_ptr *)&Cyc_Toc__fat_ptr_decrease_size_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_decrease_size_bnd = {0,
												&Cyc_Toc__fat_ptr_decrease_size_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_decrease_size_re = {1,
											(void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__fat_ptr_decrease_size_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_decrease_size_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__fat_ptr_decrease_size_re),
								 0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__fat_ptr_decrease_size_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__fat_ptr_decrease_size_ev;
static char _TmpG17[24U] = "_get_zero_arr_size_char";
static struct _fat_ptr Cyc_Toc__get_zero_arr_size_char_str = {(unsigned char *)_TmpG17,
							      (unsigned char *)_TmpG17,
							      (unsigned char *)_TmpG17 + 24U};
static struct _tuple1 Cyc_Toc__get_zero_arr_size_char_pr = {.f0={.Abs_n={1,
									 0}},
							    .f1=(struct _fat_ptr *)&Cyc_Toc__get_zero_arr_size_char_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__get_zero_arr_size_char_bnd = {0,
												 &Cyc_Toc__get_zero_arr_size_char_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__get_zero_arr_size_char_re = {1,
											 (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__get_zero_arr_size_char_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__get_zero_arr_size_char_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__get_zero_arr_size_char_re),
								  0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__get_zero_arr_size_char_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__get_zero_arr_size_char_ev;
static char _TmpG18[25U] = "_get_zero_arr_size_other";
static struct _fat_ptr Cyc_Toc__get_zero_arr_size_other_str = {(unsigned char *)_TmpG18,
							       (unsigned char *)_TmpG18,
							       (unsigned char *)_TmpG18 + 25U};
static struct _tuple1 Cyc_Toc__get_zero_arr_size_other_pr = {.f0={.Abs_n={1,
									  0}},
							     .f1=(struct _fat_ptr *)&Cyc_Toc__get_zero_arr_size_other_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__get_zero_arr_size_other_bnd = {0,
												  &Cyc_Toc__get_zero_arr_size_other_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__get_zero_arr_size_other_re = {1,
											  (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__get_zero_arr_size_other_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__get_zero_arr_size_other_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__get_zero_arr_size_other_re),
								   0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__get_zero_arr_size_other_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__get_zero_arr_size_other_ev;
static char _TmpG19[14U] = "_fat_ptr_plus";
static struct _fat_ptr Cyc_Toc__fat_ptr_plus_str = {(unsigned char *)_TmpG19,
						    (unsigned char *)_TmpG19,
						    (unsigned char *)_TmpG19 + 14U};
static struct _tuple1 Cyc_Toc__fat_ptr_plus_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__fat_ptr_plus_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_plus_bnd = {0,
										       &Cyc_Toc__fat_ptr_plus_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_plus_re = {1,
									       (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__fat_ptr_plus_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_plus_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__fat_ptr_plus_re),
							0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__fat_ptr_plus_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__fat_ptr_plus_ev;
static char _TmpG1A[20U] = "_zero_arr_plus_char";
static struct _fat_ptr Cyc_Toc__zero_arr_plus_char_str = {(unsigned char *)_TmpG1A,
							  (unsigned char *)_TmpG1A,
							  (unsigned char *)_TmpG1A + 20U};
static struct _tuple1 Cyc_Toc__zero_arr_plus_char_pr = {.f0={.Abs_n={1,0}},
							.f1=(struct _fat_ptr *)&Cyc_Toc__zero_arr_plus_char_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_plus_char_bnd = {0,
											     &Cyc_Toc__zero_arr_plus_char_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_plus_char_re = {1,
										     (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__zero_arr_plus_char_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_plus_char_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__zero_arr_plus_char_re),
							      0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__zero_arr_plus_char_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__zero_arr_plus_char_ev;
static char _TmpG1B[21U] = "_zero_arr_plus_other";
static struct _fat_ptr Cyc_Toc__zero_arr_plus_other_str = {(unsigned char *)_TmpG1B,
							   (unsigned char *)_TmpG1B,
							   (unsigned char *)_TmpG1B + 21U};
static struct _tuple1 Cyc_Toc__zero_arr_plus_other_pr = {.f0={.Abs_n={1,0}},
							 .f1=(struct _fat_ptr *)&Cyc_Toc__zero_arr_plus_other_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_plus_other_bnd = {0,
											      &Cyc_Toc__zero_arr_plus_other_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_plus_other_re = {1,
										      (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__zero_arr_plus_other_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_plus_other_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__zero_arr_plus_other_re),
							       0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__zero_arr_plus_other_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__zero_arr_plus_other_ev;
static char _TmpG1C[22U] = "_fat_ptr_inplace_plus";
static struct _fat_ptr Cyc_Toc__fat_ptr_inplace_plus_str = {(unsigned char *)_TmpG1C,
							    (unsigned char *)_TmpG1C,
							    (unsigned char *)_TmpG1C + 22U};
static struct _tuple1 Cyc_Toc__fat_ptr_inplace_plus_pr = {.f0={.Abs_n={1,
								       0}},
							  .f1=(struct _fat_ptr *)&Cyc_Toc__fat_ptr_inplace_plus_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_inplace_plus_bnd = {0,
											       &Cyc_Toc__fat_ptr_inplace_plus_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_inplace_plus_re = {1,
										       (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__fat_ptr_inplace_plus_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_inplace_plus_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__fat_ptr_inplace_plus_re),
								0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__fat_ptr_inplace_plus_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__fat_ptr_inplace_plus_ev;
static char _TmpG1D[28U] = "_zero_arr_inplace_plus_char";
static struct _fat_ptr Cyc_Toc__zero_arr_inplace_plus_char_str = {(unsigned char *)_TmpG1D,
								  (unsigned char *)_TmpG1D,
								  (unsigned char *)_TmpG1D + 28U};
static struct _tuple1 Cyc_Toc__zero_arr_inplace_plus_char_pr = {.f0={.Abs_n={1,
									     0}},
								.f1=(struct _fat_ptr *)&Cyc_Toc__zero_arr_inplace_plus_char_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_inplace_plus_char_bnd = {0,
												     &Cyc_Toc__zero_arr_inplace_plus_char_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_inplace_plus_char_re = {1,
											     (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__zero_arr_inplace_plus_char_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_inplace_plus_char_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__zero_arr_inplace_plus_char_re),
								      0U,
								      (void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__zero_arr_inplace_plus_char_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__zero_arr_inplace_plus_char_ev;
static char _TmpG1E[29U] = "_zero_arr_inplace_plus_other";
static struct _fat_ptr Cyc_Toc__zero_arr_inplace_plus_other_str = {(unsigned char *)_TmpG1E,
								   (unsigned char *)_TmpG1E,
								   (unsigned char *)_TmpG1E + 29U};
static struct _tuple1 Cyc_Toc__zero_arr_inplace_plus_other_pr = {.f0={.Abs_n={1,
									      0}},
								 .f1=(struct _fat_ptr *)&Cyc_Toc__zero_arr_inplace_plus_other_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_inplace_plus_other_bnd = {0,
												      &Cyc_Toc__zero_arr_inplace_plus_other_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_inplace_plus_other_re = {1,
											      (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__zero_arr_inplace_plus_other_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_inplace_plus_other_ev = {0,
								       (void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__zero_arr_inplace_plus_other_re),
								       0U,
								       (void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__zero_arr_inplace_plus_other_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__zero_arr_inplace_plus_other_ev;
static char _TmpG1F[27U] = "_fat_ptr_inplace_plus_post";
static struct _fat_ptr Cyc_Toc__fat_ptr_inplace_plus_post_str = {(unsigned char *)_TmpG1F,
								 (unsigned char *)_TmpG1F,
								 (unsigned char *)_TmpG1F + 27U};
static struct _tuple1 Cyc_Toc__fat_ptr_inplace_plus_post_pr = {.f0={.Abs_n={1,
									    0}},
							       .f1=(struct _fat_ptr *)&Cyc_Toc__fat_ptr_inplace_plus_post_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_inplace_plus_post_bnd = {0,
												    &Cyc_Toc__fat_ptr_inplace_plus_post_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_inplace_plus_post_re = {1,
											    (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__fat_ptr_inplace_plus_post_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_inplace_plus_post_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__fat_ptr_inplace_plus_post_re),
								     0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__fat_ptr_inplace_plus_post_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__fat_ptr_inplace_plus_post_ev;
static char _TmpG20[33U] = "_zero_arr_inplace_plus_post_char";
static struct _fat_ptr Cyc_Toc__zero_arr_inplace_plus_post_char_str = {(unsigned char *)_TmpG20,
								       (unsigned char *)_TmpG20,
								       (unsigned char *)_TmpG20 + 33U};
static struct _tuple1 Cyc_Toc__zero_arr_inplace_plus_post_char_pr = {.f0={.Abs_n={1,
										  0}},
								     .f1=(struct _fat_ptr *)&Cyc_Toc__zero_arr_inplace_plus_post_char_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_inplace_plus_post_char_bnd = {0,
													  &Cyc_Toc__zero_arr_inplace_plus_post_char_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_inplace_plus_post_char_re = {1,
												  (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__zero_arr_inplace_plus_post_char_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_inplace_plus_post_char_ev = {0,
									   (void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__zero_arr_inplace_plus_post_char_re),
									   0U,
									   (void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__zero_arr_inplace_plus_post_char_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__zero_arr_inplace_plus_post_char_ev;
static char _TmpG21[34U] = "_zero_arr_inplace_plus_post_other";
static struct _fat_ptr Cyc_Toc__zero_arr_inplace_plus_post_other_str = {(unsigned char *)_TmpG21,
									(unsigned char *)_TmpG21,
									(unsigned char *)_TmpG21 + 34U};
static struct _tuple1 Cyc_Toc__zero_arr_inplace_plus_post_other_pr = {.f0={.Abs_n={1,
										   0}},
								      .f1=(struct _fat_ptr *)&Cyc_Toc__zero_arr_inplace_plus_post_other_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_inplace_plus_post_other_bnd = {0,
													   &Cyc_Toc__zero_arr_inplace_plus_post_other_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_inplace_plus_post_other_re = {1,
												   (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__zero_arr_inplace_plus_post_other_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_inplace_plus_post_other_ev = {0,
									    (void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__zero_arr_inplace_plus_post_other_re),
									    0U,
									    (void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__zero_arr_inplace_plus_post_other_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__zero_arr_inplace_plus_post_other_ev;
static char _TmpG22[10U] = "_cycalloc";
static struct _fat_ptr Cyc_Toc__cycalloc_str = {(unsigned char *)_TmpG22,
						(unsigned char *)_TmpG22,
						(unsigned char *)_TmpG22 + 10U};
static struct _tuple1 Cyc_Toc__cycalloc_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__cycalloc_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__cycalloc_bnd = {0,
										   &Cyc_Toc__cycalloc_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__cycalloc_re = {1,
									   (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__cycalloc_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__cycalloc_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__cycalloc_re),
						    0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__cycalloc_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__cycalloc_ev;
static char _TmpG23[11U] = "_cyccalloc";
static struct _fat_ptr Cyc_Toc__cyccalloc_str = {(unsigned char *)_TmpG23,
						 (unsigned char *)_TmpG23,
						 (unsigned char *)_TmpG23 + 11U};
static struct _tuple1 Cyc_Toc__cyccalloc_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__cyccalloc_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__cyccalloc_bnd = {0,
										    &Cyc_Toc__cyccalloc_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__cyccalloc_re = {1,
									    (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__cyccalloc_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__cyccalloc_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__cyccalloc_re),
						     0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__cyccalloc_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__cyccalloc_ev;
static char _TmpG24[17U] = "_cycalloc_atomic";
static struct _fat_ptr Cyc_Toc__cycalloc_atomic_str = {(unsigned char *)_TmpG24,
						       (unsigned char *)_TmpG24,
						       (unsigned char *)_TmpG24 + 17U};
static struct _tuple1 Cyc_Toc__cycalloc_atomic_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__cycalloc_atomic_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__cycalloc_atomic_bnd = {0,
											  &Cyc_Toc__cycalloc_atomic_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__cycalloc_atomic_re = {1,
										  (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__cycalloc_atomic_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__cycalloc_atomic_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__cycalloc_atomic_re),
							   0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__cycalloc_atomic_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__cycalloc_atomic_ev;
static char _TmpG25[18U] = "_cyccalloc_atomic";
static struct _fat_ptr Cyc_Toc__cyccalloc_atomic_str = {(unsigned char *)_TmpG25,
							(unsigned char *)_TmpG25,
							(unsigned char *)_TmpG25 + 18U};
static struct _tuple1 Cyc_Toc__cyccalloc_atomic_pr = {.f0={.Abs_n={1,0}},
						      .f1=(struct _fat_ptr *)&Cyc_Toc__cyccalloc_atomic_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__cyccalloc_atomic_bnd = {0,
											   &Cyc_Toc__cyccalloc_atomic_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__cyccalloc_atomic_re = {1,
										   (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__cyccalloc_atomic_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__cyccalloc_atomic_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__cyccalloc_atomic_re),
							    0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__cyccalloc_atomic_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__cyccalloc_atomic_ev;
static char _TmpG26[15U] = "_region_malloc";
static struct _fat_ptr Cyc_Toc__region_malloc_str = {(unsigned char *)_TmpG26,
						     (unsigned char *)_TmpG26,
						     (unsigned char *)_TmpG26 + 15U};
static struct _tuple1 Cyc_Toc__region_malloc_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__region_malloc_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__region_malloc_bnd = {0,
											&Cyc_Toc__region_malloc_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__region_malloc_re = {1,
										(void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__region_malloc_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__region_malloc_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__region_malloc_re),
							 0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__region_malloc_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__region_malloc_ev;
static char _TmpG27[15U] = "_region_calloc";
static struct _fat_ptr Cyc_Toc__region_calloc_str = {(unsigned char *)_TmpG27,
						     (unsigned char *)_TmpG27,
						     (unsigned char *)_TmpG27 + 15U};
static struct _tuple1 Cyc_Toc__region_calloc_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__region_calloc_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__region_calloc_bnd = {0,
											&Cyc_Toc__region_calloc_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__region_calloc_re = {1,
										(void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__region_calloc_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__region_calloc_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__region_calloc_re),
							 0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__region_calloc_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__region_calloc_ev;
static char _TmpG28[16U] = "_region_vmalloc";
static struct _fat_ptr Cyc_Toc__region_vmalloc_str = {(unsigned char *)_TmpG28,
						      (unsigned char *)_TmpG28,
						      (unsigned char *)_TmpG28 + 16U};
static struct _tuple1 Cyc_Toc__region_vmalloc_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__region_vmalloc_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__region_vmalloc_bnd = {0,
											 &Cyc_Toc__region_vmalloc_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__region_vmalloc_re = {1,
										 (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__region_vmalloc_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__region_vmalloc_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__region_vmalloc_re),
							  0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__region_vmalloc_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__region_vmalloc_ev;
static char _TmpG29[14U] = "_aqual_malloc";
static struct _fat_ptr Cyc_Toc__aqual_malloc_str = {(unsigned char *)_TmpG29,
						    (unsigned char *)_TmpG29,
						    (unsigned char *)_TmpG29 + 14U};
static struct _tuple1 Cyc_Toc__aqual_malloc_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__aqual_malloc_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__aqual_malloc_bnd = {0,
										       &Cyc_Toc__aqual_malloc_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__aqual_malloc_re = {1,
									       (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__aqual_malloc_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__aqual_malloc_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__aqual_malloc_re),
							0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__aqual_malloc_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__aqual_malloc_ev;
static char _TmpG2A[14U] = "_aqual_calloc";
static struct _fat_ptr Cyc_Toc__aqual_calloc_str = {(unsigned char *)_TmpG2A,
						    (unsigned char *)_TmpG2A,
						    (unsigned char *)_TmpG2A + 14U};
static struct _tuple1 Cyc_Toc__aqual_calloc_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__aqual_calloc_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__aqual_calloc_bnd = {0,
										       &Cyc_Toc__aqual_calloc_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__aqual_calloc_re = {1,
									       (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__aqual_calloc_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__aqual_calloc_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__aqual_calloc_re),
							0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__aqual_calloc_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__aqual_calloc_ev;
static char _TmpG2B[20U] = "_fast_region_malloc";
static struct _fat_ptr Cyc_Toc__fast_region_malloc_str = {(unsigned char *)_TmpG2B,
							  (unsigned char *)_TmpG2B,
							  (unsigned char *)_TmpG2B + 20U};
static struct _tuple1 Cyc_Toc__fast_region_malloc_pr = {.f0={.Abs_n={1,0}},
							.f1=(struct _fat_ptr *)&Cyc_Toc__fast_region_malloc_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fast_region_malloc_bnd = {0,
											     &Cyc_Toc__fast_region_malloc_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fast_region_malloc_re = {1,
										     (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__fast_region_malloc_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__fast_region_malloc_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__fast_region_malloc_re),
							      0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__fast_region_malloc_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__fast_region_malloc_ev;
static char _TmpG2C[13U] = "_check_times";
static struct _fat_ptr Cyc_Toc__check_times_str = {(unsigned char *)_TmpG2C,
						   (unsigned char *)_TmpG2C,
						   (unsigned char *)_TmpG2C + 13U};
static struct _tuple1 Cyc_Toc__check_times_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__check_times_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_times_bnd = {0,
										      &Cyc_Toc__check_times_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_times_re = {1,
									      (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__check_times_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__check_times_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__check_times_re),
						       0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__check_times_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__check_times_ev;
static char _TmpG2D[12U] = "_new_region";
static struct _fat_ptr Cyc_Toc__new_region_str = {(unsigned char *)_TmpG2D,
						  (unsigned char *)_TmpG2D,
						  (unsigned char *)_TmpG2D + 12U};
static struct _tuple1 Cyc_Toc__new_region_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__new_region_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__new_region_bnd = {0,
										     &Cyc_Toc__new_region_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__new_region_re = {1,
									     (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__new_region_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__new_region_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__new_region_re),
						      0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__new_region_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__new_region_ev;
static char _TmpG2E[13U] = "_push_region";
static struct _fat_ptr Cyc_Toc__push_region_str = {(unsigned char *)_TmpG2E,
						   (unsigned char *)_TmpG2E,
						   (unsigned char *)_TmpG2E + 13U};
static struct _tuple1 Cyc_Toc__push_region_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__push_region_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__push_region_bnd = {0,
										      &Cyc_Toc__push_region_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__push_region_re = {1,
									      (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__push_region_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__push_region_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__push_region_re),
						       0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__push_region_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__push_region_ev;
static char _TmpG2F[12U] = "_pop_region";
static struct _fat_ptr Cyc_Toc__pop_region_str = {(unsigned char *)_TmpG2F,
						  (unsigned char *)_TmpG2F,
						  (unsigned char *)_TmpG2F + 12U};
static struct _tuple1 Cyc_Toc__pop_region_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__pop_region_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__pop_region_bnd = {0,
										     &Cyc_Toc__pop_region_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__pop_region_re = {1,
									     (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__pop_region_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__pop_region_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__pop_region_re),
						      0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__pop_region_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__pop_region_ev;
static char _TmpG30[19U] = "_throw_arraybounds";
static struct _fat_ptr Cyc_Toc__throw_arraybounds_str = {(unsigned char *)_TmpG30,
							 (unsigned char *)_TmpG30,
							 (unsigned char *)_TmpG30 + 19U};
static struct _tuple1 Cyc_Toc__throw_arraybounds_pr = {.f0={.Abs_n={1,0}},
						       .f1=(struct _fat_ptr *)&Cyc_Toc__throw_arraybounds_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__throw_arraybounds_bnd = {0,
											    &Cyc_Toc__throw_arraybounds_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__throw_arraybounds_re = {1,
										    (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__throw_arraybounds_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__throw_arraybounds_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__throw_arraybounds_re),
							     0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__throw_arraybounds_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__throw_arraybounds_ev;
static char _TmpG31[13U] = "_throw_match";
static struct _fat_ptr Cyc_Toc__throw_match_str = {(unsigned char *)_TmpG31,
						   (unsigned char *)_TmpG31,
						   (unsigned char *)_TmpG31 + 13U};
static struct _tuple1 Cyc_Toc__throw_match_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__throw_match_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__throw_match_bnd = {0,
										      &Cyc_Toc__throw_match_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__throw_match_re = {1,
									      (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__throw_match_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__throw_match_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__throw_match_re),
						       0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__throw_match_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__throw_match_ev;
static char _TmpG32[9U] = "_rethrow";
static struct _fat_ptr Cyc_Toc__rethrow_str = {(unsigned char *)_TmpG32,(unsigned char *)_TmpG32,
					       (unsigned char *)_TmpG32 + 9U};
static struct _tuple1 Cyc_Toc__rethrow_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__rethrow_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__rethrow_bnd = {0,
										  &Cyc_Toc__rethrow_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__rethrow_re = {1,
									  (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__rethrow_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__rethrow_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__rethrow_re),
						   0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__rethrow_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__rethrow_ev;
static char _TmpG33[14U] = "_throw_assert";
static struct _fat_ptr Cyc_Toc__throw_assert_str = {(unsigned char *)_TmpG33,
						    (unsigned char *)_TmpG33,
						    (unsigned char *)_TmpG33 + 14U};
static struct _tuple1 Cyc_Toc__throw_assert_pr = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Toc__throw_assert_str};
static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__throw_assert_bnd = {0,
										       &Cyc_Toc__throw_assert_pr};
static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__throw_assert_re = {1,
									       (void *)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)&Cyc_Toc__throw_assert_bnd)};
static struct Cyc_Absyn_Exp Cyc_Toc__throw_assert_ev = {0,(void *)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)&Cyc_Toc__throw_assert_re),
							0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
static struct Cyc_Absyn_Exp * Cyc_Toc__throw_assert_e = (struct Cyc_Absyn_Exp *)&Cyc_Toc__throw_assert_ev;
static struct Cyc_Absyn_Tqual Cyc_Toc_mt_tq = {0,0,0,0,0U};
static struct Cyc_Absyn_Exp * Cyc_Toc_deep_copy(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  _T0 = Cyc_Tcutil_deep_copy_exp(1,e);
  return _T0;
}
void * Cyc_Toc_void_star_type() {
  void * _T0;
  void * _T1;
  void * _T2;
  struct Cyc_Absyn_Tqual _T3;
  void * _T4;
  void * _T5;
  void * _T6;
  static void * t = 0;
  if (t != 0) { goto _TL16;
  }
  _T0 = Cyc_Absyn_void_type;
  _T1 = Cyc_Absyn_heap_rgn_type;
  _T2 = Cyc_Absyn_al_qual_type;
  _T3 = Cyc_Absyn_empty_tqual(0U);
  _T4 = Cyc_Absyn_false_type;
  _T5 = Cyc_Absyn_false_type;
  t = Cyc_Absyn_star_type(_T0,_T1,_T2,_T3,_T4,_T5);
  goto _TL17;
  _TL16: _TL17: _T6 = t;
  return _T6;
}
static void * Cyc_Toc_fat_ptr_type() {
  struct _tuple1 * _T0;
  union Cyc_Absyn_AggrInfo _T1;
  void * _T2;
  static void * t = 0;
  if (t != 0) { goto _TL18;
  }
  _T0 = &Cyc_Toc__fat_ptr_pr;
  _T1 = Cyc_Absyn_UnknownAggr(0U,_T0,0);
  t = Cyc_Absyn_aggr_type(_T1,0);
  goto _TL19;
  _TL18: _TL19: _T2 = t;
  return _T2;
}
static void * Cyc_Toc_rgn_type() {
  void * _T0;
  struct Cyc_Absyn_Tqual _T1;
  void * _T2;
  static void * r = 0;
  if (r != 0) { goto _TL1A;
  }
  _T0 = Cyc_Absyn_strct(Cyc_Toc__RegionHandle_sp);
  _T1 = Cyc_Toc_mt_tq;
  r = Cyc_Absyn_cstar_type(_T0,_T1);
  goto _TL1B;
  _TL1A: _TL1B: _T2 = r;
  return _T2;
}
static void * Cyc_Toc_aqualt_type() {
  void * _T0;
  _T0 = Cyc_Absyn_uint_type;
  return _T0;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_aliasable_qual_exp() {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  static struct Cyc_Absyn_Exp * aq = 0;
  if (aq != 0) { goto _TL1C;
  }
  _T0 = Cyc_Absyn_uint_exp(0U,0U);
  _T1 = Cyc_Absyn_uint_type;
  aq = Cyc_Absyn_set_type(_T0,_T1);
  goto _TL1D;
  _TL1C: _TL1D: _T2 = aq;
  return _T2;
}
static struct Cyc_Absyn_Stmt * Cyc_Toc_skip_stmt_dl() {
  struct Cyc_Absyn_Stmt * _T0;
  _T0 = Cyc_Absyn_skip_stmt(0U);
  return _T0;
}
 struct _tuple22 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Exp * f1;
};
static struct _tuple22 * Cyc_Toc_make_field(struct _fat_ptr * name,struct Cyc_Absyn_Exp * e) {
  struct _tuple22 * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T2;
  { struct _tuple22 * _T3 = _cycalloc(sizeof(struct _tuple22));
    { struct Cyc_List_List * _T4 = _cycalloc(sizeof(struct Cyc_List_List));
      { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T5 = _cycalloc(sizeof(struct Cyc_Absyn_FieldName_Absyn_Designator_struct));
	_T5->tag = 1;
	_T5->f1 = name;
	_T2 = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T5;
      }_T4->hd = (void *)_T2;
      _T4->tl = 0;
      _T1 = (struct Cyc_List_List *)_T4;
    }_T3->f0 = _T1;
    _T3->f1 = e;
    _T0 = (struct _tuple22 *)_T3;
  }return _T0;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_fncall_exp_dl(struct Cyc_Absyn_Exp * f,
						    struct _fat_ptr args) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_Absyn_Exp * _T2;
  _T0 = f;
  _T1 = Cyc_List_from_array(args);
  _T2 = Cyc_Absyn_fncall_exp(_T0,_T1,0U);
  return _T2;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_cast_it(void * t,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T3;
  enum Cyc_Absyn_Coercion _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct Cyc_Absyn_Exp * _T6;
  void * _T7;
  struct Cyc_Absyn_Exp * _T8;
  _T0 = e;
  { void * _T9 = _T0->r;
    struct Cyc_Absyn_Exp * _TA;
    _T1 = (int *)_T9;
    _T2 = *_T1;
    if (_T2 != 14) { goto _TL1E;
    }
    _T3 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T9;
    _T4 = _T3->f4;
    if (_T4 != Cyc_Absyn_No_coercion) { goto _TL20;
    }
    { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _TB = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T9;
      _TA = _TB->f2;
    }{ struct Cyc_Absyn_Exp * e = _TA;
      _T5 = Cyc_Toc_cast_it(t,e);
      return _T5;
    }_TL20: goto _LL3;
    _TL1E: _LL3: _T6 = Cyc_Absyn_cast_exp(t,e,0,1U,0U);
    _T7 = t;
    _T8 = Cyc_Absyn_set_type(_T6,_T7);
    return _T8;
    ;
  }
}
struct Cyc_Absyn_Exp * Cyc_Toc_get_exn_thrown_expression() {
  struct Cyc_Absyn_Exp * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct _tuple1 * _T3;
  struct _tuple1 * _T4;
  struct Cyc_List_List * _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  struct _tuple1 * _T8;
  struct _fat_ptr * _T9;
  struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_Absyn_Exp * _TC;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _TD;
  struct Cyc_Absyn_Exp * _TE;
  struct Cyc_Absyn_Exp * _TF;
  struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct * _T10;
  struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct * _T11;
  struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T12;
  struct Cyc_Absyn_Exp * _T13;
  struct Cyc_Absyn_Tqual _T14;
  void * _T15;
  void * _T16;
  struct Cyc_Absyn_Tqual _T17;
  struct Cyc_Absyn_Exp * _T18;
  struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct * _T19;
  struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  struct Cyc_Absyn_Exp * _T1C;
  static struct Cyc_Absyn_Exp * _get_exn_thrown_e = 0;
  _T0 = _get_exn_thrown_e;
  _T1 = (unsigned int)_T0;
  if (! _T1) { goto _TL22;
  }
  _T2 = Cyc_Toc_deep_copy(_get_exn_thrown_e);
  return _T2;
  _TL22: { struct _tuple1 * qv;
    qv = _cycalloc(sizeof(struct _tuple1));
    _T3 = qv;
    ((_T3->f0).Abs_n).tag = 1U;
    _T4 = qv;
    { struct _fat_ptr * _T1D[1];
      { struct _fat_ptr * _T1E = _cycalloc(sizeof(struct _fat_ptr));
	*_T1E = _tag_fat("Core",sizeof(char),5U);
	_T6 = (struct _fat_ptr *)_T1E;
      }_T1D[0] = _T6;
      _T7 = _tag_fat(_T1D,sizeof(struct _fat_ptr *),1);
      _T5 = Cyc_List_list(_T7);
    }((_T4->f0).Abs_n).val = _T5;
    _T8 = qv;
    { struct _fat_ptr * _T1D = _cycalloc(sizeof(struct _fat_ptr));
      *_T1D = _tag_fat("get_exn_thrown",sizeof(char),15U);
      _T9 = (struct _fat_ptr *)_T1D;
    }_T8->f1 = _T9;
    { struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct * _T1D = _cycalloc(sizeof(struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct));
      _T1D->tag = 0;
      _T1D->f1 = qv;
      _TA = (struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct *)_T1D;
    }{ void * bnd = (void *)_TA;
      struct Cyc_Absyn_Exp * fnname;
      fnname = _cycalloc(sizeof(struct Cyc_Absyn_Exp));
      _TB = fnname;
      _TB->topt = 0;
      _TC = fnname;
      { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T1D = _cycalloc(sizeof(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct));
	_T1D->tag = 1;
	_T1D->f1 = bnd;
	_TD = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T1D;
      }_TC->r = (void *)_TD;
      _TE = fnname;
      _TE->loc = 0U;
      _TF = fnname;
      _T10 = &Cyc_Absyn_EmptyAnnot_val;
      _T11 = (struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)_T10;
      _TF->annot = (void *)_T11;
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T1D = _cycalloc(sizeof(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct));
	_T1D->tag = 10;
	_T1D->f1 = fnname;
	_T1D->f2 = 0;
	_T1D->f3 = 0;
	_T1D->f4 = 0;
	_T12 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T1D;
      }{ void * fncall_re = (void *)_T12;
	_T13 = fnname;
	_T14 = Cyc_Toc_mt_tq;
	_T15 = Cyc_Toc_void_star_type();
	_T16 = Cyc_Absyn_function_type(0,
				       0,
				       _T14,
				       _T15,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0);
	_T17 = Cyc_Toc_mt_tq;
	_T13->topt = Cyc_Absyn_cstar_type(_T16,_T17);
	{ struct Cyc_Absyn_Exp * _T1D = _cycalloc(sizeof(struct Cyc_Absyn_Exp));
	  _T1D->topt = 0;
	  _T1D->r = fncall_re;
	  _T1D->loc = 0U;
	  _T19 = &Cyc_Absyn_EmptyAnnot_val;
	  _T1A = (struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)_T19;
	  _T1D->annot = (void *)_T1A;
	  _T18 = (struct Cyc_Absyn_Exp *)_T1D;
	}_get_exn_thrown_e = _T18;
	_T1B = _check_null(_get_exn_thrown_e);
	_T1B->topt = Cyc_Toc_void_star_type();
	_T1C = _check_null(_get_exn_thrown_e);
	return _T1C;
      }
    }
  }
}
static void * Cyc_Toc_cast_it_r(void * t,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct));
    _T2->tag = 14;
    _T2->f1 = t;
    _T2->f2 = e;
    _T2->f3 = 0;
    _T2->f4 = 1U;
    _T0 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_deref_exp_r(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct));
    _T2->tag = 20;
    _T2->f1 = e;
    _T0 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_subscript_exp_r(struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2) {
  struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct));
    _T2->tag = 23;
    _T2->f1 = e1;
    _T2->f2 = e2;
    _T0 = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_stmt_exp_r(struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct));
    _T2->tag = 36;
    _T2->f1 = s;
    _T0 = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_sizeoftype_exp_r(void * t) {
  struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct));
    _T2->tag = 17;
    _T2->f1 = t;
    _T0 = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_fncall_exp_r(struct Cyc_Absyn_Exp * e,struct _fat_ptr es) {
  struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct));
    _T2->tag = 10;
    _T2->f1 = e;
    _T2->f2 = Cyc_List_from_array(es);
    _T2->f3 = 0;
    _T2->f4 = 1;
    _T0 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_seq_stmt_r(struct Cyc_Absyn_Stmt * s1,struct Cyc_Absyn_Stmt * s2) {
  struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct));
    _T2->tag = 2;
    _T2->f1 = s1;
    _T2->f2 = s2;
    _T0 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_conditional_exp_r(struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_Exp * e2,
					struct Cyc_Absyn_Exp * e3) {
  struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct));
    _T2->tag = 6;
    _T2->f1 = e1;
    _T2->f2 = e2;
    _T2->f3 = e3;
    _T0 = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_aggrmember_exp_r(struct Cyc_Absyn_Exp * e,struct _fat_ptr * n) {
  struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct));
    _T2->tag = 21;
    _T2->f1 = e;
    _T2->f2 = n;
    _T2->f3 = 0;
    _T2->f4 = 0;
    _T0 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_unresolvedmem_exp_r(struct Cyc_Core_Opt * tdopt,struct Cyc_List_List * ds) {
  struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct));
    _T2->tag = 35;
    _T2->f1 = tdopt;
    _T2->f2 = ds;
    _T0 = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_goto_stmt_r(struct _fat_ptr * v) {
  struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct));
    _T2->tag = 8;
    _T2->f1 = v;
    _T0 = (struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Toc_zero_exp() {
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T0;
  void * _T1;
  { struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T2 = _cycalloc(sizeof(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct));
    _T2->tag = 0;
    ((_T2->f1).Int_c).tag = 5U;
    (((_T2->f1).Int_c).val).f0 = 0U;
    (((_T2->f1).Int_c).val).f1 = 0;
    _T0 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_member_exp(struct Cyc_Absyn_Exp * e,
						 struct _fat_ptr * f,unsigned int loc) {
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
    if (_T2 != 20) { goto _TL24;
    }
    { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T7 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T5;
      _T6 = _T7->f1;
    }{ struct Cyc_Absyn_Exp * e1 = _T6;
      _T3 = Cyc_Absyn_aggrarrow_exp(e1,f,loc);
      return _T3;
    }_TL24: _T4 = Cyc_Absyn_aggrmember_exp(e,f,loc);
    return _T4;
    ;
  }
}
static struct Cyc_Absyn_Exp * Cyc_Toc_get_curr(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  _T0 = Cyc_Toc_member_exp(e,Cyc_Toc_curr_sp,0U);
  _T1 = Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);
  _T2 = Cyc_Absyn_set_type(_T0,_T1);
  return _T2;
}
static long Cyc_Toc_isCharStar(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  void * _T2;
  int * _T3;
  int _T4;
  struct Cyc_Absyn_PtrInfo _T5;
  void * _T6;
  long _T7;
  _T0 = e;
  _T1 = _T0->topt;
  _T2 = _check_null(_T1);
  { void * _T8 = Cyc_Absyn_compress(_T2);
    struct Cyc_Absyn_PtrInfo _T9;
    _T3 = (int *)_T8;
    _T4 = *_T3;
    if (_T4 != 4) { goto _TL26;
    }
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TA = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T8;
      _T9 = _TA->f1;
    }{ struct Cyc_Absyn_PtrInfo pi = _T9;
      _T5 = pi;
      _T6 = _T5.elt_type;
      _T7 = Cyc_Tcutil_is_char_type(_T6);
      return _T7;
    }_TL26: return 0;
    ;
  }
}
static long Cyc_Toc_is_zero(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T3;
  union Cyc_Absyn_Cnst _T4;
  struct _union_Cnst_Null_c _T5;
  unsigned int _T6;
  long _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct _tuple22 * _TA;
  struct _tuple22 _TB;
  struct Cyc_Absyn_Exp * _TC;
  long _TD;
  struct Cyc_List_List * _TE;
  long _TF;
  _T0 = e;
  { void * _T10 = _T0->r;
    struct Cyc_List_List * _T11;
    struct Cyc_Absyn_Exp * _T12;
    _T1 = (int *)_T10;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      _T3 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T10;
      _T4 = _T3->f1;
      _T5 = _T4.Null_c;
      _T6 = _T5.tag;
      if (_T6 != 1) { goto _TL29;
      }
      return 1;
      _TL29: goto _LLF;
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T13 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T10;
	_T12 = _T13->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T12;
	_T7 = Cyc_Toc_is_zero(e1);
	return _T7;
      }
    case 25: 
      { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T13 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T10;
	_T11 = _T13->f1;
      }{ struct Cyc_List_List * dles = _T11;
	_T11 = dles;
	goto _LL8;
      }
    case 29: 
      { struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T13 = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T10;
	_T11 = _T13->f3;
      }_LL8: { struct Cyc_List_List * dles = _T11;
	_T11 = dles;
	goto _LLA;
      }
    case 28: 
      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T13 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T10;
	_T11 = _T13->f3;
      }_LLA: { struct Cyc_List_List * dles = _T11;
	_T11 = dles;
	goto _LLC;
      }
    case 24: 
      { struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct * _T13 = (struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct *)_T10;
	_T11 = _T13->f2;
      }_LLC: { struct Cyc_List_List * dles = _T11;
	_T11 = dles;
	goto _LLE;
      }
    case 35: 
      { struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T13 = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T10;
	_T11 = _T13->f2;
      }_LLE: { struct Cyc_List_List * dles = _T11;
	_TL2E: if (dles != 0) { goto _TL2C;
	}else { goto _TL2D;
	}
	_TL2C: _T8 = dles;
	_T9 = _T8->hd;
	_TA = (struct _tuple22 *)_T9;
	_TB = *_TA;
	_TC = _TB.f1;
	_TD = Cyc_Toc_is_zero(_TC);
	if (_TD) { goto _TL2F;
	}else { goto _TL31;
	}
	_TL31: return 0;
	_TL2F: _TE = dles;
	dles = _TE->tl;
	goto _TL2E;
	_TL2D: return 1;
      }
    default: 
      _LLF: _TF = Cyc_Tcutil_is_zero(e);
      return _TF;
    }
    ;
  }
}
static struct _fat_ptr Cyc_Toc_collapse_qvar(struct _fat_ptr * s,struct _tuple1 * x) {
  struct _tuple1 * _T0;
  union Cyc_Absyn_Nmspace _T1;
  struct _union_Nmspace_Abs_n _T2;
  unsigned int _T3;
  union Cyc_Absyn_Nmspace _T4;
  struct _union_Nmspace_Rel_n _T5;
  union Cyc_Absyn_Nmspace _T6;
  struct _union_Nmspace_Abs_n _T7;
  union Cyc_Absyn_Nmspace _T8;
  struct _union_Nmspace_C_n _T9;
  struct _fat_ptr _TA;
  struct Cyc_String_pa_PrintArg_struct _TB;
  struct _fat_ptr * _TC;
  struct Cyc_String_pa_PrintArg_struct _TD;
  struct _fat_ptr * _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  struct Cyc_String_pa_PrintArg_struct _T12;
  struct _fat_ptr * _T13;
  struct Cyc_String_pa_PrintArg_struct _T14;
  struct _RegionHandle * _T15;
  struct Cyc_List_List * _T16;
  struct _fat_ptr _T17;
  struct Cyc_String_pa_PrintArg_struct _T18;
  struct _fat_ptr * _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr * _T1C;
  union Cyc_Absyn_Nmspace _T1D;
  _T0 = x;
  { struct _tuple1 _T1E = *_T0;
    _T1D = _T1E.f0;
    _T1C = _T1E.f1;
  }{ union Cyc_Absyn_Nmspace ns = _T1D;
    struct _fat_ptr * v = _T1C;
    struct Cyc_List_List * _T1E;
    _T1 = ns;
    _T2 = _T1.Abs_n;
    _T3 = _T2.tag;
    switch (_T3) {
    case 4: 
      _T1E = 0;
      goto _LL7;
    case 2: 
      _T4 = ns;
      _T5 = _T4.Rel_n;
      _T1E = _T5.val;
      _LL7: { struct Cyc_List_List * vs = _T1E;
	_T1E = vs;
	goto _LL9;
      }
    case 1: 
      _T6 = ns;
      _T7 = _T6.Abs_n;
      _T1E = _T7.val;
      _LL9: { struct Cyc_List_List * vs = _T1E;
	_T1E = vs;
	goto _LLB;
      }
    default: 
      _T8 = ns;
      _T9 = _T8.C_n;
      _T1E = _T9.val;
      _LLB: { struct Cyc_List_List * vs = _T1E;
	if (vs != 0) { goto _TL33;
	}
	{ struct Cyc_String_pa_PrintArg_struct _T1F;
	  _T1F.tag = 0;
	  _TC = s;
	  _T1F.f1 = *_TC;
	  _TB = _T1F;
	}{ struct Cyc_String_pa_PrintArg_struct _T1F = _TB;
	  { struct Cyc_String_pa_PrintArg_struct _T20;
	    _T20.tag = 0;
	    _TE = v;
	    _T20.f1 = *_TE;
	    _TD = _T20;
	  }{ struct Cyc_String_pa_PrintArg_struct _T20 = _TD;
	    void * _T21[2];
	    _T21[0] = &_T1F;
	    _T21[1] = &_T20;
	    _TF = _tag_fat("%s_%s_struct",sizeof(char),13U);
	    _T10 = _tag_fat(_T21,sizeof(void *),2);
	    _TA = Cyc_aprintf(_TF,_T10);
	  }
	}return _TA;
	_TL33: { struct _RegionHandle _T1F = _new_region(0U,"r");
	  struct _RegionHandle * r = &_T1F;
	  _push_region(r);
	  { struct Cyc_String_pa_PrintArg_struct _T20;
	    _T20.tag = 0;
	    _T13 = s;
	    _T20.f1 = *_T13;
	    _T12 = _T20;
	  }{ struct Cyc_String_pa_PrintArg_struct _T20 = _T12;
	    { struct Cyc_String_pa_PrintArg_struct _T21;
	      _T21.tag = 0;
	      _T15 = r;
	      _T16 = vs;
	      _T17 = _tag_fat("_",sizeof(char),2U);
	      _T21.f1 = Cyc_rstr_sepstr(_T15,_T16,_T17);
	      _T14 = _T21;
	    }{ struct Cyc_String_pa_PrintArg_struct _T21 = _T14;
	      { struct Cyc_String_pa_PrintArg_struct _T22;
		_T22.tag = 0;
		_T19 = v;
		_T22.f1 = *_T19;
		_T18 = _T22;
	      }{ struct Cyc_String_pa_PrintArg_struct _T22 = _T18;
		void * _T23[3];
		_T23[0] = &_T20;
		_T23[1] = &_T21;
		_T23[2] = &_T22;
		_T1A = _tag_fat("%s_%s_%s_struct",sizeof(char),16U);
		_T1B = _tag_fat(_T23,sizeof(void *),3);
		_T11 = Cyc_aprintf(_T1A,_T1B);
	      }
	    }
	  }{ struct _fat_ptr _T20 = _T11;
	    _npop_handler(0);
	    return _T20;
	  }_pop_region();
	}
      }
    }
    ;
  }
}
 struct _tuple23 {
  struct Cyc_Toc_TocState * f0;
  struct _tuple16 * f1;
};
static struct _tuple1 * Cyc_Toc_collapse_qvars_body(struct _RegionHandle * d,
						    struct _tuple23 * env) {
  struct _tuple23 * _T0;
  struct Cyc_Toc_TocState * _T1;
  struct _tuple16 * _T2;
  struct _handler_cons * _T3;
  int _T4;
  struct _tuple1 * (* _T5)(struct Cyc_Dict_Dict,int (*)(struct _tuple16 *,
							struct _tuple16 *),
			   struct _tuple16 *);
  void * (* _T6)(struct Cyc_Dict_Dict,int (*)(void *,void *),void *);
  struct Cyc_Dict_Dict * _T7;
  struct Cyc_Dict_Dict _T8;
  struct _tuple16 * _T9;
  void * _TA;
  struct Cyc_Dict_Absent_exn_struct * _TB;
  char * _TC;
  char * _TD;
  struct _RegionHandle * _TE;
  struct _tuple16 * _TF;
  struct _tuple16 * _T10;
  struct _tuple1 * _T11;
  struct _tuple1 * _T12;
  struct _tuple1 * _T13;
  struct _fat_ptr * _T14;
  struct Cyc_Dict_Dict * _T15;
  struct Cyc_Dict_Dict (* _T16)(struct Cyc_Dict_Dict,struct _tuple16 *,struct _tuple1 *);
  struct Cyc_Dict_Dict (* _T17)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T18;
  struct Cyc_Dict_Dict _T19;
  struct _tuple16 * _T1A;
  struct _tuple1 * _T1B;
  struct _tuple1 * _T1C;
  _T0 = env;
  { struct _tuple23 _T1D = *_T0;
    struct _tuple16 * _T1E;
    struct Cyc_Dict_Dict * _T1F;
    _T1 = _T1D.f0;
    { struct Cyc_Toc_TocState _T20 = *_T1;
      _T1F = _T20.qvar_tags;
    }_T1E = _T1D.f1;
    { struct Cyc_Dict_Dict * qvs = _T1F;
      struct _tuple16 * pair = _T1E;
      _T2 = pair;
      { struct _tuple16 _T20 = *_T2;
	struct _tuple1 * _T21;
	struct _tuple1 * _T22;
	_T22 = _T20.f0;
	_T21 = _T20.f1;
	{ struct _tuple1 * fieldname = _T22;
	  struct _tuple1 * dtname = _T21;
	  struct _handler_cons _T23;
	  _T3 = &_T23;
	  _push_handler(_T3);
	  { int _T24 = 0;
	    _T4 = setjmp(_T23.handler);
	    if (! _T4) { goto _TL35;
	    }
	    _T24 = 1;
	    goto _TL36;
	    _TL35: _TL36: if (_T24) { goto _TL37;
	    }else { goto _TL39;
	    }
	    _TL39: _T6 = Cyc_Dict_lookup_other;
	    { struct _tuple1 * (* _T25)(struct Cyc_Dict_Dict,int (*)(struct _tuple16 *,
								     struct _tuple16 *),
					struct _tuple16 *) = (struct _tuple1 * (*)(struct Cyc_Dict_Dict,
										   int (*)(struct _tuple16 *,
											   struct _tuple16 *),
										   struct _tuple16 *))_T6;
	      _T5 = _T25;
	    }_T7 = qvs;
	    _T8 = *_T7;
	    _T9 = pair;
	    { struct _tuple1 * _T25 = _T5(_T8,Cyc_Toc_qvar_tag_cmp,_T9);
	      _npop_handler(0);
	      return _T25;
	    }_pop_handler();
	    goto _TL38;
	    _TL37: _TA = Cyc_Core_get_exn_thrown();
	    { void * _T25 = (void *)_TA;
	      void * _T26;
	      _TB = (struct Cyc_Dict_Absent_exn_struct *)_T25;
	      _TC = _TB->tag;
	      _TD = Cyc_Dict_Absent;
	      if (_TC != _TD) { goto _TL3A;
	      }
	      { struct _tuple16 * new_pair;
		_TE = d;
		new_pair = _region_malloc(_TE,0U,sizeof(struct _tuple16));
		_TF = new_pair;
		_TF->f0 = fieldname;
		_T10 = new_pair;
		_T10->f1 = dtname;
		{ struct _fat_ptr * _T27;
		  union Cyc_Absyn_Nmspace _T28;
		  _T11 = fieldname;
		  { struct _tuple1 _T29 = *_T11;
		    _T28 = _T29.f0;
		    _T27 = _T29.f1;
		  }{ union Cyc_Absyn_Nmspace nmspace = _T28;
		    struct _fat_ptr * fieldvar = _T27;
		    struct _fat_ptr newvar = Cyc_Toc_collapse_qvar(fieldvar,
								   dtname);
		    struct _tuple1 * res;
		    res = _cycalloc(sizeof(struct _tuple1));
		    _T12 = res;
		    _T12->f0 = nmspace;
		    _T13 = res;
		    { struct _fat_ptr * _T29 = _cycalloc(sizeof(struct _fat_ptr));
		      *_T29 = newvar;
		      _T14 = (struct _fat_ptr *)_T29;
		    }_T13->f1 = _T14;
		    _T15 = qvs;
		    _T17 = Cyc_Dict_insert;
		    { struct Cyc_Dict_Dict (* _T29)(struct Cyc_Dict_Dict,
						    struct _tuple16 *,struct _tuple1 *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
														    struct _tuple16 *,
														    struct _tuple1 *))_T17;
		      _T16 = _T29;
		    }_T18 = qvs;
		    _T19 = *_T18;
		    _T1A = new_pair;
		    _T1B = res;
		    *_T15 = _T16(_T19,_T1A,_T1B);
		    _T1C = res;
		    return _T1C;
		  }
		}
	      }_TL3A: _T26 = _T25;
	      { void * exn = _T26;
		_rethrow(exn);
	      };
	    }_TL38: ;
	  }
	}
      }
    }
  }
}
static struct _tuple1 * Cyc_Toc_collapse_qvars(struct _tuple1 * fieldname,
					       struct _tuple1 * dtname) {
  struct _tuple16 _T0;
  struct _tuple1 * (* _T1)(struct _tuple16 *,struct _tuple1 * (*)(struct _RegionHandle *,
								  struct _tuple23 *));
  struct _tuple16 * _T2;
  struct _tuple1 * _T3;
  { struct _tuple16 _T4;
    _T4.f0 = fieldname;
    _T4.f1 = dtname;
    _T0 = _T4;
  }{ struct _tuple16 env = _T0;
    { struct _tuple1 * (* _T4)(struct _tuple16 *,struct _tuple1 * (*)(struct _RegionHandle *,
								      struct _tuple23 *)) = (struct _tuple1 * (*)(struct _tuple16 *,
														  struct _tuple1 * (*)(struct _RegionHandle *,
																       struct _tuple23 *)))Cyc_Toc_use_toc_state;
      _T1 = _T4;
    }_T2 = &env;
    _T3 = _T1(_T2,Cyc_Toc_collapse_qvars_body);
    return _T3;
  }
}
static struct Cyc_Absyn_Aggrdecl * Cyc_Toc_make_c_struct_defn(struct _fat_ptr * name,
							      struct Cyc_List_List * fs) {
  struct Cyc_Absyn_Aggrdecl * _T0;
  struct _tuple1 * _T1;
  struct Cyc_Absyn_AggrdeclImpl * _T2;
  { struct Cyc_Absyn_Aggrdecl * _T3 = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
    _T3->kind = 0U;
    _T3->sc = 2U;
    _T3->tvs = 0;
    _T3->attributes = 0;
    _T3->expected_mem_kind = 0;
    { struct _tuple1 * _T4 = _cycalloc(sizeof(struct _tuple1));
      _T4->f0 = Cyc_Absyn_Rel_n(0);
      _T4->f1 = name;
      _T1 = (struct _tuple1 *)_T4;
    }_T3->name = _T1;
    { struct Cyc_Absyn_AggrdeclImpl * _T4 = _cycalloc(sizeof(struct Cyc_Absyn_AggrdeclImpl));
      _T4->exist_vars = 0;
      _T4->qual_bnd = 0;
      _T4->fields = fs;
      _T4->tagged = 0;
      _T4->effconstr = 0;
      _T2 = (struct Cyc_Absyn_AggrdeclImpl *)_T4;
    }_T3->impl = _T2;
    _T0 = (struct Cyc_Absyn_Aggrdecl *)_T3;
  }return _T0;
}
 struct _tuple24 {
  struct Cyc_Toc_TocState * f0;
  struct Cyc_List_List * f1;
};
 struct _tuple25 {
  void * f0;
  struct Cyc_List_List * f1;
};
 struct _tuple26 {
  struct Cyc_Absyn_Tqual f0;
  void * f1;
};
static void * Cyc_Toc_add_tuple_type_body(struct _RegionHandle * d,struct _tuple24 * env) {
  struct _tuple24 * _T0;
  struct Cyc_Toc_TocState * _T1;
  struct Cyc_List_List * * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  struct _tuple26 * _T7;
  struct _tuple26 _T8;
  void * _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  long _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  void * _TF;
  struct Cyc_List_List * _T10;
  struct _fat_ptr * _T11;
  struct _fat_ptr _T12;
  struct Cyc_Int_pa_PrintArg_struct _T13;
  int _T14;
  int _T15;
  struct _fat_ptr _T16;
  struct _fat_ptr _T17;
  struct Cyc_List_List * _T18;
  void * _T19;
  struct _tuple26 * _T1A;
  struct _tuple26 _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_Absyn_Aggrfield * _T1D;
  struct Cyc_List_List * _T1E;
  struct _RegionHandle * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_Absyn_Aggrdecl * * _T21;
  union Cyc_Absyn_AggrInfo _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T24;
  void * _T25;
  struct Cyc_List_List * * _T26;
  struct Cyc_List_List * _T27;
  struct _RegionHandle * _T28;
  struct _tuple25 * _T29;
  struct _RegionHandle * _T2A;
  struct Cyc_List_List * * _T2B;
  void * _T2C;
  _T0 = env;
  { struct _tuple24 _T2D = *_T0;
    struct Cyc_List_List * _T2E;
    struct Cyc_List_List * * _T2F;
    _T1 = _T2D.f0;
    { struct Cyc_Toc_TocState _T30 = *_T1;
      _T2F = _T30.tuple_types;
    }_T2E = _T2D.f1;
    { struct Cyc_List_List * * tuple_types = _T2F;
      struct Cyc_List_List * tqs0 = _T2E;
      _T2 = tuple_types;
      { struct Cyc_List_List * tts = *_T2;
	_TL3F: if (tts != 0) { goto _TL3D;
	}else { goto _TL3E;
	}
	_TL3D: _T3 = tts;
	_T4 = _T3->hd;
	{ struct _tuple25 * _T30 = (struct _tuple25 *)_T4;
	  struct Cyc_List_List * _T31;
	  void * _T32;
	  { struct _tuple25 _T33 = *_T30;
	    _T32 = _T33.f0;
	    _T31 = _T33.f1;
	  }{ void * x = _T32;
	    struct Cyc_List_List * ts = _T31;
	    struct Cyc_List_List * tqs = tqs0;
	    _TL43: if (tqs != 0) { goto _TL44;
	    }else { goto _TL42;
	    }
	    _TL44: if (ts != 0) { goto _TL41;
	    }else { goto _TL42;
	    }
	    _TL41: _T5 = tqs;
	    _T6 = _T5->hd;
	    _T7 = (struct _tuple26 *)_T6;
	    _T8 = *_T7;
	    _T9 = _T8.f1;
	    _TA = ts;
	    _TB = _TA->hd;
	    _TC = Cyc_Unify_unify(_T9,_TB);
	    if (_TC) { goto _TL45;
	    }else { goto _TL47;
	    }
	    _TL47: goto _TL42;
	    _TL45: _TD = tqs;
	    tqs = _TD->tl;
	    _TE = ts;
	    ts = _TE->tl;
	    goto _TL43;
	    _TL42: if (tqs != 0) { goto _TL48;
	    }
	    if (ts != 0) { goto _TL48;
	    }
	    _TF = x;
	    return _TF;
	    _TL48: ;
	  }
	}_T10 = tts;
	tts = _T10->tl;
	goto _TL3F;
	_TL3E: ;
      }{ struct _fat_ptr * xname;
	xname = _cycalloc(sizeof(struct _fat_ptr));
	_T11 = xname;
	{ struct Cyc_Int_pa_PrintArg_struct _T30;
	  _T30.tag = 1;
	  _T14 = Cyc_Toc_tuple_type_counter;
	  Cyc_Toc_tuple_type_counter = _T14 + 1;
	  _T15 = _T14;
	  _T30.f1 = (unsigned long)_T15;
	  _T13 = _T30;
	}{ struct Cyc_Int_pa_PrintArg_struct _T30 = _T13;
	  void * _T31[1];
	  _T31[0] = &_T30;
	  _T16 = _tag_fat("_tuple%d",sizeof(char),9U);
	  _T17 = _tag_fat(_T31,sizeof(void *),1);
	  _T12 = Cyc_aprintf(_T16,_T17);
	}*_T11 = _T12;
	{ struct Cyc_List_List * fs = 0;
	  struct Cyc_List_List * ts = 0;
	  { int i = 1;
	    _TL4D: if (tqs0 != 0) { goto _TL4B;
	    }else { goto _TL4C;
	    }
	    _TL4B: _T18 = tqs0;
	    _T19 = _T18->hd;
	    _T1A = (struct _tuple26 *)_T19;
	    _T1B = *_T1A;
	    { void * t = _T1B.f1;
	      { struct Cyc_List_List * _T30 = _cycalloc(sizeof(struct Cyc_List_List));
		{ struct Cyc_Absyn_Aggrfield * _T31 = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
		  _T31->name = Cyc_Absyn_fieldname(i);
		  _T31->tq = Cyc_Toc_mt_tq;
		  _T31->type = t;
		  _T31->width = 0;
		  _T31->attributes = 0;
		  _T31->requires_clause = 0;
		  _T1D = (struct Cyc_Absyn_Aggrfield *)_T31;
		}_T30->hd = _T1D;
		_T30->tl = fs;
		_T1C = (struct Cyc_List_List *)_T30;
	      }fs = _T1C;
	      _T1F = d;
	      { struct Cyc_List_List * _T30 = _region_malloc(_T1F,0U,sizeof(struct Cyc_List_List));
		_T30->hd = t;
		_T30->tl = ts;
		_T1E = (struct Cyc_List_List *)_T30;
	      }ts = _T1E;
	    }_T20 = tqs0;
	    tqs0 = _T20->tl;
	    i = i + 1;
	    goto _TL4D;
	    _TL4C: ;
	  }fs = Cyc_List_imp_rev(fs);
	  ts = Cyc_List_imp_rev(ts);
	  { struct Cyc_Absyn_Aggrdecl * sd = Cyc_Toc_make_c_struct_defn(xname,
									fs);
	    { struct Cyc_Absyn_Aggrdecl * * _T30 = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl *));
	      *_T30 = sd;
	      _T21 = (struct Cyc_Absyn_Aggrdecl * *)_T30;
	    }_T22 = Cyc_Absyn_KnownAggr(_T21);
	    { void * ans = Cyc_Absyn_aggr_type(_T22,0);
	      { struct Cyc_List_List * _T30 = _cycalloc(sizeof(struct Cyc_List_List));
		{ struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T31 = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
		  _T31->tag = 5;
		  _T31->f1 = sd;
		  _T24 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T31;
		}_T25 = (void *)_T24;
		_T30->hd = Cyc_Absyn_new_decl(_T25,0U);
		_T30->tl = Cyc_Toc_result_decls;
		_T23 = (struct Cyc_List_List *)_T30;
	      }Cyc_Toc_result_decls = _T23;
	      _T26 = tuple_types;
	      _T28 = d;
	      { struct Cyc_List_List * _T30 = _region_malloc(_T28,0U,sizeof(struct Cyc_List_List));
		_T2A = d;
		{ struct _tuple25 * _T31 = _region_malloc(_T2A,0U,sizeof(struct _tuple25));
		  _T31->f0 = ans;
		  _T31->f1 = ts;
		  _T29 = (struct _tuple25 *)_T31;
		}_T30->hd = _T29;
		_T2B = tuple_types;
		_T30->tl = *_T2B;
		_T27 = (struct Cyc_List_List *)_T30;
	      }*_T26 = _T27;
	      _T2C = ans;
	      return _T2C;
	    }
	  }
	}
      }
    }
  }
}
static void * Cyc_Toc_add_tuple_type(struct Cyc_List_List * tqs0) {
  void * (* _T0)(struct Cyc_List_List *,void * (*)(struct _RegionHandle *,
						   struct _tuple24 *));
  void * _T1;
  { void * (* _T2)(struct Cyc_List_List *,void * (*)(struct _RegionHandle *,
						     struct _tuple24 *)) = (void * (*)(struct Cyc_List_List *,
										       void * (*)(struct _RegionHandle *,
												  struct _tuple24 *)))Cyc_Toc_use_toc_state;
    _T0 = _T2;
  }_T1 = _T0(tqs0,Cyc_Toc_add_tuple_type_body);
  return _T1;
}
 struct _tuple27 {
  enum Cyc_Absyn_AggrKind f0;
  struct Cyc_List_List * f1;
};
 struct _tuple28 {
  struct Cyc_Toc_TocState * f0;
  struct _tuple27 * f1;
};
 struct _tuple29 {
  void * f0;
  enum Cyc_Absyn_AggrKind f1;
  struct Cyc_List_List * f2;
};
static void * Cyc_Toc_add_anon_aggr_type_body(struct _RegionHandle * d,struct _tuple28 * env) {
  struct _tuple28 * _T0;
  struct Cyc_Toc_TocState * _T1;
  struct _tuple27 * _T2;
  struct Cyc_List_List * * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  enum Cyc_Absyn_AggrKind _T6;
  int _T7;
  enum Cyc_Absyn_AggrKind _T8;
  int _T9;
  int (* _TA)(int (*)(struct Cyc_Absyn_Aggrfield *,struct Cyc_Absyn_Aggrfield *),
	      struct Cyc_List_List *,struct Cyc_List_List *);
  int (* _TB)(int (*)(void *,void *),struct Cyc_List_List *,struct Cyc_List_List *);
  int (* _TC)(struct Cyc_Absyn_Aggrfield *,struct Cyc_Absyn_Aggrfield *);
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  int _TF;
  void * _T10;
  struct Cyc_List_List * _T11;
  struct _fat_ptr * _T12;
  struct _fat_ptr _T13;
  struct Cyc_Int_pa_PrintArg_struct _T14;
  int _T15;
  int _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  struct Cyc_Absyn_Aggrdecl * _T19;
  struct Cyc_Absyn_Aggrdecl * * _T1A;
  union Cyc_Absyn_AggrInfo _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T1D;
  void * _T1E;
  struct Cyc_List_List * * _T1F;
  struct Cyc_List_List * _T20;
  struct _RegionHandle * _T21;
  struct _tuple29 * _T22;
  struct _RegionHandle * _T23;
  struct Cyc_List_List * * _T24;
  void * _T25;
  struct Cyc_List_List * _T26;
  enum Cyc_Absyn_AggrKind _T27;
  struct Cyc_List_List * * _T28;
  _T0 = env;
  { struct _tuple28 _T29 = *_T0;
    _T1 = _T29.f0;
    { struct Cyc_Toc_TocState _T2A = *_T1;
      _T28 = _T2A.anon_aggr_types;
    }_T2 = _T29.f1;
    { struct _tuple27 _T2A = *_T2;
      _T27 = _T2A.f0;
      _T26 = _T2A.f1;
    }
  }{ struct Cyc_List_List * * anon_aggr_types = _T28;
    enum Cyc_Absyn_AggrKind ak = _T27;
    struct Cyc_List_List * fs = _T26;
    _T3 = anon_aggr_types;
    { struct Cyc_List_List * ts = *_T3;
      _TL51: if (ts != 0) { goto _TL4F;
      }else { goto _TL50;
      }
      _TL4F: _T4 = ts;
      _T5 = _T4->hd;
      { struct _tuple29 * _T29 = (struct _tuple29 *)_T5;
	struct Cyc_List_List * _T2A;
	enum Cyc_Absyn_AggrKind _T2B;
	void * _T2C;
	{ struct _tuple29 _T2D = *_T29;
	  _T2C = _T2D.f0;
	  _T2B = _T2D.f1;
	  _T2A = _T2D.f2;
	}{ void * x = _T2C;
	  enum Cyc_Absyn_AggrKind ak2 = _T2B;
	  struct Cyc_List_List * fs2 = _T2A;
	  _T6 = ak;
	  _T7 = (int)_T6;
	  _T8 = ak2;
	  _T9 = (int)_T8;
	  if (_T7 != _T9) { goto _TL52;
	  }
	  _TB = Cyc_List_list_cmp;
	  { int (* _T2D)(int (*)(struct Cyc_Absyn_Aggrfield *,struct Cyc_Absyn_Aggrfield *),
			 struct Cyc_List_List *,struct Cyc_List_List *) = (int (*)(int (*)(struct Cyc_Absyn_Aggrfield *,
											   struct Cyc_Absyn_Aggrfield *),
										   struct Cyc_List_List *,
										   struct Cyc_List_List *))_TB;
	    _TA = _T2D;
	  }_TC = Cyc_Tcutil_aggrfield_cmp;
	  _TD = fs2;
	  _TE = fs;
	  _TF = _TA(_TC,_TD,_TE);
	  if (_TF) { goto _TL52;
	  }else { goto _TL54;
	  }
	  _TL54: _T10 = x;
	  return _T10;
	  _TL52: ;
	}
      }_T11 = ts;
      ts = _T11->tl;
      goto _TL51;
      _TL50: ;
    }{ struct _fat_ptr * xname;
      xname = _cycalloc(sizeof(struct _fat_ptr));
      _T12 = xname;
      { struct Cyc_Int_pa_PrintArg_struct _T29;
	_T29.tag = 1;
	_T15 = Cyc_Toc_tuple_type_counter;
	Cyc_Toc_tuple_type_counter = _T15 + 1;
	_T16 = _T15;
	_T29.f1 = (unsigned long)_T16;
	_T14 = _T29;
      }{ struct Cyc_Int_pa_PrintArg_struct _T29 = _T14;
	void * _T2A[1];
	_T2A[0] = &_T29;
	_T17 = _tag_fat("_tuple%d",sizeof(char),9U);
	_T18 = _tag_fat(_T2A,sizeof(void *),1);
	_T13 = Cyc_aprintf(_T17,_T18);
      }*_T12 = _T13;
      { struct Cyc_Absyn_Aggrdecl * sd = Cyc_Toc_make_c_struct_defn(xname,
								    fs);
	_T19 = sd;
	_T19->kind = ak;
	{ struct Cyc_Absyn_Aggrdecl * * _T29 = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl *));
	  *_T29 = sd;
	  _T1A = (struct Cyc_Absyn_Aggrdecl * *)_T29;
	}_T1B = Cyc_Absyn_KnownAggr(_T1A);
	{ void * ans = Cyc_Absyn_aggr_type(_T1B,0);
	  { struct Cyc_List_List * _T29 = _cycalloc(sizeof(struct Cyc_List_List));
	    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T2A = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
	      _T2A->tag = 5;
	      _T2A->f1 = sd;
	      _T1D = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T2A;
	    }_T1E = (void *)_T1D;
	    _T29->hd = Cyc_Absyn_new_decl(_T1E,0U);
	    _T29->tl = Cyc_Toc_result_decls;
	    _T1C = (struct Cyc_List_List *)_T29;
	  }Cyc_Toc_result_decls = _T1C;
	  _T1F = anon_aggr_types;
	  _T21 = d;
	  { struct Cyc_List_List * _T29 = _region_malloc(_T21,0U,sizeof(struct Cyc_List_List));
	    _T23 = d;
	    { struct _tuple29 * _T2A = _region_malloc(_T23,0U,sizeof(struct _tuple29));
	      _T2A->f0 = ans;
	      _T2A->f1 = ak;
	      _T2A->f2 = fs;
	      _T22 = (struct _tuple29 *)_T2A;
	    }_T29->hd = _T22;
	    _T24 = anon_aggr_types;
	    _T29->tl = *_T24;
	    _T20 = (struct Cyc_List_List *)_T29;
	  }*_T1F = _T20;
	  _T25 = ans;
	  return _T25;
	}
      }
    }
  }
}
static void * Cyc_Toc_add_anon_aggr_type(enum Cyc_Absyn_AggrKind ak,struct Cyc_List_List * fs) {
  void * (* _T0)(struct _tuple27 *,void * (*)(struct _RegionHandle *,struct _tuple28 *));
  struct _tuple27 * _T1;
  void * _T2;
  { void * (* _T3)(struct _tuple27 *,void * (*)(struct _RegionHandle *,struct _tuple28 *)) = (void * (*)(struct _tuple27 *,
													 void * (*)(struct _RegionHandle *,
														    struct _tuple28 *)))Cyc_Toc_use_toc_state;
    _T0 = _T3;
  }{ struct _tuple27 * _T3 = _cycalloc(sizeof(struct _tuple27));
    _T3->f0 = ak;
    _T3->f1 = fs;
    _T1 = (struct _tuple27 *)_T3;
  }_T2 = _T0(_T1,Cyc_Toc_add_anon_aggr_type_body);
  return _T2;
}
 struct _tuple30 {
  struct _tuple1 * f0;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
  struct Cyc_List_List * f3;
};
 struct _tuple31 {
  struct Cyc_Toc_TocState * f0;
  struct _tuple30 * f1;
};
 struct _tuple32 {
  struct _tuple1 * f0;
  struct Cyc_List_List * f1;
  void * f2;
};
static void * Cyc_Toc_add_struct_type_body(struct _RegionHandle * d,struct _tuple31 * env) {
  struct _tuple31 * _T0;
  struct Cyc_Toc_TocState * _T1;
  struct _tuple30 * _T2;
  struct Cyc_List_List * * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  int _T6;
  int _T7;
  int _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_Absyn_Kind * _TB;
  enum Cyc_Absyn_KindQual _TC;
  long _TD;
  void * _TE;
  void * _TF;
  long _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  long _T13;
  void * _T14;
  struct Cyc_List_List * _T15;
  struct _fat_ptr * _T16;
  struct _fat_ptr _T17;
  struct Cyc_Int_pa_PrintArg_struct _T18;
  int _T19;
  int _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_List_List * * _T1D;
  struct Cyc_List_List * _T1E;
  struct _RegionHandle * _T1F;
  struct _tuple32 * _T20;
  struct _RegionHandle * _T21;
  struct Cyc_List_List * * _T22;
  struct Cyc_List_List * _T23;
  void * _T24;
  struct Cyc_Absyn_Aggrfield * _T25;
  struct Cyc_Absyn_Aggrfield * _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_List_List * _T28;
  struct Cyc_Absyn_Kind * _T29;
  struct Cyc_Absyn_Kind * _T2A;
  struct Cyc_Absyn_Kind * _T2B;
  long _T2C;
  long _T2D;
  struct Cyc_List_List * _T2E;
  struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T2F;
  void * _T30;
  long _T31;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T32;
  struct Cyc_Absyn_Exp * _T33;
  void * _T34;
  struct Cyc_List_List * _T35;
  struct Cyc_Absyn_Aggrfield * _T36;
  struct Cyc_Absyn_Aggrfield * _T37;
  struct Cyc_Absyn_Aggrfield * _T38;
  struct Cyc_List_List * _T39;
  struct Cyc_List_List * _T3A;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T3B;
  void * _T3C;
  _T0 = env;
  { struct _tuple31 _T3D = *_T0;
    struct Cyc_List_List * _T3E;
    struct Cyc_List_List * _T3F;
    struct Cyc_List_List * _T40;
    struct _tuple1 * _T41;
    struct Cyc_List_List * * _T42;
    _T1 = _T3D.f0;
    { struct Cyc_Toc_TocState _T43 = *_T1;
      _T42 = _T43.abs_struct_types;
    }_T2 = _T3D.f1;
    { struct _tuple30 _T43 = *_T2;
      _T41 = _T43.f0;
      _T40 = _T43.f1;
      _T3F = _T43.f2;
      _T3E = _T43.f3;
    }{ struct Cyc_List_List * * abs_struct_types = _T42;
      struct _tuple1 * struct_name = _T41;
      struct Cyc_List_List * type_vars = _T40;
      struct Cyc_List_List * type_args = _T3F;
      struct Cyc_List_List * fields = _T3E;
      _T3 = abs_struct_types;
      { struct Cyc_List_List * tts = *_T3;
	_TL58: if (tts != 0) { goto _TL56;
	}else { goto _TL57;
	}
	_TL56: _T4 = tts;
	_T5 = _T4->hd;
	{ struct _tuple32 * _T43 = (struct _tuple32 *)_T5;
	  void * _T44;
	  struct Cyc_List_List * _T45;
	  struct _tuple1 * _T46;
	  { struct _tuple32 _T47 = *_T43;
	    _T46 = _T47.f0;
	    _T45 = _T47.f1;
	    _T44 = _T47.f2;
	  }{ struct _tuple1 * x = _T46;
	    struct Cyc_List_List * ts2 = _T45;
	    void * t = _T44;
	    _T6 = Cyc_Absyn_qvar_cmp(x,struct_name);
	    if (_T6 != 0) { goto _TL59;
	    }
	    _T7 = Cyc_List_length(type_args);
	    _T8 = Cyc_List_length(ts2);
	    if (_T7 != _T8) { goto _TL59;
	    }
	    { long okay = 1;
	      { struct Cyc_List_List * ts = type_args;
		_TL5E: if (ts != 0) { goto _TL5C;
		}else { goto _TL5D;
		}
		_TL5C: _T9 = ts;
		{ void * t = _T9->hd;
		  _TA = _check_null(ts2);
		  { void * t2 = _TA->hd;
		    { struct Cyc_Absyn_Kind * _T47 = Cyc_Tcutil_type_kind(t);
		      _TB = (struct Cyc_Absyn_Kind *)_T47;
		      _TC = _TB->kind;
		      if (_TC != Cyc_Absyn_EffKind) { goto _TL5F;
		      }
		      goto _TL5B;
		      _TL5F: _TD = Cyc_Unify_unify(t,t2);
		      if (_TD) { goto _TL63;
		      }else { goto _TL64;
		      }
		      _TL64: _TE = Cyc_Toc_typ_to_c(t);
		      _TF = Cyc_Toc_typ_to_c(t2);
		      _T10 = Cyc_Unify_unify(_TE,_TF);
		      if (_T10) { goto _TL63;
		      }else { goto _TL61;
		      }
		      _TL63: goto _TL5B;
		      _TL61: okay = 0;
		      goto _LL6;
		      _LL6: ;
		    }goto _TL5D;
		  }
		}_TL5B: _T11 = ts;
		ts = _T11->tl;
		_T12 = ts2;
		ts2 = _T12->tl;
		goto _TL5E;
		_TL5D: ;
	      }_T13 = okay;
	      if (! _T13) { goto _TL65;
	      }
	      _T14 = t;
	      return _T14;
	      _TL65: ;
	    }goto _TL5A;
	    _TL59: _TL5A: ;
	  }
	}_T15 = tts;
	tts = _T15->tl;
	goto _TL58;
	_TL57: ;
      }{ struct _fat_ptr * xname;
	xname = _cycalloc(sizeof(struct _fat_ptr));
	_T16 = xname;
	{ struct Cyc_Int_pa_PrintArg_struct _T43;
	  _T43.tag = 1;
	  _T19 = Cyc_Toc_tuple_type_counter;
	  Cyc_Toc_tuple_type_counter = _T19 + 1;
	  _T1A = _T19;
	  _T43.f1 = (unsigned long)_T1A;
	  _T18 = _T43;
	}{ struct Cyc_Int_pa_PrintArg_struct _T43 = _T18;
	  void * _T44[1];
	  _T44[0] = &_T43;
	  _T1B = _tag_fat("_tuple%d",sizeof(char),9U);
	  _T1C = _tag_fat(_T44,sizeof(void *),1);
	  _T17 = Cyc_aprintf(_T1B,_T1C);
	}*_T16 = _T17;
	{ void * x = Cyc_Absyn_strct(xname);
	  struct Cyc_List_List * fs = 0;
	  _T1D = abs_struct_types;
	  _T1F = d;
	  { struct Cyc_List_List * _T43 = _region_malloc(_T1F,0U,sizeof(struct Cyc_List_List));
	    _T21 = d;
	    { struct _tuple32 * _T44 = _region_malloc(_T21,0U,sizeof(struct _tuple32));
	      _T44->f0 = struct_name;
	      _T44->f1 = type_args;
	      _T44->f2 = x;
	      _T20 = (struct _tuple32 *)_T44;
	    }_T43->hd = _T20;
	    _T22 = abs_struct_types;
	    _T43->tl = *_T22;
	    _T1E = (struct Cyc_List_List *)_T43;
	  }*_T1D = _T1E;
	  { struct _RegionHandle _T43 = _new_region(0U,"r");
	    struct _RegionHandle * r = &_T43;
	    _push_region(r);
	    { struct Cyc_List_List * inst = Cyc_List_rzip(r,r,type_vars,type_args);
	      _TL6A: if (fields != 0) { goto _TL68;
	      }else { goto _TL69;
	      }
	      _TL68: _T23 = fields;
	      _T24 = _T23->hd;
	      { struct Cyc_Absyn_Aggrfield * f = (struct Cyc_Absyn_Aggrfield *)_T24;
		_T25 = f;
		{ void * t = _T25->type;
		  _T26 = f;
		  { struct Cyc_List_List * atts = _T26->attributes;
		    _T27 = fields;
		    _T28 = _T27->tl;
		    if (_T28 != 0) { goto _TL6B;
		    }
		    _T29 = &Cyc_Kinds_ak;
		    _T2A = (struct Cyc_Absyn_Kind *)_T29;
		    _T2B = Cyc_Tcutil_type_kind(t);
		    _T2C = Cyc_Kinds_kind_leq(_T2A,_T2B);
		    if (! _T2C) { goto _TL6B;
		    }
		    _T2D = Cyc_Tcutil_is_array_type(t);
		    if (_T2D) { goto _TL6B;
		    }else { goto _TL6D;
		    }
		    _TL6D: { struct Cyc_List_List * _T44 = _cycalloc(sizeof(struct Cyc_List_List));
		      { struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T45 = _cycalloc(sizeof(struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct));
			_T45->tag = 7;
			_T45->f1 = 0;
			_T2F = (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct *)_T45;
		      }_T44->hd = (void *)_T2F;
		      _T44->tl = atts;
		      _T2E = (struct Cyc_List_List *)_T44;
		    }atts = _T2E;
		    goto _TL6C;
		    _TL6B: _TL6C: _T30 = Cyc_Tcutil_rsubstitute(r,inst,t);
		    t = Cyc_Toc_typ_to_c(_T30);
		    _T31 = Cyc_Unify_unify(t,Cyc_Absyn_void_type);
		    if (! _T31) { goto _TL6E;
		    }
		    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T44 = _cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));
		      _T44->tag = 5;
		      (_T44->f1).elt_type = Cyc_Toc_void_star_type();
		      (_T44->f1).tq = Cyc_Toc_mt_tq;
		      _T33 = Cyc_Absyn_uint_exp(0U,0U);
		      _T34 = Cyc_Absyn_uint_type;
		      (_T44->f1).num_elts = Cyc_Absyn_set_type(_T33,_T34);
		      (_T44->f1).zero_term = Cyc_Absyn_false_type;
		      (_T44->f1).zt_loc = 0U;
		      _T32 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T44;
		    }t = (void *)_T32;
		    goto _TL6F;
		    _TL6E: _TL6F: { struct Cyc_List_List * _T44 = _cycalloc(sizeof(struct Cyc_List_List));
		      { struct Cyc_Absyn_Aggrfield * _T45 = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
			_T37 = f;
			_T45->name = _T37->name;
			_T45->tq = Cyc_Toc_mt_tq;
			_T45->type = t;
			_T38 = f;
			_T45->width = _T38->width;
			_T45->attributes = atts;
			_T45->requires_clause = 0;
			_T36 = (struct Cyc_Absyn_Aggrfield *)_T45;
		      }_T44->hd = _T36;
		      _T44->tl = fs;
		      _T35 = (struct Cyc_List_List *)_T44;
		    }fs = _T35;
		  }
		}
	      }_T39 = fields;
	      fields = _T39->tl;
	      goto _TL6A;
	      _TL69: fs = Cyc_List_imp_rev(fs);
	      { struct Cyc_Absyn_Aggrdecl * sd = Cyc_Toc_make_c_struct_defn(xname,
									    fs);
		{ struct Cyc_List_List * _T44 = _cycalloc(sizeof(struct Cyc_List_List));
		  { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T45 = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
		    _T45->tag = 5;
		    _T45->f1 = sd;
		    _T3B = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T45;
		  }_T3C = (void *)_T3B;
		  _T44->hd = Cyc_Absyn_new_decl(_T3C,0U);
		  _T44->tl = Cyc_Toc_result_decls;
		  _T3A = (struct Cyc_List_List *)_T44;
		}Cyc_Toc_result_decls = _T3A;
		{ void * _T44 = x;
		  _npop_handler(0);
		  return _T44;
		}
	      }
	    }_pop_region();
	  }
	}
      }
    }
  }
}
static void * Cyc_Toc_add_struct_type(struct _tuple1 * struct_name,struct Cyc_List_List * type_vars,
				      struct Cyc_List_List * type_args,struct Cyc_List_List * fields) {
  struct _tuple30 _T0;
  void * (* _T1)(struct _tuple30 *,void * (*)(struct _RegionHandle *,struct _tuple31 *));
  struct _tuple30 * _T2;
  void * _T3;
  { struct _tuple30 _T4;
    _T4.f0 = struct_name;
    _T4.f1 = type_vars;
    _T4.f2 = type_args;
    _T4.f3 = fields;
    _T0 = _T4;
  }{ struct _tuple30 env = _T0;
    { void * (* _T4)(struct _tuple30 *,void * (*)(struct _RegionHandle *,
						  struct _tuple31 *)) = (void * (*)(struct _tuple30 *,
										    void * (*)(struct _RegionHandle *,
											       struct _tuple31 *)))Cyc_Toc_use_toc_state;
      _T1 = _T4;
    }_T2 = &env;
    _T3 = _T1(_T2,Cyc_Toc_add_struct_type_body);
    return _T3;
  }
}
struct _tuple1 * Cyc_Toc_temp_var() {
  struct _tuple1 * _T0;
  struct _fat_ptr * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Int_pa_PrintArg_struct _T3;
  int _T4;
  int _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  { struct _tuple1 * _T8 = _cycalloc(sizeof(struct _tuple1));
    _T8->f0 = Cyc_Absyn_Loc_n();
    { struct _fat_ptr * _T9 = _cycalloc(sizeof(struct _fat_ptr));
      { struct Cyc_Int_pa_PrintArg_struct _TA;
	_TA.tag = 1;
	_T4 = Cyc_Toc_temp_var_counter;
	Cyc_Toc_temp_var_counter = _T4 + 1;
	_T5 = _T4;
	_TA.f1 = (unsigned int)_T5;
	_T3 = _TA;
      }{ struct Cyc_Int_pa_PrintArg_struct _TA = _T3;
	void * _TB[1];
	_TB[0] = &_TA;
	_T6 = _tag_fat("_tmp%X",sizeof(char),7U);
	_T7 = _tag_fat(_TB,sizeof(void *),1);
	_T2 = Cyc_aprintf(_T6,_T7);
      }*_T9 = _T2;
      _T1 = (struct _fat_ptr *)_T9;
    }_T8->f1 = _T1;
    _T0 = (struct _tuple1 *)_T8;
  }return _T0;
}
 struct _tuple33 {
  struct _tuple1 * f0;
  struct Cyc_Absyn_Exp * f1;
};
struct _tuple33 Cyc_Toc_temp_var_and_exp() {
  struct _tuple33 _T0;
  struct _tuple1 * v = Cyc_Toc_temp_var();
  { struct _tuple33 _T1;
    _T1.f0 = v;
    _T1.f1 = Cyc_Absyn_var_exp(v,0U);
    _T0 = _T1;
  }return _T0;
}
 struct _tuple34 {
  struct Cyc_Toc_TocState * f0;
  int f1;
};
static struct _fat_ptr * Cyc_Toc_fresh_label_body(struct _RegionHandle * d,
						  struct _tuple34 * env) {
  struct _tuple34 * _T0;
  struct Cyc_Toc_TocState * _T1;
  int _T2;
  int _T3;
  int _T4;
  struct _fat_ptr * (* _T5)(struct Cyc_Xarray_Xarray *,int);
  void * (* _T6)(struct Cyc_Xarray_Xarray *,int);
  struct _fat_ptr * _T7;
  struct _fat_ptr * _T8;
  struct _fat_ptr _T9;
  struct Cyc_Int_pa_PrintArg_struct _TA;
  int _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  int (* _TE)(struct Cyc_Xarray_Xarray *,struct _fat_ptr *);
  int (* _TF)(struct Cyc_Xarray_Xarray *,void *);
  int _T10;
  int _T11;
  struct Cyc_Warn_String_Warn_Warg_struct _T12;
  int (* _T13)(struct _fat_ptr ap);
  struct _fat_ptr _T14;
  struct _fat_ptr * _T15;
  _T0 = env;
  { struct _tuple34 _T16 = *_T0;
    struct Cyc_Xarray_Xarray * _T17;
    _T1 = _T16.f0;
    { struct Cyc_Toc_TocState _T18 = *_T1;
      _T17 = _T18.temp_labels;
    }{ struct Cyc_Xarray_Xarray * temp_labels = _T17;
      _T2 = Cyc_Toc_fresh_label_counter;
      Cyc_Toc_fresh_label_counter = _T2 + 1;
      { int i = _T2;
	_T3 = i;
	_T4 = Cyc_Xarray_length(temp_labels);
	if (_T3 >= _T4) { goto _TL70;
	}
	_T6 = Cyc_Xarray_get;
	{ struct _fat_ptr * (* _T18)(struct Cyc_Xarray_Xarray *,int) = (struct _fat_ptr * (*)(struct Cyc_Xarray_Xarray *,
											      int))_T6;
	  _T5 = _T18;
	}_T7 = _T5(temp_labels,i);
	return _T7;
	_TL70: { struct _fat_ptr * res;
	  res = _cycalloc(sizeof(struct _fat_ptr));
	  _T8 = res;
	  { struct Cyc_Int_pa_PrintArg_struct _T18;
	    _T18.tag = 1;
	    _TB = i;
	    _T18.f1 = (unsigned int)_TB;
	    _TA = _T18;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T18 = _TA;
	    void * _T19[1];
	    _T19[0] = &_T18;
	    _TC = _tag_fat("_LL%X",sizeof(char),6U);
	    _TD = _tag_fat(_T19,sizeof(void *),1);
	    _T9 = Cyc_aprintf(_TC,_TD);
	  }*_T8 = _T9;
	  _TF = Cyc_Xarray_add_ind;
	  { int (* _T18)(struct Cyc_Xarray_Xarray *,struct _fat_ptr *) = (int (*)(struct Cyc_Xarray_Xarray *,
										  struct _fat_ptr *))_TF;
	    _TE = _T18;
	  }_T10 = _TE(temp_labels,res);
	  _T11 = i;
	  if (_T10 == _T11) { goto _TL72;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T18;
	    _T18.tag = 0;
	    _T18.f1 = _tag_fat("fresh_label: add_ind returned bad index...",
			       sizeof(char),43U);
	    _T12 = _T18;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T18 = _T12;
	    void * _T19[1];
	    _T19[0] = &_T18;
	    { int (* _T1A)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	      _T13 = _T1A;
	    }_T14 = _tag_fat(_T19,sizeof(void *),1);
	    _T13(_T14);
	  }goto _TL73;
	  _TL72: _TL73: _T15 = res;
	  return _T15;
	}
      }
    }
  }
}
static struct _fat_ptr * Cyc_Toc_fresh_label() {
  struct _fat_ptr * (* _T0)(int,struct _fat_ptr * (*)(struct _RegionHandle *,
						      struct _tuple34 *));
  struct _fat_ptr * _T1;
  { struct _fat_ptr * (* _T2)(int,struct _fat_ptr * (*)(struct _RegionHandle *,
							struct _tuple34 *)) = (struct _fat_ptr * (*)(int,
												     struct _fat_ptr * (*)(struct _RegionHandle *,
															   struct _tuple34 *)))Cyc_Toc_use_toc_state;
    _T0 = _T2;
  }_T1 = _T0(0,Cyc_Toc_fresh_label_body);
  return _T1;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_datatype_tag(struct Cyc_Absyn_Datatypedecl * td,
						   struct _tuple1 * name) {
  struct Cyc_Absyn_Datatypedecl * _T0;
  struct Cyc_Core_Opt * _T1;
  struct Cyc_Core_Opt * _T2;
  void * _T3;
  struct _tuple1 * _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  struct Cyc_Absyn_Datatypefield * _T7;
  struct _tuple1 * _T8;
  int _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_Absyn_Exp * _TB;
  void * _TC;
  struct Cyc_Absyn_Exp * _TD;
  int ans = 0;
  _T0 = td;
  _T1 = _T0->fields;
  _T2 = _check_null(_T1);
  _T3 = _T2->v;
  { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T3;
    _TL77: _T4 = name;
    _T5 = _check_null(fs);
    _T6 = _T5->hd;
    _T7 = (struct Cyc_Absyn_Datatypefield *)_T6;
    _T8 = _T7->name;
    _T9 = Cyc_Absyn_qvar_cmp(_T4,_T8);
    if (_T9 != 0) { goto _TL75;
    }else { goto _TL76;
    }
    _TL75: ans = ans + 1;
    _TA = fs;
    fs = _TA->tl;
    goto _TL77;
    _TL76: ;
  }_TB = Cyc_Absyn_signed_int_exp(ans,0U);
  _TC = Cyc_Absyn_sint_type;
  _TD = Cyc_Absyn_set_type(_TB,_TC);
  return _TD;
}
static void Cyc_Toc_enumdecl_to_c(struct Cyc_Absyn_Enumdecl *);
static void Cyc_Toc_aggrdecl_to_c(struct Cyc_Absyn_Aggrdecl *);
static void Cyc_Toc_datatypedecl_to_c(struct Cyc_Absyn_Datatypedecl *);
static void Cyc_Toc_exptypes_to_c(struct Cyc_Absyn_Exp *);
static void Cyc_Toc_stmttypes_to_c(struct Cyc_Absyn_Stmt *);
static struct _tuple9 * Cyc_Toc_arg_to_c(struct _tuple9 * a) {
  struct _tuple9 * _T0;
  struct _tuple9 * _T1;
  struct _tuple9 _T2;
  struct _tuple9 * _T3;
  struct _tuple9 _T4;
  void * _T5;
  { struct _tuple9 * _T6 = _cycalloc(sizeof(struct _tuple9));
    _T6->f0 = 0;
    _T1 = a;
    _T2 = *_T1;
    _T6->f1 = _T2.f1;
    _T3 = a;
    _T4 = *_T3;
    _T5 = _T4.f2;
    _T6->f2 = Cyc_Toc_typ_to_c(_T5);
    _T0 = (struct _tuple9 *)_T6;
  }return _T0;
}
static void * Cyc_Toc_typ_to_c_array(void * t) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_ArrayInfo _T2;
  void * _T3;
  void * _T4;
  struct Cyc_Absyn_ArrayInfo _T5;
  struct Cyc_Absyn_Tqual _T6;
  void * _T7;
  void * _T8;
  void * _T9 = Cyc_Absyn_compress(t);
  struct Cyc_Absyn_ArrayInfo _TA;
  _T0 = (int *)_T9;
  _T1 = *_T0;
  if (_T1 != 5) { goto _TL78;
  }
  { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _TB = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T9;
    _TA = _TB->f1;
  }{ struct Cyc_Absyn_ArrayInfo ai = _TA;
    _T2 = ai;
    _T3 = _T2.elt_type;
    _T4 = Cyc_Toc_typ_to_c_array(_T3);
    _T5 = ai;
    _T6 = _T5.tq;
    _T7 = Cyc_Absyn_cstar_type(_T4,_T6);
    return _T7;
  }_TL78: _T8 = Cyc_Toc_typ_to_c(t);
  return _T8;
  ;
}
static struct Cyc_Absyn_Aggrfield * Cyc_Toc_aggrfield_to_c(struct Cyc_Absyn_Aggrfield * f,
							   void * new_type) {
  struct Cyc_Absyn_Aggrfield * _T0;
  struct Cyc_Absyn_Aggrfield * _T1;
  struct Cyc_Absyn_Aggrfield * _T2;
  struct Cyc_Absyn_Aggrfield * _T3;
  struct Cyc_Absyn_Aggrfield * _T4;
  struct Cyc_Absyn_Aggrfield * _T5;
  struct Cyc_Absyn_Aggrfield * ans;
  ans = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
  _T0 = ans;
  _T1 = f;
  *_T0 = *_T1;
  _T2 = ans;
  _T2->type = new_type;
  _T3 = ans;
  _T3->requires_clause = 0;
  _T4 = ans;
  _T4->tq = Cyc_Toc_mt_tq;
  _T5 = ans;
  return _T5;
}
static void Cyc_Toc_enumfields_to_c(struct Cyc_List_List * fs) {
  return;
}
static long Cyc_Toc_is_boxed_tvar(void * t) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_Kind * _T2;
  struct Cyc_Absyn_Kind * _T3;
  struct Cyc_Absyn_Kind * _T4;
  long _T5;
  void * _T6 = Cyc_Absyn_compress(t);
  struct Cyc_Absyn_Tvar * _T7;
  _T0 = (int *)_T6;
  _T1 = *_T0;
  if (_T1 != 2) { goto _TL7A;
  }
  { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T8 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T6;
    _T7 = _T8->f1;
  }{ struct Cyc_Absyn_Tvar * tv = _T7;
    _T2 = Cyc_Tcutil_type_kind(t);
    _T3 = &Cyc_Kinds_bk;
    _T4 = (struct Cyc_Absyn_Kind *)_T3;
    _T5 = Cyc_Kinds_kind_leq(_T2,_T4);
    return _T5;
  }_TL7A: return 0;
  ;
}
static long Cyc_Toc_is_abstract_type(void * t) {
  struct Cyc_Absyn_Kind * _T0;
  enum Cyc_Absyn_KindQual _T1;
  struct Cyc_Absyn_Kind * _T2 = Cyc_Tcutil_type_kind(t);
  _T0 = (struct Cyc_Absyn_Kind *)_T2;
  _T1 = _T0->kind;
  if (_T1 != Cyc_Absyn_AnyKind) { goto _TL7C;
  }
  return 1;
  _TL7C: return 0;
  ;
}
static long Cyc_Toc_is_void_star(void * t) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_PtrInfo _T2;
  long _T3;
  void * _T4 = Cyc_Absyn_compress(t);
  void * _T5;
  _T0 = (int *)_T4;
  _T1 = *_T0;
  if (_T1 != 4) { goto _TL7E;
  }
  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T6 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T4;
    _T2 = _T6->f1;
    _T5 = _T2.elt_type;
  }{ void * t2 = _T5;
    _T3 = Cyc_Tcutil_is_void_type(t2);
    return _T3;
  }_TL7E: return 0;
  ;
}
static long Cyc_Toc_is_void_star_or_boxed_tvar(void * t) {
  int _T0;
  long _T1;
  _T1 = Cyc_Toc_is_void_star(t);
  if (! _T1) { goto _TL80;
  }
  _T0 = 1;
  goto _TL81;
  _TL80: _T0 = Cyc_Toc_is_boxed_tvar(t);
  _TL81: return _T0;
}
static long Cyc_Toc_is_pointer_or_boxed_tvar(void * t) {
  int _T0;
  long _T1;
  _T1 = Cyc_Tcutil_is_pointer_type(t);
  if (! _T1) { goto _TL82;
  }
  _T0 = 1;
  goto _TL83;
  _TL82: _T0 = Cyc_Toc_is_boxed_tvar(t);
  _TL83: return _T0;
}
void * Cyc_Toc_typ_to_c(void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T4;
  void * _T5;
  int * _T6;
  unsigned int _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB;
  void * _TC;
  struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _TD;
  union Cyc_Absyn_DatatypeFieldInfo _TE;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _TF;
  unsigned int _T10;
  void * _T11;
  void * _T12;
  union Cyc_Absyn_DatatypeFieldInfo _T13;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T14;
  struct _tuple2 _T15;
  union Cyc_Absyn_DatatypeFieldInfo _T16;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T17;
  struct _tuple2 _T18;
  struct Cyc_Absyn_Datatypefield * _T19;
  struct _tuple1 * _T1A;
  struct Cyc_Absyn_Datatypedecl * _T1B;
  struct _tuple1 * _T1C;
  struct _tuple1 * _T1D;
  void * _T1E;
  struct Cyc_Warn_String_Warn_Warg_struct _T1F;
  int (* _T20)(struct _fat_ptr ap);
  struct _fat_ptr _T21;
  void * _T22;
  void * _T23;
  void * _T24;
  union Cyc_Absyn_AggrInfo _T25;
  struct _union_AggrInfo_UnknownAggr _T26;
  unsigned int _T27;
  void * _T28;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T29;
  struct Cyc_Absyn_Aggrdecl * _T2A;
  long _T2B;
  struct Cyc_Absyn_Aggrdecl * _T2C;
  struct Cyc_Absyn_AggrdeclImpl * _T2D;
  struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T2E;
  struct Cyc_Warn_String_Warn_Warg_struct _T2F;
  struct _fat_ptr _T30;
  struct Cyc_Absyn_Aggrdecl * _T31;
  enum Cyc_Absyn_AggrKind _T32;
  int _T33;
  struct Cyc_Absyn_Aggrdecl * _T34;
  struct _tuple1 * _T35;
  void * (* _T36)(struct _tuple1 *);
  void * _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_Absyn_Aggrdecl * _T39;
  struct Cyc_Absyn_AggrdeclImpl * _T3A;
  struct Cyc_Absyn_Aggrdecl * _T3B;
  struct Cyc_Absyn_AggrdeclImpl * _T3C;
  struct Cyc_Absyn_Aggrdecl * _T3D;
  struct _tuple1 * _T3E;
  void * (* _T3F)(struct _tuple1 *);
  void * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_List_List * _T42;
  struct Cyc_List_List * _T43;
  struct Cyc_List_List * _T44;
  void * _T45;
  struct Cyc_Absyn_Aggrfield * _T46;
  struct Cyc_Absyn_Kind * _T47;
  struct Cyc_Absyn_Kind * _T48;
  struct Cyc_Absyn_Kind * _T49;
  long _T4A;
  struct Cyc_Absyn_Aggrdecl * _T4B;
  long _T4C;
  struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T4D;
  struct Cyc_Warn_String_Warn_Warg_struct _T4E;
  struct _fat_ptr _T4F;
  struct _RegionHandle * _T50;
  struct _RegionHandle * _T51;
  struct Cyc_Absyn_Aggrdecl * _T52;
  struct Cyc_List_List * _T53;
  struct Cyc_List_List * _T54;
  long _T55;
  struct Cyc_Absyn_Aggrdecl * _T56;
  struct _tuple1 * _T57;
  void * (* _T58)(struct _tuple1 *);
  struct Cyc_Absyn_Aggrdecl * _T59;
  struct _tuple1 * _T5A;
  struct Cyc_Absyn_Aggrdecl * _T5B;
  struct Cyc_List_List * _T5C;
  struct Cyc_List_List * _T5D;
  struct Cyc_Absyn_Aggrdecl * _T5E;
  struct Cyc_Absyn_AggrdeclImpl * _T5F;
  struct Cyc_List_List * _T60;
  struct Cyc_Absyn_Aggrdecl * _T61;
  struct _tuple1 * _T62;
  void * (* _T63)(struct _tuple1 *);
  void * _T64;
  void * _T65;
  void * _T66;
  void * _T67;
  void * _T68;
  void * _T69;
  void * _T6A;
  void * _T6B;
  void * _T6C;
  void * _T6D;
  void * _T6E;
  void * _T6F;
  void * _T70;
  void * _T71;
  void * _T72;
  void * _T73;
  struct Cyc_Absyn_Evar_Absyn_Type_struct * _T74;
  void * * _T75;
  void * * _T76;
  void * _T77;
  void * * _T78;
  void * _T79;
  void * _T7A;
  void * * _T7B;
  void * _T7C;
  void * _T7D;
  struct Cyc_Absyn_Tvar * _T7E;
  struct Cyc_Absyn_Kind * _T7F;
  struct Cyc_Absyn_Kind * _T80;
  struct Cyc_Absyn_Kind * _T81;
  enum Cyc_Absyn_KindQual _T82;
  int _T83;
  void * _T84;
  void * _T85;
  void * _T86;
  struct Cyc_Absyn_PtrInfo _T87;
  struct Cyc_Absyn_PtrInfo _T88;
  struct Cyc_Absyn_PtrInfo _T89;
  struct Cyc_Absyn_PtrAtts _T8A;
  void * _T8B;
  void * _T8C;
  struct Cyc_Absyn_Exp * _T8D;
  void * _T8E;
  void * _T8F;
  void * _T90;
  struct Cyc_Absyn_ArrayInfo _T91;
  struct Cyc_Absyn_ArrayInfo _T92;
  struct Cyc_Absyn_ArrayInfo _T93;
  struct Cyc_Absyn_ArrayInfo _T94;
  void * _T95;
  struct Cyc_Absyn_Tqual _T96;
  struct Cyc_Absyn_Exp * _T97;
  void * _T98;
  unsigned int _T99;
  void * _T9A;
  void * _T9B;
  struct Cyc_Absyn_FnInfo _T9C;
  struct Cyc_Absyn_FnInfo _T9D;
  struct Cyc_Absyn_FnInfo _T9E;
  struct Cyc_Absyn_FnInfo _T9F;
  struct Cyc_Absyn_FnInfo _TA0;
  struct Cyc_Absyn_FnInfo _TA1;
  struct Cyc_List_List * (* _TA2)(struct _tuple9 * (*)(struct _tuple9 *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _TA3)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _TA4;
  struct Cyc_Absyn_VarargInfo * _TA5;
  void * _TA6;
  void * _TA7;
  void * _TA8;
  struct Cyc_Absyn_Tqual _TA9;
  void * _TAA;
  void * _TAB;
  void * _TAC;
  struct _tuple9 * _TAD;
  struct Cyc_Absyn_VarargInfo * _TAE;
  struct _tuple9 * _TAF;
  struct Cyc_Absyn_VarargInfo * _TB0;
  struct _tuple9 * _TB1;
  struct Cyc_List_List * _TB2;
  struct Cyc_List_List * _TB3;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _TB4;
  void * _TB5;
  void * _TB6;
  struct Cyc_List_List * _TB7;
  struct Cyc_List_List * _TB8;
  void * _TB9;
  struct Cyc_Absyn_Aggrfield * _TBA;
  struct Cyc_List_List * _TBB;
  void * _TBC;
  struct Cyc_Absyn_Aggrfield * _TBD;
  void * _TBE;
  void * _TBF;
  struct Cyc_List_List * _TC0;
  enum Cyc_Absyn_AggrKind _TC1;
  struct Cyc_List_List * _TC2;
  void * _TC3;
  void * _TC4;
  void * _TC5;
  void * _TC6;
  struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _TC7;
  struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _TC8;
  void * _TC9;
  void * _TCA;
  void * _TCB;
  void * _TCC;
  void * _TCD;
  struct Cyc_Absyn_Exp * _TCE;
  void * _TCF;
  struct Cyc_Absyn_Exp * _TD0;
  void * _TD1;
  void * _TD2;
  struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _TD3;
  struct Cyc_Absyn_TypeDecl * _TD4;
  struct Cyc_Absyn_TypeDecl * _TD5;
  void * _TD6;
  int * _TD7;
  unsigned int _TD8;
  void * _TD9;
  struct Cyc_Absyn_TypeDecl * _TDA;
  void * _TDB;
  struct Cyc_Absyn_Aggrdecl * _TDC;
  struct _tuple1 * _TDD;
  void * (* _TDE)(struct _tuple1 *);
  struct Cyc_Absyn_Aggrdecl * _TDF;
  enum Cyc_Absyn_AggrKind _TE0;
  int _TE1;
  void * _TE2;
  void * _TE3;
  struct Cyc_Absyn_TypeDecl * _TE4;
  void * _TE5;
  void * _TE6;
  void * _TE7;
  struct Cyc_Absyn_TypeDecl * _TE8;
  void * _TE9;
  void * * _TEA;
  void * _TEB;
  void * _TEC;
  void * _TED;
  struct Cyc_Absyn_Vardecl * _TEE;
  void * _TEF;
  void * _TF0;
  struct Cyc_Absyn_Vardecl * _TF1;
  void * * _TF2;
  struct Cyc_Absyn_Datatypedecl * _TF3;
  struct Cyc_Absyn_Enumdecl * _TF4;
  struct Cyc_Absyn_Aggrdecl * _TF5;
  struct Cyc_Absyn_Typedefdecl * _TF6;
  struct _tuple1 * _TF7;
  enum Cyc_Absyn_AggrKind _TF8;
  struct Cyc_List_List * _TF9;
  struct Cyc_Absyn_VarargInfo * _TFA;
  long _TFB;
  struct Cyc_List_List * _TFC;
  unsigned int _TFD;
  struct Cyc_Absyn_Exp * _TFE;
  struct Cyc_Absyn_Tqual _TFF;
  union Cyc_Absyn_AggrInfo _T100;
  void * _T101;
  void * _T102;
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
    case 0: 
      _T8 = t;
      return _T8;
    case 22: 
      _T9 = Cyc_Absyn_void_type;
      return _T9;
    case 23: 
      _TA = t;
      _TB = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA;
      _TC = _TB->f1;
      _TD = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_TC;
      _TE = _TD->f1;
      _TF = _TE.KnownDatatypefield;
      _T10 = _TF.tag;
      if (_T10 != 2) { goto _TL86;
      }
      _T11 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11;
	_T12 = _T103->f1;
	{ struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _T104 = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_T12;
	  _T13 = _T104->f1;
	  _T14 = _T13.KnownDatatypefield;
	  _T15 = _T14.val;
	  _T102 = _T15.f0;
	  _T16 = _T104->f1;
	  _T17 = _T16.KnownDatatypefield;
	  _T18 = _T17.val;
	  _T101 = _T18.f1;
	}
      }{ struct Cyc_Absyn_Datatypedecl * tud = _T102;
	struct Cyc_Absyn_Datatypefield * tuf = _T101;
	_T19 = tuf;
	_T1A = _T19->name;
	_T1B = tud;
	_T1C = _T1B->name;
	_T1D = Cyc_Toc_collapse_qvars(_T1A,_T1C);
	_T1E = Cyc_Absyn_strctq(_T1D);
	return _T1E;
      }_TL86: { struct Cyc_Warn_String_Warn_Warg_struct _T103;
	_T103.tag = 0;
	_T103.f1 = _tag_fat("unresolved DatatypeFieldType",sizeof(char),29U);
	_T1F = _T103;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T103 = _T1F;
	void * _T104[1];
	_T104[0] = &_T103;
	{ int (* _T105)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	  _T20 = _T105;
	}_T21 = _tag_fat(_T104,sizeof(void *),1);
	_T20(_T21);
      };
    case 1: 
      goto _LL14;
    case 2: 
      _LL14: _T22 = t;
      return _T22;
    case 24: 
      _T23 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T23;
	_T24 = _T103->f1;
	_T102 = (void *)_T24;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T104 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T102;
	  _T100 = _T104->f1;
	}_T101 = _T103->f2;
      }{ void * c = _T102;
	union Cyc_Absyn_AggrInfo info = _T100;
	struct Cyc_List_List * ts = _T101;
	_T25 = info;
	_T26 = _T25.UnknownAggr;
	_T27 = _T26.tag;
	if (_T27 != 1) { goto _TL88;
	}
	if (ts != 0) { goto _TL8A;
	}
	_T28 = t;
	goto _TL8B;
	_TL8A: { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T103 = _cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));
	  _T103->tag = 0;
	  _T103->f1 = c;
	  _T103->f2 = 0;
	  _T29 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T103;
	}_T28 = (void *)_T29;
	_TL8B: return _T28;
	_TL88: goto _LL3B;
	_LL3B: { struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
	  _T2A = ad;
	  _T2B = _T2A->expected_mem_kind;
	  if (! _T2B) { goto _TL8C;
	  }
	  _T2C = ad;
	  _T2D = _T2C->impl;
	  if (_T2D != 0) { goto _TL8C;
	  }
	  { struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T103;
	    _T103.tag = 6;
	    _T103.f1 = ad;
	    _T2E = _T103;
	  }{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T103 = _T2E;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T104;
	      _T104.tag = 0;
	      _T104.f1 = _tag_fat(" was never defined.",sizeof(char),20U);
	      _T2F = _T104;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T104 = _T2F;
	      void * _T105[2];
	      _T105[0] = &_T103;
	      _T105[1] = &_T104;
	      _T30 = _tag_fat(_T105,sizeof(void *),2);
	      Cyc_Warn_warn2(0U,_T30);
	    }
	  }goto _TL8D;
	  _TL8C: _TL8D: _T31 = ad;
	  _T32 = _T31->kind;
	  _T33 = (int)_T32;
	  if (_T33 != 1) { goto _TL8E;
	  }
	  _T34 = ad;
	  _T35 = _T34->name;
	  _T36 = Cyc_Absyn_unionq_type;
	  _T37 = Cyc_Toc_aggrdecl_type(_T35,_T36);
	  return _T37;
	  _TL8E: _T39 = ad;
	  _T3A = _T39->impl;
	  if (_T3A != 0) { goto _TL90;
	  }
	  _T38 = 0;
	  goto _TL91;
	  _TL90: _T3B = ad;
	  _T3C = _T3B->impl;
	  _T38 = _T3C->fields;
	  _TL91: { struct Cyc_List_List * fs = _T38;
	    if (fs != 0) { goto _TL92;
	    }
	    _T3D = ad;
	    _T3E = _T3D->name;
	    _T3F = Cyc_Absyn_strctq;
	    _T40 = Cyc_Toc_aggrdecl_type(_T3E,_T3F);
	    return _T40;
	    _TL92: _TL97: _T41 = fs;
	    _T42 = _T41->tl;
	    if (_T42 != 0) { goto _TL95;
	    }else { goto _TL96;
	    }
	    _TL95: _T43 = fs;
	    fs = _T43->tl;
	    goto _TL97;
	    _TL96: _T44 = fs;
	    _T45 = _T44->hd;
	    _T46 = (struct Cyc_Absyn_Aggrfield *)_T45;
	    { void * last_type = _T46->type;
	      _T47 = &Cyc_Kinds_ak;
	      _T48 = (struct Cyc_Absyn_Kind *)_T47;
	      _T49 = Cyc_Tcutil_type_kind(last_type);
	      _T4A = Cyc_Kinds_kind_leq(_T48,_T49);
	      if (! _T4A) { goto _TL98;
	      }
	      _T4B = ad;
	      _T4C = _T4B->expected_mem_kind;
	      if (! _T4C) { goto _TL9A;
	      }
	      { struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T103;
		_T103.tag = 6;
		_T103.f1 = ad;
		_T4D = _T103;
	      }{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T103 = _T4D;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T104;
		  _T104.tag = 0;
		  _T104.f1 = _tag_fat(" ended up being abstract.",sizeof(char),
				      26U);
		  _T4E = _T104;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T104 = _T4E;
		  void * _T105[2];
		  _T105[0] = &_T103;
		  _T105[1] = &_T104;
		  _T4F = _tag_fat(_T105,sizeof(void *),2);
		  Cyc_Warn_warn2(0U,_T4F);
		}
	      }goto _TL9B;
	      _TL9A: _TL9B: { struct _RegionHandle _T103 = _new_region(0U,
								       "r");
		struct _RegionHandle * r = &_T103;
		_push_region(r);
		_T50 = r;
		_T51 = r;
		_T52 = ad;
		_T53 = _T52->tvs;
		_T54 = ts;
		{ struct Cyc_List_List * inst = Cyc_List_rzip(_T50,_T51,_T53,
							      _T54);
		  void * t = Cyc_Tcutil_rsubstitute(r,inst,last_type);
		  _T55 = Cyc_Toc_is_abstract_type(t);
		  if (! _T55) { goto _TL9C;
		  }
		  _T56 = ad;
		  _T57 = _T56->name;
		  _T58 = Cyc_Absyn_strctq;
		  { void * _T104 = Cyc_Toc_aggrdecl_type(_T57,_T58);
		    _npop_handler(0);
		    return _T104;
		  }_TL9C: _T59 = ad;
		  _T5A = _T59->name;
		  _T5B = ad;
		  _T5C = _T5B->tvs;
		  _T5D = ts;
		  _T5E = ad;
		  _T5F = _T5E->impl;
		  _T60 = _T5F->fields;
		  { void * _T104 = Cyc_Toc_add_struct_type(_T5A,_T5C,_T5D,
							   _T60);
		    _npop_handler(0);
		    return _T104;
		  }
		}_pop_region();
	      }goto _TL99;
	      _TL98: _TL99: _T61 = ad;
	      _T62 = _T61->name;
	      _T63 = Cyc_Absyn_strctq;
	      _T64 = Cyc_Toc_aggrdecl_type(_T62,_T63);
	      return _T64;
	    }
	  }
	}
      }
    case 19: 
      _T65 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T65;
	_T66 = _T103->f1;
	{ struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct * _T104 = (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct *)_T66;
	  _T102 = _T104->f1;
	}
      }{ struct _tuple1 * tdn = _T102;
	_T67 = t;
	return _T67;
      }
    case 20: 
      _T68 = t;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T68;
	_T69 = _T103->f1;
	{ struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct * _T104 = (struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct *)_T69;
	  _T102 = _T104->f1;
	}
      }{ struct Cyc_List_List * fs = _T102;
	Cyc_Toc_enumfields_to_c(fs);
	_T6A = t;
	return _T6A;
      }
    case 5: 
      _T6B = Cyc_Absyn_uint_type;
      return _T6B;
    case 4: 
      _T6C = Cyc_Toc_rgn_type();
      return _T6C;
    case 18: 
      _T6D = Cyc_Toc_aqualt_type();
      return _T6D;
    case 21: 
      _T6E = t;
      return _T6E;
    case 3: 
      _T6F = t;
      return _T6F;
    default: 
      _T70 = Cyc_Toc_void_star_type();
      return _T70;
    }
    ;
  case 3: 
    _T71 = Cyc_Toc_void_star_type();
    return _T71;
  case 1: 
    _T72 = t;
    { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T72;
      _T73 = t;
      _T74 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T73;
      _T75 = &_T74->f2;
      _T102 = (void * *)_T75;
    }{ void * * t2 = _T102;
      _T76 = t2;
      _T77 = *_T76;
      if (_T77 == 0) { goto _TL9E;
      }
      _T78 = t2;
      _T79 = *_T78;
      _T7A = Cyc_Toc_typ_to_c(_T79);
      return _T7A;
      _TL9E: _T7B = t2;
      *_T7B = Cyc_Toc_void_star_type();
      _T7C = *_T7B;
      return _T7C;
    }
  case 2: 
    _T7D = t;
    { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T7D;
      _T102 = _T103->f1;
    }{ struct Cyc_Absyn_Tvar * tv = _T102;
      _T7E = tv;
      _T7F = &Cyc_Kinds_bk;
      _T80 = (struct Cyc_Absyn_Kind *)_T7F;
      _T81 = Cyc_Kinds_tvar_kind(_T7E,_T80);
      _T82 = _T81->kind;
      _T83 = (int)_T82;
      if (_T83 != 0) { goto _TLA0;
      }
      _T84 = Cyc_Absyn_void_type;
      return _T84;
      _TLA0: _T85 = Cyc_Toc_void_star_type();
      return _T85;
    }
  case 4: 
    _T86 = t;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T86;
      _T87 = _T103->f1;
      _T102 = _T87.elt_type;
      _T88 = _T103->f1;
      _TFF = _T88.elt_tq;
      _T89 = _T103->f1;
      _T8A = _T89.ptr_atts;
      _T101 = _T8A.bounds;
    }{ void * t2 = _T102;
      struct Cyc_Absyn_Tqual tq = _TFF;
      void * bnds = _T101;
      t2 = Cyc_Toc_typ_to_c(t2);
      _T8B = Cyc_Absyn_bounds_one();
      _T8C = bnds;
      _T8D = Cyc_Tcutil_get_bounds_exp_constrain(_T8B,_T8C,1);
      if (_T8D != 0) { goto _TLA2;
      }
      _T8E = Cyc_Toc_fat_ptr_type();
      return _T8E;
      _TLA2: _T8F = Cyc_Absyn_star_type(t2,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,
					tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);
      return _T8F;
    }
  case 5: 
    _T90 = t;
    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T90;
      _T91 = _T103->f1;
      _T102 = _T91.elt_type;
      _T92 = _T103->f1;
      _TFF = _T92.tq;
      _T93 = _T103->f1;
      _TFE = _T93.num_elts;
      _T94 = _T103->f1;
      _TFD = _T94.zt_loc;
    }{ void * t2 = _T102;
      struct Cyc_Absyn_Tqual tq = _TFF;
      struct Cyc_Absyn_Exp * e = _TFE;
      unsigned int ztl = _TFD;
      _T95 = Cyc_Toc_typ_to_c(t2);
      _T96 = tq;
      _T97 = e;
      _T98 = Cyc_Absyn_false_type;
      _T99 = ztl;
      _T9A = Cyc_Absyn_array_type(_T95,_T96,_T97,_T98,_T99);
      return _T9A;
    }
  case 6: 
    _T9B = t;
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T9B;
      _T9C = _T103->f1;
      _TFF = _T9C.ret_tqual;
      _T9D = _T103->f1;
      _T102 = _T9D.ret_type;
      _T9E = _T103->f1;
      _TFC = _T9E.args;
      _T9F = _T103->f1;
      _TFB = _T9F.c_varargs;
      _TA0 = _T103->f1;
      _TFA = _TA0.cyc_varargs;
      _TA1 = _T103->f1;
      _TF9 = _TA1.attributes;
    }{ struct Cyc_Absyn_Tqual tq2 = _TFF;
      void * t2 = _T102;
      struct Cyc_List_List * args = _TFC;
      long c_vararg = _TFB;
      struct Cyc_Absyn_VarargInfo * cyc_vararg = _TFA;
      struct Cyc_List_List * atts = _TF9;
      struct Cyc_List_List * new_atts = Cyc_Atts_atts2c(atts);
      _TA3 = Cyc_List_map;
      { struct Cyc_List_List * (* _T103)(struct _tuple9 * (*)(struct _tuple9 *),
					 struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple9 * (*)(struct _tuple9 *),
											       struct Cyc_List_List *))_TA3;
	_TA2 = _T103;
      }_TA4 = args;
      { struct Cyc_List_List * new_args = _TA2(Cyc_Toc_arg_to_c,_TA4);
	if (cyc_vararg == 0) { goto _TLA4;
	}
	_TA5 = cyc_vararg;
	_TA6 = _TA5->type;
	_TA7 = Cyc_Absyn_heap_rgn_type;
	_TA8 = Cyc_Absyn_al_qual_type;
	_TA9 = Cyc_Toc_mt_tq;
	_TAA = Cyc_Absyn_false_type;
	_TAB = Cyc_Absyn_false_type;
	_TAC = Cyc_Absyn_fatptr_type(_TA6,_TA7,_TA8,_TA9,_TAA,_TAB);
	{ void * t = Cyc_Toc_typ_to_c(_TAC);
	  struct _tuple9 * vararg;
	  vararg = _cycalloc(sizeof(struct _tuple9));
	  _TAD = vararg;
	  _TAE = cyc_vararg;
	  _TAD->f0 = _TAE->name;
	  _TAF = vararg;
	  _TB0 = cyc_vararg;
	  _TAF->f1 = _TB0->tq;
	  _TB1 = vararg;
	  _TB1->f2 = t;
	  _TB2 = new_args;
	  { struct Cyc_List_List * _T103 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T103->hd = vararg;
	    _T103->tl = 0;
	    _TB3 = (struct Cyc_List_List *)_T103;
	  }new_args = Cyc_List_imp_append(_TB2,_TB3);
	}goto _TLA5;
	_TLA4: _TLA5: { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T103 = _cycalloc(sizeof(struct Cyc_Absyn_FnType_Absyn_Type_struct));
	  _T103->tag = 6;
	  (_T103->f1).tvars = 0;
	  (_T103->f1).effect = 0;
	  (_T103->f1).ret_tqual = tq2;
	  (_T103->f1).ret_type = Cyc_Toc_typ_to_c(t2);
	  (_T103->f1).args = new_args;
	  (_T103->f1).c_varargs = c_vararg;
	  (_T103->f1).cyc_varargs = 0;
	  (_T103->f1).qual_bnd = 0;
	  (_T103->f1).attributes = new_atts;
	  (_T103->f1).checks_clause = 0;
	  (_T103->f1).checks_assn = 0;
	  (_T103->f1).requires_clause = 0;
	  (_T103->f1).requires_assn = 0;
	  (_T103->f1).ensures_clause = 0;
	  (_T103->f1).ensures_assn = 0;
	  (_T103->f1).throws_clause = 0;
	  (_T103->f1).throws_assn = 0;
	  (_T103->f1).return_value = 0;
	  (_T103->f1).arg_vardecls = 0;
	  (_T103->f1).effconstr = 0;
	  _TB4 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T103;
	}_TB5 = (void *)_TB4;
	return _TB5;
      }
    }
  case 7: 
    _TB6 = t;
    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_TB6;
      _TF8 = _T103->f1;
      _TFC = _T103->f3;
    }{ enum Cyc_Absyn_AggrKind k = _TF8;
      struct Cyc_List_List * fs = _TFC;
      struct Cyc_List_List * fs2 = 0;
      _TLA9: if (fs != 0) { goto _TLA7;
      }else { goto _TLA8;
      }
      _TLA7: { struct Cyc_List_List * _T103 = _cycalloc(sizeof(struct Cyc_List_List));
	_TB8 = fs;
	_TB9 = _TB8->hd;
	_TBA = (struct Cyc_Absyn_Aggrfield *)_TB9;
	_TBB = fs;
	_TBC = _TBB->hd;
	_TBD = (struct Cyc_Absyn_Aggrfield *)_TBC;
	_TBE = _TBD->type;
	_TBF = Cyc_Toc_typ_to_c(_TBE);
	_T103->hd = Cyc_Toc_aggrfield_to_c(_TBA,_TBF);
	_T103->tl = fs2;
	_TB7 = (struct Cyc_List_List *)_T103;
      }fs2 = _TB7;
      _TC0 = fs;
      fs = _TC0->tl;
      goto _TLA9;
      _TLA8: _TC1 = k;
      _TC2 = Cyc_List_imp_rev(fs2);
      _TC3 = Cyc_Toc_add_anon_aggr_type(_TC1,_TC2);
      return _TC3;
    }
  case 8: 
    _TC4 = t;
    { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_TC4;
      _TF7 = _T103->f1;
      _TFC = _T103->f2;
      _TF6 = _T103->f3;
      _TC5 = _T103->f4;
      _T102 = (void *)_TC5;
    }{ struct _tuple1 * tdn = _TF7;
      struct Cyc_List_List * ts = _TFC;
      struct Cyc_Absyn_Typedefdecl * td = _TF6;
      void * topt = _T102;
      if (topt != 0) { goto _TLAA;
      }
      if (ts != 0) { goto _TLAC;
      }
      _TC6 = t;
      goto _TLAD;
      _TLAC: { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T103 = _cycalloc(sizeof(struct Cyc_Absyn_TypedefType_Absyn_Type_struct));
	_T103->tag = 8;
	_T103->f1 = tdn;
	_T103->f2 = 0;
	_T103->f3 = td;
	_T103->f4 = 0;
	_TC7 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T103;
      }_TC6 = (void *)_TC7;
      _TLAD: return _TC6;
      _TLAA: { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T103 = _cycalloc(sizeof(struct Cyc_Absyn_TypedefType_Absyn_Type_struct));
	_T103->tag = 8;
	_T103->f1 = tdn;
	_T103->f2 = 0;
	_T103->f3 = td;
	_T103->f4 = Cyc_Toc_typ_to_c(topt);
	_TC8 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T103;
      }_TC9 = (void *)_TC8;
      return _TC9;
    }
  case 9: 
    _TCA = t;
    { struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_ValueofType_Absyn_Type_struct *)_TCA;
      _TFE = _T103->f1;
    }{ struct Cyc_Absyn_Exp * e = _TFE;
      _TCB = t;
      return _TCB;
    }
  case 11: 
    _TCC = t;
    { struct Cyc_Absyn_TypeofType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_TypeofType_Absyn_Type_struct *)_TCC;
      _TFE = _T103->f1;
    }{ struct Cyc_Absyn_Exp * e = _TFE;
      Cyc_Toc_exptypes_to_c(e);
      _TCE = e;
      _TCF = _TCE->topt;
      if (_TCF != 0) { goto _TLAE;
      }
      _TCD = t;
      goto _TLAF;
      _TLAE: _TD0 = e;
      _TD1 = _TD0->topt;
      _TCD = Cyc_Toc_typ_to_c(_TD1);
      _TLAF: return _TCD;
    }
  case 10: 
    _TD2 = t;
    _TD3 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_TD2;
    _TD4 = _TD3->f1;
    _TD5 = (struct Cyc_Absyn_TypeDecl *)_TD4;
    _TD6 = _TD5->r;
    _TD7 = (int *)_TD6;
    _TD8 = *_TD7;
    switch (_TD8) {
    case 0: 
      _TD9 = t;
      { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_TD9;
	_TDA = _T103->f1;
	{ struct Cyc_Absyn_TypeDecl _T104 = *_TDA;
	  _TDB = _T104.r;
	  { struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct * _T105 = (struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct *)_TDB;
	    _TF5 = _T105->f1;
	  }
	}
      }{ struct Cyc_Absyn_Aggrdecl * ad = _TF5;
	Cyc_Toc_aggrdecl_to_c(ad);
	_TDC = ad;
	_TDD = _TDC->name;
	_TDF = ad;
	_TE0 = _TDF->kind;
	_TE1 = (int)_TE0;
	if (_TE1 != 1) { goto _TLB1;
	}
	_TDE = Cyc_Absyn_unionq_type;
	goto _TLB2;
	_TLB1: _TDE = Cyc_Absyn_strctq;
	_TLB2: _TE2 = Cyc_Toc_aggrdecl_type(_TDD,_TDE);
	return _TE2;
      }
    case 1: 
      _TE3 = t;
      { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_TE3;
	_TE4 = _T103->f1;
	{ struct Cyc_Absyn_TypeDecl _T104 = *_TE4;
	  _TE5 = _T104.r;
	  { struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct * _T105 = (struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct *)_TE5;
	    _TF4 = _T105->f1;
	  }
	}
      }{ struct Cyc_Absyn_Enumdecl * ed = _TF4;
	Cyc_Toc_enumdecl_to_c(ed);
	_TE6 = t;
	return _TE6;
      }
    default: 
      _TE7 = t;
      { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_TE7;
	_TE8 = _T103->f1;
	{ struct Cyc_Absyn_TypeDecl _T104 = *_TE8;
	  _TE9 = _T104.r;
	  { struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct * _T105 = (struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct *)_TE9;
	    _TF3 = _T105->f1;
	  }
	}_TF2 = _T103->f2;
      }{ struct Cyc_Absyn_Datatypedecl * dd = _TF3;
	void * * t = _TF2;
	Cyc_Toc_datatypedecl_to_c(dd);
	_TEA = _check_null(t);
	_TEB = *_TEA;
	_TEC = Cyc_Toc_typ_to_c(_TEB);
	return _TEC;
      }
    }
    ;
  default: 
    _TED = t;
    { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T103 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_TED;
      _TF1 = _T103->f1;
    }{ struct Cyc_Absyn_Vardecl * vd = _TF1;
      _TEE = vd;
      _TEF = _TEE->type;
      _TF0 = Cyc_Toc_typ_to_c(_TEF);
      return _TF0;
    }
  }
  ;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_array_to_ptr_cast(void * t,struct Cyc_Absyn_Exp * e,
							unsigned int l) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Absyn_ArrayInfo _T4;
  struct Cyc_Absyn_ArrayInfo _T5;
  void * _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Absyn_Exp * _T9;
  struct Cyc_Absyn_Tqual _TA;
  void * _TB;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 5) { goto _TLB3;
  }
  _T3 = t;
  { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _TC = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T3;
    _T4 = _TC->f1;
    _TB = _T4.elt_type;
    _T5 = _TC->f1;
    _TA = _T5.tq;
  }{ void * t2 = _TB;
    struct Cyc_Absyn_Tqual tq = _TA;
    _T6 = Cyc_Absyn_star_type(t2,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,
			      tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);
    _T7 = e;
    _T8 = Cyc_Toc_cast_it(_T6,_T7);
    return _T8;
  }_TLB3: _T9 = Cyc_Toc_cast_it(t,e);
  return _T9;
  ;
}
static long Cyc_Toc_atomic_type(void * t) {
  int * _T0;
  unsigned int _T1;
  void * _T2;
  void * _T3;
  int * _T4;
  unsigned int _T5;
  void * _T6;
  union Cyc_Absyn_AggrInfo _T7;
  struct _union_AggrInfo_UnknownAggr _T8;
  unsigned int _T9;
  struct Cyc_Absyn_Aggrdecl * _TA;
  struct Cyc_Absyn_AggrdeclImpl * _TB;
  struct Cyc_Absyn_Aggrdecl * _TC;
  struct Cyc_Absyn_AggrdeclImpl * _TD;
  struct Cyc_List_List * _TE;
  void * _TF;
  struct Cyc_Absyn_Aggrfield * _T10;
  void * _T11;
  long _T12;
  struct Cyc_List_List * _T13;
  void * _T14;
  struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _T15;
  union Cyc_Absyn_DatatypeFieldInfo _T16;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T17;
  unsigned int _T18;
  void * _T19;
  union Cyc_Absyn_DatatypeFieldInfo _T1A;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T1B;
  struct _tuple2 _T1C;
  union Cyc_Absyn_DatatypeFieldInfo _T1D;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T1E;
  struct _tuple2 _T1F;
  struct Cyc_Absyn_Datatypefield * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct _tuple26 * _T23;
  struct _tuple26 _T24;
  void * _T25;
  long _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_Warn_String_Warn_Warg_struct _T28;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T29;
  int (* _T2A)(struct _fat_ptr ap);
  struct _fat_ptr _T2B;
  struct Cyc_Absyn_ArrayInfo _T2C;
  long _T2D;
  struct Cyc_List_List * _T2E;
  void * _T2F;
  struct Cyc_Absyn_Aggrfield * _T30;
  void * _T31;
  long _T32;
  struct Cyc_List_List * _T33;
  struct Cyc_Warn_String_Warn_Warg_struct _T34;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T35;
  int (* _T36)(struct _fat_ptr ap);
  struct _fat_ptr _T37;
  void * _T38 = Cyc_Absyn_compress(t);
  struct Cyc_List_List * _T39;
  void * _T3A;
  _T0 = (int *)_T38;
  _T1 = *_T0;
  switch (_T1) {
  case 2: 
    return 0;
  case 0: 
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3B = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T38;
      _T2 = _T3B->f1;
      _T3A = (void *)_T2;
      _T39 = _T3B->f2;
    }{ void * c = _T3A;
      struct Cyc_List_List * ts = _T39;
      struct Cyc_Absyn_Datatypefield * _T3B;
      struct Cyc_Absyn_Datatypedecl * _T3C;
      union Cyc_Absyn_AggrInfo _T3D;
      _T3 = c;
      _T4 = (int *)_T3;
      _T5 = *_T4;
      switch (_T5) {
      case 0: 
	goto _LL13;
      case 1: 
	_LL13: goto _LL15;
      case 2: 
	_LL15: goto _LL17;
      case 5: 
	_LL17: goto _LL19;
      case 19: 
	_LL19: goto _LL1B;
      case 20: 
	_LL1B: return 1;
      case 22: 
	goto _LL1F;
      case 4: 
	_LL1F: goto _LL21;
      case 21: 
	_LL21: return 0;
      case 24: 
	_T6 = c;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T3E = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T6;
	  _T3D = _T3E->f1;
	}{ union Cyc_Absyn_AggrInfo info = _T3D;
	  _T7 = info;
	  _T8 = _T7.UnknownAggr;
	  _T9 = _T8.tag;
	  if (_T9 != 1) { goto _TLB7;
	  }
	  return 0;
	  _TLB7: goto _LL28;
	  _LL28: { struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
	    _TA = ad;
	    _TB = _TA->impl;
	    if (_TB != 0) { goto _TLB9;
	    }
	    return 0;
	    _TLB9: _TC = ad;
	    _TD = _TC->impl;
	    { struct Cyc_List_List * fs = _TD->fields;
	      _TLBE: if (fs != 0) { goto _TLBC;
	      }else { goto _TLBD;
	      }
	      _TLBC: _TE = fs;
	      _TF = _TE->hd;
	      _T10 = (struct Cyc_Absyn_Aggrfield *)_TF;
	      _T11 = _T10->type;
	      _T12 = Cyc_Toc_atomic_type(_T11);
	      if (_T12) { goto _TLBF;
	      }else { goto _TLC1;
	      }
	      _TLC1: return 0;
	      _TLBF: _T13 = fs;
	      fs = _T13->tl;
	      goto _TLBE;
	      _TLBD: ;
	    }return 1;
	  }
	}
      case 23: 
	_T14 = c;
	_T15 = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_T14;
	_T16 = _T15->f1;
	_T17 = _T16.KnownDatatypefield;
	_T18 = _T17.tag;
	if (_T18 != 2) { goto _TLC2;
	}
	_T19 = c;
	{ struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _T3E = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_T19;
	  _T1A = _T3E->f1;
	  _T1B = _T1A.KnownDatatypefield;
	  _T1C = _T1B.val;
	  _T3C = _T1C.f0;
	  _T1D = _T3E->f1;
	  _T1E = _T1D.KnownDatatypefield;
	  _T1F = _T1E.val;
	  _T3B = _T1F.f1;
	}{ struct Cyc_Absyn_Datatypedecl * tud = _T3C;
	  struct Cyc_Absyn_Datatypefield * tuf = _T3B;
	  _T20 = tuf;
	  { struct Cyc_List_List * tqs = _T20->typs;
	    _TLC7: if (tqs != 0) { goto _TLC5;
	    }else { goto _TLC6;
	    }
	    _TLC5: _T21 = tqs;
	    _T22 = _T21->hd;
	    _T23 = (struct _tuple26 *)_T22;
	    _T24 = *_T23;
	    _T25 = _T24.f1;
	    _T26 = Cyc_Toc_atomic_type(_T25);
	    if (_T26) { goto _TLC8;
	    }else { goto _TLCA;
	    }
	    _TLCA: return 0;
	    _TLC8: _T27 = tqs;
	    tqs = _T27->tl;
	    goto _TLC7;
	    _TLC6: ;
	  }return 1;
	}_TLC2: goto _LL26;
      default: 
	_LL26: { struct Cyc_Warn_String_Warn_Warg_struct _T3E;
	  _T3E.tag = 0;
	  _T3E.f1 = _tag_fat("atomic_typ: bad type ",sizeof(char),22U);
	  _T28 = _T3E;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T3E = _T28;
	  { struct Cyc_Warn_Typ_Warn_Warg_struct _T3F;
	    _T3F.tag = 2;
	    _T3F.f1 = t;
	    _T29 = _T3F;
	  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3F = _T29;
	    void * _T40[2];
	    _T40[0] = &_T3E;
	    _T40[1] = &_T3F;
	    { int (* _T41)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	      _T2A = _T41;
	    }_T2B = _tag_fat(_T40,sizeof(void *),2);
	    _T2A(_T2B);
	  }
	}
      }
      ;
    }
  case 6: 
    return 1;
  case 5: 
    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T3B = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T38;
      _T2C = _T3B->f1;
      _T3A = _T2C.elt_type;
    }{ void * t = _T3A;
      _T2D = Cyc_Toc_atomic_type(t);
      return _T2D;
    }
  case 7: 
    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T3B = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T38;
      _T39 = _T3B->f3;
    }{ struct Cyc_List_List * fs = _T39;
      _TLCE: if (fs != 0) { goto _TLCC;
      }else { goto _TLCD;
      }
      _TLCC: _T2E = fs;
      _T2F = _T2E->hd;
      _T30 = (struct Cyc_Absyn_Aggrfield *)_T2F;
      _T31 = _T30->type;
      _T32 = Cyc_Toc_atomic_type(_T31);
      if (_T32) { goto _TLCF;
      }else { goto _TLD1;
      }
      _TLD1: return 0;
      _TLCF: _T33 = fs;
      fs = _T33->tl;
      goto _TLCE;
      _TLCD: return 1;
    }
  case 4: 
    return 0;
  default: 
    { struct Cyc_Warn_String_Warn_Warg_struct _T3B;
      _T3B.tag = 0;
      _T3B.f1 = _tag_fat("atomic_typ:  bad type ",sizeof(char),23U);
      _T34 = _T3B;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3B = _T34;
      { struct Cyc_Warn_Typ_Warn_Warg_struct _T3C;
	_T3C.tag = 2;
	_T3C.f1 = t;
	_T35 = _T3C;
      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3C = _T35;
	void * _T3D[2];
	_T3D[0] = &_T3B;
	_T3D[1] = &_T3C;
	{ int (* _T3E)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	  _T36 = _T3E;
	}_T37 = _tag_fat(_T3D,sizeof(void *),2);
	_T36(_T37);
      }
    }
  }
  ;
}
static long Cyc_Toc_is_poly_field(void * t,struct _fat_ptr * f) {
  int * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_Vardecl * _T2;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  struct Cyc_Absyn_Aggrdecl * _T8;
  struct Cyc_Absyn_AggrdeclImpl * _T9;
  struct Cyc_Warn_String_Warn_Warg_struct _TA;
  int (* _TB)(struct _fat_ptr ap);
  struct _fat_ptr _TC;
  struct Cyc_Absyn_Aggrdecl * _TD;
  struct Cyc_Absyn_AggrdeclImpl * _TE;
  struct Cyc_Warn_String_Warn_Warg_struct _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  struct _fat_ptr * _T11;
  int (* _T12)(struct _fat_ptr ap);
  struct _fat_ptr _T13;
  struct Cyc_Absyn_Aggrfield * _T14;
  void * _T15;
  long _T16;
  struct Cyc_Warn_String_Warn_Warg_struct _T17;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T18;
  int (* _T19)(struct _fat_ptr ap);
  struct _fat_ptr _T1A;
  loop: { void * _T1B = Cyc_Absyn_compress(t);
    struct Cyc_List_List * _T1C;
    union Cyc_Absyn_AggrInfo _T1D;
    struct Cyc_Absyn_Vardecl * _T1E;
    _T0 = (int *)_T1B;
    _T1 = *_T0;
    switch (_T1) {
    case 12: 
      { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T1F = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T1B;
	_T1E = _T1F->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T1E;
	_T2 = vd;
	t = _T2->type;
	goto loop;
      }
    case 0: 
      _T3 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1B;
      _T4 = _T3->f1;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      if (_T6 != 24) { goto _TLD3;
      }
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1F = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1B;
	_T7 = _T1F->f1;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T20 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T7;
	  _T1D = _T20->f1;
	}
      }{ union Cyc_Absyn_AggrInfo info = _T1D;
	struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
	_T8 = ad;
	_T9 = _T8->impl;
	if (_T9 != 0) { goto _TLD5;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T1F;
	  _T1F.tag = 0;
	  _T1F.f1 = _tag_fat("is_poly_field: type missing fields",sizeof(char),
			     35U);
	  _TA = _T1F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T1F = _TA;
	  void * _T20[1];
	  _T20[0] = &_T1F;
	  { int (* _T21)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _TB = _T21;
	  }_TC = _tag_fat(_T20,sizeof(void *),1);
	  _TB(_TC);
	}goto _TLD6;
	_TLD5: _TLD6: _TD = ad;
	_TE = _TD->impl;
	_T1C = _TE->fields;
	goto _LL6;
      }_TLD3: goto _LL7;
    case 7: 
      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T1F = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T1B;
	_T1C = _T1F->f3;
      }_LL6: { struct Cyc_List_List * fs = _T1C;
	struct Cyc_Absyn_Aggrfield * field = Cyc_Absyn_lookup_field(fs,f);
	if (field != 0) { goto _TLD7;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T1F;
	  _T1F.tag = 0;
	  _T1F.f1 = _tag_fat("is_poly_field: bad field ",sizeof(char),26U);
	  _TF = _T1F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T1F = _TF;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T20;
	    _T20.tag = 0;
	    _T11 = f;
	    _T20.f1 = *_T11;
	    _T10 = _T20;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T20 = _T10;
	    void * _T21[2];
	    _T21[0] = &_T1F;
	    _T21[1] = &_T20;
	    { int (* _T22)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	      _T12 = _T22;
	    }_T13 = _tag_fat(_T21,sizeof(void *),2);
	    _T12(_T13);
	  }
	}goto _TLD8;
	_TLD7: _TLD8: _T14 = field;
	_T15 = _T14->type;
	_T16 = Cyc_Toc_is_void_star_or_boxed_tvar(_T15);
	return _T16;
      }
    default: 
      _LL7: { struct Cyc_Warn_String_Warn_Warg_struct _T1F;
	_T1F.tag = 0;
	_T1F.f1 = _tag_fat("is_poly_field: bad type ",sizeof(char),25U);
	_T17 = _T1F;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1F = _T17;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T20;
	  _T20.tag = 2;
	  _T20.f1 = t;
	  _T18 = _T20;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T20 = _T18;
	  void * _T21[2];
	  _T21[0] = &_T1F;
	  _T21[1] = &_T20;
	  { int (* _T22)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T19 = _T22;
	  }_T1A = _tag_fat(_T21,sizeof(void *),2);
	  _T19(_T1A);
	}
      }
    }
    ;
  }
}
static long Cyc_Toc_is_poly_project(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  int _T3;
  struct Cyc_Absyn_Exp * _T4;
  void * _T5;
  void * _T6;
  struct _fat_ptr * _T7;
  long _T8;
  struct Cyc_Absyn_Exp * _T9;
  void * _TA;
  void * _TB;
  long _TC;
  struct Cyc_Absyn_Exp * _TD;
  void * _TE;
  void * _TF;
  int * _T10;
  int _T11;
  struct Cyc_Absyn_PtrInfo _T12;
  int _T13;
  long _T14;
  struct Cyc_Absyn_Exp * _T15;
  void * _T16;
  void * _T17;
  long _T18;
  struct Cyc_Warn_String_Warn_Warg_struct _T19;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  void * _T1C;
  int (* _T1D)(struct _fat_ptr ap);
  struct _fat_ptr _T1E;
  _T0 = e;
  { void * _T1F = _T0->r;
    struct _fat_ptr * _T20;
    struct Cyc_Absyn_Exp * _T21;
    _T1 = (int *)_T1F;
    _T2 = *_T1;
    switch (_T2) {
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T22 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T1F;
	_T21 = _T22->f1;
	_T20 = _T22->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T21;
	struct _fat_ptr * f = _T20;
	_T4 = e1;
	_T5 = _T4->topt;
	_T6 = _check_null(_T5);
	_T7 = f;
	_T8 = Cyc_Toc_is_poly_field(_T6,_T7);
	if (! _T8) { goto _TLDA;
	}
	_T9 = e;
	_TA = _T9->topt;
	_TB = _check_null(_TA);
	_TC = Cyc_Toc_is_void_star_or_boxed_tvar(_TB);
	_T3 = ! _TC;
	goto _TLDB;
	_TLDA: _T3 = 0;
	_TLDB: return _T3;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T22 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T1F;
	_T21 = _T22->f1;
	_T20 = _T22->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T21;
	struct _fat_ptr * f = _T20;
	_TD = e1;
	_TE = _TD->topt;
	_TF = _check_null(_TE);
	{ void * _T22 = Cyc_Absyn_compress(_TF);
	  void * _T23;
	  _T10 = (int *)_T22;
	  _T11 = *_T10;
	  if (_T11 != 4) { goto _TLDC;
	  }
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T24 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T22;
	    _T12 = _T24->f1;
	    _T23 = _T12.elt_type;
	  }{ void * t = _T23;
	    _T14 = Cyc_Toc_is_poly_field(t,f);
	    if (! _T14) { goto _TLDE;
	    }
	    _T15 = e;
	    _T16 = _T15->topt;
	    _T17 = _check_null(_T16);
	    _T18 = Cyc_Toc_is_void_star_or_boxed_tvar(_T17);
	    _T13 = ! _T18;
	    goto _TLDF;
	    _TLDE: _T13 = 0;
	    _TLDF: return _T13;
	  }_TLDC: { struct Cyc_Warn_String_Warn_Warg_struct _T24;
	    _T24.tag = 0;
	    _T24.f1 = _tag_fat("is_poly_project: bad type ",sizeof(char),
			       27U);
	    _T19 = _T24;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T24 = _T19;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T25;
	      _T25.tag = 2;
	      _T1B = e1;
	      _T1C = _T1B->topt;
	      _T25.f1 = _check_null(_T1C);
	      _T1A = _T25;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T25 = _T1A;
	      void * _T26[2];
	      _T26[0] = &_T24;
	      _T26[1] = &_T25;
	      { int (* _T27)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		_T1D = _T27;
	      }_T1E = _tag_fat(_T26,sizeof(void *),2);
	      _T1D(_T1E);
	    }
	  };
	}
      }
    default: 
      return 0;
    }
    ;
  }
}
static struct Cyc_Absyn_Exp * Cyc_Toc_malloc_exp(void * t,struct Cyc_Absyn_Exp * s) {
  struct Cyc_Absyn_Exp * _T0;
  long _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct _fat_ptr _T4;
  void * _T5;
  struct Cyc_Absyn_Exp * _T6;
  _T1 = Cyc_Toc_atomic_type(t);
  if (! _T1) { goto _TLE0;
  }
  _T0 = Cyc_Toc__cycalloc_atomic_e;
  goto _TLE1;
  _TLE0: _T0 = Cyc_Toc__cycalloc_e;
  _TLE1: { struct Cyc_Absyn_Exp * fn_e = _T0;
    { struct Cyc_Absyn_Exp * _T7[1];
      _T7[0] = s;
      _T3 = fn_e;
      _T4 = _tag_fat(_T7,sizeof(struct Cyc_Absyn_Exp *),1);
      _T2 = Cyc_Toc_fncall_exp_dl(_T3,_T4);
    }_T5 = Cyc_Toc_void_star_type();
    _T6 = Cyc_Absyn_set_type(_T2,_T5);
    return _T6;
  }
}
static struct Cyc_Absyn_Exp * Cyc_Toc_calloc_exp(void * elt_type,struct Cyc_Absyn_Exp * s,
						 struct Cyc_Absyn_Exp * n) {
  struct Cyc_Absyn_Exp * _T0;
  long _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct _fat_ptr _T4;
  void * _T5;
  struct Cyc_Absyn_Exp * _T6;
  _T1 = Cyc_Toc_atomic_type(elt_type);
  if (! _T1) { goto _TLE2;
  }
  _T0 = Cyc_Toc__cyccalloc_atomic_e;
  goto _TLE3;
  _TLE2: _T0 = Cyc_Toc__cyccalloc_e;
  _TLE3: { struct Cyc_Absyn_Exp * fn_e = _T0;
    { struct Cyc_Absyn_Exp * _T7[2];
      _T7[0] = s;
      _T7[1] = n;
      _T3 = fn_e;
      _T4 = _tag_fat(_T7,sizeof(struct Cyc_Absyn_Exp *),2);
      _T2 = Cyc_Toc_fncall_exp_dl(_T3,_T4);
    }_T5 = Cyc_Toc_void_star_type();
    _T6 = Cyc_Absyn_set_type(_T2,_T5);
    return _T6;
  }
}
static struct Cyc_Absyn_Exp * Cyc_Toc_rmalloc_exp(struct Cyc_Absyn_Exp * rgn,
						  struct Cyc_Absyn_Exp * aq,
						  struct Cyc_Absyn_Exp * s) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct _fat_ptr _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  { struct Cyc_Absyn_Exp * _T5[3];
    _T5[0] = rgn;
    _T5[1] = aq;
    _T5[2] = s;
    _T1 = Cyc_Toc__region_malloc_e;
    _T2 = _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp *),3);
    _T0 = Cyc_Toc_fncall_exp_dl(_T1,_T2);
  }_T3 = Cyc_Toc_void_star_type();
  _T4 = Cyc_Absyn_set_type(_T0,_T3);
  return _T4;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_aqmalloc_exp(struct Cyc_Absyn_Exp * aq,
						   struct Cyc_Absyn_Exp * s) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct _fat_ptr _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  { struct Cyc_Absyn_Exp * _T5[2];
    _T5[0] = aq;
    _T5[1] = s;
    _T1 = Cyc_Toc__aqual_malloc_e;
    _T2 = _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp *),2);
    _T0 = Cyc_Toc_fncall_exp_dl(_T1,_T2);
  }_T3 = Cyc_Toc_void_star_type();
  _T4 = Cyc_Absyn_set_type(_T0,_T3);
  return _T4;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_rvmalloc_exp(struct Cyc_Absyn_Exp * rgn,
						   struct Cyc_Absyn_Exp * s) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct _fat_ptr _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  { struct Cyc_Absyn_Exp * _T5[2];
    _T5[0] = rgn;
    _T5[1] = s;
    _T1 = Cyc_Toc__region_vmalloc_e;
    _T2 = _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp *),2);
    _T0 = Cyc_Toc_fncall_exp_dl(_T1,_T2);
  }_T3 = Cyc_Toc_void_star_type();
  _T4 = Cyc_Absyn_set_type(_T0,_T3);
  return _T4;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_rmalloc_inline_exp(struct Cyc_Absyn_Exp * rgn,
							 struct Cyc_Absyn_Exp * aq,
							 struct Cyc_Absyn_Exp * s) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct _fat_ptr _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  { struct Cyc_Absyn_Exp * _T5[3];
    _T5[0] = rgn;
    _T5[1] = aq;
    _T5[2] = s;
    _T1 = Cyc_Toc__fast_region_malloc_e;
    _T2 = _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp *),3);
    _T0 = Cyc_Toc_fncall_exp_dl(_T1,_T2);
  }_T3 = Cyc_Toc_void_star_type();
  _T4 = Cyc_Absyn_set_type(_T0,_T3);
  return _T4;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_rcalloc_exp(struct Cyc_Absyn_Exp * rgn,
						  struct Cyc_Absyn_Exp * aq,
						  struct Cyc_Absyn_Exp * s,
						  struct Cyc_Absyn_Exp * n) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct _fat_ptr _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  { struct Cyc_Absyn_Exp * _T5[4];
    _T5[0] = rgn;
    _T5[1] = aq;
    _T5[2] = s;
    _T5[3] = n;
    _T1 = Cyc_Toc__region_calloc_e;
    _T2 = _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp *),4);
    _T0 = Cyc_Toc_fncall_exp_dl(_T1,_T2);
  }_T3 = Cyc_Toc_void_star_type();
  _T4 = Cyc_Absyn_set_type(_T0,_T3);
  return _T4;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_aqcalloc_exp(struct Cyc_Absyn_Exp * aq,
						   struct Cyc_Absyn_Exp * s,
						   struct Cyc_Absyn_Exp * n) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct _fat_ptr _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  { struct Cyc_Absyn_Exp * _T5[3];
    _T5[0] = aq;
    _T5[1] = s;
    _T5[2] = n;
    _T1 = Cyc_Toc__aqual_calloc_e;
    _T2 = _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp *),3);
    _T0 = Cyc_Toc_fncall_exp_dl(_T1,_T2);
  }_T3 = Cyc_Toc_void_star_type();
  _T4 = Cyc_Absyn_set_type(_T0,_T3);
  return _T4;
}
static struct Cyc_Absyn_Stmt * Cyc_Toc_throw_match_stmt() {
  struct Cyc_Absyn_Exp * _T0;
  struct _fat_ptr _T1;
  struct Cyc_Absyn_Exp * _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Stmt * _T5;
  _T0 = Cyc_Toc__throw_match_e;
  _T1 = _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp *),0);
  _T2 = Cyc_Toc_fncall_exp_dl(_T0,_T1);
  _T3 = Cyc_Toc_void_star_type();
  _T4 = Cyc_Absyn_set_type(_T2,_T3);
  _T5 = Cyc_Absyn_exp_stmt(_T4,0U);
  return _T5;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_make_toplevel_dyn_arr(void * t,struct Cyc_Absyn_Exp * sz,
							    struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T3;
  union Cyc_Absyn_Cnst _T4;
  struct _union_Cnst_Wstring_c _T5;
  unsigned int _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T8;
  void * _T9;
  void * _TA;
  struct Cyc_Absyn_Exp * _TB;
  void * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct Cyc_Absyn_Exp * _TE;
  void * _TF;
  void * _T10;
  struct Cyc_Absyn_Exp * _T11;
  void * _T12;
  struct Cyc_Absyn_Exp * _T13;
  struct Cyc_Absyn_Exp * _T14;
  struct Cyc_Absyn_Exp * _T15;
  struct Cyc_List_List * _T16;
  struct _tuple22 * _T17;
  struct _tuple22 * _T18;
  struct _tuple22 * _T19;
  struct _fat_ptr _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  struct Cyc_Absyn_Exp * xexp;
  struct Cyc_Absyn_Exp * xplussz;
  _T0 = e;
  { void * _T1C = _T0->r;
    _T1 = (int *)_T1C;
    _T2 = *_T1;
    if (_T2 != 0) { goto _TLE4;
    }
    _T3 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T1C;
    _T4 = _T3->f1;
    _T5 = _T4.Wstring_c;
    _T6 = _T5.tag;
    switch (_T6) {
    case 9: 
      goto _LL4;
    case 10: 
      _LL4: { struct _tuple1 * x = Cyc_Toc_temp_var();
	void * vd_typ = Cyc_Absyn_array_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq,
					     sz,Cyc_Absyn_false_type,0U);
	struct Cyc_Absyn_Vardecl * vd = Cyc_Absyn_static_vardecl(x,vd_typ,
								 e);
	{ struct Cyc_List_List * _T1D = _cycalloc(sizeof(struct Cyc_List_List));
	  { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T1E = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
	    _T1E->tag = 0;
	    _T1E->f1 = vd;
	    _T8 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T1E;
	  }_T9 = (void *)_T8;
	  _T1D->hd = Cyc_Absyn_new_decl(_T9,0U);
	  _T1D->tl = Cyc_Toc_result_decls;
	  _T7 = (struct Cyc_List_List *)_T1D;
	}Cyc_Toc_result_decls = _T7;
	_TA = Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);
	_TB = Cyc_Absyn_var_exp(x,0U);
	_TC = Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq);
	_TD = Cyc_Absyn_set_type(_TB,_TC);
	xexp = Cyc_Toc_cast_it(_TA,_TD);
	_TE = Cyc_Absyn_add_exp(xexp,sz,0U);
	_TF = Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);
	xplussz = Cyc_Absyn_set_type(_TE,_TF);
	goto _LL0;
      }
    default: 
      goto _LL5;
    }
    goto _TLE5;
    _TLE4: _LL5: _T10 = Cyc_Toc_void_star_type();
    _T11 = e;
    xexp = Cyc_Toc_cast_it(_T10,_T11);
    _T12 = Cyc_Toc_void_star_type();
    _T13 = Cyc_Toc_deep_copy(e);
    _T14 = sz;
    _T15 = Cyc_Absyn_add_exp(_T13,_T14,0U);
    xplussz = Cyc_Toc_cast_it(_T12,_T15);
    goto _LL0;
    _TLE5: _LL0: ;
  }{ struct _tuple22 * _T1C[3];
    { struct _tuple22 * _T1D = _cycalloc(sizeof(struct _tuple22));
      _T1D->f0 = 0;
      _T1D->f1 = xexp;
      _T17 = (struct _tuple22 *)_T1D;
    }_T1C[0] = _T17;
    { struct _tuple22 * _T1D = _cycalloc(sizeof(struct _tuple22));
      _T1D->f0 = 0;
      _T1D->f1 = Cyc_Toc_deep_copy(xexp);
      _T18 = (struct _tuple22 *)_T1D;
    }_T1C[1] = _T18;
    { struct _tuple22 * _T1D = _cycalloc(sizeof(struct _tuple22));
      _T1D->f0 = 0;
      _T1D->f1 = xplussz;
      _T19 = (struct _tuple22 *)_T1D;
    }_T1C[2] = _T19;
    _T1A = _tag_fat(_T1C,sizeof(struct _tuple22 *),3);
    _T16 = Cyc_List_list(_T1A);
  }_T1B = Cyc_Absyn_unresolvedmem_exp(0,_T16,0U);
  return _T1B;
}
 struct Cyc_Toc_FallthruInfo {
  struct _fat_ptr * label;
  struct Cyc_List_List * binders;
};
 struct Cyc_Toc_Env {
  struct _fat_ptr * * break_lab;
  struct _fat_ptr * * continue_lab;
  struct Cyc_Toc_FallthruInfo * fallthru_info;
  long toplevel;
  long * in_lhs;
  struct _RegionHandle * rgn;
};
static struct Cyc_Toc_Env * Cyc_Toc_empty_env(struct _RegionHandle * r) {
  struct Cyc_Toc_Env * _T0;
  struct _RegionHandle * _T1;
  long * _T2;
  struct _RegionHandle * _T3;
  _T1 = r;
  { struct Cyc_Toc_Env * _T4 = _region_malloc(_T1,0U,sizeof(struct Cyc_Toc_Env));
    _T4->break_lab = 0;
    _T4->continue_lab = 0;
    _T4->fallthru_info = 0;
    _T4->toplevel = 1;
    _T3 = r;
    { long * _T5 = _region_malloc(_T3,0U,sizeof(long));
      *_T5 = 0;
      _T2 = (long *)_T5;
    }_T4->in_lhs = _T2;
    _T4->rgn = r;
    _T0 = (struct Cyc_Toc_Env *)_T4;
  }return _T0;
}
static long Cyc_Toc_is_toplevel(struct Cyc_Toc_Env * nv) {
  struct Cyc_Toc_Env * _T0;
  long _T1;
  long _T2;
  _T0 = nv;
  { struct Cyc_Toc_Env _T3 = *_T0;
    _T2 = _T3.toplevel;
  }{ long t = _T2;
    _T1 = t;
    return _T1;
  }
}
static struct Cyc_Toc_Env * Cyc_Toc_clear_toplevel(struct _RegionHandle * r,
						   struct Cyc_Toc_Env * e) {
  struct Cyc_Toc_Env * _T0;
  struct Cyc_Toc_Env * _T1;
  struct _RegionHandle * _T2;
  long * _T3;
  long _T4;
  struct Cyc_Toc_FallthruInfo * _T5;
  struct _fat_ptr * * _T6;
  struct _fat_ptr * * _T7;
  _T0 = e;
  { struct Cyc_Toc_Env _T8 = *_T0;
    _T7 = _T8.break_lab;
    _T6 = _T8.continue_lab;
    _T5 = _T8.fallthru_info;
    _T4 = _T8.toplevel;
    _T3 = _T8.in_lhs;
  }{ struct _fat_ptr * * b = _T7;
    struct _fat_ptr * * c = _T6;
    struct Cyc_Toc_FallthruInfo * f = _T5;
    long t = _T4;
    long * lhs = _T3;
    _T2 = r;
    { struct Cyc_Toc_Env * _T8 = _region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
      _T8->break_lab = b;
      _T8->continue_lab = c;
      _T8->fallthru_info = f;
      _T8->toplevel = 0;
      _T8->in_lhs = lhs;
      _T8->rgn = r;
      _T1 = (struct Cyc_Toc_Env *)_T8;
    }return _T1;
  }
}
static struct Cyc_Toc_Env * Cyc_Toc_set_toplevel(struct _RegionHandle * r,
						 struct Cyc_Toc_Env * e) {
  struct Cyc_Toc_Env * _T0;
  struct Cyc_Toc_Env * _T1;
  struct _RegionHandle * _T2;
  long * _T3;
  long _T4;
  struct Cyc_Toc_FallthruInfo * _T5;
  struct _fat_ptr * * _T6;
  struct _fat_ptr * * _T7;
  _T0 = e;
  { struct Cyc_Toc_Env _T8 = *_T0;
    _T7 = _T8.break_lab;
    _T6 = _T8.continue_lab;
    _T5 = _T8.fallthru_info;
    _T4 = _T8.toplevel;
    _T3 = _T8.in_lhs;
  }{ struct _fat_ptr * * b = _T7;
    struct _fat_ptr * * c = _T6;
    struct Cyc_Toc_FallthruInfo * f = _T5;
    long t = _T4;
    long * lhs = _T3;
    _T2 = r;
    { struct Cyc_Toc_Env * _T8 = _region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
      _T8->break_lab = b;
      _T8->continue_lab = c;
      _T8->fallthru_info = f;
      _T8->toplevel = 1;
      _T8->in_lhs = lhs;
      _T8->rgn = r;
      _T1 = (struct Cyc_Toc_Env *)_T8;
    }return _T1;
  }
}
static long Cyc_Toc_in_lhs(struct Cyc_Toc_Env * nv) {
  struct Cyc_Toc_Env * _T0;
  long * _T1;
  long _T2;
  long * _T3;
  _T0 = nv;
  { struct Cyc_Toc_Env _T4 = *_T0;
    _T3 = _T4.in_lhs;
  }{ long * b = _T3;
    _T1 = b;
    _T2 = *_T1;
    return _T2;
  }
}
static void Cyc_Toc_set_lhs(struct Cyc_Toc_Env * e,long b) {
  struct Cyc_Toc_Env * _T0;
  long * _T1;
  long * _T2;
  _T0 = e;
  { struct Cyc_Toc_Env _T3 = *_T0;
    _T2 = _T3.in_lhs;
  }{ long * lhs = _T2;
    _T1 = lhs;
    *_T1 = b;
  }
}
static struct Cyc_Toc_Env * Cyc_Toc_share_env(struct _RegionHandle * r,struct Cyc_Toc_Env * e) {
  struct Cyc_Toc_Env * _T0;
  struct Cyc_Toc_Env * _T1;
  struct _RegionHandle * _T2;
  long * _T3;
  long _T4;
  struct Cyc_Toc_FallthruInfo * _T5;
  struct _fat_ptr * * _T6;
  struct _fat_ptr * * _T7;
  _T0 = e;
  { struct Cyc_Toc_Env _T8 = *_T0;
    _T7 = _T8.break_lab;
    _T6 = _T8.continue_lab;
    _T5 = _T8.fallthru_info;
    _T4 = _T8.toplevel;
    _T3 = _T8.in_lhs;
  }{ struct _fat_ptr * * b = _T7;
    struct _fat_ptr * * c = _T6;
    struct Cyc_Toc_FallthruInfo * f = _T5;
    long t = _T4;
    long * lhs = _T3;
    _T2 = r;
    { struct Cyc_Toc_Env * _T8 = _region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
      _T8->break_lab = b;
      _T8->continue_lab = c;
      _T8->fallthru_info = f;
      _T8->toplevel = t;
      _T8->in_lhs = lhs;
      _T8->rgn = r;
      _T1 = (struct Cyc_Toc_Env *)_T8;
    }return _T1;
  }
}
static struct Cyc_Toc_Env * Cyc_Toc_loop_env(struct _RegionHandle * r,struct Cyc_Toc_Env * e) {
  struct Cyc_Toc_Env * _T0;
  struct Cyc_Toc_Env * _T1;
  struct _RegionHandle * _T2;
  long * _T3;
  long _T4;
  struct Cyc_Toc_FallthruInfo * _T5;
  struct _fat_ptr * * _T6;
  struct _fat_ptr * * _T7;
  _T0 = e;
  { struct Cyc_Toc_Env _T8 = *_T0;
    _T7 = _T8.break_lab;
    _T6 = _T8.continue_lab;
    _T5 = _T8.fallthru_info;
    _T4 = _T8.toplevel;
    _T3 = _T8.in_lhs;
  }{ struct _fat_ptr * * b = _T7;
    struct _fat_ptr * * c = _T6;
    struct Cyc_Toc_FallthruInfo * f = _T5;
    long t = _T4;
    long * lhs = _T3;
    _T2 = r;
    { struct Cyc_Toc_Env * _T8 = _region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
      _T8->break_lab = 0;
      _T8->continue_lab = 0;
      _T8->fallthru_info = f;
      _T8->toplevel = t;
      _T8->in_lhs = lhs;
      _T8->rgn = r;
      _T1 = (struct Cyc_Toc_Env *)_T8;
    }return _T1;
  }
}
static struct Cyc_Toc_Env * Cyc_Toc_non_last_switchclause_env(struct _RegionHandle * r,
							      struct Cyc_Toc_Env * e,
							      struct _fat_ptr * break_l,
							      struct _fat_ptr * fallthru_l,
							      struct Cyc_List_List * fallthru_binders) {
  struct Cyc_Toc_Env * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_Toc_FallthruInfo * _T2;
  struct Cyc_Toc_FallthruInfo * _T3;
  struct Cyc_Toc_Env * _T4;
  struct _RegionHandle * _T5;
  struct _fat_ptr * * _T6;
  struct _RegionHandle * _T7;
  long * _T8;
  long _T9;
  struct Cyc_Toc_FallthruInfo * _TA;
  struct _fat_ptr * * _TB;
  struct _fat_ptr * * _TC;
  _T0 = e;
  { struct Cyc_Toc_Env _TD = *_T0;
    _TC = _TD.break_lab;
    _TB = _TD.continue_lab;
    _TA = _TD.fallthru_info;
    _T9 = _TD.toplevel;
    _T8 = _TD.in_lhs;
  }{ struct _fat_ptr * * b = _TC;
    struct _fat_ptr * * c = _TB;
    struct Cyc_Toc_FallthruInfo * f = _TA;
    long t = _T9;
    long * lhs = _T8;
    struct Cyc_Toc_FallthruInfo * fi;
    _T1 = r;
    fi = _region_malloc(_T1,0U,sizeof(struct Cyc_Toc_FallthruInfo));
    _T2 = fi;
    _T2->label = fallthru_l;
    _T3 = fi;
    _T3->binders = fallthru_binders;
    _T5 = r;
    { struct Cyc_Toc_Env * _TD = _region_malloc(_T5,0U,sizeof(struct Cyc_Toc_Env));
      _T7 = r;
      { struct _fat_ptr * * _TE = _region_malloc(_T7,0U,sizeof(struct _fat_ptr *));
	*_TE = break_l;
	_T6 = (struct _fat_ptr * *)_TE;
      }_TD->break_lab = _T6;
      _TD->continue_lab = c;
      _TD->fallthru_info = fi;
      _TD->toplevel = t;
      _TD->in_lhs = lhs;
      _TD->rgn = r;
      _T4 = (struct Cyc_Toc_Env *)_TD;
    }return _T4;
  }
}
static struct Cyc_Toc_Env * Cyc_Toc_last_switchclause_env(struct _RegionHandle * r,
							  struct Cyc_Toc_Env * e,
							  struct _fat_ptr * break_l) {
  struct Cyc_Toc_Env * _T0;
  struct Cyc_Toc_Env * _T1;
  struct _RegionHandle * _T2;
  struct _fat_ptr * * _T3;
  struct _RegionHandle * _T4;
  long * _T5;
  long _T6;
  struct Cyc_Toc_FallthruInfo * _T7;
  struct _fat_ptr * * _T8;
  struct _fat_ptr * * _T9;
  _T0 = e;
  { struct Cyc_Toc_Env _TA = *_T0;
    _T9 = _TA.break_lab;
    _T8 = _TA.continue_lab;
    _T7 = _TA.fallthru_info;
    _T6 = _TA.toplevel;
    _T5 = _TA.in_lhs;
  }{ struct _fat_ptr * * b = _T9;
    struct _fat_ptr * * c = _T8;
    struct Cyc_Toc_FallthruInfo * f = _T7;
    long t = _T6;
    long * lhs = _T5;
    _T2 = r;
    { struct Cyc_Toc_Env * _TA = _region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
      _T4 = r;
      { struct _fat_ptr * * _TB = _region_malloc(_T4,0U,sizeof(struct _fat_ptr *));
	*_TB = break_l;
	_T3 = (struct _fat_ptr * *)_TB;
      }_TA->break_lab = _T3;
      _TA->continue_lab = c;
      _TA->fallthru_info = 0;
      _TA->toplevel = t;
      _TA->in_lhs = lhs;
      _TA->rgn = r;
      _T1 = (struct Cyc_Toc_Env *)_TA;
    }return _T1;
  }
}
static void Cyc_Toc_exp_to_c(struct Cyc_Toc_Env *,struct Cyc_Absyn_Exp *);
static void Cyc_Toc_stmt_to_c(struct Cyc_Toc_Env *,struct Cyc_Absyn_Stmt *);
static struct Cyc_Absyn_Stmt * Cyc_Toc_letdecl_to_c(struct Cyc_Toc_Env *,
						    struct Cyc_Absyn_Pat *,
						    void *,void *,struct Cyc_Absyn_Exp *,
						    struct Cyc_Absyn_Stmt *);
static void Cyc_Toc_local_decl_to_c(struct Cyc_Toc_Env *,struct Cyc_Absyn_Vardecl *,
				    struct Cyc_Absyn_Stmt *);
static void Cyc_Toc_fndecl_to_c(struct Cyc_Toc_Env *,struct Cyc_Absyn_Fndecl *,
				long);
 struct _tuple35 {
  struct _fat_ptr f0;
  struct Cyc_Absyn_Exp * f1;
};
static void Cyc_Toc_asm_iolist_types_toc(struct Cyc_List_List * l) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _tuple35 * _T2;
  struct _tuple35 _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_List_List * _T5;
  _TLEA: if (l != 0) { goto _TLE8;
  }else { goto _TLE9;
  }
  _TLE8: _T0 = l;
  _T1 = _T0->hd;
  _T2 = (struct _tuple35 *)_T1;
  _T3 = *_T2;
  _T4 = _T3.f1;
  Cyc_Toc_exptypes_to_c(_T4);
  _T5 = l;
  l = _T5->tl;
  goto _TLEA;
  _TLE9: ;
}
static long Cyc_Toc_do_null_check(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T1;
  char * _T2;
  char * _T3;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T4;
  char * _T5;
  char * _T6;
  struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct * _T7;
  char * _T8;
  char * _T9;
  struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct * _TA;
  char * _TB;
  char * _TC;
  struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct * _TD;
  char * _TE;
  char * _TF;
  struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct * _T10;
  char * _T11;
  char * _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  int (* _T14)(unsigned int,struct _fat_ptr);
  void * (* _T15)(unsigned int,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T16;
  unsigned int _T17;
  struct _fat_ptr _T18;
  _T0 = e;
  { void * _T19 = _T0->annot;
    _T1 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T19;
    _T2 = _T1->tag;
    _T3 = Cyc_InsertChecks_NoCheck;
    if (_T2 != _T3) { goto _TLEB;
    }
    return 0;
    _TLEB: _T4 = (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct *)_T19;
    _T5 = _T4->tag;
    _T6 = Cyc_InsertChecks_NullOnly;
    if (_T5 != _T6) { goto _TLED;
    }
    goto _LL6;
    _TLED: _T7 = (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct *)_T19;
    _T8 = _T7->tag;
    _T9 = Cyc_InsertChecks_NullAndFatBound;
    if (_T8 != _T9) { goto _TLEF;
    }
    _LL6: goto _LL8;
    _TLEF: _TA = (struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct *)_T19;
    _TB = _TA->tag;
    _TC = Cyc_InsertChecks_NullAndThinBound;
    if (_TB != _TC) { goto _TLF1;
    }
    _LL8: return 1;
    _TLF1: _TD = (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct *)_T19;
    _TE = _TD->tag;
    _TF = Cyc_InsertChecks_FatBound;
    if (_TE != _TF) { goto _TLF3;
    }
    goto _LLC;
    _TLF3: _T10 = (struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct *)_T19;
    _T11 = _T10->tag;
    _T12 = Cyc_InsertChecks_ThinBound;
    if (_T11 != _T12) { goto _TLF5;
    }
    _LLC: return 0;
    _TLF5: { struct Cyc_Warn_String_Warn_Warg_struct _T1A;
      _T1A.tag = 0;
      _T1A.f1 = _tag_fat("Toc: do_null_check",sizeof(char),19U);
      _T13 = _T1A;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T1A = _T13;
      void * _T1B[1];
      _T1B[0] = &_T1A;
      _T15 = Cyc_Warn_impos_loc2;
      { int (* _T1C)(unsigned int,struct _fat_ptr) = (int (*)(unsigned int,
							      struct _fat_ptr))_T15;
	_T14 = _T1C;
      }_T16 = e;
      _T17 = _T16->loc;
      _T18 = _tag_fat(_T1B,sizeof(void *),1);
      _T14(_T17,_T18);
    };
  }
}
enum Cyc_Toc_PTR_ANS {
  Cyc_Toc_DIRECT_DEREF = 0U,
  Cyc_Toc_DROP_SUBSCRIPT = 1U,
  Cyc_Toc_LEAVE_SUBSCRIPT = 2U
};
static enum Cyc_Toc_PTR_ANS Cyc_Toc_ptr_use_to_c(struct Cyc_Toc_Env * nv,
						 struct Cyc_Absyn_Exp * ptr,
						 void * annot,struct Cyc_Absyn_Exp * index) {
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
  void * _TD;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TE;
  char * _TF;
  char * _T10;
  void * _T11;
  void * _T12;
  struct Cyc_Absyn_Exp * _T13;
  unsigned int _T14;
  void * _T15;
  struct Cyc_Absyn_Tqual _T16;
  struct Cyc_Absyn_Exp * _T17;
  void * _T18;
  struct Cyc_Absyn_Exp * _T19;
  struct Cyc_Absyn_Exp * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  void * _T1C;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T1D;
  char * _T1E;
  char * _T1F;
  void * _T20;
  void * _T21;
  struct Cyc_Absyn_Exp * _T22;
  unsigned int _T23;
  void * _T24;
  struct Cyc_Absyn_Tqual _T25;
  struct Cyc_Absyn_Exp * _T26;
  void * _T27;
  struct Cyc_Absyn_Exp * _T28;
  struct Cyc_Absyn_Exp * _T29;
  struct Cyc_Absyn_Exp * _T2A;
  struct Cyc_Absyn_Exp * _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  struct _fat_ptr _T2E;
  void * _T2F;
  struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct * _T30;
  char * _T31;
  char * _T32;
  void * _T33;
  struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct * _T34;
  char * _T35;
  char * _T36;
  struct Cyc_Absyn_Exp * _T37;
  struct Cyc_Absyn_Exp * _T38;
  unsigned int _T39;
  struct Cyc_Absyn_Exp * _T3A;
  void * _T3B;
  struct Cyc_Absyn_Exp * _T3C;
  void * _T3D;
  struct Cyc_Absyn_Exp * _T3E;
  struct Cyc_Absyn_Exp * _T3F;
  void * _T40;
  struct Cyc_Absyn_Exp * _T41;
  struct _fat_ptr _T42;
  void * _T43;
  struct Cyc_Absyn_Exp * _T44;
  struct Cyc_Absyn_Exp * _T45;
  void * _T46;
  struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct * _T47;
  char * _T48;
  char * _T49;
  void * _T4A;
  void * _T4B;
  struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct * _T4C;
  char * _T4D;
  char * _T4E;
  void * _T4F;
  struct Cyc_Absyn_Exp * _T50;
  struct Cyc_Absyn_Exp * _T51;
  unsigned int _T52;
  struct Cyc_Absyn_Exp * _T53;
  void * _T54;
  long _T55;
  struct Cyc_Absyn_Exp * _T56;
  void * _T57;
  void * _T58;
  long _T59;
  int * _T5A;
  int _T5B;
  struct Cyc_Absyn_Exp * _T5C;
  struct Cyc_Absyn_ArrayInfo _T5D;
  void * _T5E;
  struct Cyc_Absyn_Tqual _T5F;
  struct Cyc_Absyn_Exp * _T60;
  struct Cyc_Absyn_ArrayInfo _T61;
  void * _T62;
  struct Cyc_Absyn_Tqual _T63;
  void * _T64;
  struct Cyc_Absyn_Exp * _T65;
  struct Cyc_Absyn_ArrayInfo _T66;
  struct Cyc_Absyn_Exp * _T67;
  struct Cyc_Absyn_Exp * _T68;
  struct Cyc_Absyn_ArrayInfo _T69;
  void * _T6A;
  struct Cyc_Absyn_Exp * _T6B;
  void * _T6C;
  struct Cyc_Absyn_Exp * _T6D;
  struct Cyc_Absyn_Exp * _T6E;
  void * _T6F;
  struct Cyc_Absyn_Exp * _T70;
  struct _fat_ptr _T71;
  void * _T72;
  struct Cyc_Absyn_Exp * _T73;
  struct Cyc_Absyn_Exp * _T74;
  struct Cyc_Absyn_Exp * _T75;
  void * _T76;
  struct Cyc_Absyn_Exp * _T77;
  struct Cyc_Absyn_Exp * _T78;
  void * _T79;
  struct Cyc_Absyn_Exp * _T7A;
  struct _fat_ptr _T7B;
  void * _T7C;
  struct Cyc_Absyn_Exp * _T7D;
  long _T7E;
  struct Cyc_Absyn_Exp * _T7F;
  struct Cyc_Absyn_Exp * _T80;
  struct Cyc_Absyn_Exp * _T81;
  struct _fat_ptr _T82;
  long _T83;
  struct Cyc_Absyn_Exp * _T84;
  void * _T85;
  struct Cyc_Absyn_Exp * _T86;
  struct _fat_ptr _T87;
  struct Cyc_Absyn_Exp * _T88;
  void * _T89;
  struct Cyc_Absyn_Exp * _T8A;
  void * _T8B;
  void * _T8C;
  struct Cyc_Absyn_Exp * _T8D;
  void * _T8E;
  struct Cyc_Absyn_Exp * _T8F;
  struct _fat_ptr _T90;
  struct Cyc_Warn_String_Warn_Warg_struct _T91;
  int (* _T92)(struct _fat_ptr ap);
  struct _fat_ptr _T93;
  enum Cyc_Toc_PTR_ANS _T94;
  struct Cyc_Warn_String_Warn_Warg_struct _T95;
  int (* _T96)(struct _fat_ptr ap);
  struct _fat_ptr _T97;
  enum Cyc_Toc_PTR_ANS ans;
  long old_lhs = Cyc_Toc_in_lhs(nv);
  _T0 = ptr;
  _T1 = _T0->topt;
  _T2 = _check_null(_T1);
  { void * old_typ = Cyc_Absyn_compress(_T2);
    void * new_typ = Cyc_Toc_typ_to_c(old_typ);
    struct Cyc_Absyn_Exp * fn_e = Cyc_Toc__check_known_subscript_notnull_e;
    Cyc_Toc_set_lhs(nv,0);
    Cyc_Toc_exp_to_c(nv,ptr);
    if (index == 0) { goto _TLF7;
    }
    Cyc_Toc_exp_to_c(nv,index);
    goto _TLF8;
    _TLF7: _TLF8: { void * _T98;
      void * _T99;
      struct Cyc_Absyn_Tqual _T9A;
      void * _T9B;
      _T3 = old_typ;
      _T4 = (int *)_T3;
      _T5 = *_T4;
      if (_T5 != 4) { goto _TLF9;
      }
      _T6 = old_typ;
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T9C = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T6;
	_T7 = _T9C->f1;
	_T9B = _T7.elt_type;
	_T8 = _T9C->f1;
	_T9A = _T8.elt_tq;
	_T9 = _T9C->f1;
	_TA = _T9.ptr_atts;
	_T99 = _TA.bounds;
	_TB = _T9C->f1;
	_TC = _TB.ptr_atts;
	_T98 = _TC.zero_term;
      }{ void * ta = _T9B;
	struct Cyc_Absyn_Tqual tq = _T9A;
	void * b = _T99;
	void * zt = _T98;
	{ struct Cyc_Absyn_Exp * _T9C;
	  _TD = annot;
	  _TE = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_TD;
	  _TF = _TE->tag;
	  _T10 = Cyc_InsertChecks_NoCheck;
	  if (_TF != _T10) { goto _TLFB;
	  }
	  _T11 = Cyc_Absyn_bounds_one();
	  _T12 = b;
	  _T13 = Cyc_Tcutil_get_bounds_exp_constrain(_T11,_T12,1);
	  _T14 = (unsigned int)_T13;
	  if (_T14) { goto _TLFD;
	  }else { goto _TLFF;
	  }
	  _TLFF: _T15 = Cyc_Toc_typ_to_c(ta);
	  _T16 = tq;
	  { void * newt = Cyc_Absyn_cstar_type(_T15,_T16);
	    _T17 = ptr;
	    _T18 = newt;
	    _T19 = Cyc_Toc_deep_copy(ptr);
	    _T1A = Cyc_Toc_get_curr(_T19);
	    _T17->r = Cyc_Toc_cast_it_r(_T18,_T1A);
	    _T1B = ptr;
	    _T1B->topt = newt;
	  }goto _TLFE;
	  _TLFD: _TLFE: ans = 2U;
	  goto _LL5;
	  _TLFB: _T1C = annot;
	  _T1D = (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct *)_T1C;
	  _T1E = _T1D->tag;
	  _T1F = Cyc_InsertChecks_NullOnly;
	  if (_T1E != _T1F) { goto _TL100;
	  }
	  _T20 = Cyc_Absyn_bounds_one();
	  _T21 = b;
	  _T22 = Cyc_Tcutil_get_bounds_exp_constrain(_T20,_T21,1);
	  _T23 = (unsigned int)_T22;
	  if (_T23) { goto _TL102;
	  }else { goto _TL104;
	  }
	  _TL104: _T24 = Cyc_Toc_typ_to_c(ta);
	  _T25 = tq;
	  { void * newt = Cyc_Absyn_cstar_type(_T24,_T25);
	    _T26 = ptr;
	    _T27 = newt;
	    _T28 = Cyc_Toc_deep_copy(ptr);
	    _T29 = Cyc_Toc_get_curr(_T28);
	    _T26->r = Cyc_Toc_cast_it_r(_T27,_T29);
	    _T2A = ptr;
	    _T2A->topt = newt;
	  }goto _TL103;
	  _TL102: _TL103: _T2B = ptr;
	  { struct Cyc_Absyn_Exp * _T9D[1];
	    _T9D[0] = Cyc_Toc_deep_copy(ptr);
	    _T2D = Cyc_Toc__check_null_e;
	    _T2E = _tag_fat(_T9D,sizeof(struct Cyc_Absyn_Exp *),1);
	    _T2C = Cyc_Toc_fncall_exp_dl(_T2D,_T2E);
	  }_T2B->r = _T2C->r;
	  ans = 2U;
	  goto _LL5;
	  _TL100: _T2F = annot;
	  _T30 = (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct *)_T2F;
	  _T31 = _T30->tag;
	  _T32 = Cyc_InsertChecks_NullAndFatBound;
	  if (_T31 != _T32) { goto _TL105;
	  }
	  goto _LLD;
	  _TL105: _T33 = annot;
	  _T34 = (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct *)_T33;
	  _T35 = _T34->tag;
	  _T36 = Cyc_InsertChecks_FatBound;
	  if (_T35 != _T36) { goto _TL107;
	  }
	  _LLD: { void * ta1 = Cyc_Toc_typ_to_c(ta);
	    void * newt = Cyc_Absyn_cstar_type(ta1,tq);
	    _T38 = index;
	    _T39 = (unsigned int)_T38;
	    if (! _T39) { goto _TL109;
	    }
	    _T37 = index;
	    goto _TL10A;
	    _TL109: _T3A = Cyc_Absyn_uint_exp(0U,0U);
	    _T3B = Cyc_Absyn_uint_type;
	    _T37 = Cyc_Absyn_set_type(_T3A,_T3B);
	    _TL10A: { struct Cyc_Absyn_Exp * ind = _T37;
	      _T3C = ptr;
	      _T3D = newt;
	      { struct Cyc_Absyn_Exp * _T9D[3];
		_T9D[0] = Cyc_Toc_deep_copy(ptr);
		_T3F = Cyc_Absyn_sizeoftype_exp(ta1,0U);
		_T40 = Cyc_Absyn_uint_type;
		_T9D[1] = Cyc_Absyn_set_type(_T3F,_T40);
		_T9D[2] = ind;
		_T41 = Cyc_Toc__check_fat_subscript_e;
		_T42 = _tag_fat(_T9D,sizeof(struct Cyc_Absyn_Exp *),3);
		_T3E = Cyc_Toc_fncall_exp_dl(_T41,_T42);
	      }_T43 = Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);
	      _T44 = Cyc_Absyn_set_type(_T3E,_T43);
	      _T3C->r = Cyc_Toc_cast_it_r(_T3D,_T44);
	      _T45 = ptr;
	      _T45->topt = newt;
	      ans = 0U;
	      goto _LL5;
	    }
	  }_TL107: _T46 = annot;
	  _T47 = (struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct *)_T46;
	  _T48 = _T47->tag;
	  _T49 = Cyc_InsertChecks_NullAndThinBound;
	  if (_T48 != _T49) { goto _TL10B;
	  }
	  _T4A = annot;
	  { struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct * _T9D = (struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct *)_T4A;
	    _T9C = _T9D->f1;
	  }{ struct Cyc_Absyn_Exp * bd = _T9C;
	    fn_e = Cyc_Toc__check_known_subscript_null_e;
	    _T9C = bd;
	    goto _LL11;
	  }_TL10B: _T4B = annot;
	  _T4C = (struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct *)_T4B;
	  _T4D = _T4C->tag;
	  _T4E = Cyc_InsertChecks_ThinBound;
	  if (_T4D != _T4E) { goto _TL10D;
	  }
	  _T4F = annot;
	  { struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct * _T9D = (struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct *)_T4F;
	    _T9C = _T9D->f1;
	  }_LL11: { struct Cyc_Absyn_Exp * bd = _T9C;
	    void * ta1 = Cyc_Toc_typ_to_c(ta);
	    _T51 = index;
	    _T52 = (unsigned int)_T51;
	    if (! _T52) { goto _TL10F;
	    }
	    _T50 = index;
	    goto _TL110;
	    _TL10F: _T53 = Cyc_Absyn_uint_exp(0U,0U);
	    _T54 = Cyc_Absyn_uint_type;
	    _T50 = Cyc_Absyn_set_type(_T53,_T54);
	    _TL110: { struct Cyc_Absyn_Exp * ind = _T50;
	      struct _tuple13 _T9D = Cyc_Evexp_eval_const_uint_exp(bd);
	      long _T9E;
	      unsigned int _T9F;
	      _T9F = _T9D.f0;
	      _T9E = _T9D.f1;
	      { unsigned int i = _T9F;
		long valid = _T9E;
		_T55 = valid;
		if (_T55) { goto _TL115;
		}else { goto _TL113;
		}
		_TL115: if (i != 1U) { goto _TL113;
		}else { goto _TL114;
		}
		_TL114: _T56 = ptr;
		_T57 = _T56->topt;
		_T58 = _check_null(_T57);
		_T59 = Cyc_Tcutil_is_zeroterm_pointer_type(_T58);
		if (_T59) { goto _TL111;
		}else { goto _TL113;
		}
		_TL113: { struct Cyc_Absyn_Exp * newp = Cyc_Toc_deep_copy(ptr);
		  void * _TA0 = Cyc_Absyn_compress(ta1);
		  struct Cyc_Absyn_ArrayInfo _TA1;
		  _T5A = (int *)_TA0;
		  _T5B = *_T5A;
		  if (_T5B != 5) { goto _TL116;
		  }
		  { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _TA2 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_TA0;
		    _TA1 = _TA2->f1;
		  }{ struct Cyc_Absyn_ArrayInfo ainfo = _TA1;
		    _T5C = newp;
		    _T5D = ainfo;
		    _T5E = _T5D.elt_type;
		    _T5F = tq;
		    _T5C->topt = Cyc_Absyn_cstar_type(_T5E,_T5F);
		    _T60 = ptr;
		    _T61 = ainfo;
		    _T62 = _T61.elt_type;
		    _T63 = tq;
		    _T64 = Cyc_Absyn_cstar_type(_T62,_T63);
		    { struct Cyc_Absyn_Exp * _TA2[4];
		      _TA2[0] = newp;
		      _TA2[1] = bd;
		      _T66 = ainfo;
		      _T67 = _T66.num_elts;
		      _T68 = _check_null(_T67);
		      _T69 = ainfo;
		      _T6A = _T69.elt_type;
		      _T6B = Cyc_Absyn_sizeoftype_exp(_T6A,0U);
		      _T6C = Cyc_Absyn_uint_type;
		      _T6D = Cyc_Absyn_set_type(_T6B,_T6C);
		      _T6E = Cyc_Absyn_times_exp(_T68,_T6D,0U);
		      _T6F = Cyc_Absyn_uint_type;
		      _TA2[2] = Cyc_Absyn_set_type(_T6E,_T6F);
		      _TA2[3] = ind;
		      _T70 = fn_e;
		      _T71 = _tag_fat(_TA2,sizeof(struct Cyc_Absyn_Exp *),
				      4);
		      _T65 = Cyc_Toc_fncall_exp_dl(_T70,_T71);
		    }_T72 = Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,tq);
		    _T73 = Cyc_Absyn_set_type(_T65,_T72);
		    _T60->r = Cyc_Toc_cast_it_r(_T64,_T73);
		    ans = 1U;
		    goto _LL17;
		  }_TL116: _T74 = newp;
		  _T74->topt = Cyc_Absyn_cstar_type(ta1,tq);
		  _T75 = ptr;
		  _T76 = Cyc_Absyn_cstar_type(ta1,tq);
		  { struct Cyc_Absyn_Exp * _TA2[4];
		    _TA2[0] = newp;
		    _TA2[1] = bd;
		    _T78 = Cyc_Absyn_sizeoftype_exp(ta1,0U);
		    _T79 = Cyc_Absyn_uint_type;
		    _TA2[2] = Cyc_Absyn_set_type(_T78,_T79);
		    _TA2[3] = ind;
		    _T7A = fn_e;
		    _T7B = _tag_fat(_TA2,sizeof(struct Cyc_Absyn_Exp *),4);
		    _T77 = Cyc_Toc_fncall_exp_dl(_T7A,_T7B);
		  }_T7C = Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,tq);
		  _T7D = Cyc_Absyn_set_type(_T77,_T7C);
		  _T75->r = Cyc_Toc_cast_it_r(_T76,_T7D);
		  ans = 0U;
		  goto _LL17;
		  _LL17: ;
		}goto _TL112;
		_TL111: _T7E = Cyc_Toc_is_zero(bd);
		if (! _T7E) { goto _TL118;
		}
		if (fn_e != Cyc_Toc__check_known_subscript_null_e) { goto _TL11A;
		}
		_T7F = ptr;
		{ struct Cyc_Absyn_Exp * _TA0[1];
		  _TA0[0] = Cyc_Toc_deep_copy(ptr);
		  _T81 = Cyc_Toc__check_null_e;
		  _T82 = _tag_fat(_TA0,sizeof(struct Cyc_Absyn_Exp *),1);
		  _T80 = Cyc_Toc_fncall_exp_dl(_T81,_T82);
		}_T7F->r = _T80->r;
		goto _TL11B;
		_TL11A: _TL11B: ans = 2U;
		goto _TL119;
		_TL118: _T83 = Cyc_Toc_isCharStar(ptr);
		if (! _T83) { goto _TL11C;
		}
		_T84 = ptr;
		{ struct Cyc_Absyn_Exp * _TA0[3];
		  _TA0[0] = Cyc_Toc_deep_copy(ptr);
		  _TA0[1] = bd;
		  _TA0[2] = ind;
		  _T86 = Cyc_Toc__zero_arr_plus_char_e;
		  _T87 = _tag_fat(_TA0,sizeof(struct Cyc_Absyn_Exp *),3);
		  _T85 = Cyc_Toc_fncall_exp_r(_T86,_T87);
		}_T84->r = _T85;
		goto _TL11D;
		_TL11C: _T88 = ptr;
		_T89 = Cyc_Toc_typ_to_c(old_typ);
		{ struct Cyc_Absyn_Exp * _TA0[4];
		  _T8B = Cyc_Toc_typ_to_c(old_typ);
		  _T8C = Cyc_Tcutil_pointer_elt_type(_T8B);
		  _T8D = Cyc_Absyn_sizeoftype_exp(_T8C,0U);
		  _T8E = Cyc_Absyn_uint_type;
		  _TA0[0] = Cyc_Absyn_set_type(_T8D,_T8E);
		  _TA0[1] = Cyc_Toc_deep_copy(ptr);
		  _TA0[2] = bd;
		  _TA0[3] = ind;
		  _T8F = Cyc_Toc__zero_arr_plus_other_e;
		  _T90 = _tag_fat(_TA0,sizeof(struct Cyc_Absyn_Exp *),4);
		  _T8A = Cyc_Toc_fncall_exp_dl(_T8F,_T90);
		}_T88->r = Cyc_Toc_cast_it_r(_T89,_T8A);
		_TL11D: ans = 0U;
		_TL119: _TL112: goto _LL5;
	      }
	    }
	  }_TL10D: { struct Cyc_Warn_String_Warn_Warg_struct _T9D;
	    _T9D.tag = 0;
	    _T9D.f1 = _tag_fat("FIX: ptr_use_to_c, bad annotation",sizeof(char),
			       34U);
	    _T91 = _T9D;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T9D = _T91;
	    void * _T9E[1];
	    _T9E[0] = &_T9D;
	    { int (* _T9F)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	      _T92 = _T9F;
	    }_T93 = _tag_fat(_T9E,sizeof(void *),1);
	    _T92(_T93);
	  }_LL5: ;
	}Cyc_Toc_set_lhs(nv,old_lhs);
	_T94 = ans;
	return _T94;
      }_TLF9: { struct Cyc_Warn_String_Warn_Warg_struct _T9C;
	_T9C.tag = 0;
	_T9C.f1 = _tag_fat("ptr_use_to_c: non-pointer-type",sizeof(char),
			   31U);
	_T95 = _T9C;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T9C = _T95;
	void * _T9D[1];
	_T9D[0] = &_T9C;
	{ int (* _T9E)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	  _T96 = _T9E;
	}_T97 = _tag_fat(_T9D,sizeof(void *),1);
	_T96(_T97);
      };
    }
  }
}
static void * Cyc_Toc_get_cyc_type(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Warn_String_Warn_Warg_struct _T2;
  int (* _T3)(struct _fat_ptr ap);
  struct _fat_ptr _T4;
  struct Cyc_Absyn_Exp * _T5;
  void * _T6;
  _T0 = e;
  _T1 = _T0->topt;
  if (_T1 != 0) { goto _TL11E;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _T7;
    _T7.tag = 0;
    _T7.f1 = _tag_fat("Missing type in primop ",sizeof(char),24U);
    _T2 = _T7;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T7 = _T2;
    void * _T8[1];
    _T8[0] = &_T7;
    { int (* _T9)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
      _T3 = _T9;
    }_T4 = _tag_fat(_T8,sizeof(void *),1);
    _T3(_T4);
  }goto _TL11F;
  _TL11E: _TL11F: _T5 = e;
  _T6 = _T5->topt;
  return _T6;
}
static struct _tuple26 * Cyc_Toc_tup_to_c(struct Cyc_Absyn_Exp * e) {
  struct _tuple26 * _T0;
  struct Cyc_Absyn_Exp * _T1;
  void * _T2;
  void * _T3;
  { struct _tuple26 * _T4 = _cycalloc(sizeof(struct _tuple26));
    _T4->f0 = Cyc_Toc_mt_tq;
    _T1 = e;
    _T2 = _T1->topt;
    _T3 = _check_null(_T2);
    _T4->f1 = Cyc_Toc_typ_to_c(_T3);
    _T0 = (struct _tuple26 *)_T4;
  }return _T0;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_array_length_exp(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct _tuple22 * _T5;
  struct _tuple22 _T6;
  struct Cyc_List_List * _T7;
  int (* _T8)(struct _fat_ptr);
  struct _fat_ptr _T9;
  struct Cyc_List_List * _TA;
  int _TB;
  struct Cyc_Absyn_Exp * _TC;
  void * _TD;
  struct Cyc_Absyn_Exp * _TE;
  long _TF;
  struct Cyc_Absyn_Exp * _T10;
  struct Cyc_Absyn_Exp * _T11;
  void * _T12;
  struct Cyc_Absyn_Exp * _T13;
  struct Cyc_Absyn_Exp * _T14;
  void * _T15;
  _T0 = e;
  { void * _T16 = _T0->r;
    long _T17;
    struct Cyc_Absyn_Exp * _T18;
    struct Cyc_List_List * _T19;
    _T1 = (int *)_T16;
    _T2 = *_T1;
    switch (_T2) {
    case 25: 
      { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T1A = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T16;
	_T19 = _T1A->f1;
      }{ struct Cyc_List_List * dles = _T19;
	{ struct Cyc_List_List * dles2 = dles;
	  _TL124: if (dles2 != 0) { goto _TL122;
	  }else { goto _TL123;
	  }
	  _TL122: _T3 = dles2;
	  _T4 = _T3->hd;
	  _T5 = (struct _tuple22 *)_T4;
	  _T6 = *_T5;
	  _T7 = _T6.f0;
	  if (_T7 == 0) { goto _TL125;
	  }
	  { int (* _T1A)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Toc_unimp;
	    _T8 = _T1A;
	  }_T9 = _tag_fat("array designators for abstract-field initialization",
			  sizeof(char),52U);
	  _T8(_T9);
	  goto _TL126;
	  _TL125: _TL126: _TA = dles2;
	  dles2 = _TA->tl;
	  goto _TL124;
	  _TL123: ;
	}_TB = Cyc_List_length(dles);
	_TC = Cyc_Absyn_signed_int_exp(_TB,0U);
	_TD = Cyc_Absyn_sint_type;
	_T18 = Cyc_Absyn_set_type(_TC,_TD);
	_T17 = 0;
	goto _LL4;
      }
    case 26: 
      { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T1A = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T16;
	_T18 = _T1A->f2;
	_T17 = _T1A->f4;
      }_LL4: { struct Cyc_Absyn_Exp * bd = _T18;
	long zt = _T17;
	_T18 = bd;
	_T17 = zt;
	goto _LL6;
      }
    case 27: 
      { struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T1A = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T16;
	_T18 = _T1A->f1;
	_T17 = _T1A->f3;
      }_LL6: { struct Cyc_Absyn_Exp * bd = _T18;
	long zt = _T17;
	bd = Cyc_Toc_deep_copy(bd);
	_TF = zt;
	if (! _TF) { goto _TL127;
	}
	_T10 = bd;
	_T11 = Cyc_Absyn_uint_exp(1U,0U);
	_T12 = Cyc_Absyn_uint_type;
	_T13 = Cyc_Absyn_set_type(_T11,_T12);
	_T14 = Cyc_Absyn_add_exp(_T10,_T13,0U);
	_T15 = Cyc_Absyn_uint_type;
	_TE = Cyc_Absyn_set_type(_T14,_T15);
	goto _TL128;
	_TL127: _TE = bd;
	_TL128: return _TE;
      }
    default: 
      return 0;
    }
    ;
  }
}
static struct Cyc_Absyn_Exp * Cyc_Toc_get_varsizeexp(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Exp * _T3;
  void * _T4;
  void * _T5;
  int * _T6;
  int _T7;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T8;
  void * _T9;
  int * _TA;
  int _TB;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TC;
  void * _TD;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TE;
  union Cyc_Absyn_AggrInfo _TF;
  struct _union_AggrInfo_KnownAggr _T10;
  unsigned int _T11;
  void * _T12;
  union Cyc_Absyn_AggrInfo _T13;
  struct _union_AggrInfo_KnownAggr _T14;
  struct Cyc_Absyn_Aggrdecl * * _T15;
  struct Cyc_Absyn_Aggrdecl * _T16;
  struct Cyc_Absyn_AggrdeclImpl * _T17;
  struct Cyc_Absyn_Aggrdecl * _T18;
  enum Cyc_Absyn_AggrKind _T19;
  int _T1A;
  struct Cyc_Absyn_Aggrdecl * _T1B;
  struct Cyc_Absyn_AggrdeclImpl * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  void * _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  struct _fat_ptr * _T24;
  struct Cyc_Absyn_Aggrfield * _T25;
  struct _fat_ptr * _T26;
  int _T27;
  struct Cyc_Absyn_Exp * _T28;
  struct Cyc_Absyn_Aggrfield * _T29;
  void * _T2A;
  int * _T2B;
  int _T2C;
  struct Cyc_Absyn_ArrayInfo _T2D;
  struct Cyc_Absyn_ArrayInfo _T2E;
  long _T2F;
  struct Cyc_Absyn_Exp * _T30;
  struct Cyc_Absyn_Exp * _T31;
  void * _T32;
  struct Cyc_Absyn_Exp * _T33;
  struct _fat_ptr _T34;
  void * _T35;
  struct Cyc_Absyn_Exp * _T36;
  int _T37;
  struct Cyc_Absyn_Exp * _T38;
  void * _T39;
  struct Cyc_Absyn_Exp * _T3A;
  struct Cyc_Absyn_Exp * _T3B;
  void * _T3C;
  struct Cyc_Absyn_Exp * _T3D;
  struct Cyc_List_List * _T3E;
  struct Cyc_Warn_String_Warn_Warg_struct _T3F;
  int (* _T40)(struct _fat_ptr ap);
  struct _fat_ptr _T41;
  struct Cyc_List_List * dles;
  struct Cyc_List_List * field_types;
  _T0 = e;
  { void * _T42 = _T0->r;
    struct Cyc_List_List * _T43;
    _T1 = (int *)_T42;
    _T2 = *_T1;
    if (_T2 != 28) { goto _TL129;
    }
    { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T44 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T42;
      _T43 = _T44->f3;
    }{ struct Cyc_List_List * dles2 = _T43;
      dles = dles2;
      goto _LL0;
    }_TL129: return 0;
    _LL0: ;
  }_T3 = e;
  _T4 = _T3->topt;
  _T5 = _check_null(_T4);
  { void * _T42 = Cyc_Absyn_compress(_T5);
    struct Cyc_Absyn_Aggrdecl * _T43;
    _T6 = (int *)_T42;
    _T7 = *_T6;
    if (_T7 != 0) { goto _TL12B;
    }
    _T8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T42;
    _T9 = _T8->f1;
    _TA = (int *)_T9;
    _TB = *_TA;
    if (_TB != 24) { goto _TL12D;
    }
    _TC = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T42;
    _TD = _TC->f1;
    _TE = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TD;
    _TF = _TE->f1;
    _T10 = _TF.KnownAggr;
    _T11 = _T10.tag;
    if (_T11 != 2) { goto _TL12F;
    }
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T44 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T42;
      _T12 = _T44->f1;
      { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T45 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T12;
	_T13 = _T45->f1;
	_T14 = _T13.KnownAggr;
	_T15 = _T14.val;
	{ struct Cyc_Absyn_Aggrdecl * _T46 = *_T15;
	  _T43 = _T46;
	}
      }
    }{ struct Cyc_Absyn_Aggrdecl * ad = _T43;
      _T16 = ad;
      _T17 = _T16->impl;
      if (_T17 == 0) { goto _TL133;
      }else { goto _TL134;
      }
      _TL134: _T18 = ad;
      _T19 = _T18->kind;
      _T1A = (int)_T19;
      if (_T1A == 1) { goto _TL133;
      }else { goto _TL131;
      }
      _TL133: return 0;
      _TL131: _T1B = ad;
      _T1C = _T1B->impl;
      field_types = _T1C->fields;
      goto _LL5;
    }_TL12F: goto _LL8;
    _TL12D: goto _LL8;
    _TL12B: _LL8: return 0;
    _LL5: ;
  }if (field_types != 0) { goto _TL135;
  }
  return 0;
  _TL135: _TL13A: _T1D = _check_null(field_types);
  _T1E = _T1D->tl;
  if (_T1E != 0) { goto _TL138;
  }else { goto _TL139;
  }
  _TL138: _T1F = field_types;
  field_types = _T1F->tl;
  goto _TL13A;
  _TL139: _T20 = field_types;
  _T21 = _T20->hd;
  { struct Cyc_Absyn_Aggrfield * last_type_field = (struct Cyc_Absyn_Aggrfield *)_T21;
    _TL13E: if (dles != 0) { goto _TL13C;
    }else { goto _TL13D;
    }
    _TL13C: _T22 = dles;
    _T23 = _T22->hd;
    { struct _tuple22 * _T42 = (struct _tuple22 *)_T23;
      struct Cyc_Absyn_Exp * _T43;
      struct Cyc_List_List * _T44;
      { struct _tuple22 _T45 = *_T42;
	_T44 = _T45.f0;
	_T43 = _T45.f1;
      }{ struct Cyc_List_List * ds = _T44;
	struct Cyc_Absyn_Exp * e2 = _T43;
	struct _fat_ptr * f = Cyc_Absyn_designatorlist_to_fieldname(ds);
	_T24 = f;
	_T25 = last_type_field;
	_T26 = _T25->name;
	_T27 = Cyc_strptrcmp(_T24,_T26);
	if (_T27) { goto _TL13F;
	}else { goto _TL141;
	}
	_TL141: { struct Cyc_Absyn_Exp * nested_ans = Cyc_Toc_get_varsizeexp(e2);
	  if (nested_ans == 0) { goto _TL142;
	  }
	  _T28 = nested_ans;
	  return _T28;
	  _TL142: _T29 = last_type_field;
	  _T2A = _T29->type;
	  { void * _T45 = Cyc_Absyn_compress(_T2A);
	    struct Cyc_Absyn_Exp * _T46;
	    void * _T47;
	    _T2B = (int *)_T45;
	    _T2C = *_T2B;
	    if (_T2C != 5) { goto _TL144;
	    }
	    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T48 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T45;
	      _T2D = _T48->f1;
	      _T47 = _T2D.elt_type;
	      _T2E = _T48->f1;
	      _T46 = _T2E.num_elts;
	    }{ void * elt_type = _T47;
	      struct Cyc_Absyn_Exp * type_bd = _T46;
	      if (type_bd == 0) { goto _TL148;
	      }else { goto _TL149;
	      }
	      _TL149: _T2F = Cyc_Toc_is_zero(type_bd);
	      if (_T2F) { goto _TL146;
	      }else { goto _TL148;
	      }
	      _TL148: return 0;
	      _TL146: { struct Cyc_Absyn_Exp * _T48[2];
		_T48[0] = Cyc_Toc_array_length_exp(e2);
		_T31 = Cyc_Absyn_sizeoftype_exp(elt_type,0U);
		_T32 = Cyc_Absyn_uint_type;
		_T48[1] = Cyc_Absyn_set_type(_T31,_T32);
		_T33 = Cyc_Toc__check_times_e;
		_T34 = _tag_fat(_T48,sizeof(struct Cyc_Absyn_Exp *),2);
		_T30 = Cyc_Toc_fncall_exp_dl(_T33,_T34);
	      }_T35 = Cyc_Absyn_uint_type;
	      _T36 = Cyc_Absyn_set_type(_T30,_T35);
	      _T37 = (int)sizeof(double);
	      _T38 = Cyc_Absyn_signed_int_exp(_T37,0U);
	      _T39 = Cyc_Absyn_sint_type;
	      _T3A = Cyc_Absyn_set_type(_T38,_T39);
	      _T3B = Cyc_Absyn_add_exp(_T36,_T3A,0U);
	      _T3C = Cyc_Absyn_uint_type;
	      _T3D = Cyc_Absyn_set_type(_T3B,_T3C);
	      return _T3D;
	    }_TL144: return 0;
	    ;
	  }
	}goto _TL140;
	_TL13F: _TL140: ;
      }
    }_T3E = dles;
    dles = _T3E->tl;
    goto _TL13E;
    _TL13D: { struct Cyc_Warn_String_Warn_Warg_struct _T42;
      _T42.tag = 0;
      _T42.f1 = _tag_fat("get_varsizeexp: did not find last struct field",
			 sizeof(char),47U);
      _T3F = _T42;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T42 = _T3F;
      void * _T43[1];
      _T43[0] = &_T42;
      { int (* _T44)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	_T40 = _T44;
      }_T41 = _tag_fat(_T43,sizeof(void *),1);
      _T40(_T41);
    }
  }
}
static int Cyc_Toc_get_member_offset(struct Cyc_Absyn_Aggrdecl * ad,struct _fat_ptr * f) {
  struct Cyc_Absyn_Aggrdecl * _T0;
  struct Cyc_Absyn_AggrdeclImpl * _T1;
  struct Cyc_Absyn_AggrdeclImpl * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_Absyn_Aggrfield * _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr * _T8;
  struct _fat_ptr _T9;
  int _TA;
  int _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_Warn_String_Warn_Warg_struct _TD;
  struct Cyc_Warn_String_Warn_Warg_struct _TE;
  struct _fat_ptr * _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  int (* _T11)(struct _fat_ptr ap);
  struct _fat_ptr _T12;
  _T0 = ad;
  _T1 = _T0->impl;
  _T2 = _check_null(_T1);
  { struct Cyc_List_List * fs = _T2->fields;
    { int i = 1;
      _TL14D: if (fs != 0) { goto _TL14B;
      }else { goto _TL14C;
      }
      _TL14B: _T3 = fs;
      _T4 = _T3->hd;
      _T5 = (struct Cyc_Absyn_Aggrfield *)_T4;
      _T6 = _T5->name;
      _T7 = *_T6;
      _T8 = f;
      _T9 = *_T8;
      _TA = Cyc_strcmp(_T7,_T9);
      if (_TA != 0) { goto _TL14E;
      }
      _TB = i;
      return _TB;
      _TL14E: _TC = fs;
      fs = _TC->tl;
      i = i + 1;
      goto _TL14D;
      _TL14C: ;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T13;
      _T13.tag = 0;
      _T13.f1 = _tag_fat("get_member_offset ",sizeof(char),19U);
      _TD = _T13;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T13 = _TD;
      { struct Cyc_Warn_String_Warn_Warg_struct _T14;
	_T14.tag = 0;
	_TF = f;
	_T14.f1 = *_TF;
	_TE = _T14;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T14 = _TE;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T15;
	  _T15.tag = 0;
	  _T15.f1 = _tag_fat(" failed",sizeof(char),8U);
	  _T10 = _T15;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T15 = _T10;
	  void * _T16[3];
	  _T16[0] = &_T13;
	  _T16[1] = &_T14;
	  _T16[2] = &_T15;
	  { int (* _T17)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T11 = _T17;
	  }_T12 = _tag_fat(_T16,sizeof(void *),3);
	  _T11(_T12);
	}
      }
    }
  }
}
 struct _tuple36 {
  struct Cyc_Absyn_PrimopOpt * f0;
  struct Cyc_Absyn_Exp * f1;
};
static struct Cyc_Absyn_Exp * Cyc_Toc_assignop_lvalue(struct Cyc_Absyn_Exp * el,
						      struct _tuple36 * pr) {
  struct Cyc_Absyn_Exp * _T0;
  struct _tuple36 * _T1;
  struct _tuple36 _T2;
  struct Cyc_Absyn_PrimopOpt * _T3;
  struct _tuple36 * _T4;
  struct _tuple36 _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Absyn_Exp * _T9;
  _T0 = el;
  _T1 = pr;
  _T2 = *_T1;
  _T3 = _T2.f0;
  _T4 = pr;
  _T5 = *_T4;
  _T6 = _T5.f1;
  { struct Cyc_Absyn_Exp * res = Cyc_Absyn_assignop_exp(_T0,_T3,_T6,0U);
    _T7 = res;
    _T8 = el;
    _T7->topt = _T8->topt;
    _T9 = res;
    return _T9;
  }
}
static struct Cyc_Absyn_Exp * Cyc_Toc_address_lvalue(struct Cyc_Absyn_Exp * e1,
						     long ignore) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct Cyc_Absyn_Exp * _T3;
  void * _T4;
  struct Cyc_Absyn_Tqual _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct Cyc_Absyn_Exp * res = Cyc_Absyn_address_exp(e1,0U);
  _T0 = e1;
  _T1 = _T0->topt;
  if (_T1 == 0) { goto _TL150;
  }
  _T2 = res;
  _T3 = e1;
  _T4 = _T3->topt;
  _T5 = Cyc_Toc_mt_tq;
  _T2->topt = Cyc_Absyn_cstar_type(_T4,_T5);
  goto _TL151;
  _TL150: _TL151: _T6 = res;
  return _T6;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_incr_lvalue(struct Cyc_Absyn_Exp * e1,
						  enum Cyc_Absyn_Incrementor * incr) {
  struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T0;
  enum Cyc_Absyn_Incrementor * _T1;
  void * _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T6 = _cycalloc(sizeof(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct));
    _T6->tag = 5;
    _T6->f1 = e1;
    _T1 = incr;
    _T6->f2 = *_T1;
    _T0 = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_T6;
  }_T2 = (void *)_T0;
  { struct Cyc_Absyn_Exp * res = Cyc_Absyn_new_exp(_T2,0U);
    _T3 = res;
    _T4 = e1;
    _T3->topt = _T4->topt;
    _T5 = res;
    return _T5;
  }
}
static void Cyc_Toc_lvalue_assign_stmt(struct Cyc_Absyn_Stmt *,struct Cyc_List_List *,
				       struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
								  void *),
				       void *);
static void Cyc_Toc_lvalue_assign(struct Cyc_Absyn_Exp * e1,struct Cyc_List_List * fs,
				  struct Cyc_Absyn_Exp * (* f)(struct Cyc_Absyn_Exp *,
							       void *),void * f_env) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Stmt * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_Absyn_Exp * (* _T5)(struct Cyc_Absyn_Exp *,void *);
  void * _T6;
  void * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_Absyn_Exp * (* _TA)(struct Cyc_Absyn_Exp *,void *);
  void * _TB;
  struct Cyc_Absyn_Exp * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct Cyc_Absyn_Exp * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_Absyn_Exp * (* _T10)(struct Cyc_Absyn_Exp *,void *);
  void * _T11;
  struct Cyc_Absyn_Exp * _T12;
  struct Cyc_List_List * _T13;
  void * _T14;
  struct _fat_ptr * _T15;
  struct Cyc_Absyn_Exp * _T16;
  unsigned int _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_Absyn_Exp * _T19;
  struct Cyc_Absyn_Exp * _T1A;
  _T0 = e1;
  { void * _T1B = _T0->r;
    long _T1C;
    long _T1D;
    struct _fat_ptr * _T1E;
    struct Cyc_Absyn_Exp * _T1F;
    void * _T20;
    _T1 = (int *)_T1B;
    _T2 = *_T1;
    switch (_T2) {
    case 36: 
      { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T21 = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T1B;
	_T20 = _T21->f1;
      }{ struct Cyc_Absyn_Stmt * s = _T20;
	_T3 = s;
	_T4 = fs;
	_T5 = f;
	_T6 = f_env;
	Cyc_Toc_lvalue_assign_stmt(_T3,_T4,_T5,_T6);
	goto _LL0;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T21 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T1B;
	_T7 = _T21->f1;
	_T20 = (void *)_T7;
	_T1F = _T21->f2;
      }{ void * t = _T20;
	struct Cyc_Absyn_Exp * e = _T1F;
	_T8 = e;
	_T9 = fs;
	_TA = f;
	_TB = f_env;
	Cyc_Toc_lvalue_assign(_T8,_T9,_TA,_TB);
	goto _LL0;
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T21 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T1B;
	_T1F = _T21->f1;
	_T1E = _T21->f2;
	_T1D = _T21->f3;
	_T1C = _T21->f4;
      }{ struct Cyc_Absyn_Exp * e = _T1F;
	struct _fat_ptr * fld = _T1E;
	long is_tagged = _T1D;
	long is_read = _T1C;
	_TC = e1;
	_TD = e;
	_TC->r = _TD->r;
	_TE = e1;
	{ struct Cyc_List_List * _T21 = _cycalloc(sizeof(struct Cyc_List_List));
	  _T21->hd = fld;
	  _T21->tl = fs;
	  _TF = (struct Cyc_List_List *)_T21;
	}_T10 = f;
	_T11 = f_env;
	Cyc_Toc_lvalue_assign(_TE,_TF,_T10,_T11);
	goto _LL0;
      }
    default: 
      { struct Cyc_Absyn_Exp * e1_copy = Cyc_Toc_deep_copy(e1);
	_TL156: if (fs != 0) { goto _TL154;
	}else { goto _TL155;
	}
	_TL154: _T12 = e1_copy;
	_T13 = fs;
	_T14 = _T13->hd;
	_T15 = (struct _fat_ptr *)_T14;
	_T16 = e1_copy;
	_T17 = _T16->loc;
	e1_copy = Cyc_Toc_member_exp(_T12,_T15,_T17);
	_T18 = fs;
	fs = _T18->tl;
	goto _TL156;
	_TL155: _T19 = e1;
	_T1A = f(e1_copy,f_env);
	_T19->r = _T1A->r;
	goto _LL0;
      }
    }
    _LL0: ;
  }
}
static void Cyc_Toc_lvalue_assign_stmt(struct Cyc_Absyn_Stmt * s,struct Cyc_List_List * fs,
				       struct Cyc_Absyn_Exp * (* f)(struct Cyc_Absyn_Exp *,
								    void *),
				       void * f_env) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_Absyn_Exp * (* _T5)(struct Cyc_Absyn_Exp *,void *);
  void * _T6;
  struct Cyc_Absyn_Stmt * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_Absyn_Exp * (* _T9)(struct Cyc_Absyn_Exp *,void *);
  void * _TA;
  struct Cyc_Absyn_Stmt * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_Absyn_Exp * (* _TD)(struct Cyc_Absyn_Exp *,void *);
  void * _TE;
  struct Cyc_Warn_String_Warn_Warg_struct _TF;
  struct Cyc_Warn_Stmt_Warn_Warg_struct _T10;
  struct _fat_ptr _T11;
  _T0 = s;
  { void * _T12 = _T0->r;
    struct Cyc_Absyn_Stmt * _T13;
    struct Cyc_Absyn_Decl * _T14;
    struct Cyc_Absyn_Exp * _T15;
    _T1 = (int *)_T12;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_T12;
	_T15 = _T16->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T15;
	_T3 = e1;
	_T4 = fs;
	_T5 = f;
	_T6 = f_env;
	Cyc_Toc_lvalue_assign(_T3,_T4,_T5,_T6);
	goto _LL0;
      }
    case 12: 
      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T12;
	_T14 = _T16->f1;
	_T13 = _T16->f2;
      }{ struct Cyc_Absyn_Decl * d = _T14;
	struct Cyc_Absyn_Stmt * s2 = _T13;
	_T7 = s2;
	_T8 = fs;
	_T9 = f;
	_TA = f_env;
	Cyc_Toc_lvalue_assign_stmt(_T7,_T8,_T9,_TA);
	goto _LL0;
      }
    case 2: 
      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T12;
	_T13 = _T16->f2;
      }{ struct Cyc_Absyn_Stmt * s2 = _T13;
	_TB = s2;
	_TC = fs;
	_TD = f;
	_TE = f_env;
	Cyc_Toc_lvalue_assign_stmt(_TB,_TC,_TD,_TE);
	goto _LL0;
      }
    default: 
      { struct Cyc_Warn_String_Warn_Warg_struct _T16;
	_T16.tag = 0;
	_T16.f1 = _tag_fat("lvalue_assign_stmt: ",sizeof(char),21U);
	_TF = _T16;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T16 = _TF;
	{ struct Cyc_Warn_Stmt_Warn_Warg_struct _T17;
	  _T17.tag = 5;
	  _T17.f1 = s;
	  _T10 = _T17;
	}{ struct Cyc_Warn_Stmt_Warn_Warg_struct _T17 = _T10;
	  void * _T18[2];
	  _T18[0] = &_T16;
	  _T18[1] = &_T17;
	  _T11 = _tag_fat(_T18,sizeof(void *),2);
	  Cyc_Toc_toc_impos(_T11);
	}
      }
    }
    _LL0: ;
  }
}
static void Cyc_Toc_push_address_stmt(struct Cyc_Absyn_Stmt *);
static struct Cyc_Absyn_Exp * Cyc_Toc_push_address_exp(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T3;
  void * * _T4;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T5;
  struct Cyc_Absyn_Exp * * _T6;
  struct Cyc_Absyn_Exp * * _T7;
  struct Cyc_Absyn_Exp * * _T8;
  struct Cyc_Absyn_Exp * _T9;
  void * * _TA;
  void * * _TB;
  void * _TC;
  struct Cyc_Absyn_Tqual _TD;
  struct Cyc_Absyn_Exp * _TE;
  void * * _TF;
  struct Cyc_Absyn_Exp * _T10;
  struct Cyc_Absyn_Exp * _T11;
  struct Cyc_Absyn_Exp * _T12;
  long _T13;
  struct Cyc_Absyn_Exp * _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T16;
  int (* _T17)(struct _fat_ptr ap);
  struct _fat_ptr _T18;
  _T0 = e;
  { void * _T19 = _T0->r;
    struct Cyc_Absyn_Stmt * _T1A;
    struct Cyc_Absyn_Exp * _T1B;
    void * _T1C;
    void * _T1D;
    _T1 = (int *)_T19;
    _T2 = *_T1;
    switch (_T2) {
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T1E = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T19;
	_T3 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T19;
	_T4 = &_T3->f1;
	_T1D = (void * *)_T4;
	_T5 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T19;
	_T6 = &_T5->f2;
	_T1C = (struct Cyc_Absyn_Exp * *)_T6;
      }{ void * * t = (void * *)_T1D;
	struct Cyc_Absyn_Exp * * e1 = (struct Cyc_Absyn_Exp * *)_T1C;
	_T7 = e1;
	_T8 = e1;
	_T9 = *_T8;
	*_T7 = Cyc_Toc_push_address_exp(_T9);
	_TA = t;
	_TB = t;
	_TC = *_TB;
	_TD = Cyc_Toc_mt_tq;
	*_TA = Cyc_Absyn_cstar_type(_TC,_TD);
	_TE = e;
	_TF = t;
	_TE->topt = *_TF;
	_T10 = e;
	return _T10;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T1E = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T19;
	_T1B = _T1E->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T1B;
	_T11 = e1;
	return _T11;
      }
    case 36: 
      { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T1E = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T19;
	_T1A = _T1E->f1;
      }{ struct Cyc_Absyn_Stmt * s = _T1A;
	Cyc_Toc_push_address_stmt(s);
	_T12 = e;
	return _T12;
      }
    default: 
      _T13 = Cyc_Absyn_is_lvalue(e);
      if (! _T13) { goto _TL159;
      }
      _T14 = Cyc_Toc_address_lvalue(e,0);
      return _T14;
      _TL159: { struct Cyc_Warn_String_Warn_Warg_struct _T1E;
	_T1E.tag = 0;
	_T1E.f1 = _tag_fat("can't take & of exp ",sizeof(char),21U);
	_T15 = _T1E;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1E = _T15;
	{ struct Cyc_Warn_Exp_Warn_Warg_struct _T1F;
	  _T1F.tag = 4;
	  _T1F.f1 = e;
	  _T16 = _T1F;
	}{ struct Cyc_Warn_Exp_Warn_Warg_struct _T1F = _T16;
	  void * _T20[2];
	  _T20[0] = &_T1E;
	  _T20[1] = &_T1F;
	  { int (* _T21)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T17 = _T21;
	  }_T18 = _tag_fat(_T20,sizeof(void *),2);
	  _T17(_T18);
	}
      }
    }
    ;
  }
}
static void Cyc_Toc_push_address_stmt(struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T3;
  struct Cyc_Absyn_Exp * * _T4;
  struct Cyc_Absyn_Exp * * _T5;
  struct Cyc_Absyn_Exp * * _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Warn_String_Warn_Warg_struct _T8;
  struct Cyc_Warn_Stmt_Warn_Warg_struct _T9;
  int (* _TA)(struct _fat_ptr ap);
  struct _fat_ptr _TB;
  _T0 = s;
  { void * _TC = _T0->r;
    void * _TD;
    _T1 = (int *)_TC;
    _T2 = *_T1;
    switch (_T2) {
    case 2: 
      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _TE = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_TC;
	_TD = _TE->f2;
      }{ struct Cyc_Absyn_Stmt * s2 = _TD;
	_TD = s2;
	goto _LL4;
      }
    case 12: 
      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _TE = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_TC;
	_TD = _TE->f2;
      }_LL4: { struct Cyc_Absyn_Stmt * s2 = _TD;
	Cyc_Toc_push_address_stmt(s2);
	goto _LL0;
      }
    case 1: 
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _TE = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_TC;
	_T3 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_TC;
	_T4 = &_T3->f1;
	_TD = (struct Cyc_Absyn_Exp * *)_T4;
      }{ struct Cyc_Absyn_Exp * * e = (struct Cyc_Absyn_Exp * *)_TD;
	_T5 = e;
	_T6 = e;
	_T7 = *_T6;
	*_T5 = Cyc_Toc_push_address_exp(_T7);
	goto _LL0;
      }
    default: 
      { struct Cyc_Warn_String_Warn_Warg_struct _TE;
	_TE.tag = 0;
	_TE.f1 = _tag_fat("can't take & of stmt ",sizeof(char),22U);
	_T8 = _TE;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TE = _T8;
	{ struct Cyc_Warn_Stmt_Warn_Warg_struct _TF;
	  _TF.tag = 5;
	  _TF.f1 = s;
	  _T9 = _TF;
	}{ struct Cyc_Warn_Stmt_Warn_Warg_struct _TF = _T9;
	  void * _T10[2];
	  _T10[0] = &_TE;
	  _T10[1] = &_TF;
	  { int (* _T11)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _TA = _T11;
	  }_TB = _tag_fat(_T10,sizeof(void *),2);
	  _TA(_TB);
	}
      }
    }
    _LL0: ;
  }
}
static void Cyc_Toc_zero_ptr_assign_to_c(struct Cyc_Toc_Env * nv,struct Cyc_Absyn_Exp * e,
					 struct Cyc_Absyn_Exp * e1,struct Cyc_Absyn_PrimopOpt * popt,
					 struct Cyc_Absyn_Exp * e2,void * ptr_type,
					 long is_fat,void * elt_type) {
  struct Cyc_Core_Opt * _T0;
  struct Cyc_Absyn_Exp * _T1;
  int * _T2;
  unsigned int _T3;
  long _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T7;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T8;
  long _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TC;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TD;
  struct Cyc_Absyn_Exp * _TE;
  void * _TF;
  struct Cyc_Absyn_Exp * _T10;
  void * _T11;
  struct Cyc_Absyn_Exp * _T12;
  struct _fat_ptr _T13;
  struct Cyc_Absyn_Exp * _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  int (* _T16)(struct _fat_ptr ap);
  struct _fat_ptr _T17;
  struct Cyc_Absyn_Vardecl * _T18;
  struct Cyc_Absyn_Vardecl * _T19;
  struct Cyc_Absyn_Vardecl * _T1A;
  struct Cyc_Absyn_Vardecl * _T1B;
  struct Cyc_Absyn_Vardecl * _T1C;
  struct Cyc_Absyn_Vardecl * _T1D;
  struct Cyc_Absyn_Vardecl * _T1E;
  struct Cyc_Absyn_Vardecl * _T1F;
  struct Cyc_Absyn_Vardecl * _T20;
  struct Cyc_Absyn_Vardecl * _T21;
  struct Cyc_Absyn_Vardecl * _T22;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T23;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T24;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T25;
  void * _T26;
  struct Cyc_Absyn_Exp * _T27;
  struct Cyc_Absyn_Exp * _T28;
  long _T29;
  struct Cyc_Absyn_Exp * _T2A;
  struct Cyc_Absyn_Exp * _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct * _T2D;
  struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct * _T2E;
  struct Cyc_Absyn_Vardecl * _T2F;
  struct Cyc_Absyn_Vardecl * _T30;
  struct Cyc_Absyn_Vardecl * _T31;
  struct Cyc_Absyn_Vardecl * _T32;
  struct Cyc_Absyn_Vardecl * _T33;
  struct Cyc_Absyn_Vardecl * _T34;
  struct Cyc_Absyn_Vardecl * _T35;
  struct Cyc_Absyn_Vardecl * _T36;
  struct Cyc_Absyn_Vardecl * _T37;
  struct Cyc_Absyn_Vardecl * _T38;
  struct Cyc_Absyn_Vardecl * _T39;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T3A;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T3B;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T3C;
  void * _T3D;
  struct Cyc_Absyn_Exp * _T3E;
  struct Cyc_Absyn_Exp * _T3F;
  struct Cyc_Absyn_PrimopOpt * _T40;
  enum Cyc_Absyn_Primop _T41;
  struct Cyc_Absyn_Exp * _T42;
  struct Cyc_Absyn_Exp * _T43;
  struct Cyc_Absyn_Exp * _T44;
  struct Cyc_Absyn_Exp * _T45;
  struct Cyc_Absyn_Exp * _T46;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T47;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T48;
  struct Cyc_Absyn_Vardecl * _T49;
  struct Cyc_Absyn_Vardecl * _T4A;
  struct Cyc_Absyn_Vardecl * _T4B;
  struct Cyc_Absyn_Vardecl * _T4C;
  struct Cyc_Absyn_Vardecl * _T4D;
  struct Cyc_Absyn_Vardecl * _T4E;
  struct Cyc_Absyn_Vardecl * _T4F;
  struct Cyc_Absyn_Vardecl * _T50;
  struct Cyc_Absyn_Vardecl * _T51;
  struct Cyc_Absyn_Vardecl * _T52;
  struct Cyc_Absyn_Vardecl * _T53;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T54;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T55;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T56;
  void * _T57;
  struct Cyc_Absyn_Exp * _T58;
  struct Cyc_Absyn_Exp * _T59;
  struct Cyc_Absyn_Exp * _T5A;
  struct Cyc_Absyn_Exp * _T5B;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T5C;
  void * _T5D;
  struct Cyc_Absyn_Exp * _T5E;
  struct Cyc_Absyn_Exp * _T5F;
  struct Cyc_Absyn_Exp * _T60;
  struct Cyc_Absyn_Exp * _T61;
  struct Cyc_List_List * _T62;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T63;
  void * _T64;
  struct Cyc_Absyn_Exp * _T65;
  void * _T66;
  void * _T67;
  struct Cyc_Absyn_Exp * _T68;
  void * _T69;
  struct _fat_ptr _T6A;
  struct Cyc_Absyn_Exp * _T6B;
  void * _T6C;
  struct Cyc_Absyn_Exp * _T6D;
  void * _T6E;
  struct Cyc_Absyn_Exp * _T6F;
  struct Cyc_Absyn_Exp * _T70;
  struct Cyc_Absyn_Exp * _T71;
  struct Cyc_Absyn_Exp * _T72;
  struct Cyc_Absyn_Exp * _T73;
  struct _fat_ptr _T74;
  struct Cyc_Absyn_Exp * _T75;
  void * _T76;
  struct Cyc_Absyn_Exp * _T77;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T78;
  void * _T79;
  struct Cyc_Absyn_Exp * _T7A;
  void * _T7B;
  struct Cyc_Absyn_Exp * _T7C;
  struct Cyc_Absyn_Exp * _T7D;
  void * _T7E;
  struct Cyc_Absyn_Exp * _T7F;
  struct Cyc_Absyn_Exp * _T80;
  void * _T81;
  struct Cyc_Absyn_Exp * _T82;
  struct Cyc_Absyn_Exp * _T83;
  void * _T84;
  struct Cyc_Absyn_Exp * _T85;
  struct Cyc_Absyn_Stmt * _T86;
  struct Cyc_Absyn_Stmt * _T87;
  struct Cyc_Absyn_Stmt * _T88;
  struct Cyc_Absyn_Stmt * _T89;
  struct Cyc_Absyn_Decl * _T8A;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T8B;
  struct Cyc_Absyn_Stmt * _T8C;
  struct Cyc_Absyn_Decl * _T8D;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T8E;
  struct Cyc_Absyn_Stmt * _T8F;
  struct Cyc_Absyn_Decl * _T90;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T91;
  struct Cyc_Absyn_Stmt * _T92;
  struct Cyc_Absyn_Exp * _T93;
  void * fat_ptr_type = Cyc_Absyn_fatptr_type(elt_type,Cyc_Absyn_heap_rgn_type,
					      Cyc_Absyn_al_qual_type,Cyc_Toc_mt_tq,
					      Cyc_Absyn_true_type,Cyc_Absyn_false_type);
  void * c_elt_type = Cyc_Toc_typ_to_c(elt_type);
  void * c_fat_ptr_type = Cyc_Toc_typ_to_c(fat_ptr_type);
  void * c_ptr_type = Cyc_Absyn_cstar_type(c_elt_type,Cyc_Toc_mt_tq);
  struct Cyc_Core_Opt * c_ptr_type_opt;
  c_ptr_type_opt = _cycalloc(sizeof(struct Cyc_Core_Opt));
  _T0 = c_ptr_type_opt;
  _T0->v = c_ptr_type;
  { struct Cyc_Absyn_Exp * xinit;
    _T1 = e1;
    { void * _T94 = _T1->r;
      struct Cyc_Absyn_Exp * _T95;
      struct Cyc_Absyn_Exp * _T96;
      _T2 = (int *)_T94;
      _T3 = *_T2;
      switch (_T3) {
      case 20: 
	{ struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T97 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T94;
	  _T96 = _T97->f1;
	}{ struct Cyc_Absyn_Exp * ea = _T96;
	  _T4 = is_fat;
	  if (_T4) { goto _TL15D;
	  }else { goto _TL15F;
	  }
	  _TL15F: ea = Cyc_Absyn_cast_exp(fat_ptr_type,ea,0,4U,0U);
	  _T5 = ea;
	  _T5->topt = fat_ptr_type;
	  _T6 = ea;
	  _T7 = &Cyc_InsertChecks_NoCheck_val;
	  _T8 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T7;
	  _T6->annot = (void *)_T8;
	  goto _TL15E;
	  _TL15D: _TL15E: Cyc_Toc_exp_to_c(nv,ea);
	  xinit = ea;
	  goto _LL0;
	}
      case 23: 
	{ struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T97 = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T94;
	  _T96 = _T97->f1;
	  _T95 = _T97->f2;
	}{ struct Cyc_Absyn_Exp * ea = _T96;
	  struct Cyc_Absyn_Exp * eb = _T95;
	  _T9 = is_fat;
	  if (_T9) { goto _TL160;
	  }else { goto _TL162;
	  }
	  _TL162: ea = Cyc_Absyn_cast_exp(fat_ptr_type,ea,0,4U,0U);
	  _TA = ea;
	  _TA->topt = fat_ptr_type;
	  _TB = ea;
	  _TC = &Cyc_InsertChecks_NoCheck_val;
	  _TD = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_TC;
	  _TB->annot = (void *)_TD;
	  goto _TL161;
	  _TL160: _TL161: Cyc_Toc_exp_to_c(nv,ea);
	  Cyc_Toc_exp_to_c(nv,eb);
	  { struct Cyc_Absyn_Exp * _T97[3];
	    _T97[0] = ea;
	    _TF = Cyc_Toc_typ_to_c(elt_type);
	    _T10 = Cyc_Absyn_sizeoftype_exp(_TF,0U);
	    _T11 = Cyc_Absyn_uint_type;
	    _T97[1] = Cyc_Absyn_set_type(_T10,_T11);
	    _T97[2] = eb;
	    _T12 = Cyc_Toc__fat_ptr_plus_e;
	    _T13 = _tag_fat(_T97,sizeof(struct Cyc_Absyn_Exp *),3);
	    _TE = Cyc_Toc_fncall_exp_dl(_T12,_T13);
	  }xinit = _TE;
	  _T14 = xinit;
	  _T14->topt = c_fat_ptr_type;
	  goto _LL0;
	}
      default: 
	{ struct Cyc_Warn_String_Warn_Warg_struct _T97;
	  _T97.tag = 0;
	  _T97.f1 = _tag_fat("found bad lhs for zero-terminated pointer assignment",
			     sizeof(char),53U);
	  _T15 = _T97;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T97 = _T15;
	  void * _T98[1];
	  _T98[0] = &_T97;
	  { int (* _T99)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T16 = _T99;
	  }_T17 = _tag_fat(_T98,sizeof(void *),1);
	  _T16(_T17);
	}
      }
      _LL0: ;
    }{ struct _tuple1 * x = Cyc_Toc_temp_var();
      struct _RegionHandle _T94 = _new_region(0U,"rgn2");
      struct _RegionHandle * rgn2 = &_T94;
      _push_region(rgn2);
      { struct Cyc_Absyn_Vardecl * x_vd;
	x_vd = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
	_T18 = x_vd;
	_T18->sc = 2U;
	_T19 = x_vd;
	_T19->name = x;
	_T1A = x_vd;
	_T1A->varloc = 0U;
	_T1B = x_vd;
	_T1B->tq = Cyc_Toc_mt_tq;
	_T1C = x_vd;
	_T1C->type = c_fat_ptr_type;
	_T1D = x_vd;
	_T1D->initializer = xinit;
	_T1E = x_vd;
	_T1E->rgn = 0;
	_T1F = x_vd;
	_T1F->attributes = 0;
	_T20 = x_vd;
	_T20->escapes = 0;
	_T21 = x_vd;
	_T21->is_proto = 0;
	_T22 = x_vd;
	_T22->rename = 0;
	{ struct Cyc_Absyn_Local_b_Absyn_Binding_struct * x_bnd;
	  x_bnd = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
	  _T23 = x_bnd;
	  _T23->tag = 4;
	  _T24 = x_bnd;
	  _T24->f1 = x_vd;
	  _T25 = x_bnd;
	  _T26 = (void *)_T25;
	  { struct Cyc_Absyn_Exp * x_exp = Cyc_Absyn_varb_exp(_T26,0U);
	    _T27 = x_exp;
	    _T27->topt = fat_ptr_type;
	    { struct Cyc_Absyn_Exp * deref_x = Cyc_Absyn_deref_exp(x_exp,
								   0U);
	      _T28 = deref_x;
	      _T28->topt = elt_type;
	      _T29 = is_fat;
	      if (! _T29) { goto _TL163;
	      }
	      _T2A = deref_x;
	      _T2B = e1;
	      _T2A->annot = _T2B->annot;
	      goto _TL164;
	      _TL163: _T2C = deref_x;
	      _T2D = &Cyc_InsertChecks_NullAndFatBound_val;
	      _T2E = (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct *)_T2D;
	      _T2C->annot = (void *)_T2E;
	      _TL164: Cyc_Toc_exp_to_c(nv,deref_x);
	      { struct _tuple1 * y = Cyc_Toc_temp_var();
		struct Cyc_Absyn_Vardecl * y_vd;
		y_vd = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
		_T2F = y_vd;
		_T2F->sc = 2U;
		_T30 = y_vd;
		_T30->name = y;
		_T31 = y_vd;
		_T31->varloc = 0U;
		_T32 = y_vd;
		_T32->tq = Cyc_Toc_mt_tq;
		_T33 = y_vd;
		_T33->type = c_elt_type;
		_T34 = y_vd;
		_T34->initializer = deref_x;
		_T35 = y_vd;
		_T35->rgn = 0;
		_T36 = y_vd;
		_T36->attributes = 0;
		_T37 = y_vd;
		_T37->escapes = 0;
		_T38 = y_vd;
		_T38->is_proto = 0;
		_T39 = y_vd;
		_T39->rename = 0;
		{ struct Cyc_Absyn_Local_b_Absyn_Binding_struct * y_bnd;
		  y_bnd = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		  _T3A = y_bnd;
		  _T3A->tag = 4;
		  _T3B = y_bnd;
		  _T3B->f1 = y_vd;
		  { struct Cyc_Absyn_Exp * z_init = e2;
		    if (popt == 0) { goto _TL165;
		    }
		    _T3C = y_bnd;
		    _T3D = (void *)_T3C;
		    { struct Cyc_Absyn_Exp * y_exp = Cyc_Absyn_varb_exp(_T3D,
									0U);
		      _T3E = y_exp;
		      _T3F = deref_x;
		      _T3E->topt = _T3F->topt;
		      _T40 = popt;
		      _T41 = _T40->v;
		      _T42 = y_exp;
		      _T43 = Cyc_Toc_deep_copy(e2);
		      z_init = Cyc_Absyn_prim2_exp(_T41,_T42,_T43,0U);
		      _T44 = z_init;
		      _T45 = y_exp;
		      _T44->topt = _T45->topt;
		      _T46 = z_init;
		      _T47 = &Cyc_InsertChecks_NoCheck_val;
		      _T48 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T47;
		      _T46->annot = (void *)_T48;
		    }goto _TL166;
		    _TL165: _TL166: Cyc_Toc_exp_to_c(nv,z_init);
		    { struct _tuple1 * z = Cyc_Toc_temp_var();
		      struct Cyc_Absyn_Vardecl * z_vd;
		      z_vd = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));
		      _T49 = z_vd;
		      _T49->sc = 2U;
		      _T4A = z_vd;
		      _T4A->name = z;
		      _T4B = z_vd;
		      _T4B->varloc = 0U;
		      _T4C = z_vd;
		      _T4C->tq = Cyc_Toc_mt_tq;
		      _T4D = z_vd;
		      _T4D->type = c_elt_type;
		      _T4E = z_vd;
		      _T4E->initializer = z_init;
		      _T4F = z_vd;
		      _T4F->rgn = 0;
		      _T50 = z_vd;
		      _T50->attributes = 0;
		      _T51 = z_vd;
		      _T51->escapes = 0;
		      _T52 = z_vd;
		      _T52->is_proto = 0;
		      _T53 = z_vd;
		      _T53->rename = 0;
		      { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * z_bnd;
			z_bnd = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
			_T54 = z_bnd;
			_T54->tag = 4;
			_T55 = z_bnd;
			_T55->f1 = z_vd;
			_T56 = y_bnd;
			_T57 = (void *)_T56;
			{ struct Cyc_Absyn_Exp * y2_exp = Cyc_Absyn_varb_exp(_T57,
									     0U);
			  _T58 = y2_exp;
			  _T59 = deref_x;
			  _T58->topt = _T59->topt;
			  { struct Cyc_Absyn_Exp * zero1_exp = Cyc_Absyn_signed_int_exp(0,
											0U);
			    struct Cyc_Absyn_Exp * comp1_exp = Cyc_Absyn_prim2_exp(5U,
										   y2_exp,
										   zero1_exp,
										   0U);
			    _T5A = zero1_exp;
			    _T5A->topt = Cyc_Absyn_sint_type;
			    _T5B = comp1_exp;
			    _T5B->topt = Cyc_Absyn_sint_type;
			    Cyc_Toc_exp_to_c(nv,comp1_exp);
			    _T5C = z_bnd;
			    _T5D = (void *)_T5C;
			    { struct Cyc_Absyn_Exp * z_exp = Cyc_Absyn_varb_exp(_T5D,
										0U);
			      _T5E = z_exp;
			      _T5F = deref_x;
			      _T5E->topt = _T5F->topt;
			      { struct Cyc_Absyn_Exp * zero2_exp = Cyc_Absyn_signed_int_exp(0,
											    0U);
				struct Cyc_Absyn_Exp * comp2_exp = Cyc_Absyn_prim2_exp(6U,
										       z_exp,
										       zero2_exp,
										       0U);
				_T60 = zero2_exp;
				_T60->topt = Cyc_Absyn_sint_type;
				_T61 = comp2_exp;
				_T61->topt = Cyc_Absyn_sint_type;
				Cyc_Toc_exp_to_c(nv,comp2_exp);
				{ struct Cyc_Absyn_Exp * _T95[2];
				  _T63 = x_bnd;
				  _T64 = (void *)_T63;
				  _T65 = Cyc_Absyn_varb_exp(_T64,0U);
				  _T66 = c_fat_ptr_type;
				  _T95[0] = Cyc_Absyn_set_type(_T65,_T66);
				  _T67 = Cyc_Toc_typ_to_c(elt_type);
				  _T68 = Cyc_Absyn_sizeoftype_exp(_T67,0U);
				  _T69 = Cyc_Absyn_uint_type;
				  _T95[1] = Cyc_Absyn_set_type(_T68,_T69);
				  _T6A = _tag_fat(_T95,sizeof(struct Cyc_Absyn_Exp *),
						  2);
				  _T62 = Cyc_List_list(_T6A);
				}{ struct Cyc_List_List * xsizeargs = _T62;
				  _T6B = Cyc_Absyn_uint_exp(1U,0U);
				  _T6C = Cyc_Absyn_uint_type;
				  { struct Cyc_Absyn_Exp * oneexp = Cyc_Absyn_set_type(_T6B,
										       _T6C);
				    struct Cyc_Absyn_Exp * xsize;
				    _T6D = Cyc_Absyn_fncall_exp(Cyc_Toc__get_fat_size_e,
								xsizeargs,
								0U);
				    _T6E = Cyc_Absyn_uint_type;
				    _T6F = Cyc_Absyn_set_type(_T6D,_T6E);
				    _T70 = oneexp;
				    xsize = Cyc_Absyn_prim2_exp(5U,_T6F,_T70,
								0U);
				    _T71 = xsize;
				    _T72 = Cyc_Absyn_and_exp(comp1_exp,comp2_exp,
							     0U);
				    { struct Cyc_Absyn_Exp * comp_exp = Cyc_Absyn_and_exp(_T71,
											  _T72,
											  0U);
				      _T73 = Cyc_Toc__throw_arraybounds_e;
				      _T74 = _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp *),
						      0);
				      _T75 = Cyc_Toc_fncall_exp_dl(_T73,_T74);
				      _T76 = Cyc_Toc_void_star_type();
				      _T77 = Cyc_Absyn_set_type(_T75,_T76);
				      { struct Cyc_Absyn_Stmt * thr_stmt = Cyc_Absyn_exp_stmt(_T77,
											      0U);
					_T78 = x_bnd;
					_T79 = (void *)_T78;
					_T7A = Cyc_Absyn_varb_exp(_T79,0U);
					_T7B = c_fat_ptr_type;
					_T7C = Cyc_Absyn_set_type(_T7A,_T7B);
					{ struct Cyc_Absyn_Exp * xcurr = Cyc_Toc_get_curr(_T7C);
					  xcurr = Cyc_Toc_cast_it(c_ptr_type,
								  xcurr);
					  _T7D = Cyc_Absyn_deref_exp(xcurr,
								     0U);
					  _T7E = c_elt_type;
					  { struct Cyc_Absyn_Exp * deref_xcurr = Cyc_Absyn_set_type(_T7D,
												    _T7E);
					    _T7F = deref_xcurr;
					    _T80 = Cyc_Absyn_var_exp(z,0U);
					    _T81 = c_elt_type;
					    _T82 = Cyc_Absyn_set_type(_T80,
								      _T81);
					    _T83 = Cyc_Absyn_assign_exp(_T7F,
									_T82,
									0U);
					    _T84 = c_elt_type;
					    { struct Cyc_Absyn_Exp * asn_exp = Cyc_Absyn_set_type(_T83,
												  _T84);
					      struct Cyc_Absyn_Stmt * s = Cyc_Absyn_exp_stmt(asn_exp,
											     0U);
					      _T85 = comp_exp;
					      _T86 = thr_stmt;
					      _T87 = Cyc_Absyn_skip_stmt(0U);
					      _T88 = Cyc_Absyn_ifthenelse_stmt(_T85,
									       _T86,
									       _T87,
									       0U);
					      _T89 = s;
					      s = Cyc_Absyn_seq_stmt(_T88,
								     _T89,
								     0U);
					      { struct Cyc_Absyn_Decl * _T95 = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
						{ struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T96 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
						  _T96->tag = 0;
						  _T96->f1 = z_vd;
						  _T8B = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T96;
						}_T95->r = (void *)_T8B;
						_T95->loc = 0U;
						_T8A = (struct Cyc_Absyn_Decl *)_T95;
					      }_T8C = s;
					      s = Cyc_Absyn_decl_stmt(_T8A,
								      _T8C,
								      0U);
					      { struct Cyc_Absyn_Decl * _T95 = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
						{ struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T96 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
						  _T96->tag = 0;
						  _T96->f1 = y_vd;
						  _T8E = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T96;
						}_T95->r = (void *)_T8E;
						_T95->loc = 0U;
						_T8D = (struct Cyc_Absyn_Decl *)_T95;
					      }_T8F = s;
					      s = Cyc_Absyn_decl_stmt(_T8D,
								      _T8F,
								      0U);
					      { struct Cyc_Absyn_Decl * _T95 = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
						{ struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T96 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
						  _T96->tag = 0;
						  _T96->f1 = x_vd;
						  _T91 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T96;
						}_T95->r = (void *)_T91;
						_T95->loc = 0U;
						_T90 = (struct Cyc_Absyn_Decl *)_T95;
					      }_T92 = s;
					      s = Cyc_Absyn_decl_stmt(_T90,
								      _T92,
								      0U);
					      _T93 = e;
					      _T93->r = Cyc_Toc_stmt_exp_r(s);
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
	      }
	    }
	  }
	}
      }_pop_region();
    }
  }
}
static void * Cyc_Toc_check_tagged_union(void * res_type,struct Cyc_Absyn_Exp * e1,
					 void * e1_c_type,void * aggrtype,
					 struct _fat_ptr * f,long in_lhs,
					 struct Cyc_Absyn_Exp * (* aggrproj)(struct Cyc_Absyn_Exp *,
									     struct _fat_ptr *,
									     unsigned int)) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2;
  void * _T3;
  int * _T4;
  int _T5;
  void * _T6;
  struct Cyc_Warn_String_Warn_Warg_struct _T7;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T8;
  struct Cyc_Warn_String_Warn_Warg_struct _T9;
  int (* _TA)(struct _fat_ptr ap);
  struct _fat_ptr _TB;
  int _TC;
  struct Cyc_Absyn_Exp * _TD;
  void * _TE;
  long _TF;
  struct Cyc_Absyn_Exp * _T10;
  void * _T11;
  struct Cyc_Absyn_Exp * _T12;
  void * _T13;
  struct Cyc_Absyn_Exp * _T14;
  struct _fat_ptr * _T15;
  struct Cyc_Absyn_Exp * _T16;
  void * _T17;
  struct Cyc_Absyn_Exp * _T18;
  void * _T19;
  struct Cyc_Absyn_Exp * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  struct Cyc_Absyn_Stmt * _T1C;
  struct Cyc_Absyn_Stmt * _T1D;
  struct Cyc_Absyn_Exp * _T1E;
  void * _T1F;
  struct Cyc_Absyn_Exp * _T20;
  struct Cyc_Absyn_Exp * _T21;
  void * _T22;
  struct _tuple1 * _T23;
  void * _T24;
  struct Cyc_Absyn_Exp * _T25;
  struct Cyc_Absyn_Stmt * _T26;
  void * _T27;
  struct Cyc_Absyn_Exp * _T28;
  void * _T29;
  struct Cyc_Absyn_Exp * _T2A;
  struct _fat_ptr * _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  void * _T2D;
  struct Cyc_Absyn_Exp * _T2E;
  struct _fat_ptr * _T2F;
  struct Cyc_Absyn_Exp * _T30;
  void * _T31;
  struct Cyc_Absyn_Exp * _T32;
  struct _fat_ptr * _T33;
  struct Cyc_Absyn_Exp * _T34;
  struct Cyc_Absyn_Stmt * _T35;
  struct Cyc_Absyn_Stmt * _T36;
  struct _tuple1 * _T37;
  void * _T38;
  struct Cyc_Absyn_Exp * _T39;
  struct Cyc_Absyn_Stmt * _T3A;
  void * _T3B;
  struct Cyc_Absyn_Aggrdecl * ad;
  { void * _T3C = Cyc_Absyn_compress(aggrtype);
    union Cyc_Absyn_AggrInfo _T3D;
    _T0 = (int *)_T3C;
    _T1 = *_T0;
    if (_T1 != 0) { goto _TL167;
    }
    _T2 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3C;
    _T3 = _T2->f1;
    _T4 = (int *)_T3;
    _T5 = *_T4;
    if (_T5 != 24) { goto _TL169;
    }
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3C;
      _T6 = _T3E->f1;
      { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T3F = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T6;
	_T3D = _T3F->f1;
      }
    }{ union Cyc_Absyn_AggrInfo info = _T3D;
      ad = Cyc_Absyn_get_known_aggrdecl(info);
      goto _LL0;
    }_TL169: goto _LL3;
    _TL167: _LL3: { struct Cyc_Warn_String_Warn_Warg_struct _T3E;
      _T3E.tag = 0;
      _T3E.f1 = _tag_fat("expecting union but found ",sizeof(char),27U);
      _T7 = _T3E;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E = _T7;
      { struct Cyc_Warn_Typ_Warn_Warg_struct _T3F;
	_T3F.tag = 2;
	_T3F.f1 = aggrtype;
	_T8 = _T3F;
      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3F = _T8;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T40;
	  _T40.tag = 0;
	  _T40.f1 = _tag_fat(" in check_tagged_union",sizeof(char),23U);
	  _T9 = _T40;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T40 = _T9;
	  void * _T41[3];
	  _T41[0] = &_T3E;
	  _T41[1] = &_T3F;
	  _T41[2] = &_T40;
	  { int (* _T42)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _TA = _T42;
	  }_TB = _tag_fat(_T41,sizeof(void *),3);
	  _TA(_TB);
	}
      }
    }_LL0: ;
  }{ void * strct_name = Cyc_Toc_tagged_union_field_struct(aggrtype,f);
    struct _tuple33 _T3C = Cyc_Toc_temp_var_and_exp();
    struct Cyc_Absyn_Exp * _T3D;
    struct _tuple1 * _T3E;
    _T3E = _T3C.f0;
    _T3D = _T3C.f1;
    { struct _tuple1 * temp = _T3E;
      struct Cyc_Absyn_Exp * temp_exp = _T3D;
      _TC = Cyc_Toc_get_member_offset(ad,f);
      _TD = Cyc_Absyn_signed_int_exp(_TC,0U);
      _TE = Cyc_Absyn_uint_type;
      { struct Cyc_Absyn_Exp * f_tag = Cyc_Absyn_set_type(_TD,_TE);
	_TF = in_lhs;
	if (! _TF) { goto _TL16B;
	}
	{ void * e1_p_type = Cyc_Absyn_cstar_type(e1_c_type,Cyc_Toc_mt_tq);
	  Cyc_Absyn_set_type(temp_exp,e1_p_type);
	  _T10 = Cyc_Absyn_aggrarrow_exp(temp_exp,Cyc_Toc_tag_sp,0U);
	  _T11 = Cyc_Absyn_uint_type;
	  { struct Cyc_Absyn_Exp * temp_f_tag = Cyc_Absyn_set_type(_T10,_T11);
	    _T12 = Cyc_Absyn_neq_exp(temp_f_tag,f_tag,0U);
	    _T13 = Cyc_Absyn_sint_type;
	    { struct Cyc_Absyn_Exp * test_exp = Cyc_Absyn_set_type(_T12,_T13);
	      _T14 = Cyc_Toc_deep_copy(temp_exp);
	      _T15 = Cyc_Toc_val_sp;
	      _T16 = Cyc_Absyn_aggrarrow_exp(_T14,_T15,0U);
	      _T17 = res_type;
	      { struct Cyc_Absyn_Exp * temp_f_val = Cyc_Absyn_set_type(_T16,
								       _T17);
		_T18 = Cyc_Absyn_address_exp(temp_f_val,0U);
		_T19 = Cyc_Absyn_cstar_type(res_type,Cyc_Toc_mt_tq);
		_T1A = Cyc_Absyn_set_type(_T18,_T19);
		{ struct Cyc_Absyn_Stmt * sres = Cyc_Absyn_exp_stmt(_T1A,
								    0U);
		  _T1B = test_exp;
		  _T1C = Cyc_Toc_throw_match_stmt();
		  _T1D = Cyc_Toc_skip_stmt_dl();
		  { struct Cyc_Absyn_Stmt * ifs = Cyc_Absyn_ifthenelse_stmt(_T1B,
									    _T1C,
									    _T1D,
									    0U);
		    _T1E = aggrproj(e1,f,0U);
		    _T1F = res_type;
		    _T20 = Cyc_Absyn_set_type(_T1E,_T1F);
		    _T21 = Cyc_Absyn_address_exp(_T20,0U);
		    _T22 = e1_p_type;
		    { struct Cyc_Absyn_Exp * e1_f = Cyc_Absyn_set_type(_T21,
								       _T22);
		      _T23 = temp;
		      _T24 = e1_p_type;
		      _T25 = e1_f;
		      _T26 = Cyc_Absyn_seq_stmt(ifs,sres,0U);
		      { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_declare_stmt(_T23,
									   _T24,
									   _T25,
									   _T26,
									   0U);
			_T27 = Cyc_Toc_stmt_exp_r(s);
			return _T27;
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}_TL16B: Cyc_Absyn_set_type(temp_exp,e1_c_type);
	_T28 = aggrproj(temp_exp,f,0U);
	_T29 = strct_name;
	_T2A = Cyc_Absyn_set_type(_T28,_T29);
	_T2B = Cyc_Toc_tag_sp;
	_T2C = Cyc_Toc_member_exp(_T2A,_T2B,0U);
	_T2D = Cyc_Absyn_uint_type;
	{ struct Cyc_Absyn_Exp * temp_f_tag = Cyc_Absyn_set_type(_T2C,_T2D);
	  struct Cyc_Absyn_Exp * test_exp = Cyc_Absyn_neq_exp(temp_f_tag,
							      f_tag,0U);
	  _T2E = Cyc_Toc_deep_copy(temp_exp);
	  _T2F = f;
	  _T30 = aggrproj(_T2E,_T2F,0U);
	  _T31 = strct_name;
	  _T32 = Cyc_Absyn_set_type(_T30,_T31);
	  _T33 = Cyc_Toc_val_sp;
	  { struct Cyc_Absyn_Exp * temp_f_val = Cyc_Toc_member_exp(_T32,_T33,
								   0U);
	    Cyc_Absyn_set_type(temp_f_val,res_type);
	    { struct Cyc_Absyn_Stmt * sres = Cyc_Absyn_exp_stmt(temp_f_val,
								0U);
	      _T34 = test_exp;
	      _T35 = Cyc_Toc_throw_match_stmt();
	      _T36 = Cyc_Toc_skip_stmt_dl();
	      { struct Cyc_Absyn_Stmt * ifs = Cyc_Absyn_ifthenelse_stmt(_T34,
									_T35,
									_T36,
									0U);
		_T37 = temp;
		_T38 = e1_c_type;
		_T39 = e1;
		_T3A = Cyc_Absyn_seq_stmt(ifs,sres,0U);
		{ struct Cyc_Absyn_Stmt * s = Cyc_Absyn_declare_stmt(_T37,
								     _T38,
								     _T39,
								     _T3A,
								     0U);
		  _T3B = Cyc_Toc_stmt_exp_r(s);
		  return _T3B;
		}
	      }
	    }
	  }
	}
      }
    }
  }
}
static long Cyc_Toc_is_tagged_union_project_impl(void * t,struct _fat_ptr * f,
						 int * f_tag,void * * tagged_member_type,
						 long clear_read,long * is_read) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2;
  void * _T3;
  int * _T4;
  int _T5;
  void * _T6;
  int * _T7;
  void * * _T8;
  long _T9;
  long * _TA;
  struct Cyc_Absyn_Aggrdecl * _TB;
  struct Cyc_Absyn_AggrdeclImpl * _TC;
  struct Cyc_Absyn_AggrdeclImpl * _TD;
  long _TE;
  void * _TF = Cyc_Absyn_compress(t);
  union Cyc_Absyn_AggrInfo _T10;
  _T0 = (int *)_TF;
  _T1 = *_T0;
  if (_T1 != 0) { goto _TL16D;
  }
  _T2 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TF;
  _T3 = _T2->f1;
  _T4 = (int *)_T3;
  _T5 = *_T4;
  if (_T5 != 24) { goto _TL16F;
  }
  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T11 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TF;
    _T6 = _T11->f1;
    { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T12 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T6;
      _T10 = _T12->f1;
    }
  }{ union Cyc_Absyn_AggrInfo info = _T10;
    struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
    _T7 = f_tag;
    *_T7 = Cyc_Toc_get_member_offset(ad,f);
    _T8 = tagged_member_type;
    *_T8 = Cyc_Toc_tagged_union_field_struct(t,f);
    _T9 = clear_read;
    if (! _T9) { goto _TL171;
    }
    _TA = _check_null(is_read);
    *_TA = 0;
    goto _TL172;
    _TL171: _TL172: _TB = ad;
    _TC = _TB->impl;
    _TD = _check_null(_TC);
    _TE = _TD->tagged;
    return _TE;
  }_TL16F: goto _LL3;
  _TL16D: _LL3: return 0;
  ;
}
static long Cyc_Toc_is_tagged_union_project(struct Cyc_Absyn_Exp * e,int * f_tag,
					    void * * tagged_member_type,long clear_read) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  int (* _T4)(struct _fat_ptr ap);
  struct _fat_ptr _T5;
  struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T6;
  long * _T7;
  struct Cyc_Absyn_Exp * _T8;
  void * _T9;
  void * _TA;
  struct _fat_ptr * _TB;
  int * _TC;
  void * * _TD;
  long _TE;
  long * _TF;
  long _T10;
  struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T11;
  long * _T12;
  struct Cyc_Absyn_Exp * _T13;
  void * _T14;
  void * _T15;
  int * _T16;
  int _T17;
  struct Cyc_Absyn_PtrInfo _T18;
  long _T19;
  _T0 = e;
  { void * _T1A = _T0->r;
    void * _T1B;
    struct _fat_ptr * _T1C;
    struct Cyc_Absyn_Exp * _T1D;
    _T1 = (int *)_T1A;
    _T2 = *_T1;
    switch (_T2) {
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T1E = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T1A;
	_T1D = _T1E->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T1D;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T1E;
	  _T1E.tag = 0;
	  _T1E.f1 = _tag_fat("cast on lhs!",sizeof(char),13U);
	  _T3 = _T1E;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T1E = _T3;
	  void * _T1F[1];
	  _T1F[0] = &_T1E;
	  { int (* _T20)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T4 = _T20;
	  }_T5 = _tag_fat(_T1F,sizeof(void *),1);
	  _T4(_T5);
	}
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T1E = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T1A;
	_T1D = _T1E->f1;
	_T1C = _T1E->f2;
	_T6 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T1A;
	_T7 = &_T6->f4;
	_T1B = (long *)_T7;
      }{ struct Cyc_Absyn_Exp * e1 = _T1D;
	struct _fat_ptr * f = _T1C;
	long * is_read = _T1B;
	_T8 = e1;
	_T9 = _T8->topt;
	_TA = _check_null(_T9);
	_TB = f;
	_TC = f_tag;
	_TD = tagged_member_type;
	_TE = clear_read;
	_TF = is_read;
	_T10 = Cyc_Toc_is_tagged_union_project_impl(_TA,_TB,_TC,_TD,_TE,_TF);
	return _T10;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T1E = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T1A;
	_T1D = _T1E->f1;
	_T1C = _T1E->f2;
	_T11 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T1A;
	_T12 = &_T11->f4;
	_T1B = (long *)_T12;
      }{ struct Cyc_Absyn_Exp * e1 = _T1D;
	struct _fat_ptr * f = _T1C;
	long * is_read = (long *)_T1B;
	_T13 = e1;
	_T14 = _T13->topt;
	_T15 = _check_null(_T14);
	{ void * _T1E = Cyc_Absyn_compress(_T15);
	  void * _T1F;
	  _T16 = (int *)_T1E;
	  _T17 = *_T16;
	  if (_T17 != 4) { goto _TL174;
	  }
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T20 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T1E;
	    _T18 = _T20->f1;
	    _T1F = _T18.elt_type;
	  }{ void * et = _T1F;
	    _T19 = Cyc_Toc_is_tagged_union_project_impl(et,f,f_tag,tagged_member_type,
							clear_read,is_read);
	    return _T19;
	  }_TL174: return 0;
	  ;
	}
      }
    default: 
      return 0;
    }
    ;
  }
}
static void * Cyc_Toc_tagged_union_assignop(struct Cyc_Absyn_Exp * e1,void * e1_cyc_type,
					    struct Cyc_Absyn_PrimopOpt * popt,
					    struct Cyc_Absyn_Exp * e2,void * e2_cyc_type,
					    int tag_num,void * member_type) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  void * _T5;
  struct Cyc_Absyn_Exp * _T6;
  void * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Absyn_Exp * _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Stmt * _TB;
  struct Cyc_Absyn_Stmt * _TC;
  struct _tuple1 * _TD;
  void * _TE;
  struct Cyc_Absyn_Exp * _TF;
  struct Cyc_Absyn_Stmt * _T10;
  void * _T11;
  struct _tuple33 _T12 = Cyc_Toc_temp_var_and_exp();
  struct Cyc_Absyn_Exp * _T13;
  struct _tuple1 * _T14;
  _T14 = _T12.f0;
  _T13 = _T12.f1;
  { struct _tuple1 * temp = _T14;
    struct Cyc_Absyn_Exp * temp_exp = _T13;
    _T0 = temp_exp;
    _T1 = Cyc_Absyn_cstar_type(member_type,Cyc_Toc_mt_tq);
    Cyc_Absyn_set_type(_T0,_T1);
    _T2 = Cyc_Absyn_aggrarrow_exp(temp_exp,Cyc_Toc_val_sp,0U);
    _T3 = member_type;
    { struct Cyc_Absyn_Exp * temp_val = Cyc_Absyn_set_type(_T2,_T3);
      _T4 = Cyc_Absyn_aggrarrow_exp(temp_exp,Cyc_Toc_tag_sp,0U);
      _T5 = Cyc_Absyn_uint_type;
      { struct Cyc_Absyn_Exp * temp_tag = Cyc_Absyn_set_type(_T4,_T5);
	_T6 = Cyc_Absyn_signed_int_exp(tag_num,0U);
	_T7 = Cyc_Absyn_uint_type;
	{ struct Cyc_Absyn_Exp * f_tag = Cyc_Absyn_set_type(_T6,_T7);
	  _T8 = Cyc_Absyn_assignop_exp(temp_val,popt,e2,0U);
	  { struct Cyc_Absyn_Stmt * s3 = Cyc_Absyn_exp_stmt(_T8,0U);
	    struct Cyc_Absyn_Stmt * s2;
	    if (popt != 0) { goto _TL176;
	    }
	    _T9 = Cyc_Absyn_assign_exp(temp_tag,f_tag,0U);
	    s2 = Cyc_Absyn_exp_stmt(_T9,0U);
	    goto _TL177;
	    _TL176: { struct Cyc_Absyn_Exp * test_exp = Cyc_Absyn_neq_exp(temp_tag,
									  f_tag,
									  0U);
	      _TA = test_exp;
	      _TB = Cyc_Toc_throw_match_stmt();
	      _TC = Cyc_Toc_skip_stmt_dl();
	      s2 = Cyc_Absyn_ifthenelse_stmt(_TA,_TB,_TC,0U);
	    }_TL177: _TD = temp;
	    _TE = Cyc_Absyn_cstar_type(member_type,Cyc_Toc_mt_tq);
	    _TF = Cyc_Toc_push_address_exp(e1);
	    _T10 = Cyc_Absyn_seq_stmt(s2,s3,0U);
	    { struct Cyc_Absyn_Stmt * s1 = Cyc_Absyn_declare_stmt(_TD,_TE,
								  _TF,_T10,
								  0U);
	      _T11 = Cyc_Toc_stmt_exp_r(s1);
	      return _T11;
	    }
	  }
	}
      }
    }
  }
}
 struct _tuple37 {
  struct _tuple1 * f0;
  void * f1;
};
 struct _tuple38 {
  void * f0;
  void * f1;
};
 struct _tuple39 {
  struct Cyc_Absyn_Exp * f0;
  struct Cyc_Absyn_Exp * f1;
};
 struct _tuple40 {
  struct Cyc_Absyn_Aggrfield * f0;
  struct Cyc_Absyn_Exp * f1;
};
static void Cyc_Toc_exp_to_c(struct Cyc_Toc_Env * nv,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Warn_String_Warn_Warg_struct _T2;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T3;
  int (* _T4)(unsigned int,struct _fat_ptr);
  void * (* _T5)(unsigned int,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T6;
  unsigned int _T7;
  struct _fat_ptr _T8;
  struct Cyc_Absyn_Exp * _T9;
  struct Cyc_Absyn_Exp * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct * _TC;
  char * _TD;
  char * _TE;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TF;
  char * _T10;
  char * _T11;
  struct Cyc_Absyn_Exp * _T12;
  int * _T13;
  unsigned int _T14;
  struct Cyc_Absyn_Exp * _T15;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T16;
  union Cyc_Absyn_Cnst _T17;
  struct _union_Cnst_Null_c _T18;
  unsigned int _T19;
  struct Cyc_Absyn_Exp * _T1A;
  void * _T1B;
  void * _T1C;
  void * _T1D;
  void * _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  long _T20;
  struct Cyc_Absyn_Exp * _T21;
  struct Cyc_Absyn_Exp * _T22;
  struct Cyc_Absyn_Exp * _T23;
  void * _T24;
  struct Cyc_Absyn_Exp * _T25;
  struct _fat_ptr _T26;
  struct Cyc_Absyn_Exp * _T27;
  long _T28;
  long _T29;
  struct Cyc_Absyn_Exp * _T2A;
  struct Cyc_Absyn_Exp * _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  struct Cyc_Absyn_Exp * _T2E;
  void * _T2F;
  struct Cyc_Absyn_Exp * _T30;
  struct _fat_ptr _T31;
  struct Cyc_Absyn_Exp * _T32;
  void * _T33;
  struct Cyc_Absyn_Exp * _T34;
  struct Cyc_Absyn_Exp * _T35;
  struct Cyc_Absyn_Exp * _T36;
  struct Cyc_Absyn_Exp * _T37;
  struct Cyc_Absyn_Exp * _T38;
  struct Cyc_List_List * (* _T39)(void * (*)(struct Cyc_Absyn_Exp *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T3A)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T3B;
  void (* _T3C)(void (*)(struct Cyc_Toc_Env *,struct Cyc_Absyn_Exp *),struct Cyc_Toc_Env *,
		struct Cyc_List_List *);
  void (* _T3D)(void (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_Toc_Env * _T3E;
  struct Cyc_List_List * _T3F;
  enum Cyc_Absyn_Primop _T40;
  int _T41;
  struct Cyc_List_List * _T42;
  void * _T43;
  struct Cyc_Absyn_Exp * _T44;
  void * _T45;
  struct Cyc_Absyn_Tqual _T46;
  void * _T47;
  struct Cyc_Absyn_Exp * _T48;
  struct Cyc_Absyn_Exp * _T49;
  struct Cyc_Absyn_Exp * _T4A;
  struct Cyc_List_List * _T4B;
  void * _T4C;
  struct Cyc_List_List * _T4D;
  void * _T4E;
  int * _T4F;
  int _T50;
  struct Cyc_Absyn_PtrInfo _T51;
  struct Cyc_Absyn_PtrInfo _T52;
  struct Cyc_Absyn_PtrAtts _T53;
  struct Cyc_Absyn_PtrInfo _T54;
  struct Cyc_Absyn_PtrAtts _T55;
  struct Cyc_Absyn_PtrInfo _T56;
  struct Cyc_Absyn_PtrAtts _T57;
  void * _T58;
  void * _T59;
  struct Cyc_Absyn_Exp * _T5A;
  void * _T5B;
  struct Cyc_List_List * _T5C;
  void * _T5D;
  void * _T5E;
  struct Cyc_Absyn_Exp * _T5F;
  void * _T60;
  struct Cyc_Absyn_Exp * _T61;
  struct _fat_ptr _T62;
  long _T63;
  struct Cyc_List_List * _T64;
  void * _T65;
  struct Cyc_Absyn_Exp * _T66;
  long _T67;
  struct Cyc_Absyn_Exp * _T68;
  void * _T69;
  struct Cyc_List_List * _T6A;
  void * _T6B;
  struct Cyc_Absyn_Exp * _T6C;
  struct _fat_ptr _T6D;
  struct Cyc_Absyn_Exp * _T6E;
  void * _T6F;
  struct Cyc_List_List * _T70;
  void * _T71;
  void * _T72;
  void * _T73;
  struct Cyc_Absyn_Exp * _T74;
  void * _T75;
  struct Cyc_List_List * _T76;
  void * _T77;
  struct Cyc_Absyn_Exp * _T78;
  struct _fat_ptr _T79;
  long _T7A;
  long _T7B;
  struct Cyc_Warn_String_Warn_Warg_struct _T7C;
  struct Cyc_Absyn_Exp * _T7D;
  unsigned int _T7E;
  struct _fat_ptr _T7F;
  struct Cyc_Absyn_Exp * _T80;
  struct Cyc_Absyn_Exp * _T81;
  struct Cyc_Absyn_Exp * _T82;
  struct Cyc_Absyn_Exp * _T83;
  void * _T84;
  struct Cyc_Absyn_Exp * _T85;
  struct Cyc_Absyn_Exp * _T86;
  struct Cyc_Absyn_Exp * _T87;
  struct Cyc_Warn_String_Warn_Warg_struct _T88;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T89;
  struct Cyc_Absyn_Exp * _T8A;
  void * _T8B;
  int (* _T8C)(struct _fat_ptr ap);
  struct _fat_ptr _T8D;
  struct Cyc_List_List * _T8E;
  void * _T8F;
  int * _T90;
  int _T91;
  struct Cyc_Absyn_PtrInfo _T92;
  struct Cyc_Absyn_PtrInfo _T93;
  struct Cyc_Absyn_PtrAtts _T94;
  struct Cyc_Absyn_PtrInfo _T95;
  struct Cyc_Absyn_PtrAtts _T96;
  long _T97;
  int (* _T98)(struct _fat_ptr);
  struct _fat_ptr _T99;
  void * _T9A;
  void * _T9B;
  struct Cyc_List_List * _T9C;
  void * _T9D;
  struct Cyc_List_List * _T9E;
  struct Cyc_List_List * _T9F;
  void * _TA0;
  struct Cyc_Absyn_Exp * _TA1;
  void * _TA2;
  void * _TA3;
  struct Cyc_Absyn_Exp * _TA4;
  void * _TA5;
  struct Cyc_Absyn_Exp * _TA6;
  struct _fat_ptr _TA7;
  long _TA8;
  long _TA9;
  struct Cyc_Absyn_Exp * _TAA;
  void * _TAB;
  struct Cyc_Absyn_Exp * _TAC;
  struct _fat_ptr _TAD;
  struct Cyc_Absyn_Exp * _TAE;
  void * _TAF;
  struct Cyc_List_List * _TB0;
  void * _TB1;
  void * _TB2;
  void * _TB3;
  struct Cyc_Absyn_Exp * _TB4;
  void * _TB5;
  struct Cyc_Absyn_Exp * _TB6;
  struct _fat_ptr _TB7;
  struct Cyc_List_List * _TB8;
  void * _TB9;
  void * * _TBA;
  long _TBB;
  struct Cyc_List_List * _TBC;
  void * _TBD;
  struct Cyc_List_List * _TBE;
  struct Cyc_List_List * _TBF;
  void * _TC0;
  struct Cyc_List_List * _TC1;
  struct Cyc_List_List * _TC2;
  void * _TC3;
  long _TC4;
  struct Cyc_Absyn_Exp * _TC5;
  struct Cyc_Absyn_Exp * _TC6;
  struct _fat_ptr * _TC7;
  struct Cyc_Absyn_Exp * _TC8;
  struct Cyc_Absyn_Exp * _TC9;
  struct _fat_ptr * _TCA;
  struct Cyc_Absyn_Exp * _TCB;
  struct Cyc_Absyn_Exp * _TCC;
  struct Cyc_Absyn_Exp * _TCD;
  struct Cyc_Absyn_Exp * _TCE;
  void * _TCF;
  struct Cyc_Absyn_Exp * _TD0;
  void * _TD1;
  struct Cyc_Absyn_Exp * _TD2;
  struct Cyc_Absyn_Exp * _TD3;
  struct Cyc_Absyn_Exp * _TD4;
  void * _TD5;
  void * _TD6;
  struct Cyc_Absyn_Exp * _TD7;
  void * _TD8;
  struct Cyc_Absyn_Exp * _TD9;
  void * _TDA;
  struct Cyc_Absyn_Exp * _TDB;
  struct _fat_ptr _TDC;
  struct Cyc_List_List * _TDD;
  void * _TDE;
  struct Cyc_List_List * _TDF;
  struct Cyc_List_List * _TE0;
  void * _TE1;
  struct Cyc_List_List * _TE2;
  struct Cyc_List_List * _TE3;
  struct Cyc_List_List * _TE4;
  void * _TE5;
  void * * _TE6;
  long _TE7;
  void * _TE8;
  struct Cyc_Absyn_Tqual _TE9;
  struct Cyc_Absyn_Exp * _TEA;
  void * _TEB;
  struct Cyc_Absyn_Exp * _TEC;
  struct Cyc_Absyn_Exp * _TED;
  struct Cyc_Absyn_Exp * _TEE;
  long _TEF;
  void * _TF0;
  struct Cyc_Absyn_Tqual _TF1;
  struct Cyc_Absyn_Exp * _TF2;
  void * _TF3;
  struct Cyc_Absyn_Exp * _TF4;
  struct Cyc_Absyn_Exp * _TF5;
  struct Cyc_Absyn_Exp * _TF6;
  struct Cyc_Absyn_Exp * _TF7;
  void * _TF8;
  enum Cyc_Absyn_Incrementor _TF9;
  int _TFA;
  enum Cyc_Absyn_Incrementor _TFB;
  int _TFC;
  struct Cyc_Absyn_Exp * _TFD;
  void * * _TFE;
  long * _TFF;
  void * * _T100;
  long _T101;
  struct Cyc_Warn_String_Warn_Warg_struct _T102;
  struct Cyc_Warn_String_Warn_Warg_struct _T103;
  struct Cyc_Warn_String_Warn_Warg_struct _T104;
  struct Cyc_Warn_String_Warn_Warg_struct _T105;
  int (* _T106)(unsigned int,struct _fat_ptr);
  void * (* _T107)(unsigned int,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T108;
  unsigned int _T109;
  struct _fat_ptr _T10A;
  struct Cyc_Absyn_Exp * _T10B;
  int * _T10C;
  void * * _T10D;
  long _T10E;
  struct Cyc_Absyn_Exp * _T10F;
  enum Cyc_Absyn_Incrementor _T110;
  int _T111;
  struct Cyc_Warn_String_Warn_Warg_struct _T112;
  struct Cyc_Warn_String_Warn_Warg_struct _T113;
  struct Cyc_Warn_String_Warn_Warg_struct _T114;
  int (* _T115)(unsigned int,struct _fat_ptr);
  void * (* _T116)(unsigned int,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T117;
  unsigned int _T118;
  struct _fat_ptr _T119;
  struct Cyc_Absyn_Exp * _T11A;
  struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T11B;
  struct Cyc_Absyn_PrimopOpt * _T11C;
  void * _T11D;
  void * * _T11E;
  long _T11F;
  struct Cyc_Absyn_Exp * _T120;
  enum Cyc_Absyn_Incrementor _T121;
  int _T122;
  enum Cyc_Absyn_Incrementor _T123;
  int _T124;
  enum Cyc_Absyn_Incrementor _T125;
  int _T126;
  enum Cyc_Absyn_Incrementor _T127;
  int _T128;
  struct Cyc_Absyn_Exp * _T129;
  void * _T12A;
  void * _T12B;
  struct Cyc_Absyn_Exp * _T12C;
  void * _T12D;
  struct Cyc_Absyn_Exp * _T12E;
  void * _T12F;
  struct Cyc_Absyn_Exp * _T130;
  struct _fat_ptr _T131;
  void * _T132;
  void * * _T133;
  long _T134;
  enum Cyc_Absyn_Incrementor _T135;
  int _T136;
  struct Cyc_Absyn_Exp * _T137;
  void * _T138;
  struct Cyc_Absyn_Exp * _T139;
  void * _T13A;
  struct Cyc_Absyn_Exp * _T13B;
  void * _T13C;
  struct Cyc_Absyn_Exp * _T13D;
  struct Cyc_Absyn_Exp * _T13E;
  void * _T13F;
  struct Cyc_Absyn_Exp * _T140;
  long _T141;
  struct Cyc_Absyn_Exp * _T142;
  struct Cyc_Absyn_Exp * _T143;
  void * _T144;
  struct Cyc_Absyn_Exp * _T145;
  struct Cyc_Absyn_Exp * _T146;
  struct Cyc_Absyn_Exp * _T147;
  struct Cyc_Absyn_Exp * _T148;
  struct Cyc_Absyn_Exp * _T149;
  struct Cyc_Absyn_Exp * _T14A;
  struct Cyc_Absyn_Stmt * _T14B;
  struct Cyc_Absyn_Exp * _T14C;
  struct _fat_ptr _T14D;
  struct Cyc_Absyn_Exp * _T14E;
  void * _T14F;
  struct Cyc_Absyn_Exp * _T150;
  struct Cyc_Absyn_Stmt * _T151;
  struct Cyc_Absyn_Stmt * _T152;
  struct Cyc_Absyn_Exp * _T153;
  struct Cyc_Absyn_Stmt * _T154;
  struct Cyc_Absyn_Exp * _T155;
  struct Cyc_Absyn_Stmt * _T156;
  struct Cyc_Absyn_Exp * _T157;
  long _T158;
  struct Cyc_Absyn_Exp * _T159;
  void * _T15A;
  struct Cyc_Absyn_Exp * _T15B;
  void * _T15C;
  struct Cyc_Absyn_Exp * _T15D;
  struct _fat_ptr _T15E;
  struct Cyc_Absyn_Exp * _T15F;
  void * _T160;
  struct Cyc_Absyn_Exp * _T161;
  void * _T162;
  void * _T163;
  struct Cyc_Absyn_Exp * _T164;
  void * _T165;
  struct Cyc_Absyn_Exp * _T166;
  void * _T167;
  struct Cyc_Absyn_Exp * _T168;
  struct _fat_ptr _T169;
  long _T16A;
  void (* _T16B)(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
											  enum Cyc_Absyn_Incrementor *),
		 enum Cyc_Absyn_Incrementor *);
  struct Cyc_Absyn_Exp * _T16C;
  enum Cyc_Absyn_Incrementor * _T16D;
  struct Cyc_Absyn_Exp * _T16E;
  struct Cyc_Absyn_Exp * _T16F;
  struct Cyc_Absyn_Exp * _T170;
  void * _T171;
  struct Cyc_Absyn_Exp * _T172;
  void * _T173;
  struct Cyc_Absyn_Exp * _T174;
  int * _T175;
  void * * _T176;
  long _T177;
  struct Cyc_Absyn_Exp * _T178;
  struct Cyc_Absyn_Exp * _T179;
  void * * _T17A;
  long * _T17B;
  void * * _T17C;
  long _T17D;
  void * _T17E;
  void * * _T17F;
  long _T180;
  struct Cyc_Absyn_PrimopOpt * _T181;
  int _T182;
  struct Cyc_Absyn_Exp * _T183;
  void * _T184;
  struct Cyc_Warn_String_Warn_Warg_struct _T185;
  int (* _T186)(struct _fat_ptr ap);
  struct _fat_ptr _T187;
  struct Cyc_Absyn_Exp * _T188;
  void * _T189;
  void * _T18A;
  struct Cyc_Absyn_Exp * _T18B;
  void * _T18C;
  struct Cyc_Absyn_Exp * _T18D;
  struct _fat_ptr _T18E;
  void * _T18F;
  void * * _T190;
  long _T191;
  struct Cyc_Absyn_PrimopOpt * _T192;
  long _T193;
  struct Cyc_Absyn_Exp * _T194;
  void * _T195;
  struct Cyc_Absyn_Exp * _T196;
  struct _fat_ptr _T197;
  struct Cyc_Absyn_Exp * _T198;
  void * _T199;
  struct Cyc_Absyn_Exp * _T19A;
  void * _T19B;
  void * _T19C;
  struct Cyc_Absyn_Exp * _T19D;
  void * _T19E;
  struct Cyc_Absyn_Exp * _T19F;
  struct _fat_ptr _T1A0;
  struct Cyc_Warn_String_Warn_Warg_struct _T1A1;
  int (* _T1A2)(struct _fat_ptr ap);
  struct _fat_ptr _T1A3;
  long _T1A4;
  long _T1A5;
  struct Cyc_Absyn_Exp * _T1A6;
  void * _T1A7;
  struct Cyc_Absyn_Exp * _T1A8;
  struct Cyc_Absyn_Exp * _T1A9;
  long _T1AA;
  void (* _T1AB)(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
											  struct _tuple36 *),
		 struct _tuple36 *);
  struct Cyc_Absyn_Exp * _T1AC;
  struct _tuple36 * _T1AD;
  struct Cyc_Absyn_Exp * _T1AE;
  struct Cyc_Absyn_Exp * _T1AF;
  struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T1B0;
  struct Cyc_Absyn_VarargCallInfo * _T1B1;
  struct Cyc_Absyn_Exp * _T1B2;
  void * _T1B3;
  long _T1B4;
  struct Cyc_Absyn_Exp * _T1B5;
  struct Cyc_Absyn_Exp * _T1B6;
  struct Cyc_Absyn_Exp * _T1B7;
  struct _fat_ptr _T1B8;
  void (* _T1B9)(void (*)(struct Cyc_Toc_Env *,struct Cyc_Absyn_Exp *),struct Cyc_Toc_Env *,
		 struct Cyc_List_List *);
  void (* _T1BA)(void (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_Toc_Env * _T1BB;
  struct Cyc_List_List * _T1BC;
  struct Cyc_Absyn_VarargCallInfo * _T1BD;
  struct Cyc_Absyn_Exp * _T1BE;
  void * _T1BF;
  struct Cyc_Absyn_VarargInfo * _T1C0;
  void * _T1C1;
  struct Cyc_Toc_Env * _T1C2;
  struct Cyc_List_List * _T1C3;
  void * _T1C4;
  struct Cyc_Absyn_Exp * _T1C5;
  struct Cyc_List_List * _T1C6;
  struct Cyc_List_List * _T1C7;
  void * _T1C8;
  struct Cyc_List_List * _T1C9;
  struct Cyc_List_List * _T1CA;
  struct Cyc_Absyn_Exp * _T1CB;
  struct Cyc_Absyn_Exp * _T1CC;
  void * _T1CD;
  struct Cyc_Absyn_Exp * _T1CE;
  void * _T1CF;
  struct Cyc_Absyn_Exp * _T1D0;
  void * _T1D1;
  struct Cyc_Absyn_Exp * _T1D2;
  struct _fat_ptr _T1D3;
  void * _T1D4;
  struct Cyc_Absyn_Exp * _T1D5;
  void * _T1D6;
  long _T1D7;
  struct Cyc_Absyn_Exp * _T1D8;
  struct Cyc_Absyn_Exp * _T1D9;
  struct Cyc_Absyn_Exp * _T1DA;
  struct _fat_ptr _T1DB;
  struct Cyc_Absyn_Exp * _T1DC;
  struct Cyc_Absyn_Exp * _T1DD;
  struct Cyc_Absyn_Exp * _T1DE;
  struct Cyc_Absyn_Exp * _T1DF;
  void * _T1E0;
  void * _T1E1;
  struct Cyc_Absyn_Exp * _T1E2;
  struct Cyc_Absyn_VarargInfo * _T1E3;
  long _T1E4;
  struct Cyc_Absyn_VarargInfo * _T1E5;
  void * _T1E6;
  void * _T1E7;
  int * _T1E8;
  int _T1E9;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1EA;
  void * _T1EB;
  int * _T1EC;
  int _T1ED;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1EE;
  void * _T1EF;
  struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T1F0;
  union Cyc_Absyn_DatatypeInfo _T1F1;
  struct _union_DatatypeInfo_KnownDatatype _T1F2;
  unsigned int _T1F3;
  void * _T1F4;
  union Cyc_Absyn_DatatypeInfo _T1F5;
  struct _union_DatatypeInfo_KnownDatatype _T1F6;
  struct Cyc_Absyn_Datatypedecl * * _T1F7;
  struct Cyc_Warn_String_Warn_Warg_struct _T1F8;
  int (* _T1F9)(struct _fat_ptr ap);
  struct _fat_ptr _T1FA;
  struct _fat_ptr _T1FB;
  int _T1FC;
  struct _tuple37 * _T1FD;
  struct _RegionHandle * _T1FE;
  unsigned int _T1FF;
  unsigned int _T200;
  unsigned int _T201;
  int _T202;
  struct Cyc_List_List * _T203;
  void * _T204;
  struct Cyc_Absyn_Exp * _T205;
  void * _T206;
  struct _fat_ptr _T207;
  int _T208;
  unsigned char * _T209;
  struct _tuple37 * _T20A;
  struct _tuple37 _T20B;
  struct Cyc_List_List * _T20C;
  void * _T20D;
  struct _tuple1 * _T20E;
  struct Cyc_Absyn_Datatypedecl * _T20F;
  struct _tuple1 * _T210;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T211;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T212;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T213;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T214;
  struct _fat_ptr _T215;
  unsigned char * _T216;
  struct _tuple37 * _T217;
  int _T218;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T219;
  struct Cyc_List_List * _T21A;
  struct Cyc_List_List * _T21B;
  struct _fat_ptr _T21C;
  unsigned char * _T21D;
  struct _tuple37 * _T21E;
  int _T21F;
  struct Cyc_Absyn_Exp * _T220;
  void * _T221;
  struct Cyc_Absyn_Exp * _T222;
  void * _T223;
  struct Cyc_List_List * _T224;
  struct _tuple1 * _T225;
  void * _T226;
  struct Cyc_Absyn_Exp * _T227;
  void * _T228;
  struct Cyc_Absyn_Exp * _T229;
  struct Cyc_Absyn_Stmt * _T22A;
  int _T22B;
  struct Cyc_List_List * _T22C;
  void * _T22D;
  struct Cyc_Absyn_Exp * _T22E;
  void * _T22F;
  struct _fat_ptr _T230;
  int _T231;
  unsigned char * _T232;
  struct _tuple37 * _T233;
  struct _tuple37 _T234;
  struct _fat_ptr _T235;
  unsigned char * _T236;
  struct _tuple37 * _T237;
  int _T238;
  struct _tuple37 _T239;
  void * _T23A;
  struct Cyc_List_List * _T23B;
  void * _T23C;
  long _T23D;
  struct _tuple1 * _T23E;
  struct Cyc_Absyn_Datatypedecl * _T23F;
  struct _tuple1 * _T240;
  struct Cyc_List_List * _T241;
  struct _fat_ptr * _T242;
  struct Cyc_Absyn_Exp * _T243;
  struct _fat_ptr * _T244;
  struct Cyc_Absyn_Exp * _T245;
  struct _fat_ptr _T246;
  struct _tuple1 * _T247;
  void * _T248;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T249;
  void * _T24A;
  struct Cyc_Absyn_Exp * _T24B;
  void * _T24C;
  struct Cyc_Absyn_Exp * _T24D;
  struct Cyc_Absyn_Stmt * _T24E;
  struct Cyc_List_List * _T24F;
  struct Cyc_List_List * _T250;
  struct Cyc_Toc_Env * _T251;
  struct Cyc_List_List * _T252;
  void * _T253;
  struct Cyc_Absyn_Exp * _T254;
  struct Cyc_List_List * _T255;
  struct Cyc_List_List * _T256;
  void * _T257;
  struct Cyc_List_List * _T258;
  struct Cyc_List_List * _T259;
  struct Cyc_Absyn_Exp * _T25A;
  void * _T25B;
  struct Cyc_Absyn_Exp * _T25C;
  struct Cyc_Absyn_Exp * _T25D;
  long _T25E;
  struct Cyc_Absyn_Exp * _T25F;
  void * _T260;
  struct Cyc_Absyn_Exp * _T261;
  struct Cyc_Absyn_Exp * _T262;
  struct _fat_ptr _T263;
  void * _T264;
  struct Cyc_Absyn_Exp * _T265;
  struct Cyc_Absyn_Exp * _T266;
  struct Cyc_Absyn_Exp * _T267;
  struct Cyc_Absyn_Exp * _T268;
  struct Cyc_Absyn_Exp * _T269;
  void * _T26A;
  void * _T26B;
  int _T26C;
  int _T26D;
  struct Cyc_Absyn_Exp * _T26E;
  struct _tuple1 * _T26F;
  void * _T270;
  struct Cyc_Absyn_Exp * _T271;
  struct Cyc_Absyn_Exp * _T272;
  struct Cyc_Absyn_Exp * _T273;
  unsigned int _T274;
  struct Cyc_Absyn_Stmt * _T275;
  struct Cyc_Absyn_Exp * _T276;
  unsigned int _T277;
  struct Cyc_Absyn_Stmt * _T278;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T279;
  void * * _T27A;
  struct Cyc_Absyn_Exp * _T27B;
  void * _T27C;
  void * * _T27D;
  void * * _T27E;
  struct _tuple38 _T27F;
  void * _T280;
  int * _T281;
  int _T282;
  void * _T283;
  int * _T284;
  unsigned int _T285;
  void * _T286;
  void * _T287;
  void * _T288;
  struct Cyc_Absyn_PtrInfo _T289;
  struct Cyc_Absyn_PtrAtts _T28A;
  void * _T28B;
  void * _T28C;
  struct Cyc_Absyn_PtrInfo _T28D;
  struct Cyc_Absyn_PtrAtts _T28E;
  void * _T28F;
  struct Cyc_Absyn_PtrInfo _T290;
  struct Cyc_Absyn_PtrAtts _T291;
  void * _T292;
  struct Cyc_Absyn_PtrInfo _T293;
  struct Cyc_Absyn_PtrAtts _T294;
  void * _T295;
  struct _tuple39 _T296;
  struct Cyc_Absyn_Exp * _T297;
  struct Cyc_Absyn_Exp * _T298;
  long _T299;
  struct Cyc_Absyn_Exp * _T29A;
  struct Cyc_Absyn_Exp * _T29B;
  struct Cyc_Absyn_Exp * _T29C;
  struct _fat_ptr _T29D;
  long _T29E;
  struct Cyc_Absyn_Exp * _T29F;
  struct Cyc_Absyn_Exp * _T2A0;
  long _T2A1;
  long _T2A2;
  struct Cyc_Absyn_PtrInfo _T2A3;
  struct Cyc_Absyn_Tqual _T2A4;
  long _T2A5;
  long _T2A6;
  struct Cyc_Absyn_Exp * _T2A7;
  struct Cyc_Absyn_Exp * _T2A8;
  void * _T2A9;
  struct Cyc_Absyn_Exp * _T2AA;
  struct Cyc_Absyn_Exp * _T2AB;
  struct Cyc_Absyn_Exp * _T2AC;
  void * _T2AD;
  struct Cyc_Absyn_Exp * _T2AE;
  struct Cyc_Absyn_Exp * _T2AF;
  long _T2B0;
  struct Cyc_Absyn_Exp * _T2B1;
  void * _T2B2;
  struct Cyc_Absyn_Exp * _T2B3;
  int * _T2B4;
  unsigned int _T2B5;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T2B6;
  union Cyc_Absyn_Cnst _T2B7;
  struct _union_Cnst_Wstring_c _T2B8;
  unsigned int _T2B9;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T2BA;
  void * _T2BB;
  int * _T2BC;
  unsigned int _T2BD;
  void * _T2BE;
  void * _T2BF;
  struct Cyc_Absyn_Vardecl * _T2C0;
  void * _T2C1;
  long _T2C2;
  void * _T2C3;
  struct Cyc_Absyn_Exp * _T2C4;
  long _T2C5;
  long _T2C6;
  struct Cyc_Absyn_Exp * _T2C7;
  struct Cyc_Absyn_Exp * _T2C8;
  struct _fat_ptr _T2C9;
  struct Cyc_Absyn_Exp * _T2CA;
  void * _T2CB;
  void * _T2CC;
  struct Cyc_Absyn_Exp * _T2CD;
  void * _T2CE;
  struct Cyc_Absyn_Exp * _T2CF;
  void * _T2D0;
  struct Cyc_Absyn_Exp * _T2D1;
  struct _fat_ptr _T2D2;
  struct Cyc_Absyn_Exp * _T2D3;
  long _T2D4;
  struct Cyc_Absyn_PtrInfo _T2D5;
  struct Cyc_Absyn_Tqual _T2D6;
  long _T2D7;
  struct Cyc_Absyn_Exp * _T2D8;
  struct Cyc_Absyn_Exp * _T2D9;
  void * _T2DA;
  struct Cyc_Absyn_Exp * _T2DB;
  struct Cyc_Absyn_Exp * _T2DC;
  struct Cyc_Absyn_Exp * _T2DD;
  void * _T2DE;
  void * _T2DF;
  struct Cyc_Absyn_PtrInfo _T2E0;
  void * _T2E1;
  void * _T2E2;
  struct Cyc_Absyn_Exp * _T2E3;
  void * _T2E4;
  struct Cyc_Absyn_Exp * _T2E5;
  void * _T2E6;
  long _T2E7;
  struct Cyc_Absyn_Exp * _T2E8;
  struct Cyc_Absyn_Exp * _T2E9;
  struct _fat_ptr _T2EA;
  struct Cyc_Absyn_Exp * _T2EB;
  struct _tuple1 * _T2EC;
  void * _T2ED;
  struct Cyc_Absyn_Exp * _T2EE;
  struct Cyc_Absyn_Stmt * _T2EF;
  struct Cyc_Absyn_Exp * _T2F0;
  struct Cyc_Absyn_Exp * _T2F1;
  void * _T2F2;
  struct Cyc_Absyn_Exp * _T2F3;
  struct _fat_ptr _T2F4;
  struct Cyc_Absyn_Exp * _T2F5;
  void * _T2F6;
  struct Cyc_Absyn_PtrInfo _T2F7;
  void * _T2F8;
  void * _T2F9;
  struct Cyc_Absyn_Exp * _T2FA;
  void * _T2FB;
  struct Cyc_Absyn_Exp * _T2FC;
  void * _T2FD;
  struct Cyc_Absyn_Exp * _T2FE;
  struct _fat_ptr _T2FF;
  struct Cyc_Absyn_Exp * _T300;
  long _T301;
  long _T302;
  struct Cyc_Absyn_Exp * _T303;
  struct Cyc_Absyn_Exp * _T304;
  void * _T305;
  struct Cyc_Absyn_Exp * _T306;
  struct Cyc_Absyn_Exp * _T307;
  void * _T308;
  struct Cyc_Absyn_PtrInfo _T309;
  struct Cyc_Absyn_PtrAtts _T30A;
  void * _T30B;
  long _T30C;
  struct Cyc_Absyn_PtrInfo _T30D;
  struct Cyc_Absyn_PtrAtts _T30E;
  void * _T30F;
  long _T310;
  struct Cyc_Absyn_Exp * _T311;
  struct Cyc_Absyn_Exp * _T312;
  struct _fat_ptr _T313;
  void * _T314;
  struct Cyc_Absyn_Exp * _T315;
  struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct * _T316;
  char * _T317;
  char * _T318;
  struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct * _T319;
  char * _T31A;
  char * _T31B;
  struct Cyc_Absyn_Exp * _T31C;
  struct Cyc_Absyn_PtrInfo _T31D;
  void * _T31E;
  void * _T31F;
  struct Cyc_Absyn_Exp * _T320;
  void * _T321;
  struct Cyc_Absyn_Exp * _T322;
  void * _T323;
  struct Cyc_Absyn_Exp * _T324;
  struct _fat_ptr _T325;
  void * _T326;
  struct Cyc_Absyn_Exp * _T327;
  struct Cyc_Absyn_PtrInfo _T328;
  void * _T329;
  void * _T32A;
  struct Cyc_Absyn_Exp * _T32B;
  void * _T32C;
  struct Cyc_Absyn_Exp * _T32D;
  void * _T32E;
  struct Cyc_Absyn_Exp * _T32F;
  struct _fat_ptr _T330;
  void * _T331;
  long _T332;
  struct Cyc_Absyn_Exp * _T333;
  void * _T334;
  struct Cyc_Absyn_Exp * _T335;
  struct _fat_ptr _T336;
  struct Cyc_Absyn_Exp * _T337;
  void * * _T338;
  void * _T339;
  struct Cyc_Absyn_Exp * _T33A;
  long _T33B;
  long _T33C;
  struct Cyc_Absyn_PtrInfo _T33D;
  struct Cyc_Absyn_Tqual _T33E;
  long _T33F;
  long _T340;
  int (* _T341)(struct _fat_ptr);
  struct _fat_ptr _T342;
  struct Cyc_Absyn_Exp * _T343;
  void * _T344;
  struct Cyc_Absyn_PtrInfo _T345;
  void * _T346;
  void * _T347;
  struct Cyc_Absyn_Exp * _T348;
  void * _T349;
  struct Cyc_Absyn_Exp * _T34A;
  void * _T34B;
  struct Cyc_Absyn_Exp * _T34C;
  void * _T34D;
  struct Cyc_Absyn_Exp * _T34E;
  struct _fat_ptr _T34F;
  void * _T350;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T351;
  void * _T352;
  int * _T353;
  int _T354;
  void * _T355;
  void * _T356;
  struct Cyc_Absyn_PtrInfo _T357;
  struct Cyc_Absyn_PtrAtts _T358;
  void * _T359;
  struct Cyc_Absyn_Exp * _T35A;
  struct Cyc_Absyn_Exp * _T35B;
  struct _fat_ptr * _T35C;
  struct Cyc_Absyn_Exp * _T35D;
  long _T35E;
  struct Cyc_Absyn_Exp * _T35F;
  struct Cyc_Absyn_Exp * _T360;
  long _T361;
  void (* _T362)(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
											  long),
		 long);
  struct Cyc_Absyn_Exp * _T363;
  struct Cyc_Absyn_Exp * _T364;
  void * _T365;
  struct Cyc_Absyn_Exp * _T366;
  struct Cyc_Absyn_Kind * _T367;
  struct Cyc_Absyn_Kind * _T368;
  struct Cyc_Absyn_Exp * _T369;
  void * _T36A;
  void * _T36B;
  struct Cyc_Absyn_Kind * _T36C;
  long _T36D;
  struct Cyc_Absyn_Exp * _T36E;
  void * _T36F;
  struct Cyc_Absyn_Exp * _T370;
  struct Cyc_Absyn_Exp * _T371;
  void * _T372;
  void * _T373;
  struct Cyc_Absyn_Tqual _T374;
  void * _T375;
  struct Cyc_Absyn_Exp * _T376;
  struct Cyc_Absyn_Exp * _T377;
  void * _T378;
  void * _T379;
  int * _T37A;
  int _T37B;
  struct Cyc_Absyn_ArrayInfo _T37C;
  struct Cyc_Absyn_Exp * _T37D;
  void * _T37E;
  struct Cyc_Absyn_Exp * _T37F;
  struct Cyc_Absyn_Exp * _T380;
  void * _T381;
  struct Cyc_Absyn_Exp * _T382;
  struct _fat_ptr _T383;
  struct Cyc_Absyn_Exp * _T384;
  int * _T385;
  unsigned int _T386;
  struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T387;
  struct Cyc_Absyn_Exp * * _T388;
  struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T389;
  struct Cyc_Absyn_Exp * * _T38A;
  struct Cyc_Absyn_Exp * * _T38B;
  struct Cyc_Absyn_Exp * _T38C;
  void * _T38D;
  struct Cyc_Absyn_Exp * _T38E;
  struct Cyc_Absyn_Exp * _T38F;
  void * _T390;
  long _T391;
  struct Cyc_Absyn_Exp * _T392;
  struct Cyc_Absyn_Exp * _T393;
  struct Cyc_Absyn_Exp * _T394;
  struct Cyc_Absyn_Exp * _T395;
  void * _T396;
  struct Cyc_Absyn_Exp * _T397;
  struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct * _T398;
  long _T399;
  struct Cyc_Absyn_Exp * _T39A;
  void * _T39B;
  struct Cyc_Absyn_Exp * _T39C;
  struct Cyc_Absyn_Exp * _T39D;
  struct Cyc_Absyn_Exp * _T39E;
  void * _T39F;
  struct Cyc_Absyn_Exp * _T3A0;
  unsigned int _T3A1;
  struct Cyc_Absyn_Exp * _T3A2;
  void * _T3A3;
  struct Cyc_Absyn_Exp * _T3A4;
  struct _fat_ptr _T3A5;
  struct Cyc_Absyn_Exp * _T3A6;
  void * _T3A7;
  struct Cyc_Absyn_Exp * _T3A8;
  struct Cyc_Absyn_Exp * _T3A9;
  unsigned int _T3AA;
  struct _tuple1 * _T3AB;
  void * _T3AC;
  struct Cyc_Absyn_Exp * _T3AD;
  struct Cyc_Absyn_Exp * _T3AE;
  struct Cyc_Absyn_Stmt * _T3AF;
  struct Cyc_Absyn_Exp * _T3B0;
  void * _T3B1;
  struct Cyc_Absyn_Exp * _T3B2;
  struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T3B3;
  void * _T3B4;
  struct Cyc_Absyn_Exp * _T3B5;
  struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T3B6;
  struct Cyc_Absyn_Exp * _T3B7;
  void * _T3B8;
  void * _T3B9;
  long _T3BA;
  long _T3BB;
  long _T3BC;
  struct Cyc_Absyn_Exp * _T3BD;
  void * _T3BE;
  struct Cyc_Absyn_Exp * _T3BF;
  void * _T3C0;
  void * _T3C1;
  struct _fat_ptr * _T3C2;
  long _T3C3;
  long _T3C4;
  struct Cyc_Absyn_Exp * _T3C5;
  long _T3C6;
  struct Cyc_Absyn_Exp * _T3C7;
  struct Cyc_Absyn_Exp * _T3C8;
  struct Cyc_Absyn_Exp * _T3C9;
  struct Cyc_Absyn_Exp * _T3CA;
  void * _T3CB;
  void * _T3CC;
  long _T3CD;
  int * _T3CE;
  int _T3CF;
  struct Cyc_Absyn_PtrInfo _T3D0;
  struct Cyc_Warn_String_Warn_Warg_struct _T3D1;
  int (* _T3D2)(struct _fat_ptr ap);
  struct _fat_ptr _T3D3;
  struct Cyc_Toc_Env * _T3D4;
  struct Cyc_Absyn_Exp * _T3D5;
  struct Cyc_Absyn_Exp * _T3D6;
  void * _T3D7;
  long _T3D8;
  long _T3D9;
  struct Cyc_Absyn_Exp * _T3DA;
  void * _T3DB;
  struct Cyc_Absyn_Exp * _T3DC;
  void * _T3DD;
  void * _T3DE;
  struct _fat_ptr * _T3DF;
  long _T3E0;
  struct Cyc_Absyn_Exp * (* _T3E1)(struct Cyc_Absyn_Exp *,struct _fat_ptr *,
				   unsigned int);
  long _T3E2;
  struct Cyc_Absyn_Exp * _T3E3;
  long _T3E4;
  long _T3E5;
  struct Cyc_Absyn_Exp * _T3E6;
  struct Cyc_Absyn_Exp * _T3E7;
  struct Cyc_Absyn_Exp * _T3E8;
  long _T3E9;
  struct Cyc_Absyn_Exp * _T3EA;
  struct Cyc_Toc_Env * _T3EB;
  struct Cyc_Absyn_Exp * _T3EC;
  struct Cyc_Absyn_Exp * _T3ED;
  void * _T3EE;
  struct Cyc_Toc_Env * _T3EF;
  struct Cyc_Absyn_Exp * _T3F0;
  struct Cyc_Absyn_Exp * _T3F1;
  void * _T3F2;
  struct Cyc_Absyn_Exp * _T3F3;
  enum Cyc_Toc_PTR_ANS _T3F4;
  int _T3F5;
  struct Cyc_Absyn_Exp * _T3F6;
  enum Cyc_Toc_PTR_ANS _T3F7;
  int _T3F8;
  struct Cyc_Absyn_Exp * _T3F9;
  struct Cyc_Absyn_Exp * _T3FA;
  struct Cyc_Toc_Env * _T3FB;
  struct Cyc_List_List * _T3FC;
  void * _T3FD;
  struct _tuple22 * _T3FE;
  struct _tuple22 _T3FF;
  struct Cyc_Absyn_Exp * _T400;
  struct Cyc_List_List * _T401;
  long _T402;
  struct Cyc_Absyn_Exp * _T403;
  long _T404;
  struct Cyc_Absyn_Exp * _T405;
  void * _T406;
  void * _T407;
  long _T408;
  long _T409;
  struct Cyc_Warn_String_Warn_Warg_struct _T40A;
  struct Cyc_Absyn_Exp * _T40B;
  unsigned int _T40C;
  struct _fat_ptr _T40D;
  struct Cyc_List_List * _T40E;
  struct _tuple22 * _T40F;
  long _T410;
  void * _T411;
  struct Cyc_Absyn_Exp * _T412;
  void * _T413;
  struct Cyc_Absyn_Exp * _T414;
  struct Cyc_List_List * _T415;
  struct Cyc_List_List * _T416;
  struct _tuple22 * _T417;
  struct Cyc_Absyn_Exp * _T418;
  void * _T419;
  long _T41A;
  struct Cyc_Absyn_Exp * _T41B;
  void * _T41C;
  struct Cyc_Toc_Env * _T41D;
  struct Cyc_List_List * _T41E;
  void * _T41F;
  struct _tuple22 * _T420;
  struct _tuple22 _T421;
  struct Cyc_Absyn_Exp * _T422;
  struct Cyc_List_List * _T423;
  struct Cyc_Absyn_Exp * _T424;
  long _T425;
  int * _T426;
  int _T427;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T428;
  void * _T429;
  int * _T42A;
  int _T42B;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T42C;
  struct Cyc_List_List * _T42D;
  void * _T42E;
  struct Cyc_Absyn_Exp * _T42F;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T430;
  struct Cyc_Absyn_Aggrdecl * _T431;
  struct Cyc_Absyn_Exp * _T432;
  struct Cyc_Warn_String_Warn_Warg_struct _T433;
  int (* _T434)(struct _fat_ptr ap);
  struct _fat_ptr _T435;
  struct Cyc_Absyn_Exp * _T436;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T437;
  struct _tuple1 * * _T438;
  struct Cyc_Absyn_Aggrdecl * _T439;
  struct Cyc_Absyn_AggrdeclImpl * _T43A;
  struct Cyc_Warn_String_Warn_Warg_struct _T43B;
  int (* _T43C)(struct _fat_ptr ap);
  struct _fat_ptr _T43D;
  int * _T43E;
  int _T43F;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T440;
  void * _T441;
  int * _T442;
  int _T443;
  void * _T444;
  struct _tuple1 * * _T445;
  struct _tuple12 _T446;
  struct Cyc_Warn_String_Warn_Warg_struct _T447;
  int (* _T448)(struct _fat_ptr ap);
  struct _fat_ptr _T449;
  struct Cyc_Absyn_Aggrdecl * _T44A;
  struct Cyc_Absyn_AggrdeclImpl * _T44B;
  struct Cyc_Absyn_AggrdeclImpl * _T44C;
  struct Cyc_List_List * _T44D;
  struct Cyc_List_List * _T44E;
  struct Cyc_List_List * _T44F;
  struct Cyc_List_List * _T450;
  void * _T451;
  struct _RegionHandle * _T452;
  struct Cyc_Absyn_Exp * _T453;
  unsigned int _T454;
  struct Cyc_List_List * _T455;
  struct Cyc_Absyn_Aggrdecl * _T456;
  enum Cyc_Absyn_AggrKind _T457;
  struct Cyc_Absyn_Aggrdecl * _T458;
  struct Cyc_Absyn_AggrdeclImpl * _T459;
  struct Cyc_List_List * _T45A;
  long _T45B;
  int * _T45C;
  unsigned int _T45D;
  struct Cyc_Absyn_Vardecl * _T45E;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T45F;
  void * _T460;
  int * _T461;
  int _T462;
  struct Cyc_List_List * _T463;
  void * _T464;
  struct Cyc_Absyn_Exp * _T465;
  struct Cyc_Absyn_Aggrfield * _T466;
  void * _T467;
  long _T468;
  struct Cyc_Absyn_Exp * _T469;
  void * _T46A;
  void * _T46B;
  long _T46C;
  struct Cyc_Absyn_Aggrfield * _T46D;
  void * _T46E;
  struct Cyc_Absyn_Exp * _T46F;
  void * _T470;
  struct Cyc_Absyn_Exp * _T471;
  struct Cyc_Absyn_Exp * _T472;
  struct Cyc_Absyn_Exp * _T473;
  struct Cyc_Absyn_Aggrdecl * _T474;
  struct Cyc_Absyn_AggrdeclImpl * _T475;
  long _T476;
  struct Cyc_Absyn_Aggrfield * _T477;
  int _T478;
  unsigned int _T479;
  struct Cyc_Absyn_Exp * _T47A;
  void * _T47B;
  struct _tuple1 * _T47C;
  struct _tuple1 * _T47D;
  struct _fat_ptr * _T47E;
  struct _fat_ptr _T47F;
  struct Cyc_String_pa_PrintArg_struct _T480;
  struct Cyc_Absyn_Aggrdecl * _T481;
  struct _tuple1 * _T482;
  struct _tuple1 _T483;
  struct _fat_ptr * _T484;
  struct Cyc_String_pa_PrintArg_struct _T485;
  struct _fat_ptr * _T486;
  struct _fat_ptr _T487;
  struct _fat_ptr _T488;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T489;
  struct Cyc_List_List * _T48A;
  struct _fat_ptr _T48B;
  void * _T48C;
  struct Cyc_Absyn_Exp * _T48D;
  void * _T48E;
  struct Cyc_Absyn_Exp * _T48F;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T490;
  struct _tuple1 * * _T491;
  struct Cyc_List_List * _T492;
  struct _fat_ptr _T493;
  long _T494;
  struct Cyc_Absyn_Aggrdecl * _T495;
  struct Cyc_Absyn_AggrdeclImpl * _T496;
  struct Cyc_Absyn_AggrdeclImpl * _T497;
  struct Cyc_List_List * _T498;
  struct Cyc_List_List * _T499;
  struct Cyc_List_List * _T49A;
  struct Cyc_Absyn_Aggrdecl * _T49B;
  struct Cyc_List_List * _T49C;
  struct Cyc_List_List * _T49D;
  struct Cyc_List_List * _T49E;
  struct Cyc_Absyn_Aggrdecl * _T49F;
  struct Cyc_Absyn_AggrdeclImpl * _T4A0;
  struct Cyc_Absyn_AggrdeclImpl * _T4A1;
  struct Cyc_List_List * _T4A2;
  void * _T4A3;
  struct Cyc_List_List * _T4A4;
  struct Cyc_Absyn_Aggrfield * _T4A5;
  void * _T4A6;
  struct Cyc_Absyn_Aggrfield * _T4A7;
  void * _T4A8;
  void * _T4A9;
  struct Cyc_List_List * _T4AA;
  struct Cyc_List_List * _T4AB;
  struct Cyc_List_List * _T4AC;
  struct Cyc_Absyn_Aggrfield * _T4AD;
  void * _T4AE;
  int * _T4AF;
  int _T4B0;
  struct Cyc_Absyn_ArrayInfo _T4B1;
  struct Cyc_Absyn_Exp * _T4B2;
  struct Cyc_Absyn_Exp * _T4B3;
  long _T4B4;
  struct Cyc_Absyn_Exp * _T4B5;
  void * _T4B6;
  struct Cyc_Absyn_Aggrfield * _T4B7;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T4B8;
  struct Cyc_Absyn_Exp * _T4B9;
  void * _T4BA;
  struct Cyc_Absyn_Exp * _T4BB;
  void * _T4BC;
  int * _T4BD;
  int _T4BE;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T4BF;
  void * _T4C0;
  int * _T4C1;
  int _T4C2;
  struct Cyc_Absyn_Aggrfield * _T4C3;
  struct Cyc_Absyn_Exp * _T4C4;
  void * _T4C5;
  struct Cyc_Absyn_Aggrfield * _T4C6;
  void * _T4C7;
  long _T4C8;
  struct Cyc_Absyn_Kind * _T4C9;
  struct Cyc_Absyn_Kind * _T4CA;
  struct Cyc_Absyn_Aggrfield * _T4CB;
  void * _T4CC;
  struct Cyc_Absyn_Kind * _T4CD;
  long _T4CE;
  struct Cyc_Absyn_Aggrfield * _T4CF;
  struct Cyc_List_List * _T4D0;
  struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T4D1;
  struct Cyc_Absyn_Aggrfield * _T4D2;
  struct Cyc_List_List * _T4D3;
  struct _fat_ptr * _T4D4;
  struct _fat_ptr _T4D5;
  struct Cyc_Int_pa_PrintArg_struct _T4D6;
  int _T4D7;
  int _T4D8;
  struct _fat_ptr _T4D9;
  struct _fat_ptr _T4DA;
  struct Cyc_List_List * _T4DB;
  struct _tuple1 * * _T4DC;
  struct Cyc_Absyn_Aggrdecl * _T4DD;
  struct Cyc_Absyn_Exp * _T4DE;
  struct Cyc_Absyn_Aggrdecl * * _T4DF;
  union Cyc_Absyn_AggrInfo _T4E0;
  struct Cyc_List_List * _T4E1;
  struct Cyc_Warn_String_Warn_Warg_struct _T4E2;
  int (* _T4E3)(struct _fat_ptr ap);
  struct _fat_ptr _T4E4;
  struct Cyc_Absyn_Aggrdecl * _T4E5;
  struct Cyc_Absyn_AggrdeclImpl * _T4E6;
  struct Cyc_Absyn_AggrdeclImpl * _T4E7;
  long _T4E8;
  struct Cyc_List_List * _T4E9;
  void * _T4EA;
  struct Cyc_Absyn_Exp * _T4EB;
  void * _T4EC;
  struct Cyc_Absyn_Aggrfield * _T4ED;
  long _T4EE;
  long _T4EF;
  struct Cyc_Absyn_Exp * _T4F0;
  void * _T4F1;
  struct Cyc_Absyn_Exp * _T4F2;
  struct Cyc_Absyn_Aggrdecl * _T4F3;
  struct Cyc_Absyn_Aggrfield * _T4F4;
  struct _fat_ptr * _T4F5;
  struct Cyc_Absyn_Exp * _T4F6;
  void * _T4F7;
  struct Cyc_List_List * _T4F8;
  struct _tuple22 * _T4F9;
  struct _tuple22 * _T4FA;
  struct _fat_ptr _T4FB;
  struct Cyc_Absyn_Exp * _T4FC;
  struct Cyc_List_List * _T4FD;
  struct Cyc_Absyn_Aggrfield * _T4FE;
  struct _fat_ptr * _T4FF;
  struct Cyc_Absyn_Exp * _T500;
  struct _fat_ptr _T501;
  struct Cyc_Absyn_Aggrdecl * _T502;
  struct Cyc_Absyn_AggrdeclImpl * _T503;
  struct Cyc_List_List * _T504;
  void * _T505;
  struct _tuple40 * _T506;
  struct _tuple40 _T507;
  struct Cyc_Absyn_Aggrfield * _T508;
  struct Cyc_List_List * _T509;
  void * _T50A;
  struct Cyc_Absyn_Aggrfield * _T50B;
  struct Cyc_List_List * _T50C;
  void * _T50D;
  struct Cyc_Absyn_Aggrfield * _T50E;
  void * _T50F;
  struct Cyc_Absyn_Exp * _T510;
  void * _T511;
  void * _T512;
  long _T513;
  long _T514;
  long _T515;
  long _T516;
  void * _T517;
  struct Cyc_Absyn_Exp * _T518;
  struct Cyc_List_List * _T519;
  struct _tuple22 * _T51A;
  struct Cyc_List_List * _T51B;
  struct Cyc_List_List * _T51C;
  struct Cyc_Absyn_Exp * _T51D;
  struct Cyc_List_List * _T51E;
  struct Cyc_Absyn_Datatypefield * _T51F;
  struct Cyc_List_List * _T520;
  void * _T521;
  struct Cyc_Absyn_Exp * _T522;
  void * _T523;
  struct Cyc_List_List * _T524;
  void * _T525;
  struct _tuple26 * _T526;
  struct _tuple26 _T527;
  void * _T528;
  long _T529;
  long _T52A;
  struct Cyc_Absyn_Exp * _T52B;
  void * _T52C;
  struct Cyc_Absyn_Exp * _T52D;
  struct Cyc_Absyn_Exp * _T52E;
  struct Cyc_List_List * _T52F;
  struct Cyc_List_List * _T530;
  struct Cyc_Absyn_Exp * _T531;
  struct Cyc_Absyn_Datatypedecl * _T532;
  long _T533;
  struct Cyc_Absyn_Datatypefield * _T534;
  struct _tuple1 * _T535;
  struct Cyc_Absyn_Exp * _T536;
  void * _T537;
  struct Cyc_Absyn_Datatypedecl * _T538;
  struct Cyc_Absyn_Datatypefield * _T539;
  struct _tuple1 * _T53A;
  long _T53B;
  struct Cyc_List_List * _T53C;
  struct _fat_ptr * _T53D;
  struct Cyc_List_List * _T53E;
  void * _T53F;
  struct Cyc_Absyn_Exp * _T540;
  struct Cyc_List_List * _T541;
  struct Cyc_Absyn_Exp * _T542;
  struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T543;
  struct Cyc_Absyn_Datatypefield * _T544;
  struct _tuple1 * _T545;
  struct Cyc_Absyn_Datatypedecl * _T546;
  struct _tuple1 * _T547;
  struct Cyc_List_List * _T548;
  struct Cyc_List_List * _T549;
  struct _tuple22 * _T54A;
  struct Cyc_List_List * _T54B;
  void * _T54C;
  struct Cyc_List_List * _T54D;
  struct Cyc_Absyn_Exp * _T54E;
  struct Cyc_List_List * _T54F;
  struct _tuple22 * _T550;
  struct Cyc_Absyn_MallocInfo _T551;
  struct Cyc_Absyn_MallocInfo _T552;
  struct Cyc_Absyn_MallocInfo _T553;
  struct Cyc_Absyn_MallocInfo _T554;
  struct Cyc_Absyn_MallocInfo _T555;
  struct Cyc_Absyn_MallocInfo _T556;
  struct Cyc_Absyn_MallocInfo _T557;
  void * * _T558;
  void * _T559;
  long _T55A;
  enum Cyc_Absyn_MallocKind _T55B;
  int _T55C;
  long _T55D;
  void * * _T55E;
  void * _T55F;
  struct Cyc_Absyn_Exp * _T560;
  void * _T561;
  struct Cyc_Absyn_Exp * _T562;
  struct Cyc_Absyn_Exp * _T563;
  struct Cyc_Absyn_Exp * _T564;
  struct Cyc_Absyn_Exp * _T565;
  struct Cyc_Absyn_Exp * _T566;
  void * _T567;
  struct Cyc_Absyn_Exp * _T568;
  struct Cyc_Absyn_Exp * _T569;
  struct Cyc_Absyn_Exp * _T56A;
  struct Cyc_Absyn_Exp * _T56B;
  void * _T56C;
  struct Cyc_Absyn_Exp * _T56D;
  struct Cyc_Absyn_Exp * _T56E;
  long _T56F;
  void * * _T570;
  void * _T571;
  struct Cyc_Absyn_Exp * _T572;
  enum Cyc_Absyn_MallocKind _T573;
  int _T574;
  struct Cyc_Absyn_Exp * (* _T575)(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
				   struct Cyc_Absyn_Exp *);
  long _T576;
  struct Cyc_Absyn_Exp * _T577;
  struct Cyc_Absyn_Exp * _T578;
  struct Cyc_Absyn_Exp * _T579;
  long _T57A;
  struct Cyc_Absyn_Exp * _T57B;
  enum Cyc_Absyn_MallocKind _T57C;
  int _T57D;
  struct Cyc_Absyn_Exp * _T57E;
  void * _T57F;
  struct Cyc_Absyn_Exp * _T580;
  void * _T581;
  struct Cyc_Absyn_Exp * _T582;
  struct Cyc_Absyn_Exp * _T583;
  struct _fat_ptr _T584;
  struct Cyc_Absyn_Exp * _T585;
  struct _tuple1 * _T586;
  void * _T587;
  struct Cyc_Absyn_Exp * _T588;
  struct Cyc_Absyn_Stmt * _T589;
  struct Cyc_Absyn_Exp * _T58A;
  struct Cyc_Absyn_Exp * _T58B;
  void * _T58C;
  struct Cyc_Absyn_Exp * _T58D;
  struct Cyc_Absyn_Exp * _T58E;
  void * _T58F;
  struct Cyc_Absyn_Exp * _T590;
  void * _T591;
  long _T592;
  long _T593;
  struct Cyc_Warn_String_Warn_Warg_struct _T594;
  int (* _T595)(struct _fat_ptr ap);
  struct _fat_ptr _T596;
  struct Cyc_Absyn_Exp * _T597;
  struct Cyc_Absyn_Exp * _T598;
  struct Cyc_Absyn_Exp * _T599;
  struct Cyc_Absyn_Exp * _T59A;
  struct Cyc_Absyn_Exp * _T59B;
  unsigned int _T59C;
  struct Cyc_Absyn_Exp * _T59D;
  struct Cyc_Absyn_Exp * _T59E;
  struct Cyc_Absyn_Exp * _T59F;
  unsigned int _T5A0;
  struct Cyc_Absyn_Exp * _T5A1;
  struct _tuple1 * _T5A2;
  void * _T5A3;
  struct Cyc_Absyn_Exp * _T5A4;
  struct _tuple1 * _T5A5;
  void * _T5A6;
  struct Cyc_Absyn_Exp * _T5A7;
  struct Cyc_Absyn_Stmt * _T5A8;
  unsigned int _T5A9;
  struct Cyc_Absyn_Stmt * _T5AA;
  unsigned int _T5AB;
  struct Cyc_Absyn_Exp * _T5AC;
  struct Cyc_Absyn_Exp * _T5AD;
  void * _T5AE;
  void * _T5AF;
  void * _T5B0;
  int * _T5B1;
  int _T5B2;
  void * _T5B3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5B4;
  void * _T5B5;
  int * _T5B6;
  int _T5B7;
  void * _T5B8;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5B9;
  void * _T5BA;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T5BB;
  union Cyc_Absyn_AggrInfo _T5BC;
  struct _union_AggrInfo_KnownAggr _T5BD;
  unsigned int _T5BE;
  void * _T5BF;
  void * _T5C0;
  union Cyc_Absyn_AggrInfo _T5C1;
  struct _union_AggrInfo_KnownAggr _T5C2;
  struct Cyc_Absyn_Aggrdecl * * _T5C3;
  int _T5C4;
  struct Cyc_Absyn_Exp * _T5C5;
  void * _T5C6;
  struct Cyc_Absyn_Exp * _T5C7;
  void * _T5C8;
  struct Cyc_Absyn_Exp * _T5C9;
  void * _T5CA;
  struct Cyc_Absyn_Exp * _T5CB;
  struct Cyc_Absyn_Exp * _T5CC;
  struct Cyc_Warn_String_Warn_Warg_struct _T5CD;
  int (* _T5CE)(struct _fat_ptr ap);
  struct _fat_ptr _T5CF;
  struct Cyc_Warn_String_Warn_Warg_struct _T5D0;
  int (* _T5D1)(struct _fat_ptr ap);
  struct _fat_ptr _T5D2;
  struct Cyc_Warn_String_Warn_Warg_struct _T5D3;
  int (* _T5D4)(struct _fat_ptr ap);
  struct _fat_ptr _T5D5;
  struct Cyc_Warn_String_Warn_Warg_struct _T5D6;
  int (* _T5D7)(struct _fat_ptr ap);
  struct _fat_ptr _T5D8;
  long _T5D9;
  struct Cyc_Warn_String_Warn_Warg_struct _T5DA;
  struct Cyc_Warn_Exp_Warn_Warg_struct _T5DB;
  int (* _T5DC)(unsigned int,struct _fat_ptr);
  void * (* _T5DD)(unsigned int,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T5DE;
  unsigned int _T5DF;
  struct _fat_ptr _T5E0;
  _T0 = e;
  _T1 = _T0->topt;
  if (_T1 != 0) { goto _TL178;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _T5E1;
    _T5E1.tag = 0;
    _T5E1.f1 = _tag_fat("exp_to_c: no type for ",sizeof(char),23U);
    _T2 = _T5E1;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5E1 = _T2;
    { struct Cyc_Warn_Exp_Warn_Warg_struct _T5E2;
      _T5E2.tag = 4;
      _T5E2.f1 = e;
      _T3 = _T5E2;
    }{ struct Cyc_Warn_Exp_Warn_Warg_struct _T5E2 = _T3;
      void * _T5E3[2];
      _T5E3[0] = &_T5E1;
      _T5E3[1] = &_T5E2;
      _T5 = Cyc_Warn_impos_loc2;
      { int (* _T5E4)(unsigned int,struct _fat_ptr) = (int (*)(unsigned int,
							       struct _fat_ptr))_T5;
	_T4 = _T5E4;
      }_T6 = e;
      _T7 = _T6->loc;
      _T8 = _tag_fat(_T5E3,sizeof(void *),2);
      _T4(_T7,_T8);
    }
  }goto _TL179;
  _TL178: _TL179: _T9 = e;
  { void * old_typ = _T9->topt;
    void * new_typ = Cyc_Toc_typ_to_c(old_typ);
    _TA = e;
    _TA->topt = new_typ;
    { long did_inserted_checks = 0;
      _TB = e;
      { void * _T5E1 = _TB->annot;
	_TC = (struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)_T5E1;
	_TD = _TC->tag;
	_TE = Cyc_Absyn_EmptyAnnot;
	if (_TD != _TE) { goto _TL17A;
	}
	goto _LL4;
	_TL17A: _TF = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T5E1;
	_T10 = _TF->tag;
	_T11 = Cyc_InsertChecks_NoCheck;
	if (_T10 != _T11) { goto _TL17C;
	}
	_LL4: did_inserted_checks = 1;
	goto _LL0;
	_TL17C: goto _LL0;
	_LL0: ;
      }_T12 = e;
      { void * _T5E1 = _T12->r;
	struct Cyc_Absyn_Stmt * _T5E2;
	struct _fat_ptr * _T5E3;
	struct Cyc_Absyn_Exp * _T5E4;
	void * * _T5E5;
	struct Cyc_Absyn_Exp * _T5E6;
	enum Cyc_Absyn_MallocKind _T5E7;
	struct Cyc_Absyn_Datatypefield * _T5E8;
	struct Cyc_Absyn_Datatypedecl * _T5E9;
	struct Cyc_Absyn_Aggrdecl * _T5EA;
	struct Cyc_List_List * _T5EB;
	enum Cyc_Absyn_Coercion _T5EC;
	struct Cyc_Absyn_VarargInfo * _T5ED;
	struct Cyc_List_List * _T5EE;
	struct Cyc_Absyn_Exp * _T5EF;
	void * _T5F0;
	enum Cyc_Absyn_Incrementor _T5F1;
	enum Cyc_Absyn_Primop _T5F2;
	long _T5F3;
	long _T5F4;
	void * _T5F5;
	_T13 = (int *)_T5E1;
	_T14 = *_T13;
	switch (_T14) {
	case 2: 
	  _T15 = e;
	  _T15->r = Cyc_Toc_zero_exp();
	  goto _LL7;
	case 0: 
	  _T16 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T5E1;
	  _T17 = _T16->f1;
	  _T18 = _T17.Null_c;
	  _T19 = _T18.tag;
	  if (_T19 != 1) { goto _TL17F;
	  }
	  _T1A = Cyc_Absyn_signed_int_exp(0,0U);
	  _T1B = Cyc_Toc_void_star_type();
	  { struct Cyc_Absyn_Exp * zero = Cyc_Absyn_set_type(_T1A,_T1B);
	    _T1C = Cyc_Absyn_bounds_one();
	    _T1D = Cyc_Tcutil_get_pointer_bounds(old_typ);
	    _T1E = _check_null(_T1D);
	    _T1F = Cyc_Tcutil_get_bounds_exp_constrain(_T1C,_T1E,1);
	    if (_T1F != 0) { goto _TL181;
	    }
	    _T20 = Cyc_Toc_is_toplevel(nv);
	    if (! _T20) { goto _TL183;
	    }
	    _T21 = e;
	    _T22 = Cyc_Toc_make_toplevel_dyn_arr(old_typ,zero,zero);
	    _T21->r = _T22->r;
	    goto _TL184;
	    _TL183: _T23 = e;
	    { struct Cyc_Absyn_Exp * _T5F6[3];
	      _T5F6[0] = zero;
	      _T5F6[1] = zero;
	      _T5F6[2] = zero;
	      _T25 = Cyc_Toc__tag_fat_e;
	      _T26 = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),3);
	      _T24 = Cyc_Toc_fncall_exp_r(_T25,_T26);
	    }_T23->r = _T24;
	    _TL184: goto _TL182;
	    _TL181: _T27 = e;
	    _T27->r = Cyc_Toc_zero_exp();
	    _TL182: goto _LL7;
	  }_TL17F: goto _LL7;
	case 1: 
	  goto _LL7;
	case 41: 
	  { struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F4 = _T5F6->f2;
	    _T5F3 = _T5F6->f3;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    long static_only = _T5F4;
	    long do_check = _T5F3;
	    _T28 = static_only;
	    if (_T28) { goto _TL187;
	    }else { goto _TL188;
	    }
	    _TL188: _T29 = do_check;
	    if (_T29) { goto _TL185;
	    }else { goto _TL187;
	    }
	    _TL187: _T2A = e;
	    _T2B = Cyc_Absyn_int_exp(0U,1,0U);
	    _T2A->r = _T2B->r;
	    goto _TL186;
	    _TL185: Cyc_Toc_exp_to_c(nv,e1);
	    _T2C = e;
	    _T2D = e1;
	    _T2E = Cyc_Absyn_int_exp(0U,1,0U);
	    _T2F = Cyc_Toc_typ_to_c(old_typ);
	    _T30 = Cyc_Toc__throw_assert_e;
	    _T31 = _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp *),0);
	    _T32 = Cyc_Toc_fncall_exp_dl(_T30,_T31);
	    _T33 = Cyc_Toc_void_star_type();
	    _T34 = Cyc_Absyn_set_type(_T32,_T33);
	    _T35 = Cyc_Toc_array_to_ptr_cast(_T2F,_T34,0U);
	    _T36 = Cyc_Absyn_conditional_exp(_T2D,_T2E,_T35,0U);
	    _T2C->r = _T36->r;
	    _TL186: goto _LL7;
	  }
	case 42: 
	  _T37 = e;
	  _T38 = Cyc_Absyn_int_exp(0U,0,0U);
	  _T37->r = _T38->r;
	  goto _LL7;
	case 40: 
	  { struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    Cyc_Toc_exp_to_c(nv,e1);
	    goto _LL7;
	  }
	case 3: 
	  { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F2 = _T5F6->f1;
	    _T5F5 = _T5F6->f2;
	  }{ enum Cyc_Absyn_Primop p = _T5F2;
	    struct Cyc_List_List * es = _T5F5;
	    _T3A = Cyc_List_map;
	    { struct Cyc_List_List * (* _T5F6)(void * (*)(struct Cyc_Absyn_Exp *),
					       struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct Cyc_Absyn_Exp *),
												     struct Cyc_List_List *))_T3A;
	      _T39 = _T5F6;
	    }_T3B = es;
	    { struct Cyc_List_List * old_types = _T39(Cyc_Toc_get_cyc_type,
						      _T3B);
	      _T3D = Cyc_List_iter_c;
	      { void (* _T5F6)(void (*)(struct Cyc_Toc_Env *,struct Cyc_Absyn_Exp *),
			       struct Cyc_Toc_Env *,struct Cyc_List_List *) = (void (*)(void (*)(struct Cyc_Toc_Env *,
												 struct Cyc_Absyn_Exp *),
											struct Cyc_Toc_Env *,
											struct Cyc_List_List *))_T3D;
		_T3C = _T5F6;
	      }_T3E = nv;
	      _T3F = es;
	      _T3C(Cyc_Toc_exp_to_c,_T3E,_T3F);
	      _T40 = p;
	      _T41 = (int)_T40;
	      switch (_T41) {
	      case Cyc_Absyn_Tagof: 
		_T42 = _check_null(es);
		_T43 = _T42->hd;
		{ struct Cyc_Absyn_Exp * arg = (struct Cyc_Absyn_Exp *)_T43;
		  _T44 = e;
		  _T45 = Cyc_Absyn_uint_type;
		  _T46 = Cyc_Absyn_const_tqual(0U);
		  _T47 = Cyc_Absyn_cstar_type(_T45,_T46);
		  _T48 = arg;
		  _T49 = Cyc_Toc_cast_it(_T47,_T48);
		  _T4A = Cyc_Absyn_deref_exp(_T49,0U);
		  _T44->r = _T4A->r;
		  goto _LL62;
		}
	      case Cyc_Absyn_Numelts: 
		_T4B = es;
		_T4C = _T4B->hd;
		{ struct Cyc_Absyn_Exp * arg = (struct Cyc_Absyn_Exp *)_T4C;
		  _T4D = old_types;
		  _T4E = _T4D->hd;
		  { void * _T5F6 = Cyc_Absyn_compress(_T4E);
		    void * _T5F7;
		    void * _T5F8;
		    void * _T5F9;
		    void * _T5FA;
		    _T4F = (int *)_T5F6;
		    _T50 = *_T4F;
		    if (_T50 != 4) { goto _TL18A;
		    }
		    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T5FB = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T5F6;
		      _T51 = _T5FB->f1;
		      _T5FA = _T51.elt_type;
		      _T52 = _T5FB->f1;
		      _T53 = _T52.ptr_atts;
		      _T5F9 = _T53.nullable;
		      _T54 = _T5FB->f1;
		      _T55 = _T54.ptr_atts;
		      _T5F8 = _T55.bounds;
		      _T56 = _T5FB->f1;
		      _T57 = _T56.ptr_atts;
		      _T5F7 = _T57.zero_term;
		    }{ void * elt_type = _T5FA;
		      void * nbl = _T5F9;
		      void * bound = _T5F8;
		      void * zt = _T5F7;
		      _T58 = Cyc_Absyn_bounds_one();
		      _T59 = bound;
		      { struct Cyc_Absyn_Exp * eopt = Cyc_Tcutil_get_bounds_exp_constrain(_T58,
											  _T59,
											  1);
			if (eopt != 0) { goto _TL18C;
			}
			_T5A = e;
			{ struct Cyc_Absyn_Exp * _T5FB[2];
			  _T5C = es;
			  _T5D = _T5C->hd;
			  _T5FB[0] = (struct Cyc_Absyn_Exp *)_T5D;
			  _T5E = Cyc_Toc_typ_to_c(elt_type);
			  _T5F = Cyc_Absyn_sizeoftype_exp(_T5E,0U);
			  _T60 = Cyc_Absyn_uint_type;
			  _T5FB[1] = Cyc_Absyn_set_type(_T5F,_T60);
			  _T61 = Cyc_Toc__get_fat_size_e;
			  _T62 = _tag_fat(_T5FB,sizeof(struct Cyc_Absyn_Exp *),
					  2);
			  _T5B = Cyc_Toc_fncall_exp_r(_T61,_T62);
			}_T5A->r = _T5B;
			goto _TL18D;
			_TL18C: _T63 = Cyc_Tcutil_force_type2bool(0,zt);
			if (! _T63) { goto _TL18E;
			}
			_T64 = es;
			_T65 = _T64->hd;
			_T66 = (struct Cyc_Absyn_Exp *)_T65;
			_T67 = Cyc_Toc_isCharStar(_T66);
			if (! _T67) { goto _TL190;
			}
			_T68 = e;
			{ struct Cyc_Absyn_Exp * _T5FB[2];
			  _T6A = es;
			  _T6B = _T6A->hd;
			  _T5FB[0] = (struct Cyc_Absyn_Exp *)_T6B;
			  _T5FB[1] = eopt;
			  _T6C = Cyc_Toc__get_zero_arr_size_char_e;
			  _T6D = _tag_fat(_T5FB,sizeof(struct Cyc_Absyn_Exp *),
					  2);
			  _T69 = Cyc_Toc_fncall_exp_r(_T6C,_T6D);
			}_T68->r = _T69;
			goto _TL191;
			_TL190: _T6E = e;
			{ struct Cyc_Absyn_Exp * _T5FB[3];
			  _T70 = old_types;
			  _T71 = _T70->hd;
			  _T72 = Cyc_Tcutil_pointer_elt_type(_T71);
			  _T73 = Cyc_Toc_typ_to_c(_T72);
			  _T74 = Cyc_Absyn_sizeoftype_exp(_T73,0U);
			  _T75 = Cyc_Absyn_uint_type;
			  _T5FB[0] = Cyc_Absyn_set_type(_T74,_T75);
			  _T76 = es;
			  _T77 = _T76->hd;
			  _T5FB[1] = (struct Cyc_Absyn_Exp *)_T77;
			  _T5FB[2] = eopt;
			  _T78 = Cyc_Toc__get_zero_arr_size_other_e;
			  _T79 = _tag_fat(_T5FB,sizeof(struct Cyc_Absyn_Exp *),
					  3);
			  _T6F = Cyc_Toc_fncall_exp_r(_T78,_T79);
			}_T6E->r = _T6F;
			_TL191: goto _TL18F;
			_TL18E: _T7A = Cyc_Tcutil_force_type2bool(0,nbl);
			if (! _T7A) { goto _TL192;
			}
			_T7B = Cyc_Evexp_c_can_eval(eopt);
			if (_T7B) { goto _TL194;
			}else { goto _TL196;
			}
			_TL196: { struct Cyc_Warn_String_Warn_Warg_struct _T5FB;
			  _T5FB.tag = 0;
			  _T5FB.f1 = _tag_fat("can't calculate numelts",sizeof(char),
					      24U);
			  _T7C = _T5FB;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T5FB = _T7C;
			  void * _T5FC[1];
			  _T5FC[0] = &_T5FB;
			  _T7D = e;
			  _T7E = _T7D->loc;
			  _T7F = _tag_fat(_T5FC,sizeof(void *),1);
			  Cyc_Warn_err2(_T7E,_T7F);
			}goto _TL195;
			_TL194: _TL195: _T80 = e;
			_T81 = arg;
			_T82 = eopt;
			_T83 = Cyc_Absyn_uint_exp(0U,0U);
			_T84 = Cyc_Absyn_uint_type;
			_T85 = Cyc_Absyn_set_type(_T83,_T84);
			_T80->r = Cyc_Toc_conditional_exp_r(_T81,_T82,_T85);
			goto _TL193;
			_TL192: _T86 = e;
			_T87 = eopt;
			_T86->r = _T87->r;
			_TL193: _TL18F: _TL18D: goto _LL81;
		      }
		    }_TL18A: { struct Cyc_Warn_String_Warn_Warg_struct _T5FB;
		      _T5FB.tag = 0;
		      _T5FB.f1 = _tag_fat("numelts primop applied to non-pointer ",
					  sizeof(char),39U);
		      _T88 = _T5FB;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T5FB = _T88;
		      { struct Cyc_Warn_Typ_Warn_Warg_struct _T5FC;
			_T5FC.tag = 2;
			_T8A = arg;
			_T8B = _T8A->topt;
			_T5FC.f1 = _check_null(_T8B);
			_T89 = _T5FC;
		      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T5FC = _T89;
			void * _T5FD[2];
			_T5FD[0] = &_T5FB;
			_T5FD[1] = &_T5FC;
			{ int (* _T5FE)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
			  _T8C = _T5FE;
			}_T8D = _tag_fat(_T5FD,sizeof(void *),2);
			_T8C(_T8D);
		      }
		    }_LL81: ;
		  }goto _LL62;
		}
	      case Cyc_Absyn_Plus: 
		_T8E = old_types;
		_T8F = _T8E->hd;
		{ void * _T5F6 = Cyc_Absyn_compress(_T8F);
		  void * _T5F7;
		  void * _T5F8;
		  void * _T5F9;
		  _T90 = (int *)_T5F6;
		  _T91 = *_T90;
		  if (_T91 != 4) { goto _TL197;
		  }
		  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T5FA = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T5F6;
		    _T92 = _T5FA->f1;
		    _T5F9 = _T92.elt_type;
		    _T93 = _T5FA->f1;
		    _T94 = _T93.ptr_atts;
		    _T5F8 = _T94.bounds;
		    _T95 = _T5FA->f1;
		    _T96 = _T95.ptr_atts;
		    _T5F7 = _T96.zero_term;
		  }{ void * elt_type = _T5F9;
		    void * b = _T5F8;
		    void * zt = _T5F7;
		    _T97 = Cyc_Toc_is_toplevel(nv);
		    if (! _T97) { goto _TL199;
		    }
		    { int (* _T5FA)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Toc_unimp;
		      _T98 = _T5FA;
		    }_T99 = _tag_fat("can't do pointer arithmetic at top-level",
				     sizeof(char),41U);
		    _T98(_T99);
		    goto _TL19A;
		    _TL199: _TL19A: _T9A = Cyc_Absyn_bounds_one();
		    _T9B = b;
		    { struct Cyc_Absyn_Exp * eopt = Cyc_Tcutil_get_bounds_exp_constrain(_T9A,
											_T9B,
											1);
		      _T9C = es;
		      _T9D = _T9C->hd;
		      { struct Cyc_Absyn_Exp * e1 = (struct Cyc_Absyn_Exp *)_T9D;
			_T9E = es;
			_T9F = _T9E->tl;
			_TA0 = _T9F->hd;
			{ struct Cyc_Absyn_Exp * e2 = (struct Cyc_Absyn_Exp *)_TA0;
			  if (eopt != 0) { goto _TL19B;
			  }
			  _TA1 = e;
			  { struct Cyc_Absyn_Exp * _T5FA[3];
			    _T5FA[0] = e1;
			    _TA3 = Cyc_Toc_typ_to_c(elt_type);
			    _TA4 = Cyc_Absyn_sizeoftype_exp(_TA3,0U);
			    _TA5 = Cyc_Absyn_uint_type;
			    _T5FA[1] = Cyc_Absyn_set_type(_TA4,_TA5);
			    _T5FA[2] = e2;
			    _TA6 = Cyc_Toc__fat_ptr_plus_e;
			    _TA7 = _tag_fat(_T5FA,sizeof(struct Cyc_Absyn_Exp *),
					    3);
			    _TA2 = Cyc_Toc_fncall_exp_r(_TA6,_TA7);
			  }_TA1->r = _TA2;
			  goto _TL19C;
			  _TL19B: _TA8 = Cyc_Tcutil_force_type2bool(0,zt);
			  if (! _TA8) { goto _TL19D;
			  }
			  _TA9 = Cyc_Toc_isCharStar(e1);
			  if (! _TA9) { goto _TL19F;
			  }
			  _TAA = e;
			  { struct Cyc_Absyn_Exp * _T5FA[3];
			    _T5FA[0] = e1;
			    _T5FA[1] = eopt;
			    _T5FA[2] = e2;
			    _TAC = Cyc_Toc__zero_arr_plus_char_e;
			    _TAD = _tag_fat(_T5FA,sizeof(struct Cyc_Absyn_Exp *),
					    3);
			    _TAB = Cyc_Toc_fncall_exp_r(_TAC,_TAD);
			  }_TAA->r = _TAB;
			  goto _TL1A0;
			  _TL19F: _TAE = e;
			  { struct Cyc_Absyn_Exp * _T5FA[3];
			    _TB0 = old_types;
			    _TB1 = _TB0->hd;
			    _TB2 = Cyc_Tcutil_pointer_elt_type(_TB1);
			    _TB3 = Cyc_Toc_typ_to_c(_TB2);
			    _TB4 = Cyc_Absyn_sizeoftype_exp(_TB3,0U);
			    _TB5 = Cyc_Absyn_uint_type;
			    _T5FA[0] = Cyc_Absyn_set_type(_TB4,_TB5);
			    _T5FA[1] = eopt;
			    _T5FA[2] = e2;
			    _TB6 = Cyc_Toc__zero_arr_plus_other_e;
			    _TB7 = _tag_fat(_T5FA,sizeof(struct Cyc_Absyn_Exp *),
					    3);
			    _TAF = Cyc_Toc_fncall_exp_r(_TB6,_TB7);
			  }_TAE->r = _TAF;
			  _TL1A0: goto _TL19E;
			  _TL19D: _TL19E: _TL19C: goto _LL86;
			}
		      }
		    }
		  }_TL197: goto _LL86;
		  _LL86: ;
		}goto _LL62;
	      case Cyc_Absyn_Minus: 
		{ void * elt_type = Cyc_Absyn_void_type;
		  _TB8 = old_types;
		  _TB9 = _TB8->hd;
		  _TBA = &elt_type;
		  _TBB = Cyc_Tcutil_is_fat_pointer_type_elt(_TB9,_TBA);
		  if (! _TBB) { goto _TL1A1;
		  }
		  _TBC = es;
		  _TBD = _TBC->hd;
		  { struct Cyc_Absyn_Exp * e1 = (struct Cyc_Absyn_Exp *)_TBD;
		    _TBE = es;
		    _TBF = _TBE->tl;
		    _TC0 = _TBF->hd;
		    { struct Cyc_Absyn_Exp * e2 = (struct Cyc_Absyn_Exp *)_TC0;
		      _TC1 = old_types;
		      _TC2 = _TC1->tl;
		      _TC3 = _TC2->hd;
		      _TC4 = Cyc_Tcutil_is_fat_pointer_type(_TC3);
		      if (! _TC4) { goto _TL1A3;
		      }
		      _TC5 = e1;
		      _TC6 = Cyc_Toc_deep_copy(e1);
		      _TC7 = Cyc_Toc_curr_sp;
		      _TC5->r = Cyc_Toc_aggrmember_exp_r(_TC6,_TC7);
		      _TC8 = e2;
		      _TC9 = Cyc_Toc_deep_copy(e2);
		      _TCA = Cyc_Toc_curr_sp;
		      _TC8->r = Cyc_Toc_aggrmember_exp_r(_TC9,_TCA);
		      _TCB = e1;
		      _TCC = e2;
		      _TCC->topt = Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,
							Cyc_Toc_mt_tq);
		      _TCB->topt = _TCC->topt;
		      _TCD = e;
		      _TCE = Cyc_Toc_deep_copy(e);
		      _TCF = Cyc_Toc_typ_to_c(elt_type);
		      _TD0 = Cyc_Absyn_sizeoftype_exp(_TCF,0U);
		      _TD1 = Cyc_Absyn_uint_type;
		      _TD2 = Cyc_Absyn_set_type(_TD0,_TD1);
		      _TD3 = Cyc_Absyn_divide_exp(_TCE,_TD2,0U);
		      _TCD->r = _TD3->r;
		      goto _TL1A4;
		      _TL1A3: _TD4 = e;
		      { struct Cyc_Absyn_Exp * _T5F6[3];
			_T5F6[0] = e1;
			_TD6 = Cyc_Toc_typ_to_c(elt_type);
			_TD7 = Cyc_Absyn_sizeoftype_exp(_TD6,0U);
			_TD8 = Cyc_Absyn_uint_type;
			_T5F6[1] = Cyc_Absyn_set_type(_TD7,_TD8);
			_TD9 = Cyc_Absyn_prim1_exp(2U,e2,0U);
			_TDA = Cyc_Absyn_sint_type;
			_T5F6[2] = Cyc_Absyn_set_type(_TD9,_TDA);
			_TDB = Cyc_Toc__fat_ptr_plus_e;
			_TDC = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),
					3);
			_TD5 = Cyc_Toc_fncall_exp_r(_TDB,_TDC);
		      }_TD4->r = _TD5;
		      _TL1A4: ;
		    }
		  }goto _TL1A2;
		  _TL1A1: _TL1A2: goto _LL62;
		}
	      case Cyc_Absyn_Eq: 
		goto _LL6E;
	      case Cyc_Absyn_Neq: 
		_LL6E: goto _LL70;
	      case Cyc_Absyn_Gt: 
		_LL70: goto _LL72;
	      case Cyc_Absyn_Gte: 
		_LL72: goto _LL74;
	      case Cyc_Absyn_Lt: 
		_LL74: goto _LL76;
	      case Cyc_Absyn_Lte: 
		_LL76: goto _LL78;
	      case Cyc_Absyn_UGt: 
		_LL78: goto _LL7A;
	      case Cyc_Absyn_UGte: 
		_LL7A: goto _LL7C;
	      case Cyc_Absyn_ULt: 
		_LL7C: goto _LL7E;
	      case Cyc_Absyn_ULte: 
		_LL7E: _TDD = es;
		_TDE = _TDD->hd;
		{ struct Cyc_Absyn_Exp * e1 = (struct Cyc_Absyn_Exp *)_TDE;
		  _TDF = es;
		  _TE0 = _TDF->tl;
		  _TE1 = _TE0->hd;
		  { struct Cyc_Absyn_Exp * e2 = (struct Cyc_Absyn_Exp *)_TE1;
		    _TE2 = old_types;
		    { void * t1 = _TE2->hd;
		      _TE3 = old_types;
		      _TE4 = _TE3->tl;
		      { void * t2 = _TE4->hd;
			void * elt_type = Cyc_Absyn_void_type;
			_TE5 = t1;
			_TE6 = &elt_type;
			_TE7 = Cyc_Tcutil_is_fat_pointer_type_elt(_TE5,_TE6);
			if (! _TE7) { goto _TL1A5;
			}
			_TE8 = Cyc_Toc_typ_to_c(elt_type);
			_TE9 = Cyc_Toc_mt_tq;
			{ void * t = Cyc_Absyn_cstar_type(_TE8,_TE9);
			  _TEA = e1;
			  _TEB = t;
			  _TEC = Cyc_Toc_deep_copy(e1);
			  _TED = Cyc_Toc_get_curr(_TEC);
			  _TEA->r = Cyc_Toc_cast_it_r(_TEB,_TED);
			  _TEE = e1;
			  _TEE->topt = t;
			}goto _TL1A6;
			_TL1A5: _TL1A6: _TEF = Cyc_Tcutil_is_fat_pointer_type(t2);
			if (! _TEF) { goto _TL1A7;
			}
			_TF0 = Cyc_Toc_typ_to_c(elt_type);
			_TF1 = Cyc_Toc_mt_tq;
			{ void * t = Cyc_Absyn_cstar_type(_TF0,_TF1);
			  _TF2 = e2;
			  _TF3 = t;
			  _TF4 = Cyc_Toc_deep_copy(e2);
			  _TF5 = Cyc_Toc_get_curr(_TF4);
			  _TF2->r = Cyc_Toc_cast_it_r(_TF3,_TF5);
			  _TF6 = e2;
			  _TF6->topt = t;
			}goto _TL1A8;
			_TL1A7: _TL1A8: goto _LL62;
		      }
		    }
		  }
		}
	      default: 
		goto _LL62;
	      }
	      _LL62: goto _LL7;
	    }
	  }
	case 5: 
	  { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F1 = _T5F6->f2;
	  }{ struct Cyc_Absyn_Exp * e2 = _T5F5;
	    enum Cyc_Absyn_Incrementor incr = _T5F1;
	    _TF7 = e2;
	    _TF8 = _TF7->topt;
	    { void * e2_cyc_typ = _check_null(_TF8);
	      void * ignore_typ = Cyc_Absyn_void_type;
	      long ignore_bool = 0;
	      int ignore_int = 0;
	      struct _fat_ptr incr_str = _tag_fat("increment",sizeof(char),
						  10U);
	      _TF9 = incr;
	      _TFA = (int)_TF9;
	      if (_TFA == 2) { goto _TL1AB;
	      }else { goto _TL1AC;
	      }
	      _TL1AC: _TFB = incr;
	      _TFC = (int)_TFB;
	      if (_TFC == 3) { goto _TL1AB;
	      }else { goto _TL1A9;
	      }
	      _TL1AB: incr_str = _tag_fat("decrement",sizeof(char),10U);
	      goto _TL1AA;
	      _TL1A9: _TL1AA: _TFD = e2;
	      _TFE = &ignore_typ;
	      _TFF = &ignore_bool;
	      _T100 = &ignore_typ;
	      _T101 = Cyc_Tcutil_is_zero_ptr_deref(_TFD,_TFE,_TFF,_T100);
	      if (! _T101) { goto _TL1AD;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T5F6;
		_T5F6.tag = 0;
		_T5F6.f1 = _tag_fat("in-place ",sizeof(char),10U);
		_T102 = _T5F6;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F6 = _T102;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T5F7;
		  _T5F7.tag = 0;
		  _T5F7.f1 = incr_str;
		  _T103 = _T5F7;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T5F7 = _T103;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T5F8;
		    _T5F8.tag = 0;
		    _T5F8.f1 = _tag_fat(" is not supported when ",sizeof(char),
					24U);
		    _T104 = _T5F8;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F8 = _T104;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T5F9;
		      _T5F9.tag = 0;
		      _T5F9.f1 = _tag_fat("dereferencing a zero-terminated pointer",
					  sizeof(char),40U);
		      _T105 = _T5F9;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F9 = _T105;
		      void * _T5FA[4];
		      _T5FA[0] = &_T5F6;
		      _T5FA[1] = &_T5F7;
		      _T5FA[2] = &_T5F8;
		      _T5FA[3] = &_T5F9;
		      _T107 = Cyc_Warn_impos_loc2;
		      { int (* _T5FB)(unsigned int,struct _fat_ptr) = (int (*)(unsigned int,
									       struct _fat_ptr))_T107;
			_T106 = _T5FB;
		      }_T108 = e;
		      _T109 = _T108->loc;
		      _T10A = _tag_fat(_T5FA,sizeof(void *),4);
		      _T106(_T109,_T10A);
		    }
		  }
		}
	      }goto _TL1AE;
	      _TL1AD: _TL1AE: _T10B = e2;
	      _T10C = &ignore_int;
	      _T10D = &ignore_typ;
	      _T10E = Cyc_Toc_is_tagged_union_project(_T10B,_T10C,_T10D,1);
	      if (! _T10E) { goto _TL1AF;
	      }
	      { struct Cyc_Absyn_Exp * one = Cyc_Absyn_signed_int_exp(1,0U);
		enum Cyc_Absyn_Primop op;
		_T10F = one;
		_T10F->topt = Cyc_Absyn_sint_type;
		_T110 = incr;
		_T111 = (int)_T110;
		switch (_T111) {
		case Cyc_Absyn_PreInc: 
		  op = 0U;
		  goto _LL8B;
		case Cyc_Absyn_PreDec: 
		  op = 2U;
		  goto _LL8B;
		default: 
		  { struct Cyc_Warn_String_Warn_Warg_struct _T5F6;
		    _T5F6.tag = 0;
		    _T5F6.f1 = _tag_fat("in-place post",sizeof(char),14U);
		    _T112 = _T5F6;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F6 = _T112;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T5F7;
		      _T5F7.tag = 0;
		      _T5F7.f1 = incr_str;
		      _T113 = _T5F7;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F7 = _T113;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T5F8;
			_T5F8.tag = 0;
			_T5F8.f1 = _tag_fat(" is not supported on @tagged union members",
					    sizeof(char),43U);
			_T114 = _T5F8;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F8 = _T114;
			void * _T5F9[3];
			_T5F9[0] = &_T5F6;
			_T5F9[1] = &_T5F7;
			_T5F9[2] = &_T5F8;
			_T116 = Cyc_Warn_impos_loc2;
			{ int (* _T5FA)(unsigned int,struct _fat_ptr) = (int (*)(unsigned int,
										 struct _fat_ptr))_T116;
			  _T115 = _T5FA;
			}_T117 = e;
			_T118 = _T117->loc;
			_T119 = _tag_fat(_T5F9,sizeof(void *),3);
			_T115(_T118,_T119);
		      }
		    }
		  }
		}
		_LL8B: _T11A = e;
		{ struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T5F6 = _cycalloc(sizeof(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct));
		  _T5F6->tag = 4;
		  _T5F6->f1 = e2;
		  { struct Cyc_Absyn_PrimopOpt * _T5F7 = _cycalloc(sizeof(struct Cyc_Absyn_PrimopOpt));
		    _T5F7->v = op;
		    _T11C = (struct Cyc_Absyn_PrimopOpt *)_T5F7;
		  }_T5F6->f2 = _T11C;
		  _T5F6->f3 = one;
		  _T11B = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T5F6;
		}_T11A->r = (void *)_T11B;
		Cyc_Toc_exp_to_c(nv,e);
		return;
	      }_TL1AF: Cyc_Toc_set_lhs(nv,1);
	      Cyc_Toc_exp_to_c(nv,e2);
	      Cyc_Toc_set_lhs(nv,0);
	      { void * elt_typ = Cyc_Absyn_void_type;
		_T11D = old_typ;
		_T11E = &elt_typ;
		_T11F = Cyc_Tcutil_is_fat_pointer_type_elt(_T11D,_T11E);
		if (! _T11F) { goto _TL1B2;
		}
		{ int change = 1;
		  _T121 = incr;
		  _T122 = (int)_T121;
		  if (_T122 == 1) { goto _TL1B6;
		  }else { goto _TL1B7;
		  }
		  _TL1B7: _T123 = incr;
		  _T124 = (int)_T123;
		  if (_T124 == 3) { goto _TL1B6;
		  }else { goto _TL1B4;
		  }
		  _TL1B6: _T120 = Cyc_Toc__fat_ptr_inplace_plus_post_e;
		  goto _TL1B5;
		  _TL1B4: _T120 = Cyc_Toc__fat_ptr_inplace_plus_e;
		  _TL1B5: { struct Cyc_Absyn_Exp * fn_e = _T120;
		    _T125 = incr;
		    _T126 = (int)_T125;
		    if (_T126 == 2) { goto _TL1BA;
		    }else { goto _TL1BB;
		    }
		    _TL1BB: _T127 = incr;
		    _T128 = (int)_T127;
		    if (_T128 == 3) { goto _TL1BA;
		    }else { goto _TL1B8;
		    }
		    _TL1BA: change = - 1;
		    goto _TL1B9;
		    _TL1B8: _TL1B9: _T129 = e;
		    { struct Cyc_Absyn_Exp * _T5F6[3];
		      _T5F6[0] = Cyc_Toc_push_address_exp(e2);
		      _T12B = Cyc_Toc_typ_to_c(elt_typ);
		      _T12C = Cyc_Absyn_sizeoftype_exp(_T12B,0U);
		      _T12D = Cyc_Absyn_uint_type;
		      _T5F6[1] = Cyc_Absyn_set_type(_T12C,_T12D);
		      _T12E = Cyc_Absyn_signed_int_exp(change,0U);
		      _T12F = Cyc_Absyn_sint_type;
		      _T5F6[2] = Cyc_Absyn_set_type(_T12E,_T12F);
		      _T130 = fn_e;
		      _T131 = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),
				       3);
		      _T12A = Cyc_Toc_fncall_exp_r(_T130,_T131);
		    }_T129->r = _T12A;
		  }
		}goto _TL1B3;
		_TL1B2: _T132 = old_typ;
		_T133 = &elt_typ;
		_T134 = Cyc_Tcutil_is_zero_pointer_type_elt(_T132,_T133);
		if (! _T134) { goto _TL1BC;
		}
		did_inserted_checks = 1;
		_T135 = incr;
		_T136 = (int)_T135;
		if (_T136 == 1) { goto _TL1BE;
		}
		{ struct _tuple1 * x = Cyc_Toc_temp_var();
		  void * et = Cyc_Toc_typ_to_c(old_typ);
		  void * t = Cyc_Absyn_cstar_type(et,Cyc_Toc_mt_tq);
		  _T137 = Cyc_Absyn_var_exp(x,0U);
		  _T138 = t;
		  { struct Cyc_Absyn_Exp * xe = Cyc_Absyn_set_type(_T137,
								   _T138);
		    _T139 = Cyc_Absyn_deref_exp(xe,0U);
		    _T13A = et;
		    { struct Cyc_Absyn_Exp * deref_x = Cyc_Absyn_set_type(_T139,
									  _T13A);
		      struct Cyc_Absyn_Exp * xexp = Cyc_Toc_push_address_exp(e2);
		      _T13B = Cyc_Absyn_deref_exp(deref_x,0U);
		      _T13C = Cyc_Absyn_sint_type;
		      { struct Cyc_Absyn_Exp * test_left = Cyc_Absyn_set_type(_T13B,
									      _T13C);
			_T13D = test_left;
			_T13E = Cyc_Absyn_int_exp(2U,0,0U);
			_T13F = Cyc_Absyn_sint_type;
			_T140 = Cyc_Absyn_set_type(_T13E,_T13F);
			{ struct Cyc_Absyn_Exp * testexp = Cyc_Absyn_neq_exp(_T13D,
									     _T140,
									     0U);
			  _T141 = Cyc_Toc_do_null_check(e);
			  if (! _T141) { goto _TL1C0;
			  }
			  _T142 = Cyc_Toc_deep_copy(deref_x);
			  _T143 = Cyc_Absyn_int_exp(2U,0,0U);
			  _T144 = Cyc_Absyn_sint_type;
			  _T145 = Cyc_Absyn_set_type(_T143,_T144);
			  _T146 = Cyc_Absyn_neq_exp(_T142,_T145,0U);
			  _T147 = testexp;
			  testexp = Cyc_Absyn_and_exp(_T146,_T147,0U);
			  goto _TL1C1;
			  _TL1C0: _TL1C1: _T148 = testexp;
			  _T149 = Cyc_Toc_deep_copy(deref_x);
			  _T14A = Cyc_Absyn_increment_exp(_T149,0U,0U);
			  _T14B = Cyc_Absyn_exp_stmt(_T14A,0U);
			  _T14C = Cyc_Toc__throw_arraybounds_e;
			  _T14D = _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp *),
					   0);
			  _T14E = Cyc_Toc_fncall_exp_dl(_T14C,_T14D);
			  _T14F = Cyc_Toc_void_star_type();
			  _T150 = Cyc_Absyn_set_type(_T14E,_T14F);
			  _T151 = Cyc_Absyn_exp_stmt(_T150,0U);
			  { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_ifthenelse_stmt(_T148,
										  _T14B,
										  _T151,
										  0U);
			    _T152 = s;
			    _T153 = Cyc_Toc_deep_copy(deref_x);
			    _T154 = Cyc_Absyn_exp_stmt(_T153,0U);
			    s = Cyc_Absyn_seq_stmt(_T152,_T154,0U);
			    _T155 = e;
			    _T156 = Cyc_Absyn_declare_stmt(x,t,xexp,s,0U);
			    _T157 = Cyc_Absyn_stmt_exp(_T156,0U);
			    _T155->r = _T157->r;
			  }
			}
		      }
		    }
		  }
		}goto _TL1BF;
		_TL1BE: _T158 = Cyc_Toc_isCharStar(e2);
		if (! _T158) { goto _TL1C2;
		}
		_T159 = e;
		{ struct Cyc_Absyn_Exp * _T5F6[2];
		  _T5F6[0] = Cyc_Toc_push_address_exp(e2);
		  _T15B = Cyc_Absyn_signed_int_exp(1,0U);
		  _T15C = Cyc_Absyn_sint_type;
		  _T5F6[1] = Cyc_Absyn_set_type(_T15B,_T15C);
		  _T15D = Cyc_Toc__zero_arr_inplace_plus_post_char_e;
		  _T15E = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),2);
		  _T15A = Cyc_Toc_fncall_exp_r(_T15D,_T15E);
		}_T159->r = _T15A;
		goto _TL1C3;
		_TL1C2: _T15F = e;
		_T160 = Cyc_Toc_typ_to_c(e2_cyc_typ);
		{ struct Cyc_Absyn_Exp * _T5F6[3];
		  _T162 = Cyc_Toc_typ_to_c(e2_cyc_typ);
		  _T163 = Cyc_Tcutil_pointer_elt_type(_T162);
		  _T164 = Cyc_Absyn_sizeoftype_exp(_T163,0U);
		  _T165 = Cyc_Absyn_uint_type;
		  _T5F6[0] = Cyc_Absyn_set_type(_T164,_T165);
		  _T5F6[1] = Cyc_Toc_push_address_exp(e2);
		  _T166 = Cyc_Absyn_signed_int_exp(1,0U);
		  _T167 = Cyc_Absyn_sint_type;
		  _T5F6[2] = Cyc_Absyn_set_type(_T166,_T167);
		  _T168 = Cyc_Toc__zero_arr_inplace_plus_post_other_e;
		  _T169 = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),3);
		  _T161 = Cyc_Toc_fncall_exp_dl(_T168,_T169);
		}_T15F->r = Cyc_Toc_cast_it_r(_T160,_T161);
		_TL1C3: _TL1BF: goto _TL1BD;
		_TL1BC: if (elt_typ != Cyc_Absyn_void_type) { goto _TL1C4;
		}
		_T16A = Cyc_Absyn_is_lvalue(e2);
		if (_T16A) { goto _TL1C4;
		}else { goto _TL1C6;
		}
		_TL1C6: { void (* _T5F6)(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,
					 struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
								    enum Cyc_Absyn_Incrementor *),
					 enum Cyc_Absyn_Incrementor *) = (void (*)(struct Cyc_Absyn_Exp *,
										   struct Cyc_List_List *,
										   struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
													      enum Cyc_Absyn_Incrementor *),
										   enum Cyc_Absyn_Incrementor *))Cyc_Toc_lvalue_assign;
		  _T16B = _T5F6;
		}_T16C = e2;
		{ enum Cyc_Absyn_Incrementor * _T5F6 = _cycalloc_atomic(sizeof(enum Cyc_Absyn_Incrementor));
		  *_T5F6 = incr;
		  _T16D = (enum Cyc_Absyn_Incrementor *)_T5F6;
		}_T16B(_T16C,0,Cyc_Toc_incr_lvalue,_T16D);
		_T16E = e;
		_T16F = e2;
		*_T16E = *_T16F;
		goto _TL1C5;
		_TL1C4: _TL1C5: _TL1BD: _TL1B3: goto _LL7;
	      }
	    }
	  }
	case 4: 
	  { struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	    _T5EF = _T5F6->f3;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct Cyc_Absyn_PrimopOpt * popt = _T5F0;
	    struct Cyc_Absyn_Exp * e2 = _T5EF;
	    _T170 = e1;
	    _T171 = _T170->topt;
	    { void * e1_old_typ = _check_null(_T171);
	      _T172 = e2;
	      _T173 = _T172->topt;
	      { void * e2_old_typ = _check_null(_T173);
		int f_tag = 0;
		void * tagged_member_struct_type = Cyc_Absyn_void_type;
		_T174 = e1;
		_T175 = &f_tag;
		_T176 = &tagged_member_struct_type;
		_T177 = Cyc_Toc_is_tagged_union_project(_T174,_T175,_T176,
							1);
		if (! _T177) { goto _TL1C7;
		}
		Cyc_Toc_set_lhs(nv,1);
		Cyc_Toc_exp_to_c(nv,e1);
		Cyc_Toc_set_lhs(nv,0);
		Cyc_Toc_exp_to_c(nv,e2);
		_T178 = e;
		_T178->r = Cyc_Toc_tagged_union_assignop(e1,e1_old_typ,popt,
							 e2,e2_old_typ,f_tag,
							 tagged_member_struct_type);
		goto _LL7;
		_TL1C7: { void * ptr_type = Cyc_Absyn_void_type;
		  void * elt_type = Cyc_Absyn_void_type;
		  long is_fat = 0;
		  _T179 = e1;
		  _T17A = &ptr_type;
		  _T17B = &is_fat;
		  _T17C = &elt_type;
		  _T17D = Cyc_Tcutil_is_zero_ptr_deref(_T179,_T17A,_T17B,
						       _T17C);
		  if (! _T17D) { goto _TL1C9;
		  }
		  Cyc_Toc_zero_ptr_assign_to_c(nv,e,e1,popt,e2,ptr_type,is_fat,
					       elt_type);
		  return;
		  _TL1C9: { long e1_poly = Cyc_Toc_is_poly_project(e1);
		    Cyc_Toc_set_lhs(nv,1);
		    Cyc_Toc_exp_to_c(nv,e1);
		    Cyc_Toc_set_lhs(nv,0);
		    Cyc_Toc_exp_to_c(nv,e2);
		    { long done = 0;
		      if (popt == 0) { goto _TL1CB;
		      }
		      { void * elt_typ = Cyc_Absyn_void_type;
			_T17E = old_typ;
			_T17F = &elt_typ;
			_T180 = Cyc_Tcutil_is_fat_pointer_type_elt(_T17E,
								   _T17F);
			if (! _T180) { goto _TL1CD;
			}
			{ struct Cyc_Absyn_Exp * change;
			  _T181 = popt;
			  { enum Cyc_Absyn_Primop _T5F6 = _T181->v;
			    _T182 = (int)_T5F6;
			    switch (_T182) {
			    case Cyc_Absyn_Plus: 
			      change = e2;
			      goto _LL92;
			    case Cyc_Absyn_Minus: 
			      _T183 = Cyc_Absyn_prim1_exp(2U,e2,0U);
			      _T184 = Cyc_Absyn_sint_type;
			      change = Cyc_Absyn_set_type(_T183,_T184);
			      goto _LL92;
			    default: 
			      { struct Cyc_Warn_String_Warn_Warg_struct _T5F7;
				_T5F7.tag = 0;
				_T5F7.f1 = _tag_fat("bad t ? pointer arithmetic",
						    sizeof(char),27U);
				_T185 = _T5F7;
			      }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F7 = _T185;
				void * _T5F8[1];
				_T5F8[0] = &_T5F7;
				{ int (* _T5F9)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
				  _T186 = _T5F9;
				}_T187 = _tag_fat(_T5F8,sizeof(void *),1);
				_T186(_T187);
			      }
			    }
			    _LL92: ;
			  }done = 1;
			  { struct Cyc_Absyn_Exp * fn_e = Cyc_Toc__fat_ptr_inplace_plus_e;
			    _T188 = e;
			    { struct Cyc_Absyn_Exp * _T5F6[3];
			      _T5F6[0] = Cyc_Toc_push_address_exp(e1);
			      _T18A = Cyc_Toc_typ_to_c(elt_typ);
			      _T18B = Cyc_Absyn_sizeoftype_exp(_T18A,0U);
			      _T18C = Cyc_Absyn_uint_type;
			      _T5F6[1] = Cyc_Absyn_set_type(_T18B,_T18C);
			      _T5F6[2] = change;
			      _T18D = fn_e;
			      _T18E = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),
					       3);
			      _T189 = Cyc_Toc_fncall_exp_r(_T18D,_T18E);
			    }_T188->r = _T189;
			  }
			}goto _TL1CE;
			_TL1CD: _T18F = old_typ;
			_T190 = &elt_typ;
			_T191 = Cyc_Tcutil_is_zero_pointer_type_elt(_T18F,
								    _T190);
			if (! _T191) { goto _TL1D0;
			}
			_T192 = popt;
			{ enum Cyc_Absyn_Primop _T5F6 = _T192->v;
			  if (_T5F6 != Cyc_Absyn_Plus) { goto _TL1D2;
			  }
			  done = 1;
			  _T193 = Cyc_Toc_isCharStar(e1);
			  if (! _T193) { goto _TL1D4;
			  }
			  _T194 = e;
			  { struct Cyc_Absyn_Exp * _T5F7[2];
			    _T5F7[0] = e1;
			    _T5F7[1] = e2;
			    _T196 = Cyc_Toc__zero_arr_inplace_plus_char_e;
			    _T197 = _tag_fat(_T5F7,sizeof(struct Cyc_Absyn_Exp *),
					     2);
			    _T195 = Cyc_Toc_fncall_exp_r(_T196,_T197);
			  }_T194->r = _T195;
			  goto _TL1D5;
			  _TL1D4: _T198 = e;
			  _T199 = Cyc_Toc_typ_to_c(e1_old_typ);
			  { struct Cyc_Absyn_Exp * _T5F7[3];
			    _T19B = Cyc_Toc_typ_to_c(e1_old_typ);
			    _T19C = Cyc_Tcutil_pointer_elt_type(_T19B);
			    _T19D = Cyc_Absyn_sizeoftype_exp(_T19C,0U);
			    _T19E = Cyc_Absyn_uint_type;
			    _T5F7[0] = Cyc_Absyn_set_type(_T19D,_T19E);
			    _T5F7[1] = e1;
			    _T5F7[2] = e2;
			    _T19F = Cyc_Toc__zero_arr_inplace_plus_other_e;
			    _T1A0 = _tag_fat(_T5F7,sizeof(struct Cyc_Absyn_Exp *),
					     3);
			    _T19A = Cyc_Toc_fncall_exp_dl(_T19F,_T1A0);
			  }_T198->r = Cyc_Toc_cast_it_r(_T199,_T19A);
			  _TL1D5: goto _LL99;
			  _TL1D2: { struct Cyc_Warn_String_Warn_Warg_struct _T5F7;
			    _T5F7.tag = 0;
			    _T5F7.f1 = _tag_fat("bad zero-terminated pointer arithmetic",
						sizeof(char),39U);
			    _T1A1 = _T5F7;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F7 = _T1A1;
			    void * _T5F8[1];
			    _T5F8[0] = &_T5F7;
			    { int (* _T5F9)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
			      _T1A2 = _T5F9;
			    }_T1A3 = _tag_fat(_T5F8,sizeof(void *),1);
			    _T1A2(_T1A3);
			  }_LL99: ;
			}goto _TL1D1;
			_TL1D0: _TL1D1: _TL1CE: ;
		      }goto _TL1CC;
		      _TL1CB: _TL1CC: _T1A4 = done;
		      if (_T1A4) { goto _TL1D6;
		      }else { goto _TL1D8;
		      }
		      _TL1D8: _T1A5 = e1_poly;
		      if (! _T1A5) { goto _TL1D9;
		      }
		      _T1A6 = e2;
		      _T1A7 = Cyc_Toc_void_star_type();
		      _T1A8 = Cyc_Toc_deep_copy(e2);
		      _T1A6->r = Cyc_Toc_cast_it_r(_T1A7,_T1A8);
		      _T1A9 = e2;
		      _T1A9->topt = Cyc_Toc_void_star_type();
		      goto _TL1DA;
		      _TL1D9: _TL1DA: _T1AA = Cyc_Absyn_is_lvalue(e1);
		      if (_T1AA) { goto _TL1DB;
		      }else { goto _TL1DD;
		      }
		      _TL1DD: { void (* _T5F6)(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,
					       struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
									  struct _tuple36 *),
					       struct _tuple36 *) = (void (*)(struct Cyc_Absyn_Exp *,
									      struct Cyc_List_List *,
									      struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
													 struct _tuple36 *),
									      struct _tuple36 *))Cyc_Toc_lvalue_assign;
			_T1AB = _T5F6;
		      }_T1AC = e1;
		      { struct _tuple36 * _T5F6 = _cycalloc(sizeof(struct _tuple36));
			_T5F6->f0 = popt;
			_T5F6->f1 = e2;
			_T1AD = (struct _tuple36 *)_T5F6;
		      }_T1AB(_T1AC,0,Cyc_Toc_assignop_lvalue,_T1AD);
		      _T1AE = e;
		      _T1AF = e1;
		      *_T1AE = *_T1AF;
		      goto _TL1DC;
		      _TL1DB: _TL1DC: goto _TL1D7;
		      _TL1D6: _TL1D7: goto _LL7;
		    }
		  }
		}
	      }
	    }
	  }
	case 6: 
	  { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	    _T5EF = _T5F6->f3;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct Cyc_Absyn_Exp * e2 = _T5F0;
	    struct Cyc_Absyn_Exp * e3 = _T5EF;
	    Cyc_Toc_exp_to_c(nv,e1);
	    Cyc_Toc_exp_to_c(nv,e2);
	    Cyc_Toc_exp_to_c(nv,e3);
	    goto _LL7;
	  }
	case 7: 
	  { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct Cyc_Absyn_Exp * e2 = _T5F0;
	    _T5F5 = e1;
	    _T5F0 = e2;
	    goto _LL21;
	  }
	case 8: 
	  { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	  }_LL21: { struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct Cyc_Absyn_Exp * e2 = _T5F0;
	    _T5F5 = e1;
	    _T5F0 = e2;
	    goto _LL23;
	  }
	case 9: 
	  { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	  }_LL23: { struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct Cyc_Absyn_Exp * e2 = _T5F0;
	    Cyc_Toc_exp_to_c(nv,e1);
	    Cyc_Toc_exp_to_c(nv,e2);
	    goto _LL7;
	  }
	case 10: 
	  _T1B0 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T5E1;
	  _T1B1 = _T1B0->f3;
	  if (_T1B1 != 0) { goto _TL1DE;
	  }
	  { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct Cyc_List_List * es = _T5F0;
	    _T1B2 = e1;
	    _T1B3 = _T1B2->topt;
	    { void * e1_typ = _check_null(_T1B3);
	      Cyc_Toc_exp_to_c(nv,e1);
	      did_inserted_checks = 1;
	      _T1B4 = Cyc_Toc_do_null_check(e);
	      if (! _T1B4) { goto _TL1E0;
	      }
	      _T1B5 = e1;
	      { struct Cyc_Absyn_Exp * _T5F6[1];
		_T5F6[0] = Cyc_Toc_deep_copy(e1);
		_T1B7 = Cyc_Toc__check_null_e;
		_T1B8 = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),1);
		_T1B6 = Cyc_Toc_fncall_exp_dl(_T1B7,_T1B8);
	      }_T1B5->r = _T1B6->r;
	      goto _TL1E1;
	      _TL1E0: _TL1E1: _T1BA = Cyc_List_iter_c;
	      { void (* _T5F6)(void (*)(struct Cyc_Toc_Env *,struct Cyc_Absyn_Exp *),
			       struct Cyc_Toc_Env *,struct Cyc_List_List *) = (void (*)(void (*)(struct Cyc_Toc_Env *,
												 struct Cyc_Absyn_Exp *),
											struct Cyc_Toc_Env *,
											struct Cyc_List_List *))_T1BA;
		_T1B9 = _T5F6;
	      }_T1BB = nv;
	      _T1BC = es;
	      _T1B9(Cyc_Toc_exp_to_c,_T1BB,_T1BC);
	      goto _LL7;
	    }
	  }_TL1DE: { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	    _T1BD = _T5F6->f3;
	    { struct Cyc_Absyn_VarargCallInfo _T5F7 = *_T1BD;
	      _T5F4 = _T5F7.num_varargs;
	      _T5EE = _T5F7.injectors;
	      _T5ED = _T5F7.vai;
	    }
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct Cyc_List_List * es = _T5F0;
	    int num_varargs = _T5F4;
	    struct Cyc_List_List * injectors = _T5EE;
	    struct Cyc_Absyn_VarargInfo * vai = _T5ED;
	    struct _RegionHandle _T5F6 = _new_region(0U,"r");
	    struct _RegionHandle * r = &_T5F6;
	    _push_region(r);
	    { struct _tuple33 _T5F7 = Cyc_Toc_temp_var_and_exp();
	      struct Cyc_Absyn_Exp * _T5F8;
	      struct _tuple1 * _T5F9;
	      _T5F9 = _T5F7.f0;
	      _T5F8 = _T5F7.f1;
	      { struct _tuple1 * argv = _T5F9;
		struct Cyc_Absyn_Exp * argvexp = _T5F8;
		_T1BE = Cyc_Absyn_signed_int_exp(num_varargs,0U);
		_T1BF = Cyc_Absyn_sint_type;
		{ struct Cyc_Absyn_Exp * num_varargs_exp = Cyc_Absyn_set_type(_T1BE,
									      _T1BF);
		  _T1C0 = vai;
		  _T1C1 = _T1C0->type;
		  { void * cva_type = Cyc_Toc_typ_to_c(_T1C1);
		    void * arr_type = Cyc_Absyn_array_type(cva_type,Cyc_Toc_mt_tq,
							   num_varargs_exp,
							   Cyc_Absyn_false_type,
							   0U);
		    int num_args = Cyc_List_length(es);
		    int num_normargs = num_args - num_varargs;
		    struct Cyc_List_List * new_args = 0;
		    { int i = 0;
		      _TL1E5: if (i < num_normargs) { goto _TL1E3;
		      }else { goto _TL1E4;
		      }
		      _TL1E3: _T1C2 = nv;
		      _T1C3 = _check_null(es);
		      _T1C4 = _T1C3->hd;
		      _T1C5 = (struct Cyc_Absyn_Exp *)_T1C4;
		      Cyc_Toc_exp_to_c(_T1C2,_T1C5);
		      { struct Cyc_List_List * _T5FA = _cycalloc(sizeof(struct Cyc_List_List));
			_T1C7 = es;
			_T1C8 = _T1C7->hd;
			_T5FA->hd = (struct Cyc_Absyn_Exp *)_T1C8;
			_T5FA->tl = new_args;
			_T1C6 = (struct Cyc_List_List *)_T5FA;
		      }new_args = _T1C6;
		      i = i + 1;
		      _T1C9 = es;
		      es = _T1C9->tl;
		      goto _TL1E5;
		      _TL1E4: ;
		    }{ struct Cyc_List_List * _T5FA = _cycalloc(sizeof(struct Cyc_List_List));
		      { struct Cyc_Absyn_Exp * _T5FB[3];
			if (num_varargs != 0) { goto _TL1E6;
			}
			_T1CC = Cyc_Absyn_uint_exp(0U,0U);
			goto _TL1E7;
			_TL1E6: _T1CC = argvexp;
			_TL1E7: _T1CD = Cyc_Absyn_uint_type;
			_T5FB[0] = Cyc_Absyn_set_type(_T1CC,_T1CD);
			_T1CE = Cyc_Absyn_sizeoftype_exp(cva_type,0U);
			_T1CF = Cyc_Absyn_uint_type;
			_T1D0 = Cyc_Absyn_set_type(_T1CE,_T1CF);
			_T1D1 = Cyc_Absyn_uint_type;
			_T5FB[1] = Cyc_Absyn_set_type(_T1D0,_T1D1);
			_T5FB[2] = num_varargs_exp;
			_T1D2 = Cyc_Toc__tag_fat_e;
			_T1D3 = _tag_fat(_T5FB,sizeof(struct Cyc_Absyn_Exp *),
					 3);
			_T1CB = Cyc_Toc_fncall_exp_dl(_T1D2,_T1D3);
		      }_T1D4 = Cyc_Toc_fat_ptr_type();
		      _T5FA->hd = Cyc_Absyn_set_type(_T1CB,_T1D4);
		      _T5FA->tl = new_args;
		      _T1CA = (struct Cyc_List_List *)_T5FA;
		    }new_args = _T1CA;
		    new_args = Cyc_List_imp_rev(new_args);
		    _T1D5 = e1;
		    _T1D6 = _T1D5->topt;
		    { void * e1_typ = _check_null(_T1D6);
		      Cyc_Toc_exp_to_c(nv,e1);
		      did_inserted_checks = 1;
		      _T1D7 = Cyc_Toc_do_null_check(e);
		      if (! _T1D7) { goto _TL1E8;
		      }
		      _T1D8 = e1;
		      { struct Cyc_Absyn_Exp * _T5FA[1];
			_T5FA[0] = Cyc_Toc_deep_copy(e1);
			_T1DA = Cyc_Toc__check_null_e;
			_T1DB = _tag_fat(_T5FA,sizeof(struct Cyc_Absyn_Exp *),
					 1);
			_T1D9 = Cyc_Toc_fncall_exp_dl(_T1DA,_T1DB);
		      }_T1D8->r = _T1D9->r;
		      goto _TL1E9;
		      _TL1E8: _TL1E9: if (num_varargs != 0) { goto _TL1EA;
		      }
		      _T1DC = e;
		      _T1DD = Cyc_Absyn_fncall_exp(e1,new_args,0U);
		      _T1DC->r = _T1DD->r;
		      _npop_handler(0);
		      goto _LL7;
		      _TL1EA: _T1DE = Cyc_Absyn_fncall_exp(e1,new_args,0U);
		      _T1DF = e;
		      _T1E0 = _T1DF->topt;
		      _T1E1 = Cyc_Toc_typ_to_c(_T1E0);
		      _T1E2 = Cyc_Absyn_set_type(_T1DE,_T1E1);
		      { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_exp_stmt(_T1E2,
								       0U);
			_T1E3 = vai;
			_T1E4 = _T1E3->inject;
			if (! _T1E4) { goto _TL1EC;
			}
			{ struct Cyc_Absyn_Datatypedecl * tud;
			  _T1E5 = vai;
			  _T1E6 = _T1E5->type;
			  _T1E7 = Cyc_Tcutil_pointer_elt_type(_T1E6);
			  { void * _T5FA = Cyc_Absyn_compress(_T1E7);
			    struct Cyc_Absyn_Datatypedecl * _T5FB;
			    _T1E8 = (int *)_T5FA;
			    _T1E9 = *_T1E8;
			    if (_T1E9 != 0) { goto _TL1EE;
			    }
			    _T1EA = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5FA;
			    _T1EB = _T1EA->f1;
			    _T1EC = (int *)_T1EB;
			    _T1ED = *_T1EC;
			    if (_T1ED != 22) { goto _TL1F0;
			    }
			    _T1EE = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5FA;
			    _T1EF = _T1EE->f1;
			    _T1F0 = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_T1EF;
			    _T1F1 = _T1F0->f1;
			    _T1F2 = _T1F1.KnownDatatype;
			    _T1F3 = _T1F2.tag;
			    if (_T1F3 != 2) { goto _TL1F2;
			    }
			    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5FC = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5FA;
			      _T1F4 = _T5FC->f1;
			      { struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T5FD = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_T1F4;
				_T1F5 = _T5FD->f1;
				_T1F6 = _T1F5.KnownDatatype;
				_T1F7 = _T1F6.val;
				{ struct Cyc_Absyn_Datatypedecl * _T5FE = *_T1F7;
				  _T5FB = _T5FE;
				}
			      }
			    }{ struct Cyc_Absyn_Datatypedecl * x = _T5FB;
			      tud = x;
			      goto _LLA1;
			    }_TL1F2: goto _LLA4;
			    _TL1F0: goto _LLA4;
			    _TL1EE: _LLA4: { struct Cyc_Warn_String_Warn_Warg_struct _T5FC;
			      _T5FC.tag = 0;
			      _T5FC.f1 = _tag_fat("unknown datatype in vararg with inject",
						  sizeof(char),39U);
			      _T1F8 = _T5FC;
			    }{ struct Cyc_Warn_String_Warn_Warg_struct _T5FC = _T1F8;
			      void * _T5FD[1];
			      _T5FD[0] = &_T5FC;
			      { int (* _T5FE)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
				_T1F9 = _T5FE;
			      }_T1FA = _tag_fat(_T5FD,sizeof(void *),1);
			      _T1F9(_T1FA);
			    }_LLA1: ;
			  }_T1FC = num_varargs;
			  { unsigned int _T5FA = (unsigned int)_T1FC;
			    _T1FE = r;
			    _T1FF = _check_times(_T5FA,sizeof(struct _tuple37));
			    { struct _tuple37 * _T5FB = _region_malloc(_T1FE,
								       0U,
								       _T1FF);
			      { unsigned int _T5FC = _T5FA;
				unsigned int i;
				i = 0;
				_TL1F7: if (i < _T5FC) { goto _TL1F5;
				}else { goto _TL1F6;
				}
				_TL1F5: _T200 = i;
				(_T5FB[_T200]).f0 = Cyc_Toc_temp_var();
				_T201 = i;
				(_T5FB[_T201]).f1 = 0;
				i = i + 1;
				goto _TL1F7;
				_TL1F6: ;
			      }_T1FD = (struct _tuple37 *)_T5FB;
			    }_T1FB = _tag_fat(_T1FD,sizeof(struct _tuple37),
					      _T5FA);
			  }{ struct _fat_ptr vs = _T1FB;
			    struct Cyc_List_List * is2 = Cyc_List_rev(injectors);
			    _T202 = Cyc_List_length(es);
			    { int i = _T202 - 1;
			      { struct Cyc_List_List * es2 = es;
				_TL1FB: if (es2 != 0) { goto _TL1F9;
				}else { goto _TL1FA;
				}
				_TL1F9: _T203 = es2;
				_T204 = _T203->hd;
				{ struct Cyc_Absyn_Exp * arg = (struct Cyc_Absyn_Exp *)_T204;
				  _T205 = arg;
				  _T206 = _T205->topt;
				  { void * arg_type = _check_null(_T206);
				    _T207 = vs;
				    _T208 = i;
				    _T209 = _check_fat_subscript(_T207,sizeof(struct _tuple37),
								 _T208);
				    _T20A = (struct _tuple37 *)_T209;
				    _T20B = *_T20A;
				    { struct _tuple1 * var = _T20B.f0;
				      _T20C = _check_null(is2);
				      _T20D = _T20C->hd;
				      { struct Cyc_Absyn_Datatypefield * _T5FA = (struct Cyc_Absyn_Datatypefield *)_T20D;
					struct Cyc_List_List * _T5FB;
					struct _tuple1 * _T5FC;
					{ struct Cyc_Absyn_Datatypefield _T5FD = *_T5FA;
					  _T5FC = _T5FD.name;
					  _T5FB = _T5FD.typs;
					}{ struct _tuple1 * qv = _T5FC;
					  struct Cyc_List_List * tqts = _T5FB;
					  _T20E = qv;
					  _T20F = tud;
					  _T210 = _T20F->name;
					  { struct _tuple1 * tdn = Cyc_Toc_collapse_qvars(_T20E,
											  _T210);
					    struct Cyc_Absyn_AppType_Absyn_Type_struct * t;
					    t = _cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));
					    _T211 = t;
					    _T211->tag = 0;
					    _T212 = t;
					    { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T5FD = _cycalloc(sizeof(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct));
					      _T5FD->tag = 24;
					      _T5FD->f1 = Cyc_Absyn_UnknownAggr(0U,
										tdn,
										0);
					      _T213 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T5FD;
					    }_T212->f1 = (void *)_T213;
					    _T214 = t;
					    _T214->f2 = 0;
					    _T215 = vs;
					    _T216 = _T215.curr;
					    _T217 = (struct _tuple37 *)_T216;
					    _T218 = i;
					    _T219 = t;
					    (_T217[_T218]).f1 = (void *)_T219;
					  }
					}
				      }
				    }
				  }
				}_T21A = es2;
				es2 = _T21A->tl;
				_T21B = is2;
				is2 = _T21B->tl;
				i = i + -1;
				goto _TL1FB;
				_TL1FA: ;
			      }{ struct Cyc_List_List * array_args = 0;
				{ int i = num_varargs - 1;
				  _TL1FF: if (i >= 0) { goto _TL1FD;
				  }else { goto _TL1FE;
				  }
				  _TL1FD: _T21C = vs;
				  _T21D = _T21C.curr;
				  _T21E = (struct _tuple37 *)_T21D;
				  _T21F = i;
				  { struct _tuple37 _T5FA = _T21E[_T21F];
				    void * _T5FB;
				    struct _tuple1 * _T5FC;
				    _T5FC = _T5FA.f0;
				    _T5FB = _T5FA.f1;
				    { struct _tuple1 * v = _T5FC;
				      void * t = _T5FB;
				      _T220 = Cyc_Absyn_var_exp(v,0U);
				      _T221 = _check_null(t);
				      { struct Cyc_Absyn_Exp * e1 = Cyc_Absyn_set_type(_T220,
										       _T221);
					_T222 = Cyc_Absyn_address_exp(e1,
								      0U);
					_T223 = Cyc_Absyn_cstar_type(t,Cyc_Toc_mt_tq);
					{ struct Cyc_Absyn_Exp * e2 = Cyc_Absyn_set_type(_T222,
											 _T223);
					  { struct Cyc_List_List * _T5FD = _cycalloc(sizeof(struct Cyc_List_List));
					    _T5FD->hd = e2;
					    _T5FD->tl = array_args;
					    _T224 = (struct Cyc_List_List *)_T5FD;
					  }array_args = _T224;
					}
				      }
				    }
				  }i = i + -1;
				  goto _TL1FF;
				  _TL1FE: ;
				}_T225 = argv;
				_T226 = arr_type;
				_T227 = Cyc_Absyn_array_exp(array_args,0U);
				_T228 = arr_type;
				_T229 = Cyc_Absyn_set_type(_T227,_T228);
				_T22A = s;
				s = Cyc_Absyn_declare_stmt(_T225,_T226,_T229,
							   _T22A,0U);
				es = Cyc_List_imp_rev(es);
				injectors = Cyc_List_imp_rev(injectors);
				_T22B = Cyc_List_length(es);
				{ int i = _T22B - 1;
				  _TL203: if (es != 0) { goto _TL201;
				  }else { goto _TL202;
				  }
				  _TL201: _T22C = es;
				  _T22D = _T22C->hd;
				  { struct Cyc_Absyn_Exp * arg = (struct Cyc_Absyn_Exp *)_T22D;
				    _T22E = arg;
				    _T22F = _T22E->topt;
				    { void * arg_type = _check_null(_T22F);
				      _T230 = vs;
				      _T231 = i;
				      _T232 = _check_fat_subscript(_T230,
								   sizeof(struct _tuple37),
								   _T231);
				      _T233 = (struct _tuple37 *)_T232;
				      _T234 = *_T233;
				      { struct _tuple1 * var = _T234.f0;
					_T235 = vs;
					_T236 = _T235.curr;
					_T237 = (struct _tuple37 *)_T236;
					_T238 = i;
					_T239 = _T237[_T238];
					_T23A = _T239.f1;
					{ void * field_typ = _check_null(_T23A);
					  _T23B = _check_null(injectors);
					  _T23C = _T23B->hd;
					  { struct Cyc_Absyn_Datatypefield * _T5FA = (struct Cyc_Absyn_Datatypefield *)_T23C;
					    struct Cyc_List_List * _T5FB;
					    struct _tuple1 * _T5FC;
					    { struct Cyc_Absyn_Datatypefield _T5FD = *_T5FA;
					      _T5FC = _T5FD.name;
					      _T5FB = _T5FD.typs;
					    }{ struct _tuple1 * qv = _T5FC;
					      struct Cyc_List_List * tqts = _T5FB;
					      Cyc_Toc_exp_to_c(nv,arg);
					      _T23D = Cyc_Toc_is_void_star_or_boxed_tvar(field_typ);
					      if (! _T23D) { goto _TL204;
					      }
					      arg = Cyc_Toc_cast_it(field_typ,
								    arg);
					      goto _TL205;
					      _TL204: _TL205: _T23E = qv;
					      _T23F = tud;
					      _T240 = _T23F->name;
					      { struct _tuple1 * tdn = Cyc_Toc_collapse_qvars(_T23E,
											      _T240);
						{ struct _tuple22 * _T5FD[2];
						  _T242 = Cyc_Toc_tag_sp;
						  _T243 = Cyc_Toc_datatype_tag(tud,
									       qv);
						  _T5FD[0] = Cyc_Toc_make_field(_T242,
										_T243);
						  _T244 = Cyc_Absyn_fieldname(1);
						  _T245 = arg;
						  _T5FD[1] = Cyc_Toc_make_field(_T244,
										_T245);
						  _T246 = _tag_fat(_T5FD,
								   sizeof(struct _tuple22 *),
								   2);
						  _T241 = Cyc_List_list(_T246);
						}{ struct Cyc_List_List * dles = _T241;
						  _T247 = var;
						  _T248 = Cyc_Absyn_strctq(tdn);
						  { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T5FD = _cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));
						    _T5FD->tag = 28;
						    _T5FD->f1 = tdn;
						    _T5FD->f2 = 0;
						    _T5FD->f3 = dles;
						    _T5FD->f4 = 0;
						    _T249 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T5FD;
						  }_T24A = (void *)_T249;
						  _T24B = Cyc_Absyn_new_exp(_T24A,
									    0U);
						  _T24C = field_typ;
						  _T24D = Cyc_Absyn_set_type(_T24B,
									     _T24C);
						  _T24E = s;
						  s = Cyc_Absyn_declare_stmt(_T247,
									     _T248,
									     _T24D,
									     _T24E,
									     0U);
						}
					      }
					    }
					  }
					}
				      }
				    }
				  }_T24F = es;
				  es = _T24F->tl;
				  _T250 = injectors;
				  injectors = _T250->tl;
				  i = i + -1;
				  goto _TL203;
				  _TL202: ;
				}
			      }
			    }
			  }
			}goto _TL1ED;
			_TL1EC: { struct Cyc_List_List * array_args = 0;
			  _TL209: if (es != 0) { goto _TL207;
			  }else { goto _TL208;
			  }
			  _TL207: _T251 = nv;
			  _T252 = es;
			  _T253 = _T252->hd;
			  _T254 = (struct Cyc_Absyn_Exp *)_T253;
			  Cyc_Toc_exp_to_c(_T251,_T254);
			  { struct Cyc_List_List * _T5FA = _cycalloc(sizeof(struct Cyc_List_List));
			    _T256 = es;
			    _T257 = _T256->hd;
			    _T5FA->hd = (struct Cyc_Absyn_Exp *)_T257;
			    _T5FA->tl = array_args;
			    _T255 = (struct Cyc_List_List *)_T5FA;
			  }array_args = _T255;
			  _T258 = es;
			  es = _T258->tl;
			  goto _TL209;
			  _TL208: _T259 = Cyc_List_imp_rev(array_args);
			  _T25A = Cyc_Absyn_array_exp(_T259,0U);
			  _T25B = arr_type;
			  { struct Cyc_Absyn_Exp * init = Cyc_Absyn_set_type(_T25A,
									     _T25B);
			    s = Cyc_Absyn_declare_stmt(argv,arr_type,init,
						       s,0U);
			  }
			}_TL1ED: _T25C = e;
			_T25C->r = Cyc_Toc_stmt_exp_r(s);
		      }
		    }
		  }
		}
	      }
	    }_npop_handler(0);
	    goto _LL7;
	    _pop_region();
	  };
	case 11: 
	  { struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F4 = _T5F6->f2;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    long b = _T5F4;
	    Cyc_Toc_exp_to_c(nv,e1);
	    _T25E = b;
	    if (! _T25E) { goto _TL20A;
	    }
	    _T25D = Cyc_Toc__rethrow_e;
	    goto _TL20B;
	    _TL20A: _T25D = Cyc_Toc__throw_e;
	    _TL20B: { struct Cyc_Absyn_Exp * fn_e = _T25D;
	      void * ctype = Cyc_Toc_typ_to_c(old_typ);
	      _T25F = e;
	      _T260 = ctype;
	      { struct Cyc_Absyn_Exp * _T5F6[1];
		_T5F6[0] = e1;
		_T262 = fn_e;
		_T263 = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),1);
		_T261 = Cyc_Toc_fncall_exp_dl(_T262,_T263);
	      }_T264 = ctype;
	      _T265 = Cyc_Absyn_set_type(_T261,_T264);
	      _T266 = Cyc_Toc_array_to_ptr_cast(_T260,_T265,0U);
	      _T25F->r = _T266->r;
	      goto _LL7;
	    }
	  }
	case 12: 
	  { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    Cyc_Toc_exp_to_c(nv,e1);
	    _T267 = e;
	    _T268 = e1;
	    *_T267 = *_T268;
	    goto _LL7;
	  }
	case 13: 
	  { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct Cyc_List_List * ts = _T5F0;
	    Cyc_Toc_exp_to_c(nv,e1);
	    { void * tc = Cyc_Toc_typ_to_c(old_typ);
	      _T269 = e1;
	      _T26A = _T269->topt;
	      _T26B = _check_null(_T26A);
	      { void * tc1 = Cyc_Toc_typ_to_c(_T26B);
		_T26C = Cyc_Tcutil_typecmp(tc,tc1);
		_T26D = ! _T26C;
		if (_T26D != 0) { goto _TL20C;
		}
		{ struct _tuple33 _T5F6 = Cyc_Toc_temp_var_and_exp();
		  struct Cyc_Absyn_Exp * _T5F7;
		  struct _tuple1 * _T5F8;
		  _T5F8 = _T5F6.f0;
		  _T5F7 = _T5F6.f1;
		  { struct _tuple1 * temp = _T5F8;
		    struct Cyc_Absyn_Exp * temp_exp = _T5F7;
		    _T26E = e;
		    _T26F = temp;
		    _T270 = tc;
		    _T271 = Cyc_Toc_array_to_ptr_cast(tc,e1,0U);
		    _T272 = temp_exp;
		    _T273 = e;
		    _T274 = _T273->loc;
		    _T275 = Cyc_Absyn_exp_stmt(_T272,_T274);
		    _T276 = e;
		    _T277 = _T276->loc;
		    _T278 = Cyc_Absyn_declare_stmt(_T26F,_T270,_T271,_T275,
						   _T277);
		    _T26E->r = Cyc_Toc_stmt_exp_r(_T278);
		  }
		}goto _TL20D;
		_TL20C: _TL20D: goto _LL7;
	      }
	    }
	  }
	case 14: 
	  { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T279 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T27A = &_T279->f1;
	    _T5F5 = (void * *)_T27A;
	    _T5F0 = _T5F6->f2;
	    _T5F4 = _T5F6->f3;
	    _T5EC = _T5F6->f4;
	  }{ void * * t = _T5F5;
	    struct Cyc_Absyn_Exp * e1 = _T5F0;
	    long user_inserted = _T5F4;
	    enum Cyc_Absyn_Coercion coercion = _T5EC;
	    _T27B = e1;
	    _T27C = _T27B->topt;
	    { void * old_t2 = _check_null(_T27C);
	      void * old_t2_c = Cyc_Toc_typ_to_c(old_t2);
	      _T27D = t;
	      { void * new_typ = *_T27D;
		void * new_typ_c = Cyc_Toc_typ_to_c(new_typ);
		_T27E = t;
		*_T27E = new_typ_c;
		Cyc_Toc_exp_to_c(nv,e1);
		{ struct _tuple38 _T5F6;
		  _T5F6.f0 = Cyc_Absyn_compress(old_t2);
		  _T5F6.f1 = Cyc_Absyn_compress(new_typ);
		  _T27F = _T5F6;
		}{ struct _tuple38 _T5F6 = _T27F;
		  struct Cyc_Absyn_PtrInfo _T5F7;
		  struct Cyc_Absyn_PtrInfo _T5F8;
		  _T280 = _T5F6.f0;
		  _T281 = (int *)_T280;
		  _T282 = *_T281;
		  if (_T282 != 4) { goto _TL20E;
		  }
		  _T283 = _T5F6.f1;
		  _T284 = (int *)_T283;
		  _T285 = *_T284;
		  switch (_T285) {
		  case 4: 
		    _T286 = _T5F6.f0;
		    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T5F9 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T286;
		      _T5F8 = _T5F9->f1;
		    }_T287 = _T5F6.f1;
		    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T5F9 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T287;
		      _T5F7 = _T5F9->f1;
		    }{ struct Cyc_Absyn_PtrInfo p1 = _T5F8;
		      struct Cyc_Absyn_PtrInfo p2 = _T5F7;
		      _T288 = Cyc_Absyn_bounds_one();
		      _T289 = p1;
		      _T28A = _T289.ptr_atts;
		      _T28B = _T28A.bounds;
		      { struct Cyc_Absyn_Exp * b1 = Cyc_Tcutil_get_bounds_exp_constrain(_T288,
											_T28B,
											1);
			_T28C = Cyc_Absyn_bounds_one();
			_T28D = p2;
			_T28E = _T28D.ptr_atts;
			_T28F = _T28E.bounds;
			{ struct Cyc_Absyn_Exp * b2 = Cyc_Tcutil_get_bounds_exp_constrain(_T28C,
											  _T28F,
											  1);
			  _T290 = p1;
			  _T291 = _T290.ptr_atts;
			  _T292 = _T291.zero_term;
			  { long zt1 = Cyc_Tcutil_force_type2bool(0,_T292);
			    _T293 = p2;
			    _T294 = _T293.ptr_atts;
			    _T295 = _T294.zero_term;
			    { long zt2 = Cyc_Tcutil_force_type2bool(0,_T295);
			      { struct _tuple39 _T5F9;
				_T5F9.f0 = b1;
				_T5F9.f1 = b2;
				_T296 = _T5F9;
			      }{ struct _tuple39 _T5F9 = _T296;
				_T297 = _T5F9.f0;
				if (_T297 == 0) { goto _TL211;
				}
				_T298 = _T5F9.f1;
				if (_T298 == 0) { goto _TL213;
				}
				did_inserted_checks = 1;
				_T299 = Cyc_Toc_do_null_check(e);
				if (! _T299) { goto _TL215;
				}
				_T29A = e;
				{ struct Cyc_Absyn_Exp * _T5FA[1];
				  _T5FA[0] = e1;
				  _T29C = Cyc_Toc__check_null_e;
				  _T29D = _tag_fat(_T5FA,sizeof(struct Cyc_Absyn_Exp *),
						   1);
				  _T29B = Cyc_Toc_fncall_exp_dl(_T29C,_T29D);
				}_T29A->r = _T29B->r;
				goto _TL216;
				_TL215: _T29E = Cyc_Unify_unify(old_t2_c,
								new_typ_c);
				if (! _T29E) { goto _TL217;
				}
				_T29F = e;
				_T2A0 = e1;
				*_T29F = *_T2A0;
				goto _TL218;
				_TL217: _TL218: _TL216: goto _LLB9;
				_TL213: { struct Cyc_Absyn_Exp * e2 = b1;
				  struct _tuple13 _T5FA = Cyc_Evexp_eval_const_uint_exp(e2);
				  long _T5FB;
				  unsigned int _T5FC;
				  _T5FC = _T5FA.f0;
				  _T5FB = _T5FA.f1;
				  { unsigned int i = _T5FC;
				    long valid = _T5FB;
				    _T2A1 = Cyc_Toc_is_toplevel(nv);
				    if (! _T2A1) { goto _TL219;
				    }
				    _T2A2 = zt1;
				    if (! _T2A2) { goto _TL21B;
				    }
				    _T2A3 = p2;
				    _T2A4 = _T2A3.elt_tq;
				    _T2A5 = _T2A4.real_const;
				    if (_T2A5) { goto _TL21B;
				    }else { goto _TL21D;
				    }
				    _TL21D: _T2A6 = zt2;
				    if (_T2A6) { goto _TL21B;
				    }else { goto _TL21E;
				    }
				    _TL21E: _T2A7 = e2;
				    _T2A8 = Cyc_Absyn_uint_exp(1U,0U);
				    _T2A9 = Cyc_Absyn_uint_type;
				    _T2AA = Cyc_Absyn_set_type(_T2A8,_T2A9);
				    _T2AB = Cyc_Absyn_prim2_exp(2U,_T2A7,
								_T2AA,0U);
				    _T2AC = e2;
				    _T2AD = _T2AC->topt;
				    e2 = Cyc_Absyn_set_type(_T2AB,_T2AD);
				    goto _TL21C;
				    _TL21B: _TL21C: _T2AE = e;
				    _T2AF = Cyc_Toc_make_toplevel_dyn_arr(old_t2,
									  e2,
									  e1);
				    _T2AE->r = _T2AF->r;
				    goto _TL21A;
				    _TL219: _T2B0 = zt1;
				    if (! _T2B0) { goto _TL21F;
				    }
				    { struct _tuple33 _T5FD = Cyc_Toc_temp_var_and_exp();
				      struct Cyc_Absyn_Exp * _T5FE;
				      struct _tuple1 * _T5FF;
				      _T5FF = _T5FD.f0;
				      _T5FE = _T5FD.f1;
				      { struct _tuple1 * x = _T5FF;
					struct Cyc_Absyn_Exp * x_exp = _T5FE;
					_T2B1 = x_exp;
					_T2B2 = Cyc_Toc_typ_to_c(old_t2);
					Cyc_Absyn_set_type(_T2B1,_T2B2);
					{ struct Cyc_Absyn_Exp * arg3;
					  _T2B3 = e1;
					  { void * _T600 = _T2B3->r;
					    struct Cyc_Absyn_Vardecl * _T601;
					    _T2B4 = (int *)_T600;
					    _T2B5 = *_T2B4;
					    switch (_T2B5) {
					    case 0: 
					      _T2B6 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_T600;
					      _T2B7 = _T2B6->f1;
					      _T2B8 = _T2B7.Wstring_c;
					      _T2B9 = _T2B8.tag;
					      switch (_T2B9) {
					      case 9: 
						arg3 = e2;
						goto _LLC8;
					      case 10: 
						arg3 = e2;
						goto _LLC8;
					      default: 
						goto _LLD1;
					      }
					      ;
					    case 1: 
					      _T2BA = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T600;
					      _T2BB = _T2BA->f1;
					      _T2BC = (int *)_T2BB;
					      _T2BD = *_T2BC;
					      switch (_T2BD) {
					      case 1: 
						{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T602 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T600;
						  _T2BE = _T602->f1;
						  { struct Cyc_Absyn_Global_b_Absyn_Binding_struct * _T603 = (struct Cyc_Absyn_Global_b_Absyn_Binding_struct *)_T2BE;
						    _T601 = _T603->f1;
						  }
						}{ struct Cyc_Absyn_Vardecl * vd = _T601;
						  _T601 = vd;
						  goto _LLD0;
						}
					      case 4: 
						{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T602 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T600;
						  _T2BF = _T602->f1;
						  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T603 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T2BF;
						    _T601 = _T603->f1;
						  }
						}_LLD0: { struct Cyc_Absyn_Vardecl * vd = _T601;
						  _T2C0 = vd;
						  _T2C1 = _T2C0->type;
						  _T2C2 = Cyc_Tcutil_is_array_type(_T2C1);
						  if (_T2C2) { goto _TL224;
						  }else { goto _TL226;
						  }
						  _TL226: goto _LLD2;
						  _TL224: arg3 = e2;
						  goto _LLC8;
						}
					      default: 
						goto _LLD1;
					      }
					      ;
					    default: 
					      _LLD1: _LLD2: _T2C3 = Cyc_Toc_void_star_type();
					      _T2C4 = x_exp;
					      x_exp = Cyc_Toc_cast_it(_T2C3,
								      _T2C4);
					      _T2C5 = valid;
					      if (! _T2C5) { goto _TL227;
					      }
					      if (i == 1U) { goto _TL227;
					      }
					      arg3 = e2;
					      goto _TL228;
					      _TL227: _T2C6 = Cyc_Toc_isCharStar(e1);
					      if (! _T2C6) { goto _TL229;
					      }
					      { struct Cyc_Absyn_Exp * _T602[2];
						_T602[0] = x_exp;
						_T602[1] = e2;
						_T2C8 = Cyc_Toc__get_zero_arr_size_char_e;
						_T2C9 = _tag_fat(_T602,sizeof(struct Cyc_Absyn_Exp *),
								 2);
						_T2C7 = Cyc_Toc_fncall_exp_dl(_T2C8,
									      _T2C9);
					      }arg3 = _T2C7;
					      goto _TL22A;
					      _TL229: { struct Cyc_Absyn_Exp * _T602[3];
						_T2CB = Cyc_Toc_typ_to_c(old_t2);
						_T2CC = Cyc_Tcutil_pointer_elt_type(_T2CB);
						_T2CD = Cyc_Absyn_sizeoftype_exp(_T2CC,
										 0U);
						_T2CE = Cyc_Absyn_uint_type;
						_T2CF = Cyc_Absyn_set_type(_T2CD,
									   _T2CE);
						_T2D0 = Cyc_Absyn_uint_type;
						_T602[0] = Cyc_Absyn_set_type(_T2CF,
									      _T2D0);
						_T602[1] = x_exp;
						_T602[2] = e2;
						_T2D1 = Cyc_Toc__get_zero_arr_size_other_e;
						_T2D2 = _tag_fat(_T602,sizeof(struct Cyc_Absyn_Exp *),
								 3);
						_T2CA = Cyc_Toc_fncall_exp_dl(_T2D1,
									      _T2D2);
					      }arg3 = _T2CA;
					      _TL22A: _TL228: _T2D3 = arg3;
					      _T2D3->topt = Cyc_Absyn_uint_type;
					      goto _LLC8;
					    }
					    _LLC8: ;
					  }{ long use_temp = arg3 != e2;
					    _T2D4 = zt2;
					    if (_T2D4) { goto _TL22B;
					    }else { goto _TL22D;
					    }
					    _TL22D: _T2D5 = p2;
					    _T2D6 = _T2D5.elt_tq;
					    _T2D7 = _T2D6.real_const;
					    if (_T2D7) { goto _TL22B;
					    }else { goto _TL22E;
					    }
					    _TL22E: _T2D8 = arg3;
					    _T2D9 = Cyc_Absyn_uint_exp(1U,
								       0U);
					    _T2DA = Cyc_Absyn_uint_type;
					    _T2DB = Cyc_Absyn_set_type(_T2D9,
								       _T2DA);
					    _T2DC = Cyc_Absyn_prim2_exp(2U,
									_T2D8,
									_T2DB,
									0U);
					    _T2DD = arg3;
					    _T2DE = _T2DD->topt;
					    _T2DF = _check_null(_T2DE);
					    arg3 = Cyc_Absyn_set_type(_T2DC,
								      _T2DF);
					    goto _TL22C;
					    _TL22B: _TL22C: _T2E0 = p1;
					    _T2E1 = _T2E0.elt_type;
					    _T2E2 = Cyc_Toc_typ_to_c(_T2E1);
					    _T2E3 = Cyc_Absyn_sizeoftype_exp(_T2E2,
									     0U);
					    _T2E4 = Cyc_Absyn_uint_type;
					    _T2E5 = Cyc_Absyn_set_type(_T2E3,
								       _T2E4);
					    _T2E6 = Cyc_Absyn_uint_type;
					    { struct Cyc_Absyn_Exp * arg2 = Cyc_Absyn_set_type(_T2E5,
											       _T2E6);
					      _T2E7 = use_temp;
					      if (! _T2E7) { goto _TL22F;
					      }
					      { struct Cyc_Absyn_Exp * _T600[3];
						_T600[0] = x_exp;
						_T600[1] = arg2;
						_T600[2] = arg3;
						_T2E9 = Cyc_Toc__tag_fat_e;
						_T2EA = _tag_fat(_T600,sizeof(struct Cyc_Absyn_Exp *),
								 3);
						_T2E8 = Cyc_Toc_fncall_exp_dl(_T2E9,
									      _T2EA);
					      }{ struct Cyc_Absyn_Exp * tg_exp = _T2E8;
						_T2EB = tg_exp;
						_T2EB->topt = Cyc_Toc_fat_ptr_type();
						{ struct Cyc_Absyn_Stmt * s = Cyc_Absyn_exp_stmt(tg_exp,
												 0U);
						  _T2EC = x;
						  _T2ED = Cyc_Toc_typ_to_c(old_t2);
						  _T2EE = e1;
						  _T2EF = s;
						  s = Cyc_Absyn_declare_stmt(_T2EC,
									     _T2ED,
									     _T2EE,
									     _T2EF,
									     0U);
						  _T2F0 = e;
						  _T2F0->r = Cyc_Toc_stmt_exp_r(s);
						}
					      }goto _TL230;
					      _TL22F: _T2F1 = e;
					      { struct Cyc_Absyn_Exp * _T600[3];
						_T600[0] = e1;
						_T600[1] = arg2;
						_T600[2] = arg3;
						_T2F3 = Cyc_Toc__tag_fat_e;
						_T2F4 = _tag_fat(_T600,sizeof(struct Cyc_Absyn_Exp *),
								 3);
						_T2F2 = Cyc_Toc_fncall_exp_r(_T2F3,
									     _T2F4);
					      }_T2F1->r = _T2F2;
					      _TL230: ;
					    }
					  }
					}
				      }
				    }goto _TL220;
				    _TL21F: _T2F5 = e;
				    { struct Cyc_Absyn_Exp * _T5FD[3];
				      _T5FD[0] = e1;
				      _T2F7 = p1;
				      _T2F8 = _T2F7.elt_type;
				      _T2F9 = Cyc_Toc_typ_to_c(_T2F8);
				      _T2FA = Cyc_Absyn_sizeoftype_exp(_T2F9,
								       0U);
				      _T2FB = Cyc_Absyn_uint_type;
				      _T2FC = Cyc_Absyn_set_type(_T2FA,_T2FB);
				      _T2FD = Cyc_Absyn_uint_type;
				      _T5FD[1] = Cyc_Absyn_set_type(_T2FC,
								    _T2FD);
				      _T5FD[2] = e2;
				      _T2FE = Cyc_Toc__tag_fat_e;
				      _T2FF = _tag_fat(_T5FD,sizeof(struct Cyc_Absyn_Exp *),
						       3);
				      _T2F6 = Cyc_Toc_fncall_exp_r(_T2FE,
								   _T2FF);
				    }_T2F5->r = _T2F6;
				    _TL220: _TL21A: goto _LLB9;
				  }
				}_TL211: _T300 = _T5F9.f1;
				if (_T300 == 0) { goto _TL231;
				}
				{ struct Cyc_Absyn_Exp * new_e2 = _check_null(b2);
				  _T301 = zt1;
				  if (! _T301) { goto _TL233;
				  }
				  _T302 = zt2;
				  if (_T302) { goto _TL233;
				  }else { goto _TL235;
				  }
				  _TL235: _T303 = b2;
				  _T304 = Cyc_Absyn_uint_exp(1U,0U);
				  _T305 = Cyc_Absyn_uint_type;
				  _T306 = Cyc_Absyn_set_type(_T304,_T305);
				  _T307 = Cyc_Absyn_add_exp(_T303,_T306,0U);
				  _T308 = Cyc_Absyn_uint_type;
				  new_e2 = Cyc_Absyn_set_type(_T307,_T308);
				  goto _TL234;
				  _TL233: _TL234: { struct Cyc_Absyn_Exp * ptr_exp = e1;
				    _T309 = p1;
				    _T30A = _T309.ptr_atts;
				    _T30B = _T30A.aqual;
				    _T30C = Cyc_Tcutil_is_noalias_qual(_T30B,
								       0);
				    if (! _T30C) { goto _TL236;
				    }
				    _T30D = p1;
				    _T30E = _T30D.ptr_atts;
				    _T30F = _T30E.aqual;
				    _T310 = Cyc_Tcutil_is_noalias_qual(_T30F,
								       1);
				    if (_T310) { goto _TL236;
				    }else { goto _TL238;
				    }
				    _TL238: { struct Cyc_Absyn_Exp * _T5FA[1];
				      _T5FA[0] = ptr_exp;
				      _T312 = Cyc_Toc__check_fat_at_base_e;
				      _T313 = _tag_fat(_T5FA,sizeof(struct Cyc_Absyn_Exp *),
						       1);
				      _T311 = Cyc_Toc_fncall_exp_dl(_T312,
								    _T313);
				    }_T314 = Cyc_Toc_fat_ptr_type();
				    ptr_exp = Cyc_Absyn_set_type(_T311,_T314);
				    goto _TL237;
				    _TL236: _TL237: _T315 = e;
				    { void * _T5FA = _T315->annot;
				      _T316 = (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct *)_T5FA;
				      _T317 = _T316->tag;
				      _T318 = Cyc_InsertChecks_FatBound;
				      if (_T317 != _T318) { goto _TL239;
				      }
				      goto _LLD7;
				      _TL239: _T319 = (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct *)_T5FA;
				      _T31A = _T319->tag;
				      _T31B = Cyc_InsertChecks_NullAndFatBound;
				      if (_T31A != _T31B) { goto _TL23B;
				      }
				      _LLD7: { struct Cyc_Absyn_Exp * _T5FB[3];
					_T5FB[0] = ptr_exp;
					_T31D = p1;
					_T31E = _T31D.elt_type;
					_T31F = Cyc_Toc_typ_to_c(_T31E);
					_T320 = Cyc_Absyn_sizeoftype_exp(_T31F,
									 0U);
					_T321 = Cyc_Absyn_uint_type;
					_T322 = Cyc_Absyn_set_type(_T320,
								   _T321);
					_T323 = Cyc_Absyn_uint_type;
					_T5FB[1] = Cyc_Absyn_set_type(_T322,
								      _T323);
					_T5FB[2] = new_e2;
					_T324 = Cyc_Toc__untag_fat_ptr_check_bound_e;
					_T325 = _tag_fat(_T5FB,sizeof(struct Cyc_Absyn_Exp *),
							 3);
					_T31C = Cyc_Toc_fncall_exp_dl(_T324,
								      _T325);
				      }_T326 = Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,
								    Cyc_Toc_mt_tq);
				      ptr_exp = Cyc_Absyn_set_type(_T31C,
								   _T326);
				      goto _LLD3;
				      _TL23B: { struct Cyc_Absyn_Exp * _T5FB[3];
					_T5FB[0] = ptr_exp;
					_T328 = p1;
					_T329 = _T328.elt_type;
					_T32A = Cyc_Toc_typ_to_c(_T329);
					_T32B = Cyc_Absyn_sizeoftype_exp(_T32A,
									 0U);
					_T32C = Cyc_Absyn_uint_type;
					_T32D = Cyc_Absyn_set_type(_T32B,
								   _T32C);
					_T32E = Cyc_Absyn_uint_type;
					_T5FB[1] = Cyc_Absyn_set_type(_T32D,
								      _T32E);
					_T5FB[2] = new_e2;
					_T32F = Cyc_Toc__untag_fat_ptr_e;
					_T330 = _tag_fat(_T5FB,sizeof(struct Cyc_Absyn_Exp *),
							 3);
					_T327 = Cyc_Toc_fncall_exp_dl(_T32F,
								      _T330);
				      }_T331 = Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,
								    Cyc_Toc_mt_tq);
				      ptr_exp = Cyc_Absyn_set_type(_T327,
								   _T331);
				      goto _LLD3;
				      _LLD3: ;
				    }did_inserted_checks = 1;
				    _T332 = Cyc_Toc_do_null_check(e);
				    if (! _T332) { goto _TL23D;
				    }
				    _T333 = ptr_exp;
				    { struct Cyc_Absyn_Exp * _T5FA[1];
				      _T5FA[0] = Cyc_Toc_deep_copy(ptr_exp);
				      _T335 = Cyc_Toc__check_null_e;
				      _T336 = _tag_fat(_T5FA,sizeof(struct Cyc_Absyn_Exp *),
						       1);
				      _T334 = Cyc_Toc_fncall_exp_r(_T335,
								   _T336);
				    }_T333->r = _T334;
				    goto _TL23E;
				    _TL23D: _TL23E: _T337 = e;
				    _T338 = t;
				    _T339 = *_T338;
				    _T33A = ptr_exp;
				    _T337->r = Cyc_Toc_cast_it_r(_T339,_T33A);
				    goto _LLB9;
				  }
				}_TL231: _T33B = zt1;
				if (! _T33B) { goto _TL23F;
				}
				_T33C = zt2;
				if (_T33C) { goto _TL23F;
				}else { goto _TL241;
				}
				_TL241: _T33D = p2;
				_T33E = _T33D.elt_tq;
				_T33F = _T33E.real_const;
				if (_T33F) { goto _TL23F;
				}else { goto _TL242;
				}
				_TL242: _T340 = Cyc_Toc_is_toplevel(nv);
				if (! _T340) { goto _TL243;
				}
				{ int (* _T5FA)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_Toc_unimp;
				  _T341 = _T5FA;
				}_T342 = _tag_fat("can't coerce a ZEROTERM to a non-const NOZEROTERM pointer at toplevel",
						  sizeof(char),70U);
				_T341(_T342);
				goto _TL244;
				_TL243: _TL244: _T343 = e;
				{ struct Cyc_Absyn_Exp * _T5FA[3];
				  _T5FA[0] = e1;
				  _T345 = p1;
				  _T346 = _T345.elt_type;
				  _T347 = Cyc_Toc_typ_to_c(_T346);
				  _T348 = Cyc_Absyn_sizeoftype_exp(_T347,
								   0U);
				  _T349 = Cyc_Absyn_uint_type;
				  _T34A = Cyc_Absyn_set_type(_T348,_T349);
				  _T34B = Cyc_Absyn_uint_type;
				  _T5FA[1] = Cyc_Absyn_set_type(_T34A,_T34B);
				  _T34C = Cyc_Absyn_uint_exp(1U,0U);
				  _T34D = Cyc_Absyn_uint_type;
				  _T5FA[2] = Cyc_Absyn_set_type(_T34C,_T34D);
				  _T34E = Cyc_Toc__fat_ptr_decrease_size_e;
				  _T34F = _tag_fat(_T5FA,sizeof(struct Cyc_Absyn_Exp *),
						   3);
				  _T344 = Cyc_Toc_fncall_exp_r(_T34E,_T34F);
				}_T343->r = _T344;
				goto _TL240;
				_TL23F: _TL240: goto _LLB9;
				_LLB9: ;
			      }goto _LLB2;
			    }
			  }
			}
		      }
		    }
		  case 0: 
		    _T350 = _T5F6.f1;
		    _T351 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T350;
		    _T352 = _T351->f1;
		    _T353 = (int *)_T352;
		    _T354 = *_T353;
		    if (_T354 != 1) { goto _TL245;
		    }
		    _T355 = _T5F6.f0;
		    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T5F9 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T355;
		      _T5F8 = _T5F9->f1;
		    }{ struct Cyc_Absyn_PtrInfo p1 = _T5F8;
		      _T356 = Cyc_Absyn_bounds_one();
		      _T357 = p1;
		      _T358 = _T357.ptr_atts;
		      _T359 = _T358.bounds;
		      { struct Cyc_Absyn_Exp * _T5F9 = Cyc_Tcutil_get_bounds_exp_constrain(_T356,
											   _T359,
											   1);
			if (_T5F9 != 0) { goto _TL247;
			}
			_T35A = e1;
			_T35B = Cyc_Toc_deep_copy(e1);
			_T35C = Cyc_Toc_curr_sp;
			_T35A->r = Cyc_Toc_aggrmember_exp_r(_T35B,_T35C);
			_T35D = e1;
			_T35D->topt = Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,
							   Cyc_Toc_mt_tq);
			goto _LLDA;
			_TL247: goto _LLDA;
			_LLDA: ;
		      }goto _LLB2;
		    }_TL245: goto _LLB7;
		  default: 
		    goto _LLB7;
		  }
		  goto _TL20F;
		  _TL20E: _LLB7: _T35E = Cyc_Unify_unify(old_t2_c,new_typ_c);
		  if (! _T35E) { goto _TL249;
		  }
		  _T35F = e;
		  _T360 = e1;
		  *_T35F = *_T360;
		  goto _TL24A;
		  _TL249: _TL24A: goto _LLB2;
		  _TL20F: _LLB2: ;
		}goto _LL7;
	      }
	    }
	  }
	case 15: 
	  { struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    Cyc_Toc_set_lhs(nv,1);
	    Cyc_Toc_exp_to_c(nv,e1);
	    Cyc_Toc_set_lhs(nv,0);
	    _T361 = Cyc_Absyn_is_lvalue(e1);
	    if (_T361) { goto _TL24B;
	    }else { goto _TL24D;
	    }
	    _TL24D: { void (* _T5F6)(struct Cyc_Absyn_Exp *,struct Cyc_List_List *,
				     struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
								long),long) = (void (*)(struct Cyc_Absyn_Exp *,
											struct Cyc_List_List *,
											struct Cyc_Absyn_Exp * (*)(struct Cyc_Absyn_Exp *,
														   long),
											long))Cyc_Toc_lvalue_assign;
	      _T362 = _T5F6;
	    }_T363 = e1;
	    _T362(_T363,0,Cyc_Toc_address_lvalue,1);
	    _T364 = e;
	    _T365 = Cyc_Toc_typ_to_c(old_typ);
	    _T366 = e1;
	    _T364->r = Cyc_Toc_cast_it_r(_T365,_T366);
	    goto _TL24C;
	    _TL24B: _T367 = &Cyc_Kinds_ak;
	    _T368 = (struct Cyc_Absyn_Kind *)_T367;
	    _T369 = e1;
	    _T36A = _T369->topt;
	    _T36B = _check_null(_T36A);
	    _T36C = Cyc_Tcutil_type_kind(_T36B);
	    _T36D = Cyc_Kinds_kind_leq(_T368,_T36C);
	    if (! _T36D) { goto _TL24E;
	    }
	    _T36E = e;
	    _T36F = Cyc_Toc_typ_to_c(old_typ);
	    _T370 = Cyc_Absyn_address_exp(e1,0U);
	    _T371 = e1;
	    _T372 = _T371->topt;
	    _T373 = _check_null(_T372);
	    _T374 = Cyc_Toc_mt_tq;
	    _T375 = Cyc_Absyn_cstar_type(_T373,_T374);
	    _T376 = Cyc_Absyn_set_type(_T370,_T375);
	    _T36E->r = Cyc_Toc_cast_it_r(_T36F,_T376);
	    goto _TL24F;
	    _TL24E: _TL24F: _TL24C: goto _LL7;
	  }
	case 16: 
	  { struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	    _T5EF = _T5F6->f3;
	  }{ struct Cyc_Absyn_Exp * rgnopt = _T5F5;
	    struct Cyc_Absyn_Exp * e1 = _T5F0;
	    struct Cyc_Absyn_Exp * qual = _T5EF;
	    Cyc_Toc_exp_to_c(nv,e1);
	    _T377 = e1;
	    _T378 = _T377->topt;
	    _T379 = _check_null(_T378);
	    { void * elt_typ = Cyc_Toc_typ_to_c(_T379);
	      { void * _T5F6 = Cyc_Absyn_compress(elt_typ);
		void * _T5F7;
		_T37A = (int *)_T5F6;
		_T37B = *_T37A;
		if (_T37B != 5) { goto _TL250;
		}
		{ struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T5F8 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T5F6;
		  _T37C = _T5F8->f1;
		  _T5F7 = _T37C.elt_type;
		}{ void * t2 = _T5F7;
		  elt_typ = Cyc_Toc_typ_to_c(t2);
		  goto _LLDF;
		}_TL250: goto _LLDF;
		_LLDF: ;
	      }{ struct Cyc_Absyn_Exp * array_len = Cyc_Toc_array_length_exp(e1);
		struct _tuple1 * lenvar = 0;
		struct Cyc_Absyn_Exp * lenexp = 0;
		struct Cyc_Absyn_Exp * mexp;
		if (array_len == 0) { goto _TL252;
		}
		lenvar = Cyc_Toc_temp_var();
		_T37D = Cyc_Absyn_var_exp(lenvar,0U);
		_T37E = Cyc_Absyn_uint_type;
		lenexp = Cyc_Absyn_set_type(_T37D,_T37E);
		{ struct Cyc_Absyn_Exp * _T5F6[2];
		  _T5F6[0] = lenexp;
		  _T380 = Cyc_Absyn_sizeoftype_exp(elt_typ,0U);
		  _T381 = Cyc_Absyn_uint_type;
		  _T5F6[1] = Cyc_Absyn_set_type(_T380,_T381);
		  _T382 = Cyc_Toc__check_times_e;
		  _T383 = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),2);
		  _T37F = Cyc_Toc_fncall_exp_dl(_T382,_T383);
		}mexp = _T37F;
		_T384 = e1;
		{ void * _T5F6 = _T384->r;
		  void * _T5F7;
		  _T385 = (int *)_T5F6;
		  _T386 = *_T385;
		  switch (_T386) {
		  case 26: 
		    { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T5F8 = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T5F6;
		      _T387 = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T5F6;
		      _T388 = &_T387->f2;
		      _T5F7 = (struct Cyc_Absyn_Exp * *)_T388;
		    }{ struct Cyc_Absyn_Exp * * bd = _T5F7;
		      _T5F7 = bd;
		      goto _LLE8;
		    }
		  case 27: 
		    { struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T5F8 = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T5F6;
		      _T389 = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T5F6;
		      _T38A = &_T389->f1;
		      _T5F7 = (struct Cyc_Absyn_Exp * *)_T38A;
		    }_LLE8: { struct Cyc_Absyn_Exp * * bd = (struct Cyc_Absyn_Exp * *)_T5F7;
		      _T38B = bd;
		      *_T38B = Cyc_Toc_deep_copy(lenexp);
		      goto _LLE4;
		    }
		  default: 
		    goto _LLE4;
		  }
		  _LLE4: ;
		}goto _TL253;
		_TL252: _T38C = Cyc_Absyn_sizeoftype_exp(elt_typ,0U);
		_T38D = Cyc_Absyn_uint_type;
		mexp = Cyc_Absyn_set_type(_T38C,_T38D);
		_TL253: _T38E = mexp;
		_T38E->topt = Cyc_Absyn_uint_type;
		{ struct Cyc_Absyn_Exp * vse = Cyc_Toc_get_varsizeexp(e1);
		  if (vse == 0) { goto _TL255;
		  }
		  _T38F = Cyc_Absyn_add_exp(mexp,vse,0U);
		  _T390 = Cyc_Absyn_uint_type;
		  mexp = Cyc_Absyn_set_type(_T38F,_T390);
		  goto _TL256;
		  _TL255: _TL256: if (rgnopt == 0) { goto _TL25B;
		  }else { goto _TL25A;
		  }
		  _TL25B: if (qual == 0) { goto _TL259;
		  }else { goto _TL25A;
		  }
		  _TL25A: _T391 = Cyc_Flags_no_regions;
		  if (_T391) { goto _TL259;
		  }else { goto _TL257;
		  }
		  _TL259: mexp = Cyc_Toc_malloc_exp(elt_typ,mexp);
		  goto _TL258;
		  _TL257: if (qual == 0) { goto _TL25C;
		  }
		  Cyc_Toc_exp_to_c(nv,qual);
		  goto _TL25D;
		  _TL25C: _TL25D: if (rgnopt == 0) { goto _TL25E;
		  }
		  Cyc_Toc_exp_to_c(nv,rgnopt);
		  _T392 = rgnopt;
		  if (qual != 0) { goto _TL260;
		  }
		  _T393 = Cyc_Toc_aliasable_qual_exp();
		  goto _TL261;
		  _TL260: _T393 = qual;
		  _TL261: _T394 = mexp;
		  mexp = Cyc_Toc_rmalloc_exp(_T392,_T393,_T394);
		  goto _TL25F;
		  _TL25E: mexp = Cyc_Toc_aqmalloc_exp(qual,mexp);
		  _TL25F: _TL258: _T395 = mexp;
		  _T396 = Cyc_Absyn_cstar_type(elt_typ,Cyc_Toc_mt_tq);
		  Cyc_Absyn_set_type(_T395,_T396);
		  _T397 = e;
		  { struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct * _T5F6 = _cycalloc(sizeof(struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct));
		    _T5F6->tag = Cyc_Toc_NewInfo;
		    _T5F6->f1 = mexp;
		    _T5F6->f2 = Cyc_Absyn_cstar_type(elt_typ,Cyc_Toc_mt_tq);
		    _T398 = (struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct *)_T5F6;
		  }_T397->annot = (void *)_T398;
		  _T399 = Cyc_Tcutil_is_fat_ptr(old_typ);
		  if (! _T399) { goto _TL262;
		  }
		  _T39A = Cyc_Toc_deep_copy(e);
		  _T39B = Cyc_Absyn_cstar_type(elt_typ,Cyc_Toc_mt_tq);
		  { struct Cyc_Absyn_Exp * e2 = Cyc_Absyn_set_type(_T39A,
								   _T39B);
		    _T39C = e;
		    { struct Cyc_Absyn_Exp * _T5F6[3];
		      _T5F6[0] = e2;
		      _T39E = Cyc_Absyn_sizeoftype_exp(elt_typ,0U);
		      _T39F = Cyc_Absyn_uint_type;
		      _T5F6[1] = Cyc_Absyn_set_type(_T39E,_T39F);
		      _T3A0 = lenexp;
		      _T3A1 = (unsigned int)_T3A0;
		      if (! _T3A1) { goto _TL264;
		      }
		      _T5F6[2] = lenexp;
		      goto _TL265;
		      _TL264: _T3A2 = Cyc_Absyn_uint_exp(1U,0U);
		      _T3A3 = Cyc_Absyn_uint_type;
		      _T5F6[2] = Cyc_Absyn_set_type(_T3A2,_T3A3);
		      _TL265: _T3A4 = Cyc_Toc__tag_fat_e;
		      _T3A5 = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),
				       3);
		      _T39D = Cyc_Toc_fncall_exp_dl(_T3A4,_T3A5);
		    }_T39C->r = _T39D->r;
		  }goto _TL263;
		  _TL262: _TL263: if (vse == 0) { goto _TL266;
		  }
		  _T3A6 = e;
		  _T3A7 = Cyc_Toc_typ_to_c(old_typ);
		  _T3A8 = Cyc_Toc_deep_copy(e);
		  _T3A6->r = Cyc_Toc_cast_it_r(_T3A7,_T3A8);
		  goto _TL267;
		  _TL266: _TL267: _T3A9 = array_len;
		  _T3AA = (unsigned int)_T3A9;
		  if (! _T3AA) { goto _TL268;
		  }
		  _T3AB = lenvar;
		  _T3AC = Cyc_Absyn_uint_type;
		  _T3AD = array_len;
		  _T3AE = Cyc_Toc_deep_copy(e);
		  _T3AF = Cyc_Absyn_exp_stmt(_T3AE,0U);
		  { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_declare_stmt(_T3AB,
								       _T3AC,
								       _T3AD,
								       _T3AF,
								       0U);
		    _T3B0 = e;
		    _T3B0->r = Cyc_Toc_stmt_exp_r(s);
		  }goto _TL269;
		  _TL268: _TL269: goto _LL7;
		}
	      }
	    }
	  }
	case 18: 
	  { struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    Cyc_Toc_exp_to_c(nv,e1);
	    goto _LL7;
	  }
	case 17: 
	  { struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T3B1 = _T5F6->f1;
	    _T5F5 = (void *)_T3B1;
	  }{ void * t = _T5F5;
	    _T3B2 = e;
	    { struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T5F6 = _cycalloc(sizeof(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct));
	      _T5F6->tag = 17;
	      _T5F6->f1 = Cyc_Toc_typ_to_c(t);
	      _T3B3 = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T5F6;
	    }_T3B2->r = (void *)_T3B3;
	    goto _LL7;
	  }
	case 19: 
	  { struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T3B4 = _T5F6->f1;
	    _T5F5 = (void *)_T3B4;
	    _T5F0 = _T5F6->f2;
	  }{ void * t = _T5F5;
	    struct Cyc_List_List * fs = _T5F0;
	    _T3B5 = e;
	    { struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T5F6 = _cycalloc(sizeof(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct));
	      _T5F6->tag = 19;
	      _T5F6->f1 = Cyc_Toc_typ_to_c(t);
	      _T5F6->f2 = fs;
	      _T3B6 = (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct *)_T5F6;
	    }_T3B5->r = (void *)_T3B6;
	    goto _LL7;
	  }
	case 21: 
	  { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	    _T5F4 = _T5F6->f3;
	    _T5F3 = _T5F6->f4;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct _fat_ptr * f = _T5F0;
	    long is_tagged = _T5F4;
	    long is_read = _T5F3;
	    long is_poly = Cyc_Toc_is_poly_project(e);
	    _T3B7 = e1;
	    _T3B8 = _T3B7->topt;
	    { void * e1_cyc_type = _check_null(_T3B8);
	      void * t = Cyc_Toc_typ_to_c_array(old_typ);
	      _T3BA = is_poly;
	      if (! _T3BA) { goto _TL26A;
	      }
	      _T3B9 = Cyc_Toc_void_star_type();
	      goto _TL26B;
	      _TL26A: _T3B9 = t;
	      _TL26B: { void * res_type = _T3B9;
		Cyc_Toc_exp_to_c(nv,e1);
		_T3BB = is_tagged;
		if (! _T3BB) { goto _TL26C;
		}
		_T3BC = is_read;
		if (! _T3BC) { goto _TL26C;
		}
		_T3BD = e;
		_T3BE = res_type;
		_T3BF = e1;
		_T3C0 = Cyc_Toc_typ_to_c(e1_cyc_type);
		_T3C1 = e1_cyc_type;
		_T3C2 = f;
		_T3C3 = Cyc_Toc_in_lhs(nv);
		_T3BD->r = Cyc_Toc_check_tagged_union(_T3BE,_T3BF,_T3C0,_T3C1,
						      _T3C2,_T3C3,Cyc_Toc_member_exp);
		goto _TL26D;
		_TL26C: _T3C4 = is_tagged;
		if (! _T3C4) { goto _TL26E;
		}
		_T3C5 = e;
		_T3C5->topt = Cyc_Toc_tagged_union_field_struct(e1_cyc_type,
								f);
		goto _TL26F;
		_TL26E: _TL26F: _TL26D: _T3C6 = is_poly;
		if (! _T3C6) { goto _TL270;
		}
		{ struct Cyc_Absyn_Exp * e2 = Cyc_Toc_deep_copy(e);
		  _T3C7 = e2;
		  _T3C7->topt = Cyc_Toc_void_star_type();
		  _T3C8 = e;
		  _T3C8->r = Cyc_Toc_cast_it_r(t,e2);
		  _T3C9 = e;
		  _T3C9->topt = t;
		}goto _TL271;
		_TL270: _TL271: goto _LL7;
	      }
	    }
	  }
	case 22: 
	  { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	    _T5F4 = _T5F6->f3;
	    _T5F3 = _T5F6->f4;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct _fat_ptr * f = _T5F0;
	    long is_tagged = _T5F4;
	    long is_read = _T5F3;
	    long is_poly = Cyc_Toc_is_poly_project(e);
	    _T3CA = e1;
	    _T3CB = _T3CA->topt;
	    { void * e1typ = _check_null(_T3CB);
	      void * ta;
	      void * t = Cyc_Toc_typ_to_c_array(old_typ);
	      _T3CD = is_poly;
	      if (! _T3CD) { goto _TL272;
	      }
	      _T3CC = Cyc_Toc_void_star_type();
	      goto _TL273;
	      _TL272: _T3CC = t;
	      _TL273: { void * res_type = _T3CC;
		{ void * _T5F6 = Cyc_Absyn_compress(e1typ);
		  struct Cyc_Absyn_PtrInfo _T5F7;
		  _T3CE = (int *)_T5F6;
		  _T3CF = *_T3CE;
		  if (_T3CF != 4) { goto _TL274;
		  }
		  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T5F8 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T5F6;
		    _T5F7 = _T5F8->f1;
		  }{ struct Cyc_Absyn_PtrInfo p = _T5F7;
		    _T3D0 = p;
		    ta = _T3D0.elt_type;
		    goto _LLEB;
		  }_TL274: { struct Cyc_Warn_String_Warn_Warg_struct _T5F8;
		    _T5F8.tag = 0;
		    _T5F8.f1 = _tag_fat("get_ptr_typ: not a pointer!",sizeof(char),
					28U);
		    _T3D1 = _T5F8;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F8 = _T3D1;
		    void * _T5F9[1];
		    _T5F9[0] = &_T5F8;
		    { int (* _T5FA)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		      _T3D2 = _T5FA;
		    }_T3D3 = _tag_fat(_T5F9,sizeof(void *),1);
		    _T3D2(_T3D3);
		  }_LLEB: ;
		}did_inserted_checks = 1;
		_T3D4 = nv;
		_T3D5 = e1;
		_T3D6 = e;
		_T3D7 = _T3D6->annot;
		Cyc_Toc_ptr_use_to_c(_T3D4,_T3D5,_T3D7,0);
		_T3D8 = is_tagged;
		if (! _T3D8) { goto _TL276;
		}
		_T3D9 = is_read;
		if (! _T3D9) { goto _TL276;
		}
		_T3DA = e;
		_T3DB = res_type;
		_T3DC = e1;
		_T3DD = Cyc_Toc_typ_to_c(e1typ);
		_T3DE = ta;
		_T3DF = f;
		_T3E0 = Cyc_Toc_in_lhs(nv);
		_T3E1 = Cyc_Absyn_aggrarrow_exp;
		_T3DA->r = Cyc_Toc_check_tagged_union(_T3DB,_T3DC,_T3DD,_T3DE,
						      _T3DF,_T3E0,_T3E1);
		goto _TL277;
		_TL276: _T3E2 = is_tagged;
		if (! _T3E2) { goto _TL278;
		}
		_T3E3 = e;
		_T3E3->topt = Cyc_Toc_tagged_union_field_struct(ta,f);
		goto _TL279;
		_TL278: _TL279: _TL277: _T3E4 = is_poly;
		if (! _T3E4) { goto _TL27A;
		}
		_T3E5 = is_read;
		if (! _T3E5) { goto _TL27A;
		}
		{ struct Cyc_Absyn_Exp * e2 = Cyc_Toc_deep_copy(e);
		  _T3E6 = e2;
		  _T3E6->topt = Cyc_Toc_void_star_type();
		  _T3E7 = e;
		  _T3E7->r = Cyc_Toc_cast_it_r(t,e2);
		  _T3E8 = e;
		  _T3E8->topt = t;
		}goto _TL27B;
		_TL27A: _T3E9 = is_poly;
		if (! _T3E9) { goto _TL27C;
		}
		_T3EA = e;
		_T3EA->topt = Cyc_Toc_void_star_type();
		goto _TL27D;
		_TL27C: _TL27D: _TL27B: goto _LL7;
	      }
	    }
	  }
	case 20: 
	  { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    did_inserted_checks = 1;
	    _T3EB = nv;
	    _T3EC = e1;
	    _T3ED = e;
	    _T3EE = _T3ED->annot;
	    Cyc_Toc_ptr_use_to_c(_T3EB,_T3EC,_T3EE,0);
	    goto _LL7;
	  }
	case 23: 
	  { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    struct Cyc_Absyn_Exp * e2 = _T5F0;
	    did_inserted_checks = 1;
	    _T3EF = nv;
	    _T3F0 = e1;
	    _T3F1 = e;
	    _T3F2 = _T3F1->annot;
	    _T3F3 = e2;
	    { enum Cyc_Toc_PTR_ANS res = Cyc_Toc_ptr_use_to_c(_T3EF,_T3F0,
							      _T3F2,_T3F3);
	      _T3F4 = res;
	      _T3F5 = (int)_T3F4;
	      if (_T3F5 != 0) { goto _TL27E;
	      }
	      _T3F6 = e;
	      _T3F6->r = Cyc_Toc_deref_exp_r(e1);
	      goto _TL27F;
	      _TL27E: _T3F7 = res;
	      _T3F8 = (int)_T3F7;
	      if (_T3F8 != 1) { goto _TL280;
	      }
	      _T3F9 = e;
	      _T3FA = e1;
	      _T3F9->r = _T3FA->r;
	      goto _TL281;
	      _TL280: _TL281: _TL27F: goto _LL7;
	    }
	  }
	case 25: 
	  { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	  }{ struct Cyc_List_List * dles0 = _T5F5;
	    { struct Cyc_List_List * dles = dles0;
	      _TL285: if (dles != 0) { goto _TL283;
	      }else { goto _TL284;
	      }
	      _TL283: _T3FB = nv;
	      _T3FC = dles;
	      _T3FD = _T3FC->hd;
	      _T3FE = (struct _tuple22 *)_T3FD;
	      _T3FF = *_T3FE;
	      _T400 = _T3FF.f1;
	      Cyc_Toc_exp_to_c(_T3FB,_T400);
	      _T401 = dles;
	      dles = _T401->tl;
	      goto _TL285;
	      _TL284: ;
	    }_T402 = Cyc_Toc_is_toplevel(nv);
	    if (! _T402) { goto _TL286;
	    }
	    _T403 = e;
	    _T403->r = Cyc_Toc_unresolvedmem_exp_r(0,dles0);
	    goto _TL287;
	    _TL286: _TL287: goto _LL7;
	  }
	case 26: 
	  { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T5F0 = _T5F6->f2;
	    _T5EF = _T5F6->f3;
	    _T5F4 = _T5F6->f4;
	  }{ struct Cyc_Absyn_Vardecl * vd = _T5F5;
	    struct Cyc_Absyn_Exp * e1 = _T5F0;
	    struct Cyc_Absyn_Exp * e2 = _T5EF;
	    long iszeroterm = _T5F4;
	    Cyc_Toc_exp_to_c(nv,e1);
	    Cyc_Toc_exp_to_c(nv,e2);
	    _T404 = Cyc_Toc_is_toplevel(nv);
	    if (! _T404) { goto _TL288;
	    }
	    { struct _tuple13 _T5F6 = Cyc_Evexp_eval_const_uint_exp(e1);
	      long _T5F7;
	      unsigned int _T5F8;
	      _T5F8 = _T5F6.f0;
	      _T5F7 = _T5F6.f1;
	      { unsigned int sz = _T5F8;
		long known = _T5F7;
		_T405 = e2;
		_T406 = _T405->topt;
		_T407 = _check_null(_T406);
		{ void * elt_typ = Cyc_Toc_typ_to_c(_T407);
		  struct Cyc_List_List * es = 0;
		  _T408 = Cyc_Toc_is_zero(e2);
		  if (_T408) { goto _TL28A;
		  }else { goto _TL28C;
		  }
		  _TL28C: _T409 = known;
		  if (_T409) { goto _TL28D;
		  }else { goto _TL28F;
		  }
		  _TL28F: { struct Cyc_Warn_String_Warn_Warg_struct _T5F9;
		    _T5F9.tag = 0;
		    _T5F9.f1 = _tag_fat("cannot determine value of constant",
					sizeof(char),35U);
		    _T40A = _T5F9;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F9 = _T40A;
		    void * _T5FA[1];
		    _T5FA[0] = &_T5F9;
		    _T40B = e1;
		    _T40C = _T40B->loc;
		    _T40D = _tag_fat(_T5FA,sizeof(void *),1);
		    Cyc_Warn_err2(_T40C,_T40D);
		  }goto _TL28E;
		  _TL28D: _TL28E: { unsigned int i = 0U;
		    _TL293: if (i < sz) { goto _TL291;
		    }else { goto _TL292;
		    }
		    _TL291: { struct Cyc_List_List * _T5F9 = _cycalloc(sizeof(struct Cyc_List_List));
		      { struct _tuple22 * _T5FA = _cycalloc(sizeof(struct _tuple22));
			_T5FA->f0 = 0;
			_T5FA->f1 = e2;
			_T40F = (struct _tuple22 *)_T5FA;
		      }_T5F9->hd = _T40F;
		      _T5F9->tl = es;
		      _T40E = (struct Cyc_List_List *)_T5F9;
		    }es = _T40E;
		    i = i + 1;
		    goto _TL293;
		    _TL292: ;
		  }_T410 = iszeroterm;
		  if (! _T410) { goto _TL294;
		  }
		  _T411 = elt_typ;
		  _T412 = Cyc_Absyn_uint_exp(0U,0U);
		  _T413 = Cyc_Absyn_uint_type;
		  _T414 = Cyc_Absyn_set_type(_T412,_T413);
		  { struct Cyc_Absyn_Exp * ezero = Cyc_Toc_cast_it(_T411,
								   _T414);
		    _T415 = es;
		    { struct Cyc_List_List * _T5F9 = _cycalloc(sizeof(struct Cyc_List_List));
		      { struct _tuple22 * _T5FA = _cycalloc(sizeof(struct _tuple22));
			_T5FA->f0 = 0;
			_T5FA->f1 = ezero;
			_T417 = (struct _tuple22 *)_T5FA;
		      }_T5F9->hd = _T417;
		      _T5F9->tl = 0;
		      _T416 = (struct Cyc_List_List *)_T5F9;
		    }es = Cyc_List_imp_append(_T415,_T416);
		  }goto _TL295;
		  _TL294: _TL295: goto _TL28B;
		  _TL28A: _TL28B: _T418 = e;
		  _T418->r = Cyc_Toc_unresolvedmem_exp_r(0,es);
		}
	      }
	    }goto _TL289;
	    _TL288: _TL289: goto _LL7;
	  }
	case 27: 
	  { struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5F5 = _T5F6->f1;
	    _T419 = _T5F6->f2;
	    _T5F0 = (void *)_T419;
	    _T5F4 = _T5F6->f3;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F5;
	    void * t1 = _T5F0;
	    long iszeroterm = _T5F4;
	    _T41A = Cyc_Toc_is_toplevel(nv);
	    if (! _T41A) { goto _TL296;
	    }
	    _T41B = e;
	    _T41B->r = Cyc_Toc_unresolvedmem_exp_r(0,0);
	    goto _TL297;
	    _TL296: Cyc_Toc_exp_to_c(nv,e1);
	    _TL297: goto _LL7;
	  }
	case 29: 
	  { struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T41C = _T5F6->f1;
	    _T5F5 = (void *)_T41C;
	    _T5EE = _T5F6->f3;
	  }{ void * st = _T5F5;
	    struct Cyc_List_List * dles = _T5EE;
	    { struct Cyc_List_List * dles2 = dles;
	      _TL29B: if (dles2 != 0) { goto _TL299;
	      }else { goto _TL29A;
	      }
	      _TL299: _T41D = nv;
	      _T41E = dles2;
	      _T41F = _T41E->hd;
	      _T420 = (struct _tuple22 *)_T41F;
	      _T421 = *_T420;
	      _T422 = _T421.f1;
	      Cyc_Toc_exp_to_c(_T41D,_T422);
	      _T423 = dles2;
	      dles2 = _T423->tl;
	      goto _TL29B;
	      _TL29A: ;
	    }{ void * strct_typ = Cyc_Toc_typ_to_c(old_typ);
	      _T424 = e;
	      _T424->topt = strct_typ;
	      _T425 = Cyc_Toc_is_toplevel(nv);
	      if (_T425) { goto _TL29C;
	      }else { goto _TL29E;
	      }
	      _TL29E: { void * _T5F6 = Cyc_Absyn_compress(strct_typ);
		union Cyc_Absyn_AggrInfo _T5F7;
		_T426 = (int *)_T5F6;
		_T427 = *_T426;
		if (_T427 != 0) { goto _TL29F;
		}
		_T428 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5F6;
		_T429 = _T428->f1;
		_T42A = (int *)_T429;
		_T42B = *_T42A;
		if (_T42B != 24) { goto _TL2A1;
		}
		_T42C = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5F6;
		_T42D = _T42C->f2;
		if (_T42D != 0) { goto _TL2A3;
		}
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5F8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5F6;
		  _T42E = _T5F8->f1;
		  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T5F9 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T42E;
		    _T5F7 = _T5F9->f1;
		  }
		}{ union Cyc_Absyn_AggrInfo aggrinfo = _T5F7;
		  struct Cyc_Absyn_Aggrdecl * sd = Cyc_Absyn_get_known_aggrdecl(aggrinfo);
		  _T42F = e;
		  { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T5F8 = _cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));
		    _T5F8->tag = 28;
		    _T431 = sd;
		    _T5F8->f1 = _T431->name;
		    _T5F8->f2 = 0;
		    _T5F8->f3 = dles;
		    _T5F8->f4 = sd;
		    _T430 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T5F8;
		  }_T42F->r = (void *)_T430;
		  _T432 = e;
		  _T432->topt = strct_typ;
		  goto _LLF3;
		}_TL2A3: goto _LLF6;
		_TL2A1: goto _LLF6;
		_TL29F: _LLF6: { struct Cyc_Warn_String_Warn_Warg_struct _T5F8;
		  _T5F8.tag = 0;
		  _T5F8.f1 = _tag_fat("anonStruct type not an aggregate",
				      sizeof(char),33U);
		  _T433 = _T5F8;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T5F8 = _T433;
		  void * _T5F9[1];
		  _T5F9[0] = &_T5F8;
		  { int (* _T5FA)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		    _T434 = _T5FA;
		  }_T435 = _tag_fat(_T5F9,sizeof(void *),1);
		  _T434(_T435);
		}_LLF3: ;
	      }goto _TL29D;
	      _TL29C: _T436 = e;
	      _T436->r = Cyc_Toc_unresolvedmem_exp_r(0,dles);
	      _TL29D: goto _LL7;
	    }
	  }
	case 28: 
	  { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T437 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T438 = &_T437->f1;
	    _T5F5 = (struct _tuple1 * *)_T438;
	    _T5EE = _T5F6->f2;
	    _T5EB = _T5F6->f3;
	    _T5EA = _T5F6->f4;
	  }{ struct _tuple1 * * tdn = (struct _tuple1 * *)_T5F5;
	    struct Cyc_List_List * exist_ts = _T5EE;
	    struct Cyc_List_List * dles = _T5EB;
	    struct Cyc_Absyn_Aggrdecl * sd = _T5EA;
	    if (sd == 0) { goto _TL2A7;
	    }else { goto _TL2A8;
	    }
	    _TL2A8: _T439 = sd;
	    _T43A = _T439->impl;
	    if (_T43A == 0) { goto _TL2A7;
	    }else { goto _TL2A5;
	    }
	    _TL2A7: { struct Cyc_Warn_String_Warn_Warg_struct _T5F6;
	      _T5F6.tag = 0;
	      _T5F6.f1 = _tag_fat("exp_to_c, Aggregate_e: missing aggrdecl pointer or fields",
				  sizeof(char),58U);
	      _T43B = _T5F6;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F6 = _T43B;
	      void * _T5F7[1];
	      _T5F7[0] = &_T5F6;
	      { int (* _T5F8)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		_T43C = _T5F8;
	      }_T43D = _tag_fat(_T5F7,sizeof(void *),1);
	      _T43C(_T43D);
	    }goto _TL2A6;
	    _TL2A5: _TL2A6: { void * new_typ = Cyc_Toc_typ_to_c(old_typ);
	      { void * _T5F6 = Cyc_Absyn_compress(new_typ);
		union Cyc_Absyn_AggrInfo _T5F7;
		_T43E = (int *)_T5F6;
		_T43F = *_T43E;
		if (_T43F != 0) { goto _TL2A9;
		}
		_T440 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5F6;
		_T441 = _T440->f1;
		_T442 = (int *)_T441;
		_T443 = *_T442;
		if (_T443 != 24) { goto _TL2AB;
		}
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5F8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5F6;
		  _T444 = _T5F8->f1;
		  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T5F9 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T444;
		    _T5F7 = _T5F9->f1;
		  }
		}{ union Cyc_Absyn_AggrInfo info = _T5F7;
		  _T445 = tdn;
		  _T446 = Cyc_Absyn_aggr_kinded_name(info);
		  *_T445 = _T446.f1;
		  goto _LLF8;
		}_TL2AB: goto _LLFB;
		_TL2A9: _LLFB: { struct Cyc_Warn_String_Warn_Warg_struct _T5F8;
		  _T5F8.tag = 0;
		  _T5F8.f1 = _tag_fat("exp_to_c, Aggregate_e: bad type translation",
				      sizeof(char),44U);
		  _T447 = _T5F8;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T5F8 = _T447;
		  void * _T5F9[1];
		  _T5F9[0] = &_T5F8;
		  { int (* _T5FA)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		    _T448 = _T5FA;
		  }_T449 = _tag_fat(_T5F9,sizeof(void *),1);
		  _T448(_T449);
		}_LLF8: ;
	      }_T44A = sd;
	      _T44B = _T44A->impl;
	      _T44C = _check_null(_T44B);
	      { struct Cyc_List_List * typ_fields = _T44C->fields;
		if (typ_fields != 0) { goto _TL2AD;
		}
		goto _LL7;
		_TL2AD: _TL2B2: _T44D = _check_null(typ_fields);
		_T44E = _T44D->tl;
		if (_T44E != 0) { goto _TL2B0;
		}else { goto _TL2B1;
		}
		_TL2B0: _T44F = typ_fields;
		typ_fields = _T44F->tl;
		goto _TL2B2;
		_TL2B1: _T450 = typ_fields;
		_T451 = _T450->hd;
		{ struct Cyc_Absyn_Aggrfield * last_typ_field = (struct Cyc_Absyn_Aggrfield *)_T451;
		  _T452 = Cyc_Core_heap_region;
		  _T453 = e;
		  _T454 = _T453->loc;
		  _T455 = dles;
		  _T456 = sd;
		  _T457 = _T456->kind;
		  _T458 = sd;
		  _T459 = _T458->impl;
		  _T45A = _T459->fields;
		  { struct Cyc_List_List * fields = Cyc_Tcutil_resolve_aggregate_designators(_T452,
											     _T454,
											     _T455,
											     _T457,
											     _T45A);
		    _T45B = Cyc_Toc_is_toplevel(nv);
		    if (_T45B) { goto _TL2B3;
		    }else { goto _TL2B5;
		    }
		    _TL2B5: loop: { void * _T5F6 = Cyc_Absyn_compress(old_typ);
		      struct Cyc_List_List * _T5F7;
		      struct Cyc_Absyn_Vardecl * _T5F8;
		      _T45C = (int *)_T5F6;
		      _T45D = *_T45C;
		      switch (_T45D) {
		      case 12: 
			{ struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T5F9 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T5F6;
			  _T5F8 = _T5F9->f1;
			}{ struct Cyc_Absyn_Vardecl * vd = _T5F8;
			  _T45E = vd;
			  old_typ = _T45E->type;
			  goto loop;
			}
		      case 0: 
			_T45F = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5F6;
			_T460 = _T45F->f1;
			_T461 = (int *)_T460;
			_T462 = *_T461;
			if (_T462 != 24) { goto _TL2B7;
			}
			{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5F9 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5F6;
			  _T5F7 = _T5F9->f2;
			}{ struct Cyc_List_List * param_ts = _T5F7;
			  { struct Cyc_List_List * fields2 = fields;
			    _TL2BC: if (fields2 != 0) { goto _TL2BA;
			    }else { goto _TL2BB;
			    }
			    _TL2BA: _T463 = fields2;
			    _T464 = _T463->hd;
			    { struct _tuple40 * _T5F9 = (struct _tuple40 *)_T464;
			      struct Cyc_Absyn_Exp * _T5FA;
			      struct Cyc_Absyn_Aggrfield * _T5FB;
			      { struct _tuple40 _T5FC = *_T5F9;
				_T5FB = _T5FC.f0;
				_T5FA = _T5FC.f1;
			      }{ struct Cyc_Absyn_Aggrfield * aggrfield = _T5FB;
				struct Cyc_Absyn_Exp * fieldexp = _T5FA;
				_T465 = fieldexp;
				{ void * old_field_typ = _T465->topt;
				  Cyc_Toc_exp_to_c(nv,fieldexp);
				  _T466 = aggrfield;
				  _T467 = _T466->type;
				  _T468 = Cyc_Toc_is_void_star_or_boxed_tvar(_T467);
				  if (! _T468) { goto _TL2BD;
				  }
				  _T469 = fieldexp;
				  _T46A = _T469->topt;
				  _T46B = _check_null(_T46A);
				  _T46C = Cyc_Toc_is_pointer_or_boxed_tvar(_T46B);
				  if (_T46C) { goto _TL2BD;
				  }else { goto _TL2BF;
				  }
				  _TL2BF: _T46D = aggrfield;
				  _T46E = _T46D->type;
				  { void * t = Cyc_Toc_typ_to_c(_T46E);
				    _T46F = fieldexp;
				    _T470 = t;
				    _T471 = Cyc_Toc_deep_copy(fieldexp);
				    _T472 = Cyc_Toc_cast_it(_T470,_T471);
				    _T46F->r = _T472->r;
				    _T473 = fieldexp;
				    _T473->topt = t;
				  }goto _TL2BE;
				  _TL2BD: _TL2BE: _T474 = sd;
				  _T475 = _T474->impl;
				  _T476 = _T475->tagged;
				  if (! _T476) { goto _TL2C0;
				  }
				  _T477 = aggrfield;
				  { struct _fat_ptr * n = _T477->name;
				    _T478 = Cyc_Toc_get_member_offset(sd,
								      n);
				    _T479 = (unsigned int)_T478;
				    _T47A = Cyc_Absyn_uint_exp(_T479,0U);
				    _T47B = Cyc_Absyn_uint_type;
				    { struct Cyc_Absyn_Exp * tag_exp = Cyc_Absyn_set_type(_T47A,
											  _T47B);
				      struct _tuple22 * tag_dle = Cyc_Toc_make_field(Cyc_Toc_tag_sp,
										     tag_exp);
				      struct _tuple22 * val_dle = Cyc_Toc_make_field(Cyc_Toc_val_sp,
										     fieldexp);
				      struct _tuple1 * s;
				      s = _cycalloc(sizeof(struct _tuple1));
				      _T47C = s;
				      _T47C->f0 = Cyc_Absyn_Abs_n(0,1);
				      _T47D = s;
				      { struct _fat_ptr * _T5FC = _cycalloc(sizeof(struct _fat_ptr));
					{ struct Cyc_String_pa_PrintArg_struct _T5FD;
					  _T5FD.tag = 0;
					  _T481 = sd;
					  _T482 = _T481->name;
					  _T483 = *_T482;
					  _T484 = _T483.f1;
					  _T5FD.f1 = *_T484;
					  _T480 = _T5FD;
					}{ struct Cyc_String_pa_PrintArg_struct _T5FD = _T480;
					  { struct Cyc_String_pa_PrintArg_struct _T5FE;
					    _T5FE.tag = 0;
					    _T486 = n;
					    _T5FE.f1 = *_T486;
					    _T485 = _T5FE;
					  }{ struct Cyc_String_pa_PrintArg_struct _T5FE = _T485;
					    void * _T5FF[2];
					    _T5FF[0] = &_T5FD;
					    _T5FF[1] = &_T5FE;
					    _T487 = _tag_fat("_union_%s_%s",
							     sizeof(char),
							     13U);
					    _T488 = _tag_fat(_T5FF,sizeof(void *),
							     2);
					    _T47F = Cyc_aprintf(_T487,_T488);
					  }
					}*_T5FC = _T47F;
					_T47E = (struct _fat_ptr *)_T5FC;
				      }_T47D->f1 = _T47E;
				      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T5FC = _cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));
					_T5FC->tag = 28;
					_T5FC->f1 = s;
					_T5FC->f2 = 0;
					{ struct _tuple22 * _T5FD[2];
					  _T5FD[0] = tag_dle;
					  _T5FD[1] = val_dle;
					  _T48B = _tag_fat(_T5FD,sizeof(struct _tuple22 *),
							   2);
					  _T48A = Cyc_List_list(_T48B);
					}_T5FC->f3 = _T48A;
					_T5FC->f4 = 0;
					_T489 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T5FC;
				      }_T48C = (void *)_T489;
				      { struct Cyc_Absyn_Exp * aggr_exp = Cyc_Absyn_new_exp(_T48C,
											    0U);
					_T48D = aggr_exp;
					_T48E = Cyc_Toc_tagged_union_field_struct(old_typ,
										  n);
					Cyc_Absyn_set_type(_T48D,_T48E);
					{ struct _tuple22 * u_dle = Cyc_Toc_make_field(n,
										       aggr_exp);
					  _T48F = e;
					  { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T5FC = _cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));
					    _T5FC->tag = 28;
					    _T491 = tdn;
					    _T5FC->f1 = *_T491;
					    _T5FC->f2 = 0;
					    { struct _tuple22 * _T5FD[1];
					      _T5FD[0] = u_dle;
					      _T493 = _tag_fat(_T5FD,sizeof(struct _tuple22 *),
							       1);
					      _T492 = Cyc_List_list(_T493);
					    }_T5FC->f3 = _T492;
					    _T5FC->f4 = sd;
					    _T490 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T5FC;
					  }_T48F->r = (void *)_T490;
					}
				      }
				    }
				  }goto _TL2C1;
				  _TL2C0: _TL2C1: _T494 = Cyc_Toc_is_abstract_type(old_typ);
				  if (! _T494) { goto _TL2C2;
				  }
				  if (last_typ_field != aggrfield) { goto _TL2C2;
				  }
				  _T495 = sd;
				  _T496 = _T495->impl;
				  _T497 = _check_null(_T496);
				  _T498 = _T497->exist_vars;
				  _T499 = exist_ts;
				  _T49A = Cyc_List_zip(_T498,_T499);
				  _T49B = sd;
				  _T49C = _T49B->tvs;
				  _T49D = param_ts;
				  _T49E = Cyc_List_zip(_T49C,_T49D);
				  { struct Cyc_List_List * inst = Cyc_List_append(_T49A,
										  _T49E);
				    struct Cyc_List_List * new_fields = 0;
				    _T49F = sd;
				    _T4A0 = _T49F->impl;
				    _T4A1 = _check_null(_T4A0);
				    { struct Cyc_List_List * fs = _T4A1->fields;
				      _TL2C7: if (fs != 0) { goto _TL2C5;
				      }else { goto _TL2C6;
				      }
				      _TL2C5: _T4A2 = fs;
				      _T4A3 = _T4A2->hd;
				      { struct Cyc_Absyn_Aggrfield * old_f = (struct Cyc_Absyn_Aggrfield *)_T4A3;
					_T4A4 = inst;
					_T4A5 = old_f;
					_T4A6 = _T4A5->type;
					{ void * old_ftyp = Cyc_Tcutil_substitute(_T4A4,
										  _T4A6);
					  _T4A7 = old_f;
					  _T4A8 = Cyc_Tcutil_substitute(inst,
									old_ftyp);
					  _T4A9 = Cyc_Toc_typ_to_c(_T4A8);
					  { struct Cyc_Absyn_Aggrfield * new_f = Cyc_Toc_aggrfield_to_c(_T4A7,
													_T4A9);
					    { struct Cyc_List_List * _T5FC = _cycalloc(sizeof(struct Cyc_List_List));
					      _T5FC->hd = new_f;
					      _T5FC->tl = new_fields;
					      _T4AA = (struct Cyc_List_List *)_T5FC;
					    }new_fields = _T4AA;
					    _T4AB = fs;
					    _T4AC = _T4AB->tl;
					    if (_T4AC != 0) { goto _TL2C8;
					    }
					    _T4AD = new_f;
					    _T4AE = _T4AD->type;
					    { void * _T5FC = Cyc_Absyn_compress(_T4AE);
					      struct Cyc_Absyn_ArrayInfo _T5FD;
					      _T4AF = (int *)_T5FC;
					      _T4B0 = *_T4AF;
					      if (_T4B0 != 5) { goto _TL2CA;
					      }
					      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T5FE = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T5FC;
						_T5FD = _T5FE->f1;
					      }{ struct Cyc_Absyn_ArrayInfo ai = _T5FD;
						_T4B1 = ai;
						_T4B2 = _T4B1.num_elts;
						_T4B3 = _check_null(_T4B2);
						_T4B4 = Cyc_Evexp_c_can_eval(_T4B3);
						if (_T4B4) { goto _TL2CC;
						}else { goto _TL2CE;
						}
						_TL2CE: { struct Cyc_Absyn_ArrayInfo ai2 = ai;
						  _T4B5 = Cyc_Absyn_uint_exp(0U,
									     0U);
						  _T4B6 = Cyc_Absyn_uint_type;
						  ai2.num_elts = Cyc_Absyn_set_type(_T4B5,
										    _T4B6);
						  _T4B7 = new_f;
						  { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T5FE = _cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));
						    _T5FE->tag = 5;
						    _T5FE->f1 = ai2;
						    _T4B8 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T5FE;
						  }_T4B7->type = (void *)_T4B8;
						}goto _TL2CD;
						_TL2CC: _TL2CD: goto _LL107;
					      }_TL2CA: _T4B9 = fieldexp;
					      _T4BA = _T4B9->topt;
					      if (_T4BA != 0) { goto _TL2CF;
					      }
					      goto _LL107;
					      _TL2CF: _T4BB = fieldexp;
					      _T4BC = _T4BB->topt;
					      { void * _T5FE = Cyc_Absyn_compress(_T4BC);
						_T4BD = (int *)_T5FE;
						_T4BE = *_T4BD;
						if (_T4BE != 0) { goto _TL2D1;
						}
						_T4BF = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5FE;
						_T4C0 = _T4BF->f1;
						_T4C1 = (int *)_T4C0;
						_T4C2 = *_T4C1;
						if (_T4C2 != 24) { goto _TL2D3;
						}
						_T4C3 = new_f;
						_T4C4 = fieldexp;
						_T4C5 = _T4C4->topt;
						_T4C3->type = _check_null(_T4C5);
						goto _LL10C;
						_TL2D3: goto _LL10F;
						_TL2D1: _LL10F: goto _LL10C;
						_LL10C: ;
					      }goto _LL107;
					      _LL107: ;
					    }_T4C6 = old_f;
					    _T4C7 = _T4C6->type;
					    _T4C8 = Cyc_Tcutil_is_array_type(_T4C7);
					    if (_T4C8) { goto _TL2D5;
					    }else { goto _TL2D7;
					    }
					    _TL2D7: _T4C9 = &Cyc_Kinds_ak;
					    _T4CA = (struct Cyc_Absyn_Kind *)_T4C9;
					    _T4CB = old_f;
					    _T4CC = _T4CB->type;
					    _T4CD = Cyc_Tcutil_type_kind(_T4CC);
					    _T4CE = Cyc_Kinds_kind_leq(_T4CA,
								       _T4CD);
					    if (! _T4CE) { goto _TL2D5;
					    }
					    _T4CF = new_f;
					    { struct Cyc_List_List * _T5FC = _cycalloc(sizeof(struct Cyc_List_List));
					      { struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T5FD = _cycalloc(sizeof(struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct));
						_T5FD->tag = 7;
						_T5FD->f1 = 0;
						_T4D1 = (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct *)_T5FD;
					      }_T5FC->hd = (void *)_T4D1;
					      _T4D2 = new_f;
					      _T5FC->tl = _T4D2->attributes;
					      _T4D0 = (struct Cyc_List_List *)_T5FC;
					    }_T4CF->attributes = _T4D0;
					    goto _TL2D6;
					    _TL2D5: _TL2D6: goto _TL2C9;
					    _TL2C8: _TL2C9: ;
					  }
					}
				      }_T4D3 = fs;
				      fs = _T4D3->tl;
				      goto _TL2C7;
				      _TL2C6: ;
				    }{ struct _fat_ptr * _T5FC = _cycalloc(sizeof(struct _fat_ptr));
				      { struct Cyc_Int_pa_PrintArg_struct _T5FD;
					_T5FD.tag = 1;
					_T4D7 = Cyc_Toc_tuple_type_counter;
					Cyc_Toc_tuple_type_counter = _T4D7 + 1;
					_T4D8 = _T4D7;
					_T5FD.f1 = (unsigned long)_T4D8;
					_T4D6 = _T5FD;
				      }{ struct Cyc_Int_pa_PrintArg_struct _T5FD = _T4D6;
					void * _T5FE[1];
					_T5FE[0] = &_T5FD;
					_T4D9 = _tag_fat("_genStruct%d",sizeof(char),
							 13U);
					_T4DA = _tag_fat(_T5FE,sizeof(void *),
							 1);
					_T4D5 = Cyc_aprintf(_T4D9,_T4DA);
				      }*_T5FC = _T4D5;
				      _T4D4 = (struct _fat_ptr *)_T5FC;
				    }_T4DB = Cyc_List_imp_rev(new_fields);
				    sd = Cyc_Toc_make_c_struct_defn(_T4D4,
								    _T4DB);
				    _T4DC = tdn;
				    _T4DD = sd;
				    *_T4DC = _T4DD->name;
				    Cyc_Toc_aggrdecl_to_c(sd);
				    _T4DE = e;
				    { struct Cyc_Absyn_Aggrdecl * * _T5FC = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl *));
				      *_T5FC = sd;
				      _T4DF = (struct Cyc_Absyn_Aggrdecl * *)_T5FC;
				    }_T4E0 = Cyc_Absyn_KnownAggr(_T4DF);
				    _T4DE->topt = Cyc_Absyn_aggr_type(_T4E0,
								      0);
				  }goto _TL2C3;
				  _TL2C2: _TL2C3: ;
				}
			      }
			    }_T4E1 = fields2;
			    fields2 = _T4E1->tl;
			    goto _TL2BC;
			    _TL2BB: ;
			  }goto _LLFD;
			}_TL2B7: goto _LL102;
		      default: 
			_LL102: { struct Cyc_Warn_String_Warn_Warg_struct _T5F9;
			  _T5F9.tag = 0;
			  _T5F9.f1 = _tag_fat("exp_to_c, Aggregate_e: bad struct type",
					      sizeof(char),39U);
			  _T4E2 = _T5F9;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T5F9 = _T4E2;
			  void * _T5FA[1];
			  _T5FA[0] = &_T5F9;
			  { int (* _T5FB)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
			    _T4E3 = _T5FB;
			  }_T4E4 = _tag_fat(_T5FA,sizeof(void *),1);
			  _T4E3(_T4E4);
			}
		      }
		      _LLFD: ;
		    }goto _TL2B4;
		    _TL2B3: _T4E5 = sd;
		    _T4E6 = _T4E5->impl;
		    _T4E7 = _check_null(_T4E6);
		    _T4E8 = _T4E7->tagged;
		    if (! _T4E8) { goto _TL2D8;
		    }
		    _T4E9 = _check_null(fields);
		    _T4EA = _T4E9->hd;
		    { struct _tuple40 * _T5F6 = (struct _tuple40 *)_T4EA;
		      struct Cyc_Absyn_Exp * _T5F7;
		      struct Cyc_Absyn_Aggrfield * _T5F8;
		      { struct _tuple40 _T5F9 = *_T5F6;
			_T5F8 = _T5F9.f0;
			_T5F7 = _T5F9.f1;
		      }{ struct Cyc_Absyn_Aggrfield * field = _T5F8;
			struct Cyc_Absyn_Exp * fieldexp = _T5F7;
			_T4EB = fieldexp;
			_T4EC = _T4EB->topt;
			{ void * fieldexp_type = _check_null(_T4EC);
			  _T4ED = field;
			  { void * fieldtyp = _T4ED->type;
			    Cyc_Toc_exp_to_c(nv,fieldexp);
			    _T4EE = Cyc_Toc_is_void_star_or_boxed_tvar(fieldtyp);
			    if (! _T4EE) { goto _TL2DA;
			    }
			    _T4EF = Cyc_Toc_is_void_star_or_boxed_tvar(fieldexp_type);
			    if (_T4EF) { goto _TL2DA;
			    }else { goto _TL2DC;
			    }
			    _TL2DC: _T4F0 = fieldexp;
			    _T4F1 = Cyc_Toc_void_star_type();
			    _T4F2 = Cyc_Toc_deep_copy(fieldexp);
			    _T4F0->r = Cyc_Toc_cast_it_r(_T4F1,_T4F2);
			    goto _TL2DB;
			    _TL2DA: _TL2DB: _T4F3 = sd;
			    _T4F4 = field;
			    _T4F5 = _T4F4->name;
			    { int i = Cyc_Toc_get_member_offset(_T4F3,_T4F5);
			      _T4F6 = Cyc_Absyn_signed_int_exp(i,0U);
			      _T4F7 = Cyc_Absyn_sint_type;
			      { struct Cyc_Absyn_Exp * field_tag_exp = Cyc_Absyn_set_type(_T4F6,
											  _T4F7);
				{ struct _tuple22 * _T5F9[2];
				  { struct _tuple22 * _T5FA = _cycalloc(sizeof(struct _tuple22));
				    _T5FA->f0 = 0;
				    _T5FA->f1 = field_tag_exp;
				    _T4F9 = (struct _tuple22 *)_T5FA;
				  }_T5F9[0] = _T4F9;
				  { struct _tuple22 * _T5FA = _cycalloc(sizeof(struct _tuple22));
				    _T5FA->f0 = 0;
				    _T5FA->f1 = fieldexp;
				    _T4FA = (struct _tuple22 *)_T5FA;
				  }_T5F9[1] = _T4FA;
				  _T4FB = _tag_fat(_T5F9,sizeof(struct _tuple22 *),
						   2);
				  _T4F8 = Cyc_List_list(_T4FB);
				}{ struct Cyc_List_List * newdles = _T4F8;
				  struct Cyc_Absyn_Exp * umem = Cyc_Absyn_unresolvedmem_exp(0,
											    newdles,
											    0U);
				  _T4FC = e;
				  { struct _tuple22 * _T5F9[1];
				    _T4FE = field;
				    _T4FF = _T4FE->name;
				    _T500 = umem;
				    _T5F9[0] = Cyc_Toc_make_field(_T4FF,_T500);
				    _T501 = _tag_fat(_T5F9,sizeof(struct _tuple22 *),
						     1);
				    _T4FD = Cyc_List_list(_T501);
				  }_T4FC->r = Cyc_Toc_unresolvedmem_exp_r(0,
									  _T4FD);
				}
			      }
			    }
			  }
			}
		      }
		    }goto _TL2D9;
		    _TL2D8: { struct Cyc_List_List * newdles = 0;
		      _T502 = sd;
		      _T503 = _T502->impl;
		      { struct Cyc_List_List * sdfields = _T503->fields;
			_TL2E0: if (sdfields != 0) { goto _TL2DE;
			}else { goto _TL2DF;
			}
			_TL2DE: { struct Cyc_List_List * fields2 = fields;
			  _TL2E4: if (fields2 != 0) { goto _TL2E2;
			  }else { goto _TL2E3;
			  }
			  _TL2E2: _T504 = fields2;
			  _T505 = _T504->hd;
			  _T506 = (struct _tuple40 *)_T505;
			  _T507 = *_T506;
			  _T508 = _T507.f0;
			  _T509 = sdfields;
			  _T50A = _T509->hd;
			  _T50B = (struct Cyc_Absyn_Aggrfield *)_T50A;
			  if (_T508 != _T50B) { goto _TL2E5;
			  }
			  _T50C = fields2;
			  _T50D = _T50C->hd;
			  { struct _tuple40 * _T5F6 = (struct _tuple40 *)_T50D;
			    struct Cyc_Absyn_Exp * _T5F7;
			    struct Cyc_Absyn_Aggrfield * _T5F8;
			    { struct _tuple40 _T5F9 = *_T5F6;
			      _T5F8 = _T5F9.f0;
			      _T5F7 = _T5F9.f1;
			    }{ struct Cyc_Absyn_Aggrfield * field = _T5F8;
			      struct Cyc_Absyn_Exp * fieldexp = _T5F7;
			      _T50E = field;
			      _T50F = _T50E->type;
			      { void * fieldtyp = Cyc_Toc_typ_to_c(_T50F);
				_T510 = fieldexp;
				_T511 = _T510->topt;
				_T512 = _check_null(_T511);
				{ void * fieldexp_typ = Cyc_Toc_typ_to_c(_T512);
				  Cyc_Toc_exp_to_c(nv,fieldexp);
				  _T513 = Cyc_Unify_unify(fieldtyp,Cyc_Absyn_void_type);
				  if (_T513) { goto _TL2E7;
				  }else { goto _TL2E9;
				  }
				  _TL2E9: _T514 = Cyc_Unify_unify(fieldtyp,
								  fieldexp_typ);
				  if (_T514) { goto _TL2E7;
				  }else { goto _TL2EA;
				  }
				  _TL2EA: _T515 = Cyc_Tcutil_is_arithmetic_type(fieldtyp);
				  if (_T515) { goto _TL2EE;
				  }else { goto _TL2ED;
				  }
				  _TL2EE: _T516 = Cyc_Tcutil_is_arithmetic_type(fieldexp_typ);
				  if (_T516) { goto _TL2EB;
				  }else { goto _TL2ED;
				  }
				  _TL2ED: _T517 = fieldtyp;
				  _T518 = Cyc_Toc_deep_copy(fieldexp);
				  fieldexp = Cyc_Toc_cast_it(_T517,_T518);
				  goto _TL2EC;
				  _TL2EB: _TL2EC: goto _TL2E8;
				  _TL2E7: _TL2E8: { struct Cyc_List_List * _T5F9 = _cycalloc(sizeof(struct Cyc_List_List));
				    { struct _tuple22 * _T5FA = _cycalloc(sizeof(struct _tuple22));
				      _T5FA->f0 = 0;
				      _T5FA->f1 = fieldexp;
				      _T51A = (struct _tuple22 *)_T5FA;
				    }_T5F9->hd = _T51A;
				    _T5F9->tl = newdles;
				    _T519 = (struct Cyc_List_List *)_T5F9;
				  }newdles = _T519;
				  goto _TL2E3;
				}
			      }
			    }
			  }_TL2E5: _T51B = fields2;
			  fields2 = _T51B->tl;
			  goto _TL2E4;
			  _TL2E3: ;
			}_T51C = sdfields;
			sdfields = _T51C->tl;
			goto _TL2E0;
			_TL2DF: _T51D = e;
			_T51E = Cyc_List_imp_rev(newdles);
			_T51D->r = Cyc_Toc_unresolvedmem_exp_r(0,_T51E);
		      }
		    }_TL2D9: _TL2B4: goto _LL7;
		  }
		}
	      }
	    }
	  }
	case 30: 
	  { struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5EE = _T5F6->f1;
	    _T5E9 = _T5F6->f2;
	    _T5E8 = _T5F6->f3;
	  }{ struct Cyc_List_List * es = _T5EE;
	    struct Cyc_Absyn_Datatypedecl * tud = _T5E9;
	    struct Cyc_Absyn_Datatypefield * tuf = _T5E8;
	    _T51F = tuf;
	    { struct Cyc_List_List * tqts = _T51F->typs;
	      { struct Cyc_List_List * es2 = es;
		_TL2F2: if (es2 != 0) { goto _TL2F0;
		}else { goto _TL2F1;
		}
		_TL2F0: _T520 = es2;
		_T521 = _T520->hd;
		{ struct Cyc_Absyn_Exp * cur_e = (struct Cyc_Absyn_Exp *)_T521;
		  _T522 = cur_e;
		  _T523 = _T522->topt;
		  { void * cur_e_typ = _check_null(_T523);
		    _T524 = _check_null(tqts);
		    _T525 = _T524->hd;
		    _T526 = (struct _tuple26 *)_T525;
		    _T527 = *_T526;
		    _T528 = _T527.f1;
		    { void * field_typ = Cyc_Toc_typ_to_c(_T528);
		      Cyc_Toc_exp_to_c(nv,cur_e);
		      _T529 = Cyc_Toc_is_void_star_or_boxed_tvar(field_typ);
		      if (! _T529) { goto _TL2F3;
		      }
		      _T52A = Cyc_Toc_is_pointer_or_boxed_tvar(cur_e_typ);
		      if (_T52A) { goto _TL2F3;
		      }else { goto _TL2F5;
		      }
		      _TL2F5: _T52B = cur_e;
		      _T52C = field_typ;
		      _T52D = Cyc_Toc_deep_copy(cur_e);
		      _T52E = Cyc_Toc_cast_it(_T52C,_T52D);
		      _T52B->r = _T52E->r;
		      goto _TL2F4;
		      _TL2F3: _TL2F4: ;
		    }
		  }
		}_T52F = es2;
		es2 = _T52F->tl;
		_T530 = tqts;
		tqts = _T530->tl;
		goto _TL2F2;
		_TL2F1: ;
	      }_T532 = tud;
	      _T533 = _T532->is_extensible;
	      if (! _T533) { goto _TL2F6;
	      }
	      _T534 = tuf;
	      _T535 = _T534->name;
	      _T536 = Cyc_Absyn_var_exp(_T535,0U);
	      _T537 = Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq);
	      _T531 = Cyc_Absyn_set_type(_T536,_T537);
	      goto _TL2F7;
	      _TL2F6: _T538 = tud;
	      _T539 = tuf;
	      _T53A = _T539->name;
	      _T531 = Cyc_Toc_datatype_tag(_T538,_T53A);
	      _TL2F7: { struct Cyc_Absyn_Exp * tag_exp = _T531;
		_T53B = Cyc_Toc_is_toplevel(nv);
		if (_T53B) { goto _TL2F8;
		}else { goto _TL2FA;
		}
		_TL2FA: { struct Cyc_List_List * dles = 0;
		  { int i = 1;
		    _TL2FE: if (es != 0) { goto _TL2FC;
		    }else { goto _TL2FD;
		    }
		    _TL2FC: { struct Cyc_List_List * _T5F6 = _cycalloc(sizeof(struct Cyc_List_List));
		      _T53D = Cyc_Absyn_fieldname(i);
		      _T53E = es;
		      _T53F = _T53E->hd;
		      _T540 = (struct Cyc_Absyn_Exp *)_T53F;
		      _T5F6->hd = Cyc_Toc_make_field(_T53D,_T540);
		      _T5F6->tl = dles;
		      _T53C = (struct Cyc_List_List *)_T5F6;
		    }dles = _T53C;
		    _T541 = es;
		    es = _T541->tl;
		    i = i + 1;
		    goto _TL2FE;
		    _TL2FD: ;
		  }{ struct _tuple22 * tag_dle = Cyc_Toc_make_field(Cyc_Toc_tag_sp,
								    tag_exp);
		    _T542 = e;
		    { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T5F6 = _cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));
		      _T5F6->tag = 28;
		      _T544 = tuf;
		      _T545 = _T544->name;
		      _T546 = tud;
		      _T547 = _T546->name;
		      _T5F6->f1 = Cyc_Toc_collapse_qvars(_T545,_T547);
		      _T5F6->f2 = 0;
		      { struct Cyc_List_List * _T5F7 = _cycalloc(sizeof(struct Cyc_List_List));
			_T5F7->hd = tag_dle;
			_T5F7->tl = Cyc_List_imp_rev(dles);
			_T548 = (struct Cyc_List_List *)_T5F7;
		      }_T5F6->f3 = _T548;
		      _T5F6->f4 = 0;
		      _T543 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T5F6;
		    }_T542->r = (void *)_T543;
		  }
		}goto _TL2F9;
		_TL2F8: { struct Cyc_List_List * dles = 0;
		  _TL302: if (es != 0) { goto _TL300;
		  }else { goto _TL301;
		  }
		  _TL300: { struct Cyc_List_List * _T5F6 = _cycalloc(sizeof(struct Cyc_List_List));
		    { struct _tuple22 * _T5F7 = _cycalloc(sizeof(struct _tuple22));
		      _T5F7->f0 = 0;
		      _T54B = es;
		      _T54C = _T54B->hd;
		      _T5F7->f1 = (struct Cyc_Absyn_Exp *)_T54C;
		      _T54A = (struct _tuple22 *)_T5F7;
		    }_T5F6->hd = _T54A;
		    _T5F6->tl = dles;
		    _T549 = (struct Cyc_List_List *)_T5F6;
		  }dles = _T549;
		  _T54D = es;
		  es = _T54D->tl;
		  goto _TL302;
		  _TL301: _T54E = e;
		  { struct Cyc_List_List * _T5F6 = _cycalloc(sizeof(struct Cyc_List_List));
		    { struct _tuple22 * _T5F7 = _cycalloc(sizeof(struct _tuple22));
		      _T5F7->f0 = 0;
		      _T5F7->f1 = tag_exp;
		      _T550 = (struct _tuple22 *)_T5F7;
		    }_T5F6->hd = _T550;
		    _T5F6->tl = Cyc_List_imp_rev(dles);
		    _T54F = (struct Cyc_List_List *)_T5F6;
		  }_T54E->r = Cyc_Toc_unresolvedmem_exp_r(0,_T54F);
		}_TL2F9: goto _LL7;
	      }
	    }
	  }
	case 31: 
	  goto _LL51;
	case 32: 
	  _LL51: goto _LL7;
	case 33: 
	  { struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T551 = _T5F6->f1;
	    _T5E7 = _T551.mknd;
	    _T552 = _T5F6->f1;
	    _T5EF = _T552.rgn;
	    _T553 = _T5F6->f1;
	    _T5E6 = _T553.aqual;
	    _T554 = _T5F6->f1;
	    _T5E5 = _T554.elt_type;
	    _T555 = _T5F6->f1;
	    _T5E4 = _T555.num_elts;
	    _T556 = _T5F6->f1;
	    _T5F4 = _T556.fat_result;
	    _T557 = _T5F6->f1;
	    _T5F3 = _T557.inline_call;
	  }{ enum Cyc_Absyn_MallocKind mknd = _T5E7;
	    struct Cyc_Absyn_Exp * rgnopt = _T5EF;
	    struct Cyc_Absyn_Exp * aqopt = _T5E6;
	    void * * topt = _T5E5;
	    struct Cyc_Absyn_Exp * num_elts = _T5E4;
	    long is_fat = _T5F4;
	    long inline_call = _T5F3;
	    _T558 = _check_null(topt);
	    _T559 = *_T558;
	    { void * t_c = Cyc_Toc_typ_to_c(_T559);
	      Cyc_Toc_exp_to_c(nv,num_elts);
	      { struct _tuple1 * x = 0;
		struct Cyc_Absyn_Exp * pexp;
		struct Cyc_Absyn_Exp * num_elts2 = num_elts;
		_T55A = is_fat;
		if (! _T55A) { goto _TL303;
		}
		x = Cyc_Toc_temp_var();
		num_elts2 = Cyc_Absyn_var_exp(x,0U);
		goto _TL304;
		_TL303: _TL304: _T55B = mknd;
		_T55C = (int)_T55B;
		if (_T55C != 1) { goto _TL305;
		}
		if (rgnopt == 0) { goto _TL30B;
		}else { goto _TL30A;
		}
		_TL30B: if (aqopt == 0) { goto _TL309;
		}else { goto _TL30A;
		}
		_TL30A: _T55D = Cyc_Flags_no_regions;
		if (_T55D) { goto _TL309;
		}else { goto _TL307;
		}
		_TL309: _T55E = topt;
		_T55F = *_T55E;
		_T560 = Cyc_Absyn_sizeoftype_exp(t_c,0U);
		_T561 = Cyc_Absyn_uint_type;
		_T562 = Cyc_Absyn_set_type(_T560,_T561);
		_T563 = num_elts2;
		pexp = Cyc_Toc_calloc_exp(_T55F,_T562,_T563);
		goto _TL308;
		_TL307: if (aqopt == 0) { goto _TL30C;
		}
		Cyc_Toc_exp_to_c(nv,aqopt);
		goto _TL30D;
		_TL30C: _TL30D: if (rgnopt == 0) { goto _TL30E;
		}
		Cyc_Toc_exp_to_c(nv,rgnopt);
		_T564 = rgnopt;
		if (aqopt != 0) { goto _TL310;
		}
		_T565 = Cyc_Toc_aliasable_qual_exp();
		goto _TL311;
		_TL310: _T565 = aqopt;
		_TL311: _T566 = Cyc_Absyn_sizeoftype_exp(t_c,0U);
		_T567 = Cyc_Absyn_uint_type;
		_T568 = Cyc_Absyn_set_type(_T566,_T567);
		_T569 = num_elts2;
		pexp = Cyc_Toc_rcalloc_exp(_T564,_T565,_T568,_T569);
		goto _TL30F;
		_TL30E: _T56A = aqopt;
		_T56B = Cyc_Absyn_sizeoftype_exp(t_c,0U);
		_T56C = Cyc_Absyn_uint_type;
		_T56D = Cyc_Absyn_set_type(_T56B,_T56C);
		_T56E = num_elts2;
		pexp = Cyc_Toc_aqcalloc_exp(_T56A,_T56D,_T56E);
		_TL30F: _TL308: goto _TL306;
		_TL305: if (rgnopt == 0) { goto _TL316;
		}else { goto _TL315;
		}
		_TL316: if (aqopt == 0) { goto _TL314;
		}else { goto _TL315;
		}
		_TL315: _T56F = Cyc_Flags_no_regions;
		if (_T56F) { goto _TL314;
		}else { goto _TL312;
		}
		_TL314: _T570 = topt;
		_T571 = *_T570;
		_T572 = num_elts2;
		pexp = Cyc_Toc_malloc_exp(_T571,_T572);
		goto _TL313;
		_TL312: if (aqopt == 0) { goto _TL317;
		}
		Cyc_Toc_exp_to_c(nv,aqopt);
		goto _TL318;
		_TL317: _TL318: if (rgnopt == 0) { goto _TL319;
		}
		Cyc_Toc_exp_to_c(nv,rgnopt);
		_T573 = mknd;
		_T574 = (int)_T573;
		if (_T574 != 2) { goto _TL31B;
		}
		pexp = Cyc_Toc_rvmalloc_exp(rgnopt,num_elts2);
		goto _TL31C;
		_TL31B: _T576 = inline_call;
		if (! _T576) { goto _TL31D;
		}
		_T575 = Cyc_Toc_rmalloc_inline_exp;
		goto _TL31E;
		_TL31D: _T575 = Cyc_Toc_rmalloc_exp;
		_TL31E: { struct Cyc_Absyn_Exp * (* fn_e)(struct Cyc_Absyn_Exp *,
							  struct Cyc_Absyn_Exp *,
							  struct Cyc_Absyn_Exp *) = _T575;
		  _T577 = rgnopt;
		  if (aqopt != 0) { goto _TL31F;
		  }
		  _T578 = Cyc_Toc_aliasable_qual_exp();
		  goto _TL320;
		  _TL31F: _T578 = aqopt;
		  _TL320: _T579 = num_elts2;
		  pexp = fn_e(_T577,_T578,_T579);
		}_TL31C: goto _TL31A;
		_TL319: pexp = Cyc_Toc_aqmalloc_exp(aqopt,num_elts2);
		_TL31A: _TL313: _TL306: _T57A = is_fat;
		if (! _T57A) { goto _TL321;
		}
		_T57C = mknd;
		_T57D = (int)_T57C;
		if (_T57D != 1) { goto _TL323;
		}
		_T57E = Cyc_Absyn_sizeoftype_exp(t_c,0U);
		_T57F = Cyc_Absyn_uint_type;
		_T57B = Cyc_Absyn_set_type(_T57E,_T57F);
		goto _TL324;
		_TL323: _T580 = Cyc_Absyn_uint_exp(1U,0U);
		_T581 = Cyc_Absyn_uint_type;
		_T57B = Cyc_Absyn_set_type(_T580,_T581);
		_TL324: { struct Cyc_Absyn_Exp * elt_sz = _T57B;
		  { struct Cyc_Absyn_Exp * _T5F6[3];
		    _T5F6[0] = pexp;
		    _T5F6[1] = elt_sz;
		    _T5F6[2] = num_elts2;
		    _T583 = Cyc_Toc__tag_fat_e;
		    _T584 = _tag_fat(_T5F6,sizeof(struct Cyc_Absyn_Exp *),
				     3);
		    _T582 = Cyc_Toc_fncall_exp_dl(_T583,_T584);
		  }{ struct Cyc_Absyn_Exp * rexp = _T582;
		    _T585 = rexp;
		    _T585->topt = Cyc_Toc_fat_ptr_type();
		    _T586 = x;
		    _T587 = Cyc_Absyn_uint_type;
		    _T588 = num_elts;
		    _T589 = Cyc_Absyn_exp_stmt(rexp,0U);
		    { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_declare_stmt(_T586,
									 _T587,
									 _T588,
									 _T589,
									 0U);
		      _T58A = e;
		      _T58A->r = Cyc_Toc_stmt_exp_r(s);
		    }
		  }
		}goto _TL322;
		_TL321: _T58B = e;
		_T58C = Cyc_Toc_typ_to_c(old_typ);
		_T58D = pexp;
		_T58B->r = Cyc_Toc_cast_it_r(_T58C,_T58D);
		_TL322: goto _LL7;
	      }
	    }
	  }
	case 34: 
	  { struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5EF = _T5F6->f1;
	    _T5E6 = _T5F6->f2;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5EF;
	    struct Cyc_Absyn_Exp * e2 = _T5E6;
	    _T58E = e1;
	    _T58F = _T58E->topt;
	    { void * e1_old_typ = _check_null(_T58F);
	      _T590 = e2;
	      _T591 = _T590->topt;
	      { void * e2_old_typ = _check_null(_T591);
		_T592 = Cyc_Tcutil_is_boxed(e1_old_typ);
		if (_T592) { goto _TL325;
		}else { goto _TL327;
		}
		_TL327: _T593 = Cyc_Tcutil_is_pointer_type(e1_old_typ);
		if (_T593) { goto _TL325;
		}else { goto _TL328;
		}
		_TL328: { struct Cyc_Warn_String_Warn_Warg_struct _T5F6;
		  _T5F6.tag = 0;
		  _T5F6.f1 = _tag_fat("Swap_e: is_pointer_or_boxed: not a pointer or boxed type",
				      sizeof(char),57U);
		  _T594 = _T5F6;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T5F6 = _T594;
		  void * _T5F7[1];
		  _T5F7[0] = &_T5F6;
		  { int (* _T5F8)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		    _T595 = _T5F8;
		  }_T596 = _tag_fat(_T5F7,sizeof(void *),1);
		  _T595(_T596);
		}goto _TL326;
		_TL325: _TL326: _T597 = e;
		{ unsigned int loc = _T597->loc;
		  struct _tuple1 * v1 = Cyc_Toc_temp_var();
		  struct Cyc_Absyn_Exp * v1e = Cyc_Absyn_var_exp(v1,loc);
		  _T598 = v1e;
		  _T598->topt = e1_old_typ;
		  { struct _tuple1 * v2 = Cyc_Toc_temp_var();
		    struct Cyc_Absyn_Exp * v2e = Cyc_Absyn_var_exp(v2,loc);
		    _T599 = v2e;
		    _T599->topt = e2_old_typ;
		    _T59A = Cyc_Toc_deep_copy(e1);
		    _T59B = v2e;
		    _T59C = loc;
		    { struct Cyc_Absyn_Exp * s1e = Cyc_Absyn_assign_exp(_T59A,
									_T59B,
									_T59C);
		      _T59D = s1e;
		      _T59D->topt = e1_old_typ;
		      { struct Cyc_Absyn_Stmt * s1 = Cyc_Absyn_exp_stmt(s1e,
									loc);
			_T59E = Cyc_Toc_deep_copy(e2);
			_T59F = v1e;
			_T5A0 = loc;
			{ struct Cyc_Absyn_Exp * s2e = Cyc_Absyn_assign_exp(_T59E,
									    _T59F,
									    _T5A0);
			  _T5A1 = s2e;
			  _T5A1->topt = e2_old_typ;
			  { struct Cyc_Absyn_Stmt * s2 = Cyc_Absyn_exp_stmt(s2e,
									    loc);
			    _T5A2 = v1;
			    _T5A3 = e1_old_typ;
			    _T5A4 = e1;
			    _T5A5 = v2;
			    _T5A6 = e2_old_typ;
			    _T5A7 = e2;
			    _T5A8 = Cyc_Absyn_seq_stmt(s1,s2,loc);
			    _T5A9 = loc;
			    _T5AA = Cyc_Absyn_declare_stmt(_T5A5,_T5A6,_T5A7,
							   _T5A8,_T5A9);
			    _T5AB = loc;
			    { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_declare_stmt(_T5A2,
										 _T5A3,
										 _T5A4,
										 _T5AA,
										 _T5AB);
			      Cyc_Toc_stmt_to_c(nv,s);
			      _T5AC = e;
			      _T5AC->r = Cyc_Toc_stmt_exp_r(s);
			      goto _LL7;
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
	case 37: 
	  { struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5EF = _T5F6->f1;
	    _T5E3 = _T5F6->f2;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5EF;
	    struct _fat_ptr * f = _T5E3;
	    _T5AD = e1;
	    _T5AE = _T5AD->topt;
	    _T5AF = _check_null(_T5AE);
	    { void * e1_typ = Cyc_Absyn_compress(_T5AF);
	      Cyc_Toc_exp_to_c(nv,e1);
	      { struct Cyc_Absyn_Aggrdecl * _T5F6;
		_T5B0 = e1_typ;
		_T5B1 = (int *)_T5B0;
		_T5B2 = *_T5B1;
		if (_T5B2 != 0) { goto _TL329;
		}
		_T5B3 = e1_typ;
		_T5B4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5B3;
		_T5B5 = _T5B4->f1;
		_T5B6 = (int *)_T5B5;
		_T5B7 = *_T5B6;
		if (_T5B7 != 24) { goto _TL32B;
		}
		_T5B8 = e1_typ;
		_T5B9 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5B8;
		_T5BA = _T5B9->f1;
		_T5BB = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T5BA;
		_T5BC = _T5BB->f1;
		_T5BD = _T5BC.KnownAggr;
		_T5BE = _T5BD.tag;
		if (_T5BE != 2) { goto _TL32D;
		}
		_T5BF = e1_typ;
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5F7 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5BF;
		  _T5C0 = _T5F7->f1;
		  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T5F8 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T5C0;
		    _T5C1 = _T5F8->f1;
		    _T5C2 = _T5C1.KnownAggr;
		    _T5C3 = _T5C2.val;
		    { struct Cyc_Absyn_Aggrdecl * _T5F9 = *_T5C3;
		      _T5F6 = _T5F9;
		    }
		  }
		}{ struct Cyc_Absyn_Aggrdecl * ad = _T5F6;
		  _T5C4 = Cyc_Toc_get_member_offset(ad,f);
		  _T5C5 = Cyc_Absyn_signed_int_exp(_T5C4,0U);
		  _T5C6 = Cyc_Absyn_uint_type;
		  { struct Cyc_Absyn_Exp * f_tag = Cyc_Absyn_set_type(_T5C5,
								      _T5C6);
		    _T5C7 = Cyc_Toc_member_exp(e1,f,0U);
		    _T5C8 = Cyc_Toc_tagged_union_field_struct(e1_typ,f);
		    { struct Cyc_Absyn_Exp * e1_f = Cyc_Absyn_set_type(_T5C7,
								       _T5C8);
		      _T5C9 = Cyc_Toc_member_exp(e1_f,Cyc_Toc_tag_sp,0U);
		      _T5CA = Cyc_Absyn_uint_type;
		      { struct Cyc_Absyn_Exp * e1_f_tag = Cyc_Absyn_set_type(_T5C9,
									     _T5CA);
			_T5CB = e;
			_T5CC = Cyc_Absyn_eq_exp(e1_f_tag,f_tag,0U);
			_T5CB->r = _T5CC->r;
			goto _LL117;
		      }
		    }
		  }
		}_TL32D: goto _LL11A;
		_TL32B: goto _LL11A;
		_TL329: _LL11A: { struct Cyc_Warn_String_Warn_Warg_struct _T5F7;
		  _T5F7.tag = 0;
		  _T5F7.f1 = _tag_fat("non-aggregate type in tagcheck",sizeof(char),
				      31U);
		  _T5CD = _T5F7;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T5F7 = _T5CD;
		  void * _T5F8[1];
		  _T5F8[0] = &_T5F7;
		  { int (* _T5F9)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		    _T5CE = _T5F9;
		  }_T5CF = _tag_fat(_T5F8,sizeof(void *),1);
		  _T5CE(_T5CF);
		}_LL117: ;
	      }goto _LL7;
	    }
	  }
	case 36: 
	  { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5E2 = _T5F6->f1;
	  }{ struct Cyc_Absyn_Stmt * s = _T5E2;
	    Cyc_Toc_stmt_to_c(nv,s);
	    goto _LL7;
	  }
	case 35: 
	  { struct Cyc_Warn_String_Warn_Warg_struct _T5F6;
	    _T5F6.tag = 0;
	    _T5F6.f1 = _tag_fat("UnresolvedMem",sizeof(char),14U);
	    _T5D0 = _T5F6;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F6 = _T5D0;
	    void * _T5F7[1];
	    _T5F7[0] = &_T5F6;
	    { int (* _T5F8)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	      _T5D1 = _T5F8;
	    }_T5D2 = _tag_fat(_T5F7,sizeof(void *),1);
	    _T5D1(_T5D2);
	  }
	case 24: 
	  { struct Cyc_Warn_String_Warn_Warg_struct _T5F6;
	    _T5F6.tag = 0;
	    _T5F6.f1 = _tag_fat("compoundlit",sizeof(char),12U);
	    _T5D3 = _T5F6;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F6 = _T5D3;
	    void * _T5F7[1];
	    _T5F7[0] = &_T5F6;
	    { int (* _T5F8)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	      _T5D4 = _T5F8;
	    }_T5D5 = _tag_fat(_T5F7,sizeof(void *),1);
	    _T5D4(_T5D5);
	  }
	case 38: 
	  { struct Cyc_Warn_String_Warn_Warg_struct _T5F6;
	    _T5F6.tag = 0;
	    _T5F6.f1 = _tag_fat("valueof(-)",sizeof(char),11U);
	    _T5D6 = _T5F6;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F6 = _T5D6;
	    void * _T5F7[1];
	    _T5F7[0] = &_T5F6;
	    { int (* _T5F8)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	      _T5D7 = _T5F8;
	    }_T5D8 = _tag_fat(_T5F7,sizeof(void *),1);
	    _T5D7(_T5D8);
	  }
	default: 
	  { struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct * _T5F6 = (struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct *)_T5E1;
	    _T5EE = _T5F6->f3;
	    _T5EB = _T5F6->f4;
	  }{ struct Cyc_List_List * o = _T5EE;
	    struct Cyc_List_List * i = _T5EB;
	    Cyc_Toc_asm_iolist_types_toc(o);
	    Cyc_Toc_asm_iolist_types_toc(i);
	    goto _LL7;
	  }
	}
	_LL7: ;
      }_T5D9 = did_inserted_checks;
      if (_T5D9) { goto _TL32F;
      }else { goto _TL331;
      }
      _TL331: { struct Cyc_Warn_String_Warn_Warg_struct _T5E1;
	_T5E1.tag = 0;
	_T5E1.f1 = _tag_fat("Toc did not examine an inserted check: ",sizeof(char),
			    40U);
	_T5DA = _T5E1;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T5E1 = _T5DA;
	{ struct Cyc_Warn_Exp_Warn_Warg_struct _T5E2;
	  _T5E2.tag = 4;
	  _T5E2.f1 = e;
	  _T5DB = _T5E2;
	}{ struct Cyc_Warn_Exp_Warn_Warg_struct _T5E2 = _T5DB;
	  void * _T5E3[2];
	  _T5E3[0] = &_T5E1;
	  _T5E3[1] = &_T5E2;
	  _T5DD = Cyc_Warn_impos_loc2;
	  { int (* _T5E4)(unsigned int,struct _fat_ptr) = (int (*)(unsigned int,
								   struct _fat_ptr))_T5DD;
	    _T5DC = _T5E4;
	  }_T5DE = e;
	  _T5DF = _T5DE->loc;
	  _T5E0 = _tag_fat(_T5E3,sizeof(void *),2);
	  _T5DC(_T5DF,_T5E0);
	}
      }goto _TL330;
      _TL32F: _TL330: ;
    }
  }
}
 struct _tuple41 {
  long f0;
  struct _fat_ptr * f1;
  struct _fat_ptr * f2;
  struct Cyc_Absyn_Switch_clause * f3;
};
static struct _tuple41 * Cyc_Toc_gen_labels(struct _RegionHandle * r,struct Cyc_Absyn_Switch_clause * sc) {
  struct _tuple41 * _T0;
  struct _RegionHandle * _T1;
  _T1 = r;
  { struct _tuple41 * _T2 = _region_malloc(_T1,0U,sizeof(struct _tuple41));
    _T2->f0 = 0;
    _T2->f1 = Cyc_Toc_fresh_label();
    _T2->f2 = Cyc_Toc_fresh_label();
    _T2->f3 = sc;
    _T0 = (struct _tuple41 *)_T2;
  }return _T0;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_compile_path(struct Cyc_List_List * ps,
						   struct Cyc_Absyn_Exp * v) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Tcpat_PathNode * _T2;
  union Cyc_Tcpat_PatOrWhere _T3;
  struct _union_PatOrWhere_pattern _T4;
  unsigned int _T5;
  unsigned int _T6;
  int _T7;
  struct Cyc_Absyn_Pat * _T8;
  struct Cyc_Tcpat_PathNode * _T9;
  struct _union_PatOrWhere_pattern _TA;
  unsigned int _TB;
  struct _union_PatOrWhere_pattern _TC;
  void * _TD;
  void * _TE;
  void * _TF;
  int * _T10;
  unsigned int _T11;
  void * _T12;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T13;
  void * _T14;
  int * _T15;
  unsigned int _T16;
  struct Cyc_Tcpat_PathNode * _T17;
  int * _T18;
  unsigned int _T19;
  void * _T1A;
  struct Cyc_List_List * _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  struct Cyc_Tcpat_PathNode * _T20;
  int * _T21;
  int _T22;
  void * _T23;
  struct Cyc_List_List * _T24;
  struct Cyc_Absyn_Datatypefield * _T25;
  struct _tuple1 * _T26;
  struct Cyc_Absyn_Datatypedecl * _T27;
  struct _tuple1 * _T28;
  struct _tuple1 * _T29;
  void * _T2A;
  struct Cyc_Absyn_Tqual _T2B;
  void * _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  struct Cyc_Absyn_Exp * _T2E;
  unsigned int _T2F;
  int _T30;
  struct _fat_ptr * _T31;
  struct Cyc_Absyn_Exp * _T32;
  void * _T33;
  struct Cyc_Absyn_Exp * _T34;
  void * _T35;
  void * _T36;
  struct Cyc_Absyn_Exp * _T37;
  unsigned int _T38;
  int _T39;
  struct _fat_ptr * _T3A;
  struct Cyc_Absyn_Exp * _T3B;
  void * _T3C;
  void * _T3D;
  void * _T3E;
  long _T3F;
  struct Cyc_Absyn_Exp * _T40;
  void * _T41;
  struct Cyc_Absyn_Exp * _T42;
  void * _T43;
  struct Cyc_List_List * _T44;
  struct Cyc_Absyn_Exp * _T45;
  _TL335: if (ps != 0) { goto _TL333;
  }else { goto _TL334;
  }
  _TL333: _T0 = ps;
  _T1 = _T0->hd;
  { struct Cyc_Tcpat_PathNode * p = (struct Cyc_Tcpat_PathNode *)_T1;
    _T2 = p;
    _T3 = _T2->orig_pat;
    _T4 = _T3.pattern;
    _T5 = _T4.tag;
    _T6 = _T5 == 1;
    _T7 = (int)_T6;
    if (! _T7) { goto _TL336;
    }
    _T9 = p;
    { union Cyc_Tcpat_PatOrWhere _T46 = _T9->orig_pat;
      _TA = _T46.pattern;
      _TB = _TA.tag;
      if (_TB == 1) { goto _TL338;
      }
      _throw_match();
      goto _TL339;
      _TL338: _TL339: _TC = _T46.pattern;
      _T8 = _TC.val;
    }_TD = _T8->topt;
    { void * t = _check_null(_TD);
      _TE = Cyc_Toc_typ_to_c_array(t);
      { void * t2 = Cyc_Absyn_compress(_TE);
	_TF = t2;
	_T10 = (int *)_TF;
	_T11 = *_T10;
	switch (_T11) {
	case 0: 
	  _T12 = t2;
	  _T13 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T12;
	  _T14 = _T13->f1;
	  _T15 = (int *)_T14;
	  _T16 = *_T15;
	  switch (_T16) {
	  case 0: 
	    goto _LL4;
	  case 24: 
	    _LL4: goto _LL6;
	  default: 
	    goto _LL7;
	  }
	  ;
	case 7: 
	  _LL6: goto _LL0;
	default: 
	  _LL7: v = Cyc_Toc_cast_it(t2,v);
	  goto _LL0;
	}
	_LL0: ;
      }
    }goto _TL337;
    _TL336: _TL337: _T17 = p;
    { void * _T46 = _T17->access;
      void * _T47;
      struct _fat_ptr * _T48;
      long _T49;
      unsigned int _T4A;
      void * _T4B;
      _T18 = (int *)_T46;
      _T19 = *_T18;
      switch (_T19) {
      case 0: 
	goto _LL9;
      case 1: 
	{ struct Cyc_Tcpat_Deref_Tcpat_Access_struct * _T4C = (struct Cyc_Tcpat_Deref_Tcpat_Access_struct *)_T46;
	  _T1A = _T4C->f1;
	  _T4B = (void *)_T1A;
	}{ void * res_type = _T4B;
	  _T1B = ps;
	  _T1C = _T1B->tl;
	  if (_T1C == 0) { goto _TL33D;
	  }
	  _T1D = ps;
	  _T1E = _T1D->tl;
	  _T1F = _T1E->hd;
	  _T20 = (struct Cyc_Tcpat_PathNode *)_T1F;
	  { void * _T4C = _T20->access;
	    void * _T4D;
	    unsigned int _T4E;
	    struct Cyc_Absyn_Datatypefield * _T4F;
	    struct Cyc_Absyn_Datatypedecl * _T50;
	    _T21 = (int *)_T4C;
	    _T22 = *_T21;
	    if (_T22 != 2) { goto _TL33F;
	    }
	    { struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct * _T51 = (struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct *)_T4C;
	      _T50 = _T51->f1;
	      _T4F = _T51->f2;
	      _T4E = _T51->f3;
	      _T23 = _T51->f4;
	      _T4D = (void *)_T23;
	    }{ struct Cyc_Absyn_Datatypedecl * tud = _T50;
	      struct Cyc_Absyn_Datatypefield * tuf = _T4F;
	      unsigned int i = _T4E;
	      void * res_type2 = _T4D;
	      _T24 = ps;
	      ps = _T24->tl;
	      _T25 = tuf;
	      _T26 = _T25->name;
	      _T27 = tud;
	      _T28 = _T27->name;
	      _T29 = Cyc_Toc_collapse_qvars(_T26,_T28);
	      _T2A = Cyc_Absyn_strctq(_T29);
	      _T2B = Cyc_Toc_mt_tq;
	      _T2C = Cyc_Absyn_cstar_type(_T2A,_T2B);
	      _T2D = v;
	      v = Cyc_Toc_cast_it(_T2C,_T2D);
	      _T2E = v;
	      _T2F = i + 1U;
	      _T30 = (int)_T2F;
	      _T31 = Cyc_Absyn_fieldname(_T30);
	      _T32 = Cyc_Absyn_aggrarrow_exp(_T2E,_T31,0U);
	      _T33 = Cyc_Toc_typ_to_c_array(res_type2);
	      v = Cyc_Absyn_set_type(_T32,_T33);
	      goto _TL332;
	    }_TL33F: goto _LL12;
	    _LL12: ;
	  }goto _TL33E;
	  _TL33D: _TL33E: _T34 = Cyc_Absyn_deref_exp(v,0U);
	  _T35 = Cyc_Toc_typ_to_c_array(res_type);
	  v = Cyc_Absyn_set_type(_T34,_T35);
	  goto _LL9;
	}
      case 2: 
	{ struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct * _T4C = (struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct *)_T46;
	  _T4A = _T4C->f3;
	  _T36 = _T4C->f4;
	  _T4B = (void *)_T36;
	}{ unsigned int i = _T4A;
	  void * res_type = _T4B;
	  _T37 = v;
	  _T38 = i + 1U;
	  _T39 = (int)_T38;
	  _T3A = Cyc_Absyn_fieldname(_T39);
	  _T3B = Cyc_Toc_member_exp(_T37,_T3A,0U);
	  _T3C = Cyc_Toc_typ_to_c_array(res_type);
	  v = Cyc_Absyn_set_type(_T3B,_T3C);
	  goto _LL9;
	}
      default: 
	{ struct Cyc_Tcpat_AggrField_Tcpat_Access_struct * _T4C = (struct Cyc_Tcpat_AggrField_Tcpat_Access_struct *)_T46;
	  _T3D = _T4C->f1;
	  _T4B = (void *)_T3D;
	  _T49 = _T4C->f2;
	  _T48 = _T4C->f3;
	  _T3E = _T4C->f4;
	  _T47 = (void *)_T3E;
	}{ void * at = _T4B;
	  long tagged = _T49;
	  struct _fat_ptr * f = _T48;
	  void * res_type = _T47;
	  v = Cyc_Toc_member_exp(v,f,0U);
	  _T3F = tagged;
	  if (! _T3F) { goto _TL341;
	  }
	  _T40 = v;
	  _T41 = Cyc_Toc_tagged_union_field_struct(at,f);
	  Cyc_Absyn_set_type(_T40,_T41);
	  v = Cyc_Toc_member_exp(v,Cyc_Toc_val_sp,0U);
	  goto _TL342;
	  _TL341: _TL342: _T42 = v;
	  _T43 = Cyc_Toc_typ_to_c_array(res_type);
	  v = Cyc_Absyn_set_type(_T42,_T43);
	  goto _LL9;
	}
      }
      _LL9: ;
    }
  }_TL332: _T44 = ps;
  ps = _T44->tl;
  goto _TL335;
  _TL334: _T45 = v;
  return _T45;
}
static struct Cyc_Absyn_Exp * Cyc_Toc_compile_pat_test(struct Cyc_Absyn_Exp * v,
						       void * t) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct Cyc_Absyn_Exp * _T6;
  void * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Absyn_Exp * _T9;
  void * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_Absyn_Exp * _TC;
  struct Cyc_Absyn_Exp * _TD;
  void * _TE;
  struct Cyc_Absyn_Exp * _TF;
  struct Cyc_Absyn_Exp * _T10;
  void * _T11;
  struct Cyc_Absyn_Exp * _T12;
  void * _T13;
  struct Cyc_Absyn_Exp * _T14;
  struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct * _T15;
  void * _T16;
  struct Cyc_Absyn_Exp * _T17;
  struct Cyc_Absyn_Enumdecl * _T18;
  struct _tuple1 * _T19;
  struct Cyc_Absyn_Enumdecl * _T1A;
  void * _T1B;
  struct Cyc_Absyn_Exp * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  void * _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  void * _T20;
  void * _T21;
  struct Cyc_Absyn_Exp * _T22;
  struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct * _T23;
  void * _T24;
  struct Cyc_Absyn_Exp * _T25;
  void * _T26;
  struct Cyc_Absyn_Exp * _T27;
  struct Cyc_Absyn_Exp * _T28;
  void * _T29;
  struct Cyc_Absyn_Exp * _T2A;
  void * _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  int _T2E;
  unsigned int _T2F;
  void * _T30;
  struct Cyc_Absyn_Exp * _T31;
  struct Cyc_Absyn_Exp * _T32;
  void * _T33;
  struct Cyc_Absyn_Exp * _T34;
  void * _T35;
  struct Cyc_Absyn_Exp * _T36;
  unsigned int _T37;
  int _T38;
  struct Cyc_Absyn_Exp * _T39;
  void * _T3A;
  struct Cyc_Absyn_Exp * _T3B;
  struct Cyc_Absyn_Exp * _T3C;
  void * _T3D;
  struct Cyc_Absyn_Exp * _T3E;
  void * _T3F;
  struct Cyc_Absyn_Exp * _T40;
  int * _T41;
  unsigned int _T42;
  void * _T43;
  struct Cyc_Absyn_Exp * _T44;
  struct Cyc_Absyn_Exp * _T45;
  void * _T46;
  struct Cyc_Absyn_Exp * _T47;
  struct Cyc_Absyn_Exp * _T48;
  void * _T49;
  struct Cyc_Absyn_Exp * _T4A;
  struct Cyc_Absyn_Exp * _T4B;
  void * _T4C;
  struct Cyc_Absyn_Exp * _T4D;
  void * _T4E;
  void * _T4F;
  struct Cyc_Absyn_Exp * _T50;
  void * _T51;
  struct Cyc_Absyn_Exp * _T52;
  struct Cyc_Absyn_Exp * _T53;
  void * _T54;
  struct Cyc_Absyn_Exp * _T55;
  struct Cyc_Absyn_Exp * _T56;
  void * _T57;
  struct Cyc_Absyn_Exp * _T58;
  void * _T59;
  struct Cyc_Absyn_Exp * _T5A;
  int * _T5B;
  unsigned int _T5C;
  struct Cyc_Absyn_Datatypefield * _T5D;
  struct _tuple1 * _T5E;
  struct Cyc_Absyn_Datatypedecl * _T5F;
  struct _tuple1 * _T60;
  struct _tuple1 * _T61;
  void * _T62;
  struct Cyc_Absyn_Tqual _T63;
  void * _T64;
  struct Cyc_Absyn_Exp * _T65;
  struct Cyc_Absyn_Exp * _T66;
  void * _T67;
  struct Cyc_Absyn_Exp * _T68;
  struct Cyc_Absyn_Datatypefield * _T69;
  struct _tuple1 * _T6A;
  struct Cyc_Absyn_Exp * _T6B;
  void * _T6C;
  struct Cyc_Absyn_Exp * _T6D;
  struct Cyc_Absyn_Exp * _T6E;
  struct Cyc_Absyn_Datatypedecl * _T6F;
  struct _fat_ptr * _T70;
  struct Cyc_Absyn_Datatypefield * _T71;
  unsigned int _T72;
  int _T73;
  struct _fat_ptr _T74;
  struct Cyc_Absyn_Enumfield * _T75;
  void * _T76;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = t;
    { struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct * _T77 = (struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct *)_T3;
      _T76 = _T77->f1;
    }{ struct Cyc_Absyn_Exp * e = _T76;
      if (e != 0) { goto _TL344;
      }
      _T4 = v;
      goto _TL345;
      _TL344: _T4 = e;
      _TL345: return _T4;
    }
  case 1: 
    _T5 = v;
    _T6 = Cyc_Absyn_signed_int_exp(0,0U);
    _T7 = Cyc_Toc_void_star_type();
    _T8 = Cyc_Absyn_set_type(_T6,_T7);
    _T9 = Cyc_Absyn_eq_exp(_T5,_T8,0U);
    _TA = Cyc_Absyn_sint_type;
    _TB = Cyc_Absyn_set_type(_T9,_TA);
    return _TB;
  case 2: 
    _TC = v;
    _TD = Cyc_Absyn_signed_int_exp(0,0U);
    _TE = Cyc_Toc_void_star_type();
    _TF = Cyc_Absyn_set_type(_TD,_TE);
    _T10 = Cyc_Absyn_neq_exp(_TC,_TF,0U);
    _T11 = Cyc_Absyn_sint_type;
    _T12 = Cyc_Absyn_set_type(_T10,_T11);
    return _T12;
  case 3: 
    _T13 = t;
    { struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct * _T77 = (struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct *)_T13;
      _T76 = _T77->f1;
      _T75 = _T77->f2;
    }{ struct Cyc_Absyn_Enumdecl * ed = _T76;
      struct Cyc_Absyn_Enumfield * ef = _T75;
      _T14 = v;
      { struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct * _T77 = _cycalloc(sizeof(struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct));
	_T77->tag = 31;
	_T77->f1 = ed;
	_T77->f2 = ef;
	_T15 = (struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct *)_T77;
      }_T16 = (void *)_T15;
      _T17 = Cyc_Absyn_new_exp(_T16,0U);
      _T18 = ed;
      _T19 = _T18->name;
      _T1A = ed;
      _T1B = Cyc_Absyn_enum_type(_T19,_T1A);
      _T1C = Cyc_Absyn_set_type(_T17,_T1B);
      _T1D = Cyc_Absyn_eq_exp(_T14,_T1C,0U);
      _T1E = Cyc_Absyn_sint_type;
      _T1F = Cyc_Absyn_set_type(_T1D,_T1E);
      return _T1F;
    }
  case 4: 
    _T20 = t;
    { struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct * _T77 = (struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct *)_T20;
      _T21 = _T77->f1;
      _T76 = (void *)_T21;
      _T75 = _T77->f2;
    }{ void * t = _T76;
      struct Cyc_Absyn_Enumfield * ef = _T75;
      _T22 = v;
      { struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct * _T77 = _cycalloc(sizeof(struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct));
	_T77->tag = 32;
	_T77->f1 = t;
	_T77->f2 = ef;
	_T23 = (struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct *)_T77;
      }_T24 = (void *)_T23;
      _T25 = Cyc_Absyn_new_exp(_T24,0U);
      _T26 = Cyc_Absyn_sint_type;
      _T27 = Cyc_Absyn_set_type(_T25,_T26);
      _T28 = Cyc_Absyn_eq_exp(_T22,_T27,0U);
      _T29 = Cyc_Absyn_sint_type;
      _T2A = Cyc_Absyn_set_type(_T28,_T29);
      return _T2A;
    }
  case 5: 
    _T2B = t;
    { struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct * _T77 = (struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct *)_T2B;
      _T74 = _T77->f1;
      _T73 = _T77->f2;
    }{ struct _fat_ptr s = _T74;
      int i = _T73;
      _T2C = v;
      _T2D = Cyc_Absyn_float_exp(s,i,0U);
      _T2E = i;
      _T2F = (unsigned int)_T2E;
      _T30 = Cyc_Absyn_gen_float_type(_T2F);
      _T31 = Cyc_Absyn_set_type(_T2D,_T30);
      _T32 = Cyc_Absyn_eq_exp(_T2C,_T31,0U);
      _T33 = Cyc_Absyn_sint_type;
      _T34 = Cyc_Absyn_set_type(_T32,_T33);
      return _T34;
    }
  case 6: 
    _T35 = t;
    { struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct * _T77 = (struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct *)_T35;
      _T72 = _T77->f1;
    }{ unsigned int i = _T72;
      _T36 = v;
      _T37 = i;
      _T38 = (int)_T37;
      _T39 = Cyc_Absyn_signed_int_exp(_T38,0U);
      _T3A = Cyc_Absyn_sint_type;
      _T3B = Cyc_Absyn_set_type(_T39,_T3A);
      _T3C = Cyc_Absyn_eq_exp(_T36,_T3B,0U);
      _T3D = Cyc_Absyn_sint_type;
      _T3E = Cyc_Absyn_set_type(_T3C,_T3D);
      return _T3E;
    }
  case 7: 
    _T3F = t;
    { struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct * _T77 = (struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct *)_T3F;
      _T73 = _T77->f1;
      _T76 = _T77->f2;
      _T71 = _T77->f3;
    }{ int i = _T73;
      struct Cyc_Absyn_Datatypedecl * tud = _T76;
      struct Cyc_Absyn_Datatypefield * tuf = _T71;
      LOOP1: _T40 = v;
      { void * _T77 = _T40->r;
	struct Cyc_Absyn_Exp * _T78;
	_T41 = (int *)_T77;
	_T42 = *_T41;
	switch (_T42) {
	case 14: 
	  { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T79 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T77;
	    _T78 = _T79->f2;
	  }{ struct Cyc_Absyn_Exp * e = _T78;
	    v = e;
	    goto LOOP1;
	  }
	case 20: 
	  { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T79 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T77;
	    _T78 = _T79->f1;
	  }{ struct Cyc_Absyn_Exp * e = _T78;
	    v = e;
	    goto _LL15;
	  }
	default: 
	  goto _LL15;
	}
	_LL15: ;
      }_T43 = Cyc_Absyn_cstar_type(Cyc_Absyn_sint_type,Cyc_Toc_mt_tq);
      _T44 = v;
      v = Cyc_Toc_cast_it(_T43,_T44);
      _T45 = Cyc_Absyn_deref_exp(v,0U);
      _T46 = Cyc_Absyn_sint_type;
      _T47 = Cyc_Absyn_set_type(_T45,_T46);
      _T48 = Cyc_Absyn_signed_int_exp(i,0U);
      _T49 = Cyc_Absyn_sint_type;
      _T4A = Cyc_Absyn_set_type(_T48,_T49);
      _T4B = Cyc_Absyn_eq_exp(_T47,_T4A,0U);
      _T4C = Cyc_Absyn_sint_type;
      _T4D = Cyc_Absyn_set_type(_T4B,_T4C);
      return _T4D;
    }
  case 8: 
    _T4E = t;
    { struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct * _T77 = (struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct *)_T4E;
      _T4F = _T77->f1;
      _T76 = (void *)_T4F;
      _T70 = _T77->f2;
      _T73 = _T77->f3;
    }{ void * atype = _T76;
      struct _fat_ptr * f = _T70;
      int i = _T73;
      struct Cyc_Absyn_Exp * e0 = Cyc_Toc_member_exp(v,f,0U);
      void * t = Cyc_Toc_tagged_union_field_struct(atype,f);
      Cyc_Absyn_set_type(e0,t);
      _T50 = Cyc_Toc_member_exp(e0,Cyc_Toc_tag_sp,0U);
      _T51 = Cyc_Absyn_uint_type;
      { struct Cyc_Absyn_Exp * e = Cyc_Absyn_set_type(_T50,_T51);
	_T52 = e;
	_T53 = Cyc_Absyn_signed_int_exp(i,0U);
	_T54 = Cyc_Absyn_sint_type;
	_T55 = Cyc_Absyn_set_type(_T53,_T54);
	_T56 = Cyc_Absyn_eq_exp(_T52,_T55,0U);
	_T57 = Cyc_Absyn_sint_type;
	_T58 = Cyc_Absyn_set_type(_T56,_T57);
	return _T58;
      }
    }
  default: 
    _T59 = t;
    { struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct * _T77 = (struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct *)_T59;
      _T6F = _T77->f1;
      _T71 = _T77->f2;
    }{ struct Cyc_Absyn_Datatypedecl * tud = _T6F;
      struct Cyc_Absyn_Datatypefield * tuf = _T71;
      LOOP2: _T5A = v;
      { void * _T77 = _T5A->r;
	struct Cyc_Absyn_Exp * _T78;
	_T5B = (int *)_T77;
	_T5C = *_T5B;
	switch (_T5C) {
	case 14: 
	  { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T79 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T77;
	    _T78 = _T79->f2;
	  }{ struct Cyc_Absyn_Exp * e = _T78;
	    v = e;
	    goto LOOP2;
	  }
	case 20: 
	  { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T79 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T77;
	    _T78 = _T79->f1;
	  }{ struct Cyc_Absyn_Exp * e = _T78;
	    v = e;
	    goto _LL1C;
	  }
	default: 
	  goto _LL1C;
	}
	_LL1C: ;
      }_T5D = tuf;
      _T5E = _T5D->name;
      _T5F = tud;
      _T60 = _T5F->name;
      _T61 = Cyc_Toc_collapse_qvars(_T5E,_T60);
      _T62 = Cyc_Absyn_strctq(_T61);
      _T63 = Cyc_Toc_mt_tq;
      _T64 = Cyc_Absyn_cstar_type(_T62,_T63);
      _T65 = v;
      v = Cyc_Toc_cast_it(_T64,_T65);
      _T66 = Cyc_Absyn_aggrarrow_exp(v,Cyc_Toc_tag_sp,0U);
      _T67 = Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq);
      _T68 = Cyc_Absyn_set_type(_T66,_T67);
      _T69 = tuf;
      _T6A = _T69->name;
      _T6B = Cyc_Absyn_var_exp(_T6A,0U);
      _T6C = Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq);
      _T6D = Cyc_Absyn_set_type(_T6B,_T6C);
      _T6E = Cyc_Absyn_eq_exp(_T68,_T6D,0U);
      return _T6E;
    }
  }
  ;
}
 struct Cyc_Toc_OtherTest_Toc_TestKind_struct {
  int tag;
};
 struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct {
  int tag;
};
 struct Cyc_Toc_WhereTest_Toc_TestKind_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct {
  int tag;
  void * f1;
  struct _fat_ptr * f2;
};
struct Cyc_Toc_OtherTest_Toc_TestKind_struct Cyc_Toc_OtherTest_val = {0};
struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct Cyc_Toc_DatatypeTagTest_val = {1};
 struct _tuple42 {
  int f0;
  void * f1;
};
static struct _tuple42 Cyc_Toc_admits_switch(struct Cyc_List_List * ss) {
  struct Cyc_Toc_OtherTest_Toc_TestKind_struct * _T0;
  struct Cyc_Toc_OtherTest_Toc_TestKind_struct * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct _tuple38 * _T4;
  void * _T5;
  int * _T6;
  unsigned int _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  struct Cyc_Toc_OtherTest_Toc_TestKind_struct * _TB;
  struct Cyc_Toc_OtherTest_Toc_TestKind_struct * _TC;
  void * _TD;
  struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct * _TE;
  struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct * _TF;
  struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct * _T10;
  void * _T11;
  struct Cyc_Absyn_Exp * _T12;
  struct Cyc_Toc_WhereTest_Toc_TestKind_struct * _T13;
  struct _tuple42 _T14;
  struct _tuple42 _T15;
  struct Cyc_List_List * _T16;
  struct _tuple42 _T17;
  int c = 0;
  _T0 = &Cyc_Toc_OtherTest_val;
  _T1 = (struct Cyc_Toc_OtherTest_Toc_TestKind_struct *)_T0;
  { void * k = (void *)_T1;
    _TL34B: if (ss != 0) { goto _TL349;
    }else { goto _TL34A;
    }
    _TL349: _T2 = ss;
    _T3 = _T2->hd;
    _T4 = (struct _tuple38 *)_T3;
    { struct _tuple38 _T18 = *_T4;
      void * _T19;
      _T19 = _T18.f0;
      { void * ptest = _T19;
	struct Cyc_Absyn_Exp * _T1A;
	struct _fat_ptr * _T1B;
	void * _T1C;
	_T5 = ptest;
	_T6 = (int *)_T5;
	_T7 = *_T6;
	switch (_T7) {
	case 3: 
	  goto _LL7;
	case 4: 
	  _LL7: goto _LL9;
	case 6: 
	  _LL9: goto _TL348;
	case 8: 
	  _T8 = ptest;
	  { struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct * _T1D = (struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct *)_T8;
	    _T9 = _T1D->f1;
	    _T1C = (void *)_T9;
	    _T1B = _T1D->f2;
	  }{ void * t = _T1C;
	    struct _fat_ptr * f = _T1B;
	    _TA = k;
	    _TB = &Cyc_Toc_OtherTest_val;
	    _TC = (struct Cyc_Toc_OtherTest_Toc_TestKind_struct *)_TB;
	    _TD = (void *)_TC;
	    if (_TA != _TD) { goto _TL34D;
	    }
	    { struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct * _T1D = _cycalloc(sizeof(struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct));
	      _T1D->tag = 3;
	      _T1D->f1 = t;
	      _T1D->f2 = f;
	      _TE = (struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct *)_T1D;
	    }k = (void *)_TE;
	    goto _TL34E;
	    _TL34D: _TL34E: goto _TL348;
	  }
	case 7: 
	  _TF = &Cyc_Toc_DatatypeTagTest_val;
	  _T10 = (struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct *)_TF;
	  k = (void *)_T10;
	  goto _TL348;
	case 0: 
	  _T11 = ptest;
	  { struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct * _T1D = (struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct *)_T11;
	    _T1A = _T1D->f1;
	  }_T12 = (struct Cyc_Absyn_Exp *)_T1A;
	  if (_T12 == 0) { goto _TL34F;
	  }
	  { struct Cyc_Absyn_Exp * e = _T1A;
	    { struct Cyc_Toc_WhereTest_Toc_TestKind_struct * _T1D = _cycalloc(sizeof(struct Cyc_Toc_WhereTest_Toc_TestKind_struct));
	      _T1D->tag = 2;
	      _T1D->f1 = e;
	      _T13 = (struct Cyc_Toc_WhereTest_Toc_TestKind_struct *)_T1D;
	    }k = (void *)_T13;
	    { struct _tuple42 _T1D;
	      _T1D.f0 = 0;
	      _T1D.f1 = k;
	      _T14 = _T1D;
	    }return _T14;
	  }_TL34F: goto _LL13;
	case 1: 
	  _LL13: goto _LL15;
	case 2: 
	  _LL15: goto _LL17;
	case 5: 
	  _LL17: goto _LL19;
	default: 
	  _LL19: { struct _tuple42 _T1D;
	    _T1D.f0 = 0;
	    _T1D.f1 = k;
	    _T15 = _T1D;
	  }return _T15;
	}
	;
      }
    }_TL348: _T16 = ss;
    ss = _T16->tl;
    c = c + 1;
    goto _TL34B;
    _TL34A: { struct _tuple42 _T18;
      _T18.f0 = c;
      _T18.f1 = k;
      _T17 = _T18;
    }return _T17;
  }
}
static struct Cyc_Absyn_Pat * Cyc_Toc_compile_pat_test_as_case(void * p) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct * _T4;
  void * _T5;
  void * _T6;
  void * _T7;
  struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct * _T8;
  void * _T9;
  void * _TA;
  unsigned int _TB;
  void * _TC;
  void * _TD;
  struct Cyc_Absyn_Exp * _TE;
  void * _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  int (* _T11)(struct _fat_ptr ap);
  struct _fat_ptr _T12;
  struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct * _T13;
  void * _T14;
  struct Cyc_Absyn_Pat * _T15;
  struct Cyc_Absyn_Exp * e;
  { int _T16;
    unsigned int _T17;
    struct Cyc_Absyn_Enumfield * _T18;
    void * _T19;
    _T0 = p;
    _T1 = (int *)_T0;
    _T2 = *_T1;
    switch (_T2) {
    case 3: 
      _T3 = p;
      { struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct * _T1A = (struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct *)_T3;
	_T19 = _T1A->f1;
	_T18 = _T1A->f2;
      }{ struct Cyc_Absyn_Enumdecl * ed = _T19;
	struct Cyc_Absyn_Enumfield * ef = _T18;
	{ struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct * _T1A = _cycalloc(sizeof(struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct));
	  _T1A->tag = 31;
	  _T1A->f1 = ed;
	  _T1A->f2 = ef;
	  _T4 = (struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct *)_T1A;
	}_T5 = (void *)_T4;
	e = Cyc_Absyn_new_exp(_T5,0U);
	goto _LL0;
      }
    case 4: 
      _T6 = p;
      { struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct * _T1A = (struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct *)_T6;
	_T7 = _T1A->f1;
	_T19 = (void *)_T7;
	_T18 = _T1A->f2;
      }{ void * t = _T19;
	struct Cyc_Absyn_Enumfield * ef = _T18;
	{ struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct * _T1A = _cycalloc(sizeof(struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct));
	  _T1A->tag = 32;
	  _T1A->f1 = t;
	  _T1A->f2 = ef;
	  _T8 = (struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct *)_T1A;
	}_T9 = (void *)_T8;
	e = Cyc_Absyn_new_exp(_T9,0U);
	goto _LL0;
      }
    case 6: 
      _TA = p;
      { struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct * _T1A = (struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct *)_TA;
	_T17 = _T1A->f1;
      }{ unsigned int i = _T17;
	_TB = i;
	_T16 = (int)_TB;
	goto _LL8;
      }
    case 7: 
      _TC = p;
      { struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct * _T1A = (struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct *)_TC;
	_T16 = _T1A->f1;
      }_LL8: { int i = _T16;
	_T16 = i;
	goto _LLA;
      }
    case 8: 
      _TD = p;
      { struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct * _T1A = (struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct *)_TD;
	_T16 = _T1A->f3;
      }_LLA: { int i = _T16;
	_TE = Cyc_Absyn_signed_int_exp(i,0U);
	_TF = Cyc_Absyn_sint_type;
	e = Cyc_Absyn_set_type(_TE,_TF);
	goto _LL0;
      }
    default: 
      { struct Cyc_Warn_String_Warn_Warg_struct _T1A;
	_T1A.tag = 0;
	_T1A.f1 = _tag_fat("compile_pat_test_as_case!",sizeof(char),26U);
	_T10 = _T1A;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1A = _T10;
	void * _T1B[1];
	_T1B[0] = &_T1A;
	{ int (* _T1C)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	  _T11 = _T1C;
	}_T12 = _tag_fat(_T1B,sizeof(void *),1);
	_T11(_T12);
      }
    }
    _LL0: ;
  }{ struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct * _T16 = _cycalloc(sizeof(struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct));
    _T16->tag = 16;
    _T16->f1 = e;
    _T13 = (struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct *)_T16;
  }_T14 = (void *)_T13;
  _T15 = Cyc_Absyn_new_pat(_T14,0U);
  return _T15;
}
static struct Cyc_Absyn_Stmt * Cyc_Toc_seq_stmt_opt(struct Cyc_Absyn_Stmt * s1,
						    struct Cyc_Absyn_Stmt * s2) {
  struct Cyc_Absyn_Stmt * _T0;
  struct Cyc_Absyn_Stmt * _T1;
  struct Cyc_Absyn_Stmt * _T2;
  if (s1 != 0) { goto _TL352;
  }
  _T0 = s2;
  return _T0;
  _TL352: if (s2 != 0) { goto _TL354;
  }
  _T1 = s1;
  return _T1;
  _TL354: _T2 = Cyc_Absyn_seq_stmt(s1,s2,0U);
  return _T2;
}
 struct _tuple43 {
  struct Cyc_Absyn_Vardecl * f0;
  struct Cyc_Absyn_Vardecl * f1;
  void * f2;
  long f3;
};
long Cyc_Toc_vd_in_use(struct Cyc_Absyn_Vardecl * other_vd,struct Cyc_List_List * * newdecls) {
  struct Cyc_List_List * * _T0;
  struct Cyc_Absyn_Vardecl * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct _tuple43 * _T4;
  struct _tuple43 _T5;
  struct Cyc_Absyn_Vardecl * _T6;
  struct Cyc_List_List * _T7;
  _T0 = newdecls;
  { struct Cyc_List_List * ds = *_T0;
    _TL359: if (ds != 0) { goto _TL357;
    }else { goto _TL358;
    }
    _TL357: _T1 = other_vd;
    _T2 = ds;
    _T3 = _T2->hd;
    _T4 = (struct _tuple43 *)_T3;
    _T5 = *_T4;
    _T6 = _T5.f1;
    if (_T1 != _T6) { goto _TL35A;
    }
    return 1;
    _TL35A: _T7 = ds;
    ds = _T7->tl;
    goto _TL359;
    _TL358: ;
  }return 0;
}
static long Cyc_Toc_is_usuable_type(void * ctype,void * other) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_PtrInfo _T2;
  long _T3;
  long _T4;
  int _T5;
  int _T6;
  void * _T7 = Cyc_Absyn_compress(ctype);
  struct Cyc_Absyn_Tqual _T8;
  _T0 = (int *)_T7;
  _T1 = *_T0;
  if (_T1 != 4) { goto _TL35C;
  }
  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T9 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T7;
    _T2 = _T9->f1;
    _T8 = _T2.elt_tq;
  }{ struct Cyc_Absyn_Tqual tq = _T8;
    _T3 = Cyc_Absyn_equal_tqual(tq,Cyc_Toc_mt_tq);
    if (! _T3) { goto _TL35E;
    }
    _T4 = Cyc_Toc_is_void_star(other);
    if (! _T4) { goto _TL35E;
    }
    return 1;
    _TL35E: goto _LL4;
  }_TL35C: _LL4: _T5 = Cyc_Tcutil_typecmp(ctype,other);
  _T6 = _T5 == 0;
  return _T6;
  ;
}
static long Cyc_Toc_can_use_voidstar(void * ctype) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_PtrInfo _T2;
  long _T3;
  void * _T4 = Cyc_Absyn_compress(ctype);
  struct Cyc_Absyn_Tqual _T5;
  _T0 = (int *)_T4;
  _T1 = *_T0;
  if (_T1 != 4) { goto _TL360;
  }
  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T6 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T4;
    _T2 = _T6->f1;
    _T5 = _T2.elt_tq;
  }{ struct Cyc_Absyn_Tqual tq = _T5;
    _T3 = Cyc_Absyn_equal_tqual(tq,Cyc_Toc_mt_tq);
    return _T3;
  }_TL360: return 0;
  ;
}
 struct _tuple44 {
  struct Cyc_Absyn_Vardecl * f0;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct _tuple45 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Pat * f1;
};
static struct Cyc_Absyn_Stmt * Cyc_Toc_extract_pattern_vars(struct _RegionHandle * rgn,
							    struct Cyc_Toc_Env * * nv,
							    struct Cyc_List_List * * newdecls,
							    struct Cyc_List_List * * prevdecls,
							    struct Cyc_Absyn_Exp * lpath,
							    struct Cyc_Absyn_Exp * rpath,
							    struct Cyc_Absyn_Pat * p) {
  struct Cyc_Absyn_Pat * _T0;
  void * _T1;
  struct Cyc_Absyn_Pat * _T2;
  int * _T3;
  unsigned int _T4;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T5;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T6;
  void * _T7;
  struct Cyc_Absyn_Pat * _T8;
  struct Cyc_Absyn_Pat * _T9;
  struct Cyc_Absyn_Vardecl * _TA;
  void * _TB;
  struct Cyc_List_List * * _TC;
  struct Cyc_List_List * _TD;
  void * _TE;
  struct _tuple44 * _TF;
  void * _T10;
  struct Cyc_Absyn_Vardecl * _T11;
  void * _T12;
  long _T13;
  long _T14;
  struct Cyc_List_List * * _T15;
  struct Cyc_List_List * _T16;
  struct _RegionHandle * _T17;
  struct _tuple43 * _T18;
  struct _RegionHandle * _T19;
  struct Cyc_List_List * * _T1A;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T1B;
  void * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  void * _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  struct Cyc_Absyn_Exp * _T20;
  struct Cyc_Absyn_Stmt * _T21;
  struct _RegionHandle * _T22;
  struct Cyc_Toc_Env * * _T23;
  struct Cyc_List_List * * _T24;
  struct Cyc_List_List * * _T25;
  struct Cyc_Absyn_Exp * _T26;
  struct Cyc_Absyn_Exp * _T27;
  struct Cyc_Absyn_Pat * _T28;
  struct Cyc_Absyn_Stmt * _T29;
  struct Cyc_Absyn_Stmt * _T2A;
  struct Cyc_List_List * _T2B;
  struct _tuple1 * _T2C;
  void * _T2D;
  struct Cyc_List_List * * _T2E;
  struct Cyc_List_List * _T2F;
  struct _RegionHandle * _T30;
  struct _tuple43 * _T31;
  struct _RegionHandle * _T32;
  struct Cyc_List_List * * _T33;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T34;
  void * _T35;
  struct Cyc_Absyn_Exp * _T36;
  struct Cyc_Absyn_Vardecl * _T37;
  void * _T38;
  struct Cyc_Absyn_Exp * _T39;
  struct Cyc_Absyn_Exp * _T3A;
  struct Cyc_Absyn_Stmt * _T3B;
  struct _RegionHandle * _T3C;
  struct Cyc_Toc_Env * * _T3D;
  struct Cyc_List_List * * _T3E;
  struct Cyc_List_List * * _T3F;
  struct Cyc_Absyn_Exp * _T40;
  struct Cyc_Absyn_Exp * _T41;
  struct Cyc_Absyn_Pat * _T42;
  struct Cyc_Absyn_Stmt * _T43;
  struct Cyc_Absyn_Stmt * _T44;
  struct Cyc_Absyn_Vardecl * _T45;
  void * _T46;
  struct Cyc_List_List * * _T47;
  struct Cyc_List_List * _T48;
  void * _T49;
  struct _tuple44 * _T4A;
  void * _T4B;
  struct Cyc_Absyn_Vardecl * _T4C;
  void * _T4D;
  long _T4E;
  long _T4F;
  struct Cyc_List_List * * _T50;
  struct Cyc_List_List * _T51;
  struct _RegionHandle * _T52;
  struct _tuple43 * _T53;
  struct _RegionHandle * _T54;
  struct Cyc_List_List * * _T55;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T56;
  void * _T57;
  struct Cyc_Absyn_Exp * _T58;
  struct Cyc_Absyn_Vardecl * _T59;
  void * _T5A;
  struct Cyc_Absyn_Exp * _T5B;
  struct Cyc_Absyn_Exp * _T5C;
  struct Cyc_Absyn_Stmt * _T5D;
  struct Cyc_List_List * _T5E;
  long _T5F;
  struct _tuple1 * _T60;
  void * _T61;
  struct Cyc_List_List * * _T62;
  struct Cyc_List_List * _T63;
  struct _RegionHandle * _T64;
  struct _tuple43 * _T65;
  struct _RegionHandle * _T66;
  struct Cyc_List_List * * _T67;
  struct _tuple1 * _T68;
  void * _T69;
  struct Cyc_List_List * * _T6A;
  struct Cyc_List_List * _T6B;
  struct _RegionHandle * _T6C;
  struct _tuple43 * _T6D;
  struct _RegionHandle * _T6E;
  struct Cyc_List_List * * _T6F;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T70;
  void * _T71;
  struct Cyc_Absyn_Exp * _T72;
  struct Cyc_Absyn_Vardecl * _T73;
  void * _T74;
  struct Cyc_Absyn_Exp * _T75;
  struct Cyc_Absyn_Exp * _T76;
  struct Cyc_Absyn_Stmt * _T77;
  struct Cyc_Absyn_Vardecl * _T78;
  struct Cyc_Absyn_Vardecl * _T79;
  void * _T7A;
  struct Cyc_List_List * * _T7B;
  struct Cyc_List_List * _T7C;
  void * _T7D;
  struct _tuple44 * _T7E;
  void * _T7F;
  struct Cyc_Absyn_Vardecl * _T80;
  void * _T81;
  long _T82;
  long _T83;
  struct Cyc_List_List * * _T84;
  struct Cyc_List_List * _T85;
  struct _RegionHandle * _T86;
  struct _tuple43 * _T87;
  struct _RegionHandle * _T88;
  struct Cyc_List_List * * _T89;
  void * _T8A;
  struct Cyc_Absyn_Tqual _T8B;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T8C;
  void * _T8D;
  struct Cyc_Absyn_Exp * _T8E;
  struct Cyc_Absyn_Vardecl * _T8F;
  void * _T90;
  struct Cyc_Absyn_Exp * _T91;
  struct Cyc_Absyn_Exp * _T92;
  void * _T93;
  struct Cyc_Absyn_Exp * _T94;
  struct Cyc_Absyn_Exp * _T95;
  struct Cyc_Absyn_Stmt * _T96;
  struct Cyc_Absyn_Stmt * _T97;
  struct Cyc_Absyn_Stmt * _T98;
  struct Cyc_List_List * _T99;
  long _T9A;
  struct _tuple1 * _T9B;
  void * _T9C;
  struct Cyc_List_List * * _T9D;
  struct Cyc_List_List * _T9E;
  struct _RegionHandle * _T9F;
  struct _tuple43 * _TA0;
  struct _RegionHandle * _TA1;
  struct Cyc_List_List * * _TA2;
  struct _tuple1 * _TA3;
  void * _TA4;
  struct Cyc_List_List * * _TA5;
  struct Cyc_List_List * _TA6;
  struct _RegionHandle * _TA7;
  struct _tuple43 * _TA8;
  struct _RegionHandle * _TA9;
  struct Cyc_List_List * * _TAA;
  void * _TAB;
  struct Cyc_Absyn_Tqual _TAC;
  struct Cyc_Absyn_Exp * _TAD;
  struct Cyc_Absyn_Exp * _TAE;
  void * _TAF;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _TB0;
  void * _TB1;
  struct Cyc_Absyn_Exp * _TB2;
  struct Cyc_Absyn_Vardecl * _TB3;
  void * _TB4;
  struct Cyc_Absyn_Exp * _TB5;
  struct Cyc_Absyn_Exp * _TB6;
  struct Cyc_Absyn_Stmt * _TB7;
  struct Cyc_Absyn_Stmt * _TB8;
  struct Cyc_Absyn_Stmt * _TB9;
  struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct * _TBA;
  struct Cyc_Absyn_Pat * _TBB;
  struct Cyc_Absyn_Pat * _TBC;
  void * _TBD;
  int * _TBE;
  int _TBF;
  struct Cyc_Absyn_Pat * _TC0;
  void * _TC1;
  struct Cyc_Absyn_Datatypefield * _TC2;
  struct _tuple1 * _TC3;
  struct Cyc_Absyn_Datatypedecl * _TC4;
  struct _tuple1 * _TC5;
  void * _TC6;
  struct Cyc_Absyn_Tqual _TC7;
  struct Cyc_Absyn_Datatypefield * _TC8;
  struct _tuple1 * _TC9;
  void * _TCA;
  struct Cyc_Absyn_Exp * _TCB;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _TCC;
  void * _TCD;
  struct Cyc_Absyn_Exp * _TCE;
  void * _TCF;
  struct Cyc_List_List * _TD0;
  void * _TD1;
  struct Cyc_Absyn_Pat * _TD2;
  void * _TD3;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _TD4;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _TD5;
  void * _TD6;
  struct Cyc_List_List * _TD7;
  void * _TD8;
  struct _tuple26 * _TD9;
  struct _tuple26 _TDA;
  struct Cyc_Absyn_Pat * _TDB;
  void * _TDC;
  struct Cyc_Absyn_Exp * _TDD;
  struct _fat_ptr * _TDE;
  struct Cyc_Absyn_Exp * _TDF;
  struct _fat_ptr * _TE0;
  void * _TE1;
  long _TE2;
  struct Cyc_Absyn_Stmt * _TE3;
  struct Cyc_Absyn_Stmt * _TE4;
  struct Cyc_List_List * _TE5;
  struct Cyc_List_List * _TE6;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _TE7;
  void * _TE8;
  struct Cyc_Absyn_Decl * _TE9;
  struct Cyc_Absyn_Stmt * _TEA;
  struct Cyc_Absyn_Stmt * _TEB;
  struct Cyc_Absyn_Pat * _TEC;
  void * _TED;
  struct _tuple1 * _TEE;
  void * _TEF;
  struct Cyc_Absyn_Exp * _TF0;
  void * _TF1;
  struct Cyc_Absyn_Exp * _TF2;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _TF3;
  void * _TF4;
  struct Cyc_Absyn_Exp * _TF5;
  void * _TF6;
  struct _RegionHandle * _TF7;
  struct Cyc_Toc_Env * * _TF8;
  struct Cyc_List_List * * _TF9;
  struct Cyc_List_List * * _TFA;
  struct Cyc_Absyn_Exp * _TFB;
  void * _TFC;
  struct Cyc_Absyn_Exp * _TFD;
  struct Cyc_Absyn_Exp * _TFE;
  struct Cyc_Absyn_Pat * _TFF;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T100;
  void * _T101;
  struct Cyc_Absyn_Decl * _T102;
  struct Cyc_Absyn_Stmt * _T103;
  struct Cyc_Absyn_Stmt * _T104;
  struct Cyc_List_List * _T105;
  void * _T106;
  struct Cyc_Absyn_Pat * _T107;
  void * _T108;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T109;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T10A;
  void * _T10B;
  struct Cyc_Absyn_Pat * _T10C;
  void * _T10D;
  struct Cyc_Absyn_Exp * _T10E;
  void * _T10F;
  struct Cyc_Absyn_Exp * _T110;
  void * _T111;
  struct Cyc_Absyn_Stmt * _T112;
  struct Cyc_Absyn_Stmt * _T113;
  struct Cyc_List_List * _T114;
  struct Cyc_Absyn_Stmt * _T115;
  void * _T116;
  struct Cyc_Warn_String_Warn_Warg_struct _T117;
  int (* _T118)(struct _fat_ptr ap);
  struct _fat_ptr _T119;
  int * _T11A;
  unsigned int _T11B;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T11C;
  void * _T11D;
  int * _T11E;
  int _T11F;
  void * _T120;
  struct Cyc_Absyn_Aggrdecl * _T121;
  struct Cyc_Absyn_AggrdeclImpl * _T122;
  struct Cyc_Absyn_AggrdeclImpl * _T123;
  struct Cyc_Absyn_Aggrdecl * _T124;
  struct Cyc_Absyn_AggrdeclImpl * _T125;
  struct Cyc_Warn_String_Warn_Warg_struct _T126;
  int (* _T127)(struct _fat_ptr ap);
  struct _fat_ptr _T128;
  struct Cyc_List_List * _T129;
  void * _T12A;
  struct _tuple45 * _T12B;
  struct _tuple45 _T12C;
  struct Cyc_Absyn_Pat * _T12D;
  void * _T12E;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T12F;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T130;
  void * _T131;
  struct _tuple45 * _T132;
  struct _tuple45 _T133;
  struct Cyc_List_List * _T134;
  struct Cyc_Absyn_Pat * _T135;
  void * _T136;
  struct Cyc_Absyn_Aggrfield * _T137;
  struct Cyc_Absyn_Aggrfield * _T138;
  long _T139;
  struct Cyc_Absyn_Exp * _T13A;
  struct Cyc_Absyn_Exp * _T13B;
  long _T13C;
  long _T13D;
  long _T13E;
  struct Cyc_Absyn_Kind * _T13F;
  struct Cyc_Absyn_Kind * _T140;
  struct Cyc_Absyn_Kind * _T141;
  long _T142;
  void * _T143;
  struct Cyc_Absyn_Exp * _T144;
  void * _T145;
  struct Cyc_Absyn_Exp * _T146;
  struct Cyc_Absyn_Exp * _T147;
  struct Cyc_Absyn_Exp * _T148;
  void * _T149;
  struct Cyc_Absyn_Exp * _T14A;
  void * _T14B;
  struct Cyc_Absyn_Exp * _T14C;
  struct Cyc_Absyn_Exp * _T14D;
  struct Cyc_Absyn_Exp * _T14E;
  struct Cyc_Absyn_Stmt * _T14F;
  struct Cyc_Absyn_Stmt * _T150;
  struct Cyc_List_List * _T151;
  struct Cyc_Absyn_Stmt * _T152;
  struct Cyc_Warn_String_Warn_Warg_struct _T153;
  int (* _T154)(struct _fat_ptr ap);
  struct _fat_ptr _T155;
  struct Cyc_Warn_String_Warn_Warg_struct _T156;
  int (* _T157)(struct _fat_ptr ap);
  struct _fat_ptr _T158;
  struct Cyc_Warn_String_Warn_Warg_struct _T159;
  int (* _T15A)(struct _fat_ptr ap);
  struct _fat_ptr _T15B;
  _T0 = p;
  _T1 = _T0->topt;
  { void * t = _check_null(_T1);
    _T2 = p;
    { void * _T15C = _T2->r;
      struct Cyc_List_List * _T15D;
      struct Cyc_Absyn_Datatypefield * _T15E;
      struct Cyc_Absyn_Pat * _T15F;
      void * _T160;
      _T3 = (int *)_T15C;
      _T4 = *_T3;
      switch (_T4) {
      case 2: 
	{ struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct * _T161 = (struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct *)_T15C;
	  _T160 = _T161->f2;
	}{ struct Cyc_Absyn_Vardecl * vd = _T160;
	  _T5 = &Cyc_Absyn_Wild_p_val;
	  _T6 = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T5;
	  _T7 = (void *)_T6;
	  { struct Cyc_Absyn_Pat * p2 = Cyc_Absyn_new_pat(_T7,0U);
	    _T8 = p2;
	    _T9 = p;
	    _T8->topt = _T9->topt;
	    _T160 = vd;
	    _T15F = p2;
	    goto _LL4;
	  }
	}
      case 1: 
	{ struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T161 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T15C;
	  _T160 = _T161->f1;
	  _T15F = _T161->f2;
	}_LL4: { struct Cyc_Absyn_Vardecl * vd = _T160;
	  struct Cyc_Absyn_Pat * p2 = _T15F;
	  _TA = vd;
	  _TB = _TA->type;
	  { void * ctype = Cyc_Toc_typ_to_c_array(_TB);
	    _TC = prevdecls;
	    { struct Cyc_List_List * pds = *_TC;
	      _TL366: if (pds != 0) { goto _TL364;
	      }else { goto _TL365;
	      }
	      _TL364: _TD = pds;
	      _TE = _TD->hd;
	      _TF = (struct _tuple44 *)_TE;
	      { struct _tuple44 _T161 = *_TF;
		struct Cyc_Absyn_Vardecl * _T162;
		_T162 = _T161.f1;
		{ struct Cyc_Absyn_Vardecl * other_vd = _T162;
		  _T10 = ctype;
		  _T11 = other_vd;
		  _T12 = _T11->type;
		  _T13 = Cyc_Toc_is_usuable_type(_T10,_T12);
		  if (! _T13) { goto _TL367;
		  }
		  _T14 = Cyc_Toc_vd_in_use(other_vd,newdecls);
		  if (_T14) { goto _TL367;
		  }else { goto _TL369;
		  }
		  _TL369: _T15 = newdecls;
		  _T17 = rgn;
		  { struct Cyc_List_List * _T163 = _region_malloc(_T17,0U,
								  sizeof(struct Cyc_List_List));
		    _T19 = rgn;
		    { struct _tuple43 * _T164 = _region_malloc(_T19,0U,sizeof(struct _tuple43));
		      _T164->f0 = vd;
		      _T164->f1 = other_vd;
		      _T164->f2 = ctype;
		      _T164->f3 = 0;
		      _T18 = (struct _tuple43 *)_T164;
		    }_T163->hd = _T18;
		    _T1A = newdecls;
		    _T163->tl = *_T1A;
		    _T16 = (struct Cyc_List_List *)_T163;
		  }*_T15 = _T16;
		  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T163 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		    _T163->tag = 4;
		    _T163->f1 = other_vd;
		    _T1B = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T163;
		  }_T1C = (void *)_T1B;
		  _T1D = Cyc_Absyn_varb_exp(_T1C,0U);
		  _T1E = ctype;
		  { struct Cyc_Absyn_Exp * lhs = Cyc_Absyn_set_type(_T1D,
								    _T1E);
		    _T1F = lhs;
		    _T20 = Cyc_Toc_deep_copy(rpath);
		    { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_assign_stmt(_T1F,
									_T20,
									0U);
		      _T21 = s;
		      _T22 = rgn;
		      _T23 = nv;
		      _T24 = newdecls;
		      _T25 = prevdecls;
		      _T26 = lpath;
		      _T27 = Cyc_Toc_deep_copy(lhs);
		      _T28 = p2;
		      _T29 = Cyc_Toc_extract_pattern_vars(_T22,_T23,_T24,
							  _T25,_T26,_T27,
							  _T28);
		      _T2A = Cyc_Toc_seq_stmt_opt(_T21,_T29);
		      return _T2A;
		    }
		  }_TL367: ;
		}
	      }_T2B = pds;
	      pds = _T2B->tl;
	      goto _TL366;
	      _TL365: ;
	    }{ struct Cyc_Absyn_Vardecl * new_vd;
	      struct Cyc_Absyn_Exp * lhs;
	      _T2C = Cyc_Toc_temp_var();
	      _T2D = ctype;
	      new_vd = Cyc_Absyn_new_vardecl(0U,_T2C,_T2D,0,0);
	      _T2E = newdecls;
	      _T30 = rgn;
	      { struct Cyc_List_List * _T161 = _region_malloc(_T30,0U,sizeof(struct Cyc_List_List));
		_T32 = rgn;
		{ struct _tuple43 * _T162 = _region_malloc(_T32,0U,sizeof(struct _tuple43));
		  _T162->f0 = vd;
		  _T162->f1 = new_vd;
		  _T162->f2 = ctype;
		  _T162->f3 = 0;
		  _T31 = (struct _tuple43 *)_T162;
		}_T161->hd = _T31;
		_T33 = newdecls;
		_T161->tl = *_T33;
		_T2F = (struct Cyc_List_List *)_T161;
	      }*_T2E = _T2F;
	      { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T161 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		_T161->tag = 4;
		_T161->f1 = new_vd;
		_T34 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T161;
	      }_T35 = (void *)_T34;
	      _T36 = Cyc_Absyn_varb_exp(_T35,0U);
	      _T37 = new_vd;
	      _T38 = _T37->type;
	      { struct Cyc_Absyn_Exp * lhs = Cyc_Absyn_set_type(_T36,_T38);
		_T39 = lhs;
		_T3A = Cyc_Toc_deep_copy(rpath);
		{ struct Cyc_Absyn_Stmt * s = Cyc_Absyn_assign_stmt(_T39,
								    _T3A,
								    0U);
		  _T3B = s;
		  _T3C = rgn;
		  _T3D = nv;
		  _T3E = newdecls;
		  _T3F = prevdecls;
		  _T40 = lpath;
		  _T41 = Cyc_Toc_deep_copy(lhs);
		  _T42 = p2;
		  _T43 = Cyc_Toc_extract_pattern_vars(_T3C,_T3D,_T3E,_T3F,
						      _T40,_T41,_T42);
		  _T44 = Cyc_Toc_seq_stmt_opt(_T3B,_T43);
		  return _T44;
		}
	      }
	    }
	  }
	}
      case 4: 
	{ struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct * _T161 = (struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct *)_T15C;
	  _T160 = _T161->f2;
	}{ struct Cyc_Absyn_Vardecl * vd = _T160;
	  _T45 = vd;
	  _T46 = _T45->type;
	  { void * ctype = Cyc_Toc_typ_to_c_array(_T46);
	    _T47 = prevdecls;
	    { struct Cyc_List_List * pds = *_T47;
	      _TL36D: if (pds != 0) { goto _TL36B;
	      }else { goto _TL36C;
	      }
	      _TL36B: _T48 = pds;
	      _T49 = _T48->hd;
	      _T4A = (struct _tuple44 *)_T49;
	      { struct _tuple44 _T161 = *_T4A;
		struct Cyc_Absyn_Vardecl * _T162;
		_T162 = _T161.f1;
		{ struct Cyc_Absyn_Vardecl * other_vd = _T162;
		  _T4B = ctype;
		  _T4C = other_vd;
		  _T4D = _T4C->type;
		  _T4E = Cyc_Toc_is_usuable_type(_T4B,_T4D);
		  if (! _T4E) { goto _TL36E;
		  }
		  _T4F = Cyc_Toc_vd_in_use(other_vd,newdecls);
		  if (_T4F) { goto _TL36E;
		  }else { goto _TL370;
		  }
		  _TL370: _T50 = newdecls;
		  _T52 = rgn;
		  { struct Cyc_List_List * _T163 = _region_malloc(_T52,0U,
								  sizeof(struct Cyc_List_List));
		    _T54 = rgn;
		    { struct _tuple43 * _T164 = _region_malloc(_T54,0U,sizeof(struct _tuple43));
		      _T164->f0 = vd;
		      _T164->f1 = other_vd;
		      _T164->f2 = ctype;
		      _T164->f3 = 0;
		      _T53 = (struct _tuple43 *)_T164;
		    }_T163->hd = _T53;
		    _T55 = newdecls;
		    _T163->tl = *_T55;
		    _T51 = (struct Cyc_List_List *)_T163;
		  }*_T50 = _T51;
		  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T163 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		    _T163->tag = 4;
		    _T163->f1 = other_vd;
		    _T56 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T163;
		  }_T57 = (void *)_T56;
		  _T58 = Cyc_Absyn_varb_exp(_T57,0U);
		  _T59 = other_vd;
		  _T5A = _T59->type;
		  { struct Cyc_Absyn_Exp * lhs = Cyc_Absyn_set_type(_T58,
								    _T5A);
		    _T5B = lhs;
		    _T5C = Cyc_Toc_deep_copy(rpath);
		    _T5D = Cyc_Absyn_assign_stmt(_T5B,_T5C,0U);
		    return _T5D;
		  }_TL36E: ;
		}
	      }_T5E = pds;
	      pds = _T5E->tl;
	      goto _TL36D;
	      _TL36C: ;
	    }{ struct Cyc_Absyn_Vardecl * new_vd;
	      _T5F = Cyc_Toc_can_use_voidstar(ctype);
	      if (! _T5F) { goto _TL371;
	      }
	      _T60 = Cyc_Toc_temp_var();
	      _T61 = Cyc_Toc_void_star_type();
	      new_vd = Cyc_Absyn_new_vardecl(0U,_T60,_T61,0,0);
	      _T62 = newdecls;
	      _T64 = rgn;
	      { struct Cyc_List_List * _T161 = _region_malloc(_T64,0U,sizeof(struct Cyc_List_List));
		_T66 = rgn;
		{ struct _tuple43 * _T162 = _region_malloc(_T66,0U,sizeof(struct _tuple43));
		  _T162->f0 = vd;
		  _T162->f1 = new_vd;
		  _T162->f2 = ctype;
		  _T162->f3 = 1;
		  _T65 = (struct _tuple43 *)_T162;
		}_T161->hd = _T65;
		_T67 = newdecls;
		_T161->tl = *_T67;
		_T63 = (struct Cyc_List_List *)_T161;
	      }*_T62 = _T63;
	      goto _TL372;
	      _TL371: _T68 = Cyc_Toc_temp_var();
	      _T69 = ctype;
	      new_vd = Cyc_Absyn_new_vardecl(0U,_T68,_T69,0,0);
	      _T6A = newdecls;
	      _T6C = rgn;
	      { struct Cyc_List_List * _T161 = _region_malloc(_T6C,0U,sizeof(struct Cyc_List_List));
		_T6E = rgn;
		{ struct _tuple43 * _T162 = _region_malloc(_T6E,0U,sizeof(struct _tuple43));
		  _T162->f0 = vd;
		  _T162->f1 = new_vd;
		  _T162->f2 = ctype;
		  _T162->f3 = 0;
		  _T6D = (struct _tuple43 *)_T162;
		}_T161->hd = _T6D;
		_T6F = newdecls;
		_T161->tl = *_T6F;
		_T6B = (struct Cyc_List_List *)_T161;
	      }*_T6A = _T6B;
	      _TL372: { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T161 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		_T161->tag = 4;
		_T161->f1 = new_vd;
		_T70 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T161;
	      }_T71 = (void *)_T70;
	      _T72 = Cyc_Absyn_varb_exp(_T71,0U);
	      _T73 = new_vd;
	      _T74 = _T73->type;
	      _T75 = Cyc_Absyn_set_type(_T72,_T74);
	      _T76 = Cyc_Toc_deep_copy(rpath);
	      _T77 = Cyc_Absyn_assign_stmt(_T75,_T76,0U);
	      return _T77;
	    }
	  }
	}
      case 0: 
	return 0;
      case 3: 
	{ struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _T161 = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_T15C;
	  _T160 = _T161->f1;
	  _T15F = _T161->f2;
	}{ struct Cyc_Absyn_Vardecl * vd = _T160;
	  struct Cyc_Absyn_Pat * p2 = _T15F;
	  _T78 = vd;
	  _T78->type = Cyc_Absyn_cstar_type(t,Cyc_Toc_mt_tq);
	  _T79 = vd;
	  _T7A = _T79->type;
	  { void * ctype = Cyc_Toc_typ_to_c_array(_T7A);
	    _T7B = prevdecls;
	    { struct Cyc_List_List * pds = *_T7B;
	      _TL376: if (pds != 0) { goto _TL374;
	      }else { goto _TL375;
	      }
	      _TL374: _T7C = pds;
	      _T7D = _T7C->hd;
	      _T7E = (struct _tuple44 *)_T7D;
	      { struct _tuple44 _T161 = *_T7E;
		struct Cyc_Absyn_Vardecl * _T162;
		_T162 = _T161.f1;
		{ struct Cyc_Absyn_Vardecl * other_vd = _T162;
		  _T7F = ctype;
		  _T80 = other_vd;
		  _T81 = _T80->type;
		  _T82 = Cyc_Toc_is_usuable_type(_T7F,_T81);
		  if (! _T82) { goto _TL377;
		  }
		  _T83 = Cyc_Toc_vd_in_use(other_vd,newdecls);
		  if (_T83) { goto _TL377;
		  }else { goto _TL379;
		  }
		  _TL379: _T84 = newdecls;
		  _T86 = rgn;
		  { struct Cyc_List_List * _T163 = _region_malloc(_T86,0U,
								  sizeof(struct Cyc_List_List));
		    _T88 = rgn;
		    { struct _tuple43 * _T164 = _region_malloc(_T88,0U,sizeof(struct _tuple43));
		      _T164->f0 = vd;
		      _T164->f1 = other_vd;
		      _T164->f2 = ctype;
		      _T164->f3 = 0;
		      _T87 = (struct _tuple43 *)_T164;
		    }_T163->hd = _T87;
		    _T89 = newdecls;
		    _T163->tl = *_T89;
		    _T85 = (struct Cyc_List_List *)_T163;
		  }*_T84 = _T85;
		  _T8A = Cyc_Toc_typ_to_c_array(t);
		  _T8B = Cyc_Toc_mt_tq;
		  { void * ptype = Cyc_Absyn_cstar_type(_T8A,_T8B);
		    { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T163 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		      _T163->tag = 4;
		      _T163->f1 = other_vd;
		      _T8C = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T163;
		    }_T8D = (void *)_T8C;
		    _T8E = Cyc_Absyn_varb_exp(_T8D,0U);
		    _T8F = other_vd;
		    _T90 = _T8F->type;
		    { struct Cyc_Absyn_Exp * vb = Cyc_Absyn_set_type(_T8E,
								     _T90);
		      _T91 = Cyc_Toc_deep_copy(lpath);
		      _T92 = Cyc_Toc_push_address_exp(_T91);
		      _T93 = ptype;
		      { struct Cyc_Absyn_Exp * ptr = Cyc_Absyn_set_type(_T92,
									_T93);
			_T94 = vb;
			_T95 = Cyc_Toc_cast_it(ptype,ptr);
			{ struct Cyc_Absyn_Stmt * s = Cyc_Absyn_assign_stmt(_T94,
									    _T95,
									    0U);
			  _T96 = s;
			  _T97 = Cyc_Toc_extract_pattern_vars(rgn,nv,newdecls,
							      prevdecls,lpath,
							      rpath,p2);
			  _T98 = Cyc_Toc_seq_stmt_opt(_T96,_T97);
			  return _T98;
			}
		      }
		    }
		  }_TL377: ;
		}
	      }_T99 = pds;
	      pds = _T99->tl;
	      goto _TL376;
	      _TL375: ;
	    }{ struct Cyc_Absyn_Vardecl * new_vd;
	      _T9A = Cyc_Toc_can_use_voidstar(ctype);
	      if (! _T9A) { goto _TL37A;
	      }
	      _T9B = Cyc_Toc_temp_var();
	      _T9C = Cyc_Toc_void_star_type();
	      new_vd = Cyc_Absyn_new_vardecl(0U,_T9B,_T9C,0,0);
	      _T9D = newdecls;
	      _T9F = rgn;
	      { struct Cyc_List_List * _T161 = _region_malloc(_T9F,0U,sizeof(struct Cyc_List_List));
		_TA1 = rgn;
		{ struct _tuple43 * _T162 = _region_malloc(_TA1,0U,sizeof(struct _tuple43));
		  _T162->f0 = vd;
		  _T162->f1 = new_vd;
		  _T162->f2 = ctype;
		  _T162->f3 = 1;
		  _TA0 = (struct _tuple43 *)_T162;
		}_T161->hd = _TA0;
		_TA2 = newdecls;
		_T161->tl = *_TA2;
		_T9E = (struct Cyc_List_List *)_T161;
	      }*_T9D = _T9E;
	      goto _TL37B;
	      _TL37A: _TA3 = Cyc_Toc_temp_var();
	      _TA4 = ctype;
	      new_vd = Cyc_Absyn_new_vardecl(0U,_TA3,_TA4,0,0);
	      _TA5 = newdecls;
	      _TA7 = rgn;
	      { struct Cyc_List_List * _T161 = _region_malloc(_TA7,0U,sizeof(struct Cyc_List_List));
		_TA9 = rgn;
		{ struct _tuple43 * _T162 = _region_malloc(_TA9,0U,sizeof(struct _tuple43));
		  _T162->f0 = vd;
		  _T162->f1 = new_vd;
		  _T162->f2 = ctype;
		  _T162->f3 = 0;
		  _TA8 = (struct _tuple43 *)_T162;
		}_T161->hd = _TA8;
		_TAA = newdecls;
		_T161->tl = *_TAA;
		_TA6 = (struct Cyc_List_List *)_T161;
	      }*_TA5 = _TA6;
	      _TL37B: _TAB = Cyc_Toc_typ_to_c_array(t);
	      _TAC = Cyc_Toc_mt_tq;
	      { void * ptype = Cyc_Absyn_cstar_type(_TAB,_TAC);
		_TAD = Cyc_Toc_deep_copy(lpath);
		_TAE = Cyc_Toc_push_address_exp(_TAD);
		_TAF = ptype;
		{ struct Cyc_Absyn_Exp * ptr = Cyc_Absyn_set_type(_TAE,_TAF);
		  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T161 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		    _T161->tag = 4;
		    _T161->f1 = new_vd;
		    _TB0 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T161;
		  }_TB1 = (void *)_TB0;
		  _TB2 = Cyc_Absyn_varb_exp(_TB1,0U);
		  _TB3 = new_vd;
		  _TB4 = _TB3->type;
		  _TB5 = Cyc_Absyn_set_type(_TB2,_TB4);
		  _TB6 = Cyc_Toc_cast_it(ptype,ptr);
		  { struct Cyc_Absyn_Stmt * s = Cyc_Absyn_assign_stmt(_TB5,
								      _TB6,
								      0U);
		    _TB7 = s;
		    _TB8 = Cyc_Toc_extract_pattern_vars(rgn,nv,newdecls,prevdecls,
							lpath,rpath,p2);
		    _TB9 = Cyc_Toc_seq_stmt_opt(_TB7,_TB8);
		    return _TB9;
		  }
		}
	      }
	    }
	  }
	}
      case 8: 
	goto _LLE;
      case 9: 
	_LLE: goto _LL10;
      case 10: 
	_LL10: goto _LL12;
      case 11: 
	_LL12: goto _LL14;
      case 12: 
	_LL14: goto _LL16;
      case 13: 
	_LL16: return 0;
      case 5: 
	_TBA = (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct *)_T15C;
	_TBB = _TBA->f1;
	_TBC = (struct Cyc_Absyn_Pat *)_TBB;
	_TBD = _TBC->r;
	_TBE = (int *)_TBD;
	_TBF = *_TBE;
	if (_TBF != 7) { goto _TL37C;
	}
	{ struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct * _T161 = (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct *)_T15C;
	  _TC0 = _T161->f1;
	  { struct Cyc_Absyn_Pat _T162 = *_TC0;
	    _TC1 = _T162.r;
	    { struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T163 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_TC1;
	      _T160 = _T163->f1;
	      _T15E = _T163->f2;
	      _T15D = _T163->f3;
	    }
	  }
	}{ struct Cyc_Absyn_Datatypedecl * tud = _T160;
	  struct Cyc_Absyn_Datatypefield * tuf = _T15E;
	  struct Cyc_List_List * ps = _T15D;
	  if (ps != 0) { goto _TL37E;
	  }
	  return 0;
	  _TL37E: _TC2 = tuf;
	  _TC3 = _TC2->name;
	  _TC4 = tud;
	  _TC5 = _TC4->name;
	  { struct _tuple1 * tufstrct = Cyc_Toc_collapse_qvars(_TC3,_TC5);
	    _TC6 = Cyc_Absyn_strctq(tufstrct);
	    _TC7 = Cyc_Toc_mt_tq;
	    { void * field_ptr_typ = Cyc_Absyn_cstar_type(_TC6,_TC7);
	      lpath = Cyc_Toc_cast_it(field_ptr_typ,lpath);
	      { int cnt = 1;
		_TC8 = tuf;
		{ struct Cyc_List_List * tuf_tqts = _TC8->typs;
		  struct Cyc_Absyn_Stmt * s = 0;
		  _TC9 = Cyc_Toc_temp_var();
		  _TCA = field_ptr_typ;
		  _TCB = Cyc_Toc_cast_it(field_ptr_typ,rpath);
		  { struct Cyc_Absyn_Vardecl * new_vd = Cyc_Absyn_new_vardecl(0U,
									      _TC9,
									      _TCA,
									      _TCB,
									      0);
		    { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T161 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		      _T161->tag = 4;
		      _T161->f1 = new_vd;
		      _TCC = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T161;
		    }_TCD = (void *)_TCC;
		    _TCE = Cyc_Absyn_varb_exp(_TCD,0U);
		    _TCF = field_ptr_typ;
		    { struct Cyc_Absyn_Exp * new_rpath = Cyc_Absyn_set_type(_TCE,
									    _TCF);
		      _TL383: if (ps != 0) { goto _TL381;
		      }else { goto _TL382;
		      }
		      _TL381: _TD0 = ps;
		      _TD1 = _TD0->hd;
		      { struct Cyc_Absyn_Pat * p2 = (struct Cyc_Absyn_Pat *)_TD1;
			_TD2 = p2;
			_TD3 = _TD2->r;
			_TD4 = &Cyc_Absyn_Wild_p_val;
			_TD5 = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_TD4;
			_TD6 = (void *)_TD5;
			if (_TD3 != _TD6) { goto _TL384;
			}
			goto _TL380;
			_TL384: _TD7 = _check_null(tuf_tqts);
			_TD8 = _TD7->hd;
			_TD9 = (struct _tuple26 *)_TD8;
			_TDA = *_TD9;
			{ void * tuf_typ = _TDA.f1;
			  _TDB = p2;
			  _TDC = _TDB->topt;
			  { void * t2 = _check_null(_TDC);
			    void * t2c = Cyc_Toc_typ_to_c_array(t2);
			    _TDD = Cyc_Toc_deep_copy(new_rpath);
			    _TDE = Cyc_Absyn_fieldname(cnt);
			    { struct Cyc_Absyn_Exp * rarrow_exp = Cyc_Absyn_aggrarrow_exp(_TDD,
											  _TDE,
											  0U);
			      _TDF = Cyc_Toc_deep_copy(lpath);
			      _TE0 = Cyc_Absyn_fieldname(cnt);
			      { struct Cyc_Absyn_Exp * larrow_exp = Cyc_Absyn_aggrarrow_exp(_TDF,
											    _TE0,
											    0U);
				Cyc_Absyn_set_type(rarrow_exp,t2c);
				Cyc_Absyn_set_type(larrow_exp,t2c);
				_TE1 = Cyc_Toc_typ_to_c(tuf_typ);
				_TE2 = Cyc_Toc_is_void_star_or_boxed_tvar(_TE1);
				if (! _TE2) { goto _TL386;
				}
				rarrow_exp = Cyc_Toc_cast_it(t2c,rarrow_exp);
				larrow_exp = Cyc_Toc_cast_it(t2c,larrow_exp);
				goto _TL387;
				_TL386: _TL387: _TE3 = s;
				_TE4 = Cyc_Toc_extract_pattern_vars(rgn,nv,
								    newdecls,
								    prevdecls,
								    larrow_exp,
								    rarrow_exp,
								    p2);
				s = Cyc_Toc_seq_stmt_opt(_TE3,_TE4);
			      }
			    }
			  }
			}
		      }_TL380: _TE5 = ps;
		      ps = _TE5->tl;
		      _TE6 = tuf_tqts;
		      tuf_tqts = _TE6->tl;
		      cnt = cnt + 1;
		      goto _TL383;
		      _TL382: if (s == 0) { goto _TL388;
		      }
		      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T161 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
			_T161->tag = 0;
			_T161->f1 = new_vd;
			_TE7 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T161;
		      }_TE8 = (void *)_TE7;
		      _TE9 = Cyc_Absyn_new_decl(_TE8,0U);
		      _TEA = s;
		      s = Cyc_Absyn_decl_stmt(_TE9,_TEA,0U);
		      goto _TL389;
		      _TL388: _TL389: _TEB = s;
		      return _TEB;
		    }
		  }
		}
	      }
	    }
	  }
	}_TL37C: { struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct * _T161 = (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct *)_T15C;
	  _T160 = _T161->f1;
	}{ struct Cyc_Absyn_Pat * p2 = _T160;
	  _TEC = p2;
	  _TED = _TEC->topt;
	  { void * t2 = _check_null(_TED);
	    void * t2c = Cyc_Toc_typ_to_c_array(t2);
	    _TEE = Cyc_Toc_temp_var();
	    _TEF = t2c;
	    _TF0 = Cyc_Absyn_deref_exp(rpath,0U);
	    _TF1 = t2c;
	    _TF2 = Cyc_Absyn_set_type(_TF0,_TF1);
	    { struct Cyc_Absyn_Vardecl * new_vd = Cyc_Absyn_new_vardecl(0U,
									_TEE,
									_TEF,
									_TF2,
									0);
	      { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T161 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		_T161->tag = 4;
		_T161->f1 = new_vd;
		_TF3 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T161;
	      }_TF4 = (void *)_TF3;
	      _TF5 = Cyc_Absyn_varb_exp(_TF4,0U);
	      _TF6 = t2c;
	      { struct Cyc_Absyn_Exp * rp = Cyc_Absyn_set_type(_TF5,_TF6);
		_TF7 = rgn;
		_TF8 = nv;
		_TF9 = newdecls;
		_TFA = prevdecls;
		_TFB = Cyc_Absyn_deref_exp(lpath,0U);
		_TFC = t2c;
		_TFD = Cyc_Absyn_set_type(_TFB,_TFC);
		_TFE = rp;
		_TFF = p2;
		{ struct Cyc_Absyn_Stmt * s = Cyc_Toc_extract_pattern_vars(_TF7,
									   _TF8,
									   _TF9,
									   _TFA,
									   _TFD,
									   _TFE,
									   _TFF);
		  if (s == 0) { goto _TL38A;
		  }
		  { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T161 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
		    _T161->tag = 0;
		    _T161->f1 = new_vd;
		    _T100 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T161;
		  }_T101 = (void *)_T100;
		  _T102 = Cyc_Absyn_new_decl(_T101,0U);
		  _T103 = s;
		  s = Cyc_Absyn_decl_stmt(_T102,_T103,0U);
		  goto _TL38B;
		  _TL38A: _TL38B: _T104 = s;
		  return _T104;
		}
	      }
	    }
	  }
	}
      case 7: 
	{ struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T161 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_T15C;
	  _T160 = _T161->f3;
	}{ struct Cyc_List_List * ps = _T160;
	  struct Cyc_Absyn_Stmt * s = 0;
	  { int cnt = 1;
	    _TL38F: if (ps != 0) { goto _TL38D;
	    }else { goto _TL38E;
	    }
	    _TL38D: _T105 = ps;
	    _T106 = _T105->hd;
	    { struct Cyc_Absyn_Pat * p2 = (struct Cyc_Absyn_Pat *)_T106;
	      _T107 = p2;
	      _T108 = _T107->r;
	      _T109 = &Cyc_Absyn_Wild_p_val;
	      _T10A = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T109;
	      _T10B = (void *)_T10A;
	      if (_T108 != _T10B) { goto _TL390;
	      }
	      goto _TL38C;
	      _TL390: _T10C = p2;
	      _T10D = _T10C->topt;
	      { void * t2 = _check_null(_T10D);
		void * t2c = Cyc_Toc_typ_to_c_array(t2);
		struct _fat_ptr * f = Cyc_Absyn_fieldname(cnt);
		_T10E = Cyc_Toc_member_exp(lpath,f,0U);
		_T10F = t2c;
		{ struct Cyc_Absyn_Exp * lp = Cyc_Absyn_set_type(_T10E,_T10F);
		  _T110 = Cyc_Toc_member_exp(rpath,f,0U);
		  _T111 = t2c;
		  { struct Cyc_Absyn_Exp * rp = Cyc_Absyn_set_type(_T110,
								   _T111);
		    _T112 = s;
		    _T113 = Cyc_Toc_extract_pattern_vars(rgn,nv,newdecls,
							 prevdecls,lp,rp,
							 p2);
		    s = Cyc_Toc_seq_stmt_opt(_T112,_T113);
		  }
		}
	      }
	    }_TL38C: _T114 = ps;
	    ps = _T114->tl;
	    cnt = cnt + 1;
	    goto _TL38F;
	    _TL38E: ;
	  }_T115 = s;
	  return _T115;
	}
      case 6: 
	{ struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T161 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T15C;
	  _T116 = _T161->f1;
	  _T160 = (void *)_T116;
	  _T15D = _T161->f4;
	}{ void * topt = _T160;
	  struct Cyc_List_List * dlps = _T15D;
	  if (topt != 0) { goto _TL392;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T161;
	    _T161.tag = 0;
	    _T161.f1 = _tag_fat("unresolved aggregate pattern!",sizeof(char),
				30U);
	    _T117 = _T161;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T161 = _T117;
	    void * _T162[1];
	    _T162[0] = &_T161;
	    { int (* _T163)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	      _T118 = _T163;
	    }_T119 = _tag_fat(_T162,sizeof(void *),1);
	    _T118(_T119);
	  }goto _TL393;
	  _TL392: _TL393: { void * atype = topt;
	    struct Cyc_List_List * fields;
	    long is_tagged = 0;
	    { void * _T161 = Cyc_Absyn_compress(atype);
	      struct Cyc_List_List * _T162;
	      long _T163;
	      enum Cyc_Absyn_AggrKind _T164;
	      union Cyc_Absyn_AggrInfo _T165;
	      _T11A = (int *)_T161;
	      _T11B = *_T11A;
	      switch (_T11B) {
	      case 0: 
		_T11C = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T161;
		_T11D = _T11C->f1;
		_T11E = (int *)_T11D;
		_T11F = *_T11E;
		if (_T11F != 24) { goto _TL395;
		}
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T166 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T161;
		  _T120 = _T166->f1;
		  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T167 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T120;
		    _T165 = _T167->f1;
		  }
		}{ union Cyc_Absyn_AggrInfo info = _T165;
		  struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
		  _T121 = ad;
		  _T122 = _T121->impl;
		  _T123 = _check_null(_T122);
		  fields = _T123->fields;
		  _T124 = ad;
		  _T125 = _T124->impl;
		  is_tagged = _T125->tagged;
		  goto _LL2E;
		}_TL395: goto _LL33;
	      case 7: 
		{ struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T166 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T161;
		  _T164 = _T166->f1;
		  _T163 = _T166->f2;
		  _T162 = _T166->f3;
		}{ enum Cyc_Absyn_AggrKind ak = _T164;
		  long is_tuple = _T163;
		  struct Cyc_List_List * fs = _T162;
		  fields = fs;
		  goto _LL2E;
		}
	      default: 
		_LL33: { struct Cyc_Warn_String_Warn_Warg_struct _T166;
		  _T166.tag = 0;
		  _T166.f1 = _tag_fat("bad type in aggr pattern",sizeof(char),
				      25U);
		  _T126 = _T166;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T166 = _T126;
		  void * _T167[1];
		  _T167[0] = &_T166;
		  { int (* _T168)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		    _T127 = _T168;
		  }_T128 = _tag_fat(_T167,sizeof(void *),1);
		  _T127(_T128);
		}
	      }
	      _LL2E: ;
	    }{ struct Cyc_Absyn_Stmt * s = 0;
	      _TL39A: if (dlps != 0) { goto _TL398;
	      }else { goto _TL399;
	      }
	      _TL398: _T129 = dlps;
	      _T12A = _T129->hd;
	      { struct _tuple45 * tup = (struct _tuple45 *)_T12A;
		_T12B = tup;
		_T12C = *_T12B;
		{ struct Cyc_Absyn_Pat * p2 = _T12C.f1;
		  _T12D = p2;
		  _T12E = _T12D->r;
		  _T12F = &Cyc_Absyn_Wild_p_val;
		  _T130 = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T12F;
		  _T131 = (void *)_T130;
		  if (_T12E != _T131) { goto _TL39B;
		  }
		  goto _TL397;
		  _TL39B: _T132 = tup;
		  _T133 = *_T132;
		  _T134 = _T133.f0;
		  { struct _fat_ptr * f = Cyc_Absyn_designatorlist_to_fieldname(_T134);
		    _T135 = p2;
		    _T136 = _T135->topt;
		    { void * t2 = _check_null(_T136);
		      void * t2c = Cyc_Toc_typ_to_c_array(t2);
		      _T137 = Cyc_Absyn_lookup_field(fields,f);
		      _T138 = _check_null(_T137);
		      { void * ftype = _T138->type;
			struct Cyc_Absyn_Exp * lmemexp = Cyc_Toc_member_exp(lpath,
									    f,
									    0U);
			struct Cyc_Absyn_Exp * rmemexp = Cyc_Toc_member_exp(rpath,
									    f,
									    0U);
			_T139 = is_tagged;
			if (! _T139) { goto _TL39D;
			}
			{ void * u = Cyc_Toc_tagged_union_field_struct(atype,
								       f);
			  Cyc_Absyn_set_type(lmemexp,u);
			  Cyc_Absyn_set_type(rmemexp,u);
			  lmemexp = Cyc_Toc_member_exp(lmemexp,Cyc_Toc_val_sp,
						       0U);
			  rmemexp = Cyc_Toc_member_exp(rmemexp,Cyc_Toc_val_sp,
						       0U);
			}goto _TL39E;
			_TL39D: _TL39E: _T13A = lmemexp;
			_T13A->topt = Cyc_Toc_typ_to_c_array(ftype);
			_T13B = rmemexp;
			_T13B->topt = Cyc_Toc_typ_to_c_array(ftype);
			_T13C = Cyc_Toc_is_void_star_or_boxed_tvar(ftype);
			if (! _T13C) { goto _TL39F;
			}
			lmemexp = Cyc_Toc_cast_it(t2c,lmemexp);
			rmemexp = Cyc_Toc_cast_it(t2c,rmemexp);
			goto _TL3A0;
			_TL39F: _T13D = Cyc_Tcutil_is_array_type(ftype);
			if (! _T13D) { goto _TL3A1;
			}
			rmemexp = Cyc_Toc_deep_copy(lmemexp);
			goto _TL3A2;
			_TL3A1: _T13E = Cyc_Tcutil_is_array_type(ftype);
			if (_T13E) { goto _TL3A3;
			}else { goto _TL3A5;
			}
			_TL3A5: _T13F = &Cyc_Kinds_ak;
			_T140 = (struct Cyc_Absyn_Kind *)_T13F;
			_T141 = Cyc_Tcutil_type_kind(ftype);
			_T142 = Cyc_Kinds_kind_leq(_T140,_T141);
			if (! _T142) { goto _TL3A3;
			}
			{ void * ct = Cyc_Absyn_cstar_type(t2c,Cyc_Toc_mt_tq);
			  _T143 = ct;
			  _T144 = Cyc_Absyn_address_exp(lmemexp,0U);
			  _T145 = ct;
			  _T146 = Cyc_Absyn_set_type(_T144,_T145);
			  _T147 = Cyc_Toc_cast_it(_T143,_T146);
			  lmemexp = Cyc_Absyn_deref_exp(_T147,0U);
			  _T148 = lmemexp;
			  _T148->topt = t2c;
			  _T149 = ct;
			  _T14A = Cyc_Absyn_address_exp(rmemexp,0U);
			  _T14B = ct;
			  _T14C = Cyc_Absyn_set_type(_T14A,_T14B);
			  _T14D = Cyc_Toc_cast_it(_T149,_T14C);
			  rmemexp = Cyc_Absyn_deref_exp(_T14D,0U);
			  _T14E = lmemexp;
			  _T14E->topt = t2c;
			}goto _TL3A4;
			_TL3A3: _TL3A4: _TL3A2: _TL3A0: _T14F = s;
			_T150 = Cyc_Toc_extract_pattern_vars(rgn,nv,newdecls,
							     prevdecls,lmemexp,
							     rmemexp,p2);
			s = Cyc_Toc_seq_stmt_opt(_T14F,_T150);
		      }
		    }
		  }
		}
	      }_TL397: _T151 = dlps;
	      dlps = _T151->tl;
	      goto _TL39A;
	      _TL399: _T152 = s;
	      return _T152;
	    }
	  }
	}
      case 14: 
	{ struct Cyc_Warn_String_Warn_Warg_struct _T161;
	  _T161.tag = 0;
	  _T161.f1 = _tag_fat("unknownid pat",sizeof(char),14U);
	  _T153 = _T161;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T161 = _T153;
	  void * _T162[1];
	  _T162[0] = &_T161;
	  { int (* _T163)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T154 = _T163;
	  }_T155 = _tag_fat(_T162,sizeof(void *),1);
	  _T154(_T155);
	}
      case 15: 
	{ struct Cyc_Warn_String_Warn_Warg_struct _T161;
	  _T161.tag = 0;
	  _T161.f1 = _tag_fat("unknowncall pat",sizeof(char),16U);
	  _T156 = _T161;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T161 = _T156;
	  void * _T162[1];
	  _T162[0] = &_T161;
	  { int (* _T163)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T157 = _T163;
	  }_T158 = _tag_fat(_T162,sizeof(void *),1);
	  _T157(_T158);
	}
      default: 
	{ struct Cyc_Warn_String_Warn_Warg_struct _T161;
	  _T161.tag = 0;
	  _T161.f1 = _tag_fat("exp pat",sizeof(char),8U);
	  _T159 = _T161;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T161 = _T159;
	  void * _T162[1];
	  _T162[0] = &_T161;
	  { int (* _T163)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T15A = _T163;
	  }_T15B = _tag_fat(_T162,sizeof(void *),1);
	  _T15A(_T15B);
	}
      }
      ;
    }
  }
}
static void Cyc_Toc_subst_pattern_vars(struct Cyc_List_List * env,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T3;
  void * _T4;
  int * _T5;
  unsigned int _T6;
  void * _T7;
  void * _T8;
  struct _handler_cons * _T9;
  int _TA;
  struct Cyc_Absyn_Vardecl * _TB;
  void * _TC;
  struct Cyc_Absyn_Vardecl * (* _TD)(struct Cyc_List_List *,struct Cyc_Absyn_Vardecl *);
  void * (* _TE)(struct Cyc_List_List *,void *);
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _TF;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T10;
  struct Cyc_Absyn_Vardecl * (* _T11)(struct Cyc_List_List *,struct Cyc_Absyn_Vardecl *);
  void * (* _T12)(struct Cyc_List_List *,void *);
  void * _T13;
  struct Cyc_Absyn_Exp * _T14;
  struct Cyc_Absyn_Vardecl * _T15;
  struct Cyc_Absyn_Exp * _T16;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T17;
  void * _T18;
  struct Cyc_Core_Not_found_exn_struct * _T19;
  char * _T1A;
  char * _T1B;
  void (* _T1C)(void (*)(struct Cyc_List_List *,struct Cyc_Absyn_Exp *),struct Cyc_List_List *,
		struct Cyc_List_List *);
  void (* _T1D)(void (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct _tuple22 * _T23;
  struct _tuple22 _T24;
  struct Cyc_Absyn_Exp * _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_Warn_String_Warn_Warg_struct _T27;
  int (* _T28)(struct _fat_ptr);
  void * (* _T29)(struct _fat_ptr);
  struct _fat_ptr _T2A;
  _T0 = e;
  { void * _T2B = _T0->r;
    struct Cyc_List_List * _T2C;
    struct Cyc_Absyn_Exp * _T2D;
    struct Cyc_Absyn_Exp * _T2E;
    struct Cyc_Absyn_Exp * _T2F;
    struct Cyc_Absyn_Vardecl * _T30;
    _T1 = (int *)_T2B;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      _T3 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T2B;
      _T4 = _T3->f1;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      switch (_T6) {
      case 5: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T2B;
	  _T7 = _T31->f1;
	  { struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T32 = (struct Cyc_Absyn_Pat_b_Absyn_Binding_struct *)_T7;
	    _T30 = _T32->f1;
	  }
	}{ struct Cyc_Absyn_Vardecl * vd = _T30;
	  _T30 = vd;
	  goto _LL4;
	}
      case 4: 
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T2B;
	  _T8 = _T31->f1;
	  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T32 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T8;
	    _T30 = _T32->f1;
	  }
	}_LL4: { struct Cyc_Absyn_Vardecl * vd = _T30;
	  { struct _handler_cons _T31;
	    _T9 = &_T31;
	    _push_handler(_T9);
	    { int _T32 = 0;
	      _TA = setjmp(_T31.handler);
	      if (! _TA) { goto _TL3A8;
	      }
	      _T32 = 1;
	      goto _TL3A9;
	      _TL3A8: _TL3A9: if (_T32) { goto _TL3AA;
	      }else { goto _TL3AC;
	      }
	      _TL3AC: _TB = vd;
	      _TC = _TB->type;
	      { void * ctype = Cyc_Toc_typ_to_c_array(_TC);
		_TE = Cyc_List_assoc;
		{ struct Cyc_Absyn_Vardecl * (* _T33)(struct Cyc_List_List *,
						      struct Cyc_Absyn_Vardecl *) = (struct Cyc_Absyn_Vardecl * (*)(struct Cyc_List_List *,
														    struct Cyc_Absyn_Vardecl *))_TE;
		  _TD = _T33;
		}{ struct Cyc_Absyn_Vardecl * tmpvd = _TD(env,vd);
		  { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T33 = _cycalloc(sizeof(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct));
		    _T33->tag = 1;
		    { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T34 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		      _T34->tag = 4;
		      _T12 = Cyc_List_assoc;
		      { struct Cyc_Absyn_Vardecl * (* _T35)(struct Cyc_List_List *,
							    struct Cyc_Absyn_Vardecl *) = (struct Cyc_Absyn_Vardecl * (*)(struct Cyc_List_List *,
															  struct Cyc_Absyn_Vardecl *))_T12;
			_T11 = _T35;
		      }_T34->f1 = _T11(env,vd);
		      _T10 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T34;
		    }_T33->f1 = (void *)_T10;
		    _TF = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T33;
		  }_T13 = (void *)_TF;
		  { struct Cyc_Absyn_Exp * e1 = Cyc_Absyn_new_exp(_T13,0U);
		    _T14 = e1;
		    _T15 = tmpvd;
		    _T14->topt = _T15->type;
		    _T16 = e;
		    { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T33 = _cycalloc(sizeof(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct));
		      _T33->tag = 14;
		      _T33->f1 = ctype;
		      _T33->f2 = e1;
		      _T33->f3 = 0;
		      _T33->f4 = 1U;
		      _T17 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T33;
		    }_T16->r = (void *)_T17;
		  }
		}
	      }_pop_handler();
	      goto _TL3AB;
	      _TL3AA: _T18 = Cyc_Core_get_exn_thrown();
	      { void * _T33 = (void *)_T18;
		void * _T34;
		_T19 = (struct Cyc_Core_Not_found_exn_struct *)_T33;
		_T1A = _T19->tag;
		_T1B = Cyc_Core_Not_found;
		if (_T1A != _T1B) { goto _TL3AD;
		}
		goto _LL41;
		_TL3AD: _T34 = _T33;
		{ void * exn = _T34;
		  _rethrow(exn);
		}_LL41: ;
	      }_TL3AB: ;
	    }
	  }goto _LL0;
	}
      default: 
	goto _LL3F;
      }
      ;
    case 6: 
      { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
	_T2E = _T31->f2;
	_T2D = _T31->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T2F;
	struct Cyc_Absyn_Exp * e2 = _T2E;
	struct Cyc_Absyn_Exp * e3 = _T2D;
	Cyc_Toc_subst_pattern_vars(env,e1);
	_T2F = e2;
	_T2E = e3;
	goto _LL8;
      }
    case 26: 
      { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f2;
	_T2E = _T31->f3;
      }_LL8: { struct Cyc_Absyn_Exp * e1 = _T2F;
	struct Cyc_Absyn_Exp * e2 = _T2E;
	_T2F = e1;
	_T2E = e2;
	goto _LLA;
      }
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
	_T2E = _T31->f2;
      }_LLA: { struct Cyc_Absyn_Exp * e1 = _T2F;
	struct Cyc_Absyn_Exp * e2 = _T2E;
	_T2F = e1;
	_T2E = e2;
	goto _LLC;
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
	_T2E = _T31->f2;
      }_LLC: { struct Cyc_Absyn_Exp * e1 = _T2F;
	struct Cyc_Absyn_Exp * e2 = _T2E;
	_T2F = e1;
	_T2E = e2;
	goto _LLE;
      }
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
	_T2E = _T31->f2;
      }_LLE: { struct Cyc_Absyn_Exp * e1 = _T2F;
	struct Cyc_Absyn_Exp * e2 = _T2E;
	_T2F = e1;
	_T2E = e2;
	goto _LL10;
      }
    case 9: 
      { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
	_T2E = _T31->f2;
      }_LL10: { struct Cyc_Absyn_Exp * e1 = _T2F;
	struct Cyc_Absyn_Exp * e2 = _T2E;
	Cyc_Toc_subst_pattern_vars(env,e1);
	_T2F = e2;
	goto _LL12;
      }
    case 40: 
      { struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
      }_LL12: { struct Cyc_Absyn_Exp * e = _T2F;
	_T2F = e;
	goto _LL14;
      }
    case 12: 
      { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
      }_LL14: { struct Cyc_Absyn_Exp * e = _T2F;
	_T2F = e;
	goto _LL16;
      }
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
      }_LL16: { struct Cyc_Absyn_Exp * e = _T2F;
	_T2F = e;
	goto _LL18;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f2;
      }_LL18: { struct Cyc_Absyn_Exp * e = _T2F;
	_T2F = e;
	goto _LL1A;
      }
    case 18: 
      { struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
      }_LL1A: { struct Cyc_Absyn_Exp * e = _T2F;
	_T2F = e;
	goto _LL1C;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
      }_LL1C: { struct Cyc_Absyn_Exp * e = _T2F;
	_T2F = e;
	goto _LL1E;
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
      }_LL1E: { struct Cyc_Absyn_Exp * e = _T2F;
	_T2F = e;
	goto _LL20;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
      }_LL20: { struct Cyc_Absyn_Exp * e = _T2F;
	_T2F = e;
	goto _LL22;
      }
    case 27: 
      { struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
      }_LL22: { struct Cyc_Absyn_Exp * e = _T2F;
	_T2F = e;
	goto _LL24;
      }
    case 15: 
      { struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
      }_LL24: { struct Cyc_Absyn_Exp * e = _T2F;
	Cyc_Toc_subst_pattern_vars(env,e);
	goto _LL0;
      }
    case 4: 
      { struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
	_T2E = _T31->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T2F;
	struct Cyc_Absyn_Exp * e2 = _T2E;
	Cyc_Toc_subst_pattern_vars(env,e1);
	Cyc_Toc_subst_pattern_vars(env,e2);
	goto _LL0;
      }
    case 10: 
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T2B;
	_T2F = _T31->f1;
	_T2C = _T31->f2;
      }{ struct Cyc_Absyn_Exp * e = _T2F;
	struct Cyc_List_List * es = _T2C;
	Cyc_Toc_subst_pattern_vars(env,e);
	_T2C = es;
	goto _LL2A;
      }
    case 3: 
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T2B;
	_T2C = _T31->f2;
      }_LL2A: { struct Cyc_List_List * es = _T2C;
	_T1D = Cyc_List_iter_c;
	{ void (* _T31)(void (*)(struct Cyc_List_List *,struct Cyc_Absyn_Exp *),
			struct Cyc_List_List *,struct Cyc_List_List *) = (void (*)(void (*)(struct Cyc_List_List *,
											    struct Cyc_Absyn_Exp *),
										   struct Cyc_List_List *,
										   struct Cyc_List_List *))_T1D;
	  _T1C = _T31;
	}_T1E = env;
	_T1F = es;
	_T1C(Cyc_Toc_subst_pattern_vars,_T1E,_T1F);
	goto _LL0;
      }
    case 35: 
      { struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T2B;
	_T2C = _T31->f2;
      }{ struct Cyc_List_List * dles = _T2C;
	_T2C = dles;
	goto _LL2E;
      }
    case 28: 
      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T2B;
	_T2C = _T31->f3;
      }_LL2E: { struct Cyc_List_List * dles = _T2C;
	_T2C = dles;
	goto _LL30;
      }
    case 29: 
      { struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T2B;
	_T2C = _T31->f3;
      }_LL30: { struct Cyc_List_List * dles = _T2C;
	_T2C = dles;
	goto _LL32;
      }
    case 25: 
      { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T2B;
	_T2C = _T31->f1;
      }_LL32: { struct Cyc_List_List * dles = _T2C;
	_T2C = dles;
	goto _LL34;
      }
    case 24: 
      { struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct * _T31 = (struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct *)_T2B;
	_T2C = _T31->f2;
      }_LL34: { struct Cyc_List_List * dles = _T2C;
	_TL3B2: if (dles != 0) { goto _TL3B0;
	}else { goto _TL3B1;
	}
	_TL3B0: _T20 = env;
	_T21 = dles;
	_T22 = _T21->hd;
	_T23 = (struct _tuple22 *)_T22;
	_T24 = *_T23;
	_T25 = _T24.f1;
	Cyc_Toc_subst_pattern_vars(_T20,_T25);
	_T26 = dles;
	dles = _T26->tl;
	goto _TL3B2;
	_TL3B1: goto _LL0;
      }
    case 37: 
      goto _LL38;
    case 11: 
      _LL38: goto _LL3A;
    case 33: 
      _LL3A: goto _LL3C;
    case 16: 
      _LL3C: goto _LL3E;
    case 30: 
      _LL3E: { struct Cyc_Warn_String_Warn_Warg_struct _T31;
	_T31.tag = 0;
	_T31.f1 = _tag_fat("subst_pattern_vars, unexpected exp",sizeof(char),
			   35U);
	_T27 = _T31;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T31 = _T27;
	void * _T32[1];
	_T32[0] = &_T31;
	_T29 = Cyc_Warn_impos2;
	{ int (* _T33)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T29;
	  _T28 = _T33;
	}_T2A = _tag_fat(_T32,sizeof(void *),1);
	_T28(_T2A);
      }
    default: 
      _LL3F: goto _LL0;
    }
    _LL0: ;
  }
}
 struct _tuple46 {
  struct Cyc_Toc_Env * f0;
  struct _fat_ptr * f1;
  struct Cyc_Absyn_Stmt * f2;
};
static struct Cyc_Absyn_Stmt * Cyc_Toc_compile_decision_tree(struct _RegionHandle * rgn,
							     struct Cyc_Toc_Env * nv,
							     struct Cyc_List_List * * decls,
							     struct Cyc_List_List * * bodies,
							     void * dopt,
							     struct Cyc_List_List * lscs,
							     struct Cyc_Absyn_Exp * v) {
  struct Cyc_Absyn_Stmt * _T0;
  void * _T1;
  int * _T2;
  unsigned int _T3;
  struct Cyc_Absyn_Stmt * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  long * _T8;
  struct Cyc_Absyn_Switch_clause * _T9;
  struct Cyc_Absyn_Stmt * _TA;
  struct Cyc_Tcpat_Rhs * _TB;
  struct Cyc_Absyn_Stmt * _TC;
  long * _TD;
  long _TE;
  struct Cyc_Absyn_Stmt * _TF;
  long * _T10;
  struct _RegionHandle * _T11;
  struct Cyc_Toc_Env * * _T12;
  struct Cyc_List_List * * _T13;
  struct Cyc_List_List * * _T14;
  struct Cyc_Absyn_Exp * _T15;
  struct Cyc_Absyn_Exp * _T16;
  struct Cyc_Absyn_Switch_clause * _T17;
  struct Cyc_Absyn_Pat * _T18;
  struct Cyc_Absyn_Switch_clause * _T19;
  struct Cyc_List_List * _T1A;
  void * _T1B;
  struct _tuple43 * _T1C;
  struct Cyc_List_List * * _T1D;
  struct Cyc_List_List * _T1E;
  struct _RegionHandle * _T1F;
  struct _tuple44 * _T20;
  struct _RegionHandle * _T21;
  struct Cyc_List_List * * _T22;
  long _T23;
  struct Cyc_Absyn_Vardecl * _T24;
  void * _T25;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T26;
  void * _T27;
  struct Cyc_Absyn_Exp * _T28;
  struct Cyc_Absyn_Vardecl * _T29;
  void * _T2A;
  struct Cyc_Absyn_Exp * _T2B;
  struct Cyc_Absyn_Vardecl * _T2C;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T2D;
  void * _T2E;
  struct Cyc_Absyn_Exp * _T2F;
  struct Cyc_Absyn_Vardecl * _T30;
  void * _T31;
  struct Cyc_Absyn_Vardecl * _T32;
  struct Cyc_Absyn_Exp * _T33;
  struct Cyc_Absyn_Vardecl * _T34;
  struct Cyc_Absyn_Vardecl * _T35;
  struct Cyc_Absyn_Decl * _T36;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T37;
  struct Cyc_Absyn_Stmt * _T38;
  struct Cyc_List_List * _T39;
  struct Cyc_List_List * * _T3A;
  struct Cyc_List_List * _T3B;
  struct _RegionHandle * _T3C;
  struct _tuple46 * _T3D;
  struct _RegionHandle * _T3E;
  struct Cyc_List_List * * _T3F;
  struct Cyc_Absyn_Stmt * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_Warn_String_Warn_Warg_struct _T42;
  int (* _T43)(struct _fat_ptr ap);
  struct _fat_ptr _T44;
  void * _T45;
  void * _T46;
  struct Cyc_List_List * _T47;
  struct Cyc_Absyn_Exp * _T48;
  struct Cyc_List_List * _T49;
  struct Cyc_Absyn_Switch_clause * _T4A;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T4B;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T4C;
  void * _T4D;
  struct Cyc_List_List * _T4E;
  struct Cyc_List_List * _T4F;
  void * _T50;
  struct _tuple38 * _T51;
  struct Cyc_List_List * _T52;
  struct Cyc_Absyn_Switch_clause * _T53;
  struct Cyc_List_List * _T54;
  void * _T55;
  int * _T56;
  unsigned int _T57;
  struct Cyc_Absyn_Exp * _T58;
  int * _T59;
  unsigned int _T5A;
  void * _T5B;
  struct Cyc_Absyn_Exp * _T5C;
  struct Cyc_Absyn_Exp * _T5D;
  struct Cyc_Absyn_Exp * _T5E;
  void * _T5F;
  void * _T60;
  void * _T61;
  struct Cyc_Absyn_Exp * _T62;
  void * _T63;
  struct Cyc_Absyn_Exp * _T64;
  void * _T65;
  struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _T66;
  void * _T67;
  void * _T68;
  int * _T69;
  int _T6A;
  void * _T6B;
  struct Cyc_List_List * _T6C;
  struct Cyc_List_List * _T6D;
  struct _tuple38 * _T6E;
  struct _tuple38 * _T6F;
  void * _T70;
  int * _T71;
  int _T72;
  struct Cyc_List_List * _T73;
  struct Cyc_List_List * _T74;
  struct Cyc_List_List * _T75;
  struct Cyc_List_List * _T76;
  void * _T77;
  struct _tuple38 * _T78;
  void * _T79;
  struct Cyc_List_List * _T7A;
  void * _T7B;
  long * _T7C;
  struct Cyc_Absyn_Switch_clause * _T7D;
  struct Cyc_Absyn_Stmt * _T7E;
  struct Cyc_Tcpat_Rhs * _T7F;
  struct Cyc_Absyn_Stmt * _T80;
  long * _T81;
  long _T82;
  struct Cyc_Absyn_Stmt * _T83;
  long * _T84;
  struct _RegionHandle * _T85;
  struct Cyc_Toc_Env * * _T86;
  struct Cyc_List_List * * _T87;
  struct Cyc_List_List * * _T88;
  struct Cyc_Absyn_Exp * _T89;
  struct Cyc_Absyn_Exp * _T8A;
  struct Cyc_Absyn_Switch_clause * _T8B;
  struct Cyc_Absyn_Pat * _T8C;
  struct Cyc_Absyn_Switch_clause * _T8D;
  struct Cyc_List_List * _T8E;
  void * _T8F;
  struct _tuple43 * _T90;
  struct Cyc_List_List * * _T91;
  struct Cyc_List_List * _T92;
  struct _RegionHandle * _T93;
  struct _tuple44 * _T94;
  struct _RegionHandle * _T95;
  struct Cyc_List_List * * _T96;
  long _T97;
  struct Cyc_Absyn_Vardecl * _T98;
  void * _T99;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T9A;
  void * _T9B;
  struct Cyc_Absyn_Exp * _T9C;
  struct Cyc_Absyn_Vardecl * _T9D;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T9E;
  void * _T9F;
  struct Cyc_Absyn_Vardecl * _TA0;
  struct Cyc_Absyn_Exp * _TA1;
  struct Cyc_Absyn_Vardecl * _TA2;
  struct Cyc_Absyn_Vardecl * _TA3;
  struct Cyc_Absyn_Decl * _TA4;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _TA5;
  struct Cyc_Absyn_Stmt * _TA6;
  struct Cyc_List_List * _TA7;
  struct Cyc_List_List * * _TA8;
  struct Cyc_List_List * _TA9;
  struct Cyc_Absyn_Exp * _TAA;
  struct Cyc_List_List * * _TAB;
  struct Cyc_List_List * _TAC;
  struct _RegionHandle * _TAD;
  struct _tuple46 * _TAE;
  struct _RegionHandle * _TAF;
  struct Cyc_List_List * * _TB0;
  struct Cyc_Absyn_Stmt * _TB1;
  struct Cyc_List_List * _TB2;
  struct Cyc_Warn_String_Warn_Warg_struct _TB3;
  int (* _TB4)(struct _fat_ptr ap);
  struct _fat_ptr _TB5;
  struct Cyc_Warn_String_Warn_Warg_struct _TB6;
  int (* _TB7)(struct _fat_ptr ap);
  struct _fat_ptr _TB8;
  struct Cyc_List_List * _TB9;
  void * _TBA;
  struct _tuple38 * _TBB;
  struct Cyc_List_List * _TBC;
  struct Cyc_Absyn_Stmt * _TBD;
  struct Cyc_List_List * _TBE;
  struct Cyc_List_List * _TBF;
  void * _TC0;
  if (dopt != 0) { goto _TL3B3;
  }
  _T0 = Cyc_Absyn_skip_stmt(0U);
  return _T0;
  _TL3B3: _T1 = dopt;
  _T2 = (int *)_T1;
  _T3 = *_T2;
  switch (_T3) {
  case 0: 
    _T4 = Cyc_Toc_throw_match_stmt();
    return _T4;
  case 1: 
    _T5 = dopt;
    { struct Cyc_Tcpat_Success_Tcpat_Decision_struct * _TC1 = (struct Cyc_Tcpat_Success_Tcpat_Decision_struct *)_T5;
      _TC0 = _TC1->f1;
    }{ struct Cyc_Tcpat_Rhs * rhs = _TC0;
      _TL3B9: if (lscs != 0) { goto _TL3B7;
      }else { goto _TL3B8;
      }
      _TL3B7: _T6 = lscs;
      _T7 = _T6->hd;
      { struct _tuple41 * _TC1 = (struct _tuple41 *)_T7;
	struct Cyc_Absyn_Switch_clause * _TC2;
	struct _fat_ptr * _TC3;
	struct _fat_ptr * _TC4;
	void * _TC5;
	{ struct _tuple41 _TC6 = *_TC1;
	  _T8 = &_TC1->f0;
	  _TC5 = (long *)_T8;
	  _TC4 = _TC6.f1;
	  _TC3 = _TC6.f2;
	  _TC2 = _TC6.f3;
	}{ long * already_emitted = (long *)_TC5;
	  struct _fat_ptr * init_lab = _TC4;
	  struct _fat_ptr * code_lab = _TC3;
	  struct Cyc_Absyn_Switch_clause * sc = _TC2;
	  _T9 = sc;
	  { struct Cyc_Absyn_Stmt * body = _T9->body;
	    _TA = body;
	    _TB = rhs;
	    _TC = _TB->rhs;
	    if (_TA != _TC) { goto _TL3BA;
	    }
	    _TD = already_emitted;
	    _TE = *_TD;
	    if (! _TE) { goto _TL3BC;
	    }
	    _TF = Cyc_Absyn_goto_stmt(init_lab,0U);
	    return _TF;
	    _TL3BC: _T10 = already_emitted;
	    *_T10 = 1;
	    { struct Cyc_List_List * newdecls = 0;
	      _T11 = rgn;
	      _T12 = &nv;
	      _T13 = &newdecls;
	      _T14 = decls;
	      _T15 = Cyc_Toc_deep_copy(v);
	      _T16 = Cyc_Toc_deep_copy(v);
	      _T17 = sc;
	      _T18 = _T17->pattern;
	      { struct Cyc_Absyn_Stmt * init_opt = Cyc_Toc_extract_pattern_vars(_T11,
										_T12,
										_T13,
										_T14,
										_T15,
										_T16,
										_T18);
		_T19 = sc;
		{ struct Cyc_Absyn_Stmt * res = _T19->body;
		  { struct Cyc_List_List * ds = newdecls;
		    _TL3C1: if (ds != 0) { goto _TL3BF;
		    }else { goto _TL3C0;
		    }
		    _TL3BF: _T1A = ds;
		    _T1B = _T1A->hd;
		    _T1C = (struct _tuple43 *)_T1B;
		    { struct _tuple43 _TC6 = *_T1C;
		      long _TC7;
		      void * _TC8;
		      struct Cyc_Absyn_Vardecl * _TC9;
		      struct Cyc_Absyn_Vardecl * _TCA;
		      _TCA = _TC6.f0;
		      _TC9 = _TC6.f1;
		      _TC8 = _TC6.f2;
		      _TC7 = _TC6.f3;
		      { struct Cyc_Absyn_Vardecl * oldv = _TCA;
			struct Cyc_Absyn_Vardecl * newv = _TC9;
			void * oldvt = _TC8;
			long cast = _TC7;
			_T1D = decls;
			_T1F = rgn;
			{ struct Cyc_List_List * _TCB = _region_malloc(_T1F,
								       0U,
								       sizeof(struct Cyc_List_List));
			  _T21 = rgn;
			  { struct _tuple44 * _TCC = _region_malloc(_T21,
								    0U,sizeof(struct _tuple44));
			    _TCC->f0 = oldv;
			    _TCC->f1 = newv;
			    _T20 = (struct _tuple44 *)_TCC;
			  }_TCB->hd = _T20;
			  _T22 = decls;
			  _TCB->tl = *_T22;
			  _T1E = (struct Cyc_List_List *)_TCB;
			}*_T1D = _T1E;
			_T23 = cast;
			if (! _T23) { goto _TL3C2;
			}
			_T24 = oldv;
			_T25 = oldvt;
			{ struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _TCB = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
			  _TCB->tag = 4;
			  _TCB->f1 = newv;
			  _T26 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_TCB;
			}_T27 = (void *)_T26;
			_T28 = Cyc_Absyn_varb_exp(_T27,0U);
			_T29 = newv;
			_T2A = _T29->type;
			_T2B = Cyc_Absyn_set_type(_T28,_T2A);
			_T24->initializer = Cyc_Toc_cast_it(_T25,_T2B);
			goto _TL3C3;
			_TL3C2: _T2C = oldv;
			{ struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _TCB = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
			  _TCB->tag = 4;
			  _TCB->f1 = newv;
			  _T2D = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_TCB;
			}_T2E = (void *)_T2D;
			_T2F = Cyc_Absyn_varb_exp(_T2E,0U);
			_T30 = newv;
			_T31 = _T30->type;
			_T2C->initializer = Cyc_Absyn_set_type(_T2F,_T31);
			_TL3C3: _T32 = oldv;
			_T33 = _T32->initializer;
			_T34 = newv;
			_T33->topt = _T34->type;
			_T35 = oldv;
			_T35->type = oldvt;
			{ struct Cyc_Absyn_Decl * _TCB = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
			  { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _TCC = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
			    _TCC->tag = 0;
			    _TCC->f1 = oldv;
			    _T37 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TCC;
			  }_TCB->r = (void *)_T37;
			  _TCB->loc = 0U;
			  _T36 = (struct Cyc_Absyn_Decl *)_TCB;
			}_T38 = res;
			res = Cyc_Absyn_decl_stmt(_T36,_T38,0U);
		      }
		    }_T39 = ds;
		    ds = _T39->tl;
		    goto _TL3C1;
		    _TL3C0: ;
		  }res = Cyc_Absyn_label_stmt(code_lab,res,0U);
		  if (init_opt == 0) { goto _TL3C4;
		  }
		  res = Cyc_Absyn_seq_stmt(init_opt,res,0U);
		  goto _TL3C5;
		  _TL3C4: _TL3C5: res = Cyc_Absyn_label_stmt(init_lab,res,
							     0U);
		  _T3A = bodies;
		  _T3C = rgn;
		  { struct Cyc_List_List * _TC6 = _region_malloc(_T3C,0U,
								 sizeof(struct Cyc_List_List));
		    _T3E = rgn;
		    { struct _tuple46 * _TC7 = _region_malloc(_T3E,0U,sizeof(struct _tuple46));
		      _TC7->f0 = nv;
		      _TC7->f1 = code_lab;
		      _TC7->f2 = body;
		      _T3D = (struct _tuple46 *)_TC7;
		    }_TC6->hd = _T3D;
		    _T3F = bodies;
		    _TC6->tl = *_T3F;
		    _T3B = (struct Cyc_List_List *)_TC6;
		  }*_T3A = _T3B;
		  _T40 = res;
		  return _T40;
		}
	      }
	    }_TL3BA: ;
	  }
	}
      }_T41 = lscs;
      lscs = _T41->tl;
      goto _TL3B9;
      _TL3B8: { struct Cyc_Warn_String_Warn_Warg_struct _TC1;
	_TC1.tag = 0;
	_TC1.f1 = _tag_fat("couldn't find rhs!",sizeof(char),19U);
	_T42 = _TC1;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TC1 = _T42;
	void * _TC2[1];
	_TC2[0] = &_TC1;
	{ int (* _TC3)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	  _T43 = _TC3;
	}_T44 = _tag_fat(_TC2,sizeof(void *),1);
	_T43(_T44);
      }
    }
  default: 
    _T45 = dopt;
    { struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _TC1 = (struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct *)_T45;
      _TBF = _TC1->f1;
      _TBE = _TC1->f2;
      _T46 = _TC1->f3;
      _TC0 = (void *)_T46;
    }{ struct Cyc_List_List * symbolic_path = _TBF;
      struct Cyc_List_List * switches = _TBE;
      void * other_decision = _TC0;
      struct Cyc_Absyn_Stmt * res = Cyc_Toc_compile_decision_tree(rgn,nv,
								  decls,bodies,
								  other_decision,
								  lscs,v);
      _T47 = Cyc_List_rev(symbolic_path);
      _T48 = Cyc_Toc_deep_copy(v);
      { struct Cyc_Absyn_Exp * p = Cyc_Toc_compile_path(_T47,_T48);
	struct Cyc_List_List * ss = Cyc_List_rev(switches);
	struct _tuple42 _TC1 = Cyc_Toc_admits_switch(ss);
	void * _TC2;
	int _TC3;
	_TC3 = _TC1.f0;
	_TC2 = _TC1.f1;
	{ int allows_switch = _TC3;
	  void * test_kind = _TC2;
	  if (allows_switch <= 1) { goto _TL3C6;
	  }
	  { struct Cyc_List_List * new_lscs;
	    new_lscs = _cycalloc(sizeof(struct Cyc_List_List));
	    _T49 = new_lscs;
	    { struct Cyc_Absyn_Switch_clause * _TC4 = _cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));
	      _T4B = &Cyc_Absyn_Wild_p_val;
	      _T4C = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T4B;
	      _T4D = (void *)_T4C;
	      _TC4->pattern = Cyc_Absyn_new_pat(_T4D,0U);
	      _TC4->pat_vars = 0;
	      _TC4->where_clause = 0;
	      _TC4->body = res;
	      _TC4->loc = 0U;
	      _T4A = (struct Cyc_Absyn_Switch_clause *)_TC4;
	    }_T49->hd = _T4A;
	    _T4E = new_lscs;
	    _T4E->tl = 0;
	    _TL3CB: if (ss != 0) { goto _TL3C9;
	    }else { goto _TL3CA;
	    }
	    _TL3C9: _T4F = ss;
	    _T50 = _T4F->hd;
	    _T51 = (struct _tuple38 *)_T50;
	    { struct _tuple38 _TC4 = *_T51;
	      void * _TC5;
	      void * _TC6;
	      _TC6 = _TC4.f0;
	      _TC5 = _TC4.f1;
	      { void * pat_test = _TC6;
		void * dec_tree = _TC5;
		struct Cyc_Absyn_Pat * case_exp = Cyc_Toc_compile_pat_test_as_case(pat_test);
		struct Cyc_Absyn_Stmt * s = Cyc_Toc_compile_decision_tree(rgn,
									  nv,
									  decls,
									  bodies,
									  dec_tree,
									  lscs,
									  v);
		{ struct Cyc_List_List * _TC7 = _cycalloc(sizeof(struct Cyc_List_List));
		  { struct Cyc_Absyn_Switch_clause * _TC8 = _cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));
		    _TC8->pattern = case_exp;
		    _TC8->pat_vars = 0;
		    _TC8->where_clause = 0;
		    _TC8->body = s;
		    _TC8->loc = 0U;
		    _T53 = (struct Cyc_Absyn_Switch_clause *)_TC8;
		  }_TC7->hd = _T53;
		  _TC7->tl = new_lscs;
		  _T52 = (struct Cyc_List_List *)_TC7;
		}new_lscs = _T52;
	      }
	    }_T54 = ss;
	    ss = _T54->tl;
	    goto _TL3CB;
	    _TL3CA: { struct _fat_ptr * _TC4;
	      void * _TC5;
	      _T55 = test_kind;
	      _T56 = (int *)_T55;
	      _T57 = *_T56;
	      switch (_T57) {
	      case 1: 
		LOOP1: _T58 = p;
		{ void * _TC6 = _T58->r;
		  struct Cyc_Absyn_Exp * _TC7;
		  _T59 = (int *)_TC6;
		  _T5A = *_T59;
		  switch (_T5A) {
		  case 14: 
		    { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _TC8 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_TC6;
		      _TC7 = _TC8->f2;
		    }{ struct Cyc_Absyn_Exp * e = _TC7;
		      p = e;
		      goto LOOP1;
		    }
		  case 20: 
		    { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _TC8 = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_TC6;
		      _TC7 = _TC8->f1;
		    }{ struct Cyc_Absyn_Exp * e = _TC7;
		      p = e;
		      goto _LL1E;
		    }
		  default: 
		    goto _LL1E;
		  }
		  _LL1E: ;
		}_T5B = Cyc_Absyn_cstar_type(Cyc_Absyn_sint_type,Cyc_Toc_mt_tq);
		_T5C = p;
		_T5D = Cyc_Toc_cast_it(_T5B,_T5C);
		_T5E = Cyc_Absyn_deref_exp(_T5D,0U);
		_T5F = Cyc_Absyn_uint_type;
		p = Cyc_Absyn_set_type(_T5E,_T5F);
		goto _LL15;
	      case 3: 
		_T60 = test_kind;
		{ struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct * _TC6 = (struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct *)_T60;
		  _T61 = _TC6->f1;
		  _TC5 = (void *)_T61;
		  _TC4 = _TC6->f2;
		}{ void * t = _TC5;
		  struct _fat_ptr * f = _TC4;
		  void * t2 = Cyc_Toc_tagged_union_field_struct(t,f);
		  _T62 = Cyc_Toc_member_exp(p,f,0U);
		  _T63 = t2;
		  p = Cyc_Absyn_set_type(_T62,_T63);
		  _T64 = Cyc_Toc_member_exp(p,Cyc_Toc_tag_sp,0U);
		  _T65 = Cyc_Absyn_uint_type;
		  p = Cyc_Absyn_set_type(_T64,_T65);
		  goto _LL15;
		}
	      case 2: 
		goto _LL1D;
	      default: 
		_LL1D: p = Cyc_Toc_cast_it(Cyc_Absyn_sint_type,p);
		goto _LL15;
	      }
	      _LL15: ;
	    }{ struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _TC4 = _cycalloc(sizeof(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct));
	      _TC4->tag = 10;
	      _TC4->f1 = p;
	      _TC4->f2 = new_lscs;
	      _TC4->f3 = 0;
	      _T66 = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_TC4;
	    }_T67 = (void *)_T66;
	    res = Cyc_Absyn_new_stmt(_T67,0U);
	  }goto _TL3C7;
	  _TL3C6: { struct Cyc_Absyn_Exp * _TC4;
	    _T68 = test_kind;
	    _T69 = (int *)_T68;
	    _T6A = *_T69;
	    if (_T6A != 2) { goto _TL3CE;
	    }
	    _T6B = test_kind;
	    { struct Cyc_Toc_WhereTest_Toc_TestKind_struct * _TC5 = (struct Cyc_Toc_WhereTest_Toc_TestKind_struct *)_T6B;
	      _TC4 = _TC5->f1;
	    }{ struct Cyc_Absyn_Exp * e = _TC4;
	      struct Cyc_Tcpat_Rhs * _TC5;
	      void * _TC6;
	      if (ss == 0) { goto _TL3D0;
	      }
	      _T6C = ss;
	      _T6D = (struct Cyc_List_List *)_T6C;
	      _T6E = _T6D->hd;
	      _T6F = (struct _tuple38 *)_T6E;
	      _T70 = _T6F->f1;
	      _T71 = (int *)_T70;
	      _T72 = *_T71;
	      if (_T72 != 1) { goto _TL3D2;
	      }
	      _T73 = ss;
	      _T74 = (struct Cyc_List_List *)_T73;
	      _T75 = _T74->tl;
	      if (_T75 != 0) { goto _TL3D4;
	      }
	      _T76 = ss;
	      { struct Cyc_List_List _TC7 = *_T76;
		_T77 = _TC7.hd;
		_T78 = (struct _tuple38 *)_T77;
		{ struct _tuple38 _TC8 = *_T78;
		  _TC6 = _TC8.f0;
		  _T79 = _TC8.f1;
		  { struct Cyc_Tcpat_Success_Tcpat_Decision_struct * _TC9 = (struct Cyc_Tcpat_Success_Tcpat_Decision_struct *)_T79;
		    _TC5 = _TC9->f1;
		  }
		}
	      }{ void * pat_test = _TC6;
		struct Cyc_Tcpat_Rhs * rhs = _TC5;
		_TL3D9: if (lscs != 0) { goto _TL3D7;
		}else { goto _TL3D8;
		}
		_TL3D7: _T7A = lscs;
		_T7B = _T7A->hd;
		{ struct _tuple41 * _TC7 = (struct _tuple41 *)_T7B;
		  struct Cyc_Absyn_Switch_clause * _TC8;
		  struct _fat_ptr * _TC9;
		  struct _fat_ptr * _TCA;
		  void * _TCB;
		  { struct _tuple41 _TCC = *_TC7;
		    _T7C = &_TC7->f0;
		    _TCB = (long *)_T7C;
		    _TCA = _TCC.f1;
		    _TC9 = _TCC.f2;
		    _TC8 = _TCC.f3;
		  }{ long * already_emitted = (long *)_TCB;
		    struct _fat_ptr * init_lab = _TCA;
		    struct _fat_ptr * code_lab = _TC9;
		    struct Cyc_Absyn_Switch_clause * sc = _TC8;
		    _T7D = sc;
		    { struct Cyc_Absyn_Stmt * body = _T7D->body;
		      _T7E = body;
		      _T7F = rhs;
		      _T80 = _T7F->rhs;
		      if (_T7E != _T80) { goto _TL3DA;
		      }
		      _T81 = already_emitted;
		      _T82 = *_T81;
		      if (! _T82) { goto _TL3DC;
		      }
		      _T83 = Cyc_Absyn_goto_stmt(init_lab,0U);
		      return _T83;
		      _TL3DC: _T84 = already_emitted;
		      *_T84 = 1;
		      { struct Cyc_List_List * newdecls = 0;
			_T85 = rgn;
			_T86 = &nv;
			_T87 = &newdecls;
			_T88 = decls;
			_T89 = Cyc_Toc_deep_copy(v);
			_T8A = Cyc_Toc_deep_copy(v);
			_T8B = sc;
			_T8C = _T8B->pattern;
			{ struct Cyc_Absyn_Stmt * init_opt = Cyc_Toc_extract_pattern_vars(_T85,
											  _T86,
											  _T87,
											  _T88,
											  _T89,
											  _T8A,
											  _T8C);
			  _T8D = sc;
			  { struct Cyc_Absyn_Stmt * r = _T8D->body;
			    { struct Cyc_List_List * ds = newdecls;
			      _TL3E1: if (ds != 0) { goto _TL3DF;
			      }else { goto _TL3E0;
			      }
			      _TL3DF: _T8E = ds;
			      _T8F = _T8E->hd;
			      _T90 = (struct _tuple43 *)_T8F;
			      { struct _tuple43 _TCC = *_T90;
				long _TCD;
				void * _TCE;
				struct Cyc_Absyn_Vardecl * _TCF;
				struct Cyc_Absyn_Vardecl * _TD0;
				_TD0 = _TCC.f0;
				_TCF = _TCC.f1;
				_TCE = _TCC.f2;
				_TCD = _TCC.f3;
				{ struct Cyc_Absyn_Vardecl * oldv = _TD0;
				  struct Cyc_Absyn_Vardecl * newv = _TCF;
				  void * oldvt = _TCE;
				  long cast = _TCD;
				  _T91 = decls;
				  _T93 = rgn;
				  { struct Cyc_List_List * _TD1 = _region_malloc(_T93,
										 0U,
										 sizeof(struct Cyc_List_List));
				    _T95 = rgn;
				    { struct _tuple44 * _TD2 = _region_malloc(_T95,
									      0U,
									      sizeof(struct _tuple44));
				      _TD2->f0 = oldv;
				      _TD2->f1 = newv;
				      _T94 = (struct _tuple44 *)_TD2;
				    }_TD1->hd = _T94;
				    _T96 = decls;
				    _TD1->tl = *_T96;
				    _T92 = (struct Cyc_List_List *)_TD1;
				  }*_T91 = _T92;
				  _T97 = cast;
				  if (! _T97) { goto _TL3E2;
				  }
				  _T98 = oldv;
				  _T99 = oldvt;
				  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _TD1 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
				    _TD1->tag = 4;
				    _TD1->f1 = newv;
				    _T9A = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_TD1;
				  }_T9B = (void *)_T9A;
				  _T9C = Cyc_Absyn_varb_exp(_T9B,0U);
				  _T98->initializer = Cyc_Toc_cast_it(_T99,
								      _T9C);
				  goto _TL3E3;
				  _TL3E2: _T9D = oldv;
				  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _TD1 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
				    _TD1->tag = 4;
				    _TD1->f1 = newv;
				    _T9E = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_TD1;
				  }_T9F = (void *)_T9E;
				  _T9D->initializer = Cyc_Absyn_varb_exp(_T9F,
									 0U);
				  _TL3E3: _TA0 = oldv;
				  _TA1 = _TA0->initializer;
				  _TA2 = newv;
				  _TA1->topt = _TA2->type;
				  _TA3 = oldv;
				  _TA3->type = oldvt;
				  { struct Cyc_Absyn_Decl * _TD1 = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
				    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _TD2 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
				      _TD2->tag = 0;
				      _TD2->f1 = oldv;
				      _TA5 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TD2;
				    }_TD1->r = (void *)_TA5;
				    _TD1->loc = 0U;
				    _TA4 = (struct Cyc_Absyn_Decl *)_TD1;
				  }_TA6 = r;
				  r = Cyc_Absyn_decl_stmt(_TA4,_TA6,0U);
				}
			      }_TA7 = ds;
			      ds = _TA7->tl;
			      goto _TL3E1;
			      _TL3E0: ;
			    }r = Cyc_Absyn_label_stmt(code_lab,r,0U);
			    Cyc_Toc_exp_to_c(nv,e);
			    _TA8 = decls;
			    _TA9 = *_TA8;
			    _TAA = e;
			    Cyc_Toc_subst_pattern_vars(_TA9,_TAA);
			    r = Cyc_Absyn_ifthenelse_stmt(e,r,res,0U);
			    if (init_opt == 0) { goto _TL3E4;
			    }
			    r = Cyc_Absyn_seq_stmt(init_opt,r,0U);
			    goto _TL3E5;
			    _TL3E4: _TL3E5: r = Cyc_Absyn_label_stmt(init_lab,
								     r,0U);
			    _TAB = bodies;
			    _TAD = rgn;
			    { struct Cyc_List_List * _TCC = _region_malloc(_TAD,
									   0U,
									   sizeof(struct Cyc_List_List));
			      _TAF = rgn;
			      { struct _tuple46 * _TCD = _region_malloc(_TAF,
									0U,
									sizeof(struct _tuple46));
				_TCD->f0 = nv;
				_TCD->f1 = code_lab;
				_TCD->f2 = body;
				_TAE = (struct _tuple46 *)_TCD;
			      }_TCC->hd = _TAE;
			      _TB0 = bodies;
			      _TCC->tl = *_TB0;
			      _TAC = (struct Cyc_List_List *)_TCC;
			    }*_TAB = _TAC;
			    _TB1 = r;
			    return _TB1;
			  }
			}
		      }_TL3DA: ;
		    }
		  }
		}_TB2 = lscs;
		lscs = _TB2->tl;
		goto _TL3D9;
		_TL3D8: { struct Cyc_Warn_String_Warn_Warg_struct _TC7;
		  _TC7.tag = 0;
		  _TC7.f1 = _tag_fat("couldn't find rhs!",sizeof(char),19U);
		  _TB3 = _TC7;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _TC7 = _TB3;
		  void * _TC8[1];
		  _TC8[0] = &_TC7;
		  { int (* _TC9)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		    _TB4 = _TC9;
		  }_TB5 = _tag_fat(_TC8,sizeof(void *),1);
		  _TB4(_TB5);
		}
	      }goto _TL3D5;
	      _TL3D4: goto _LL2D;
	      _TL3D5: goto _TL3D3;
	      _TL3D2: goto _LL2D;
	      _TL3D3: goto _TL3D1;
	      _TL3D0: _LL2D: { struct Cyc_Warn_String_Warn_Warg_struct _TC7;
		_TC7.tag = 0;
		_TC7.f1 = _tag_fat("bad where clause in match compiler",sizeof(char),
				   35U);
		_TB6 = _TC7;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _TC7 = _TB6;
		void * _TC8[1];
		_TC8[0] = &_TC7;
		{ int (* _TC9)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		  _TB7 = _TC9;
		}_TB8 = _tag_fat(_TC8,sizeof(void *),1);
		_TB7(_TB8);
	      }_TL3D1: ;
	    }goto _TL3CF;
	    _TL3CE: _TL3E9: if (ss != 0) { goto _TL3E7;
	    }else { goto _TL3E8;
	    }
	    _TL3E7: _TB9 = ss;
	    _TBA = _TB9->hd;
	    _TBB = (struct _tuple38 *)_TBA;
	    { struct _tuple38 _TC5 = *_TBB;
	      void * _TC6;
	      void * _TC7;
	      _TC7 = _TC5.f0;
	      _TC6 = _TC5.f1;
	      { void * pat_test = _TC7;
		void * dec_tree = _TC6;
		struct Cyc_Absyn_Exp * test_exp = Cyc_Toc_compile_pat_test(p,
									   pat_test);
		struct Cyc_Absyn_Stmt * s = Cyc_Toc_compile_decision_tree(rgn,
									  nv,
									  decls,
									  bodies,
									  dec_tree,
									  lscs,
									  v);
		res = Cyc_Absyn_ifthenelse_stmt(test_exp,s,res,0U);
	      }
	    }_TBC = ss;
	    ss = _TBC->tl;
	    goto _TL3E9;
	    _TL3E8: _TL3CF: ;
	  }_TL3C7: _TBD = res;
	  return _TBD;
	}
      }
    }
  }
  ;
}
static struct Cyc_Toc_Env * * Cyc_Toc_find_case_env(struct Cyc_List_List * bodies,
						    struct Cyc_Absyn_Stmt * s) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Toc_Env * * _T2;
  struct Cyc_Toc_Env * * _T3;
  struct Cyc_List_List * _T4;
  _TL3ED: if (bodies != 0) { goto _TL3EB;
  }else { goto _TL3EC;
  }
  _TL3EB: _T0 = bodies;
  _T1 = _T0->hd;
  { struct _tuple46 * _T5 = (struct _tuple46 *)_T1;
    struct Cyc_Absyn_Stmt * _T6;
    void * _T7;
    { struct _tuple46 _T8 = *_T5;
      _T2 = &_T5->f0;
      _T7 = (struct Cyc_Toc_Env * *)_T2;
      _T6 = _T8.f2;
    }{ struct Cyc_Toc_Env * * nv = (struct Cyc_Toc_Env * *)_T7;
      struct Cyc_Absyn_Stmt * s2 = _T6;
      if (s2 != s) { goto _TL3EE;
      }
      _T3 = nv;
      return _T3;
      _TL3EE: ;
    }
  }_T4 = bodies;
  bodies = _T4->tl;
  goto _TL3ED;
  _TL3EC: return 0;
}
static void Cyc_Toc_xlate_switch(struct Cyc_Toc_Env * nv,struct Cyc_Absyn_Stmt * whole_s,
				 struct Cyc_Absyn_Exp * e,struct Cyc_List_List * scs,
				 void * dopt) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  int * _T3;
  int _T4;
  void * _T5;
  struct _tuple1 * _T6;
  void * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T9;
  void * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_Absyn_Vardecl * _TC;
  void * _TD;
  struct Cyc_List_List * (* _TE)(struct _RegionHandle *,struct _tuple41 * (*)(struct _RegionHandle *,
									      struct Cyc_Absyn_Switch_clause *),
				 struct _RegionHandle *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _TF)(struct _RegionHandle *,void * (*)(void *,
								   void *),
				 void *,struct Cyc_List_List *);
  struct _RegionHandle * _T10;
  struct _RegionHandle * _T11;
  struct Cyc_List_List * _T12;
  struct _RegionHandle * _T13;
  struct Cyc_Toc_Env * _T14;
  struct Cyc_List_List * * _T15;
  struct Cyc_List_List * * _T16;
  void * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_Absyn_Exp * _T19;
  struct Cyc_List_List * _T1A;
  void * _T1B;
  struct Cyc_Absyn_Switch_clause * _T1C;
  struct Cyc_Toc_Env * * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_Absyn_Switch_clause * _T24;
  struct Cyc_Absyn_Stmt * _T25;
  struct Cyc_Toc_Env * _T26;
  struct Cyc_Absyn_Stmt * _T27;
  struct Cyc_Absyn_Switch_clause * _T28;
  struct Cyc_Core_Opt * _T29;
  struct Cyc_Absyn_Switch_clause * _T2A;
  struct Cyc_Core_Opt * _T2B;
  void * _T2C;
  struct Cyc_List_List * _T2D;
  struct _tuple0 _T2E;
  struct Cyc_List_List * _T2F;
  struct Cyc_List_List * (* _T30)(struct Cyc_Absyn_Vardecl * (*)(struct Cyc_List_List *,
								 struct Cyc_Absyn_Vardecl *),
				  struct Cyc_List_List *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T31)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_Absyn_Vardecl * (* _T32)(struct Cyc_List_List *,struct Cyc_Absyn_Vardecl *);
  void * (* _T33)(struct Cyc_List_List *,void *);
  struct Cyc_List_List * _T34;
  struct Cyc_List_List * _T35;
  struct Cyc_Toc_Env * _T36;
  struct Cyc_Absyn_Stmt * _T37;
  struct Cyc_Toc_Env * _T38;
  struct Cyc_Absyn_Stmt * _T39;
  struct Cyc_List_List * _T3A;
  struct Cyc_Absyn_Stmt * _T3B;
  struct _fat_ptr * _T3C;
  struct Cyc_Absyn_Stmt * _T3D;
  struct Cyc_Absyn_Stmt * _T3E;
  struct Cyc_List_List * _T3F;
  void * _T40;
  struct _tuple44 * _T41;
  struct Cyc_List_List * _T42;
  void * _T43;
  struct Cyc_Absyn_Vardecl * _T44;
  struct Cyc_Absyn_Vardecl * _T45;
  struct Cyc_List_List * _T46;
  struct Cyc_List_List * _T47;
  struct _RegionHandle * _T48;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T49;
  void * _T4A;
  struct Cyc_Absyn_Decl * _T4B;
  struct Cyc_Absyn_Stmt * _T4C;
  struct Cyc_List_List * _T4D;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T4E;
  void * _T4F;
  struct Cyc_Absyn_Decl * _T50;
  struct Cyc_Absyn_Stmt * _T51;
  struct Cyc_Absyn_Stmt * _T52;
  struct Cyc_Absyn_Stmt * _T53;
  _T0 = e;
  _T1 = _T0->topt;
  { void * t = _check_null(_T1);
    Cyc_Toc_exp_to_c(nv,e);
    { struct Cyc_Absyn_Vardecl * v = 0;
      struct Cyc_Absyn_Exp * vexp = e;
      _T2 = e;
      { void * _T54 = _T2->r;
	void * _T55;
	_T3 = (int *)_T54;
	_T4 = *_T3;
	if (_T4 != 1) { goto _TL3F0;
	}
	{ struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T56 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T54;
	  _T5 = _T56->f1;
	  _T55 = (void *)_T5;
	}{ void * b = _T55;
	  goto _LL0;
	}_TL3F0: { struct _tuple1 * x = Cyc_Toc_temp_var();
	  _T6 = x;
	  _T7 = Cyc_Toc_typ_to_c(t);
	  _T8 = e;
	  v = Cyc_Absyn_new_vardecl(0U,_T6,_T7,_T8,0);
	  { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T56 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
	    _T56->tag = 4;
	    _T56->f1 = v;
	    _T9 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T56;
	  }_TA = (void *)_T9;
	  _TB = Cyc_Absyn_varb_exp(_TA,0U);
	  _TC = v;
	  _TD = _TC->type;
	  vexp = Cyc_Absyn_set_type(_TB,_TD);
	  goto _LL0;
	}_LL0: ;
      }{ struct _fat_ptr * end_l = Cyc_Toc_fresh_label();
	struct _RegionHandle _T54 = _new_region(0U,"rgn");
	struct _RegionHandle * rgn = &_T54;
	_push_region(rgn);
	{ struct Cyc_Toc_Env * _T55 = Cyc_Toc_share_env(rgn,nv);
	  struct Cyc_Toc_Env * nv = _T55;
	  _TF = Cyc_List_rmap_c;
	  { struct Cyc_List_List * (* _T56)(struct _RegionHandle *,struct _tuple41 * (*)(struct _RegionHandle *,
											 struct Cyc_Absyn_Switch_clause *),
					    struct _RegionHandle *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _RegionHandle *,
															 struct _tuple41 * (*)(struct _RegionHandle *,
																	       struct Cyc_Absyn_Switch_clause *),
															 struct _RegionHandle *,
															 struct Cyc_List_List *))_TF;
	    _TE = _T56;
	  }_T10 = rgn;
	  _T11 = rgn;
	  _T12 = scs;
	  { struct Cyc_List_List * lscs = _TE(_T10,Cyc_Toc_gen_labels,_T11,
					      _T12);
	    struct Cyc_List_List * mydecls = 0;
	    struct Cyc_List_List * mybodies = 0;
	    _T13 = rgn;
	    _T14 = nv;
	    _T15 = &mydecls;
	    _T16 = &mybodies;
	    _T17 = dopt;
	    _T18 = lscs;
	    _T19 = vexp;
	    { struct Cyc_Absyn_Stmt * test_tree = Cyc_Toc_compile_decision_tree(_T13,
										_T14,
										_T15,
										_T16,
										_T17,
										_T18,
										_T19);
	      { struct Cyc_List_List * lscs2 = lscs;
		_TL3F5: if (lscs2 != 0) { goto _TL3F3;
		}else { goto _TL3F4;
		}
		_TL3F3: _T1A = lscs2;
		_T1B = _T1A->hd;
		{ struct _tuple41 * _T56 = (struct _tuple41 *)_T1B;
		  struct Cyc_Absyn_Switch_clause * _T57;
		  struct _fat_ptr * _T58;
		  { struct _tuple41 _T59 = *_T56;
		    _T58 = _T59.f2;
		    _T57 = _T59.f3;
		  }{ struct _fat_ptr * body_lab = _T58;
		    struct Cyc_Absyn_Switch_clause * body_sc = _T57;
		    _T1C = body_sc;
		    { struct Cyc_Absyn_Stmt * s = _T1C->body;
		      struct Cyc_Toc_Env * * envp = Cyc_Toc_find_case_env(mybodies,
									  s);
		      if (envp != 0) { goto _TL3F6;
		      }
		      goto _TL3F2;
		      _TL3F6: _T1D = envp;
		      { struct Cyc_Toc_Env * env = *_T1D;
			_T1E = lscs2;
			_T1F = _T1E->tl;
			if (_T1F == 0) { goto _TL3F8;
			}
			_T20 = lscs2;
			_T21 = _T20->tl;
			_T22 = _T21->hd;
			{ struct _tuple41 * _T59 = (struct _tuple41 *)_T22;
			  struct Cyc_Absyn_Switch_clause * _T5A;
			  struct _fat_ptr * _T5B;
			  { struct _tuple41 _T5C = *_T59;
			    _T5B = _T5C.f2;
			    _T5A = _T5C.f3;
			  }{ struct _fat_ptr * fallthru_lab = _T5B;
			    struct Cyc_Absyn_Switch_clause * next_sc = _T5A;
			    _T23 = mybodies;
			    _T24 = next_sc;
			    _T25 = _T24->body;
			    { struct Cyc_Toc_Env * * next_case_env = Cyc_Toc_find_case_env(_T23,
											   _T25);
			      if (next_case_env != 0) { goto _TL3FA;
			      }
			      _T26 = Cyc_Toc_last_switchclause_env(rgn,env,
								   end_l);
			      _T27 = s;
			      Cyc_Toc_stmt_to_c(_T26,_T27);
			      goto _TL3FB;
			      _TL3FA: { struct Cyc_List_List * vs = 0;
				_T28 = next_sc;
				_T29 = _T28->pat_vars;
				if (_T29 == 0) { goto _TL3FC;
				}
				_T2A = next_sc;
				_T2B = _T2A->pat_vars;
				_T2C = _T2B->v;
				_T2D = (struct Cyc_List_List *)_T2C;
				_T2E = Cyc_List_split(_T2D);
				_T2F = _T2E.f0;
				vs = Cyc_Tcutil_filter_nulls(_T2F);
				_T31 = Cyc_List_map_c;
				{ struct Cyc_List_List * (* _T5C)(struct Cyc_Absyn_Vardecl * (*)(struct Cyc_List_List *,
												 struct Cyc_Absyn_Vardecl *),
								  struct Cyc_List_List *,
								  struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Vardecl * (*)(struct Cyc_List_List *,
																		       struct Cyc_Absyn_Vardecl *),
															struct Cyc_List_List *,
															struct Cyc_List_List *))_T31;
				  _T30 = _T5C;
				}_T33 = Cyc_List_assoc;
				{ struct Cyc_Absyn_Vardecl * (* _T5C)(struct Cyc_List_List *,
								      struct Cyc_Absyn_Vardecl *) = (struct Cyc_Absyn_Vardecl * (*)(struct Cyc_List_List *,
																    struct Cyc_Absyn_Vardecl *))_T33;
				  _T32 = _T5C;
				}_T34 = mydecls;
				_T35 = Cyc_List_imp_rev(vs);
				vs = _T30(_T32,_T34,_T35);
				goto _TL3FD;
				_TL3FC: _TL3FD: _T36 = Cyc_Toc_non_last_switchclause_env(rgn,
											 env,
											 end_l,
											 fallthru_lab,
											 vs);
				_T37 = s;
				Cyc_Toc_stmt_to_c(_T36,_T37);
			      }_TL3FB: ;
			    }
			  }
			}goto _TL3F9;
			_TL3F8: _T38 = Cyc_Toc_last_switchclause_env(rgn,
								     env,
								     end_l);
			_T39 = s;
			Cyc_Toc_stmt_to_c(_T38,_T39);
			_TL3F9: ;
		      }
		    }
		  }
		}_TL3F2: _T3A = lscs2;
		lscs2 = _T3A->tl;
		goto _TL3F5;
		_TL3F4: ;
	      }_T3B = test_tree;
	      _T3C = end_l;
	      _T3D = Cyc_Toc_skip_stmt_dl();
	      _T3E = Cyc_Absyn_label_stmt(_T3C,_T3D,0U);
	      { struct Cyc_Absyn_Stmt * res = Cyc_Absyn_seq_stmt(_T3B,_T3E,
								 0U);
		struct Cyc_List_List * added = 0;
		_TL401: if (mydecls != 0) { goto _TL3FF;
		}else { goto _TL400;
		}
		_TL3FF: _T3F = mydecls;
		_T40 = _T3F->hd;
		_T41 = (struct _tuple44 *)_T40;
		{ struct _tuple44 _T56 = *_T41;
		  struct Cyc_Absyn_Vardecl * _T57;
		  _T57 = _T56.f1;
		  { struct Cyc_Absyn_Vardecl * vd = _T57;
		    { struct Cyc_List_List * itr = added;
		      _TL405: if (itr != 0) { goto _TL403;
		      }else { goto _TL404;
		      }
		      _TL403: _T42 = itr;
		      _T43 = _T42->hd;
		      _T44 = (struct Cyc_Absyn_Vardecl *)_T43;
		      _T45 = vd;
		      if (_T44 != _T45) { goto _TL406;
		      }
		      goto bottom;
		      _TL406: _T46 = itr;
		      itr = _T46->tl;
		      goto _TL405;
		      _TL404: ;
		    }_T48 = rgn;
		    { struct Cyc_List_List * _T58 = _region_malloc(_T48,0U,
								   sizeof(struct Cyc_List_List));
		      _T58->hd = vd;
		      _T58->tl = added;
		      _T47 = (struct Cyc_List_List *)_T58;
		    }added = _T47;
		    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T58 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
		      _T58->tag = 0;
		      _T58->f1 = vd;
		      _T49 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T58;
		    }_T4A = (void *)_T49;
		    _T4B = Cyc_Absyn_new_decl(_T4A,0U);
		    _T4C = res;
		    res = Cyc_Absyn_decl_stmt(_T4B,_T4C,0U);
		    bottom: goto _TL3FE;
		  }
		}_TL3FE: _T4D = _check_null(mydecls);
		mydecls = _T4D->tl;
		goto _TL401;
		_TL400: if (v == 0) { goto _TL408;
		}
		{ struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T56 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
		  _T56->tag = 0;
		  _T56->f1 = v;
		  _T4E = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T56;
		}_T4F = (void *)_T4E;
		_T50 = Cyc_Absyn_new_decl(_T4F,0U);
		_T51 = res;
		res = Cyc_Absyn_decl_stmt(_T50,_T51,0U);
		goto _TL409;
		_TL408: _TL409: _T52 = whole_s;
		_T53 = res;
		_T52->r = _T53->r;
		_npop_handler(0);
		return;
	      }
	    }
	  }
	}_pop_region();
      }
    }
  }
}
struct Cyc_Absyn_Stmt * Cyc_Toc_make_npop_handler(int n) {
  struct Cyc_Absyn_Exp * _T0;
  int _T1;
  struct Cyc_Absyn_Exp * _T2;
  void * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct _fat_ptr _T5;
  void * _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Absyn_Stmt * _T8;
  { struct Cyc_Absyn_Exp * _T9[1];
    _T1 = n - 1;
    _T2 = Cyc_Absyn_signed_int_exp(_T1,0U);
    _T3 = Cyc_Absyn_sint_type;
    _T9[0] = Cyc_Absyn_set_type(_T2,_T3);
    _T4 = Cyc_Toc__npop_handler_e;
    _T5 = _tag_fat(_T9,sizeof(struct Cyc_Absyn_Exp *),1);
    _T0 = Cyc_Toc_fncall_exp_dl(_T4,_T5);
  }_T6 = Cyc_Absyn_void_type;
  _T7 = Cyc_Absyn_set_type(_T0,_T6);
  _T8 = Cyc_Absyn_exp_stmt(_T7,0U);
  return _T8;
}
void Cyc_Toc_do_npop_before(int n,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  struct Cyc_Absyn_Stmt * _T1;
  struct Cyc_Absyn_Stmt * _T2;
  void * _T3;
  struct Cyc_Absyn_Stmt * _T4;
  if (n <= 0) { goto _TL40A;
  }
  _T0 = s;
  _T1 = Cyc_Toc_make_npop_handler(n);
  _T2 = s;
  _T3 = _T2->r;
  _T4 = Cyc_Absyn_new_stmt(_T3,0U);
  _T0->r = Cyc_Toc_seq_stmt_r(_T1,_T4);
  goto _TL40B;
  _TL40A: _TL40B: ;
}
static void Cyc_Toc_stmt_to_c(struct Cyc_Toc_Env * nv,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T3;
  struct Cyc_Absyn_Exp * _T4;
  int _T5;
  struct Cyc_Absyn_Stmt * _T6;
  struct Cyc_Absyn_Exp * _T7;
  void * _T8;
  void * _T9;
  struct Cyc_Absyn_Exp * _TA;
  void * _TB;
  struct Cyc_Absyn_Exp * _TC;
  struct Cyc_Absyn_Stmt * _TD;
  struct Cyc_Absyn_Stmt * _TE;
  struct _tuple10 _TF;
  struct _tuple10 _T10;
  struct _tuple10 _T11;
  struct _tuple10 _T12;
  struct Cyc_Toc_Env * _T13;
  struct Cyc_Absyn_Stmt * _T14;
  struct Cyc_Toc_Env * _T15;
  struct Cyc_Absyn_Stmt * _T16;
  struct _fat_ptr * * _T17;
  struct _fat_ptr * _T18;
  int _T19;
  struct Cyc_Absyn_Stmt * _T1A;
  struct Cyc_Toc_Env * _T1B;
  struct Cyc_Absyn_Stmt * _T1C;
  struct _fat_ptr * * _T1D;
  struct _fat_ptr * _T1E;
  int _T1F;
  struct Cyc_Absyn_Stmt * _T20;
  void * _T21;
  struct Cyc_Toc_Env * _T22;
  struct Cyc_Warn_String_Warn_Warg_struct _T23;
  int (* _T24)(struct _fat_ptr ap);
  struct _fat_ptr _T25;
  struct Cyc_Toc_FallthruInfo * _T26;
  int _T27;
  struct Cyc_Absyn_Stmt * _T28;
  struct Cyc_Toc_Env * _T29;
  struct Cyc_List_List * _T2A;
  void * _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T2D;
  struct Cyc_List_List * _T2E;
  void * _T2F;
  void * _T30;
  struct Cyc_Absyn_Exp * _T31;
  struct Cyc_List_List * _T32;
  void * _T33;
  struct Cyc_Absyn_Exp * _T34;
  struct Cyc_Absyn_Stmt * _T35;
  struct Cyc_Absyn_Stmt * _T36;
  struct Cyc_List_List * _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_Absyn_Stmt * _T39;
  struct Cyc_Absyn_Stmt * _T3A;
  struct Cyc_Absyn_Decl * _T3B;
  int * _T3C;
  unsigned int _T3D;
  void * _T3E;
  struct Cyc_Absyn_Pat * _T3F;
  int * _T40;
  int _T41;
  struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T42;
  struct Cyc_Absyn_Pat * _T43;
  struct Cyc_Absyn_Pat * _T44;
  void * _T45;
  int * _T46;
  int _T47;
  struct Cyc_Absyn_Vardecl * _T48;
  struct _tuple1 * _T49;
  struct Cyc_Absyn_Exp * _T4A;
  long _T4B;
  struct _tuple1 * _T4C;
  struct Cyc_Absyn_Vardecl * _T4D;
  void * _T4E;
  struct Cyc_Absyn_Exp * _T4F;
  struct Cyc_Absyn_Vardecl * _T50;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T51;
  void * _T52;
  struct Cyc_Absyn_Vardecl * _T53;
  struct Cyc_Absyn_Exp * _T54;
  struct Cyc_Absyn_Vardecl * _T55;
  struct Cyc_Absyn_Stmt * _T56;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T57;
  void * _T58;
  struct Cyc_Absyn_Stmt * _T59;
  unsigned int _T5A;
  struct Cyc_Absyn_Decl * _T5B;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T5C;
  void * _T5D;
  struct Cyc_Absyn_Stmt * _T5E;
  unsigned int _T5F;
  struct Cyc_Absyn_Decl * _T60;
  struct Cyc_Absyn_Stmt * _T61;
  struct Cyc_Absyn_Stmt * _T62;
  unsigned int _T63;
  struct Cyc_Absyn_Stmt * _T64;
  struct Cyc_Absyn_Stmt * _T65;
  unsigned int _T66;
  struct Cyc_Absyn_Stmt * _T67;
  struct Cyc_Absyn_Vardecl * _T68;
  struct Cyc_Absyn_Stmt * _T69;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T6A;
  void * _T6B;
  struct Cyc_Absyn_Stmt * _T6C;
  unsigned int _T6D;
  struct Cyc_Absyn_Decl * _T6E;
  struct Cyc_Absyn_Stmt * _T6F;
  struct Cyc_Absyn_Stmt * _T70;
  unsigned int _T71;
  struct Cyc_Absyn_Stmt * _T72;
  struct Cyc_Absyn_Stmt * _T73;
  struct Cyc_Toc_Env * _T74;
  struct Cyc_Absyn_Pat * _T75;
  void * _T76;
  struct Cyc_Absyn_Exp * _T77;
  void * _T78;
  void * _T79;
  struct Cyc_Absyn_Exp * _T7A;
  struct Cyc_Absyn_Stmt * _T7B;
  struct Cyc_Absyn_Stmt * _T7C;
  struct Cyc_Warn_String_Warn_Warg_struct _T7D;
  int (* _T7E)(struct _fat_ptr ap);
  struct _fat_ptr _T7F;
  struct Cyc_Absyn_Decl * _T80;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T81;
  struct Cyc_List_List * _T82;
  void * _T83;
  struct Cyc_List_List * _T84;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T85;
  struct Cyc_List_List * _T86;
  void * _T87;
  void * _T88;
  struct Cyc_Absyn_Stmt * _T89;
  struct Cyc_Absyn_Decl * _T8A;
  struct Cyc_Absyn_Stmt * _T8B;
  void * _T8C;
  struct Cyc_Absyn_Stmt * _T8D;
  struct Cyc_Absyn_Stmt * _T8E;
  struct Cyc_List_List * _T8F;
  struct Cyc_Absyn_Vardecl * _T90;
  struct Cyc_Absyn_Exp * _T91;
  void * _T92;
  long _T93;
  struct Cyc_Absyn_Stmt * _T94;
  struct _tuple1 * _T95;
  void * _T96;
  struct Cyc_Absyn_Exp * _T97;
  void * _T98;
  struct Cyc_Absyn_Exp * _T99;
  struct Cyc_Absyn_Stmt * _T9A;
  struct Cyc_Absyn_Stmt * _T9B;
  struct Cyc_Absyn_Exp * _T9C;
  unsigned int _T9D;
  struct Cyc_Absyn_Exp * _T9E;
  struct _fat_ptr * _T9F;
  struct Cyc_Absyn_Stmt * _TA0;
  struct Cyc_Absyn_Stmt * _TA1;
  struct Cyc_Absyn_Exp * _TA2;
  void * _TA3;
  struct Cyc_Absyn_Exp * _TA4;
  void * _TA5;
  struct Cyc_Absyn_Exp * _TA6;
  long _TA7;
  struct Cyc_Absyn_Stmt * _TA8;
  struct _tuple1 * _TA9;
  void * _TAA;
  struct Cyc_Absyn_Exp * _TAB;
  struct _tuple1 * _TAC;
  struct _tuple1 _TAD;
  struct _fat_ptr * _TAE;
  struct _fat_ptr _TAF;
  struct Cyc_Absyn_Exp * _TB0;
  struct _fat_ptr _TB1;
  void * _TB2;
  struct Cyc_Absyn_Exp * _TB3;
  struct _tuple1 * _TB4;
  void * _TB5;
  struct Cyc_Absyn_Exp * _TB6;
  void * _TB7;
  struct Cyc_Absyn_Exp * _TB8;
  struct Cyc_Absyn_Exp * _TB9;
  struct Cyc_Absyn_Exp * _TBA;
  struct _fat_ptr _TBB;
  void * _TBC;
  struct Cyc_Absyn_Exp * _TBD;
  struct Cyc_Absyn_Stmt * _TBE;
  struct Cyc_Absyn_Stmt * _TBF;
  struct Cyc_Absyn_Exp * _TC0;
  struct _fat_ptr _TC1;
  struct Cyc_Absyn_Exp * _TC2;
  void * _TC3;
  struct Cyc_Absyn_Exp * _TC4;
  struct Cyc_Absyn_Stmt * _TC5;
  struct Cyc_Absyn_Stmt * _TC6;
  struct Cyc_Absyn_Stmt * _TC7;
  struct Cyc_Absyn_Stmt * _TC8;
  struct Cyc_Absyn_Stmt * _TC9;
  struct Cyc_Warn_String_Warn_Warg_struct _TCA;
  int (* _TCB)(struct _fat_ptr);
  void * (* _TCC)(struct _fat_ptr);
  struct _fat_ptr _TCD;
  void * _TCE;
  void * _TCF;
  struct Cyc_Absyn_Exp * _TD0;
  struct Cyc_Absyn_Exp * _TD1;
  struct Cyc_Absyn_Stmt * _TD2;
  struct Cyc_Absyn_Exp * _TD3;
  struct _fat_ptr _TD4;
  struct Cyc_Absyn_Exp * _TD5;
  void * _TD6;
  struct Cyc_Absyn_Exp * _TD7;
  struct Cyc_Absyn_Stmt * _TD8;
  struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _TD9;
  void * _TDA;
  struct Cyc_Absyn_Exp * _TDB;
  struct Cyc_Absyn_Exp * _TDC;
  void * _TDD;
  struct Cyc_Absyn_Exp * _TDE;
  struct _fat_ptr _TDF;
  void * _TE0;
  struct Cyc_Absyn_Exp * _TE1;
  struct Cyc_Absyn_Exp * _TE2;
  void * _TE3;
  struct Cyc_Absyn_Exp * _TE4;
  struct _fat_ptr _TE5;
  void * _TE6;
  struct Cyc_Absyn_Exp * _TE7;
  struct Cyc_Absyn_Exp * _TE8;
  void * _TE9;
  struct Cyc_Absyn_Exp * _TEA;
  void * _TEB;
  struct Cyc_Absyn_Stmt * _TEC;
  struct _tuple1 * _TED;
  void * _TEE;
  struct Cyc_Absyn_Stmt * _TEF;
  struct _tuple1 * _TF0;
  void * _TF1;
  struct Cyc_Absyn_Exp * _TF2;
  struct Cyc_Absyn_Exp * _TF3;
  struct Cyc_Absyn_Exp * _TF4;
  struct Cyc_Absyn_Exp * _TF5;
  struct Cyc_Absyn_Stmt * _TF6;
  struct Cyc_Absyn_Stmt * _TF7;
  struct Cyc_Absyn_Stmt * _TF8;
  struct Cyc_Absyn_Exp * _TF9;
  void * _TFA;
  struct Cyc_Absyn_Exp * _TFB;
  struct Cyc_Absyn_Stmt * _TFC;
  struct _tuple1 * _TFD;
  void * _TFE;
  void * _TFF;
  struct Cyc_Absyn_Exp * _T100;
  void * _T101;
  struct Cyc_Absyn_Exp * _T102;
  struct Cyc_Absyn_Exp * _T103;
  struct Cyc_Absyn_Stmt * _T104;
  struct Cyc_Absyn_Stmt * _T105;
  struct Cyc_Absyn_Stmt * _T106;
  struct Cyc_Absyn_Stmt * _T107;
  struct Cyc_Absyn_Stmt * _T108;
  struct Cyc_Absyn_Stmt * _T109;
  struct Cyc_Absyn_Stmt * _T10A;
  _TL40C: if (1) { goto _TL40D;
  }else { goto _TL40E;
  }
  _TL40D: _T0 = s;
  { void * _T10B = _T0->r;
    struct Cyc_Absyn_Switch_clause * * _T10C;
    struct Cyc_List_List * _T10D;
    struct Cyc_Absyn_Exp * _T10E;
    struct Cyc_Absyn_Stmt * _T10F;
    void * _T110;
    void * _T111;
    _T1 = (int *)_T10B;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      return;
    case 1: 
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
      }{ struct Cyc_Absyn_Exp * e = _T111;
	Cyc_Toc_exp_to_c(nv,e);
	return;
      }
    case 3: 
      _T3 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T10B;
      _T4 = _T3->f1;
      if (_T4 != 0) { goto _TL410;
      }
      _T5 = Cyc_Toc_get_npop(s);
      _T6 = s;
      Cyc_Toc_do_npop_before(_T5,_T6);
      return;
      _TL410: { struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
      }{ struct Cyc_Absyn_Exp * e = _T111;
	_T7 = e;
	_T8 = _T7->topt;
	_T9 = _check_null(_T8);
	{ void * t = Cyc_Toc_typ_to_c(_T9);
	  Cyc_Toc_exp_to_c(nv,e);
	  { int npop = Cyc_Toc_get_npop(s);
	    if (npop <= 0) { goto _TL412;
	    }
	    { struct _tuple1 * x = Cyc_Toc_temp_var();
	      _TA = Cyc_Absyn_var_exp(x,0U);
	      _TB = t;
	      _TC = Cyc_Absyn_set_type(_TA,_TB);
	      { struct Cyc_Absyn_Stmt * retn_stmt = Cyc_Absyn_return_stmt(_TC,
									  0U);
		Cyc_Toc_do_npop_before(npop,retn_stmt);
		_TD = s;
		_TE = Cyc_Absyn_declare_stmt(x,t,e,retn_stmt,0U);
		_TD->r = _TE->r;
	      }
	    }goto _TL413;
	    _TL412: _TL413: return;
	  }
	}
      }
    case 2: 
      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
	_T110 = _T112->f2;
      }{ struct Cyc_Absyn_Stmt * s1 = _T111;
	struct Cyc_Absyn_Stmt * s2 = _T110;
	Cyc_Toc_stmt_to_c(nv,s1);
	s = s2;
	goto _TL40C;
      }
    case 4: 
      { struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
	_T110 = _T112->f2;
	_T10F = _T112->f3;
      }{ struct Cyc_Absyn_Exp * e = _T111;
	struct Cyc_Absyn_Stmt * s1 = _T110;
	struct Cyc_Absyn_Stmt * s2 = _T10F;
	Cyc_Toc_exp_to_c(nv,e);
	Cyc_Toc_stmt_to_c(nv,s1);
	s = s2;
	goto _TL40C;
      }
    case 9: 
      { struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
	_TF = _T112->f2;
	_T110 = _TF.f0;
	_T10 = _T112->f3;
	_T10E = _T10.f0;
	_T10F = _T112->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T111;
	struct Cyc_Absyn_Exp * e2 = _T110;
	struct Cyc_Absyn_Exp * e3 = _T10E;
	struct Cyc_Absyn_Stmt * s2 = _T10F;
	Cyc_Toc_exp_to_c(nv,e1);
	Cyc_Toc_exp_to_c(nv,e2);
	_T111 = s2;
	_T110 = e3;
	goto _LL10;
      }
    case 14: 
      { struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
	_T11 = _T112->f2;
	_T110 = _T11.f0;
      }_LL10: { struct Cyc_Absyn_Stmt * s2 = _T111;
	struct Cyc_Absyn_Exp * e = _T110;
	_T111 = e;
	_T110 = s2;
	goto _LL12;
      }
    case 5: 
      { struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct *)_T10B;
	_T12 = _T112->f1;
	_T111 = _T12.f0;
	_T110 = _T112->f2;
      }_LL12: { struct Cyc_Absyn_Exp * e = _T111;
	struct Cyc_Absyn_Stmt * s2 = _T110;
	Cyc_Toc_exp_to_c(nv,e);
	{ struct _RegionHandle _T112 = _new_region(0U,"temp");
	  struct _RegionHandle * temp = &_T112;
	  _push_region(temp);
	  _T13 = Cyc_Toc_loop_env(temp,nv);
	  _T14 = s2;
	  Cyc_Toc_stmt_to_c(_T13,_T14);
	  _npop_handler(0);
	  return;
	  _pop_region();
	}
      }
    case 6: 
      { struct _fat_ptr * * _T112;
	_T15 = nv;
	{ struct Cyc_Toc_Env _T113 = *_T15;
	  _T112 = _T113.break_lab;
	}{ struct _fat_ptr * * b = _T112;
	  if (b == 0) { goto _TL414;
	  }
	  _T16 = s;
	  _T17 = b;
	  _T18 = *_T17;
	  _T16->r = Cyc_Toc_goto_stmt_r(_T18);
	  goto _TL415;
	  _TL414: _TL415: _T19 = Cyc_Toc_get_npop(s);
	  _T1A = s;
	  Cyc_Toc_do_npop_before(_T19,_T1A);
	  return;
	}
      }
    case 7: 
      { struct _fat_ptr * * _T112;
	_T1B = nv;
	{ struct Cyc_Toc_Env _T113 = *_T1B;
	  _T112 = _T113.continue_lab;
	}{ struct _fat_ptr * * c = _T112;
	  if (c == 0) { goto _TL416;
	  }
	  _T1C = s;
	  _T1D = c;
	  _T1E = *_T1D;
	  _T1C->r = Cyc_Toc_goto_stmt_r(_T1E);
	  goto _TL417;
	  _TL416: _TL417: goto _LL18;
	}
      }
    case 8: 
      _LL18: _T1F = Cyc_Toc_get_npop(s);
      _T20 = s;
      Cyc_Toc_do_npop_before(_T1F,_T20);
      return;
    case 13: 
      { struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
	_T110 = _T112->f2;
      }{ struct _fat_ptr * lab = _T111;
	struct Cyc_Absyn_Stmt * s1 = _T110;
	s = s1;
	goto _TL40C;
      }
    case 10: 
      { struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
	_T10D = _T112->f2;
	_T21 = _T112->f3;
	_T110 = (void *)_T21;
      }{ struct Cyc_Absyn_Exp * e = _T111;
	struct Cyc_List_List * scs = _T10D;
	void * dec_tree_opt = _T110;
	Cyc_Toc_xlate_switch(nv,s,e,scs,dec_tree_opt);
	return;
      }
    case 11: 
      { struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
	_T10C = _T112->f2;
      }{ struct Cyc_List_List * es = _T111;
	struct Cyc_Absyn_Switch_clause * * dest_clause = _T10C;
	struct Cyc_Toc_FallthruInfo * _T112;
	_T22 = nv;
	{ struct Cyc_Toc_Env _T113 = *_T22;
	  _T112 = _T113.fallthru_info;
	}{ struct Cyc_Toc_FallthruInfo * fi = _T112;
	  if (fi != 0) { goto _TL418;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T113;
	    _T113.tag = 0;
	    _T113.f1 = _tag_fat("fallthru in unexpected place",sizeof(char),
				29U);
	    _T23 = _T113;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T113 = _T23;
	    void * _T114[1];
	    _T114[0] = &_T113;
	    { int (* _T115)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	      _T24 = _T115;
	    }_T25 = _tag_fat(_T114,sizeof(void *),1);
	    _T24(_T25);
	  }goto _TL419;
	  _TL418: _TL419: _T26 = fi;
	  { struct Cyc_Toc_FallthruInfo _T113 = *_T26;
	    struct Cyc_List_List * _T114;
	    struct _fat_ptr * _T115;
	    _T115 = _T113.label;
	    _T114 = _T113.binders;
	    { struct _fat_ptr * l = _T115;
	      struct Cyc_List_List * vs = _T114;
	      struct Cyc_Absyn_Stmt * s2 = Cyc_Absyn_goto_stmt(l,0U);
	      _T27 = Cyc_Toc_get_npop(s);
	      _T28 = s2;
	      Cyc_Toc_do_npop_before(_T27,_T28);
	      { struct Cyc_List_List * vs2 = Cyc_List_rev(vs);
		struct Cyc_List_List * es2 = Cyc_List_rev(es);
		_TL41D: if (vs2 != 0) { goto _TL41B;
		}else { goto _TL41C;
		}
		_TL41B: _T29 = nv;
		_T2A = _check_null(es2);
		_T2B = _T2A->hd;
		_T2C = (struct Cyc_Absyn_Exp *)_T2B;
		Cyc_Toc_exp_to_c(_T29,_T2C);
		{ struct Cyc_Absyn_Pat_b_Absyn_Binding_struct * _T116 = _cycalloc(sizeof(struct Cyc_Absyn_Pat_b_Absyn_Binding_struct));
		  _T116->tag = 5;
		  _T2E = vs2;
		  _T2F = _T2E->hd;
		  _T116->f1 = (struct Cyc_Absyn_Vardecl *)_T2F;
		  _T2D = (struct Cyc_Absyn_Pat_b_Absyn_Binding_struct *)_T116;
		}_T30 = (void *)_T2D;
		_T31 = Cyc_Absyn_varb_exp(_T30,0U);
		_T32 = es2;
		_T33 = _T32->hd;
		_T34 = (struct Cyc_Absyn_Exp *)_T33;
		_T35 = Cyc_Absyn_assign_stmt(_T31,_T34,0U);
		_T36 = s2;
		s2 = Cyc_Absyn_seq_stmt(_T35,_T36,0U);
		_T37 = vs2;
		vs2 = _T37->tl;
		_T38 = es2;
		es2 = _T38->tl;
		goto _TL41D;
		_TL41C: _T39 = s;
		_T3A = s2;
		_T39->r = _T3A->r;
		return;
	      }
	    }
	  }
	}
      }
    case 12: 
      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T10B;
	_T111 = _T112->f1;
	_T10F = _T112->f2;
      }{ struct Cyc_Absyn_Decl * d = _T111;
	struct Cyc_Absyn_Stmt * body = _T10F;
	_T3B = d;
	{ void * _T112 = _T3B->r;
	  struct Cyc_Absyn_Vardecl * _T113;
	  struct Cyc_Absyn_Tvar * _T114;
	  struct Cyc_Absyn_Fndecl * _T115;
	  struct Cyc_List_List * _T116;
	  struct Cyc_Absyn_Exp * _T117;
	  struct Cyc_Absyn_Pat * _T118;
	  void * _T119;
	  _T3C = (int *)_T112;
	  _T3D = *_T3C;
	  switch (_T3D) {
	  case 0: 
	    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T11A = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T112;
	      _T119 = _T11A->f1;
	    }{ struct Cyc_Absyn_Vardecl * vd = _T119;
	      Cyc_Toc_local_decl_to_c(nv,vd,body);
	      goto _LL2F;
	    }
	  case 2: 
	    { struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T11A = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_T112;
	      _T118 = _T11A->f1;
	      _T117 = _T11A->f3;
	      _T3E = _T11A->f4;
	      _T119 = (void *)_T3E;
	    }{ struct Cyc_Absyn_Pat * p = _T118;
	      struct Cyc_Absyn_Exp * e = _T117;
	      void * dec_tree = _T119;
	      _T3F = p;
	      { void * _T11A = _T3F->r;
		struct Cyc_Absyn_Vardecl * _T11B;
		_T40 = (int *)_T11A;
		_T41 = *_T40;
		if (_T41 != 1) { goto _TL41F;
		}
		_T42 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T11A;
		_T43 = _T42->f2;
		_T44 = (struct Cyc_Absyn_Pat *)_T43;
		_T45 = _T44->r;
		_T46 = (int *)_T45;
		_T47 = *_T46;
		if (_T47 != 0) { goto _TL421;
		}
		{ struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T11C = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T11A;
		  _T11B = _T11C->f1;
		}{ struct Cyc_Absyn_Vardecl * vd = _T11B;
		  _T48 = vd;
		  _T49 = _T48->name;
		  _T4A = e;
		  _T4B = Cyc_Absyn_var_may_appear_exp(_T49,_T4A);
		  if (! _T4B) { goto _TL423;
		  }
		  _T4C = Cyc_Toc_temp_var();
		  _T4D = vd;
		  _T4E = _T4D->type;
		  _T4F = e;
		  { struct Cyc_Absyn_Vardecl * new_vd = Cyc_Absyn_new_vardecl(0U,
									      _T4C,
									      _T4E,
									      _T4F,
									      0);
		    _T50 = vd;
		    { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T11C = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
		      _T11C->tag = 4;
		      _T11C->f1 = new_vd;
		      _T51 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T11C;
		    }_T52 = (void *)_T51;
		    _T50->initializer = Cyc_Absyn_varb_exp(_T52,0U);
		    _T53 = vd;
		    _T54 = _T53->initializer;
		    _T55 = new_vd;
		    _T54->topt = _T55->type;
		    _T56 = s;
		    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T11C = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
		      _T11C->tag = 0;
		      _T11C->f1 = new_vd;
		      _T57 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T11C;
		    }_T58 = (void *)_T57;
		    _T59 = s;
		    _T5A = _T59->loc;
		    _T5B = Cyc_Absyn_new_decl(_T58,_T5A);
		    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T11C = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
		      _T11C->tag = 0;
		      _T11C->f1 = vd;
		      _T5C = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T11C;
		    }_T5D = (void *)_T5C;
		    _T5E = s;
		    _T5F = _T5E->loc;
		    _T60 = Cyc_Absyn_new_decl(_T5D,_T5F);
		    _T61 = body;
		    _T62 = s;
		    _T63 = _T62->loc;
		    _T64 = Cyc_Absyn_decl_stmt(_T60,_T61,_T63);
		    _T65 = s;
		    _T66 = _T65->loc;
		    _T67 = Cyc_Absyn_decl_stmt(_T5B,_T64,_T66);
		    _T56->r = _T67->r;
		  }goto _TL424;
		  _TL423: _T68 = vd;
		  _T68->initializer = e;
		  _T69 = s;
		  { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T11C = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
		    _T11C->tag = 0;
		    _T11C->f1 = vd;
		    _T6A = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T11C;
		  }_T6B = (void *)_T6A;
		  _T6C = s;
		  _T6D = _T6C->loc;
		  _T6E = Cyc_Absyn_new_decl(_T6B,_T6D);
		  _T6F = body;
		  _T70 = s;
		  _T71 = _T70->loc;
		  _T72 = Cyc_Absyn_decl_stmt(_T6E,_T6F,_T71);
		  _T69->r = _T72->r;
		  _TL424: Cyc_Toc_stmt_to_c(nv,s);
		  goto _LL3C;
		}_TL421: goto _LL3F;
		_TL41F: _LL3F: _T73 = s;
		_T74 = nv;
		_T75 = p;
		_T76 = dec_tree;
		_T77 = e;
		_T78 = _T77->topt;
		_T79 = _check_null(_T78);
		_T7A = e;
		_T7B = body;
		_T7C = Cyc_Toc_letdecl_to_c(_T74,_T75,_T76,_T79,_T7A,_T7B);
		_T73->r = _T7C->r;
		goto _LL3C;
		_LL3C: ;
	      }goto _LL2F;
	    }
	  case 3: 
	    { struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct * _T11A = (struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct *)_T112;
	      _T116 = _T11A->f1;
	    }{ struct Cyc_List_List * vds = _T116;
	      struct Cyc_List_List * rvds = Cyc_List_rev(vds);
	      if (rvds != 0) { goto _TL425;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T11A;
		_T11A.tag = 0;
		_T11A.f1 = _tag_fat("empty Letv_d",sizeof(char),13U);
		_T7D = _T11A;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T11A = _T7D;
		void * _T11B[1];
		_T11B[0] = &_T11A;
		{ int (* _T11C)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		  _T7E = _T11C;
		}_T7F = _tag_fat(_T11B,sizeof(void *),1);
		_T7E(_T7F);
	      }goto _TL426;
	      _TL425: _TL426: _T80 = d;
	      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T11A = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
		_T11A->tag = 0;
		_T82 = rvds;
		_T83 = _T82->hd;
		_T11A->f1 = (struct Cyc_Absyn_Vardecl *)_T83;
		_T81 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T11A;
	      }_T80->r = (void *)_T81;
	      _T84 = rvds;
	      rvds = _T84->tl;
	      _TL42A: if (rvds != 0) { goto _TL428;
	      }else { goto _TL429;
	      }
	      _TL428: { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T11A = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
		_T11A->tag = 0;
		_T86 = rvds;
		_T87 = _T86->hd;
		_T11A->f1 = (struct Cyc_Absyn_Vardecl *)_T87;
		_T85 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T11A;
	      }_T88 = (void *)_T85;
	      { struct Cyc_Absyn_Decl * d2 = Cyc_Absyn_new_decl(_T88,0U);
		_T89 = s;
		_T8A = d2;
		_T8B = s;
		_T8C = _T8B->r;
		_T8D = Cyc_Absyn_new_stmt(_T8C,0U);
		_T8E = Cyc_Absyn_decl_stmt(_T8A,_T8D,0U);
		_T89->r = _T8E->r;
	      }_T8F = rvds;
	      rvds = _T8F->tl;
	      goto _TL42A;
	      _TL429: Cyc_Toc_stmt_to_c(nv,s);
	      goto _LL2F;
	    }
	  case 1: 
	    { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T11A = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T112;
	      _T115 = _T11A->f1;
	    }{ struct Cyc_Absyn_Fndecl * fd = _T115;
	      struct Cyc_Hashtable_Table * * old_pop_table = Cyc_Toc_fn_pop_table;
	      Cyc_Toc_fndecl_to_c(nv,fd,0);
	      Cyc_Toc_fn_pop_table = old_pop_table;
	      Cyc_Toc_stmt_to_c(nv,body);
	      goto _LL2F;
	    }
	  case 4: 
	    { struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct * _T11A = (struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct *)_T112;
	      _T114 = _T11A->f1;
	      _T113 = _T11A->f2;
	      _T117 = _T11A->f3;
	    }{ struct Cyc_Absyn_Tvar * tv = _T114;
	      struct Cyc_Absyn_Vardecl * vd = _T113;
	      struct Cyc_Absyn_Exp * open_exp_opt = _T117;
	      void * rh_struct_typ = Cyc_Absyn_strct(Cyc_Toc__RegionHandle_sp);
	      void * rh_struct_ptr_typ = Cyc_Absyn_cstar_type(rh_struct_typ,
							      Cyc_Toc_mt_tq);
	      struct _tuple33 _T11A = Cyc_Toc_temp_var_and_exp();
	      struct Cyc_Absyn_Exp * _T11B;
	      struct _tuple1 * _T11C;
	      _T11C = _T11A.f0;
	      _T11B = _T11A.f1;
	      { struct _tuple1 * rh_var = _T11C;
		struct Cyc_Absyn_Exp * rh_exp = _T11B;
		Cyc_Absyn_set_type(rh_exp,rh_struct_ptr_typ);
		_T90 = vd;
		{ struct _tuple1 * x_var = _T90->name;
		  _T91 = Cyc_Absyn_var_exp(x_var,0U);
		  _T92 = rh_struct_ptr_typ;
		  { struct Cyc_Absyn_Exp * x_exp = Cyc_Absyn_set_type(_T91,
								      _T92);
		    Cyc_Toc_stmt_to_c(nv,body);
		    _T93 = Cyc_Flags_no_regions;
		    if (! _T93) { goto _TL42B;
		    }
		    _T94 = s;
		    _T95 = x_var;
		    _T96 = rh_struct_ptr_typ;
		    _T97 = Cyc_Absyn_signed_int_exp(0,0U);
		    _T98 = Cyc_Absyn_sint_type;
		    _T99 = Cyc_Absyn_set_type(_T97,_T98);
		    _T9A = body;
		    _T9B = Cyc_Absyn_declare_stmt(_T95,_T96,_T99,_T9A,0U);
		    _T94->r = _T9B->r;
		    goto _TL42C;
		    _TL42B: _T9C = open_exp_opt;
		    _T9D = (unsigned int)_T9C;
		    if (! _T9D) { goto _TL42D;
		    }
		    Cyc_Toc_exp_to_c(nv,open_exp_opt);
		    _T9E = open_exp_opt;
		    { struct _fat_ptr * _T11D = _cycalloc(sizeof(struct _fat_ptr));
		      *_T11D = _tag_fat("h",sizeof(char),2U);
		      _T9F = (struct _fat_ptr *)_T11D;
		    }{ struct Cyc_Absyn_Exp * oparrow = Cyc_Absyn_aggrarrow_exp(_T9E,
										_T9F,
										0U);
		      Cyc_Absyn_set_type(oparrow,rh_struct_typ);
		      { struct Cyc_Absyn_Exp * arg = Cyc_Absyn_address_exp(oparrow,
									   0U);
			Cyc_Absyn_set_type(arg,rh_struct_ptr_typ);
			_TA0 = s;
			_TA1 = Cyc_Absyn_declare_stmt(x_var,rh_struct_ptr_typ,
						      arg,body,0U);
			_TA0->r = _TA1->r;
		      }
		    }goto _TL42E;
		    _TL42D: _TA2 = Cyc_Absyn_uint_exp(0U,0U);
		    _TA3 = Cyc_Absyn_uint_type;
		    { struct Cyc_Absyn_Exp * _zero_exp = Cyc_Absyn_set_type(_TA2,
									    _TA3);
		      _TA4 = Cyc_Absyn_uint_exp(1U,0U);
		      _TA5 = Cyc_Absyn_uint_type;
		      { struct Cyc_Absyn_Exp * _one_exp = Cyc_Absyn_set_type(_TA4,
									     _TA5);
			_TA7 = Cyc_Flags_no_reaps;
			if (! _TA7) { goto _TL42F;
			}
			_TA6 = _one_exp;
			goto _TL430;
			_TL42F: _TA6 = _zero_exp;
			_TL430: { struct Cyc_Absyn_Exp * rgn_flag_exp = _TA6;
			  _TA8 = s;
			  _TA9 = rh_var;
			  _TAA = rh_struct_typ;
			  { struct Cyc_Absyn_Exp * _T11D[2];
			    _T11D[0] = rgn_flag_exp;
			    _TAC = x_var;
			    _TAD = *_TAC;
			    _TAE = _TAD.f1;
			    _TAF = *_TAE;
			    _T11D[1] = Cyc_Absyn_string_exp(_TAF,0U);
			    _TB0 = Cyc_Toc__new_region_e;
			    _TB1 = _tag_fat(_T11D,sizeof(struct Cyc_Absyn_Exp *),
					    2);
			    _TAB = Cyc_Toc_fncall_exp_dl(_TB0,_TB1);
			  }_TB2 = rh_struct_typ;
			  _TB3 = Cyc_Absyn_set_type(_TAB,_TB2);
			  _TB4 = x_var;
			  _TB5 = rh_struct_ptr_typ;
			  _TB6 = Cyc_Absyn_address_exp(rh_exp,0U);
			  _TB7 = rh_struct_ptr_typ;
			  _TB8 = Cyc_Absyn_set_type(_TB6,_TB7);
			  { struct Cyc_Absyn_Exp * _T11D[1];
			    _T11D[0] = x_exp;
			    _TBA = Cyc_Toc__push_region_e;
			    _TBB = _tag_fat(_T11D,sizeof(struct Cyc_Absyn_Exp *),
					    1);
			    _TB9 = Cyc_Toc_fncall_exp_dl(_TBA,_TBB);
			  }_TBC = Cyc_Absyn_void_type;
			  _TBD = Cyc_Absyn_set_type(_TB9,_TBC);
			  _TBE = Cyc_Absyn_exp_stmt(_TBD,0U);
			  _TBF = body;
			  _TC0 = Cyc_Toc__pop_region_e;
			  _TC1 = _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp *),
					  0);
			  _TC2 = Cyc_Toc_fncall_exp_dl(_TC0,_TC1);
			  _TC3 = Cyc_Absyn_void_type;
			  _TC4 = Cyc_Absyn_set_type(_TC2,_TC3);
			  _TC5 = Cyc_Absyn_exp_stmt(_TC4,0U);
			  _TC6 = Cyc_Absyn_seq_stmt(_TBF,_TC5,0U);
			  _TC7 = Cyc_Absyn_seq_stmt(_TBE,_TC6,0U);
			  _TC8 = Cyc_Absyn_declare_stmt(_TB4,_TB5,_TB8,_TC7,
							0U);
			  _TC9 = Cyc_Absyn_declare_stmt(_TA9,_TAA,_TB3,_TC8,
							0U);
			  _TA8->r = _TC9->r;
			}
		      }
		    }_TL42E: _TL42C: return;
		  }
		}
	      }
	    }
	  default: 
	    { struct Cyc_Warn_String_Warn_Warg_struct _T11A;
	      _T11A.tag = 0;
	      _T11A.f1 = _tag_fat("bad nested declaration within function",
				  sizeof(char),39U);
	      _TCA = _T11A;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T11A = _TCA;
	      void * _T11B[1];
	      _T11B[0] = &_T11A;
	      _TCC = Cyc_Warn_impos2;
	      { int (* _T11C)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_TCC;
		_TCB = _T11C;
	      }_TCD = _tag_fat(_T11B,sizeof(void *),1);
	      _TCB(_TCD);
	    }
	  }
	  _LL2F: ;
	}return;
      }
    default: 
      { struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct * _T112 = (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct *)_T10B;
	_T10F = _T112->f1;
	_T10D = _T112->f2;
	_TCE = _T112->f3;
	_T111 = (void *)_TCE;
      }{ struct Cyc_Absyn_Stmt * body = _T10F;
	struct Cyc_List_List * scs = _T10D;
	void * dec_tree = _T111;
	struct _tuple33 _T112 = Cyc_Toc_temp_var_and_exp();
	struct Cyc_Absyn_Exp * _T113;
	struct _tuple1 * _T114;
	_T114 = _T112.f0;
	_T113 = _T112.f1;
	{ struct _tuple1 * h_var = _T114;
	  struct Cyc_Absyn_Exp * h_exp = _T113;
	  struct _tuple33 _T115 = Cyc_Toc_temp_var_and_exp();
	  struct Cyc_Absyn_Exp * _T116;
	  struct _tuple1 * _T117;
	  _T117 = _T115.f0;
	  _T116 = _T115.f1;
	  { struct _tuple1 * e_var = _T117;
	    struct Cyc_Absyn_Exp * e_exp = _T116;
	    struct _tuple33 _T118 = Cyc_Toc_temp_var_and_exp();
	    struct Cyc_Absyn_Exp * _T119;
	    struct _tuple1 * _T11A;
	    _T11A = _T118.f0;
	    _T119 = _T118.f1;
	    { struct _tuple1 * was_thrown_var = _T11A;
	      struct Cyc_Absyn_Exp * was_thrown_exp = _T119;
	      void * h_typ = Cyc_Absyn_strct(Cyc_Toc__handler_cons_sp);
	      _TCF = Cyc_Absyn_exn_type();
	      { void * e_typ = Cyc_Toc_typ_to_c(_TCF);
		void * was_thrown_typ = Cyc_Toc_typ_to_c(Cyc_Absyn_sint_type);
		_TD0 = was_thrown_exp;
		_TD0->topt = was_thrown_typ;
		_TD1 = e_exp;
		_TD1->topt = e_typ;
		{ struct _RegionHandle _T11B = _new_region(0U,"temp");
		  struct _RegionHandle * temp = &_T11B;
		  _push_region(temp);
		  Cyc_Toc_stmt_to_c(nv,body);
		  _TD2 = body;
		  _TD3 = Cyc_Toc__pop_handler_e;
		  _TD4 = _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp *),0);
		  _TD5 = Cyc_Toc_fncall_exp_dl(_TD3,_TD4);
		  _TD6 = Cyc_Absyn_void_type;
		  _TD7 = Cyc_Absyn_set_type(_TD5,_TD6);
		  _TD8 = Cyc_Absyn_exp_stmt(_TD7,0U);
		  { struct Cyc_Absyn_Stmt * tryandpop_stmt = Cyc_Absyn_seq_stmt(_TD2,
										_TD8,
										0U);
		    { struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _T11C = _cycalloc(sizeof(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct));
		      _T11C->tag = 10;
		      _T11C->f1 = e_exp;
		      _T11C->f2 = scs;
		      _T11C->f3 = dec_tree;
		      _TD9 = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_T11C;
		    }_TDA = (void *)_TD9;
		    { struct Cyc_Absyn_Stmt * handler_stmt = Cyc_Absyn_new_stmt(_TDA,
										0U);
		      Cyc_Toc_stmt_to_c(nv,handler_stmt);
		      { struct Cyc_Absyn_Exp * _T11C[1];
			_TDC = Cyc_Toc_member_exp(h_exp,Cyc_Toc_handler_sp,
						  0U);
			_TDD = Cyc_Absyn_cstar_type(Cyc_Absyn_sint_type,Cyc_Toc_mt_tq);
			_T11C[0] = Cyc_Absyn_set_type(_TDC,_TDD);
			_TDE = Cyc_Toc_setjmp_e;
			_TDF = _tag_fat(_T11C,sizeof(struct Cyc_Absyn_Exp *),
					1);
			_TDB = Cyc_Toc_fncall_exp_dl(_TDE,_TDF);
		      }_TE0 = Cyc_Absyn_sint_type;
		      { struct Cyc_Absyn_Exp * setjmp_call = Cyc_Absyn_set_type(_TDB,
										_TE0);
			{ struct Cyc_Absyn_Exp * _T11C[1];
			  _TE2 = Cyc_Absyn_address_exp(h_exp,0U);
			  _TE3 = Cyc_Absyn_cstar_type(h_typ,Cyc_Toc_mt_tq);
			  _T11C[0] = Cyc_Absyn_set_type(_TE2,_TE3);
			  _TE4 = Cyc_Toc__push_handler_e;
			  _TE5 = _tag_fat(_T11C,sizeof(struct Cyc_Absyn_Exp *),
					  1);
			  _TE1 = Cyc_Toc_fncall_exp_dl(_TE4,_TE5);
			}_TE6 = Cyc_Absyn_void_type;
			_TE7 = Cyc_Absyn_set_type(_TE1,_TE6);
			{ struct Cyc_Absyn_Stmt * pushhandler_call = Cyc_Absyn_exp_stmt(_TE7,
											0U);
			  _TE8 = Cyc_Absyn_int_exp(0U,0,0U);
			  _TE9 = Cyc_Absyn_sint_type;
			  { struct Cyc_Absyn_Exp * zero_exp = Cyc_Absyn_set_type(_TE8,
										 _TE9);
			    _TEA = Cyc_Absyn_int_exp(0U,1,0U);
			    _TEB = Cyc_Absyn_sint_type;
			    { struct Cyc_Absyn_Exp * one_exp = Cyc_Absyn_set_type(_TEA,
										  _TEB);
			      _TEC = s;
			      _TED = h_var;
			      _TEE = h_typ;
			      _TEF = pushhandler_call;
			      _TF0 = was_thrown_var;
			      _TF1 = was_thrown_typ;
			      _TF2 = zero_exp;
			      _TF3 = setjmp_call;
			      _TF4 = Cyc_Toc_deep_copy(was_thrown_exp);
			      _TF5 = one_exp;
			      _TF6 = Cyc_Absyn_assign_stmt(_TF4,_TF5,0U);
			      _TF7 = Cyc_Toc_skip_stmt_dl();
			      _TF8 = Cyc_Absyn_ifthenelse_stmt(_TF3,_TF6,
							       _TF7,0U);
			      _TF9 = Cyc_Absyn_prim1_exp(11U,was_thrown_exp,
							 0U);
			      _TFA = Cyc_Absyn_sint_type;
			      _TFB = Cyc_Absyn_set_type(_TF9,_TFA);
			      _TFC = tryandpop_stmt;
			      _TFD = e_var;
			      _TFE = e_typ;
			      _TFF = e_typ;
			      _T100 = Cyc_Toc_get_exn_thrown_expression();
			      _T101 = Cyc_Absyn_cstar_type(Cyc_Absyn_void_type,
							   Cyc_Toc_mt_tq);
			      _T102 = Cyc_Absyn_set_type(_T100,_T101);
			      _T103 = Cyc_Toc_cast_it(_TFF,_T102);
			      _T104 = handler_stmt;
			      _T105 = Cyc_Absyn_declare_stmt(_TFD,_TFE,_T103,
							     _T104,0U);
			      _T106 = Cyc_Absyn_ifthenelse_stmt(_TFB,_TFC,
								_T105,0U);
			      _T107 = Cyc_Absyn_seq_stmt(_TF8,_T106,0U);
			      _T108 = Cyc_Absyn_declare_stmt(_TF0,_TF1,_TF2,
							     _T107,0U);
			      _T109 = Cyc_Absyn_seq_stmt(_TEF,_T108,0U);
			      _T10A = Cyc_Absyn_declare_stmt(_TED,_TEE,0,
							     _T109,0U);
			      _TEC->r = _T10A->r;
			    }
			  }
			}
		      }
		    }
		  }_npop_handler(0);
		  return;
		  _pop_region();
		}
	      }
	    }
	  }
	}
      }
    }
    ;
  }goto _TL40C;
  _TL40E: ;
}
static void Cyc_Toc_fndecl_to_c(struct Cyc_Toc_Env * nv,struct Cyc_Absyn_Fndecl * f,
				long cinclude) {
  struct Cyc_Absyn_Fndecl * _T0;
  struct Cyc_Absyn_Fndecl * _T1;
  struct Cyc_Absyn_Fndecl * _T2;
  struct Cyc_Absyn_Fndecl * _T3;
  struct Cyc_Absyn_Fndecl * _T4;
  struct Cyc_Absyn_Fndecl * _T5;
  struct Cyc_Absyn_Fndecl * _T6;
  struct Cyc_Absyn_Fndecl * _T7;
  struct Cyc_Absyn_Fndecl * _T8;
  struct Cyc_Absyn_Fndecl * _T9;
  struct Cyc_Absyn_FnInfo _TA;
  void * _TB;
  struct Cyc_Absyn_Fndecl * _TC;
  struct Cyc_Absyn_Fndecl * _TD;
  void * _TE;
  void * _TF;
  struct Cyc_Absyn_Fndecl * _T10;
  struct Cyc_Absyn_FnInfo _T11;
  struct Cyc_List_List * _T12;
  void * _T13;
  struct _tuple9 * _T14;
  struct Cyc_List_List * _T15;
  void * _T16;
  struct _tuple9 * _T17;
  struct _tuple9 _T18;
  void * _T19;
  struct Cyc_List_List * _T1A;
  long _T1B;
  struct Cyc_Absyn_Fndecl * _T1C;
  struct Cyc_Absyn_Stmt * _T1D;
  struct Cyc_Hashtable_Table * * _T1E;
  struct Cyc_Hashtable_Table * (* _T1F)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Fndecl *);
  void * (* _T20)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Hashtable_Table * * _T21;
  struct Cyc_Hashtable_Table * _T22;
  struct Cyc_Absyn_Fndecl * _T23;
  struct Cyc_Absyn_Fndecl * _T24;
  struct Cyc_Absyn_FnInfo _T25;
  struct Cyc_Absyn_VarargInfo * _T26;
  unsigned int _T27;
  struct Cyc_Absyn_Fndecl * _T28;
  struct Cyc_Absyn_FnInfo _T29;
  struct Cyc_Absyn_VarargInfo * _T2A;
  struct _fat_ptr * _T2B;
  struct Cyc_Absyn_Fndecl * _T2C;
  struct Cyc_Absyn_FnInfo _T2D;
  struct Cyc_Absyn_VarargInfo * _T2E;
  void * _T2F;
  struct _tuple1 * _T30;
  struct _tuple1 * _T31;
  struct Cyc_Absyn_Fndecl * _T32;
  struct Cyc_Absyn_Fndecl * _T33;
  struct Cyc_Absyn_FnInfo _T34;
  struct Cyc_List_List * _T35;
  struct Cyc_List_List * _T36;
  struct _tuple9 * _T37;
  struct Cyc_Absyn_Fndecl * _T38;
  struct Cyc_Absyn_Fndecl * _T39;
  struct Cyc_Core_Opt * _T3A;
  struct Cyc_Core_Opt * _T3B;
  void * _T3C;
  struct Cyc_List_List * _T3D;
  void * _T3E;
  struct Cyc_Absyn_Vardecl * _T3F;
  struct Cyc_List_List * _T40;
  void * _T41;
  struct Cyc_Absyn_Vardecl * _T42;
  void * _T43;
  struct Cyc_List_List * _T44;
  struct Cyc_Toc_Env * _T45;
  struct Cyc_Absyn_Fndecl * _T46;
  struct Cyc_Absyn_Stmt * _T47;
  _T0 = f;
  (_T0->i).tvars = 0;
  _T1 = f;
  (_T1->i).effect = 0;
  _T2 = f;
  (_T2->i).qual_bnd = 0;
  _T3 = f;
  (_T3->i).checks_clause = 0;
  _T4 = f;
  (_T4->i).requires_clause = 0;
  _T5 = f;
  (_T5->i).ensures_clause = 0;
  _T6 = f;
  (_T6->i).throws_clause = 0;
  _T7 = f;
  (_T7->i).effconstr = 0;
  _T8 = f;
  _T9 = f;
  _TA = _T9->i;
  _TB = _TA.ret_type;
  (_T8->i).ret_type = Cyc_Toc_typ_to_c(_TB);
  _TC = f;
  _TD = f;
  _TE = _TD->cached_type;
  _TF = _check_null(_TE);
  _TC->cached_type = Cyc_Toc_typ_to_c(_TF);
  { struct _RegionHandle _T48 = _new_region(0U,"frgn");
    struct _RegionHandle * frgn = &_T48;
    _push_region(frgn);
    { struct Cyc_Toc_Env * _T49 = Cyc_Toc_share_env(frgn,nv);
      struct Cyc_Toc_Env * nv = _T49;
      _T10 = f;
      _T11 = _T10->i;
      { struct Cyc_List_List * args = _T11.args;
	_TL434: if (args != 0) { goto _TL432;
	}else { goto _TL433;
	}
	_TL432: _T12 = args;
	_T13 = _T12->hd;
	_T14 = (struct _tuple9 *)_T13;
	_T15 = args;
	_T16 = _T15->hd;
	_T17 = (struct _tuple9 *)_T16;
	_T18 = *_T17;
	_T19 = _T18.f2;
	(*_T14).f2 = Cyc_Toc_typ_to_c(_T19);
	_T1A = args;
	args = _T1A->tl;
	goto _TL434;
	_TL433: ;
      }_T1B = cinclude;
      if (! _T1B) { goto _TL435;
      }
      _T1C = f;
      _T1D = _T1C->body;
      Cyc_Toc_stmttypes_to_c(_T1D);
      _npop_handler(0);
      return;
      _TL435: { struct Cyc_Hashtable_Table * * _T4A = _cycalloc(sizeof(struct Cyc_Hashtable_Table *));
	_T20 = Cyc_Hashtable_lookup;
	{ struct Cyc_Hashtable_Table * (* _T4B)(struct Cyc_Hashtable_Table *,
						struct Cyc_Absyn_Fndecl *) = (struct Cyc_Hashtable_Table * (*)(struct Cyc_Hashtable_Table *,
													       struct Cyc_Absyn_Fndecl *))_T20;
	  _T1F = _T4B;
	}_T21 = _check_null(Cyc_Toc_gpop_tables);
	_T22 = *_T21;
	_T23 = f;
	*_T4A = _T1F(_T22,_T23);
	_T1E = (struct Cyc_Hashtable_Table * *)_T4A;
      }Cyc_Toc_fn_pop_table = _T1E;
      _T24 = f;
      _T25 = _T24->i;
      _T26 = _T25.cyc_varargs;
      _T27 = (unsigned int)_T26;
      if (! _T27) { goto _TL437;
      }
      _T28 = f;
      _T29 = _T28->i;
      _T2A = _T29.cyc_varargs;
      _T2B = _T2A->name;
      if (_T2B == 0) { goto _TL437;
      }
      _T2C = f;
      _T2D = _T2C->i;
      _T2E = _T2D.cyc_varargs;
      { struct Cyc_Absyn_VarargInfo _T4A = *_T2E;
	long _T4B;
	void * _T4C;
	struct Cyc_Absyn_Tqual _T4D;
	struct _fat_ptr * _T4E;
	_T4E = _T4A.name;
	_T4D = _T4A.tq;
	_T4C = _T4A.type;
	_T4B = _T4A.inject;
	{ struct _fat_ptr * n = _T4E;
	  struct Cyc_Absyn_Tqual tq = _T4D;
	  void * t = _T4C;
	  long i = _T4B;
	  _T2F = Cyc_Absyn_fatptr_type(t,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,
				       tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);
	  { void * t2 = Cyc_Toc_typ_to_c(_T2F);
	    struct _tuple1 * x2;
	    x2 = _cycalloc(sizeof(struct _tuple1));
	    _T30 = x2;
	    _T30->f0 = Cyc_Absyn_Loc_n();
	    _T31 = x2;
	    _T31->f1 = n;
	    _T32 = f;
	    _T33 = f;
	    _T34 = _T33->i;
	    _T35 = _T34.args;
	    { struct Cyc_List_List * _T4F = _cycalloc(sizeof(struct Cyc_List_List));
	      { struct _tuple9 * _T50 = _cycalloc(sizeof(struct _tuple9));
		_T50->f0 = n;
		_T50->f1 = tq;
		_T50->f2 = t2;
		_T37 = (struct _tuple9 *)_T50;
	      }_T4F->hd = _T37;
	      _T4F->tl = 0;
	      _T36 = (struct Cyc_List_List *)_T4F;
	    }(_T32->i).args = Cyc_List_append(_T35,_T36);
	    _T38 = f;
	    (_T38->i).cyc_varargs = 0;
	  }
	}
      }goto _TL438;
      _TL437: _TL438: _T39 = f;
      _T3A = _T39->param_vardecls;
      _T3B = _check_null(_T3A);
      _T3C = _T3B->v;
      { struct Cyc_List_List * arg_vds = (struct Cyc_List_List *)_T3C;
	_TL43C: if (arg_vds != 0) { goto _TL43A;
	}else { goto _TL43B;
	}
	_TL43A: _T3D = arg_vds;
	_T3E = _T3D->hd;
	_T3F = (struct Cyc_Absyn_Vardecl *)_T3E;
	_T40 = arg_vds;
	_T41 = _T40->hd;
	_T42 = (struct Cyc_Absyn_Vardecl *)_T41;
	_T43 = _T42->type;
	_T3F->type = Cyc_Toc_typ_to_c(_T43);
	_T44 = arg_vds;
	arg_vds = _T44->tl;
	goto _TL43C;
	_TL43B: ;
      }_T45 = Cyc_Toc_clear_toplevel(frgn,nv);
      _T46 = f;
      _T47 = _T46->body;
      Cyc_Toc_stmt_to_c(_T45,_T47);
    }_pop_region();
  }
}
static enum Cyc_Absyn_Scope Cyc_Toc_scope_to_c(enum Cyc_Absyn_Scope s) {
  enum Cyc_Absyn_Scope _T0;
  int _T1;
  enum Cyc_Absyn_Scope _T2;
  _T0 = s;
  _T1 = (int)_T0;
  switch (_T1) {
  case Cyc_Absyn_Abstract: 
    return 2U;
  case Cyc_Absyn_ExternC: 
    return 3U;
  default: 
    _T2 = s;
    return _T2;
  }
  ;
}
 struct _tuple47 {
  struct Cyc_Toc_TocState * f0;
  struct Cyc_Absyn_Aggrdecl * * f1;
};
static int Cyc_Toc_aggrdecl_to_c_body(struct _RegionHandle * d,struct _tuple47 * env) {
  struct _tuple47 * _T0;
  struct Cyc_Absyn_Aggrdecl * * _T1;
  struct Cyc_Absyn_Aggrdecl * _T2;
  struct Cyc_Toc_TocState * _T3;
  struct _tuple20 * * (* _T4)(struct Cyc_Dict_Dict,struct _tuple1 *);
  void * * (* _T5)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _T6;
  struct Cyc_Dict_Dict _T7;
  struct _tuple1 * _T8;
  struct _RegionHandle * _T9;
  struct _tuple20 * _TA;
  struct Cyc_Absyn_Aggrdecl * _TB;
  enum Cyc_Absyn_AggrKind _TC;
  int _TD;
  struct _tuple20 * _TE;
  struct _tuple20 * _TF;
  struct Cyc_Dict_Dict * _T10;
  struct Cyc_Dict_Dict (* _T11)(struct Cyc_Dict_Dict,struct _tuple1 *,struct _tuple20 *);
  struct Cyc_Dict_Dict (* _T12)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T13;
  struct Cyc_Dict_Dict _T14;
  struct _tuple1 * _T15;
  struct _tuple20 * _T16;
  struct _tuple20 * * _T17;
  struct Cyc_Absyn_Aggrdecl * _T18;
  struct Cyc_Absyn_AggrdeclImpl * _T19;
  struct Cyc_Dict_Dict * _T1A;
  struct Cyc_Dict_Dict (* _T1B)(struct Cyc_Dict_Dict,struct _tuple1 *,struct _tuple20 *);
  struct Cyc_Dict_Dict (* _T1C)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T1D;
  struct Cyc_Dict_Dict _T1E;
  struct _tuple1 * _T1F;
  struct _tuple20 * _T20;
  struct _RegionHandle * _T21;
  struct Cyc_Absyn_Aggrdecl * _T22;
  struct Cyc_Absyn_Aggrdecl * _T23;
  struct Cyc_Absyn_Aggrdecl * _T24;
  struct Cyc_Absyn_Aggrdecl * _T25;
  struct Cyc_Absyn_Aggrdecl * _T26;
  struct Cyc_Absyn_Aggrdecl * _T27;
  struct Cyc_Absyn_Aggrdecl * _T28;
  struct Cyc_Absyn_Aggrdecl * _T29;
  struct Cyc_Absyn_Aggrdecl * _T2A;
  struct Cyc_Absyn_Aggrdecl * _T2B;
  struct Cyc_Absyn_Aggrdecl * _T2C;
  struct Cyc_Absyn_AggrdeclImpl * _T2D;
  long _T2E;
  struct Cyc_Absyn_Aggrdecl * _T2F;
  struct Cyc_Absyn_AggrdeclImpl * _T30;
  struct Cyc_Absyn_Aggrdecl * _T31;
  struct Cyc_Absyn_AggrdeclImpl * _T32;
  struct Cyc_Absyn_AggrdeclImpl * _T33;
  struct Cyc_List_List * _T34;
  void * _T35;
  struct Cyc_Absyn_Aggrfield * _T36;
  struct Cyc_Absyn_Aggrfield * _T37;
  struct Cyc_Absyn_Kind * _T38;
  struct Cyc_Absyn_Kind * _T39;
  struct Cyc_Absyn_Kind * _T3A;
  long _T3B;
  struct Cyc_Absyn_Aggrdecl * _T3C;
  enum Cyc_Absyn_AggrKind _T3D;
  int _T3E;
  struct Cyc_List_List * _T3F;
  struct Cyc_List_List * _T40;
  struct Cyc_Absyn_Aggrdecl * _T41;
  enum Cyc_Absyn_AggrKind _T42;
  int _T43;
  int * _T44;
  int _T45;
  struct Cyc_Absyn_ArrayInfo _T46;
  struct Cyc_Absyn_ArrayInfo _T47;
  struct Cyc_Absyn_ArrayInfo _T48;
  struct Cyc_Absyn_ArrayInfo _T49;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T4A;
  struct Cyc_Absyn_Exp * _T4B;
  void * _T4C;
  struct Cyc_List_List * _T4D;
  struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T4E;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T4F;
  struct Cyc_Absyn_Exp * _T50;
  void * _T51;
  struct Cyc_Absyn_Aggrfield * _T52;
  struct Cyc_Absyn_Aggrfield * _T53;
  struct Cyc_Absyn_Aggrfield * _T54;
  struct Cyc_Absyn_Aggrfield * _T55;
  struct Cyc_Absyn_Aggrfield * _T56;
  struct Cyc_Absyn_Aggrfield * _T57;
  struct Cyc_Absyn_Aggrfield * _T58;
  struct Cyc_Absyn_Aggrfield * _T59;
  struct Cyc_Absyn_Aggrdecl * _T5A;
  struct Cyc_Absyn_AggrdeclImpl * _T5B;
  struct Cyc_Absyn_AggrdeclImpl * _T5C;
  long _T5D;
  struct Cyc_Absyn_Aggrfield * _T5E;
  struct Cyc_Absyn_Aggrfield * _T5F;
  struct _fat_ptr _T60;
  struct Cyc_String_pa_PrintArg_struct _T61;
  struct Cyc_Absyn_Aggrdecl * _T62;
  struct _tuple1 * _T63;
  struct _tuple1 _T64;
  struct _fat_ptr * _T65;
  struct Cyc_String_pa_PrintArg_struct _T66;
  struct _fat_ptr * _T67;
  struct _fat_ptr _T68;
  struct _fat_ptr _T69;
  struct _fat_ptr * _T6A;
  struct Cyc_Absyn_Aggrfield * _T6B;
  struct Cyc_Absyn_Aggrfield * _T6C;
  struct Cyc_Absyn_Aggrfield * _T6D;
  struct Cyc_Absyn_Aggrfield * _T6E;
  struct Cyc_Absyn_Aggrfield * _T6F;
  struct Cyc_Absyn_Aggrfield * _T70;
  struct Cyc_Absyn_Aggrfield * _T71;
  struct Cyc_Absyn_Aggrfield * _T72;
  struct Cyc_Absyn_Aggrfield * _T73;
  struct Cyc_Absyn_Aggrfield * _T74;
  struct Cyc_Absyn_Aggrfield * _T75;
  struct Cyc_Absyn_Aggrfield * _T76;
  struct _fat_ptr * _T77;
  struct Cyc_List_List * _T78;
  struct _fat_ptr _T79;
  struct Cyc_List_List * _T7A;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T7B;
  void * _T7C;
  struct Cyc_Absyn_Aggrfield * _T7D;
  struct Cyc_List_List * _T7E;
  struct Cyc_List_List * _T7F;
  struct Cyc_Absyn_Aggrdecl * _T80;
  struct Cyc_Absyn_AggrdeclImpl * _T81;
  long _T82;
  struct Cyc_List_List * _T83;
  struct Cyc_Absyn_Decl * _T84;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T85;
  _T0 = env;
  { struct _tuple47 _T86 = *_T0;
    struct Cyc_Absyn_Aggrdecl * _T87;
    struct Cyc_Toc_TocState * _T88;
    _T88 = _T86.f0;
    _T1 = _T86.f1;
    { struct Cyc_Absyn_Aggrdecl * _T89 = *_T1;
      _T87 = _T89;
    }{ struct Cyc_Toc_TocState * s = _T88;
      struct Cyc_Absyn_Aggrdecl * ad = _T87;
      _T2 = ad;
      { struct _tuple1 * n = _T2->name;
	_T3 = s;
	{ struct Cyc_Toc_TocState _T89 = *_T3;
	  struct Cyc_Dict_Dict * _T8A;
	  _T8A = _T89.aggrs_so_far;
	  { struct Cyc_Dict_Dict * aggrs_so_far = _T8A;
	    long seen_defn_before;
	    _T5 = Cyc_Dict_lookup_opt;
	    { struct _tuple20 * * (* _T8B)(struct Cyc_Dict_Dict,struct _tuple1 *) = (struct _tuple20 * * (*)(struct Cyc_Dict_Dict,
													     struct _tuple1 *))_T5;
	      _T4 = _T8B;
	    }_T6 = aggrs_so_far;
	    _T7 = *_T6;
	    _T8 = n;
	    { struct _tuple20 * * dopt = _T4(_T7,_T8);
	      if (dopt != 0) { goto _TL43E;
	      }
	      seen_defn_before = 0;
	      { struct _tuple20 * v;
		_T9 = d;
		v = _region_malloc(_T9,0U,sizeof(struct _tuple20));
		_TA = v;
		_TA->f0 = ad;
		_TB = ad;
		_TC = _TB->kind;
		_TD = (int)_TC;
		if (_TD != 0) { goto _TL440;
		}
		_TE = v;
		_TE->f1 = Cyc_Absyn_strctq(n);
		goto _TL441;
		_TL440: _TF = v;
		_TF->f1 = Cyc_Absyn_unionq_type(n);
		_TL441: _T10 = aggrs_so_far;
		_T12 = Cyc_Dict_insert;
		{ struct Cyc_Dict_Dict (* _T8B)(struct Cyc_Dict_Dict,struct _tuple1 *,
						struct _tuple20 *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
											       struct _tuple1 *,
											       struct _tuple20 *))_T12;
		  _T11 = _T8B;
		}_T13 = aggrs_so_far;
		_T14 = *_T13;
		_T15 = n;
		_T16 = v;
		*_T10 = _T11(_T14,_T15,_T16);
	      }goto _TL43F;
	      _TL43E: _T17 = dopt;
	      { struct _tuple20 * _T8B = *_T17;
		void * _T8C;
		struct Cyc_Absyn_Aggrdecl * _T8D;
		{ struct _tuple20 _T8E = *_T8B;
		  _T8D = _T8E.f0;
		  _T8C = _T8E.f1;
		}{ struct Cyc_Absyn_Aggrdecl * ad2 = _T8D;
		  void * t = _T8C;
		  _T18 = ad2;
		  _T19 = _T18->impl;
		  if (_T19 != 0) { goto _TL442;
		  }
		  _T1A = aggrs_so_far;
		  _T1C = Cyc_Dict_insert;
		  { struct Cyc_Dict_Dict (* _T8E)(struct Cyc_Dict_Dict,struct _tuple1 *,
						  struct _tuple20 *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
												 struct _tuple1 *,
												 struct _tuple20 *))_T1C;
		    _T1B = _T8E;
		  }_T1D = aggrs_so_far;
		  _T1E = *_T1D;
		  _T1F = n;
		  _T21 = d;
		  { struct _tuple20 * _T8E = _region_malloc(_T21,0U,sizeof(struct _tuple20));
		    _T8E->f0 = ad;
		    _T8E->f1 = t;
		    _T20 = (struct _tuple20 *)_T8E;
		  }*_T1A = _T1B(_T1E,_T1F,_T20);
		  seen_defn_before = 0;
		  goto _TL443;
		  _TL442: seen_defn_before = 1;
		  _TL443: ;
		}
	      }_TL43F: { struct Cyc_Absyn_Aggrdecl * new_ad;
		new_ad = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
		_T22 = new_ad;
		_T23 = ad;
		_T22->kind = _T23->kind;
		_T24 = new_ad;
		_T24->sc = 2U;
		_T25 = new_ad;
		_T26 = ad;
		_T25->name = _T26->name;
		_T27 = new_ad;
		_T27->tvs = 0;
		_T28 = new_ad;
		_T28->impl = 0;
		_T29 = new_ad;
		_T29->expected_mem_kind = 0;
		_T2A = new_ad;
		_T2B = ad;
		_T2A->attributes = _T2B->attributes;
		_T2C = ad;
		_T2D = _T2C->impl;
		if (_T2D == 0) { goto _TL444;
		}
		_T2E = seen_defn_before;
		if (_T2E) { goto _TL444;
		}else { goto _TL446;
		}
		_TL446: _T2F = new_ad;
		{ struct Cyc_Absyn_AggrdeclImpl * _T8B = _cycalloc(sizeof(struct Cyc_Absyn_AggrdeclImpl));
		  _T8B->exist_vars = 0;
		  _T8B->qual_bnd = 0;
		  _T8B->fields = 0;
		  _T8B->tagged = 0;
		  _T8B->effconstr = 0;
		  _T30 = (struct Cyc_Absyn_AggrdeclImpl *)_T8B;
		}_T2F->impl = _T30;
		{ struct Cyc_List_List * new_fields = 0;
		  _T31 = ad;
		  _T32 = _T31->impl;
		  _T33 = _check_null(_T32);
		  { struct Cyc_List_List * fields = _T33->fields;
		    _TL44A: if (fields != 0) { goto _TL448;
		    }else { goto _TL449;
		    }
		    _TL448: _T34 = fields;
		    _T35 = _T34->hd;
		    { struct Cyc_Absyn_Aggrfield * old_field = (struct Cyc_Absyn_Aggrfield *)_T35;
		      _T36 = old_field;
		      { void * old_type = _T36->type;
			_T37 = old_field;
			{ struct Cyc_List_List * old_atts = _T37->attributes;
			  _T38 = &Cyc_Kinds_ak;
			  _T39 = (struct Cyc_Absyn_Kind *)_T38;
			  _T3A = Cyc_Tcutil_type_kind(old_type);
			  _T3B = Cyc_Kinds_kind_leq(_T39,_T3A);
			  if (! _T3B) { goto _TL44B;
			  }
			  _T3C = ad;
			  _T3D = _T3C->kind;
			  _T3E = (int)_T3D;
			  if (_T3E == 0) { goto _TL44F;
			  }else { goto _TL44E;
			  }
			  _TL44F: _T3F = fields;
			  _T40 = _T3F->tl;
			  if (_T40 == 0) { goto _TL44D;
			  }else { goto _TL44E;
			  }
			  _TL44E: _T41 = ad;
			  _T42 = _T41->kind;
			  _T43 = (int)_T42;
			  if (_T43 == 1) { goto _TL44D;
			  }else { goto _TL44B;
			  }
			  _TL44D: { void * _T8B = Cyc_Absyn_compress(old_type);
			    unsigned int _T8C;
			    void * _T8D;
			    struct Cyc_Absyn_Tqual _T8E;
			    void * _T8F;
			    _T44 = (int *)_T8B;
			    _T45 = *_T44;
			    if (_T45 != 5) { goto _TL450;
			    }
			    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T90 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T8B;
			      _T46 = _T90->f1;
			      _T8F = _T46.elt_type;
			      _T47 = _T90->f1;
			      _T8E = _T47.tq;
			      _T48 = _T90->f1;
			      _T8D = _T48.zero_term;
			      _T49 = _T90->f1;
			      _T8C = _T49.zt_loc;
			    }{ void * et = _T8F;
			      struct Cyc_Absyn_Tqual tq = _T8E;
			      void * zt = _T8D;
			      unsigned int ztl = _T8C;
			      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T90 = _cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));
				_T90->tag = 5;
				(_T90->f1).elt_type = et;
				(_T90->f1).tq = tq;
				_T4B = Cyc_Absyn_uint_exp(0U,0U);
				_T4C = Cyc_Absyn_uint_type;
				(_T90->f1).num_elts = Cyc_Absyn_set_type(_T4B,
									 _T4C);
				(_T90->f1).zero_term = zt;
				(_T90->f1).zt_loc = ztl;
				_T4A = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T90;
			      }old_type = (void *)_T4A;
			      goto _LL9;
			    }_TL450: { struct Cyc_List_List * _T90 = _cycalloc(sizeof(struct Cyc_List_List));
			      { struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T91 = _cycalloc(sizeof(struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct));
				_T91->tag = 7;
				_T91->f1 = 0;
				_T4E = (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct *)_T91;
			      }_T90->hd = (void *)_T4E;
			      _T90->tl = old_atts;
			      _T4D = (struct Cyc_List_List *)_T90;
			    }old_atts = _T4D;
			    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T90 = _cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));
			      _T90->tag = 5;
			      (_T90->f1).elt_type = Cyc_Toc_void_star_type();
			      (_T90->f1).tq = Cyc_Toc_mt_tq;
			      _T50 = Cyc_Absyn_uint_exp(0U,0U);
			      _T51 = Cyc_Absyn_uint_type;
			      (_T90->f1).num_elts = Cyc_Absyn_set_type(_T50,
								       _T51);
			      (_T90->f1).zero_term = Cyc_Absyn_false_type;
			      (_T90->f1).zt_loc = 0U;
			      _T4F = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T90;
			    }old_type = (void *)_T4F;
			    _LL9: ;
			  }goto _TL44C;
			  _TL44B: _TL44C: { struct Cyc_Absyn_Aggrfield * new_field;
			    new_field = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
			    _T52 = new_field;
			    _T53 = old_field;
			    _T52->name = _T53->name;
			    _T54 = new_field;
			    _T54->tq = Cyc_Toc_mt_tq;
			    _T55 = new_field;
			    _T55->type = Cyc_Toc_typ_to_c(old_type);
			    _T56 = new_field;
			    _T57 = old_field;
			    _T56->width = _T57->width;
			    _T58 = new_field;
			    _T58->attributes = Cyc_Atts_atts2c(old_atts);
			    _T59 = new_field;
			    _T59->requires_clause = 0;
			    _T5A = ad;
			    _T5B = _T5A->impl;
			    _T5C = _check_null(_T5B);
			    _T5D = _T5C->tagged;
			    if (! _T5D) { goto _TL452;
			    }
			    _T5E = new_field;
			    { void * T = _T5E->type;
			      _T5F = new_field;
			      { struct _fat_ptr * f = _T5F->name;
				{ struct Cyc_String_pa_PrintArg_struct _T8B;
				  _T8B.tag = 0;
				  _T62 = ad;
				  _T63 = _T62->name;
				  _T64 = *_T63;
				  _T65 = _T64.f1;
				  _T8B.f1 = *_T65;
				  _T61 = _T8B;
				}{ struct Cyc_String_pa_PrintArg_struct _T8B = _T61;
				  { struct Cyc_String_pa_PrintArg_struct _T8C;
				    _T8C.tag = 0;
				    _T67 = f;
				    _T8C.f1 = *_T67;
				    _T66 = _T8C;
				  }{ struct Cyc_String_pa_PrintArg_struct _T8C = _T66;
				    void * _T8D[2];
				    _T8D[0] = &_T8B;
				    _T8D[1] = &_T8C;
				    _T68 = _tag_fat("_union_%s_%s",sizeof(char),
						    13U);
				    _T69 = _tag_fat(_T8D,sizeof(void *),2);
				    _T60 = Cyc_aprintf(_T68,_T69);
				  }
				}{ struct _fat_ptr s = _T60;
				  struct _fat_ptr * str;
				  str = _cycalloc(sizeof(struct _fat_ptr));
				  _T6A = str;
				  *_T6A = s;
				  { struct Cyc_Absyn_Aggrfield * value_field;
				    value_field = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
				    _T6B = value_field;
				    _T6B->name = Cyc_Toc_val_sp;
				    _T6C = value_field;
				    _T6C->tq = Cyc_Toc_mt_tq;
				    _T6D = value_field;
				    _T6D->type = T;
				    _T6E = value_field;
				    _T6E->width = 0;
				    _T6F = value_field;
				    _T6F->attributes = 0;
				    _T70 = value_field;
				    _T70->requires_clause = 0;
				    { struct Cyc_Absyn_Aggrfield * tag_field;
				      tag_field = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
				      _T71 = tag_field;
				      _T71->name = Cyc_Toc_tag_sp;
				      _T72 = tag_field;
				      _T72->tq = Cyc_Toc_mt_tq;
				      _T73 = tag_field;
				      _T73->type = Cyc_Absyn_sint_type;
				      _T74 = tag_field;
				      _T74->width = 0;
				      _T75 = tag_field;
				      _T75->attributes = 0;
				      _T76 = tag_field;
				      _T76->requires_clause = 0;
				      _T77 = str;
				      { struct Cyc_Absyn_Aggrfield * _T8B[2];
					_T8B[0] = tag_field;
					_T8B[1] = value_field;
					_T79 = _tag_fat(_T8B,sizeof(struct Cyc_Absyn_Aggrfield *),
							2);
					_T78 = Cyc_List_list(_T79);
				      }{ struct Cyc_Absyn_Aggrdecl * ad2 = Cyc_Toc_make_c_struct_defn(_T77,
												      _T78);
					{ struct Cyc_List_List * _T8B = _cycalloc(sizeof(struct Cyc_List_List));
					  { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T8C = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
					    _T8C->tag = 5;
					    _T8C->f1 = ad2;
					    _T7B = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T8C;
					  }_T7C = (void *)_T7B;
					  _T8B->hd = Cyc_Absyn_new_decl(_T7C,
									0U);
					  _T8B->tl = Cyc_Toc_result_decls;
					  _T7A = (struct Cyc_List_List *)_T8B;
					}Cyc_Toc_result_decls = _T7A;
					_T7D = new_field;
					_T7D->type = Cyc_Absyn_strct(str);
				      }
				    }
				  }
				}
			      }
			    }goto _TL453;
			    _TL452: _TL453: { struct Cyc_List_List * _T8B = _cycalloc(sizeof(struct Cyc_List_List));
			      _T8B->hd = new_field;
			      _T8B->tl = new_fields;
			      _T7E = (struct Cyc_List_List *)_T8B;
			    }new_fields = _T7E;
			  }
			}
		      }
		    }_T7F = fields;
		    fields = _T7F->tl;
		    goto _TL44A;
		    _TL449: ;
		  }_T80 = new_ad;
		  _T81 = _T80->impl;
		  _T81->fields = Cyc_List_imp_rev(new_fields);
		}goto _TL445;
		_TL444: _TL445: _T82 = seen_defn_before;
		if (_T82) { goto _TL454;
		}else { goto _TL456;
		}
		_TL456: { struct Cyc_List_List * _T8B = _cycalloc(sizeof(struct Cyc_List_List));
		  { struct Cyc_Absyn_Decl * _T8C = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
		    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T8D = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
		      _T8D->tag = 5;
		      _T8D->f1 = new_ad;
		      _T85 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T8D;
		    }_T8C->r = (void *)_T85;
		    _T8C->loc = 0U;
		    _T84 = (struct Cyc_Absyn_Decl *)_T8C;
		  }_T8B->hd = _T84;
		  _T8B->tl = Cyc_Toc_result_decls;
		  _T83 = (struct Cyc_List_List *)_T8B;
		}Cyc_Toc_result_decls = _T83;
		goto _TL455;
		_TL454: _TL455: return 0;
	      }
	    }
	  }
	}
      }
    }
  }
}
static void Cyc_Toc_aggrdecl_to_c(struct Cyc_Absyn_Aggrdecl * ad) {
  int (* _T0)(struct Cyc_Absyn_Aggrdecl * *,int (*)(struct _RegionHandle *,
						    struct _tuple47 *));
  struct Cyc_Absyn_Aggrdecl * * _T1;
  { int (* _T2)(struct Cyc_Absyn_Aggrdecl * *,int (*)(struct _RegionHandle *,
						      struct _tuple47 *)) = (int (*)(struct Cyc_Absyn_Aggrdecl * *,
										     int (*)(struct _RegionHandle *,
											     struct _tuple47 *)))Cyc_Toc_use_toc_state;
    _T0 = _T2;
  }_T1 = &ad;
  _T0(_T1,Cyc_Toc_aggrdecl_to_c_body);
}
 struct _tuple48 {
  struct Cyc_Toc_TocState * f0;
  struct Cyc_Absyn_Datatypedecl * f1;
};
static int Cyc_Toc_datatypedecl_to_c_body(struct _RegionHandle * d,struct _tuple48 * env) {
  struct _tuple48 * _T0;
  struct Cyc_Toc_TocState * _T1;
  struct Cyc_Absyn_Datatypedecl * _T2;
  struct Cyc_Absyn_Datatypedecl * _T3;
  struct Cyc_Core_Opt * _T4;
  long (* _T5)(struct Cyc_Set_Set *,struct _tuple1 *);
  long (* _T6)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * * _T7;
  struct Cyc_Set_Set * _T8;
  struct _tuple1 * _T9;
  long _TA;
  struct Cyc_Set_Set * * _TB;
  struct Cyc_Set_Set * (* _TC)(struct _RegionHandle *,struct Cyc_Set_Set *,
			       struct _tuple1 *);
  struct Cyc_Set_Set * (* _TD)(struct _RegionHandle *,struct Cyc_Set_Set *,
			       void *);
  struct _RegionHandle * _TE;
  struct Cyc_Set_Set * * _TF;
  struct Cyc_Set_Set * _T10;
  struct _tuple1 * _T11;
  struct Cyc_Absyn_Datatypedecl * _T12;
  struct Cyc_Core_Opt * _T13;
  struct Cyc_Core_Opt * _T14;
  void * _T15;
  struct Cyc_List_List * _T16;
  void * _T17;
  struct Cyc_Absyn_Datatypefield * _T18;
  struct Cyc_Absyn_Aggrfield * _T19;
  struct Cyc_Absyn_Aggrfield * _T1A;
  struct Cyc_List_List * _T1B;
  void * _T1C;
  struct _tuple26 * _T1D;
  struct _tuple26 _T1E;
  struct Cyc_Absyn_Aggrfield * _T1F;
  struct Cyc_List_List * _T20;
  void * _T21;
  struct _tuple26 * _T22;
  struct _tuple26 _T23;
  void * _T24;
  struct Cyc_Absyn_Aggrfield * _T25;
  struct Cyc_Absyn_Aggrfield * _T26;
  struct Cyc_Absyn_Aggrfield * _T27;
  struct Cyc_List_List * _T28;
  struct Cyc_List_List * _T29;
  struct Cyc_List_List * _T2A;
  struct Cyc_Absyn_Aggrfield * _T2B;
  struct _fat_ptr * _T2C;
  struct Cyc_List_List * _T2D;
  struct Cyc_Absyn_Aggrdecl * _T2E;
  struct Cyc_Absyn_Datatypefield * _T2F;
  struct _tuple1 * _T30;
  struct Cyc_Absyn_Datatypedecl * _T31;
  struct _tuple1 * _T32;
  struct Cyc_List_List * _T33;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T34;
  void * _T35;
  struct Cyc_List_List * _T36;
  _T0 = env;
  { struct _tuple48 _T37 = *_T0;
    struct Cyc_Absyn_Datatypedecl * _T38;
    struct Cyc_Set_Set * * _T39;
    _T1 = _T37.f0;
    { struct Cyc_Toc_TocState _T3A = *_T1;
      _T39 = _T3A.datatypes_so_far;
    }_T38 = _T37.f1;
    { struct Cyc_Set_Set * * datatypes_so_far = _T39;
      struct Cyc_Absyn_Datatypedecl * tud = _T38;
      _T2 = tud;
      { struct _tuple1 * n = _T2->name;
	_T3 = tud;
	_T4 = _T3->fields;
	if (_T4 == 0) { goto _TL459;
	}else { goto _TL45A;
	}
	_TL45A: _T6 = Cyc_Set_member;
	{ long (* _T3A)(struct Cyc_Set_Set *,struct _tuple1 *) = (long (*)(struct Cyc_Set_Set *,
									   struct _tuple1 *))_T6;
	  _T5 = _T3A;
	}_T7 = datatypes_so_far;
	_T8 = *_T7;
	_T9 = n;
	_TA = _T5(_T8,_T9);
	if (_TA) { goto _TL459;
	}else { goto _TL457;
	}
	_TL459: return 0;
	_TL457: _TB = datatypes_so_far;
	_TD = Cyc_Set_rinsert;
	{ struct Cyc_Set_Set * (* _T3A)(struct _RegionHandle *,struct Cyc_Set_Set *,
					struct _tuple1 *) = (struct Cyc_Set_Set * (*)(struct _RegionHandle *,
										      struct Cyc_Set_Set *,
										      struct _tuple1 *))_TD;
	  _TC = _T3A;
	}_TE = d;
	_TF = datatypes_so_far;
	_T10 = *_TF;
	_T11 = n;
	*_TB = _TC(_TE,_T10,_T11);
	_T12 = tud;
	_T13 = _T12->fields;
	_T14 = _check_null(_T13);
	_T15 = _T14->v;
	{ struct Cyc_List_List * fields = (struct Cyc_List_List *)_T15;
	  _TL45E: if (fields != 0) { goto _TL45C;
	  }else { goto _TL45D;
	  }
	  _TL45C: _T16 = fields;
	  _T17 = _T16->hd;
	  { struct Cyc_Absyn_Datatypefield * f = (struct Cyc_Absyn_Datatypefield *)_T17;
	    struct Cyc_List_List * fs = 0;
	    int i = 1;
	    _T18 = f;
	    { struct Cyc_List_List * ts = _T18->typs;
	      _TL462: if (ts != 0) { goto _TL460;
	      }else { goto _TL461;
	      }
	      _TL460: { struct Cyc_Absyn_Aggrfield * f;
		f = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
		_T19 = f;
		_T19->name = Cyc_Absyn_fieldname(i);
		_T1A = f;
		_T1B = ts;
		_T1C = _T1B->hd;
		_T1D = (struct _tuple26 *)_T1C;
		_T1E = *_T1D;
		_T1A->tq = _T1E.f0;
		_T1F = f;
		_T20 = ts;
		_T21 = _T20->hd;
		_T22 = (struct _tuple26 *)_T21;
		_T23 = *_T22;
		_T24 = _T23.f1;
		_T1F->type = Cyc_Toc_typ_to_c(_T24);
		_T25 = f;
		_T25->width = 0;
		_T26 = f;
		_T26->attributes = 0;
		_T27 = f;
		_T27->requires_clause = 0;
		{ struct Cyc_List_List * _T3A = _cycalloc(sizeof(struct Cyc_List_List));
		  _T3A->hd = f;
		  _T3A->tl = fs;
		  _T28 = (struct Cyc_List_List *)_T3A;
		}fs = _T28;
	      }_T29 = ts;
	      ts = _T29->tl;
	      i = i + 1;
	      goto _TL462;
	      _TL461: ;
	    }{ struct Cyc_List_List * _T3A = _cycalloc(sizeof(struct Cyc_List_List));
	      { struct Cyc_Absyn_Aggrfield * _T3B = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
		_T3B->name = Cyc_Toc_tag_sp;
		_T3B->tq = Cyc_Toc_mt_tq;
		_T3B->type = Cyc_Absyn_sint_type;
		_T3B->width = 0;
		_T3B->attributes = 0;
		_T3B->requires_clause = 0;
		_T2B = (struct Cyc_Absyn_Aggrfield *)_T3B;
	      }_T3A->hd = _T2B;
	      _T3A->tl = Cyc_List_imp_rev(fs);
	      _T2A = (struct Cyc_List_List *)_T3A;
	    }fs = _T2A;
	    { struct _fat_ptr * _T3A = _cycalloc(sizeof(struct _fat_ptr));
	      *_T3A = _tag_fat("",sizeof(char),1U);
	      _T2C = (struct _fat_ptr *)_T3A;
	    }_T2D = fs;
	    { struct Cyc_Absyn_Aggrdecl * ad = Cyc_Toc_make_c_struct_defn(_T2C,
									  _T2D);
	      _T2E = ad;
	      _T2F = f;
	      _T30 = _T2F->name;
	      _T31 = tud;
	      _T32 = _T31->name;
	      _T2E->name = Cyc_Toc_collapse_qvars(_T30,_T32);
	      { struct Cyc_List_List * _T3A = _cycalloc(sizeof(struct Cyc_List_List));
		{ struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T3B = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
		  _T3B->tag = 5;
		  _T3B->f1 = ad;
		  _T34 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T3B;
		}_T35 = (void *)_T34;
		_T3A->hd = Cyc_Absyn_new_decl(_T35,0U);
		_T3A->tl = Cyc_Toc_result_decls;
		_T33 = (struct Cyc_List_List *)_T3A;
	      }Cyc_Toc_result_decls = _T33;
	    }
	  }_T36 = fields;
	  fields = _T36->tl;
	  goto _TL45E;
	  _TL45D: ;
	}return 0;
      }
    }
  }
}
static void Cyc_Toc_datatypedecl_to_c(struct Cyc_Absyn_Datatypedecl * tud) {
  int (* _T0)(struct Cyc_Absyn_Datatypedecl *,int (*)(struct _RegionHandle *,
						      struct _tuple48 *));
  { int (* _T1)(struct Cyc_Absyn_Datatypedecl *,int (*)(struct _RegionHandle *,
							struct _tuple48 *)) = (int (*)(struct Cyc_Absyn_Datatypedecl *,
										       int (*)(struct _RegionHandle *,
											       struct _tuple48 *)))Cyc_Toc_use_toc_state;
    _T0 = _T1;
  }_T0(tud,Cyc_Toc_datatypedecl_to_c_body);
}
static int Cyc_Toc_xdatatypedecl_to_c_body(struct _RegionHandle * d,struct _tuple48 * env) {
  struct _tuple48 * _T0;
  struct Cyc_Absyn_Datatypedecl * _T1;
  struct Cyc_Core_Opt * _T2;
  struct Cyc_Toc_TocState * _T3;
  struct Cyc_Absyn_Datatypedecl * _T4;
  struct Cyc_Absyn_Datatypedecl * _T5;
  struct Cyc_Core_Opt * _T6;
  void * _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct Cyc_Absyn_Datatypefield * _TA;
  struct _tuple1 * _TB;
  struct _tuple1 _TC;
  struct _fat_ptr * _TD;
  struct _fat_ptr _TE;
  unsigned int _TF;
  struct Cyc_Absyn_Exp * _T10;
  void * _T11;
  long * (* _T12)(struct Cyc_Dict_Dict,struct _tuple1 *);
  void * * (* _T13)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _T14;
  struct Cyc_Dict_Dict _T15;
  struct Cyc_Absyn_Datatypefield * _T16;
  struct _tuple1 * _T17;
  struct Cyc_Absyn_Datatypefield * _T18;
  enum Cyc_Absyn_Scope _T19;
  int _T1A;
  struct _fat_ptr * _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_Absyn_Datatypefield * _T1D;
  struct _tuple1 * _T1E;
  void * _T1F;
  struct Cyc_Absyn_Exp * _T20;
  struct Cyc_Absyn_Vardecl * _T21;
  struct Cyc_Absyn_Datatypefield * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T24;
  void * _T25;
  struct Cyc_Dict_Dict * _T26;
  struct Cyc_Dict_Dict (* _T27)(struct Cyc_Dict_Dict,struct _tuple1 *,long);
  struct Cyc_Dict_Dict (* _T28)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T29;
  struct Cyc_Dict_Dict _T2A;
  struct Cyc_Absyn_Datatypefield * _T2B;
  struct _tuple1 * _T2C;
  struct Cyc_Absyn_Datatypefield * _T2D;
  enum Cyc_Absyn_Scope _T2E;
  int _T2F;
  int _T30;
  struct Cyc_Absyn_Datatypefield * _T31;
  struct Cyc_Absyn_Aggrfield * _T32;
  struct Cyc_Absyn_Aggrfield * _T33;
  struct Cyc_List_List * _T34;
  void * _T35;
  struct _tuple26 * _T36;
  struct _tuple26 _T37;
  struct Cyc_Absyn_Aggrfield * _T38;
  struct Cyc_List_List * _T39;
  void * _T3A;
  struct _tuple26 * _T3B;
  struct _tuple26 _T3C;
  void * _T3D;
  struct Cyc_Absyn_Aggrfield * _T3E;
  struct Cyc_Absyn_Aggrfield * _T3F;
  struct Cyc_Absyn_Aggrfield * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_List_List * _T42;
  struct Cyc_List_List * _T43;
  struct Cyc_Absyn_Aggrfield * _T44;
  struct _fat_ptr * _T45;
  struct Cyc_List_List * _T46;
  struct Cyc_Absyn_Aggrdecl * _T47;
  struct Cyc_Absyn_Datatypefield * _T48;
  struct _tuple1 * _T49;
  struct Cyc_Absyn_Datatypedecl * _T4A;
  struct _tuple1 * _T4B;
  struct Cyc_List_List * _T4C;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T4D;
  void * _T4E;
  long * _T4F;
  long _T50;
  struct Cyc_Absyn_Datatypefield * _T51;
  enum Cyc_Absyn_Scope _T52;
  int _T53;
  struct _fat_ptr * _T54;
  struct _fat_ptr _T55;
  struct Cyc_Absyn_Datatypefield * _T56;
  struct _tuple1 * _T57;
  void * _T58;
  struct Cyc_Absyn_Exp * _T59;
  struct Cyc_Absyn_Vardecl * _T5A;
  struct Cyc_Absyn_Datatypefield * _T5B;
  struct Cyc_List_List * _T5C;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T5D;
  void * _T5E;
  struct Cyc_Dict_Dict * _T5F;
  struct Cyc_Dict_Dict (* _T60)(struct Cyc_Dict_Dict,struct _tuple1 *,long);
  struct Cyc_Dict_Dict (* _T61)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T62;
  struct Cyc_Dict_Dict _T63;
  struct Cyc_Absyn_Datatypefield * _T64;
  struct _tuple1 * _T65;
  struct Cyc_List_List * _T66;
  _T0 = env;
  { struct _tuple48 _T67 = *_T0;
    struct Cyc_Absyn_Datatypedecl * _T68;
    struct Cyc_Toc_TocState * _T69;
    _T69 = _T67.f0;
    _T68 = _T67.f1;
    { struct Cyc_Toc_TocState * s = _T69;
      struct Cyc_Absyn_Datatypedecl * xd = _T68;
      _T1 = xd;
      _T2 = _T1->fields;
      if (_T2 != 0) { goto _TL463;
      }
      return 0;
      _TL463: _T3 = s;
      { struct Cyc_Toc_TocState _T6A = *_T3;
	struct Cyc_Dict_Dict * _T6B;
	_T6B = _T6A.xdatatypes_so_far;
	{ struct Cyc_Dict_Dict * xdatatypes_so_far = _T6B;
	  _T4 = xd;
	  { struct _tuple1 * n = _T4->name;
	    _T5 = xd;
	    _T6 = _T5->fields;
	    _T7 = _T6->v;
	    { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T7;
	      _TL468: if (fs != 0) { goto _TL466;
	      }else { goto _TL467;
	      }
	      _TL466: _T8 = fs;
	      _T9 = _T8->hd;
	      { struct Cyc_Absyn_Datatypefield * f = (struct Cyc_Absyn_Datatypefield *)_T9;
		_TA = f;
		_TB = _TA->name;
		_TC = *_TB;
		{ struct _fat_ptr * fn = _TC.f1;
		  _TD = fn;
		  _TE = *_TD;
		  _TF = _get_fat_size(_TE,sizeof(char));
		  _T10 = Cyc_Absyn_uint_exp(_TF,0U);
		  _T11 = Cyc_Absyn_uint_type;
		  { struct Cyc_Absyn_Exp * sz_exp = Cyc_Absyn_set_type(_T10,
								       _T11);
		    void * tag_typ = Cyc_Absyn_array_type(Cyc_Absyn_char_type,
							  Cyc_Toc_mt_tq,sz_exp,
							  Cyc_Absyn_false_type,
							  0U);
		    _T13 = Cyc_Dict_lookup_opt;
		    { long * (* _T6C)(struct Cyc_Dict_Dict,struct _tuple1 *) = (long * (*)(struct Cyc_Dict_Dict,
											   struct _tuple1 *))_T13;
		      _T12 = _T6C;
		    }_T14 = xdatatypes_so_far;
		    _T15 = *_T14;
		    _T16 = f;
		    _T17 = _T16->name;
		    { long * _T6C = _T12(_T15,_T17);
		      if (_T6C != 0) { goto _TL469;
		      }
		      { struct Cyc_Absyn_Exp * initopt = 0;
			_T18 = f;
			_T19 = _T18->sc;
			_T1A = (int)_T19;
			if (_T1A == 3) { goto _TL46B;
			}
			_T1B = fn;
			_T1C = *_T1B;
			initopt = Cyc_Absyn_string_exp(_T1C,0U);
			goto _TL46C;
			_TL46B: _TL46C: _T1D = f;
			_T1E = _T1D->name;
			_T1F = tag_typ;
			_T20 = initopt;
			{ struct Cyc_Absyn_Vardecl * tag_decl = Cyc_Absyn_new_vardecl(0U,
										      _T1E,
										      _T1F,
										      _T20,
										      0);
			  _T21 = tag_decl;
			  _T22 = f;
			  _T21->sc = _T22->sc;
			  { struct Cyc_List_List * _T6D = _cycalloc(sizeof(struct Cyc_List_List));
			    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T6E = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
			      _T6E->tag = 0;
			      _T6E->f1 = tag_decl;
			      _T24 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T6E;
			    }_T25 = (void *)_T24;
			    _T6D->hd = Cyc_Absyn_new_decl(_T25,0U);
			    _T6D->tl = Cyc_Toc_result_decls;
			    _T23 = (struct Cyc_List_List *)_T6D;
			  }Cyc_Toc_result_decls = _T23;
			  _T26 = xdatatypes_so_far;
			  _T28 = Cyc_Dict_insert;
			  { struct Cyc_Dict_Dict (* _T6D)(struct Cyc_Dict_Dict,
							  struct _tuple1 *,
							  long) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
											    struct _tuple1 *,
											    long))_T28;
			    _T27 = _T6D;
			  }_T29 = xdatatypes_so_far;
			  _T2A = *_T29;
			  _T2B = f;
			  _T2C = _T2B->name;
			  _T2D = f;
			  _T2E = _T2D->sc;
			  _T2F = (int)_T2E;
			  _T30 = _T2F != 3;
			  *_T26 = _T27(_T2A,_T2C,_T30);
			  { struct Cyc_List_List * fields = 0;
			    int i = 1;
			    _T31 = f;
			    { struct Cyc_List_List * tqts = _T31->typs;
			      _TL470: if (tqts != 0) { goto _TL46E;
			      }else { goto _TL46F;
			      }
			      _TL46E: { struct _fat_ptr * field_n = Cyc_Absyn_fieldname(i);
				struct Cyc_Absyn_Aggrfield * newf;
				newf = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
				_T32 = newf;
				_T32->name = field_n;
				_T33 = newf;
				_T34 = tqts;
				_T35 = _T34->hd;
				_T36 = (struct _tuple26 *)_T35;
				_T37 = *_T36;
				_T33->tq = _T37.f0;
				_T38 = newf;
				_T39 = tqts;
				_T3A = _T39->hd;
				_T3B = (struct _tuple26 *)_T3A;
				_T3C = *_T3B;
				_T3D = _T3C.f1;
				_T38->type = Cyc_Toc_typ_to_c(_T3D);
				_T3E = newf;
				_T3E->width = 0;
				_T3F = newf;
				_T3F->attributes = 0;
				_T40 = newf;
				_T40->requires_clause = 0;
				{ struct Cyc_List_List * _T6D = _cycalloc(sizeof(struct Cyc_List_List));
				  _T6D->hd = newf;
				  _T6D->tl = fields;
				  _T41 = (struct Cyc_List_List *)_T6D;
				}fields = _T41;
			      }_T42 = tqts;
			      tqts = _T42->tl;
			      i = i + 1;
			      goto _TL470;
			      _TL46F: ;
			    }{ struct Cyc_List_List * _T6D = _cycalloc(sizeof(struct Cyc_List_List));
			      { struct Cyc_Absyn_Aggrfield * _T6E = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
				_T6E->name = Cyc_Toc_tag_sp;
				_T6E->tq = Cyc_Toc_mt_tq;
				_T6E->type = Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,
								  Cyc_Toc_mt_tq);
				_T6E->width = 0;
				_T6E->attributes = 0;
				_T6E->requires_clause = 0;
				_T44 = (struct Cyc_Absyn_Aggrfield *)_T6E;
			      }_T6D->hd = _T44;
			      _T6D->tl = Cyc_List_imp_rev(fields);
			      _T43 = (struct Cyc_List_List *)_T6D;
			    }fields = _T43;
			    { struct _fat_ptr * _T6D = _cycalloc(sizeof(struct _fat_ptr));
			      *_T6D = _tag_fat("",sizeof(char),1U);
			      _T45 = (struct _fat_ptr *)_T6D;
			    }_T46 = fields;
			    { struct Cyc_Absyn_Aggrdecl * strct_decl = Cyc_Toc_make_c_struct_defn(_T45,
												  _T46);
			      _T47 = strct_decl;
			      _T48 = f;
			      _T49 = _T48->name;
			      _T4A = xd;
			      _T4B = _T4A->name;
			      _T47->name = Cyc_Toc_collapse_qvars(_T49,_T4B);
			      { struct Cyc_List_List * _T6D = _cycalloc(sizeof(struct Cyc_List_List));
				{ struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T6E = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
				  _T6E->tag = 5;
				  _T6E->f1 = strct_decl;
				  _T4D = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T6E;
				}_T4E = (void *)_T4D;
				_T6D->hd = Cyc_Absyn_new_decl(_T4E,0U);
				_T6D->tl = Cyc_Toc_result_decls;
				_T4C = (struct Cyc_List_List *)_T6D;
			      }Cyc_Toc_result_decls = _T4C;
			      goto _LL6;
			    }
			  }
			}
		      }_TL469: _T4F = (long *)_T6C;
		      _T50 = *_T4F;
		      if (_T50 != 0) { goto _TL471;
		      }
		      _T51 = f;
		      _T52 = _T51->sc;
		      _T53 = (int)_T52;
		      if (_T53 == 3) { goto _TL473;
		      }
		      _T54 = fn;
		      _T55 = *_T54;
		      { struct Cyc_Absyn_Exp * initopt = Cyc_Absyn_string_exp(_T55,
									      0U);
			_T56 = f;
			_T57 = _T56->name;
			_T58 = tag_typ;
			_T59 = initopt;
			{ struct Cyc_Absyn_Vardecl * tag_decl = Cyc_Absyn_new_vardecl(0U,
										      _T57,
										      _T58,
										      _T59,
										      0);
			  _T5A = tag_decl;
			  _T5B = f;
			  _T5A->sc = _T5B->sc;
			  { struct Cyc_List_List * _T6D = _cycalloc(sizeof(struct Cyc_List_List));
			    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T6E = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
			      _T6E->tag = 0;
			      _T6E->f1 = tag_decl;
			      _T5D = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T6E;
			    }_T5E = (void *)_T5D;
			    _T6D->hd = Cyc_Absyn_new_decl(_T5E,0U);
			    _T6D->tl = Cyc_Toc_result_decls;
			    _T5C = (struct Cyc_List_List *)_T6D;
			  }Cyc_Toc_result_decls = _T5C;
			  _T5F = xdatatypes_so_far;
			  _T61 = Cyc_Dict_insert;
			  { struct Cyc_Dict_Dict (* _T6D)(struct Cyc_Dict_Dict,
							  struct _tuple1 *,
							  long) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
											    struct _tuple1 *,
											    long))_T61;
			    _T60 = _T6D;
			  }_T62 = xdatatypes_so_far;
			  _T63 = *_T62;
			  _T64 = f;
			  _T65 = _T64->name;
			  *_T5F = _T60(_T63,_T65,1);
			}
		      }goto _TL474;
		      _TL473: _TL474: goto _LL6;
		      _TL471: goto _LL6;
		      _LL6: ;
		    }
		  }
		}
	      }_T66 = fs;
	      fs = _T66->tl;
	      goto _TL468;
	      _TL467: ;
	    }return 0;
	  }
	}
      }
    }
  }
}
static void Cyc_Toc_xdatatypedecl_to_c(struct Cyc_Absyn_Datatypedecl * xd) {
  int (* _T0)(struct Cyc_Absyn_Datatypedecl *,int (*)(struct _RegionHandle *,
						      struct _tuple48 *));
  { int (* _T1)(struct Cyc_Absyn_Datatypedecl *,int (*)(struct _RegionHandle *,
							struct _tuple48 *)) = (int (*)(struct Cyc_Absyn_Datatypedecl *,
										       int (*)(struct _RegionHandle *,
											       struct _tuple48 *)))Cyc_Toc_use_toc_state;
    _T0 = _T1;
  }_T0(xd,Cyc_Toc_xdatatypedecl_to_c_body);
}
static void Cyc_Toc_enumdecl_to_c(struct Cyc_Absyn_Enumdecl * ed) {
  struct Cyc_Absyn_Enumdecl * _T0;
  struct Cyc_Absyn_Enumdecl * _T1;
  struct Cyc_Core_Opt * _T2;
  struct Cyc_Absyn_Enumdecl * _T3;
  struct Cyc_Core_Opt * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  _T0 = ed;
  _T0->sc = 2U;
  _T1 = ed;
  _T2 = _T1->fields;
  if (_T2 == 0) { goto _TL475;
  }
  _T3 = ed;
  _T4 = _T3->fields;
  _T5 = _T4->v;
  _T6 = (struct Cyc_List_List *)_T5;
  Cyc_Toc_enumfields_to_c(_T6);
  goto _TL476;
  _TL475: _TL476: ;
}
static void Cyc_Toc_local_decl_to_c(struct Cyc_Toc_Env * nv,struct Cyc_Absyn_Vardecl * vd,
				    struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Vardecl * _T0;
  struct Cyc_Absyn_Vardecl * _T1;
  struct Cyc_Absyn_Vardecl * _T2;
  enum Cyc_Absyn_Scope _T3;
  int _T4;
  long _T5;
  struct Cyc_Absyn_Vardecl * _T6;
  struct Cyc_Absyn_Vardecl * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Absyn_Vardecl * _T9;
  struct Cyc_Absyn_Vardecl * _TA;
  enum Cyc_Absyn_Scope _TB;
  int _TC;
  int * _TD;
  int _TE;
  struct Cyc_Absyn_ArrayInfo _TF;
  struct Cyc_Absyn_ArrayInfo _T10;
  struct Cyc_Absyn_ArrayInfo _T11;
  long _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  int (* _T14)(struct _fat_ptr ap);
  struct _fat_ptr _T15;
  struct Cyc_Absyn_Vardecl * _T16;
  struct _tuple1 * _T17;
  struct Cyc_Absyn_Exp * _T18;
  void * _T19;
  struct Cyc_Absyn_Exp * _T1A;
  struct Cyc_Absyn_Exp * _T1B;
  int _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  void * _T1E;
  struct Cyc_Absyn_Exp * _T1F;
  struct Cyc_Absyn_Exp * _T20;
  void * _T21;
  struct Cyc_Absyn_Exp * _T22;
  struct Cyc_Absyn_Exp * _T23;
  void * _T24;
  struct Cyc_Absyn_Stmt * _T25;
  struct Cyc_Absyn_Exp * _T26;
  struct Cyc_Absyn_Stmt * _T27;
  struct Cyc_Absyn_Stmt * _T28;
  void * _T29;
  struct Cyc_Absyn_Stmt * _T2A;
  _T0 = vd;
  { void * old_typ = _T0->type;
    _T1 = vd;
    _T1->type = Cyc_Toc_typ_to_c(old_typ);
    _T2 = vd;
    _T3 = _T2->sc;
    _T4 = (int)_T3;
    if (_T4 != 5) { goto _TL477;
    }
    _T5 = Cyc_Tcutil_is_fat_pointer_type(old_typ);
    if (! _T5) { goto _TL477;
    }
    _T6 = vd;
    _T6->sc = 2U;
    goto _TL478;
    _TL477: _TL478: Cyc_Toc_stmt_to_c(nv,s);
    _T7 = vd;
    _T8 = _T7->initializer;
    if (_T8 == 0) { goto _TL479;
    }
    _T9 = vd;
    { struct Cyc_Absyn_Exp * init = _T9->initializer;
      _TA = vd;
      _TB = _TA->sc;
      _TC = (int)_TB;
      if (_TC != 0) { goto _TL47B;
      }
      { struct _RegionHandle _T2B = _new_region(0U,"temp");
	struct _RegionHandle * temp = &_T2B;
	_push_region(temp);
	{ struct Cyc_Toc_Env * nv2 = Cyc_Toc_set_toplevel(temp,nv);
	  Cyc_Toc_exp_to_c(nv2,init);
	}_pop_region();
      }goto _TL47C;
      _TL47B: Cyc_Toc_exp_to_c(nv,init);
      _TL47C: ;
    }goto _TL47A;
    _TL479: { void * _T2B = Cyc_Absyn_compress(old_typ);
      void * _T2C;
      struct Cyc_Absyn_Exp * _T2D;
      void * _T2E;
      _TD = (int *)_T2B;
      _TE = *_TD;
      if (_TE != 5) { goto _TL47D;
      }
      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T2F = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T2B;
	_TF = _T2F->f1;
	_T2E = _TF.elt_type;
	_T10 = _T2F->f1;
	_T2D = _T10.num_elts;
	_T11 = _T2F->f1;
	_T2C = _T11.zero_term;
      }{ void * et = _T2E;
	struct Cyc_Absyn_Exp * num_elts_opt = _T2D;
	void * zt = _T2C;
	_T12 = Cyc_Tcutil_force_type2bool(0,zt);
	if (! _T12) { goto _TL47F;
	}
	if (num_elts_opt != 0) { goto _TL481;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T2F;
	  _T2F.tag = 0;
	  _T2F.f1 = _tag_fat("can't initialize zero-terminated array -- size unknown",
			     sizeof(char),55U);
	  _T13 = _T2F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2F = _T13;
	  void * _T30[1];
	  _T30[0] = &_T2F;
	  { int (* _T31)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T14 = _T31;
	  }_T15 = _tag_fat(_T30,sizeof(void *),1);
	  _T14(_T15);
	}goto _TL482;
	_TL481: _TL482: _T16 = vd;
	_T17 = _T16->name;
	_T18 = Cyc_Absyn_var_exp(_T17,0U);
	_T19 = Cyc_Toc_typ_to_c_array(old_typ);
	_T1A = Cyc_Absyn_set_type(_T18,_T19);
	_T1B = num_elts_opt;
	_T1C = - 1;
	_T1D = Cyc_Absyn_signed_int_exp(_T1C,0U);
	_T1E = Cyc_Absyn_sint_type;
	_T1F = Cyc_Absyn_set_type(_T1D,_T1E);
	_T20 = Cyc_Absyn_add_exp(_T1B,_T1F,0U);
	_T21 = Cyc_Absyn_sint_type;
	_T22 = Cyc_Absyn_set_type(_T20,_T21);
	{ struct Cyc_Absyn_Exp * lhs = Cyc_Absyn_subscript_exp(_T1A,_T22,
							       0U);
	  _T23 = Cyc_Absyn_signed_int_exp(0,0U);
	  _T24 = Cyc_Absyn_sint_type;
	  { struct Cyc_Absyn_Exp * rhs = Cyc_Absyn_set_type(_T23,_T24);
	    _T25 = s;
	    _T26 = Cyc_Absyn_assign_exp(lhs,rhs,0U);
	    _T27 = Cyc_Absyn_exp_stmt(_T26,0U);
	    _T28 = s;
	    _T29 = _T28->r;
	    _T2A = Cyc_Absyn_new_stmt(_T29,0U);
	    _T25->r = Cyc_Toc_seq_stmt_r(_T27,_T2A);
	  }
	}goto _TL480;
	_TL47F: _TL480: goto _LL0;
      }_TL47D: goto _LL0;
      _LL0: ;
    }_TL47A: ;
  }
}
static void * Cyc_Toc_rewrite_decision(void * d,struct Cyc_Absyn_Stmt * success) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  struct Cyc_Tcpat_Rhs * _T5;
  void * _T6;
  void * _T7;
  void * _T8;
  struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _T9;
  void * * _TA;
  void * * _TB;
  void * * _TC;
  void * _TD;
  struct Cyc_Absyn_Stmt * _TE;
  struct Cyc_List_List * _TF;
  void * _T10;
  void * * _T11;
  void * * _T12;
  void * * _T13;
  void * _T14;
  struct Cyc_Absyn_Stmt * _T15;
  struct Cyc_List_List * _T16;
  void * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_List_List * _T19;
  void * _T1A;
  _T0 = d;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = d;
    return _T3;
  case 1: 
    _T4 = d;
    { struct Cyc_Tcpat_Success_Tcpat_Decision_struct * _T1B = (struct Cyc_Tcpat_Success_Tcpat_Decision_struct *)_T4;
      _T1A = _T1B->f1;
    }{ struct Cyc_Tcpat_Rhs * rhs = _T1A;
      _T5 = rhs;
      _T5->rhs = success;
      _T6 = d;
      return _T6;
    }
  default: 
    _T7 = d;
    { struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _T1B = (struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct *)_T7;
      _T19 = _T1B->f1;
      _T18 = _T1B->f2;
      _T8 = d;
      _T9 = (struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct *)_T8;
      _TA = &_T9->f3;
      _T1A = (void * *)_TA;
    }{ struct Cyc_List_List * path = _T19;
      struct Cyc_List_List * sws = _T18;
      void * * d2 = (void * *)_T1A;
      _TB = d2;
      _TC = d2;
      _TD = *_TC;
      _TE = success;
      *_TB = Cyc_Toc_rewrite_decision(_TD,_TE);
      _TL487: if (sws != 0) { goto _TL485;
      }else { goto _TL486;
      }
      _TL485: _TF = sws;
      _T10 = _TF->hd;
      { struct _tuple38 * _T1B = (struct _tuple38 *)_T10;
	void * _T1C;
	{ struct _tuple38 _T1D = *_T1B;
	  _T11 = &_T1B->f1;
	  _T1C = (void * *)_T11;
	}{ void * * d2 = (void * *)_T1C;
	  _T12 = d2;
	  _T13 = d2;
	  _T14 = *_T13;
	  _T15 = success;
	  *_T12 = Cyc_Toc_rewrite_decision(_T14,_T15);
	}
      }_T16 = sws;
      sws = _T16->tl;
      goto _TL487;
      _TL486: _T17 = d;
      return _T17;
    }
  }
  ;
}
static struct Cyc_Absyn_Stmt * Cyc_Toc_letdecl_to_c(struct Cyc_Toc_Env * nv,
						    struct Cyc_Absyn_Pat * p,
						    void * dopt,void * t,
						    struct Cyc_Absyn_Exp * e,
						    struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Exp * _T0;
  void * _T1;
  struct Cyc_Absyn_Exp * _T2;
  int * _T3;
  int _T4;
  void * _T5;
  struct _tuple1 * _T6;
  void * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T9;
  void * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_Absyn_Vardecl * _TC;
  void * _TD;
  struct Cyc_Absyn_Switch_clause * _TE;
  struct Cyc_Absyn_Switch_clause * _TF;
  struct Cyc_Absyn_Switch_clause * _T10;
  struct Cyc_Absyn_Switch_clause * _T11;
  struct Cyc_Absyn_Switch_clause * _T12;
  struct Cyc_List_List * (* _T13)(struct _RegionHandle *,struct _tuple41 * (*)(struct _RegionHandle *,
									       struct Cyc_Absyn_Switch_clause *),
				  struct _RegionHandle *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T14)(struct _RegionHandle *,void * (*)(void *,
								    void *),
				  void *,struct Cyc_List_List *);
  struct _RegionHandle * _T15;
  struct _RegionHandle * _T16;
  struct Cyc_List_List * _T17;
  struct _RegionHandle * _T18;
  struct _fat_ptr _T19;
  struct _RegionHandle * _T1A;
  struct Cyc_Toc_Env * _T1B;
  struct Cyc_List_List * * _T1C;
  struct Cyc_List_List * * _T1D;
  void * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_Absyn_Exp * _T20;
  struct Cyc_Warn_String_Warn_Warg_struct _T21;
  int (* _T22)(struct _fat_ptr ap);
  struct _fat_ptr _T23;
  struct Cyc_List_List * _T24;
  void * _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_List_List * _T27;
  void * _T28;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T29;
  void * _T2A;
  struct Cyc_Absyn_Decl * _T2B;
  struct Cyc_Absyn_Stmt * _T2C;
  struct Cyc_List_List * _T2D;
  struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T2E;
  void * _T2F;
  struct Cyc_Absyn_Decl * _T30;
  struct Cyc_Absyn_Stmt * _T31;
  struct _RegionHandle _T32 = _new_region(0U,"rgn");
  struct _RegionHandle * rgn = &_T32;
  _push_region(rgn);
  { struct Cyc_Toc_Env * _T33 = Cyc_Toc_share_env(rgn,nv);
    struct Cyc_Toc_Env * nv = _T33;
    _T0 = e;
    _T1 = _T0->topt;
    { void * t = _check_null(_T1);
      Cyc_Toc_exp_to_c(nv,e);
      { struct Cyc_Absyn_Vardecl * v = 0;
	struct Cyc_Absyn_Exp * vexp = e;
	_T2 = e;
	{ void * _T34 = _T2->r;
	  void * _T35;
	  _T3 = (int *)_T34;
	  _T4 = *_T3;
	  if (_T4 != 1) { goto _TL488;
	  }
	  { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T36 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T34;
	    _T5 = _T36->f1;
	    _T35 = (void *)_T5;
	  }{ void * b = _T35;
	    goto _LL0;
	  }_TL488: { struct _tuple1 * x = Cyc_Toc_temp_var();
	    _T6 = x;
	    _T7 = Cyc_Toc_typ_to_c(t);
	    _T8 = e;
	    v = Cyc_Absyn_new_vardecl(0U,_T6,_T7,_T8,0);
	    { struct Cyc_Absyn_Local_b_Absyn_Binding_struct * _T36 = _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));
	      _T36->tag = 4;
	      _T36->f1 = v;
	      _T9 = (struct Cyc_Absyn_Local_b_Absyn_Binding_struct *)_T36;
	    }_TA = (void *)_T9;
	    _TB = Cyc_Absyn_varb_exp(_TA,0U);
	    _TC = v;
	    _TD = _TC->type;
	    vexp = Cyc_Absyn_set_type(_TB,_TD);
	    goto _LL0;
	  }_LL0: ;
	}{ struct Cyc_Absyn_Exp * path = Cyc_Toc_deep_copy(vexp);
	  struct _fat_ptr * end_l = Cyc_Toc_fresh_label();
	  struct Cyc_Absyn_Stmt * succ_stmt = s;
	  if (dopt == 0) { goto _TL48A;
	  }
	  dopt = Cyc_Toc_rewrite_decision(dopt,succ_stmt);
	  goto _TL48B;
	  _TL48A: _TL48B: { struct Cyc_Absyn_Switch_clause * c1;
	    c1 = _cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));
	    _TE = c1;
	    _TE->pattern = p;
	    _TF = c1;
	    _TF->pat_vars = 0;
	    _T10 = c1;
	    _T10->where_clause = 0;
	    _T11 = c1;
	    _T11->body = succ_stmt;
	    _T12 = c1;
	    _T12->loc = 0U;
	    _T14 = Cyc_List_rmap_c;
	    { struct Cyc_List_List * (* _T34)(struct _RegionHandle *,struct _tuple41 * (*)(struct _RegionHandle *,
											   struct Cyc_Absyn_Switch_clause *),
					      struct _RegionHandle *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _RegionHandle *,
															   struct _tuple41 * (*)(struct _RegionHandle *,
																		 struct Cyc_Absyn_Switch_clause *),
															   struct _RegionHandle *,
															   struct Cyc_List_List *))_T14;
	      _T13 = _T34;
	    }_T15 = rgn;
	    _T16 = rgn;
	    { struct Cyc_Absyn_Switch_clause * _T34[1];
	      _T34[0] = c1;
	      _T18 = rgn;
	      _T19 = _tag_fat(_T34,sizeof(struct Cyc_Absyn_Switch_clause *),
			      1);
	      _T17 = Cyc_List_rlist(_T18,_T19);
	    }{ struct Cyc_List_List * lscs = _T13(_T15,Cyc_Toc_gen_labels,
						  _T16,_T17);
	      struct Cyc_List_List * mydecls = 0;
	      struct Cyc_List_List * mybodies = 0;
	      _T1A = rgn;
	      _T1B = nv;
	      _T1C = &mydecls;
	      _T1D = &mybodies;
	      _T1E = dopt;
	      _T1F = lscs;
	      _T20 = vexp;
	      { struct Cyc_Absyn_Stmt * test_tree = Cyc_Toc_compile_decision_tree(_T1A,
										  _T1B,
										  _T1C,
										  _T1D,
										  _T1E,
										  _T1F,
										  _T20);
		_TL48F: if (1) { goto _TL48D;
		}else { goto _TL48E;
		}
		_TL48D: if (mybodies != 0) { goto _TL490;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T34;
		  _T34.tag = 0;
		  _T34.f1 = _tag_fat("letdecl_to_c: couldn't find env!",sizeof(char),
				     33U);
		  _T21 = _T34;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T34 = _T21;
		  void * _T35[1];
		  _T35[0] = &_T34;
		  { int (* _T36)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
		    _T22 = _T36;
		  }_T23 = _tag_fat(_T35,sizeof(void *),1);
		  _T22(_T23);
		}goto _TL491;
		_TL490: _TL491: _T24 = mybodies;
		_T25 = _T24->hd;
		{ struct _tuple46 * _T34 = (struct _tuple46 *)_T25;
		  struct Cyc_Absyn_Stmt * _T35;
		  struct Cyc_Toc_Env * _T36;
		  { struct _tuple46 _T37 = *_T34;
		    _T36 = _T37.f0;
		    _T35 = _T37.f2;
		  }{ struct Cyc_Toc_Env * env = _T36;
		    struct Cyc_Absyn_Stmt * st = _T35;
		    if (st != succ_stmt) { goto _TL492;
		    }
		    Cyc_Toc_stmt_to_c(env,s);
		    goto _TL48E;
		    _TL492: ;
		  }
		}_T26 = mybodies;
		mybodies = _T26->tl;
		goto _TL48F;
		_TL48E: { struct Cyc_Absyn_Stmt * res = test_tree;
		  _TL497: if (mydecls != 0) { goto _TL495;
		  }else { goto _TL496;
		  }
		  _TL495: _T27 = mydecls;
		  _T28 = _T27->hd;
		  { struct _tuple44 * _T34 = (struct _tuple44 *)_T28;
		    struct Cyc_Absyn_Vardecl * _T35;
		    { struct _tuple44 _T36 = *_T34;
		      _T35 = _T36.f1;
		    }{ struct Cyc_Absyn_Vardecl * vd = _T35;
		      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T36 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
			_T36->tag = 0;
			_T36->f1 = vd;
			_T29 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T36;
		      }_T2A = (void *)_T29;
		      _T2B = Cyc_Absyn_new_decl(_T2A,0U);
		      _T2C = res;
		      res = Cyc_Absyn_decl_stmt(_T2B,_T2C,0U);
		    }
		  }_T2D = _check_null(mydecls);
		  mydecls = _T2D->tl;
		  goto _TL497;
		  _TL496: if (v == 0) { goto _TL498;
		  }
		  { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T34 = _cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));
		    _T34->tag = 0;
		    _T34->f1 = v;
		    _T2E = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T34;
		  }_T2F = (void *)_T2E;
		  _T30 = Cyc_Absyn_new_decl(_T2F,0U);
		  _T31 = res;
		  res = Cyc_Absyn_decl_stmt(_T30,_T31,0U);
		  goto _TL499;
		  _TL498: _TL499: { struct Cyc_Absyn_Stmt * _T34 = res;
		    _npop_handler(0);
		    return _T34;
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }_pop_region();
}
static long Cyc_Toc_types_to_c_f1(long ignore,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct _tuple9 * _T3;
  struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct * _T4;
  struct _tuple9 * _T5;
  void * * _T6;
  struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T7;
  void * * _T8;
  struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T9;
  void * * _TA;
  struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _TB;
  void * * _TC;
  void * * _TD;
  void * * _TE;
  void * _TF;
  struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T10;
  struct Cyc_Absyn_MallocInfo * _T11;
  struct Cyc_Absyn_MallocInfo * _T12;
  void * * _T13;
  struct Cyc_Absyn_MallocInfo * _T14;
  void * * _T15;
  struct Cyc_Absyn_MallocInfo * _T16;
  void * * _T17;
  void * _T18;
  _T0 = e;
  { void * _T19 = _T0->r;
    void * _T1A;
    _T1 = (int *)_T19;
    _T2 = *_T1;
    switch (_T2) {
    case 24: 
      { struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct * _T1B = (struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct *)_T19;
	_T3 = _T1B->f1;
	{ struct _tuple9 _T1C = *_T3;
	  _T4 = (struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct *)_T19;
	  _T5 = _T4->f1;
	  _T6 = &_T5->f2;
	  _T1A = (void * *)_T6;
	}
      }{ void * * t = _T1A;
	_T1A = t;
	goto _LL4;
      }
    case 19: 
      { struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T1B = (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct *)_T19;
	_T7 = (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct *)_T19;
	_T8 = &_T7->f1;
	_T1A = (void * *)_T8;
      }_LL4: { void * * t = _T1A;
	_T1A = t;
	goto _LL6;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T1B = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T19;
	_T9 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T19;
	_TA = &_T9->f1;
	_T1A = (void * *)_TA;
      }_LL6: { void * * t = _T1A;
	_T1A = t;
	goto _LL8;
      }
    case 17: 
      { struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T1B = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T19;
	_TB = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T19;
	_TC = &_TB->f1;
	_T1A = (void * *)_TC;
      }_LL8: { void * * t = _T1A;
	_TD = t;
	_TE = t;
	_TF = *_TE;
	*_TD = Cyc_Toc_typ_to_c(_TF);
	goto _LL0;
      }
    case 33: 
      { struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T1B = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T19;
	_T10 = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T19;
	_T11 = &_T10->f1;
	_T1A = (struct Cyc_Absyn_MallocInfo *)_T11;
      }{ struct Cyc_Absyn_MallocInfo * m = (struct Cyc_Absyn_MallocInfo *)_T1A;
	_T12 = m;
	_T13 = _T12->elt_type;
	if (_T13 == 0) { goto _TL49B;
	}
	_T14 = m;
	{ void * * _T1B = _cycalloc(sizeof(void *));
	  _T16 = m;
	  _T17 = _T16->elt_type;
	  _T18 = *_T17;
	  *_T1B = Cyc_Toc_typ_to_c(_T18);
	  _T15 = (void * *)_T1B;
	}_T14->elt_type = _T15;
	goto _TL49C;
	_TL49B: _TL49C: goto _LL0;
      }
    default: 
      goto _LL0;
    }
    _LL0: ;
  }return 1;
}
static long Cyc_Toc_types_to_c_f2(long ignore,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Decl * _T3;
  int * _T4;
  unsigned int _T5;
  struct Cyc_Absyn_Vardecl * _T6;
  struct Cyc_Absyn_Vardecl * _T7;
  void * _T8;
  struct Cyc_Absyn_Fndecl * _T9;
  struct Cyc_Absyn_Fndecl * _TA;
  struct Cyc_Absyn_FnInfo _TB;
  void * _TC;
  struct Cyc_Absyn_Fndecl * _TD;
  struct Cyc_Absyn_FnInfo _TE;
  struct Cyc_List_List * _TF;
  void * _T10;
  struct _tuple9 * _T11;
  struct Cyc_List_List * _T12;
  void * _T13;
  struct _tuple9 * _T14;
  struct _tuple9 _T15;
  void * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_Absyn_Enumdecl * _T18;
  struct Cyc_Core_Opt * _T19;
  struct Cyc_Absyn_Enumdecl * _T1A;
  struct Cyc_Core_Opt * _T1B;
  void * _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct Cyc_Absyn_Enumfield * _T1F;
  struct Cyc_Absyn_Exp * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct Cyc_Absyn_Enumfield * _T23;
  struct Cyc_Absyn_Exp * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_Absyn_Typedefdecl * _T26;
  struct Cyc_Absyn_Typedefdecl * _T27;
  void * _T28;
  void * _T29;
  struct Cyc_Absyn_Stmt * _T2A;
  struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct * _T2B;
  _T0 = s;
  { void * _T2C = _T0->r;
    struct Cyc_Absyn_Decl * _T2D;
    _T1 = (int *)_T2C;
    _T2 = *_T1;
    switch (_T2) {
    case 12: 
      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T2E = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T2C;
	_T2D = _T2E->f1;
      }{ struct Cyc_Absyn_Decl * d = _T2D;
	_T3 = d;
	{ void * _T2E = _T3->r;
	  struct Cyc_Absyn_Typedefdecl * _T2F;
	  struct Cyc_Absyn_Enumdecl * _T30;
	  struct Cyc_Absyn_Aggrdecl * _T31;
	  struct Cyc_Absyn_Fndecl * _T32;
	  struct Cyc_Absyn_Vardecl * _T33;
	  _T4 = (int *)_T2E;
	  _T5 = *_T4;
	  switch (_T5) {
	  case 0: 
	    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T34 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T2E;
	      _T33 = _T34->f1;
	    }{ struct Cyc_Absyn_Vardecl * vd = _T33;
	      _T6 = vd;
	      _T7 = vd;
	      _T8 = _T7->type;
	      _T6->type = Cyc_Toc_typ_to_c(_T8);
	      goto _LL7;
	    }
	  case 1: 
	    { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T34 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T2E;
	      _T32 = _T34->f1;
	    }{ struct Cyc_Absyn_Fndecl * fd = _T32;
	      _T9 = fd;
	      _TA = fd;
	      _TB = _TA->i;
	      _TC = _TB.ret_type;
	      (_T9->i).ret_type = Cyc_Toc_typ_to_c(_TC);
	      _TD = fd;
	      _TE = _TD->i;
	      { struct Cyc_List_List * args = _TE.args;
		_TL4A2: if (args != 0) { goto _TL4A0;
		}else { goto _TL4A1;
		}
		_TL4A0: _TF = args;
		_T10 = _TF->hd;
		_T11 = (struct _tuple9 *)_T10;
		_T12 = args;
		_T13 = _T12->hd;
		_T14 = (struct _tuple9 *)_T13;
		_T15 = *_T14;
		_T16 = _T15.f2;
		(*_T11).f2 = Cyc_Toc_typ_to_c(_T16);
		_T17 = args;
		args = _T17->tl;
		goto _TL4A2;
		_TL4A1: ;
	      }goto _LL7;
	    }
	  case 5: 
	    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T34 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T2E;
	      _T31 = _T34->f1;
	    }{ struct Cyc_Absyn_Aggrdecl * ad = _T31;
	      Cyc_Toc_aggrdecl_to_c(ad);
	      goto _LL7;
	    }
	  case 7: 
	    { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T34 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T2E;
	      _T30 = _T34->f1;
	    }{ struct Cyc_Absyn_Enumdecl * ed = _T30;
	      _T18 = ed;
	      _T19 = _T18->fields;
	      if (_T19 == 0) { goto _TL4A3;
	      }
	      _T1A = ed;
	      _T1B = _T1A->fields;
	      _T1C = _T1B->v;
	      { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T1C;
		_TL4A8: if (fs != 0) { goto _TL4A6;
		}else { goto _TL4A7;
		}
		_TL4A6: _T1D = fs;
		_T1E = _T1D->hd;
		_T1F = (struct Cyc_Absyn_Enumfield *)_T1E;
		_T20 = _T1F->tag;
		if (_T20 == 0) { goto _TL4A9;
		}
		_T21 = fs;
		_T22 = _T21->hd;
		_T23 = (struct Cyc_Absyn_Enumfield *)_T22;
		_T24 = _T23->tag;
		Cyc_Toc_exptypes_to_c(_T24);
		goto _TL4AA;
		_TL4A9: _TL4AA: _T25 = fs;
		fs = _T25->tl;
		goto _TL4A8;
		_TL4A7: ;
	      }goto _TL4A4;
	      _TL4A3: _TL4A4: goto _LL7;
	    }
	  case 8: 
	    { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T34 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T2E;
	      _T2F = _T34->f1;
	    }{ struct Cyc_Absyn_Typedefdecl * td = _T2F;
	      _T26 = td;
	      _T27 = td;
	      _T28 = _T27->defn;
	      _T29 = _check_null(_T28);
	      _T26->defn = Cyc_Toc_typ_to_c(_T29);
	      goto _LL7;
	    }
	  default: 
	    goto _LL7;
	  }
	  _LL7: ;
	}goto _LL0;
      }
    case 11: 
      _T2A = s;
      { struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct * _T2E = _cycalloc(sizeof(struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct));
	_T2E->tag = 0;
	_T2B = (struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct *)_T2E;
      }_T2A->r = (void *)_T2B;
      return 0;
    default: 
      goto _LL0;
    }
    _LL0: ;
  }return 1;
}
static void Cyc_Toc_exptypes_to_c(struct Cyc_Absyn_Exp * e) {
  void (* _T0)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
	       long,struct Cyc_Absyn_Exp *);
  void (* _T1)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Exp *);
  struct Cyc_Absyn_Exp * _T2;
  _T1 = Cyc_Absyn_visit_exp;
  { void (* _T3)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
		 long,struct Cyc_Absyn_Exp *) = (void (*)(long (*)(long,struct Cyc_Absyn_Exp *),
							  long (*)(long,struct Cyc_Absyn_Stmt *),
							  long,struct Cyc_Absyn_Exp *))_T1;
    _T0 = _T3;
  }_T2 = e;
  _T0(Cyc_Toc_types_to_c_f1,Cyc_Toc_types_to_c_f2,1,_T2);
}
static void Cyc_Toc_stmttypes_to_c(struct Cyc_Absyn_Stmt * s) {
  void (* _T0)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
	       long,struct Cyc_Absyn_Stmt *);
  void (* _T1)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Stmt *);
  struct Cyc_Absyn_Stmt * _T2;
  _T1 = Cyc_Absyn_visit_stmt;
  { void (* _T3)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
		 long,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(long,
								    struct Cyc_Absyn_Exp *),
							   long (*)(long,
								    struct Cyc_Absyn_Stmt *),
							   long,struct Cyc_Absyn_Stmt *))_T1;
    _T0 = _T3;
  }_T2 = s;
  _T0(Cyc_Toc_types_to_c_f1,Cyc_Toc_types_to_c_f2,1,_T2);
}
static void Cyc_Toc_decls_to_c(struct Cyc_Toc_Env * nv,struct Cyc_List_List * ds,
			       long cinclude) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Decl * _T2;
  int * _T3;
  unsigned int _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  struct Cyc_Absyn_Vardecl * _T6;
  enum Cyc_Absyn_Scope _T7;
  int _T8;
  struct _tuple1 * _T9;
  struct _tuple1 * _TA;
  struct _tuple1 _TB;
  struct Cyc_Absyn_Vardecl * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct Cyc_Absyn_Vardecl * _TE;
  enum Cyc_Absyn_Scope _TF;
  int _T10;
  struct Cyc_Absyn_Vardecl * _T11;
  long _T12;
  struct Cyc_Absyn_Vardecl * _T13;
  struct Cyc_Absyn_Exp * _T14;
  struct Cyc_Toc_Env * _T15;
  struct Cyc_Absyn_Vardecl * _T16;
  struct Cyc_Absyn_Exp * _T17;
  struct Cyc_Absyn_Vardecl * _T18;
  struct Cyc_Absyn_Vardecl * _T19;
  struct Cyc_Absyn_Vardecl * _T1A;
  enum Cyc_Absyn_Scope _T1B;
  struct Cyc_Absyn_Vardecl * _T1C;
  struct Cyc_Absyn_Vardecl * _T1D;
  void * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_Absyn_Fndecl * _T20;
  enum Cyc_Absyn_Scope _T21;
  int _T22;
  struct Cyc_Absyn_Fndecl * _T23;
  struct _tuple1 * _T24;
  struct Cyc_Absyn_Fndecl * _T25;
  struct _tuple1 * _T26;
  struct _tuple1 _T27;
  struct Cyc_Absyn_Fndecl * _T28;
  struct Cyc_List_List * _T29;
  struct Cyc_Warn_String_Warn_Warg_struct _T2A;
  int (* _T2B)(struct _fat_ptr ap);
  struct _fat_ptr _T2C;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D;
  int (* _T2E)(struct _fat_ptr ap);
  struct _fat_ptr _T2F;
  struct Cyc_Absyn_Datatypedecl * _T30;
  long _T31;
  struct Cyc_List_List * _T32;
  struct Cyc_Absyn_Typedefdecl * _T33;
  struct Cyc_Absyn_Typedefdecl * _T34;
  void * _T35;
  struct Cyc_Absyn_Typedefdecl * _T36;
  struct Cyc_Absyn_Typedefdecl * _T37;
  void * _T38;
  struct Cyc_Absyn_Typedefdecl * _T39;
  int * _T3A;
  int _T3B;
  struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T3C;
  struct Cyc_Absyn_TypeDecl * _T3D;
  struct Cyc_Absyn_TypeDecl * _T3E;
  void * _T3F;
  int * _T40;
  int _T41;
  struct Cyc_Absyn_TypeDecl * _T42;
  void * _T43;
  struct Cyc_Absyn_Decl * _T44;
  struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T45;
  struct Cyc_Absyn_Decl * _T46;
  struct Cyc_List_List * _T47;
  struct Cyc_Absyn_Typedefdecl * _T48;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T49;
  struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct * _T4A;
  struct Cyc_Absyn_Enumdecl * _T4B;
  struct Cyc_Absyn_Typedefdecl * _T4C;
  void * _T4D;
  struct Cyc_Absyn_Typedefdecl * _T4E;
  struct Cyc_Core_Opt * _T4F;
  struct Cyc_Core_Opt * _T50;
  void * _T51;
  struct Cyc_Absyn_Kind * _T52;
  enum Cyc_Absyn_KindQual _T53;
  int _T54;
  long _T55;
  struct Cyc_List_List * _T56;
  struct Cyc_List_List * _T57;
  _TL4AE: if (ds != 0) { goto _TL4AC;
  }else { goto _TL4AD;
  }
  _TL4AC: Cyc_Toc_fresh_label_counter = 0;
  _T0 = ds;
  _T1 = _T0->hd;
  { struct Cyc_Absyn_Decl * d = (struct Cyc_Absyn_Decl *)_T1;
    _T2 = d;
    { void * _T58 = _T2->r;
      struct Cyc_List_List * _T59;
      struct Cyc_Absyn_Typedefdecl * _T5A;
      struct Cyc_Absyn_Enumdecl * _T5B;
      struct Cyc_Absyn_Datatypedecl * _T5C;
      struct Cyc_Absyn_Aggrdecl * _T5D;
      struct Cyc_Absyn_Fndecl * _T5E;
      struct Cyc_Absyn_Vardecl * _T5F;
      _T3 = (int *)_T58;
      _T4 = *_T3;
      switch (_T4) {
      case 0: 
	{ struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T58;
	  _T5F = _T60->f1;
	}{ struct Cyc_Absyn_Vardecl * vd = _T5F;
	  _T5 = vd;
	  { struct _tuple1 * c_name = _T5->name;
	    _T6 = vd;
	    _T7 = _T6->sc;
	    _T8 = (int)_T7;
	    if (_T8 != 4) { goto _TL4B0;
	    }
	    { struct _tuple1 * _T60 = _cycalloc(sizeof(struct _tuple1));
	      _T60->f0 = Cyc_Absyn_Abs_n(0,1);
	      _TA = c_name;
	      _TB = *_TA;
	      _T60->f1 = _TB.f1;
	      _T9 = (struct _tuple1 *)_T60;
	    }c_name = _T9;
	    goto _TL4B1;
	    _TL4B0: _TL4B1: _TC = vd;
	    _TD = _TC->initializer;
	    if (_TD == 0) { goto _TL4B2;
	    }
	    _TE = vd;
	    _TF = _TE->sc;
	    _T10 = (int)_TF;
	    if (_T10 != 4) { goto _TL4B4;
	    }
	    _T11 = vd;
	    _T11->sc = 2U;
	    goto _TL4B5;
	    _TL4B4: _TL4B5: _T12 = cinclude;
	    if (! _T12) { goto _TL4B6;
	    }
	    _T13 = vd;
	    _T14 = _T13->initializer;
	    Cyc_Toc_exptypes_to_c(_T14);
	    goto _TL4B7;
	    _TL4B6: _T15 = nv;
	    _T16 = vd;
	    _T17 = _T16->initializer;
	    Cyc_Toc_exp_to_c(_T15,_T17);
	    _TL4B7: goto _TL4B3;
	    _TL4B2: _TL4B3: _T18 = vd;
	    _T18->name = c_name;
	    _T19 = vd;
	    _T1A = vd;
	    _T1B = _T1A->sc;
	    _T19->sc = Cyc_Toc_scope_to_c(_T1B);
	    _T1C = vd;
	    _T1D = vd;
	    _T1E = _T1D->type;
	    _T1C->type = Cyc_Toc_typ_to_c(_T1E);
	    { struct Cyc_List_List * _T60 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T60->hd = d;
	      _T60->tl = Cyc_Toc_result_decls;
	      _T1F = (struct Cyc_List_List *)_T60;
	    }Cyc_Toc_result_decls = _T1F;
	    goto _LL0;
	  }
	}
      case 1: 
	{ struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T58;
	  _T5E = _T60->f1;
	}{ struct Cyc_Absyn_Fndecl * fd = _T5E;
	  _T20 = fd;
	  _T21 = _T20->sc;
	  _T22 = (int)_T21;
	  if (_T22 != 4) { goto _TL4B8;
	  }
	  _T23 = fd;
	  { struct _tuple1 * _T60 = _cycalloc(sizeof(struct _tuple1));
	    _T60->f0 = Cyc_Absyn_Abs_n(0,1);
	    _T25 = fd;
	    _T26 = _T25->name;
	    _T27 = *_T26;
	    _T60->f1 = _T27.f1;
	    _T24 = (struct _tuple1 *)_T60;
	  }_T23->name = _T24;
	  _T28 = fd;
	  _T28->sc = 2U;
	  goto _TL4B9;
	  _TL4B8: _TL4B9: Cyc_Toc_fndecl_to_c(nv,fd,cinclude);
	  { struct Cyc_List_List * _T60 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T60->hd = d;
	    _T60->tl = Cyc_Toc_result_decls;
	    _T29 = (struct Cyc_List_List *)_T60;
	  }Cyc_Toc_result_decls = _T29;
	  goto _LL0;
	}
      case 2: 
	goto _LL8;
      case 3: 
	_LL8: { struct Cyc_Warn_String_Warn_Warg_struct _T60;
	  _T60.tag = 0;
	  _T60.f1 = _tag_fat("letdecl at toplevel",sizeof(char),20U);
	  _T2A = _T60;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T60 = _T2A;
	  void * _T61[1];
	  _T61[0] = &_T60;
	  { int (* _T62)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T2B = _T62;
	  }_T2C = _tag_fat(_T61,sizeof(void *),1);
	  _T2B(_T2C);
	}
      case 4: 
	{ struct Cyc_Warn_String_Warn_Warg_struct _T60;
	  _T60.tag = 0;
	  _T60.f1 = _tag_fat("region decl at toplevel",sizeof(char),24U);
	  _T2D = _T60;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T60 = _T2D;
	  void * _T61[1];
	  _T61[0] = &_T60;
	  { int (* _T62)(struct _fat_ptr ap) = (int (*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;
	    _T2E = _T62;
	  }_T2F = _tag_fat(_T61,sizeof(void *),1);
	  _T2E(_T2F);
	}
      case 5: 
	{ struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T58;
	  _T5D = _T60->f1;
	}{ struct Cyc_Absyn_Aggrdecl * sd = _T5D;
	  Cyc_Toc_aggrdecl_to_c(sd);
	  goto _LL0;
	}
      case 6: 
	{ struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct *)_T58;
	  _T5C = _T60->f1;
	}{ struct Cyc_Absyn_Datatypedecl * tud = _T5C;
	  _T30 = tud;
	  _T31 = _T30->is_extensible;
	  if (! _T31) { goto _TL4BA;
	  }
	  Cyc_Toc_xdatatypedecl_to_c(tud);
	  goto _TL4BB;
	  _TL4BA: Cyc_Toc_datatypedecl_to_c(tud);
	  _TL4BB: goto _LL0;
	}
      case 7: 
	{ struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T58;
	  _T5B = _T60->f1;
	}{ struct Cyc_Absyn_Enumdecl * ed = _T5B;
	  Cyc_Toc_enumdecl_to_c(ed);
	  { struct Cyc_List_List * _T60 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T60->hd = d;
	    _T60->tl = Cyc_Toc_result_decls;
	    _T32 = (struct Cyc_List_List *)_T60;
	  }Cyc_Toc_result_decls = _T32;
	  goto _LL0;
	}
      case 8: 
	{ struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T58;
	  _T5A = _T60->f1;
	}{ struct Cyc_Absyn_Typedefdecl * td = _T5A;
	  _T33 = td;
	  _T33->tvs = 0;
	  _T34 = td;
	  _T35 = _T34->defn;
	  if (_T35 == 0) { goto _TL4BC;
	  }
	  _T36 = td;
	  _T37 = td;
	  _T38 = _T37->defn;
	  _T36->defn = Cyc_Toc_typ_to_c(_T38);
	  _T39 = td;
	  { void * _T60 = _T39->defn;
	    unsigned int _T61;
	    struct Cyc_Absyn_Enumdecl * _T62;
	    if (_T60 == 0) { goto _TL4BE;
	    }
	    _T3A = (int *)_T60;
	    _T3B = *_T3A;
	    if (_T3B != 10) { goto _TL4C0;
	    }
	    _T3C = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T60;
	    _T3D = _T3C->f1;
	    _T3E = (struct Cyc_Absyn_TypeDecl *)_T3D;
	    _T3F = _T3E->r;
	    _T40 = (int *)_T3F;
	    _T41 = *_T40;
	    if (_T41 != 1) { goto _TL4C2;
	    }
	    { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T63 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T60;
	      _T42 = _T63->f1;
	      { struct Cyc_Absyn_TypeDecl _T64 = *_T42;
		_T43 = _T64.r;
		{ struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct * _T65 = (struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct *)_T43;
		  _T62 = _T65->f1;
		}_T61 = _T64.loc;
	      }
	    }{ struct Cyc_Absyn_Enumdecl * ed2 = _T62;
	      unsigned int loc = _T61;
	      struct Cyc_Absyn_Decl * ed;
	      ed = _cycalloc(sizeof(struct Cyc_Absyn_Decl));
	      _T44 = ed;
	      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T63 = _cycalloc(sizeof(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct));
		_T63->tag = 7;
		_T63->f1 = ed2;
		_T45 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T63;
	      }_T44->r = (void *)_T45;
	      _T46 = ed;
	      _T46->loc = loc;
	      { struct Cyc_List_List * _T63 = _cycalloc(sizeof(struct Cyc_List_List));
		_T63->hd = ed;
		_T63->tl = Cyc_Toc_result_decls;
		_T47 = (struct Cyc_List_List *)_T63;
	      }Cyc_Toc_result_decls = _T47;
	      _T48 = td;
	      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T63 = _cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));
		_T63->tag = 0;
		{ struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct * _T64 = _cycalloc(sizeof(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct));
		  _T64->tag = 19;
		  _T4B = ed2;
		  _T64->f1 = _T4B->name;
		  _T64->f2 = ed2;
		  _T4A = (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct *)_T64;
		}_T63->f1 = (void *)_T4A;
		_T63->f2 = 0;
		_T49 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T63;
	      }_T48->defn = (void *)_T49;
	      goto _LL23;
	    }_TL4C2: goto _LL26;
	    _TL4C0: goto _LL26;
	    _TL4BE: _LL26: goto _LL23;
	    _LL23: ;
	  }goto _TL4BD;
	  _TL4BC: _T4C = td;
	  _T4E = td;
	  _T4F = _T4E->kind;
	  _T50 = _check_null(_T4F);
	  _T51 = _T50->v;
	  _T52 = (struct Cyc_Absyn_Kind *)_T51;
	  _T53 = _T52->kind;
	  _T54 = (int)_T53;
	  if (_T54 != 2) { goto _TL4C4;
	  }
	  _T4D = Cyc_Toc_void_star_type();
	  goto _TL4C5;
	  _TL4C4: _T4D = Cyc_Absyn_void_type;
	  _TL4C5: _T4C->defn = _T4D;
	  _TL4BD: _T55 = Cyc_Flags_noexpand_r;
	  if (! _T55) { goto _TL4C6;
	  }
	  { struct Cyc_List_List * _T60 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T60->hd = d;
	    _T60->tl = Cyc_Toc_result_decls;
	    _T56 = (struct Cyc_List_List *)_T60;
	  }Cyc_Toc_result_decls = _T56;
	  goto _TL4C7;
	  _TL4C6: _TL4C7: goto _LL0;
	}
      case 13: 
	goto _LL16;
      case 14: 
	_LL16: goto _LL18;
      case 15: 
	_LL18: goto _LL1A;
      case 16: 
	_LL1A: goto _LL0;
      case 9: 
	{ struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T58;
	  _T59 = _T60->f2;
	}{ struct Cyc_List_List * ds2 = _T59;
	  _T59 = ds2;
	  goto _LL1E;
	}
      case 10: 
	{ struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct *)_T58;
	  _T59 = _T60->f2;
	}_LL1E: { struct Cyc_List_List * ds2 = _T59;
	  _T59 = ds2;
	  goto _LL20;
	}
      case 11: 
	{ struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct *)_T58;
	  _T59 = _T60->f1;
	}_LL20: { struct Cyc_List_List * ds2 = _T59;
	  Cyc_Toc_decls_to_c(nv,ds2,cinclude);
	  goto _LL0;
	}
      default: 
	{ struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct * _T60 = (struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct *)_T58;
	  _T59 = _T60->f1;
	}{ struct Cyc_List_List * ds2 = _T59;
	  Cyc_Toc_decls_to_c(nv,ds2,1);
	  goto _LL0;
	}
      }
      _LL0: ;
    }
  }_T57 = ds;
  ds = _T57->tl;
  goto _TL4AE;
  _TL4AD: ;
}
void Cyc_Toc_init() {
  struct Cyc_Core_DynamicRegion * _T0;
  struct Cyc_Toc_TocStateWrap * _T1;
  unsigned int _T2;
  struct _fat_ptr * * _T3;
  struct _fat_ptr * * _T4;
  unsigned int _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr * _T7;
  struct _fat_ptr * _T8;
  struct _fat_ptr * _T9;
  struct _fat_ptr * _TA;
  struct _fat_ptr * _TB;
  struct _fat_ptr * _TC;
  struct _fat_ptr * _TD;
  struct _fat_ptr * _TE;
  struct _fat_ptr * _TF;
  struct _fat_ptr * _T10;
  struct _fat_ptr * _T11;
  struct _fat_ptr * _T12;
  struct _fat_ptr * _T13;
  struct _fat_ptr * _T14;
  struct _fat_ptr * _T15;
  struct _fat_ptr * _T16;
  struct _fat_ptr * _T17;
  struct _fat_ptr * _T18;
  struct _fat_ptr * _T19;
  struct _fat_ptr * _T1A;
  struct _fat_ptr * _T1B;
  struct _fat_ptr * _T1C;
  struct _fat_ptr * _T1D;
  struct _fat_ptr * _T1E;
  struct _fat_ptr * _T1F;
  struct _fat_ptr * _T20;
  struct _fat_ptr * _T21;
  struct _fat_ptr * _T22;
  struct _fat_ptr * _T23;
  struct _fat_ptr * _T24;
  struct _fat_ptr * _T25;
  struct _fat_ptr * _T26;
  struct _fat_ptr * _T27;
  struct _fat_ptr * _T28;
  struct _fat_ptr * _T29;
  struct _fat_ptr * _T2A;
  struct _fat_ptr * _T2B;
  struct _fat_ptr * _T2C;
  struct _fat_ptr * _T2D;
  struct _fat_ptr * _T2E;
  struct _fat_ptr * _T2F;
  struct _fat_ptr * _T30;
  struct _fat_ptr * _T31;
  struct _fat_ptr * _T32;
  struct Cyc_Core_NewDynamicRegion _T33 = Cyc_Core__new_rckey(0U,"internal-error",
							      "internal-error",
							      0);
  struct Cyc_Core_DynamicRegion * _T34;
  _T34 = _T33.key;
  { struct Cyc_Core_DynamicRegion * dyn = _T34;
    struct Cyc_Toc_TocState * ts;
    _T0 = dyn;
    { struct _RegionHandle * h = &_T0->h;
      ts = Cyc_Toc_empty_toc_state(h);
    }_T2 = Cyc_Core_unique_qual;
    { struct Cyc_Toc_TocStateWrap * _T35 = _aqual_malloc(_T2,sizeof(struct Cyc_Toc_TocStateWrap));
      _T35->dyn = dyn;
      _T35->state = ts;
      _T1 = (struct Cyc_Toc_TocStateWrap *)_T35;
    }Cyc_Toc_toc_state = _T1;
    Cyc_Toc_result_decls = 0;
    Cyc_Toc_tuple_type_counter = 0;
    Cyc_Toc_temp_var_counter = 0;
    Cyc_Toc_fresh_label_counter = 0;
    { struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__throw_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc_setjmp_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__push_handler_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__pop_handler_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__exn_thrown_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__npop_handler_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__check_null_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__check_known_subscript_null_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__check_known_subscript_notnull_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__check_fat_subscript_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__fat_ptr_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__tag_fat_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__untag_fat_ptr_check_bound_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__untag_fat_ptr_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__check_fat_at_base_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__get_fat_size_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__fat_ptr_decrease_size_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__get_zero_arr_size_char_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__get_zero_arr_size_other_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__fat_ptr_plus_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__zero_arr_plus_char_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__zero_arr_plus_other_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__fat_ptr_inplace_plus_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__zero_arr_inplace_plus_char_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__zero_arr_inplace_plus_other_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__fat_ptr_inplace_plus_post_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__zero_arr_inplace_plus_post_char_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__zero_arr_inplace_plus_post_other_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__cycalloc_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__cyccalloc_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__cycalloc_atomic_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__cyccalloc_atomic_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__region_malloc_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__region_calloc_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__region_vmalloc_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__aqual_malloc_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__aqual_calloc_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__fast_region_malloc_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__check_times_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__new_region_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__push_region_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__pop_region_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__throw_arraybounds_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__throw_match_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__rethrow_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ struct _union_Nmspace_C_n * _T35 = &(Cyc_Toc__throw_assert_pr.f0).C_n;
      _T35->tag = 3;
      _T35->val = 0;
    }{ unsigned int _T35 = 45;
      _T5 = _check_times(_T35,sizeof(struct _fat_ptr *));
      { struct _fat_ptr * * _T36 = _cycalloc(_T5);
	_T6 = &Cyc_Toc__throw_str;
	_T36[0] = (struct _fat_ptr *)_T6;
	_T7 = &Cyc_Toc_setjmp_str;
	_T36[1] = (struct _fat_ptr *)_T7;
	_T8 = &Cyc_Toc__push_handler_str;
	_T36[2] = (struct _fat_ptr *)_T8;
	_T9 = &Cyc_Toc__pop_handler_str;
	_T36[3] = (struct _fat_ptr *)_T9;
	_TA = &Cyc_Toc__exn_thrown_str;
	_T36[4] = (struct _fat_ptr *)_TA;
	_TB = &Cyc_Toc__npop_handler_str;
	_T36[5] = (struct _fat_ptr *)_TB;
	_TC = &Cyc_Toc__check_null_str;
	_T36[6] = (struct _fat_ptr *)_TC;
	_TD = &Cyc_Toc__check_known_subscript_null_str;
	_T36[7] = (struct _fat_ptr *)_TD;
	_TE = &Cyc_Toc__check_known_subscript_notnull_str;
	_T36[8] = (struct _fat_ptr *)_TE;
	_TF = &Cyc_Toc__check_fat_subscript_str;
	_T36[9] = (struct _fat_ptr *)_TF;
	_T10 = &Cyc_Toc__tag_fat_str;
	_T36[10] = (struct _fat_ptr *)_T10;
	_T11 = &Cyc_Toc__untag_fat_ptr_check_bound_str;
	_T36[11] = (struct _fat_ptr *)_T11;
	_T12 = &Cyc_Toc__untag_fat_ptr_str;
	_T36[12] = (struct _fat_ptr *)_T12;
	_T13 = &Cyc_Toc__check_fat_at_base_str;
	_T36[13] = (struct _fat_ptr *)_T13;
	_T14 = &Cyc_Toc__get_fat_size_str;
	_T36[14] = (struct _fat_ptr *)_T14;
	_T15 = &Cyc_Toc__get_zero_arr_size_char_str;
	_T36[15] = (struct _fat_ptr *)_T15;
	_T16 = &Cyc_Toc__get_zero_arr_size_other_str;
	_T36[16] = (struct _fat_ptr *)_T16;
	_T17 = &Cyc_Toc__fat_ptr_plus_str;
	_T36[17] = (struct _fat_ptr *)_T17;
	_T18 = &Cyc_Toc__zero_arr_plus_char_str;
	_T36[18] = (struct _fat_ptr *)_T18;
	_T19 = &Cyc_Toc__zero_arr_plus_other_str;
	_T36[19] = (struct _fat_ptr *)_T19;
	_T1A = &Cyc_Toc__fat_ptr_inplace_plus_str;
	_T36[20] = (struct _fat_ptr *)_T1A;
	_T1B = &Cyc_Toc__zero_arr_inplace_plus_char_str;
	_T36[21] = (struct _fat_ptr *)_T1B;
	_T1C = &Cyc_Toc__zero_arr_inplace_plus_other_str;
	_T36[22] = (struct _fat_ptr *)_T1C;
	_T1D = &Cyc_Toc__fat_ptr_inplace_plus_post_str;
	_T36[23] = (struct _fat_ptr *)_T1D;
	_T1E = &Cyc_Toc__zero_arr_inplace_plus_post_char_str;
	_T36[24] = (struct _fat_ptr *)_T1E;
	_T1F = &Cyc_Toc__zero_arr_inplace_plus_post_other_str;
	_T36[25] = (struct _fat_ptr *)_T1F;
	_T20 = &Cyc_Toc__cycalloc_str;
	_T36[26] = (struct _fat_ptr *)_T20;
	_T21 = &Cyc_Toc__cyccalloc_str;
	_T36[27] = (struct _fat_ptr *)_T21;
	_T22 = &Cyc_Toc__cycalloc_atomic_str;
	_T36[28] = (struct _fat_ptr *)_T22;
	_T23 = &Cyc_Toc__cyccalloc_atomic_str;
	_T36[29] = (struct _fat_ptr *)_T23;
	_T24 = &Cyc_Toc__region_malloc_str;
	_T36[30] = (struct _fat_ptr *)_T24;
	_T25 = &Cyc_Toc__region_calloc_str;
	_T36[31] = (struct _fat_ptr *)_T25;
	_T26 = &Cyc_Toc__check_times_str;
	_T36[32] = (struct _fat_ptr *)_T26;
	_T27 = &Cyc_Toc__new_region_str;
	_T36[33] = (struct _fat_ptr *)_T27;
	_T28 = &Cyc_Toc__push_region_str;
	_T36[34] = (struct _fat_ptr *)_T28;
	_T29 = &Cyc_Toc__pop_region_str;
	_T36[35] = (struct _fat_ptr *)_T29;
	_T2A = &Cyc_Toc__throw_arraybounds_str;
	_T36[36] = (struct _fat_ptr *)_T2A;
	_T2B = &Cyc_Toc__fat_ptr_decrease_size_str;
	_T36[37] = (struct _fat_ptr *)_T2B;
	_T2C = &Cyc_Toc__throw_match_str;
	_T36[38] = (struct _fat_ptr *)_T2C;
	_T2D = &Cyc_Toc__fast_region_malloc_str;
	_T36[39] = (struct _fat_ptr *)_T2D;
	_T2E = &Cyc_Toc__region_vmalloc_str;
	_T36[40] = (struct _fat_ptr *)_T2E;
	_T2F = &Cyc_Toc__aqual_malloc_str;
	_T36[41] = (struct _fat_ptr *)_T2F;
	_T30 = &Cyc_Toc__aqual_calloc_str;
	_T36[42] = (struct _fat_ptr *)_T30;
	_T31 = &Cyc_Toc__throw_assert_str;
	_T36[43] = (struct _fat_ptr *)_T31;
	_T32 = &Cyc_Toc__rethrow_str;
	_T36[44] = (struct _fat_ptr *)_T32;
	_T4 = (struct _fat_ptr * *)_T36;
      }_T3 = _T4;
    }Cyc_Toc_globals = _tag_fat(_T3,sizeof(struct _fat_ptr *),45U);
  }
}
void Cyc_Toc_finish() {
  struct Cyc_Toc_TocStateWrap * _T0;
  struct Cyc_Core_DynamicRegion * _T1;
  struct Cyc_Toc_TocState * _T2;
  void (* _T3)(struct Cyc_Toc_TocStateWrap *);
  void (* _T4)(void *);
  struct Cyc_Toc_TocStateWrap * ts = 0;
  { struct Cyc_Toc_TocStateWrap * _T5 = ts;
    struct Cyc_Toc_TocStateWrap * _T6 = Cyc_Toc_toc_state;
    ts = _T6;
    Cyc_Toc_toc_state = _T5;
  }_T0 = _check_null(ts);
  { struct Cyc_Toc_TocStateWrap _T5 = *_T0;
    struct Cyc_Toc_TocState * _T6;
    struct Cyc_Core_DynamicRegion * _T7;
    _T7 = _T5.dyn;
    _T6 = _T5.state;
    { struct Cyc_Core_DynamicRegion * dyn = _T7;
      struct Cyc_Toc_TocState * s = _T6;
      _T1 = dyn;
      { struct _RegionHandle * h = &_T1->h;
	_T2 = s;
	{ struct Cyc_Toc_TocState _T8 = *_T2;
	  struct Cyc_Xarray_Xarray * _T9;
	  _T9 = _T8.temp_labels;
	  { struct Cyc_Xarray_Xarray * tls = _T9;
	    Cyc_Xarray_reuse(tls);
	  }
	}
      }Cyc_Core_free_rckey(dyn);
      _T4 = Cyc_Core_ufree;
      { void (* _T8)(struct Cyc_Toc_TocStateWrap *) = (void (*)(struct Cyc_Toc_TocStateWrap *))_T4;
	_T3 = _T8;
      }_T3(ts);
      Cyc_Toc_gpop_tables = 0;
      Cyc_Toc_fn_pop_table = 0;
    }
  }
}
struct Cyc_List_List * Cyc_Toc_toc(struct Cyc_Hashtable_Table * pop_tables,
				   struct Cyc_List_List * ds) {
  struct Cyc_Hashtable_Table * * _T0;
  struct Cyc_Toc_Env * _T1;
  struct Cyc_List_List * _T2;
  { struct Cyc_Hashtable_Table * * _T3 = _cycalloc(sizeof(struct Cyc_Hashtable_Table *));
    *_T3 = pop_tables;
    _T0 = (struct Cyc_Hashtable_Table * *)_T3;
  }Cyc_Toc_gpop_tables = _T0;
  Cyc_Toc_init();
  { struct _RegionHandle _T3 = _new_region(0U,"start");
    struct _RegionHandle * start = &_T3;
    _push_region(start);
    _T1 = Cyc_Toc_empty_env(start);
    _T2 = ds;
    Cyc_Toc_decls_to_c(_T1,_T2,0);
    { struct Cyc_List_List * _T4 = Cyc_List_imp_rev(Cyc_Toc_result_decls);
      _npop_handler(0);
      return _T4;
    }_pop_region();
  }
}
