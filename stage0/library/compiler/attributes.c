#include <cyc_include.h>
int Cyc_Core_intcmp(int,int);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern int Cyc_List_length(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_copy(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
extern void * Cyc_List_nth(struct Cyc_List_List *,int);
extern long Cyc_List_exists_c(long (*)(void *,void *),void *,struct Cyc_List_List *);
extern long Cyc_List_memq(struct Cyc_List_List *,void *);
extern long Cyc_List_mem(int (*)(void *,void *),struct Cyc_List_List *,void *);
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
 struct Cyc_Absyn_PointerType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_PtrInfo f1;
};
 struct Cyc_Absyn_FnType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_FnInfo f1;
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
 struct Cyc_Absyn_Stdcall_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Fastcall_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Noreturn_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Const_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Availability_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Packed_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Section_att_Absyn_Attribute_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Absyn_Nocommon_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Shared_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Unused_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Weak_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Dllimport_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Dllexport_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_No_instrument_function_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Constructor_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Destructor_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_No_check_memory_usage_att_Absyn_Attribute_struct {
  int tag;
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
 struct Cyc_Absyn_Pure_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Mode_att_Absyn_Attribute_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Absyn_Alias_att_Absyn_Attribute_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Absyn_Always_inline_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Deprecated_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Leaf_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Malloc_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_Access_att_Absyn_Attribute_struct {
  int tag;
  enum Cyc_Absyn_Access_Type f1;
  int f2;
  int f3;
};
 struct Cyc_Absyn_Cold_att_Absyn_Attribute_struct {
  int tag;
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
 struct Cyc_Absyn_WarnUnusedResult_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_MayAlias_att_Absyn_Attribute_struct {
  int tag;
};
 struct Cyc_Absyn_VectorSize_att_Absyn_Attribute_struct {
  int tag;
  int f1;
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
 struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct {
  int tag;
  union Cyc_Absyn_Cnst f1;
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
void * Cyc_Absyn_compress(void *);
extern struct Cyc_Absyn_Stdcall_att_Absyn_Attribute_struct Cyc_Atts_Stdcall_att_val;
extern struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct Cyc_Atts_Cdecl_att_val;
extern struct Cyc_Absyn_Fastcall_att_Absyn_Attribute_struct Cyc_Atts_Fastcall_att_val;
extern struct Cyc_Absyn_Noreturn_att_Absyn_Attribute_struct Cyc_Atts_Noreturn_att_val;
extern struct Cyc_Absyn_Const_att_Absyn_Attribute_struct Cyc_Atts_Const_att_val;
extern struct Cyc_Absyn_Availability_att_Absyn_Attribute_struct Cyc_Atts_Availability_att_val;
extern struct Cyc_Absyn_Packed_att_Absyn_Attribute_struct Cyc_Atts_Packed_att_val;
extern struct Cyc_Absyn_Shared_att_Absyn_Attribute_struct Cyc_Atts_Shared_att_val;
extern struct Cyc_Absyn_Unused_att_Absyn_Attribute_struct Cyc_Atts_Unused_att_val;
extern struct Cyc_Absyn_Weak_att_Absyn_Attribute_struct Cyc_Atts_Weak_att_val;
extern struct Cyc_Absyn_Dllimport_att_Absyn_Attribute_struct Cyc_Atts_Dllimport_att_val;
extern struct Cyc_Absyn_Dllexport_att_Absyn_Attribute_struct Cyc_Atts_Dllexport_att_val;
extern struct Cyc_Absyn_No_instrument_function_att_Absyn_Attribute_struct Cyc_Atts_No_instrument_function_att_val;
extern struct Cyc_Absyn_Constructor_att_Absyn_Attribute_struct Cyc_Atts_Constructor_att_val;
extern struct Cyc_Absyn_Destructor_att_Absyn_Attribute_struct Cyc_Atts_Destructor_att_val;
extern struct Cyc_Absyn_No_check_memory_usage_att_Absyn_Attribute_struct Cyc_Atts_No_check_memory_usage_att_val;
extern struct Cyc_Absyn_Pure_att_Absyn_Attribute_struct Cyc_Atts_Pure_att_val;
extern struct Cyc_Absyn_Always_inline_att_Absyn_Attribute_struct Cyc_Atts_Always_inline_att_val;
extern struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct Cyc_Atts_No_throw_att_val;
extern struct Cyc_Absyn_Deprecated_att_Absyn_Attribute_struct Cyc_Atts_Deprecated_att_val;
extern struct Cyc_Absyn_Leaf_att_Absyn_Attribute_struct Cyc_Atts_Leaf_att_val;
extern struct Cyc_Absyn_Malloc_att_Absyn_Attribute_struct Cyc_Atts_Malloc_att_val;
extern struct Cyc_Absyn_Cold_att_Absyn_Attribute_struct Cyc_Atts_Cold_att_val;
extern struct Cyc_Absyn_WarnUnusedResult_att_Absyn_Attribute_struct Cyc_Atts_WarnUnusedResult_att_val;
extern struct Cyc_Absyn_MayAlias_att_Absyn_Attribute_struct Cyc_Atts_MayAlias_att_val;
long Cyc_Atts_fntype_att(void *);
long Cyc_Atts_equal_att(void *,void *);
int Cyc_Atts_attribute_cmp(void *,void *);
extern int Cyc_Evexp_exp_cmp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_is_bound_one(void *,long);
long Cyc_Tcutil_is_noalias_pointer(struct Cyc_List_List *,void *,long);
long Cyc_Tcutil_force_type2bool(long,void *);
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
void Cyc_Warn_err(unsigned int,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Attribute_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_Vardecl_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
void Cyc_Warn_err2(unsigned int,struct _fat_ptr);
void * Cyc_Warn_impos2(struct _fat_ptr);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_zstrcmp(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);
struct Cyc_Absyn_Stdcall_att_Absyn_Attribute_struct Cyc_Atts_Stdcall_att_val = {1};
struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct Cyc_Atts_Cdecl_att_val = {2};
struct Cyc_Absyn_Fastcall_att_Absyn_Attribute_struct Cyc_Atts_Fastcall_att_val = {3};
struct Cyc_Absyn_Noreturn_att_Absyn_Attribute_struct Cyc_Atts_Noreturn_att_val = {4};
struct Cyc_Absyn_Const_att_Absyn_Attribute_struct Cyc_Atts_Const_att_val = {5};
struct Cyc_Absyn_Availability_att_Absyn_Attribute_struct Cyc_Atts_Availability_att_val = {6};
struct Cyc_Absyn_Packed_att_Absyn_Attribute_struct Cyc_Atts_Packed_att_val = {8};
struct Cyc_Absyn_Nocommon_att_Absyn_Attribute_struct Cyc_Atts_Nocommon_att_val = {10};
struct Cyc_Absyn_Shared_att_Absyn_Attribute_struct Cyc_Atts_Shared_att_val = {11};
struct Cyc_Absyn_Unused_att_Absyn_Attribute_struct Cyc_Atts_Unused_att_val = {12};
struct Cyc_Absyn_Weak_att_Absyn_Attribute_struct Cyc_Atts_Weak_att_val = {13};
struct Cyc_Absyn_Dllimport_att_Absyn_Attribute_struct Cyc_Atts_Dllimport_att_val = {14};
struct Cyc_Absyn_Dllexport_att_Absyn_Attribute_struct Cyc_Atts_Dllexport_att_val = {15};
struct Cyc_Absyn_No_instrument_function_att_Absyn_Attribute_struct Cyc_Atts_No_instrument_function_att_val = {16};
struct Cyc_Absyn_Constructor_att_Absyn_Attribute_struct Cyc_Atts_Constructor_att_val = {17};
struct Cyc_Absyn_Destructor_att_Absyn_Attribute_struct Cyc_Atts_Destructor_att_val = {18};
struct Cyc_Absyn_No_check_memory_usage_att_Absyn_Attribute_struct Cyc_Atts_No_check_memory_usage_att_val = {19};
struct Cyc_Absyn_Pure_att_Absyn_Attribute_struct Cyc_Atts_Pure_att_val = {24};
struct Cyc_Absyn_Always_inline_att_Absyn_Attribute_struct Cyc_Atts_Always_inline_att_val = {27};
struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct Cyc_Atts_No_throw_att_val = {28};
struct Cyc_Absyn_Deprecated_att_Absyn_Attribute_struct Cyc_Atts_Deprecated_att_val = {29};
struct Cyc_Absyn_Leaf_att_Absyn_Attribute_struct Cyc_Atts_Leaf_att_val = {30};
struct Cyc_Absyn_Malloc_att_Absyn_Attribute_struct Cyc_Atts_Malloc_att_val = {31};
struct Cyc_Absyn_Cold_att_Absyn_Attribute_struct Cyc_Atts_Cold_att_val = {33};
struct Cyc_Absyn_WarnUnusedResult_att_Absyn_Attribute_struct Cyc_Atts_WarnUnusedResult_att_val = {36};
struct Cyc_Absyn_MayAlias_att_Absyn_Attribute_struct Cyc_Atts_MayAlias_att_val = {37};
static void * Cyc_Atts_bad_attribute(unsigned int loc) {
  unsigned int _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct * _T3;
  struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct * _T4;
  void * _T5;
  _T0 = loc;
  _T1 = _tag_fat("unrecognized attribute",sizeof(char),23U);
  _T2 = _tag_fat(0U,sizeof(void *),0);
  Cyc_Warn_err(_T0,_T1,_T2);
  _T3 = &Cyc_Atts_Cdecl_att_val;
  _T4 = (struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct *)_T3;
  _T5 = (void *)_T4;
  return _T5;
}
 struct _tuple13 {
  struct _fat_ptr f0;
  void * f1;
};
static char _TmpG0[8U] = "stdcall";
static char _TmpG1[6U] = "cdecl";
static char _TmpG2[9U] = "fastcall";
static char _TmpG3[9U] = "noreturn";
static char _TmpG4[6U] = "const";
static char _TmpG5[13U] = "availability";
static char _TmpG6[8U] = "aligned";
static char _TmpG7[7U] = "packed";
static char _TmpG8[7U] = "shared";
static char _TmpG9[7U] = "unused";
static char _TmpGA[5U] = "weak";
static char _TmpGB[10U] = "dllimport";
static char _TmpGC[10U] = "dllexport";
static char _TmpGD[23U] = "no_instrument_function";
static char _TmpGE[12U] = "constructor";
static char _TmpGF[11U] = "destructor";
static char _TmpG10[22U] = "no_check_memory_usage";
static char _TmpG11[5U] = "pure";
static char _TmpG12[14U] = "always_inline";
static char _TmpG13[9U] = "no_throw";
static char _TmpG14[8U] = "nothrow";
static char _TmpG15[11U] = "deprecated";
static char _TmpG16[5U] = "leaf";
static char _TmpG17[7U] = "malloc";
static char _TmpG18[5U] = "cold";
static char _TmpG19[19U] = "warn_unused_result";
static char _TmpG1A[10U] = "may_alias";
void * Cyc_Atts_parse_nullary_att(unsigned int loc,struct _fat_ptr s) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned char * _T3;
  const char * _T4;
  const char * _T5;
  char _T6;
  int _T7;
  struct _fat_ptr _T8;
  unsigned char * _T9;
  const char * _TA;
  char _TB;
  int _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  const char * _TF;
  struct _fat_ptr _T10;
  unsigned int _T11;
  unsigned int _T12;
  int _T13;
  char _T14;
  int _T15;
  struct _fat_ptr _T16;
  unsigned char * _T17;
  const char * _T18;
  struct _fat_ptr _T19;
  unsigned int _T1A;
  unsigned int _T1B;
  int _T1C;
  char _T1D;
  int _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  unsigned int _T21;
  unsigned int _T22;
  int _T23;
  unsigned int _T24;
  struct _fat_ptr _T25;
  struct _tuple13 * _T26;
  int _T27;
  struct _tuple13 _T28;
  struct _fat_ptr _T29;
  int _T2A;
  struct _tuple13 * _T2B;
  int _T2C;
  struct _tuple13 _T2D;
  void * _T2E;
  void * _T2F;
  static struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct att_aligned = {7,
									    0};
  static struct _tuple13 att_map[27U] = {{.f0={(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
					       (unsigned char *)_TmpG0 + 8U},
					  .f1=(void *)((struct Cyc_Absyn_Stdcall_att_Absyn_Attribute_struct *)&Cyc_Atts_Stdcall_att_val)},
					 {.f0={(unsigned char *)_TmpG1,(unsigned char *)_TmpG1,
					       (unsigned char *)_TmpG1 + 6U},
					  .f1=(void *)((struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct *)&Cyc_Atts_Cdecl_att_val)},
					 {.f0={(unsigned char *)_TmpG2,(unsigned char *)_TmpG2,
					       (unsigned char *)_TmpG2 + 9U},
					  .f1=(void *)((struct Cyc_Absyn_Fastcall_att_Absyn_Attribute_struct *)&Cyc_Atts_Fastcall_att_val)},
					 {.f0={(unsigned char *)_TmpG3,(unsigned char *)_TmpG3,
					       (unsigned char *)_TmpG3 + 9U},
					  .f1=(void *)((struct Cyc_Absyn_Noreturn_att_Absyn_Attribute_struct *)&Cyc_Atts_Noreturn_att_val)},
					 {.f0={(unsigned char *)_TmpG4,(unsigned char *)_TmpG4,
					       (unsigned char *)_TmpG4 + 6U},
					  .f1=(void *)((struct Cyc_Absyn_Const_att_Absyn_Attribute_struct *)&Cyc_Atts_Const_att_val)},
					 {.f0={(unsigned char *)_TmpG5,(unsigned char *)_TmpG5,
					       (unsigned char *)_TmpG5 + 13U},
					  .f1=(void *)((struct Cyc_Absyn_Availability_att_Absyn_Attribute_struct *)&Cyc_Atts_Availability_att_val)},
					 {.f0={(unsigned char *)_TmpG6,(unsigned char *)_TmpG6,
					       (unsigned char *)_TmpG6 + 8U},
					  .f1=(void *)((struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct *)&att_aligned)},
					 {.f0={(unsigned char *)_TmpG7,(unsigned char *)_TmpG7,
					       (unsigned char *)_TmpG7 + 7U},
					  .f1=(void *)((struct Cyc_Absyn_Packed_att_Absyn_Attribute_struct *)&Cyc_Atts_Packed_att_val)},
					 {.f0={(unsigned char *)_TmpG8,(unsigned char *)_TmpG8,
					       (unsigned char *)_TmpG8 + 7U},
					  .f1=(void *)((struct Cyc_Absyn_Shared_att_Absyn_Attribute_struct *)&Cyc_Atts_Shared_att_val)},
					 {.f0={(unsigned char *)_TmpG9,(unsigned char *)_TmpG9,
					       (unsigned char *)_TmpG9 + 7U},
					  .f1=(void *)((struct Cyc_Absyn_Unused_att_Absyn_Attribute_struct *)&Cyc_Atts_Unused_att_val)},
					 {.f0={(unsigned char *)_TmpGA,(unsigned char *)_TmpGA,
					       (unsigned char *)_TmpGA + 5U},
					  .f1=(void *)((struct Cyc_Absyn_Weak_att_Absyn_Attribute_struct *)&Cyc_Atts_Weak_att_val)},
					 {.f0={(unsigned char *)_TmpGB,(unsigned char *)_TmpGB,
					       (unsigned char *)_TmpGB + 10U},
					  .f1=(void *)((struct Cyc_Absyn_Dllimport_att_Absyn_Attribute_struct *)&Cyc_Atts_Dllimport_att_val)},
					 {.f0={(unsigned char *)_TmpGC,(unsigned char *)_TmpGC,
					       (unsigned char *)_TmpGC + 10U},
					  .f1=(void *)((struct Cyc_Absyn_Dllexport_att_Absyn_Attribute_struct *)&Cyc_Atts_Dllexport_att_val)},
					 {.f0={(unsigned char *)_TmpGD,(unsigned char *)_TmpGD,
					       (unsigned char *)_TmpGD + 23U},
					  .f1=(void *)((struct Cyc_Absyn_No_instrument_function_att_Absyn_Attribute_struct *)&Cyc_Atts_No_instrument_function_att_val)},
					 {.f0={(unsigned char *)_TmpGE,(unsigned char *)_TmpGE,
					       (unsigned char *)_TmpGE + 12U},
					  .f1=(void *)((struct Cyc_Absyn_Constructor_att_Absyn_Attribute_struct *)&Cyc_Atts_Constructor_att_val)},
					 {.f0={(unsigned char *)_TmpGF,(unsigned char *)_TmpGF,
					       (unsigned char *)_TmpGF + 11U},
					  .f1=(void *)((struct Cyc_Absyn_Destructor_att_Absyn_Attribute_struct *)&Cyc_Atts_Destructor_att_val)},
					 {.f0={(unsigned char *)_TmpG10,(unsigned char *)_TmpG10,
					       (unsigned char *)_TmpG10 + 22U},
					  .f1=(void *)((struct Cyc_Absyn_No_check_memory_usage_att_Absyn_Attribute_struct *)&Cyc_Atts_No_check_memory_usage_att_val)},
					 {.f0={(unsigned char *)_TmpG11,(unsigned char *)_TmpG11,
					       (unsigned char *)_TmpG11 + 5U},
					  .f1=(void *)((struct Cyc_Absyn_Pure_att_Absyn_Attribute_struct *)&Cyc_Atts_Pure_att_val)},
					 {.f0={(unsigned char *)_TmpG12,(unsigned char *)_TmpG12,
					       (unsigned char *)_TmpG12 + 14U},
					  .f1=(void *)((struct Cyc_Absyn_Always_inline_att_Absyn_Attribute_struct *)&Cyc_Atts_Always_inline_att_val)},
					 {.f0={(unsigned char *)_TmpG13,(unsigned char *)_TmpG13,
					       (unsigned char *)_TmpG13 + 9U},
					  .f1=(void *)((struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct *)&Cyc_Atts_No_throw_att_val)},
					 {.f0={(unsigned char *)_TmpG14,(unsigned char *)_TmpG14,
					       (unsigned char *)_TmpG14 + 8U},
					  .f1=(void *)((struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct *)&Cyc_Atts_No_throw_att_val)},
					 {.f0={(unsigned char *)_TmpG15,(unsigned char *)_TmpG15,
					       (unsigned char *)_TmpG15 + 11U},
					  .f1=(void *)((struct Cyc_Absyn_Deprecated_att_Absyn_Attribute_struct *)&Cyc_Atts_Deprecated_att_val)},
					 {.f0={(unsigned char *)_TmpG16,(unsigned char *)_TmpG16,
					       (unsigned char *)_TmpG16 + 5U},
					  .f1=(void *)((struct Cyc_Absyn_Leaf_att_Absyn_Attribute_struct *)&Cyc_Atts_Leaf_att_val)},
					 {.f0={(unsigned char *)_TmpG17,(unsigned char *)_TmpG17,
					       (unsigned char *)_TmpG17 + 7U},
					  .f1=(void *)((struct Cyc_Absyn_Malloc_att_Absyn_Attribute_struct *)&Cyc_Atts_Malloc_att_val)},
					 {.f0={(unsigned char *)_TmpG18,(unsigned char *)_TmpG18,
					       (unsigned char *)_TmpG18 + 5U},
					  .f1=(void *)((struct Cyc_Absyn_Cold_att_Absyn_Attribute_struct *)&Cyc_Atts_Cold_att_val)},
					 {.f0={(unsigned char *)_TmpG19,(unsigned char *)_TmpG19,
					       (unsigned char *)_TmpG19 + 19U},
					  .f1=(void *)((struct Cyc_Absyn_WarnUnusedResult_att_Absyn_Attribute_struct *)&Cyc_Atts_WarnUnusedResult_att_val)},
					 {.f0={(unsigned char *)_TmpG1A,(unsigned char *)_TmpG1A,
					       (unsigned char *)_TmpG1A + 10U},
					  .f1=(void *)((struct Cyc_Absyn_MayAlias_att_Absyn_Attribute_struct *)&Cyc_Atts_MayAlias_att_val)}};
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  if (_T1 <= 4U) { goto _TL0;
  }
  _T2 = s;
  _T3 = _T2.curr;
  _T4 = (const char *)_T3;
  _T5 = _check_null(_T4);
  _T6 = _T5[0];
  _T7 = (int)_T6;
  if (_T7 != 95) { goto _TL0;
  }
  _T8 = s;
  _T9 = _T8.curr;
  _TA = (const char *)_T9;
  _TB = _TA[1];
  _TC = (int)_TB;
  if (_TC != 95) { goto _TL0;
  }
  _TD = s;
  _TE = _TD.curr;
  _TF = (const char *)_TE;
  _T10 = s;
  _T11 = _get_fat_size(_T10,sizeof(char));
  _T12 = _T11 - 2U;
  _T13 = (int)_T12;
  _T14 = _TF[_T13];
  _T15 = (int)_T14;
  if (_T15 != 95) { goto _TL0;
  }
  _T16 = s;
  _T17 = _T16.curr;
  _T18 = (const char *)_T17;
  _T19 = s;
  _T1A = _get_fat_size(_T19,sizeof(char));
  _T1B = _T1A - 3U;
  _T1C = (int)_T1B;
  _T1D = _T18[_T1C];
  _T1E = (int)_T1D;
  if (_T1E != 95) { goto _TL0;
  }
  _T1F = s;
  _T20 = s;
  _T21 = _get_fat_size(_T20,sizeof(char));
  _T22 = _T21 - 5U;
  s = Cyc_substring(_T1F,2,_T22);
  goto _TL1;
  _TL0: _TL1: { int i = 0;
    _TL5: _T23 = i;
    _T24 = (unsigned int)_T23;
    if (_T24 < 27U) { goto _TL3;
    }else { goto _TL4;
    }
    _TL3: _T25 = s;
    _T26 = att_map;
    _T27 = i;
    _T28 = _T26[_T27];
    _T29 = _T28.f0;
    _T2A = Cyc_strcmp(_T25,_T29);
    if (_T2A != 0) { goto _TL6;
    }
    _T2B = att_map;
    _T2C = i;
    _T2D = _T2B[_T2C];
    _T2E = _T2D.f1;
    return _T2E;
    _TL6: i = i + 1;
    goto _TL5;
    _TL4: ;
  }_T2F = Cyc_Atts_bad_attribute(loc);
  return _T2F;
}
static int Cyc_Atts_exp2int(unsigned int loc,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T3;
  union Cyc_Absyn_Cnst _T4;
  struct _union_Cnst_Int_c _T5;
  unsigned int _T6;
  union Cyc_Absyn_Cnst _T7;
  struct _union_Cnst_Int_c _T8;
  struct _tuple5 _T9;
  int _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  _T0 = e;
  { void * _TE = _T0->r;
    int _TF;
    _T1 = (int *)_TE;
    _T2 = *_T1;
    if (_T2 != 0) { goto _TL8;
    }
    _T3 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_TE;
    _T4 = _T3->f1;
    _T5 = _T4.Int_c;
    _T6 = _T5.tag;
    if (_T6 != 5) { goto _TLA;
    }
    { struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T10 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_TE;
      _T7 = _T10->f1;
      _T8 = _T7.Int_c;
      _T9 = _T8.val;
      _TF = _T9.f1;
    }{ int i = _TF;
      _TA = i;
      return _TA;
    }_TLA: goto _LL3;
    _TL8: _LL3: _TB = loc;
    _TC = _tag_fat("expecting integer constant",sizeof(char),27U);
    _TD = _tag_fat(0U,sizeof(void *),0);
    Cyc_Warn_err(_TB,_TC,_TD);
    return 0;
    ;
  }
}
static struct _fat_ptr Cyc_Atts_exp2string(unsigned int loc,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T3;
  union Cyc_Absyn_Cnst _T4;
  struct _union_Cnst_String_c _T5;
  unsigned int _T6;
  union Cyc_Absyn_Cnst _T7;
  struct _union_Cnst_String_c _T8;
  struct _fat_ptr _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  _T0 = e;
  { void * _TE = _T0->r;
    struct _fat_ptr _TF;
    _T1 = (int *)_TE;
    _T2 = *_T1;
    if (_T2 != 0) { goto _TLC;
    }
    _T3 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_TE;
    _T4 = _T3->f1;
    _T5 = _T4.String_c;
    _T6 = _T5.tag;
    if (_T6 != 9) { goto _TLE;
    }
    { struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct * _T10 = (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)_TE;
      _T7 = _T10->f1;
      _T8 = _T7.String_c;
      _TF = _T8.val;
    }{ struct _fat_ptr s = _TF;
      _T9 = s;
      return _T9;
    }_TLE: goto _LL3;
    _TLC: _LL3: _TA = loc;
    _TB = _tag_fat("expecting string constant",sizeof(char),26U);
    _TC = _tag_fat(0U,sizeof(void *),0);
    Cyc_Warn_err(_TA,_TB,_TC);
    _TD = _tag_fat(0,0,0);
    return _TD;
    ;
  }
}
void * Cyc_Atts_parse_unary_att(unsigned int sloc,struct _fat_ptr s,unsigned int eloc,
				struct Cyc_Absyn_Exp * e) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T6;
  void * _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  int _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  int _TD;
  struct Cyc_Absyn_Section_att_Absyn_Attribute_struct * _TE;
  void * _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  int _T12;
  struct Cyc_Absyn_Mode_att_Absyn_Attribute_struct * _T13;
  void * _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  int _T17;
  struct Cyc_Absyn_Alias_att_Absyn_Attribute_struct * _T18;
  void * _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  int _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  int _T1F;
  unsigned int _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct * _T23;
  void * _T24;
  struct _fat_ptr _T25;
  struct _fat_ptr _T26;
  int _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  int _T2A;
  struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct * _T2B;
  void * _T2C;
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  int _T2F;
  struct _fat_ptr _T30;
  struct _fat_ptr _T31;
  int _T32;
  struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct * _T33;
  void * _T34;
  struct _fat_ptr _T35;
  struct _fat_ptr _T36;
  int _T37;
  struct _fat_ptr _T38;
  struct _fat_ptr _T39;
  int _T3A;
  struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct * _T3B;
  void * _T3C;
  struct _fat_ptr _T3D;
  struct _fat_ptr _T3E;
  int _T3F;
  struct _fat_ptr _T40;
  struct _fat_ptr _T41;
  int _T42;
  struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct * _T43;
  void * _T44;
  struct _fat_ptr _T45;
  struct _fat_ptr _T46;
  int _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  int _T4A;
  struct Cyc_Absyn_AllocAlign_att_Absyn_Attribute_struct * _T4B;
  void * _T4C;
  struct _fat_ptr _T4D;
  struct _fat_ptr _T4E;
  int _T4F;
  struct _fat_ptr _T50;
  struct _fat_ptr _T51;
  int _T52;
  struct Cyc_Absyn_VectorSize_att_Absyn_Attribute_struct * _T53;
  void * _T54;
  unsigned int _T55;
  struct _fat_ptr _T56;
  struct _fat_ptr _T57;
  void * _T58;
  _T0 = s;
  _T1 = _tag_fat("aligned",sizeof(char),8U);
  _T2 = Cyc_zstrcmp(_T0,_T1);
  if (_T2 == 0) { goto _TL12;
  }else { goto _TL13;
  }
  _TL13: _T3 = s;
  _T4 = _tag_fat("__aligned__",sizeof(char),12U);
  _T5 = Cyc_zstrcmp(_T3,_T4);
  if (_T5 == 0) { goto _TL12;
  }else { goto _TL10;
  }
  _TL12: { struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct));
    _T59->tag = 7;
    _T59->f1 = e;
    _T6 = (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct *)_T59;
  }_T7 = (void *)_T6;
  return _T7;
  _TL10: _T8 = s;
  _T9 = _tag_fat("section",sizeof(char),8U);
  _TA = Cyc_zstrcmp(_T8,_T9);
  if (_TA == 0) { goto _TL16;
  }else { goto _TL17;
  }
  _TL17: _TB = s;
  _TC = _tag_fat("__section__",sizeof(char),12U);
  _TD = Cyc_zstrcmp(_TB,_TC);
  if (_TD == 0) { goto _TL16;
  }else { goto _TL14;
  }
  _TL16: { struct Cyc_Absyn_Section_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_Section_att_Absyn_Attribute_struct));
    _T59->tag = 9;
    _T59->f1 = Cyc_Atts_exp2string(eloc,e);
    _TE = (struct Cyc_Absyn_Section_att_Absyn_Attribute_struct *)_T59;
  }_TF = (void *)_TE;
  return _TF;
  _TL14: _T10 = s;
  _T11 = _tag_fat("__mode__",sizeof(char),9U);
  _T12 = Cyc_zstrcmp(_T10,_T11);
  if (_T12 != 0) { goto _TL18;
  }
  { struct Cyc_Absyn_Mode_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_Mode_att_Absyn_Attribute_struct));
    _T59->tag = 25;
    _T59->f1 = Cyc_Atts_exp2string(eloc,e);
    _T13 = (struct Cyc_Absyn_Mode_att_Absyn_Attribute_struct *)_T59;
  }_T14 = (void *)_T13;
  return _T14;
  _TL18: _T15 = s;
  _T16 = _tag_fat("alias",sizeof(char),6U);
  _T17 = Cyc_zstrcmp(_T15,_T16);
  if (_T17 != 0) { goto _TL1A;
  }
  { struct Cyc_Absyn_Alias_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_Alias_att_Absyn_Attribute_struct));
    _T59->tag = 26;
    _T59->f1 = Cyc_Atts_exp2string(eloc,e);
    _T18 = (struct Cyc_Absyn_Alias_att_Absyn_Attribute_struct *)_T59;
  }_T19 = (void *)_T18;
  return _T19;
  _TL1A: { int n = Cyc_Atts_exp2int(eloc,e);
    _T1A = s;
    _T1B = _tag_fat("regparm",sizeof(char),8U);
    _T1C = Cyc_zstrcmp(_T1A,_T1B);
    if (_T1C == 0) { goto _TL1E;
    }else { goto _TL1F;
    }
    _TL1F: _T1D = s;
    _T1E = _tag_fat("__regparm__",sizeof(char),12U);
    _T1F = Cyc_zstrcmp(_T1D,_T1E);
    if (_T1F == 0) { goto _TL1E;
    }else { goto _TL1C;
    }
    _TL1E: if (n < 0) { goto _TL22;
    }else { goto _TL23;
    }
    _TL23: if (n > 3) { goto _TL22;
    }else { goto _TL20;
    }
    _TL22: _T20 = eloc;
    _T21 = _tag_fat("regparm requires value between 0 and 3",sizeof(char),
		    39U);
    _T22 = _tag_fat(0U,sizeof(void *),0);
    Cyc_Warn_err(_T20,_T21,_T22);
    goto _TL21;
    _TL20: _TL21: { struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct));
      _T59->tag = 0;
      _T59->f1 = n;
      _T23 = (struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct *)_T59;
    }_T24 = (void *)_T23;
    return _T24;
    _TL1C: _T25 = s;
    _T26 = _tag_fat("initializes",sizeof(char),12U);
    _T27 = Cyc_zstrcmp(_T25,_T26);
    if (_T27 == 0) { goto _TL26;
    }else { goto _TL27;
    }
    _TL27: _T28 = s;
    _T29 = _tag_fat("__initializes__",sizeof(char),16U);
    _T2A = Cyc_zstrcmp(_T28,_T29);
    if (_T2A == 0) { goto _TL26;
    }else { goto _TL24;
    }
    _TL26: { struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct));
      _T59->tag = 21;
      _T59->f1 = n;
      _T2B = (struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct *)_T59;
    }_T2C = (void *)_T2B;
    return _T2C;
    _TL24: _T2D = s;
    _T2E = _tag_fat("noliveunique",sizeof(char),13U);
    _T2F = Cyc_zstrcmp(_T2D,_T2E);
    if (_T2F == 0) { goto _TL2A;
    }else { goto _TL2B;
    }
    _TL2B: _T30 = s;
    _T31 = _tag_fat("__noliveunique__",sizeof(char),17U);
    _T32 = Cyc_zstrcmp(_T30,_T31);
    if (_T32 == 0) { goto _TL2A;
    }else { goto _TL28;
    }
    _TL2A: { struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct));
      _T59->tag = 22;
      _T59->f1 = n;
      _T33 = (struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct *)_T59;
    }_T34 = (void *)_T33;
    return _T34;
    _TL28: _T35 = s;
    _T36 = _tag_fat("consume",sizeof(char),8U);
    _T37 = Cyc_zstrcmp(_T35,_T36);
    if (_T37 == 0) { goto _TL2E;
    }else { goto _TL2F;
    }
    _TL2F: _T38 = s;
    _T39 = _tag_fat("__consume__",sizeof(char),12U);
    _T3A = Cyc_zstrcmp(_T38,_T39);
    if (_T3A == 0) { goto _TL2E;
    }else { goto _TL2C;
    }
    _TL2E: { struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct));
      _T59->tag = 23;
      _T59->f1 = n;
      _T3B = (struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct *)_T59;
    }_T3C = (void *)_T3B;
    return _T3C;
    _TL2C: _T3D = s;
    _T3E = _tag_fat("alloc_size",sizeof(char),11U);
    _T3F = Cyc_zstrcmp(_T3D,_T3E);
    if (_T3F == 0) { goto _TL32;
    }else { goto _TL33;
    }
    _TL33: _T40 = s;
    _T41 = _tag_fat("__alloc_size__",sizeof(char),15U);
    _T42 = Cyc_zstrcmp(_T40,_T41);
    if (_T42 == 0) { goto _TL32;
    }else { goto _TL30;
    }
    _TL32: { struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct));
      _T59->tag = 34;
      _T59->f1 = n;
      _T59->f2 = 0;
      _T43 = (struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct *)_T59;
    }_T44 = (void *)_T43;
    return _T44;
    _TL30: _T45 = s;
    _T46 = _tag_fat("alloc_align",sizeof(char),12U);
    _T47 = Cyc_zstrcmp(_T45,_T46);
    if (_T47 == 0) { goto _TL36;
    }else { goto _TL37;
    }
    _TL37: _T48 = s;
    _T49 = _tag_fat("__alloc_align__",sizeof(char),16U);
    _T4A = Cyc_zstrcmp(_T48,_T49);
    if (_T4A == 0) { goto _TL36;
    }else { goto _TL34;
    }
    _TL36: { struct Cyc_Absyn_AllocAlign_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_AllocAlign_att_Absyn_Attribute_struct));
      _T59->tag = 35;
      _T59->f1 = n;
      _T4B = (struct Cyc_Absyn_AllocAlign_att_Absyn_Attribute_struct *)_T59;
    }_T4C = (void *)_T4B;
    return _T4C;
    _TL34: _T4D = s;
    _T4E = _tag_fat("vector_size",sizeof(char),12U);
    _T4F = Cyc_zstrcmp(_T4D,_T4E);
    if (_T4F == 0) { goto _TL3A;
    }else { goto _TL3B;
    }
    _TL3B: _T50 = s;
    _T51 = _tag_fat("__vector_size__",sizeof(char),16U);
    _T52 = Cyc_zstrcmp(_T50,_T51);
    if (_T52 == 0) { goto _TL3A;
    }else { goto _TL38;
    }
    _TL3A: { struct Cyc_Absyn_VectorSize_att_Absyn_Attribute_struct * _T59 = _cycalloc(sizeof(struct Cyc_Absyn_VectorSize_att_Absyn_Attribute_struct));
      _T59->tag = 38;
      _T59->f1 = n;
      _T53 = (struct Cyc_Absyn_VectorSize_att_Absyn_Attribute_struct *)_T59;
    }_T54 = (void *)_T53;
    return _T54;
    _TL38: _T55 = sloc;
    _T56 = _tag_fat("unrecognized attribute",sizeof(char),23U);
    _T57 = _tag_fat(0U,sizeof(void *),0);
    Cyc_Warn_err(_T55,_T56,_T57);
    _T58 = Cyc_Atts_bad_attribute(sloc);
    return _T58;
  }
}
void * Cyc_Atts_parse_binary_att(unsigned int sloc,struct _fat_ptr s,unsigned int u1,
				 unsigned int u2) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct * _T6;
  unsigned int _T7;
  unsigned int _T8;
  void * _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  void * _TD;
  _T0 = s;
  _T1 = _tag_fat("alloc_size",sizeof(char),11U);
  _T2 = Cyc_zstrcmp(_T0,_T1);
  if (_T2 == 0) { goto _TL3E;
  }else { goto _TL3F;
  }
  _TL3F: _T3 = s;
  _T4 = _tag_fat("__alloc_size__",sizeof(char),15U);
  _T5 = Cyc_zstrcmp(_T3,_T4);
  if (_T5 == 0) { goto _TL3E;
  }else { goto _TL3C;
  }
  _TL3E: { struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct * _TE = _cycalloc(sizeof(struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct));
    _TE->tag = 34;
    _T7 = u1;
    _TE->f1 = (int)_T7;
    _T8 = u2;
    _TE->f2 = (int)_T8;
    _T6 = (struct Cyc_Absyn_AllocSize_att_Absyn_Attribute_struct *)_TE;
  }_T9 = (void *)_T6;
  return _T9;
  _TL3C: _TA = sloc;
  _TB = _tag_fat("unrecognized attribute",sizeof(char),23U);
  _TC = _tag_fat(0U,sizeof(void *),0);
  Cyc_Warn_err(_TA,_TB,_TC);
  _TD = Cyc_Atts_bad_attribute(sloc);
  return _TD;
}
void * Cyc_Atts_parse_format_att(unsigned int loc,unsigned int s2loc,struct _fat_ptr s1,
				 struct _fat_ptr s2,unsigned int u1,unsigned int u2) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  int _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  int _TB;
  struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _TC;
  unsigned int _TD;
  unsigned int _TE;
  void * _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  int _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  int _T15;
  struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T16;
  unsigned int _T17;
  unsigned int _T18;
  void * _T19;
  unsigned int _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct * _T1D;
  struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct * _T1E;
  void * _T1F;
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  int _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  int _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  int _T28;
  struct _fat_ptr _T29;
  struct _fat_ptr _T2A;
  int _T2B;
  struct Cyc_Absyn_Access_att_Absyn_Attribute_struct * _T2C;
  unsigned int _T2D;
  unsigned int _T2E;
  void * _T2F;
  unsigned int _T30;
  struct _fat_ptr _T31;
  struct _fat_ptr _T32;
  struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct * _T33;
  struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct * _T34;
  void * _T35;
  void * _T36;
  _T0 = s1;
  _T1 = _tag_fat("format",sizeof(char),7U);
  _T2 = Cyc_zstrcmp(_T0,_T1);
  if (_T2 == 0) { goto _TL42;
  }else { goto _TL43;
  }
  _TL43: _T3 = s1;
  _T4 = _tag_fat("__format__",sizeof(char),11U);
  _T5 = Cyc_zstrcmp(_T3,_T4);
  if (_T5 == 0) { goto _TL42;
  }else { goto _TL40;
  }
  _TL42: _T6 = s2;
  _T7 = _tag_fat("printf",sizeof(char),7U);
  _T8 = Cyc_zstrcmp(_T6,_T7);
  if (_T8 == 0) { goto _TL46;
  }else { goto _TL47;
  }
  _TL47: _T9 = s2;
  _TA = _tag_fat("__printf__",sizeof(char),11U);
  _TB = Cyc_zstrcmp(_T9,_TA);
  if (_TB == 0) { goto _TL46;
  }else { goto _TL44;
  }
  _TL46: { struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T37 = _cycalloc(sizeof(struct Cyc_Absyn_Format_att_Absyn_Attribute_struct));
    _T37->tag = 20;
    _T37->f1 = 0U;
    _TD = u1;
    _T37->f2 = (int)_TD;
    _TE = u2;
    _T37->f3 = (int)_TE;
    _TC = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T37;
  }_TF = (void *)_TC;
  return _TF;
  _TL44: _T10 = s2;
  _T11 = _tag_fat("scanf",sizeof(char),6U);
  _T12 = Cyc_zstrcmp(_T10,_T11);
  if (_T12 == 0) { goto _TL4A;
  }else { goto _TL4B;
  }
  _TL4B: _T13 = s2;
  _T14 = _tag_fat("__scanf__",sizeof(char),10U);
  _T15 = Cyc_zstrcmp(_T13,_T14);
  if (_T15 == 0) { goto _TL4A;
  }else { goto _TL48;
  }
  _TL4A: { struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T37 = _cycalloc(sizeof(struct Cyc_Absyn_Format_att_Absyn_Attribute_struct));
    _T37->tag = 20;
    _T37->f1 = 1U;
    _T17 = u1;
    _T37->f2 = (int)_T17;
    _T18 = u2;
    _T37->f3 = (int)_T18;
    _T16 = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T37;
  }_T19 = (void *)_T16;
  return _T19;
  _TL48: _T1A = loc;
  _T1B = _tag_fat("unrecognized format type",sizeof(char),25U);
  _T1C = _tag_fat(0U,sizeof(void *),0);
  Cyc_Warn_err(_T1A,_T1B,_T1C);
  _T1D = &Cyc_Atts_Cdecl_att_val;
  _T1E = (struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct *)_T1D;
  _T1F = (void *)_T1E;
  return _T1F;
  _TL40: _T20 = s1;
  _T21 = _tag_fat("access",sizeof(char),7U);
  _T22 = Cyc_zstrcmp(_T20,_T21);
  if (_T22 == 0) { goto _TL4E;
  }else { goto _TL4F;
  }
  _TL4F: _T23 = s1;
  _T24 = _tag_fat("__access__",sizeof(char),11U);
  _T25 = Cyc_zstrcmp(_T23,_T24);
  if (_T25 == 0) { goto _TL4E;
  }else { goto _TL4C;
  }
  _TL4E: _T26 = s2;
  _T27 = _tag_fat("write_only",sizeof(char),11U);
  _T28 = Cyc_zstrcmp(_T26,_T27);
  if (_T28 == 0) { goto _TL52;
  }else { goto _TL53;
  }
  _TL53: _T29 = s2;
  _T2A = _tag_fat("__write_only__",sizeof(char),15U);
  _T2B = Cyc_zstrcmp(_T29,_T2A);
  if (_T2B == 0) { goto _TL52;
  }else { goto _TL50;
  }
  _TL52: { struct Cyc_Absyn_Access_att_Absyn_Attribute_struct * _T37 = _cycalloc(sizeof(struct Cyc_Absyn_Access_att_Absyn_Attribute_struct));
    _T37->tag = 32;
    _T37->f1 = 0U;
    _T2D = u1;
    _T37->f2 = (int)_T2D;
    _T2E = u2;
    _T37->f3 = (int)_T2E;
    _T2C = (struct Cyc_Absyn_Access_att_Absyn_Attribute_struct *)_T37;
  }_T2F = (void *)_T2C;
  return _T2F;
  _TL50: _T30 = loc;
  _T31 = _tag_fat("unrecognized access type",sizeof(char),25U);
  _T32 = _tag_fat(0U,sizeof(void *),0);
  Cyc_Warn_err(_T30,_T31,_T32);
  _T33 = &Cyc_Atts_Cdecl_att_val;
  _T34 = (struct Cyc_Absyn_Cdecl_att_Absyn_Attribute_struct *)_T33;
  _T35 = (void *)_T34;
  return _T35;
  _TL4C: _T36 = Cyc_Atts_bad_attribute(loc);
  return _T36;
}
long Cyc_Atts_is_noreturn_fn_type(void * t) {
  int * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_PtrInfo _T2;
  long _T3;
  struct Cyc_Absyn_FnInfo _T4;
  struct Cyc_List_List * _T5;
  int * _T6;
  int _T7;
  struct Cyc_List_List * _T8;
  void * _T9 = Cyc_Absyn_compress(t);
  struct Cyc_List_List * _TA;
  void * _TB;
  _T0 = (int *)_T9;
  _T1 = *_T0;
  switch (_T1) {
  case 4: 
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TC = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T9;
      _T2 = _TC->f1;
      _TB = _T2.elt_type;
    }{ void * elt = _TB;
      _T3 = Cyc_Atts_is_noreturn_fn_type(elt);
      return _T3;
    }
  case 6: 
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _TC = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T9;
      _T4 = _TC->f1;
      _TA = _T4.attributes;
    }{ struct Cyc_List_List * atts = _TA;
      _TL58: if (atts != 0) { goto _TL56;
      }else { goto _TL57;
      }
      _TL56: _T5 = atts;
      { void * _TC = _T5->hd;
	_T6 = (int *)_TC;
	_T7 = *_T6;
	if (_T7 != 4) { goto _TL59;
	}
	return 1;
	_TL59: goto _TL55;
	;
      }_TL55: _T8 = atts;
      atts = _T8->tl;
      goto _TL58;
      _TL57: return 0;
    }
  default: 
    return 0;
  }
  ;
}
long Cyc_Atts_same_atts(struct Cyc_List_List * a1,struct Cyc_List_List * a2) {
  long (* _T0)(void *,void *);
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  long _T4;
  struct Cyc_List_List * _T5;
  long (* _T6)(void *,void *);
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_List_List * _T9;
  long _TA;
  struct Cyc_List_List * _TB;
  { struct Cyc_List_List * a = a1;
    _TL5E: if (a != 0) { goto _TL5C;
    }else { goto _TL5D;
    }
    _TL5C: _T0 = Cyc_Atts_equal_att;
    _T1 = a;
    _T2 = _T1->hd;
    _T3 = a2;
    _T4 = Cyc_List_exists_c(_T0,_T2,_T3);
    if (_T4) { goto _TL5F;
    }else { goto _TL61;
    }
    _TL61: return 0;
    _TL5F: _T5 = a;
    a = _T5->tl;
    goto _TL5E;
    _TL5D: ;
  }{ struct Cyc_List_List * a = a2;
    _TL65: if (a != 0) { goto _TL63;
    }else { goto _TL64;
    }
    _TL63: _T6 = Cyc_Atts_equal_att;
    _T7 = a;
    _T8 = _T7->hd;
    _T9 = a1;
    _TA = Cyc_List_exists_c(_T6,_T8,_T9);
    if (_TA) { goto _TL66;
    }else { goto _TL68;
    }
    _TL68: return 0;
    _TL66: _TB = a;
    a = _TB->tl;
    goto _TL65;
    _TL64: ;
  }return 1;
}
static long Cyc_Atts_is_regparm0_att(void * a) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct * _T4;
  int _T5;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL69;
  }
  _T3 = a;
  _T4 = (struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct *)_T3;
  _T5 = _T4->f1;
  if (_T5 != 0) { goto _TL6B;
  }
  return 1;
  _TL6B: goto _LL3;
  _TL69: _LL3: return 0;
  ;
}
long Cyc_Atts_equiv_fn_atts(struct Cyc_List_List * a1,struct Cyc_List_List * a2) {
  long (* _T0)(void *,void *);
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  long _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  long _T7;
  struct Cyc_List_List * _T8;
  long (* _T9)(void *,void *);
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_List_List * _TC;
  long _TD;
  struct Cyc_List_List * _TE;
  void * _TF;
  long _T10;
  struct Cyc_List_List * _T11;
  { struct Cyc_List_List * a = a1;
    _TL70: if (a != 0) { goto _TL6E;
    }else { goto _TL6F;
    }
    _TL6E: _T0 = Cyc_Atts_equal_att;
    _T1 = a;
    _T2 = _T1->hd;
    _T3 = a2;
    _T4 = Cyc_List_exists_c(_T0,_T2,_T3);
    if (_T4) { goto _TL71;
    }else { goto _TL73;
    }
    _TL73: _T5 = a;
    _T6 = _T5->hd;
    _T7 = Cyc_Atts_is_regparm0_att(_T6);
    if (_T7) { goto _TL71;
    }else { goto _TL74;
    }
    _TL74: return 0;
    _TL71: _T8 = a;
    a = _T8->tl;
    goto _TL70;
    _TL6F: ;
  }{ struct Cyc_List_List * a = a2;
    _TL78: if (a != 0) { goto _TL76;
    }else { goto _TL77;
    }
    _TL76: _T9 = Cyc_Atts_equal_att;
    _TA = a;
    _TB = _TA->hd;
    _TC = a1;
    _TD = Cyc_List_exists_c(_T9,_TB,_TC);
    if (_TD) { goto _TL79;
    }else { goto _TL7B;
    }
    _TL7B: _TE = a;
    _TF = _TE->hd;
    _T10 = Cyc_Atts_is_regparm0_att(_TF);
    if (_T10) { goto _TL79;
    }else { goto _TL7C;
    }
    _TL7C: return 0;
    _TL79: _T11 = a;
    a = _T11->tl;
    goto _TL78;
    _TL77: ;
  }return 1;
}
struct Cyc_List_List * Cyc_Atts_transfer_fn_type_atts(void * t,struct Cyc_List_List * atts) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T2;
  struct Cyc_List_List * * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  long _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  int (* _T9)(void *,void *);
  struct Cyc_List_List * * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  long _TE;
  struct Cyc_List_List * * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  int (* _T16)(struct _fat_ptr);
  void * (* _T17)(struct _fat_ptr);
  struct _fat_ptr _T18;
  void * _T19 = Cyc_Absyn_compress(t);
  void * _T1A;
  _T0 = (int *)_T19;
  _T1 = *_T0;
  if (_T1 != 6) { goto _TL7D;
  }
  { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T1B = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T19;
    _T2 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T19;
    _T3 = &(_T2->f1).attributes;
    _T1A = (struct Cyc_List_List * *)_T3;
  }{ struct Cyc_List_List * * fnatts = (struct Cyc_List_List * *)_T1A;
    struct Cyc_List_List * res_atts = 0;
    _TL82: if (atts != 0) { goto _TL80;
    }else { goto _TL81;
    }
    _TL80: _T4 = atts;
    _T5 = _T4->hd;
    _T6 = Cyc_Atts_fntype_att(_T5);
    if (_T6) { goto _TL83;
    }else { goto _TL85;
    }
    _TL85: { struct Cyc_List_List * _T1B = _cycalloc(sizeof(struct Cyc_List_List));
      _T8 = atts;
      _T1B->hd = _T8->hd;
      _T1B->tl = res_atts;
      _T7 = (struct Cyc_List_List *)_T1B;
    }res_atts = _T7;
    goto _TL84;
    _TL83: _T9 = Cyc_Atts_attribute_cmp;
    _TA = fnatts;
    _TB = *_TA;
    _TC = atts;
    _TD = _TC->hd;
    _TE = Cyc_List_mem(_T9,_TB,_TD);
    if (_TE) { goto _TL86;
    }else { goto _TL88;
    }
    _TL88: _TF = fnatts;
    { struct Cyc_List_List * _T1B = _cycalloc(sizeof(struct Cyc_List_List));
      _T11 = atts;
      _T1B->hd = _T11->hd;
      _T12 = fnatts;
      _T1B->tl = *_T12;
      _T10 = (struct Cyc_List_List *)_T1B;
    }*_TF = _T10;
    goto _TL87;
    _TL86: _TL87: _TL84: _T13 = atts;
    atts = _T13->tl;
    goto _TL82;
    _TL81: _T14 = res_atts;
    return _T14;
  }_TL7D: { struct Cyc_Warn_String_Warn_Warg_struct _T1B;
    _T1B.tag = 0;
    _T1B.f1 = _tag_fat("transfer_fn_type_atts",sizeof(char),22U);
    _T15 = _T1B;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B = _T15;
    void * _T1C[1];
    _T1C[0] = &_T1B;
    _T17 = Cyc_Warn_impos2;
    { int (* _T1D)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T17;
      _T16 = _T1D;
    }_T18 = _tag_fat(_T1C,sizeof(void *),1);
    _T16(_T18);
  };
}
static long Cyc_Atts_fnTypeAttsRangeOK(unsigned int loc,int i,int nargs,void * att) {
  struct Cyc_Warn_Attribute_Warn_Warg_struct _T0;
  struct Cyc_Warn_String_Warn_Warg_struct _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  if (i < 1) { goto _TL8B;
  }else { goto _TL8C;
  }
  _TL8C: if (i > nargs) { goto _TL8B;
  }else { goto _TL89;
  }
  _TL8B: { struct Cyc_Warn_Attribute_Warn_Warg_struct _T4;
    _T4.tag = 10;
    _T4.f1 = att;
    _T0 = _T4;
  }{ struct Cyc_Warn_Attribute_Warn_Warg_struct _T4 = _T0;
    { struct Cyc_Warn_String_Warn_Warg_struct _T5;
      _T5.tag = 0;
      _T5.f1 = _tag_fat(" has an out-of-range index",sizeof(char),27U);
      _T1 = _T5;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T5 = _T1;
      void * _T6[2];
      _T6[0] = &_T4;
      _T6[1] = &_T5;
      _T2 = loc;
      _T3 = _tag_fat(_T6,sizeof(void *),2);
      Cyc_Warn_err2(_T2,_T3);
    }
  }return 0;
  _TL89: return 1;
}
 struct _tuple14 {
  struct Cyc_List_List * f0;
  struct _fat_ptr f1;
};
static void Cyc_Atts_fnTypeAttsOverlap(unsigned int loc,int i,struct _tuple14 lst1,
				       struct _tuple14 lst2) {
  long (* _T0)(struct Cyc_List_List *,int);
  long (* _T1)(struct Cyc_List_List *,void *);
  struct _tuple14 _T2;
  struct Cyc_List_List * _T3;
  int _T4;
  long _T5;
  struct Cyc_String_pa_PrintArg_struct _T6;
  struct _tuple14 _T7;
  struct Cyc_String_pa_PrintArg_struct _T8;
  struct _tuple14 _T9;
  struct Cyc_Int_pa_PrintArg_struct _TA;
  int _TB;
  unsigned int _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  _T1 = Cyc_List_memq;
  { long (* _TF)(struct Cyc_List_List *,int) = (long (*)(struct Cyc_List_List *,
							 int))_T1;
    _T0 = _TF;
  }_T2 = lst2;
  _T3 = _T2.f0;
  _T4 = i;
  _T5 = _T0(_T3,_T4);
  if (! _T5) { goto _TL8D;
  }
  { struct Cyc_String_pa_PrintArg_struct _TF;
    _TF.tag = 0;
    _T7 = lst1;
    _TF.f1 = _T7.f1;
    _T6 = _TF;
  }{ struct Cyc_String_pa_PrintArg_struct _TF = _T6;
    { struct Cyc_String_pa_PrintArg_struct _T10;
      _T10.tag = 0;
      _T9 = lst2;
      _T10.f1 = _T9.f1;
      _T8 = _T10;
    }{ struct Cyc_String_pa_PrintArg_struct _T10 = _T8;
      { struct Cyc_Int_pa_PrintArg_struct _T11;
	_T11.tag = 1;
	_TB = i;
	_T11.f1 = (unsigned long)_TB;
	_TA = _T11;
      }{ struct Cyc_Int_pa_PrintArg_struct _T11 = _TA;
	void * _T12[3];
	_T12[0] = &_TF;
	_T12[1] = &_T10;
	_T12[2] = &_T11;
	_TC = loc;
	_TD = _tag_fat("incompatible %s() and %s() attributes on parameter %d",
		       sizeof(char),54U);
	_TE = _tag_fat(_T12,sizeof(void *),3);
	Cyc_Warn_err(_TC,_TD,_TE);
      }
    }
  }goto _TL8E;
  _TL8D: _TL8E: ;
}
void Cyc_Atts_fnTypeAttsOK(unsigned int loc,void * t) {
  struct _tuple14 _T0;
  struct _tuple14 _T1;
  struct _tuple14 _T2;
  int * _T3;
  int _T4;
  struct Cyc_Absyn_FnInfo _T5;
  struct Cyc_Absyn_FnInfo _T6;
  struct Cyc_Absyn_FnInfo _T7;
  struct Cyc_List_List * _T8;
  int * _T9;
  unsigned int _TA;
  unsigned int _TB;
  int _TC;
  int _TD;
  struct Cyc_List_List * _TE;
  void * _TF;
  long _T10;
  struct _tuple8 * (* _T11)(struct Cyc_List_List *,int);
  void * (* _T12)(struct Cyc_List_List *,int);
  struct Cyc_List_List * _T13;
  int _T14;
  struct _tuple8 * _T15;
  struct _tuple8 _T16;
  void * _T17;
  int * _T18;
  int _T19;
  struct Cyc_Absyn_PtrInfo _T1A;
  struct Cyc_Absyn_PtrAtts _T1B;
  struct Cyc_Absyn_PtrInfo _T1C;
  struct Cyc_Absyn_PtrAtts _T1D;
  struct Cyc_Absyn_PtrInfo _T1E;
  struct Cyc_Absyn_PtrAtts _T1F;
  long _T20;
  struct Cyc_Warn_String_Warn_Warg_struct _T21;
  struct Cyc_Warn_String_Warn_Warg_struct _T22;
  unsigned int _T23;
  struct _fat_ptr _T24;
  long _T25;
  struct Cyc_Warn_String_Warn_Warg_struct _T26;
  struct Cyc_Warn_String_Warn_Warg_struct _T27;
  unsigned int _T28;
  struct _fat_ptr _T29;
  long _T2A;
  struct Cyc_Warn_String_Warn_Warg_struct _T2B;
  struct Cyc_Warn_String_Warn_Warg_struct _T2C;
  unsigned int _T2D;
  struct _fat_ptr _T2E;
  struct Cyc_Warn_String_Warn_Warg_struct _T2F;
  struct Cyc_Warn_String_Warn_Warg_struct _T30;
  unsigned int _T31;
  struct _fat_ptr _T32;
  struct Cyc_List_List * _T33;
  int _T34;
  struct _tuple14 _T35;
  unsigned int _T36;
  int _T37;
  int _T38;
  struct Cyc_List_List * _T39;
  void * _T3A;
  long _T3B;
  struct _tuple8 * (* _T3C)(struct Cyc_List_List *,int);
  void * (* _T3D)(struct Cyc_List_List *,int);
  struct Cyc_List_List * _T3E;
  int _T3F;
  long _T40;
  struct Cyc_Warn_String_Warn_Warg_struct _T41;
  unsigned int _T42;
  struct _fat_ptr _T43;
  struct Cyc_List_List * _T44;
  int _T45;
  struct _tuple14 _T46;
  unsigned int _T47;
  int _T48;
  int _T49;
  struct Cyc_List_List * _T4A;
  void * _T4B;
  long _T4C;
  struct _tuple8 * (* _T4D)(struct Cyc_List_List *,int);
  void * (* _T4E)(struct Cyc_List_List *,int);
  struct Cyc_List_List * _T4F;
  int _T50;
  long _T51;
  struct Cyc_Warn_String_Warn_Warg_struct _T52;
  unsigned int _T53;
  struct _fat_ptr _T54;
  struct Cyc_List_List * _T55;
  int _T56;
  struct _tuple14 _T57;
  struct Cyc_List_List * _T58;
  struct Cyc_Warn_String_Warn_Warg_struct _T59;
  int (* _T5A)(struct _fat_ptr);
  void * (* _T5B)(struct _fat_ptr);
  struct _fat_ptr _T5C;
  { struct _tuple14 _T5D;
    _T5D.f0 = 0;
    _T5D.f1 = _tag_fat("initializes",sizeof(char),12U);
    _T0 = _T5D;
  }{ struct _tuple14 init_params = _T0;
    { struct _tuple14 _T5D;
      _T5D.f0 = 0;
      _T5D.f1 = _tag_fat("noliveunique",sizeof(char),13U);
      _T1 = _T5D;
    }{ struct _tuple14 nolive_unique_params = _T1;
      { struct _tuple14 _T5D;
	_T5D.f0 = 0;
	_T5D.f1 = _tag_fat("consume",sizeof(char),8U);
	_T2 = _T5D;
      }{ struct _tuple14 consume_params = _T2;
	void * _T5D = Cyc_Absyn_compress(t);
	struct Cyc_List_List * _T5E;
	struct Cyc_List_List * _T5F;
	struct Cyc_List_List * _T60;
	_T3 = (int *)_T5D;
	_T4 = *_T3;
	if (_T4 != 6) { goto _TL8F;
	}
	{ struct Cyc_Absyn_FnType_Absyn_Type_struct * _T61 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T5D;
	  _T5 = _T61->f1;
	  _T60 = _T5.attributes;
	  _T6 = _T61->f1;
	  _T5F = _T6.args;
	  _T7 = _T61->f1;
	  _T5E = _T7.qual_bnd;
	}{ struct Cyc_List_List * atts = _T60;
	  struct Cyc_List_List * args = _T5F;
	  struct Cyc_List_List * aqb = _T5E;
	  int nargs = Cyc_List_length(args);
	  _TL94: if (atts != 0) { goto _TL92;
	  }else { goto _TL93;
	  }
	  _TL92: _T8 = atts;
	  { void * _T61 = _T8->hd;
	    int _T62;
	    _T9 = (int *)_T61;
	    _TA = *_T9;
	    switch (_TA) {
	    case 21: 
	      { struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct * _T63 = (struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct *)_T61;
		_T62 = _T63->f1;
	      }{ int i = _T62;
		_TB = loc;
		_TC = i;
		_TD = nargs;
		_TE = atts;
		_TF = _TE->hd;
		_T10 = Cyc_Atts_fnTypeAttsRangeOK(_TB,_TC,_TD,_TF);
		if (_T10) { goto _TL96;
		}else { goto _TL98;
		}
		_TL98: goto _LL5;
		_TL96: Cyc_Atts_fnTypeAttsOverlap(loc,i,init_params,nolive_unique_params);
		Cyc_Atts_fnTypeAttsOverlap(loc,i,init_params,consume_params);
		{ struct _fat_ptr s = _tag_fat("initializes attribute allowed only on",
					       sizeof(char),38U);
		  _T12 = Cyc_List_nth;
		  { struct _tuple8 * (* _T63)(struct Cyc_List_List *,int) = (struct _tuple8 * (*)(struct Cyc_List_List *,
												  int))_T12;
		    _T11 = _T63;
		  }_T13 = args;
		  _T14 = i - 1;
		  _T15 = _T11(_T13,_T14);
		  _T16 = *_T15;
		  _T17 = _T16.f2;
		  { void * _T63 = Cyc_Absyn_compress(_T17);
		    void * _T64;
		    void * _T65;
		    void * _T66;
		    _T18 = (int *)_T63;
		    _T19 = *_T18;
		    if (_T19 != 4) { goto _TL99;
		    }
		    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T67 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T63;
		      _T1A = _T67->f1;
		      _T1B = _T1A.ptr_atts;
		      _T66 = _T1B.nullable;
		      _T1C = _T67->f1;
		      _T1D = _T1C.ptr_atts;
		      _T65 = _T1D.bounds;
		      _T1E = _T67->f1;
		      _T1F = _T1E.ptr_atts;
		      _T64 = _T1F.zero_term;
		    }{ void * nullable = _T66;
		      void * bd = _T65;
		      void * zt = _T64;
		      _T20 = Cyc_Tcutil_force_type2bool(0,nullable);
		      if (! _T20) { goto _TL9B;
		      }
		      { struct Cyc_Warn_String_Warn_Warg_struct _T67;
			_T67.tag = 0;
			_T67.f1 = s;
			_T21 = _T67;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T67 = _T21;
			{ struct Cyc_Warn_String_Warn_Warg_struct _T68;
			  _T68.tag = 0;
			  _T68.f1 = _tag_fat(" non-null pointers",sizeof(char),
					     19U);
			  _T22 = _T68;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T68 = _T22;
			  void * _T69[2];
			  _T69[0] = &_T67;
			  _T69[1] = &_T68;
			  _T23 = loc;
			  _T24 = _tag_fat(_T69,sizeof(void *),2);
			  Cyc_Warn_err2(_T23,_T24);
			}
		      }goto _TL9C;
		      _TL9B: _TL9C: _T25 = Cyc_Tcutil_is_bound_one(bd,1);
		      if (_T25) { goto _TL9D;
		      }else { goto _TL9F;
		      }
		      _TL9F: { struct Cyc_Warn_String_Warn_Warg_struct _T67;
			_T67.tag = 0;
			_T67.f1 = s;
			_T26 = _T67;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T67 = _T26;
			{ struct Cyc_Warn_String_Warn_Warg_struct _T68;
			  _T68.tag = 0;
			  _T68.f1 = _tag_fat(" pointers of size 1",sizeof(char),
					     20U);
			  _T27 = _T68;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T68 = _T27;
			  void * _T69[2];
			  _T69[0] = &_T67;
			  _T69[1] = &_T68;
			  _T28 = loc;
			  _T29 = _tag_fat(_T69,sizeof(void *),2);
			  Cyc_Warn_err2(_T28,_T29);
			}
		      }goto _TL9E;
		      _TL9D: _TL9E: _T2A = Cyc_Tcutil_force_type2bool(0,zt);
		      if (! _T2A) { goto _TLA0;
		      }
		      { struct Cyc_Warn_String_Warn_Warg_struct _T67;
			_T67.tag = 0;
			_T67.f1 = s;
			_T2B = _T67;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T67 = _T2B;
			{ struct Cyc_Warn_String_Warn_Warg_struct _T68;
			  _T68.tag = 0;
			  _T68.f1 = _tag_fat(" pointers to non-zero-terminated arrays",
					     sizeof(char),40U);
			  _T2C = _T68;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T68 = _T2C;
			  void * _T69[2];
			  _T69[0] = &_T67;
			  _T69[1] = &_T68;
			  _T2D = loc;
			  _T2E = _tag_fat(_T69,sizeof(void *),2);
			  Cyc_Warn_err2(_T2D,_T2E);
			}
		      }goto _TLA1;
		      _TLA0: _TLA1: goto _LLE;
		    }_TL99: { struct Cyc_Warn_String_Warn_Warg_struct _T67;
		      _T67.tag = 0;
		      _T67.f1 = s;
		      _T2F = _T67;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T67 = _T2F;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T68;
			_T68.tag = 0;
			_T68.f1 = _tag_fat(" pointers",sizeof(char),10U);
			_T30 = _T68;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T68 = _T30;
			void * _T69[2];
			_T69[0] = &_T67;
			_T69[1] = &_T68;
			_T31 = loc;
			_T32 = _tag_fat(_T69,sizeof(void *),2);
			Cyc_Warn_err2(_T31,_T32);
		      }
		    }_LLE: ;
		  }{ struct Cyc_List_List * _T63 = _cycalloc(sizeof(struct Cyc_List_List));
		    _T34 = i;
		    _T63->hd = (void *)_T34;
		    _T35 = init_params;
		    _T63->tl = _T35.f0;
		    _T33 = (struct Cyc_List_List *)_T63;
		  }init_params.f0 = _T33;
		  goto _LL5;
		}
	      }
	    case 22: 
	      { struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct * _T63 = (struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct *)_T61;
		_T62 = _T63->f1;
	      }{ int i = _T62;
		_T36 = loc;
		_T37 = i;
		_T38 = nargs;
		_T39 = atts;
		_T3A = _T39->hd;
		_T3B = Cyc_Atts_fnTypeAttsRangeOK(_T36,_T37,_T38,_T3A);
		if (_T3B) { goto _TLA2;
		}else { goto _TLA4;
		}
		_TLA4: goto _LL5;
		_TLA2: Cyc_Atts_fnTypeAttsOverlap(loc,i,nolive_unique_params,
						  init_params);
		_T3D = Cyc_List_nth;
		{ struct _tuple8 * (* _T63)(struct Cyc_List_List *,int) = (struct _tuple8 * (*)(struct Cyc_List_List *,
												int))_T3D;
		  _T3C = _T63;
		}_T3E = args;
		_T3F = i - 1;
		{ struct _tuple8 * _T63 = _T3C(_T3E,_T3F);
		  void * _T64;
		  { struct _tuple8 _T65 = *_T63;
		    _T64 = _T65.f2;
		  }{ void * t = _T64;
		    _T40 = Cyc_Tcutil_is_noalias_pointer(aqb,t,0);
		    if (_T40) { goto _TLA5;
		    }else { goto _TLA7;
		    }
		    _TLA7: { struct Cyc_Warn_String_Warn_Warg_struct _T65;
		      _T65.tag = 0;
		      _T65.f1 = _tag_fat("noliveunique allowed only on unique pointers",
					 sizeof(char),45U);
		      _T41 = _T65;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T65 = _T41;
		      void * _T66[1];
		      _T66[0] = &_T65;
		      _T42 = loc;
		      _T43 = _tag_fat(_T66,sizeof(void *),1);
		      Cyc_Warn_err2(_T42,_T43);
		    }goto _TLA6;
		    _TLA5: _TLA6: { struct Cyc_List_List * _T65 = _cycalloc(sizeof(struct Cyc_List_List));
		      _T45 = i;
		      _T65->hd = (void *)_T45;
		      _T46 = nolive_unique_params;
		      _T65->tl = _T46.f0;
		      _T44 = (struct Cyc_List_List *)_T65;
		    }nolive_unique_params.f0 = _T44;
		    goto _LL5;
		  }
		}
	      }
	    case 23: 
	      { struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct * _T63 = (struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct *)_T61;
		_T62 = _T63->f1;
	      }{ int i = _T62;
		_T47 = loc;
		_T48 = i;
		_T49 = nargs;
		_T4A = atts;
		_T4B = _T4A->hd;
		_T4C = Cyc_Atts_fnTypeAttsRangeOK(_T47,_T48,_T49,_T4B);
		if (_T4C) { goto _TLA8;
		}else { goto _TLAA;
		}
		_TLAA: goto _LL5;
		_TLA8: Cyc_Atts_fnTypeAttsOverlap(loc,i,consume_params,init_params);
		_T4E = Cyc_List_nth;
		{ struct _tuple8 * (* _T63)(struct Cyc_List_List *,int) = (struct _tuple8 * (*)(struct Cyc_List_List *,
												int))_T4E;
		  _T4D = _T63;
		}_T4F = args;
		_T50 = i - 1;
		{ struct _tuple8 * _T63 = _T4D(_T4F,_T50);
		  void * _T64;
		  { struct _tuple8 _T65 = *_T63;
		    _T64 = _T65.f2;
		  }{ void * t = _T64;
		    _T51 = Cyc_Tcutil_is_noalias_pointer(aqb,t,0);
		    if (_T51) { goto _TLAB;
		    }else { goto _TLAD;
		    }
		    _TLAD: { struct Cyc_Warn_String_Warn_Warg_struct _T65;
		      _T65.tag = 0;
		      _T65.f1 = _tag_fat("consume allowed only on unique pointers",
					 sizeof(char),40U);
		      _T52 = _T65;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T65 = _T52;
		      void * _T66[1];
		      _T66[0] = &_T65;
		      _T53 = loc;
		      _T54 = _tag_fat(_T66,sizeof(void *),1);
		      Cyc_Warn_err2(_T53,_T54);
		    }goto _TLAC;
		    _TLAB: _TLAC: { struct Cyc_List_List * _T65 = _cycalloc(sizeof(struct Cyc_List_List));
		      _T56 = i;
		      _T65->hd = (void *)_T56;
		      _T57 = consume_params;
		      _T65->tl = _T57.f0;
		      _T55 = (struct Cyc_List_List *)_T65;
		    }consume_params.f0 = _T55;
		    goto _LL5;
		  }
		}
	      }
	    default: 
	      goto _LL5;
	    }
	    _LL5: ;
	  }_T58 = atts;
	  atts = _T58->tl;
	  goto _TL94;
	  _TL93: goto _LL0;
	}_TL8F: { struct Cyc_Warn_String_Warn_Warg_struct _T61;
	  _T61.tag = 0;
	  _T61.f1 = _tag_fat("fnTypeAttsOK: not a function type",sizeof(char),
			     34U);
	  _T59 = _T61;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T61 = _T59;
	  void * _T62[1];
	  _T62[0] = &_T61;
	  _T5B = Cyc_Warn_impos2;
	  { int (* _T63)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T5B;
	    _T5A = _T63;
	  }_T5C = _tag_fat(_T62,sizeof(void *),1);
	  _T5A(_T5C);
	}_LL0: ;
      }
    }
  }
}
long Cyc_Atts_sub_attributes(struct Cyc_List_List * a1,struct Cyc_List_List * a2) {
  struct Cyc_List_List * _T0;
  int * _T1;
  unsigned int _T2;
  long (* _T3)(void *,void *);
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  long _T7;
  struct Cyc_List_List * _T8;
  long (* _T9)(void *,void *);
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_List_List * _TC;
  long _TD;
  struct Cyc_List_List * _TE;
  int * _TF;
  int _T10;
  struct Cyc_List_List * _T11;
  { struct Cyc_List_List * t = a1;
    _TLB1: if (t != 0) { goto _TLAF;
    }else { goto _TLB0;
    }
    _TLAF: _T0 = t;
    { void * _T12 = _T0->hd;
      _T1 = (int *)_T12;
      _T2 = *_T1;
      switch (_T2) {
      case 24: 
	goto _LL4;
      case 4: 
	_LL4: goto _LL6;
      case 21: 
	_LL6: goto _TLAE;
      default: 
	_T3 = Cyc_Atts_equal_att;
	_T4 = t;
	_T5 = _T4->hd;
	_T6 = a2;
	_T7 = Cyc_List_exists_c(_T3,_T5,_T6);
	if (_T7) { goto _TLB3;
	}else { goto _TLB5;
	}
	_TLB5: return 0;
	_TLB3: ;
      }
      ;
    }_TLAE: _T8 = t;
    t = _T8->tl;
    goto _TLB1;
    _TLB0: ;
  }_TLB9: if (a2 != 0) { goto _TLB7;
  }else { goto _TLB8;
  }
  _TLB7: _T9 = Cyc_Atts_equal_att;
  _TA = a2;
  _TB = _TA->hd;
  _TC = a1;
  _TD = Cyc_List_exists_c(_T9,_TB,_TC);
  if (_TD) { goto _TLBA;
  }else { goto _TLBC;
  }
  _TLBC: _TE = a2;
  { void * _T12 = _TE->hd;
    _TF = (int *)_T12;
    _T10 = *_TF;
    if (_T10 != 23) { goto _TLBD;
    }
    goto _LL9;
    _TLBD: return 0;
    _LL9: ;
  }goto _TLBB;
  _TLBA: _TLBB: _T11 = a2;
  a2 = _T11->tl;
  goto _TLB9;
  _TLB8: return 1;
}
static int Cyc_Atts_attribute_case_number(void * att) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  _T0 = att;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    return 0;
  case 1: 
    return 1;
  case 2: 
    return 2;
  case 3: 
    return 3;
  case 4: 
    return 4;
  case 5: 
    return 5;
  case 6: 
    return 6;
  case 7: 
    return 7;
  case 8: 
    return 8;
  case 9: 
    return 9;
  case 10: 
    return 10;
  case 11: 
    return 11;
  case 12: 
    return 12;
  case 13: 
    return 13;
  case 14: 
    return 14;
  case 15: 
    return 15;
  case 16: 
    return 16;
  case 17: 
    return 17;
  case 18: 
    return 18;
  case 19: 
    return 19;
  case 20: 
    return 20;
  case 21: 
    return 21;
  case 22: 
    return 22;
  case 23: 
    return 23;
  case 24: 
    return 24;
  case 25: 
    return 25;
  case 26: 
    return 26;
  case 27: 
    return 27;
  case 28: 
    return 28;
  case 29: 
    return 29;
  case 30: 
    return 30;
  case 31: 
    return 31;
  case 32: 
    return 32;
  case 33: 
    return 33;
  case 34: 
    return 34;
  case 35: 
    return 35;
  case 36: 
    return 36;
  case 37: 
    return 37;
  default: 
    return 38;
  }
  ;
}
 struct _tuple15 {
  void * f0;
  void * f1;
};
int Cyc_Atts_attribute_cmp(void * att1,void * att2) {
  struct _tuple15 _T0;
  void * _T1;
  int * _T2;
  unsigned int _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  void * _T8;
  void * _T9;
  int * _TA;
  int _TB;
  void * _TC;
  void * _TD;
  int _TE;
  void * _TF;
  int * _T10;
  int _T11;
  void * _T12;
  void * _T13;
  int _T14;
  int _T15;
  void * _T16;
  int * _T17;
  int _T18;
  void * _T19;
  void * _T1A;
  int _T1B;
  void * _T1C;
  int * _T1D;
  int _T1E;
  void * _T1F;
  void * _T20;
  enum Cyc_Absyn_Format_Type _T21;
  unsigned int _T22;
  int _T23;
  enum Cyc_Absyn_Format_Type _T24;
  unsigned int _T25;
  int _T26;
  int _T27;
  int _T28;
  int _T29;
  int _T2A;
  int _T2B;
  int _T2C;
  { struct _tuple15 _T2D;
    _T2D.f0 = att1;
    _T2D.f1 = att2;
    _T0 = _T2D;
  }{ struct _tuple15 _T2D = _T0;
    int _T2E;
    int _T2F;
    enum Cyc_Absyn_Format_Type _T30;
    enum Cyc_Absyn_Format_Type _T31;
    struct _fat_ptr _T32;
    struct _fat_ptr _T33;
    struct Cyc_Absyn_Exp * _T34;
    struct Cyc_Absyn_Exp * _T35;
    int _T36;
    int _T37;
    _T1 = _T2D.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    switch (_T3) {
    case 0: 
      _T4 = _T2D.f1;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      if (_T6 != 0) { goto _TLC1;
      }
      _T7 = _T2D.f0;
      { struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct *)_T7;
	_T37 = _T38->f1;
      }_T8 = _T2D.f1;
      { struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct *)_T8;
	_T36 = _T38->f1;
      }{ int i1 = _T37;
	int i2 = _T36;
	_T37 = i1;
	_T36 = i2;
	goto _LL4;
      }_TLC1: goto _LLB;
    case 21: 
      _T9 = _T2D.f1;
      _TA = (int *)_T9;
      _TB = *_TA;
      if (_TB != 21) { goto _TLC3;
      }
      _TC = _T2D.f0;
      { struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct *)_TC;
	_T37 = _T38->f1;
      }_TD = _T2D.f1;
      { struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct *)_TD;
	_T36 = _T38->f1;
      }_LL4: { int i1 = _T37;
	int i2 = _T36;
	_TE = Cyc_Core_intcmp(i1,i2);
	return _TE;
      }_TLC3: goto _LLB;
    case 7: 
      _TF = _T2D.f1;
      _T10 = (int *)_TF;
      _T11 = *_T10;
      if (_T11 != 7) { goto _TLC5;
      }
      _T12 = _T2D.f0;
      { struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct *)_T12;
	_T35 = _T38->f1;
      }_T13 = _T2D.f1;
      { struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct *)_T13;
	_T34 = _T38->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T35;
	struct Cyc_Absyn_Exp * e2 = _T34;
	if (e1 != e2) { goto _TLC7;
	}
	return 0;
	_TLC7: if (e1 != 0) { goto _TLC9;
	}
	_T14 = - 1;
	return _T14;
	_TLC9: if (e2 != 0) { goto _TLCB;
	}
	return 1;
	_TLCB: _T15 = Cyc_Evexp_exp_cmp(e1,e2);
	return _T15;
      }_TLC5: goto _LLB;
    case 9: 
      _T16 = _T2D.f1;
      _T17 = (int *)_T16;
      _T18 = *_T17;
      if (_T18 != 9) { goto _TLCD;
      }
      _T19 = _T2D.f0;
      { struct Cyc_Absyn_Section_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Section_att_Absyn_Attribute_struct *)_T19;
	_T33 = _T38->f1;
      }_T1A = _T2D.f1;
      { struct Cyc_Absyn_Section_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Section_att_Absyn_Attribute_struct *)_T1A;
	_T32 = _T38->f1;
      }{ struct _fat_ptr s1 = _T33;
	struct _fat_ptr s2 = _T32;
	_T1B = Cyc_strcmp(s1,s2);
	return _T1B;
      }_TLCD: goto _LLB;
    case 20: 
      _T1C = _T2D.f1;
      _T1D = (int *)_T1C;
      _T1E = *_T1D;
      if (_T1E != 20) { goto _TLCF;
      }
      _T1F = _T2D.f0;
      { struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T1F;
	_T31 = _T38->f1;
	_T37 = _T38->f2;
	_T36 = _T38->f3;
      }_T20 = _T2D.f1;
      { struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T38 = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T20;
	_T30 = _T38->f1;
	_T2F = _T38->f2;
	_T2E = _T38->f3;
      }{ enum Cyc_Absyn_Format_Type ft1 = _T31;
	int i1 = _T37;
	int j1 = _T36;
	enum Cyc_Absyn_Format_Type ft2 = _T30;
	int i2 = _T2F;
	int j2 = _T2E;
	_T21 = ft1;
	_T22 = (unsigned int)_T21;
	_T23 = (int)_T22;
	_T24 = ft2;
	_T25 = (unsigned int)_T24;
	_T26 = (int)_T25;
	{ int ftc = Cyc_Core_intcmp(_T23,_T26);
	  if (ftc == 0) { goto _TLD1;
	  }
	  _T27 = ftc;
	  return _T27;
	  _TLD1: { int ic = Cyc_Core_intcmp(i1,i2);
	    if (ic == 0) { goto _TLD3;
	    }
	    _T28 = ic;
	    return _T28;
	    _TLD3: _T29 = Cyc_Core_intcmp(j1,j2);
	    return _T29;
	  }
	}
      }_TLCF: goto _LLB;
    default: 
      _LLB: _T2A = Cyc_Atts_attribute_case_number(att1);
      _T2B = Cyc_Atts_attribute_case_number(att2);
      _T2C = Cyc_Core_intcmp(_T2A,_T2B);
      return _T2C;
    }
    ;
  }
}
long Cyc_Atts_equal_att(void * a1,void * a2) {
  int _T0;
  int _T1;
  _T0 = Cyc_Atts_attribute_cmp(a1,a2);
  _T1 = _T0 == 0;
  return _T1;
}
long Cyc_Atts_fntype_att(void * a) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  int _T4;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = a;
    { struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct * _T5 = (struct Cyc_Absyn_Regparm_att_Absyn_Attribute_struct *)_T3;
      _T4 = _T5->f1;
    }{ int i = _T4;
      goto _LL4;
    }
  case 3: 
    _LL4: goto _LL6;
  case 1: 
    _LL6: goto _LL8;
  case 2: 
    _LL8: goto _LLA;
  case 4: 
    _LLA: goto _LLC;
  case 24: 
    _LLC: goto _LLE;
  case 27: 
    _LLE: goto _LL10;
  case 20: 
    _LL10: goto _LL12;
  case 5: 
    _LL12: goto _LL14;
  case 6: 
    _LL14: goto _LL16;
  case 22: 
    _LL16: goto _LL18;
  case 21: 
    _LL18: goto _LL1A;
  case 23: 
    _LL1A: goto _LL1C;
  case 28: 
    _LL1C: goto _LL1E;
  case 29: 
    _LL1E: goto _LL20;
  case 30: 
    _LL20: goto _LL22;
  case 31: 
    _LL22: goto _LL24;
  case 33: 
    _LL24: return 1;
  default: 
    return 0;
  }
  ;
}
void Cyc_Atts_check_fndecl_atts(unsigned int loc,struct Cyc_List_List * atts,
				long is_defn) {
  struct Cyc_List_List * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  struct Cyc_Warn_Attribute_Warn_Warg_struct _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_Warn_String_Warn_Warg_struct _T6;
  unsigned int _T7;
  struct _fat_ptr _T8;
  long _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  long _TC;
  struct Cyc_Warn_String_Warn_Warg_struct _TD;
  int (* _TE)(struct _fat_ptr);
  void * (* _TF)(struct _fat_ptr);
  struct _fat_ptr _T10;
  struct Cyc_List_List * _T11;
  _TLD9: if (atts != 0) { goto _TLD7;
  }else { goto _TLD8;
  }
  _TLD7: _T0 = atts;
  { void * _T12 = _T0->hd;
    _T1 = (int *)_T12;
    _T2 = *_T1;
    switch (_T2) {
    case 7: 
      goto _LL4;
    case 8: 
      _LL4: { struct Cyc_Warn_String_Warn_Warg_struct _T13;
	_T13.tag = 0;
	_T13.f1 = _tag_fat("bad attribute ",sizeof(char),15U);
	_T3 = _T13;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T13 = _T3;
	{ struct Cyc_Warn_Attribute_Warn_Warg_struct _T14;
	  _T14.tag = 10;
	  _T5 = atts;
	  _T14.f1 = _T5->hd;
	  _T4 = _T14;
	}{ struct Cyc_Warn_Attribute_Warn_Warg_struct _T14 = _T4;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T15;
	    _T15.tag = 0;
	    _T15.f1 = _tag_fat(" in function declaration",sizeof(char),25U);
	    _T6 = _T15;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T15 = _T6;
	    void * _T16[3];
	    _T16[0] = &_T13;
	    _T16[1] = &_T14;
	    _T16[2] = &_T15;
	    _T7 = loc;
	    _T8 = _tag_fat(_T16,sizeof(void *),3);
	    Cyc_Warn_err2(_T7,_T8);
	  }
	}
      }return;
    default: 
      _T9 = is_defn;
      if (_T9) { goto _TLDB;
      }else { goto _TLDD;
      }
      _TLDD: _TA = atts;
      _TB = _TA->hd;
      _TC = Cyc_Atts_fntype_att(_TB);
      if (! _TC) { goto _TLDB;
      }
      { struct Cyc_Warn_String_Warn_Warg_struct _T13;
	_T13.tag = 0;
	_T13.f1 = _tag_fat("function-type att in function variable declaration",
			   sizeof(char),51U);
	_TD = _T13;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T13 = _TD;
	void * _T14[1];
	_T14[0] = &_T13;
	_TF = Cyc_Warn_impos2;
	{ int (* _T15)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_TF;
	  _TE = _T15;
	}_T10 = _tag_fat(_T14,sizeof(void *),1);
	_TE(_T10);
      }goto _TLDC;
      _TLDB: _TLDC: ;
    }
    ;
  }_T11 = atts;
  atts = _T11->tl;
  goto _TLD9;
  _TLD8: ;
}
void Cyc_Atts_check_variable_atts(unsigned int loc,struct Cyc_Absyn_Vardecl * vd,
				  struct Cyc_List_List * atts) {
  struct Cyc_List_List * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  struct Cyc_Warn_Attribute_Warn_Warg_struct _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_Warn_String_Warn_Warg_struct _T6;
  struct Cyc_Warn_Vardecl_Warn_Warg_struct _T7;
  unsigned int _T8;
  struct _fat_ptr _T9;
  struct Cyc_List_List * _TA;
  _TLE1: if (atts != 0) { goto _TLDF;
  }else { goto _TLE0;
  }
  _TLDF: _T0 = atts;
  { void * _TB = _T0->hd;
    _T1 = (int *)_TB;
    _T2 = *_T1;
    switch (_T2) {
    case 7: 
      goto _LL4;
    case 9: 
      _LL4: goto _LL6;
    case 10: 
      _LL6: goto _LL8;
    case 11: 
      _LL8: goto _LLA;
    case 12: 
      _LLA: goto _LLC;
    case 13: 
      _LLC: goto _LLE;
    case 14: 
      _LLE: goto _LL10;
    case 15: 
      _LL10: goto _TLDE;
    default: 
      { struct Cyc_Warn_String_Warn_Warg_struct _TC;
	_TC.tag = 0;
	_TC.f1 = _tag_fat("bad attribute ",sizeof(char),15U);
	_T3 = _TC;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TC = _T3;
	{ struct Cyc_Warn_Attribute_Warn_Warg_struct _TD;
	  _TD.tag = 10;
	  _T5 = atts;
	  _TD.f1 = _T5->hd;
	  _T4 = _TD;
	}{ struct Cyc_Warn_Attribute_Warn_Warg_struct _TD = _T4;
	  { struct Cyc_Warn_String_Warn_Warg_struct _TE;
	    _TE.tag = 0;
	    _TE.f1 = _tag_fat(" for variable ",sizeof(char),15U);
	    _T6 = _TE;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TE = _T6;
	    { struct Cyc_Warn_Vardecl_Warn_Warg_struct _TF;
	      _TF.tag = 11;
	      _TF.f1 = vd;
	      _T7 = _TF;
	    }{ struct Cyc_Warn_Vardecl_Warn_Warg_struct _TF = _T7;
	      void * _T10[4];
	      _T10[0] = &_TC;
	      _T10[1] = &_TD;
	      _T10[2] = &_TE;
	      _T10[3] = &_TF;
	      _T8 = loc;
	      _T9 = _tag_fat(_T10,sizeof(void *),4);
	      Cyc_Warn_err2(_T8,_T9);
	    }
	  }
	}
      }
    }
    ;
  }_TLDE: _TA = atts;
  atts = _TA->tl;
  goto _TLE1;
  _TLE0: ;
}
void Cyc_Atts_check_field_atts(unsigned int loc,struct _fat_ptr * fn,struct Cyc_List_List * atts) {
  struct Cyc_List_List * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  struct Cyc_Warn_Attribute_Warn_Warg_struct _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_Warn_String_Warn_Warg_struct _T6;
  struct Cyc_Warn_String_Warn_Warg_struct _T7;
  struct _fat_ptr * _T8;
  unsigned int _T9;
  struct _fat_ptr _TA;
  struct Cyc_List_List * _TB;
  _TLE6: if (atts != 0) { goto _TLE4;
  }else { goto _TLE5;
  }
  _TLE4: _T0 = atts;
  { void * _TC = _T0->hd;
    _T1 = (int *)_TC;
    _T2 = *_T1;
    switch (_T2) {
    case 8: 
      goto _LL4;
    case 7: 
      _LL4: goto _TLE3;
    default: 
      { struct Cyc_Warn_String_Warn_Warg_struct _TD;
	_TD.tag = 0;
	_TD.f1 = _tag_fat("bad attribute ",sizeof(char),15U);
	_T3 = _TD;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TD = _T3;
	{ struct Cyc_Warn_Attribute_Warn_Warg_struct _TE;
	  _TE.tag = 10;
	  _T5 = atts;
	  _TE.f1 = _T5->hd;
	  _T4 = _TE;
	}{ struct Cyc_Warn_Attribute_Warn_Warg_struct _TE = _T4;
	  { struct Cyc_Warn_String_Warn_Warg_struct _TF;
	    _TF.tag = 0;
	    _TF.f1 = _tag_fat(" on ",sizeof(char),5U);
	    _T6 = _TF;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TF = _T6;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T10;
	      _T10.tag = 0;
	      _T8 = fn;
	      _T10.f1 = *_T8;
	      _T7 = _T10;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T10 = _T7;
	      void * _T11[4];
	      _T11[0] = &_TD;
	      _T11[1] = &_TE;
	      _T11[2] = &_TF;
	      _T11[3] = &_T10;
	      _T9 = loc;
	      _TA = _tag_fat(_T11,sizeof(void *),4);
	      Cyc_Warn_err2(_T9,_TA);
	    }
	  }
	}
      }
    }
    ;
  }_TLE3: _TB = atts;
  atts = _TB->tl;
  goto _TLE6;
  _TLE5: ;
}
struct Cyc_List_List * Cyc_Atts_merge_attributes(struct Cyc_List_List * a1,
						 struct Cyc_List_List * a2) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  long _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * x = 0;
  { struct Cyc_List_List * a = a1;
    _TLEB: if (a != 0) { goto _TLE9;
    }else { goto _TLEA;
    }
    _TLE9: _T0 = a;
    _T1 = _T0->hd;
    _T2 = a2;
    _T3 = Cyc_List_exists_c(Cyc_Atts_equal_att,_T1,_T2);
    if (_T3) { goto _TLEC;
    }else { goto _TLEE;
    }
    _TLEE: { struct Cyc_List_List * _TA = _cycalloc(sizeof(struct Cyc_List_List));
      _T5 = a;
      _TA->hd = _T5->hd;
      _TA->tl = x;
      _T4 = (struct Cyc_List_List *)_TA;
    }x = _T4;
    goto _TLED;
    _TLEC: _TLED: _T6 = a;
    a = _T6->tl;
    goto _TLEB;
    _TLEA: ;
  }_T7 = x;
  _T8 = Cyc_List_copy(a2);
  _T9 = Cyc_List_append(_T7,_T8);
  return _T9;
}
struct Cyc_List_List * Cyc_Atts_atts2c(struct Cyc_List_List * atts) {
  struct Cyc_List_List * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * ans = 0;
  _TLF2: if (atts != 0) { goto _TLF0;
  }else { goto _TLF1;
  }
  _TLF0: _T0 = atts;
  { void * _T7 = _T0->hd;
    _T1 = (int *)_T7;
    _T2 = *_T1;
    switch (_T2) {
    case 4: 
      goto _LL4;
    case 5: 
      _LL4: goto _LL6;
    case 6: 
      _LL6: goto _LL8;
    case 29: 
      _LL8: goto _LLA;
    case 20: 
      _LLA: goto _TLEF;
    case 23: 
      goto _TLEF;
    case 22: 
      goto _TLEF;
    case 21: 
      goto _TLEF;
    case 28: 
      goto _TLEF;
    default: 
      { struct Cyc_List_List * _T8 = _cycalloc(sizeof(struct Cyc_List_List));
	_T4 = atts;
	_T8->hd = _T4->hd;
	_T8->tl = ans;
	_T3 = (struct Cyc_List_List *)_T8;
      }ans = _T3;
      goto _LL0;
    }
    _LL0: ;
  }_TLEF: _T5 = atts;
  atts = _T5->tl;
  goto _TLF2;
  _TLF1: _T6 = Cyc_List_imp_rev(ans);
  return _T6;
}
