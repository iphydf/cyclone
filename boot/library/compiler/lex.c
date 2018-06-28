#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
struct _fat_ptr Cyc_Core_new_string(unsigned int);
extern char Cyc_Core_Invalid_argument[17U];
 struct Cyc_Core_Invalid_argument_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
extern unsigned int Cyc_Core_unique_qual;
void Cyc_Core_ufree(void *);
struct Cyc_Core_DynamicRegion;
 struct Cyc_Core_NewDynamicRegion {
  struct Cyc_Core_DynamicRegion * key;
};
struct Cyc_Core_NewDynamicRegion Cyc_Core__new_ukey(unsigned int,const char *,
						    const char *,int);
void Cyc_Core_free_ukey(struct Cyc_Core_DynamicRegion *);
void * Cyc_Core_open_region(struct Cyc_Core_DynamicRegion *,void *,void * (*)(struct _RegionHandle *,
									      void *));
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
 struct Cyc_Absyn_Pat {
  void * r;
  void * topt;
  unsigned int loc;
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
 struct Cyc_Absyn_Datatypefield {
  struct _tuple0 * name;
  struct Cyc_List_List * typs;
  unsigned int loc;
  enum Cyc_Absyn_Scope sc;
};
 struct Cyc_Absyn_Enumfield {
  struct _tuple0 * name;
  struct Cyc_Absyn_Exp * tag;
  unsigned int loc;
};
union Cyc_Absyn_Nmspace Cyc_Absyn_Rel_n(struct Cyc_List_List *);
union Cyc_Absyn_Nmspace Cyc_Absyn_Abs_n(struct Cyc_List_List *,long);
extern struct _tuple0 * Cyc_Lex_token_qvar;
extern struct _fat_ptr Cyc_Lex_token_string;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_IntPtr_sa_ScanfArg_struct {
  int tag;
  int * f1;
};
 struct Cyc_CharPtr_sa_ScanfArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern int Cyc_sscanf(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
extern void * Cyc_Dict_lookup(struct Cyc_Dict_Dict,void *);
 struct Cyc_Binding_Namespace_Binding_NSDirective_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct Cyc_Binding_Using_Binding_NSDirective_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct Cyc_Binding_NSCtxt {
  struct Cyc_List_List * curr_ns;
  struct Cyc_List_List * availables;
  struct Cyc_Dict_Dict ns_data;
};
struct Cyc_Binding_NSCtxt * Cyc_Binding_mt_nsctxt(void *,void * (*)(void *));
void Cyc_Binding_enter_ns(struct Cyc_Binding_NSCtxt *,struct _fat_ptr *,void *,
			  void * (*)(void *));
struct Cyc_List_List * Cyc_Binding_enter_using(unsigned int,struct Cyc_Binding_NSCtxt *,
					       struct _tuple0 *);
void Cyc_Binding_leave_ns(struct Cyc_Binding_NSCtxt *);
void Cyc_Binding_leave_using(struct Cyc_Binding_NSCtxt *);
struct Cyc_List_List * Cyc_Binding_resolve_rel_ns(unsigned int,struct Cyc_Binding_NSCtxt *,
						  struct Cyc_List_List *);
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_sscanf(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Parse_Type_specifier {
  long Signed_spec:1;
  long Unsigned_spec:1;
  long Short_spec:1;
  long Long_spec:1;
  long Long_Long_spec:1;
  long Complex_spec:1;
  long Valid_type_spec:1;
  void * Type_spec;
  unsigned int loc;
};
 struct Cyc_Parse_Declarator {
  struct _tuple0 * id;
  unsigned int varloc;
  struct Cyc_List_List * tms;
};
 struct _tuple14 {
  struct Cyc_Parse_Declarator f0;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct _tuple13 {
  struct _tuple13 * tl;
  struct _tuple14 hd __attribute__((aligned));
};
enum Cyc_Parse_Storage_class {
  Cyc_Parse_Typedef_sc = 0U,
  Cyc_Parse_Extern_sc = 1U,
  Cyc_Parse_ExternC_sc = 2U,
  Cyc_Parse_Static_sc = 3U,
  Cyc_Parse_Auto_sc = 4U,
  Cyc_Parse_Register_sc = 5U,
  Cyc_Parse_Abstract_sc = 6U,
  Cyc_Parse_None_sc = 7U
};
enum Cyc_Parse_ConstraintOps {
  Cyc_Parse_C_AND_OP = 0U,
  Cyc_Parse_C_OR_OP = 1U,
  Cyc_Parse_C_NOT_OP = 2U,
  Cyc_Parse_C_EQ_OP = 3U,
  Cyc_Parse_C_INCL_OP = 4U
};
 struct Cyc_Parse_Declaration_spec {
  enum Cyc_Parse_Storage_class sc;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_Parse_Type_specifier type_specs;
  long is_inline;
  struct Cyc_List_List * attributes;
};
 struct Cyc_Parse_Abstractdeclarator {
  struct Cyc_List_List * tms;
};
 struct _union_YYSTYPE_YYINITIALSVAL {
  int tag;
  int val;
};
 struct _union_YYSTYPE_Int_tok {
  int tag;
  union Cyc_Absyn_Cnst val;
};
 struct _union_YYSTYPE_Char_tok {
  int tag;
  char val;
};
 struct _union_YYSTYPE_String_tok {
  int tag;
  struct _fat_ptr val;
};
 struct _union_YYSTYPE_QualId_tok {
  int tag;
  struct _tuple0 * val;
};
 struct _union_YYSTYPE_Exp_tok {
  int tag;
  struct Cyc_Absyn_Exp * val;
};
 struct _union_YYSTYPE_Stmt_tok {
  int tag;
  struct Cyc_Absyn_Stmt * val;
};
 struct _tuple16 {
  unsigned int f0;
  void * f1;
  void * f2;
};
 struct _union_YYSTYPE_YY1 {
  int tag;
  struct _tuple16 * val;
};
 struct _union_YYSTYPE_YY2 {
  int tag;
  void * val;
};
 struct _union_YYSTYPE_YY3 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY4 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY5 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY6 {
  int tag;
  enum Cyc_Absyn_Primop val;
};
 struct _union_YYSTYPE_YY7 {
  int tag;
  struct Cyc_Absyn_PrimopOpt * val;
};
 struct _union_YYSTYPE_YY8 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY9 {
  int tag;
  struct Cyc_Absyn_Pat * val;
};
 struct _tuple17 {
  struct Cyc_List_List * f0;
  long f1;
};
 struct _union_YYSTYPE_YY10 {
  int tag;
  struct _tuple17 * val;
};
 struct _union_YYSTYPE_YY11 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _tuple18 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Pat * f1;
};
 struct _union_YYSTYPE_YY12 {
  int tag;
  struct _tuple18 * val;
};
 struct _union_YYSTYPE_YY13 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY14 {
  int tag;
  struct _tuple17 * val;
};
 struct _union_YYSTYPE_YY15 {
  int tag;
  struct Cyc_Absyn_Fndecl * val;
};
 struct _union_YYSTYPE_YY16 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY17 {
  int tag;
  struct Cyc_Parse_Declaration_spec val;
};
 struct _union_YYSTYPE_YY18 {
  int tag;
  struct _tuple14 val;
};
 struct _union_YYSTYPE_YY19 {
  int tag;
  struct _tuple13 * val;
};
 struct _union_YYSTYPE_YY20 {
  int tag;
  enum Cyc_Parse_Storage_class val;
};
 struct _union_YYSTYPE_YY21 {
  int tag;
  struct Cyc_Parse_Type_specifier val;
};
 struct _union_YYSTYPE_YY22 {
  int tag;
  enum Cyc_Absyn_AggrKind val;
};
 struct _tuple19 {
  long f0;
  enum Cyc_Absyn_AggrKind f1;
};
 struct _union_YYSTYPE_YY23 {
  int tag;
  struct _tuple19 val;
};
 struct _union_YYSTYPE_YY24 {
  int tag;
  struct Cyc_Absyn_Tqual val;
};
 struct _union_YYSTYPE_YY25 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY26 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY27 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY28 {
  int tag;
  struct Cyc_Parse_Declarator val;
};
 struct _union_YYSTYPE_YY29 {
  int tag;
  struct _tuple14 * val;
};
 struct _union_YYSTYPE_YY30 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY31 {
  int tag;
  struct Cyc_Parse_Abstractdeclarator val;
};
 struct _union_YYSTYPE_YY32 {
  int tag;
  long val;
};
 struct _union_YYSTYPE_YY33 {
  int tag;
  enum Cyc_Absyn_Scope val;
};
 struct _union_YYSTYPE_YY34 {
  int tag;
  struct Cyc_Absyn_Datatypefield * val;
};
 struct _union_YYSTYPE_YY35 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _tuple20 {
  struct Cyc_Absyn_Tqual f0;
  struct Cyc_Parse_Type_specifier f1;
  struct Cyc_List_List * f2;
};
 struct _union_YYSTYPE_YY36 {
  int tag;
  struct _tuple20 val;
};
 struct _union_YYSTYPE_YY37 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY38 {
  int tag;
  struct _tuple8 * val;
};
 struct _union_YYSTYPE_YY39 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _tuple21 {
  struct Cyc_List_List * f0;
  long f1;
  struct Cyc_Absyn_VarargInfo * f2;
  void * f3;
  struct Cyc_List_List * f4;
  struct Cyc_List_List * f5;
};
 struct _union_YYSTYPE_YY40 {
  int tag;
  struct _tuple21 * val;
};
 struct _union_YYSTYPE_YY41 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY42 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY43 {
  int tag;
  void * val;
};
 struct _union_YYSTYPE_YY44 {
  int tag;
  struct Cyc_Absyn_Kind * val;
};
 struct _union_YYSTYPE_YY45 {
  int tag;
  void * val;
};
 struct _union_YYSTYPE_YY46 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY47 {
  int tag;
  void * val;
};
 struct _union_YYSTYPE_YY48 {
  int tag;
  struct Cyc_Absyn_Enumfield * val;
};
 struct _union_YYSTYPE_YY49 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY50 {
  int tag;
  void * val;
};
 struct _tuple22 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
};
 struct _union_YYSTYPE_YY51 {
  int tag;
  struct _tuple22 * val;
};
 struct _union_YYSTYPE_YY52 {
  int tag;
  void * val;
};
 struct _tuple23 {
  void * f0;
  void * f1;
};
 struct _union_YYSTYPE_YY53 {
  int tag;
  struct _tuple23 * val;
};
 struct _union_YYSTYPE_YY54 {
  int tag;
  void * val;
};
 struct _union_YYSTYPE_YY55 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _tuple24 {
  struct Cyc_List_List * f0;
  unsigned int f1;
};
 struct _union_YYSTYPE_YY56 {
  int tag;
  struct _tuple24 * val;
};
 struct _union_YYSTYPE_YY57 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY58 {
  int tag;
  void * val;
};
 struct _union_YYSTYPE_YY59 {
  int tag;
  void * val;
};
 struct _union_YYSTYPE_YY60 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY61 {
  int tag;
  struct Cyc_Absyn_Exp * val;
};
 struct _tuple25 {
  struct Cyc_Absyn_Exp * f0;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct _union_YYSTYPE_YY62 {
  int tag;
  struct _tuple25 val;
};
 struct _union_YYSTYPE_YY63 {
  int tag;
  void * val;
};
 struct _tuple26 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
};
 struct _union_YYSTYPE_YY64 {
  int tag;
  struct _tuple26 * val;
};
 struct _union_YYSTYPE_YY65 {
  int tag;
  struct _tuple22 * val;
};
 struct _union_YYSTYPE_YY66 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY67 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _tuple27 {
  struct _fat_ptr f0;
  struct Cyc_Absyn_Exp * f1;
};
 struct _union_YYSTYPE_YY68 {
  int tag;
  struct _tuple27 * val;
};
 struct _union_YYSTYPE_YY69 {
  int tag;
  struct Cyc_Absyn_Exp * (* val)(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *,
				 unsigned int);
};
 struct _union_YYSTYPE_YY70 {
  int tag;
  enum Cyc_Parse_ConstraintOps val;
};
 struct _union_YYSTYPE_YY71 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _tuple28 {
  void * f0;
  struct Cyc_List_List * f1;
};
 struct _union_YYSTYPE_YY72 {
  int tag;
  struct _tuple28 * val;
};
 struct _union_YYSTYPE_YY73 {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_YY74 {
  int tag;
  void * val;
};
 struct _union_YYSTYPE_YY75 {
  int tag;
  int val;
};
 union Cyc_YYSTYPE {
  struct _union_YYSTYPE_YYINITIALSVAL YYINITIALSVAL;
  struct _union_YYSTYPE_Int_tok Int_tok;
  struct _union_YYSTYPE_Char_tok Char_tok;
  struct _union_YYSTYPE_String_tok String_tok;
  struct _union_YYSTYPE_QualId_tok QualId_tok;
  struct _union_YYSTYPE_Exp_tok Exp_tok;
  struct _union_YYSTYPE_Stmt_tok Stmt_tok;
  struct _union_YYSTYPE_YY1 YY1;
  struct _union_YYSTYPE_YY2 YY2;
  struct _union_YYSTYPE_YY3 YY3;
  struct _union_YYSTYPE_YY4 YY4;
  struct _union_YYSTYPE_YY5 YY5;
  struct _union_YYSTYPE_YY6 YY6;
  struct _union_YYSTYPE_YY7 YY7;
  struct _union_YYSTYPE_YY8 YY8;
  struct _union_YYSTYPE_YY9 YY9;
  struct _union_YYSTYPE_YY10 YY10;
  struct _union_YYSTYPE_YY11 YY11;
  struct _union_YYSTYPE_YY12 YY12;
  struct _union_YYSTYPE_YY13 YY13;
  struct _union_YYSTYPE_YY14 YY14;
  struct _union_YYSTYPE_YY15 YY15;
  struct _union_YYSTYPE_YY16 YY16;
  struct _union_YYSTYPE_YY17 YY17;
  struct _union_YYSTYPE_YY18 YY18;
  struct _union_YYSTYPE_YY19 YY19;
  struct _union_YYSTYPE_YY20 YY20;
  struct _union_YYSTYPE_YY21 YY21;
  struct _union_YYSTYPE_YY22 YY22;
  struct _union_YYSTYPE_YY23 YY23;
  struct _union_YYSTYPE_YY24 YY24;
  struct _union_YYSTYPE_YY25 YY25;
  struct _union_YYSTYPE_YY26 YY26;
  struct _union_YYSTYPE_YY27 YY27;
  struct _union_YYSTYPE_YY28 YY28;
  struct _union_YYSTYPE_YY29 YY29;
  struct _union_YYSTYPE_YY30 YY30;
  struct _union_YYSTYPE_YY31 YY31;
  struct _union_YYSTYPE_YY32 YY32;
  struct _union_YYSTYPE_YY33 YY33;
  struct _union_YYSTYPE_YY34 YY34;
  struct _union_YYSTYPE_YY35 YY35;
  struct _union_YYSTYPE_YY36 YY36;
  struct _union_YYSTYPE_YY37 YY37;
  struct _union_YYSTYPE_YY38 YY38;
  struct _union_YYSTYPE_YY39 YY39;
  struct _union_YYSTYPE_YY40 YY40;
  struct _union_YYSTYPE_YY41 YY41;
  struct _union_YYSTYPE_YY42 YY42;
  struct _union_YYSTYPE_YY43 YY43;
  struct _union_YYSTYPE_YY44 YY44;
  struct _union_YYSTYPE_YY45 YY45;
  struct _union_YYSTYPE_YY46 YY46;
  struct _union_YYSTYPE_YY47 YY47;
  struct _union_YYSTYPE_YY48 YY48;
  struct _union_YYSTYPE_YY49 YY49;
  struct _union_YYSTYPE_YY50 YY50;
  struct _union_YYSTYPE_YY51 YY51;
  struct _union_YYSTYPE_YY52 YY52;
  struct _union_YYSTYPE_YY53 YY53;
  struct _union_YYSTYPE_YY54 YY54;
  struct _union_YYSTYPE_YY55 YY55;
  struct _union_YYSTYPE_YY56 YY56;
  struct _union_YYSTYPE_YY57 YY57;
  struct _union_YYSTYPE_YY58 YY58;
  struct _union_YYSTYPE_YY59 YY59;
  struct _union_YYSTYPE_YY60 YY60;
  struct _union_YYSTYPE_YY61 YY61;
  struct _union_YYSTYPE_YY62 YY62;
  struct _union_YYSTYPE_YY63 YY63;
  struct _union_YYSTYPE_YY64 YY64;
  struct _union_YYSTYPE_YY65 YY65;
  struct _union_YYSTYPE_YY66 YY66;
  struct _union_YYSTYPE_YY67 YY67;
  struct _union_YYSTYPE_YY68 YY68;
  struct _union_YYSTYPE_YY69 YY69;
  struct _union_YYSTYPE_YY70 YY70;
  struct _union_YYSTYPE_YY71 YY71;
  struct _union_YYSTYPE_YY72 YY72;
  struct _union_YYSTYPE_YY73 YY73;
  struct _union_YYSTYPE_YY74 YY74;
  struct _union_YYSTYPE_YY75 YY75;
};
 struct Cyc_Yyltype {
  int timestamp;
  unsigned int first_line;
  unsigned int first_column;
  unsigned int last_line;
  unsigned int last_column;
};
extern struct Cyc_Yyltype Cyc_yylloc;
void Cyc_Warn_err(unsigned int,struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
void * Cyc_Warn_impos2(struct _fat_ptr);
extern char Cyc_Lexing_Error[6U];
 struct Cyc_Lexing_Error_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
 struct Cyc_Lexing_lexbuf {
  void (* refill_buff)(struct Cyc_Lexing_lexbuf *);
  void * refill_state;
  struct _fat_ptr lex_buffer;
  int lex_buffer_len;
  int lex_abs_pos;
  int lex_start_pos;
  int lex_curr_pos;
  int lex_last_pos;
  int lex_last_action;
  long lex_eof_reached;
};
extern struct _fat_ptr Cyc_Lexing_lexeme(struct Cyc_Lexing_lexbuf *);
extern char Cyc_Lexing_lexeme_char(struct Cyc_Lexing_lexbuf *,int);
extern int Cyc_Lexing_lexeme_start(struct Cyc_Lexing_lexbuf *);
extern int Cyc_Lexing_lexeme_end(struct Cyc_Lexing_lexbuf *);
struct Cyc_Set_Set;
extern struct Cyc_Set_Set * Cyc_Set_empty(int (*)(void *,void *));
extern struct Cyc_Set_Set * Cyc_Set_insert(struct Cyc_Set_Set *,void *);
extern long Cyc_Set_member(struct Cyc_Set_Set *,void *);
extern void Cyc_Set_iter(void (*)(void *),struct Cyc_Set_Set *);
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strncmp(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern int Cyc_zstrptrcmp(struct _fat_ptr *,struct _fat_ptr *);
extern struct _fat_ptr Cyc_zstrncpy(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);
 struct Cyc_Xarray_Xarray {
  struct _fat_ptr elmts;
  int num_elmts;
};
extern void * Cyc_Xarray_get(struct Cyc_Xarray_Xarray *,int);
extern struct Cyc_Xarray_Xarray * Cyc_Xarray_rcreate(struct _RegionHandle *,
						     int,void *);
extern void Cyc_Xarray_add(struct Cyc_Xarray_Xarray *,void *);
extern int Cyc_Xarray_add_ind(struct Cyc_Xarray_Xarray *,void *);
struct Cyc_Lex_Trie;
 struct _union_TrieChildren_Zero {
  int tag;
  int val;
};
 struct _tuple29 {
  int f0;
  struct Cyc_Lex_Trie * f1;
};
 struct _union_TrieChildren_One {
  int tag;
  struct _tuple29 val;
};
 struct _union_TrieChildren_Many {
  int tag;
  struct Cyc_Lex_Trie * * val;
};
 union Cyc_Lex_TrieChildren {
  struct _union_TrieChildren_Zero Zero;
  struct _union_TrieChildren_One One;
  struct _union_TrieChildren_Many Many;
};
static union Cyc_Lex_TrieChildren Cyc_Lex_Zero() {
  union Cyc_Lex_TrieChildren _T0;
  { union Cyc_Lex_TrieChildren _T1;
    (_T1.Zero).tag = 1U;
    (_T1.Zero).val = 0;
    _T0 = _T1;
  }return _T0;
}
static union Cyc_Lex_TrieChildren Cyc_Lex_One(int i,struct Cyc_Lex_Trie * t) {
  union Cyc_Lex_TrieChildren _T0;
  { union Cyc_Lex_TrieChildren _T1;
    (_T1.One).tag = 2U;
    ((_T1.One).val).f0 = i;
    ((_T1.One).val).f1 = t;
    _T0 = _T1;
  }return _T0;
}
static union Cyc_Lex_TrieChildren Cyc_Lex_Many(struct Cyc_Lex_Trie * * ts) {
  union Cyc_Lex_TrieChildren _T0;
  { union Cyc_Lex_TrieChildren _T1;
    (_T1.Many).tag = 3U;
    (_T1.Many).val = ts;
    _T0 = _T1;
  }return _T0;
}
 struct Cyc_Lex_Trie {
  union Cyc_Lex_TrieChildren children;
  int shared_str;
};
 struct Cyc_Lex_DynTrie {
  struct Cyc_Core_DynamicRegion * dyn;
  struct Cyc_Lex_Trie * t;
};
 struct Cyc_Lex_DynTrieSymbols {
  struct Cyc_Core_DynamicRegion * dyn;
  struct Cyc_Lex_Trie * t;
  struct Cyc_Xarray_Xarray * symbols;
};
static int Cyc_Lex_num_kws = 0;
 struct Cyc_Lex_KeyWordInfo {
  int token_index;
  long is_c_keyword;
};
static struct _fat_ptr Cyc_Lex_kw_nums = {(void *)0,(void *)0,(void *)(0 + 0)};
static long Cyc_Lex_expand_specials = 0;
static long Cyc_Lex_in_extern_c = 0;
static struct Cyc_List_List * Cyc_Lex_prev_extern_c = 0;
void Cyc_Lex_enter_extern_c() {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  long _T2;
  struct Cyc_List_List * x = 0;
  { struct Cyc_List_List * _T3 = x;
    struct Cyc_List_List * _T4 = Cyc_Lex_prev_extern_c;
    x = _T4;
    Cyc_Lex_prev_extern_c = _T3;
  }_T1 = Cyc_Core_unique_qual;
  { struct Cyc_List_List * _T3 = _aqual_malloc(_T1,sizeof(struct Cyc_List_List));
    _T2 = Cyc_Lex_in_extern_c;
    _T3->hd = (void *)_T2;
    _T3->tl = x;
    _T0 = (struct Cyc_List_List *)_T3;
  }Cyc_Lex_prev_extern_c = _T0;
  Cyc_Lex_in_extern_c = 1;
}
void Cyc_Lex_leave_extern_c() {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  void (* _T3)(struct Cyc_List_List *);
  void (* _T4)(void *);
  struct Cyc_List_List * x = 0;
  { struct Cyc_List_List * _T5 = x;
    struct Cyc_List_List * _T6 = Cyc_Lex_prev_extern_c;
    x = _T6;
    Cyc_Lex_prev_extern_c = _T5;
  }_T0 = _check_null(x);
  _T1 = _T0->hd;
  Cyc_Lex_in_extern_c = (long)_T1;
  _T2 = x;
  Cyc_Lex_prev_extern_c = _T2->tl;
  _T4 = Cyc_Core_ufree;
  { void (* _T5)(struct Cyc_List_List *) = (void (*)(struct Cyc_List_List *))_T4;
    _T3 = _T5;
  }_T3(x);
}
static struct Cyc_Lex_DynTrieSymbols * Cyc_Lex_ids_trie = 0;
static struct Cyc_Lex_DynTrie * Cyc_Lex_typedefs_trie = 0;
static int Cyc_Lex_comment_depth = 0;
static union Cyc_Absyn_Cnst Cyc_Lex_token_int = {.Null_c={1,0}};
static char _TmpG0[8U] = "*bogus*";
static struct _fat_ptr Cyc_Lex_bogus_string = {(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
					       (unsigned char *)_TmpG0 + 8U};
static struct _tuple0 Cyc_Lex_token_id_pair = {.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr *)&Cyc_Lex_bogus_string};
static char Cyc_Lex_token_char = '\000';
static char _TmpG1[1U] = "";
struct _fat_ptr Cyc_Lex_token_string = {(unsigned char *)_TmpG1,(unsigned char *)_TmpG1,
					(unsigned char *)_TmpG1 + 1U};
struct _tuple0 * Cyc_Lex_token_qvar = &Cyc_Lex_token_id_pair;
static int Cyc_Lex_runaway_start = 0;
static void Cyc_Lex_err(struct _fat_ptr msg,struct Cyc_Lexing_lexbuf * lb) {
  int _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  _T0 = Cyc_Lexing_lexeme_start(lb);
  { unsigned int s = (unsigned int)_T0;
    _T1 = s;
    _T2 = msg;
    _T3 = _tag_fat(0U,sizeof(void *),0);
    Cyc_Warn_err(_T1,_T2,_T3);
  }
}
static void Cyc_Lex_runaway_err(struct _fat_ptr msg,struct Cyc_Lexing_lexbuf * lb) {
  int _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  _T0 = Cyc_Lex_runaway_start;
  { unsigned int s = (unsigned int)_T0;
    _T1 = s;
    _T2 = msg;
    _T3 = _tag_fat(0U,sizeof(void *),0);
    Cyc_Warn_err(_T1,_T2,_T3);
  }
}
static char Cyc_Lex_cnst2char(union Cyc_Absyn_Cnst cnst,struct Cyc_Lexing_lexbuf * lb) {
  union Cyc_Absyn_Cnst _T0;
  struct _union_Cnst_Char_c _T1;
  unsigned int _T2;
  union Cyc_Absyn_Cnst _T3;
  struct _union_Cnst_Int_c _T4;
  struct _tuple5 _T5;
  int _T6;
  char _T7;
  union Cyc_Absyn_Cnst _T8;
  struct _union_Cnst_LongLong_c _T9;
  struct _tuple6 _TA;
  long long _TB;
  char _TC;
  union Cyc_Absyn_Cnst _TD;
  struct _union_Cnst_Char_c _TE;
  struct _tuple3 _TF;
  char _T10;
  struct _fat_ptr _T11;
  struct Cyc_Lexing_lexbuf * _T12;
  char _T13;
  long long _T14;
  int _T15;
  _T0 = cnst;
  _T1 = _T0.Char_c;
  _T2 = _T1.tag;
  switch (_T2) {
  case 5: 
    _T3 = cnst;
    _T4 = _T3.Int_c;
    _T5 = _T4.val;
    _T15 = _T5.f1;
    { int i = _T15;
      _T6 = i;
      _T7 = (char)_T6;
      return _T7;
    }
  case 6: 
    _T8 = cnst;
    _T9 = _T8.LongLong_c;
    _TA = _T9.val;
    _T14 = _TA.f1;
    { long long i = _T14;
      _TB = i;
      _TC = (char)_TB;
      return _TC;
    }
  case 2: 
    _TD = cnst;
    _TE = _TD.Char_c;
    _TF = _TE.val;
    _T13 = _TF.f1;
    { char c = _T13;
      _T10 = c;
      return _T10;
    }
  default: 
    _T11 = _tag_fat("couldn't convert constant to char!",sizeof(char),35U);
    _T12 = lb;
    Cyc_Lex_err(_T11,_T12);
    return '\000';
  }
  ;
}
 struct _tuple30 {
  struct _fat_ptr f0;
  short f1;
  long f2;
};
static char _TmpG2[10U] = "ALIASABLE";
static char _TmpG3[8U] = "alignof";
static char _TmpG4[12U] = "__alignof__";
static char _TmpG5[8U] = "aqual_t";
static char _TmpG6[7U] = "aquals";
static char _TmpG7[14U] = "__attribute__";
static char _TmpG8[12U] = "__attribute";
static char _TmpG9[8U] = "__asm__";
static char _TmpGA[6U] = "__asm";
static char _TmpGB[7U] = "assert";
static char _TmpGC[4U] = "asm";
static char _TmpGD[9U] = "abstract";
static char _TmpGE[5U] = "auto";
static char _TmpGF[6U] = "break";
static char _TmpG10[18U] = "__builtin_va_list";
static char _TmpG11[7U] = "calloc";
static char _TmpG12[5U] = "case";
static char _TmpG13[6U] = "catch";
static char _TmpG14[5U] = "char";
static char _TmpG15[9U] = "_Complex";
static char _TmpG16[12U] = "__complex__";
static char _TmpG17[6U] = "const";
static char _TmpG18[10U] = "__const__";
static char _TmpG19[9U] = "continue";
static char _TmpG1A[17U] = "cyclone_override";
static char _TmpG1B[9U] = "datatype";
static char _TmpG1C[8U] = "default";
static char _TmpG1D[3U] = "do";
static char _TmpG1E[7U] = "double";
static char _TmpG1F[5U] = "else";
static char _TmpG20[5U] = "enum";
static char _TmpG21[7U] = "export";
static char _TmpG22[13U] = "cyclone_hide";
static char _TmpG23[14U] = "__extension__";
static char _TmpG24[7U] = "extern";
static char _TmpG25[9U] = "fallthru";
static char _TmpG26[6U] = "float";
static char _TmpG27[10U] = "_Float128";
static char _TmpG28[4U] = "for";
static char _TmpG29[5U] = "goto";
static char _TmpG2A[3U] = "if";
static char _TmpG2B[7U] = "inline";
static char _TmpG2C[11U] = "__inline__";
static char _TmpG2D[9U] = "__inline";
static char _TmpG2E[4U] = "int";
static char _TmpG2F[11U] = "__int128_t";
static char _TmpG30[4U] = "let";
static char _TmpG31[5U] = "long";
static char _TmpG32[7U] = "malloc";
static char _TmpG33[10U] = "namespace";
static char _TmpG34[4U] = "new";
static char _TmpG35[5U] = "NULL";
static char _TmpG36[8U] = "numelts";
static char _TmpG37[16U] = "__noinference__";
static char _TmpG38[9U] = "offsetof";
static char _TmpG39[20U] = "__cyclone_port_on__";
static char _TmpG3A[21U] = "__cyclone_port_off__";
static char _TmpG3B[19U] = "__cyclone_pragma__";
static char _TmpG3C[8U] = "qcalloc";
static char _TmpG3D[8U] = "qmalloc";
static char _TmpG3E[5U] = "qnew";
static char _TmpG3F[8U] = "rcalloc";
static char _TmpG40[7U] = "REFCNT";
static char _TmpG41[9U] = "region_t";
static char _TmpG42[7U] = "region";
static char _TmpG43[8U] = "regions";
static char _TmpG44[9U] = "register";
static char _TmpG45[9U] = "restrict";
static char _TmpG46[11U] = "__restrict";
static char _TmpG47[11U] = "RESTRICTED";
static char _TmpG48[7U] = "return";
static char _TmpG49[8U] = "rmalloc";
static char _TmpG4A[15U] = "rmalloc_inline";
static char _TmpG4B[9U] = "rvmalloc";
static char _TmpG4C[5U] = "rnew";
static char _TmpG4D[6U] = "short";
static char _TmpG4E[7U] = "signed";
static char _TmpG4F[11U] = "__signed__";
static char _TmpG50[7U] = "sizeof";
static char _TmpG51[7U] = "static";
static char _TmpG52[7U] = "struct";
static char _TmpG53[7U] = "switch";
static char _TmpG54[9U] = "tagcheck";
static char _TmpG55[6U] = "tagof";
static char _TmpG56[6U] = "tag_t";
static char _TmpG57[15U] = "__tempest_on__";
static char _TmpG58[16U] = "__tempest_off__";
static char _TmpG59[6U] = "throw";
static char _TmpG5A[4U] = "try";
static char _TmpG5B[8U] = "typedef";
static char _TmpG5C[7U] = "typeof";
static char _TmpG5D[11U] = "__typeof__";
static char _TmpG5E[7U] = "UNIQUE";
static char _TmpG5F[6U] = "union";
static char _TmpG60[9U] = "unsigned";
static char _TmpG61[13U] = "__unsigned__";
static char _TmpG62[6U] = "using";
static char _TmpG63[8U] = "valueof";
static char _TmpG64[10U] = "valueof_t";
static char _TmpG65[5U] = "void";
static char _TmpG66[9U] = "volatile";
static char _TmpG67[13U] = "__volatile__";
static char _TmpG68[6U] = "while";
static struct _tuple30 Cyc_Lex_rw_array[103U] = {{.f0={(unsigned char *)_TmpG2,
						       (unsigned char *)_TmpG2,
						       (unsigned char *)_TmpG2 + 10U},
						  .f1=336,.f2=0},
						 {.f0={(unsigned char *)_TmpG3,
						       (unsigned char *)_TmpG3,
						       (unsigned char *)_TmpG3 + 8U},
						  .f1=282,.f2=1},
						 {.f0={(unsigned char *)_TmpG4,
						       (unsigned char *)_TmpG4,
						       (unsigned char *)_TmpG4 + 12U},
						  .f1=282,.f2=1},
						 {.f0={(unsigned char *)_TmpG5,
						       (unsigned char *)_TmpG5,
						       (unsigned char *)_TmpG5 + 8U},
						  .f1=340,.f2=0},
						 {.f0={(unsigned char *)_TmpG6,
						       (unsigned char *)_TmpG6,
						       (unsigned char *)_TmpG6 + 7U},
						  .f1=363,.f2=0},
						 {.f0={(unsigned char *)_TmpG7,
						       (unsigned char *)_TmpG7,
						       (unsigned char *)_TmpG7 + 14U},
						  .f1=403,.f2=1},
						 {.f0={(unsigned char *)_TmpG8,
						       (unsigned char *)_TmpG8,
						       (unsigned char *)_TmpG8 + 12U},
						  .f1=403,.f2=1},
						 {.f0={(unsigned char *)_TmpG9,
						       (unsigned char *)_TmpG9,
						       (unsigned char *)_TmpG9 + 8U},
						  .f1=404,.f2=1},
						 {.f0={(unsigned char *)_TmpGA,
						       (unsigned char *)_TmpGA,
						       (unsigned char *)_TmpGA + 6U},
						  .f1=404,.f2=1},
						 {.f0={(unsigned char *)_TmpGB,
						       (unsigned char *)_TmpGB,
						       (unsigned char *)_TmpGB + 7U},
						  .f1=325,.f2=0},
						 {.f0={(unsigned char *)_TmpGC,
						       (unsigned char *)_TmpGC,
						       (unsigned char *)_TmpGC + 4U},
						  .f1=404,.f2=1},
						 {.f0={(unsigned char *)_TmpGD,
						       (unsigned char *)_TmpGD,
						       (unsigned char *)_TmpGD + 9U},
						  .f1=310,.f2=0},
						 {.f0={(unsigned char *)_TmpGE,
						       (unsigned char *)_TmpGE,
						       (unsigned char *)_TmpGE + 5U},
						  .f1=258,.f2=1},
						 {.f0={(unsigned char *)_TmpGF,
						       (unsigned char *)_TmpGF,
						       (unsigned char *)_TmpGF + 6U},
						  .f1=293,.f2=1},
						 {.f0={(unsigned char *)_TmpG10,
						       (unsigned char *)_TmpG10,
						       (unsigned char *)_TmpG10 + 18U},
						  .f1=297,.f2=1},
						 {.f0={(unsigned char *)_TmpG11,
						       (unsigned char *)_TmpG11,
						       (unsigned char *)_TmpG11 + 7U},
						  .f1=321,.f2=0},
						 {.f0={(unsigned char *)_TmpG12,
						       (unsigned char *)_TmpG12,
						       (unsigned char *)_TmpG12 + 5U},
						  .f1=279,.f2=1},
						 {.f0={(unsigned char *)_TmpG13,
						       (unsigned char *)_TmpG13,
						       (unsigned char *)_TmpG13 + 6U},
						  .f1=304,.f2=1},
						 {.f0={(unsigned char *)_TmpG14,
						       (unsigned char *)_TmpG14,
						       (unsigned char *)_TmpG14 + 5U},
						  .f1=264,.f2=1},
						 {.f0={(unsigned char *)_TmpG15,
						       (unsigned char *)_TmpG15,
						       (unsigned char *)_TmpG15 + 9U},
						  .f1=299,.f2=1},
						 {.f0={(unsigned char *)_TmpG16,
						       (unsigned char *)_TmpG16,
						       (unsigned char *)_TmpG16 + 12U},
						  .f1=299,.f2=1},
						 {.f0={(unsigned char *)_TmpG17,
						       (unsigned char *)_TmpG17,
						       (unsigned char *)_TmpG17 + 6U},
						  .f1=274,.f2=1},
						 {.f0={(unsigned char *)_TmpG18,
						       (unsigned char *)_TmpG18,
						       (unsigned char *)_TmpG18 + 10U},
						  .f1=274,.f2=1},
						 {.f0={(unsigned char *)_TmpG19,
						       (unsigned char *)_TmpG19,
						       (unsigned char *)_TmpG19 + 9U},
						  .f1=292,.f2=1},
						 {.f0={(unsigned char *)_TmpG1A,
						       (unsigned char *)_TmpG1A,
						       (unsigned char *)_TmpG1A + 17U},
						  .f1=306,.f2=0},
						 {.f0={(unsigned char *)_TmpG1B,
						       (unsigned char *)_TmpG1B,
						       (unsigned char *)_TmpG1B + 9U},
						  .f1=315,.f2=0},
						 {.f0={(unsigned char *)_TmpG1C,
						       (unsigned char *)_TmpG1C,
						       (unsigned char *)_TmpG1C + 8U},
						  .f1=280,.f2=1},
						 {.f0={(unsigned char *)_TmpG1D,
						       (unsigned char *)_TmpG1D,
						       (unsigned char *)_TmpG1D + 3U},
						  .f1=289,.f2=1},
						 {.f0={(unsigned char *)_TmpG1E,
						       (unsigned char *)_TmpG1E,
						       (unsigned char *)_TmpG1E + 7U},
						  .f1=271,.f2=1},
						 {.f0={(unsigned char *)_TmpG1F,
						       (unsigned char *)_TmpG1F,
						       (unsigned char *)_TmpG1F + 5U},
						  .f1=286,.f2=1},
						 {.f0={(unsigned char *)_TmpG20,
						       (unsigned char *)_TmpG20,
						       (unsigned char *)_TmpG20 + 5U},
						  .f1=295,.f2=1},
						 {.f0={(unsigned char *)_TmpG21,
						       (unsigned char *)_TmpG21,
						       (unsigned char *)_TmpG21 + 7U},
						  .f1=305,.f2=0},
						 {.f0={(unsigned char *)_TmpG22,
						       (unsigned char *)_TmpG22,
						       (unsigned char *)_TmpG22 + 13U},
						  .f1=307,.f2=0},
						 {.f0={(unsigned char *)_TmpG23,
						       (unsigned char *)_TmpG23,
						       (unsigned char *)_TmpG23 + 14U},
						  .f1=298,.f2=1},
						 {.f0={(unsigned char *)_TmpG24,
						       (unsigned char *)_TmpG24,
						       (unsigned char *)_TmpG24 + 7U},
						  .f1=261,.f2=1},
						 {.f0={(unsigned char *)_TmpG25,
						       (unsigned char *)_TmpG25,
						       (unsigned char *)_TmpG25 + 9U},
						  .f1=311,.f2=0},
						 {.f0={(unsigned char *)_TmpG26,
						       (unsigned char *)_TmpG26,
						       (unsigned char *)_TmpG26 + 6U},
						  .f1=268,.f2=1},
						 {.f0={(unsigned char *)_TmpG27,
						       (unsigned char *)_TmpG27,
						       (unsigned char *)_TmpG27 + 10U},
						  .f1=270,.f2=1},
						 {.f0={(unsigned char *)_TmpG28,
						       (unsigned char *)_TmpG28,
						       (unsigned char *)_TmpG28 + 4U},
						  .f1=290,.f2=1},
						 {.f0={(unsigned char *)_TmpG29,
						       (unsigned char *)_TmpG29,
						       (unsigned char *)_TmpG29 + 5U},
						  .f1=291,.f2=1},
						 {.f0={(unsigned char *)_TmpG2A,
						       (unsigned char *)_TmpG2A,
						       (unsigned char *)_TmpG2A + 3U},
						  .f1=285,.f2=1},
						 {.f0={(unsigned char *)_TmpG2B,
						       (unsigned char *)_TmpG2B,
						       (unsigned char *)_TmpG2B + 7U},
						  .f1=281,.f2=1},
						 {.f0={(unsigned char *)_TmpG2C,
						       (unsigned char *)_TmpG2C,
						       (unsigned char *)_TmpG2C + 11U},
						  .f1=281,.f2=1},
						 {.f0={(unsigned char *)_TmpG2D,
						       (unsigned char *)_TmpG2D,
						       (unsigned char *)_TmpG2D + 9U},
						  .f1=281,.f2=1},
						 {.f0={(unsigned char *)_TmpG2E,
						       (unsigned char *)_TmpG2E,
						       (unsigned char *)_TmpG2E + 4U},
						  .f1=266,.f2=1},
						 {.f0={(unsigned char *)_TmpG2F,
						       (unsigned char *)_TmpG2F,
						       (unsigned char *)_TmpG2F + 11U},
						  .f1=269,.f2=1},
						 {.f0={(unsigned char *)_TmpG30,
						       (unsigned char *)_TmpG30,
						       (unsigned char *)_TmpG30 + 4U},
						  .f1=301,.f2=0},
						 {.f0={(unsigned char *)_TmpG31,
						       (unsigned char *)_TmpG31,
						       (unsigned char *)_TmpG31 + 5U},
						  .f1=267,.f2=1},
						 {.f0={(unsigned char *)_TmpG32,
						       (unsigned char *)_TmpG32,
						       (unsigned char *)_TmpG32 + 7U},
						  .f1=316,.f2=0},
						 {.f0={(unsigned char *)_TmpG33,
						       (unsigned char *)_TmpG33,
						       (unsigned char *)_TmpG33 + 10U},
						  .f1=313,.f2=0},
						 {.f0={(unsigned char *)_TmpG34,
						       (unsigned char *)_TmpG34,
						       (unsigned char *)_TmpG34 + 4U},
						  .f1=308,.f2=0},
						 {.f0={(unsigned char *)_TmpG35,
						       (unsigned char *)_TmpG35,
						       (unsigned char *)_TmpG35 + 5U},
						  .f1=300,.f2=0},
						 {.f0={(unsigned char *)_TmpG36,
						       (unsigned char *)_TmpG36,
						       (unsigned char *)_TmpG36 + 8U},
						  .f1=341,.f2=0},
						 {.f0={(unsigned char *)_TmpG37,
						       (unsigned char *)_TmpG37,
						       (unsigned char *)_TmpG37 + 16U},
						  .f1=314,.f2=0},
						 {.f0={(unsigned char *)_TmpG38,
						       (unsigned char *)_TmpG38,
						       (unsigned char *)_TmpG38 + 9U},
						  .f1=284,.f2=1},
						 {.f0={(unsigned char *)_TmpG39,
						       (unsigned char *)_TmpG39,
						       (unsigned char *)_TmpG39 + 20U},
						  .f1=331,.f2=0},
						 {.f0={(unsigned char *)_TmpG3A,
						       (unsigned char *)_TmpG3A,
						       (unsigned char *)_TmpG3A + 21U},
						  .f1=332,.f2=0},
						 {.f0={(unsigned char *)_TmpG3B,
						       (unsigned char *)_TmpG3B,
						       (unsigned char *)_TmpG3B + 19U},
						  .f1=333,.f2=0},
						 {.f0={(unsigned char *)_TmpG3C,
						       (unsigned char *)_TmpG3C,
						       (unsigned char *)_TmpG3C + 8U},
						  .f1=322,.f2=0},
						 {.f0={(unsigned char *)_TmpG3D,
						       (unsigned char *)_TmpG3D,
						       (unsigned char *)_TmpG3D + 8U},
						  .f1=320,.f2=0},
						 {.f0={(unsigned char *)_TmpG3E,
						       (unsigned char *)_TmpG3E,
						       (unsigned char *)_TmpG3E + 5U},
						  .f1=309,.f2=0},
						 {.f0={(unsigned char *)_TmpG3F,
						       (unsigned char *)_TmpG3F,
						       (unsigned char *)_TmpG3F + 8U},
						  .f1=323,.f2=0},
						 {.f0={(unsigned char *)_TmpG40,
						       (unsigned char *)_TmpG40,
						       (unsigned char *)_TmpG40 + 7U},
						  .f1=337,.f2=0},
						 {.f0={(unsigned char *)_TmpG41,
						       (unsigned char *)_TmpG41,
						       (unsigned char *)_TmpG41 + 9U},
						  .f1=326,.f2=0},
						 {.f0={(unsigned char *)_TmpG42,
						       (unsigned char *)_TmpG42,
						       (unsigned char *)_TmpG42 + 7U},
						  .f1=328,.f2=0},
						 {.f0={(unsigned char *)_TmpG43,
						       (unsigned char *)_TmpG43,
						       (unsigned char *)_TmpG43 + 8U},
						  .f1=330,.f2=0},
						 {.f0={(unsigned char *)_TmpG44,
						       (unsigned char *)_TmpG44,
						       (unsigned char *)_TmpG44 + 9U},
						  .f1=259,.f2=1},
						 {.f0={(unsigned char *)_TmpG45,
						       (unsigned char *)_TmpG45,
						       (unsigned char *)_TmpG45 + 9U},
						  .f1=276,.f2=1},
						 {.f0={(unsigned char *)_TmpG46,
						       (unsigned char *)_TmpG46,
						       (unsigned char *)_TmpG46 + 11U},
						  .f1=276,.f2=1},
						 {.f0={(unsigned char *)_TmpG47,
						       (unsigned char *)_TmpG47,
						       (unsigned char *)_TmpG47 + 11U},
						  .f1=338,.f2=0},
						 {.f0={(unsigned char *)_TmpG48,
						       (unsigned char *)_TmpG48,
						       (unsigned char *)_TmpG48 + 7U},
						  .f1=294,.f2=1},
						 {.f0={(unsigned char *)_TmpG49,
						       (unsigned char *)_TmpG49,
						       (unsigned char *)_TmpG49 + 8U},
						  .f1=317,.f2=0},
						 {.f0={(unsigned char *)_TmpG4A,
						       (unsigned char *)_TmpG4A,
						       (unsigned char *)_TmpG4A + 15U},
						  .f1=319,.f2=0},
						 {.f0={(unsigned char *)_TmpG4B,
						       (unsigned char *)_TmpG4B,
						       (unsigned char *)_TmpG4B + 9U},
						  .f1=318,.f2=0},
						 {.f0={(unsigned char *)_TmpG4C,
						       (unsigned char *)_TmpG4C,
						       (unsigned char *)_TmpG4C + 5U},
						  .f1=329,.f2=0},
						 {.f0={(unsigned char *)_TmpG4D,
						       (unsigned char *)_TmpG4D,
						       (unsigned char *)_TmpG4D + 6U},
						  .f1=265,.f2=1},
						 {.f0={(unsigned char *)_TmpG4E,
						       (unsigned char *)_TmpG4E,
						       (unsigned char *)_TmpG4E + 7U},
						  .f1=272,.f2=1},
						 {.f0={(unsigned char *)_TmpG4F,
						       (unsigned char *)_TmpG4F,
						       (unsigned char *)_TmpG4F + 11U},
						  .f1=272,.f2=1},
						 {.f0={(unsigned char *)_TmpG50,
						       (unsigned char *)_TmpG50,
						       (unsigned char *)_TmpG50 + 7U},
						  .f1=283,.f2=1},
						 {.f0={(unsigned char *)_TmpG51,
						       (unsigned char *)_TmpG51,
						       (unsigned char *)_TmpG51 + 7U},
						  .f1=260,.f2=1},
						 {.f0={(unsigned char *)_TmpG52,
						       (unsigned char *)_TmpG52,
						       (unsigned char *)_TmpG52 + 7U},
						  .f1=277,.f2=1},
						 {.f0={(unsigned char *)_TmpG53,
						       (unsigned char *)_TmpG53,
						       (unsigned char *)_TmpG53 + 7U},
						  .f1=287,.f2=1},
						 {.f0={(unsigned char *)_TmpG54,
						       (unsigned char *)_TmpG54,
						       (unsigned char *)_TmpG54 + 9U},
						  .f1=345,.f2=0},
						 {.f0={(unsigned char *)_TmpG55,
						       (unsigned char *)_TmpG55,
						       (unsigned char *)_TmpG55 + 6U},
						  .f1=342,.f2=0},
						 {.f0={(unsigned char *)_TmpG56,
						       (unsigned char *)_TmpG56,
						       (unsigned char *)_TmpG56 + 6U},
						  .f1=327,.f2=0},
						 {.f0={(unsigned char *)_TmpG57,
						       (unsigned char *)_TmpG57,
						       (unsigned char *)_TmpG57 + 15U},
						  .f1=334,.f2=0},
						 {.f0={(unsigned char *)_TmpG58,
						       (unsigned char *)_TmpG58,
						       (unsigned char *)_TmpG58 + 16U},
						  .f1=335,.f2=0},
						 {.f0={(unsigned char *)_TmpG59,
						       (unsigned char *)_TmpG59,
						       (unsigned char *)_TmpG59 + 6U},
						  .f1=302,.f2=0},
						 {.f0={(unsigned char *)_TmpG5A,
						       (unsigned char *)_TmpG5A,
						       (unsigned char *)_TmpG5A + 4U},
						  .f1=303,.f2=0},
						 {.f0={(unsigned char *)_TmpG5B,
						       (unsigned char *)_TmpG5B,
						       (unsigned char *)_TmpG5B + 8U},
						  .f1=262,.f2=1},
						 {.f0={(unsigned char *)_TmpG5C,
						       (unsigned char *)_TmpG5C,
						       (unsigned char *)_TmpG5C + 7U},
						  .f1=296,.f2=1},
						 {.f0={(unsigned char *)_TmpG5D,
						       (unsigned char *)_TmpG5D,
						       (unsigned char *)_TmpG5D + 11U},
						  .f1=296,.f2=1},
						 {.f0={(unsigned char *)_TmpG5E,
						       (unsigned char *)_TmpG5E,
						       (unsigned char *)_TmpG5E + 7U},
						  .f1=339,.f2=0},
						 {.f0={(unsigned char *)_TmpG5F,
						       (unsigned char *)_TmpG5F,
						       (unsigned char *)_TmpG5F + 6U},
						  .f1=278,.f2=1},
						 {.f0={(unsigned char *)_TmpG60,
						       (unsigned char *)_TmpG60,
						       (unsigned char *)_TmpG60 + 9U},
						  .f1=273,.f2=1},
						 {.f0={(unsigned char *)_TmpG61,
						       (unsigned char *)_TmpG61,
						       (unsigned char *)_TmpG61 + 13U},
						  .f1=273,.f2=1},
						 {.f0={(unsigned char *)_TmpG62,
						       (unsigned char *)_TmpG62,
						       (unsigned char *)_TmpG62 + 6U},
						  .f1=312,.f2=0},
						 {.f0={(unsigned char *)_TmpG63,
						       (unsigned char *)_TmpG63,
						       (unsigned char *)_TmpG63 + 8U},
						  .f1=343,.f2=0},
						 {.f0={(unsigned char *)_TmpG64,
						       (unsigned char *)_TmpG64,
						       (unsigned char *)_TmpG64 + 10U},
						  .f1=344,.f2=0},
						 {.f0={(unsigned char *)_TmpG65,
						       (unsigned char *)_TmpG65,
						       (unsigned char *)_TmpG65 + 5U},
						  .f1=263,.f2=1},
						 {.f0={(unsigned char *)_TmpG66,
						       (unsigned char *)_TmpG66,
						       (unsigned char *)_TmpG66 + 9U},
						  .f1=275,.f2=1},
						 {.f0={(unsigned char *)_TmpG67,
						       (unsigned char *)_TmpG67,
						       (unsigned char *)_TmpG67 + 13U},
						  .f1=275,.f2=1},
						 {.f0={(unsigned char *)_TmpG68,
						       (unsigned char *)_TmpG68,
						       (unsigned char *)_TmpG68 + 6U},
						  .f1=288,.f2=1}};
static int Cyc_Lex_num_keywords(long include_cyclone_keywords) {
  long _T0;
  struct _tuple30 * _T1;
  unsigned int _T2;
  int _T3;
  struct _tuple30 _T4;
  long _T5;
  int _T6;
  int sum = 0;
  { unsigned int i = 0U;
    _TL4: if (i < 103U) { goto _TL2;
    }else { goto _TL3;
    }
    _TL2: _T0 = include_cyclone_keywords;
    if (_T0) { goto _TL7;
    }else { goto _TL8;
    }
    _TL8: _T1 = Cyc_Lex_rw_array;
    _T2 = i;
    _T3 = (int)_T2;
    _T4 = _T1[_T3];
    _T5 = _T4.f2;
    if (_T5) { goto _TL7;
    }else { goto _TL5;
    }
    _TL7: sum = sum + 1;
    goto _TL6;
    _TL5: _TL6: i = i + 1;
    goto _TL4;
    _TL3: ;
  }_T6 = sum;
  return _T6;
}
static int Cyc_Lex_do_possible_qualifier(struct Cyc_Lexing_lexbuf * lexbuf) {
  struct Cyc_Lexing_lexbuf * _T0;
  struct _fat_ptr _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  int _T3;
  struct _fat_ptr _T4;
  struct Cyc_Lexing_lexbuf * _T5;
  int _T6;
  struct Cyc_Lexing_lexbuf * _T7;
  int _T8;
  int _T9;
  int _TA;
  struct _fat_ptr _TB;
  unsigned char * _TC;
  const char * _TD;
  int _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  int _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  int _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  int _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  int _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  int _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  int _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  int _T23;
  struct _fat_ptr _T24;
  struct _fat_ptr _T25;
  int _T26;
  struct _fat_ptr _T27;
  struct _fat_ptr _T28;
  int _T29;
  struct _fat_ptr _T2A;
  struct _fat_ptr _T2B;
  int _T2C;
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  int _T2F;
  struct _fat_ptr _T30;
  struct _fat_ptr _T31;
  int _T32;
  struct _fat_ptr _T33;
  struct _fat_ptr _T34;
  int _T35;
  struct _fat_ptr _T36;
  struct _fat_ptr _T37;
  int _T38;
  struct _fat_ptr _T39;
  struct _fat_ptr _T3A;
  int _T3B;
  struct _fat_ptr _T3C;
  struct _fat_ptr _T3D;
  int _T3E;
  struct _fat_ptr _T3F;
  struct _fat_ptr _T40;
  int _T41;
  struct _fat_ptr _T42;
  struct _fat_ptr _T43;
  int _T44;
  struct _fat_ptr _T45;
  struct _fat_ptr _T46;
  int _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  int _T4A;
  struct _fat_ptr _T4B;
  struct _fat_ptr _T4C;
  int _T4D;
  struct Cyc_Lexing_lexbuf * _T4E;
  struct Cyc_Lexing_lexbuf * _T4F;
  int _T50;
  _T0 = lexbuf;
  _T1 = _T0->lex_buffer;
  _T2 = lexbuf;
  _T3 = _T2->lex_start_pos;
  _T4 = _fat_ptr_plus(_T1,sizeof(char),_T3);
  { struct _fat_ptr b = _fat_ptr_plus(_T4,sizeof(char),1);
    _T5 = lexbuf;
    _T6 = _T5->lex_curr_pos;
    _T7 = lexbuf;
    _T8 = _T7->lex_start_pos;
    _T9 = _T8 + 1;
    _TA = _T6 - _T9;
    { unsigned int len = (unsigned int)_TA;
      _TB = b;
      _TC = _check_fat_subscript(_TB,sizeof(char),0);
      _TD = (const char *)_TC;
      { char _T51 = *_TD;
	_TE = (int)_T51;
	switch (_TE) {
	case 116: 
	  if (len != 6U) { goto _TLA;
	  }
	  _TF = b;
	  _T10 = _tag_fat("tagged",sizeof(char),7U);
	  _T11 = Cyc_strncmp(_TF,_T10,6U);
	  if (_T11 != 0) { goto _TLA;
	  }
	  return 359;
	  _TLA: if (len != 4U) { goto _TLC;
	  }
	  _T12 = b;
	  _T13 = _tag_fat("thin",sizeof(char),5U);
	  _T14 = Cyc_strncmp(_T12,_T13,4U);
	  if (_T14 != 0) { goto _TLC;
	  }
	  return 347;
	  _TLC: if (len != 6U) { goto _TLE;
	  }
	  _T15 = b;
	  _T16 = _tag_fat("throws",sizeof(char),7U);
	  _T17 = Cyc_strncmp(_T15,_T16,6U);
	  if (_T17 != 0) { goto _TLE;
	  }
	  return 354;
	  _TLE: goto _LL0;
	case 110: 
	  if (len != 7U) { goto _TL10;
	  }
	  _T18 = b;
	  _T19 = _tag_fat("notnull",sizeof(char),8U);
	  _T1A = Cyc_strncmp(_T18,_T19,7U);
	  if (_T1A != 0) { goto _TL10;
	  }
	  return 349;
	  _TL10: if (len != 7U) { goto _TL12;
	  }
	  _T1B = b;
	  _T1C = _tag_fat("numelts",sizeof(char),8U);
	  _T1D = Cyc_strncmp(_T1B,_T1C,7U);
	  if (_T1D != 0) { goto _TL12;
	  }
	  return 346;
	  _TL12: if (len != 8U) { goto _TL14;
	  }
	  _T1E = b;
	  _T1F = _tag_fat("nullable",sizeof(char),9U);
	  _T20 = Cyc_strncmp(_T1E,_T1F,8U);
	  if (_T20 != 0) { goto _TL14;
	  }
	  return 350;
	  _TL14: if (len != 10U) { goto _TL16;
	  }
	  _T21 = b;
	  _T22 = _tag_fat("nozeroterm",sizeof(char),11U);
	  _T23 = Cyc_strncmp(_T21,_T22,10U);
	  if (_T23 != 0) { goto _TL16;
	  }
	  return 357;
	  _TL16: goto _LL0;
	case 122: 
	  if (len != 8U) { goto _TL18;
	  }
	  _T24 = b;
	  _T25 = _tag_fat("zeroterm",sizeof(char),9U);
	  _T26 = Cyc_strncmp(_T24,_T25,8U);
	  if (_T26 != 0) { goto _TL18;
	  }
	  return 358;
	  _TL18: goto _LL0;
	case 101: 
	  if (len != 6U) { goto _TL1A;
	  }
	  _T27 = b;
	  _T28 = _tag_fat("effect",sizeof(char),7U);
	  _T29 = Cyc_strncmp(_T27,_T28,6U);
	  if (_T29 != 0) { goto _TL1A;
	  }
	  return 353;
	  _TL1A: if (len != 7U) { goto _TL1C;
	  }
	  _T2A = b;
	  _T2B = _tag_fat("ensures",sizeof(char),8U);
	  _T2C = Cyc_strncmp(_T2A,_T2B,7U);
	  if (_T2C != 0) { goto _TL1C;
	  }
	  return 352;
	  _TL1C: if (len != 10U) { goto _TL1E;
	  }
	  _T2D = b;
	  _T2E = _tag_fat("extensible",sizeof(char),11U);
	  _T2F = Cyc_strncmp(_T2D,_T2E,10U);
	  if (_T2F != 0) { goto _TL1E;
	  }
	  return 365;
	  _TL1E: goto _LL0;
	case 99: 
	  if (len != 6U) { goto _TL20;
	  }
	  _T30 = b;
	  _T31 = _tag_fat("checks",sizeof(char),7U);
	  _T32 = Cyc_strncmp(_T30,_T31,6U);
	  if (_T32 != 0) { goto _TL20;
	  }
	  return 364;
	  _TL20: goto _LL0;
	case 114: 
	  if (len != 8U) { goto _TL22;
	  }
	  _T33 = b;
	  _T34 = _tag_fat("requires",sizeof(char),9U);
	  _T35 = Cyc_strncmp(_T33,_T34,8U);
	  if (_T35 != 0) { goto _TL22;
	  }
	  return 351;
	  _TL22: if (len != 6U) { goto _TL24;
	  }
	  _T36 = b;
	  _T37 = _tag_fat("region",sizeof(char),7U);
	  _T38 = Cyc_strncmp(_T36,_T37,6U);
	  if (_T38 != 0) { goto _TL24;
	  }
	  return 356;
	  _TL24: goto _LL0;
	case 102: 
	  if (len != 3U) { goto _TL26;
	  }
	  _T39 = b;
	  _T3A = _tag_fat("fat",sizeof(char),4U);
	  _T3B = Cyc_strncmp(_T39,_T3A,3U);
	  if (_T3B != 0) { goto _TL26;
	  }
	  return 348;
	  _TL26: goto _LL0;
	case 97: 
	  if (len != 5U) { goto _TL28;
	  }
	  _T3C = b;
	  _T3D = _tag_fat("aqual",sizeof(char),6U);
	  _T3E = Cyc_strncmp(_T3C,_T3D,5U);
	  if (_T3E != 0) { goto _TL28;
	  }
	  return 362;
	  _TL28: if (len != 6U) { goto _TL2A;
	  }
	  _T3F = b;
	  _T40 = _tag_fat("assert",sizeof(char),7U);
	  _T41 = Cyc_strncmp(_T3F,_T40,6U);
	  if (_T41 != 0) { goto _TL2A;
	  }
	  return 360;
	  _TL2A: if (len != 8U) { goto _TL2C;
	  }
	  _T42 = b;
	  _T43 = _tag_fat("assert__",sizeof(char),9U);
	  _T44 = Cyc_strncmp(_T42,_T43,8U);
	  if (_T44 != 0) { goto _TL2C;
	  }
	  return 360;
	  _TL2C: if (len != 12U) { goto _TL2E;
	  }
	  _T45 = b;
	  _T46 = _tag_fat("assert_false",sizeof(char),13U);
	  _T47 = Cyc_strncmp(_T45,_T46,12U);
	  if (_T47 != 0) { goto _TL2E;
	  }
	  return 361;
	  _TL2E: if (len != 12U) { goto _TL30;
	  }
	  _T48 = b;
	  _T49 = _tag_fat("autoreleased",sizeof(char),13U);
	  _T4A = Cyc_strncmp(_T48,_T49,12U);
	  if (_T4A != 0) { goto _TL30;
	  }
	  return 366;
	  _TL30: goto _LL0;
	case 115: 
	  if (len != 6U) { goto _TL32;
	  }
	  _T4B = b;
	  _T4C = _tag_fat("subset",sizeof(char),7U);
	  _T4D = Cyc_strncmp(_T4B,_T4C,6U);
	  if (_T4D != 0) { goto _TL32;
	  }
	  return 355;
	  _TL32: goto _LL0;
	default: 
	  goto _LL0;
	}
	_LL0: ;
      }_T4E = lexbuf;
      _T4F = lexbuf;
      _T50 = _T4F->lex_start_pos;
      _T4E->lex_curr_pos = _T50 + 1;
      return 64;
    }
  }
}
static struct Cyc_Lex_Trie * Cyc_Lex_empty_trie(struct _RegionHandle * d,
						int dummy) {
  struct Cyc_Lex_Trie * _T0;
  struct _RegionHandle * _T1;
  _T1 = d;
  { struct Cyc_Lex_Trie * _T2 = _region_malloc(_T1,0U,sizeof(struct Cyc_Lex_Trie));
    _T2->children = Cyc_Lex_Zero();
    _T2->shared_str = 0;
    _T0 = (struct Cyc_Lex_Trie *)_T2;
  }return _T0;
}
static int Cyc_Lex_trie_char(int c) {
  int _T0;
  int _T1;
  int _T2;
  if (c != 92) { goto _TL34;
  }
  return 37;
  _TL34: if (c < 95) { goto _TL36;
  }
  _T0 = c - 58;
  return _T0;
  _TL36: if (c <= 64) { goto _TL38;
  }
  _T1 = c - 55;
  return _T1;
  _TL38: _T2 = c - 48;
  return _T2;
}
static struct Cyc_Lex_Trie * Cyc_Lex_trie_lookup(struct _RegionHandle * r,
						 struct Cyc_Lex_Trie * t,
						 struct _fat_ptr buff,int offset,
						 unsigned int len) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned int _T4;
  int (* _T5)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T6)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_Lex_Trie * _T9;
  struct _union_TrieChildren_One _TA;
  unsigned int _TB;
  struct _union_TrieChildren_Many _TC;
  struct _fat_ptr _TD;
  unsigned int _TE;
  int _TF;
  unsigned char * _T10;
  const char * _T11;
  char _T12;
  int _T13;
  struct Cyc_Lex_Trie * * _T14;
  int _T15;
  struct Cyc_Lex_Trie * _T16;
  struct Cyc_Lex_Trie * * _T17;
  int _T18;
  struct Cyc_Lex_Trie * _T19;
  struct _RegionHandle * _T1A;
  struct Cyc_Lex_Trie * * _T1B;
  int _T1C;
  struct _union_TrieChildren_One _T1D;
  struct _tuple29 _T1E;
  struct _union_TrieChildren_One _T1F;
  struct _tuple29 _T20;
  int _T21;
  struct _fat_ptr _T22;
  unsigned char * _T23;
  const char * _T24;
  unsigned int _T25;
  int _T26;
  char _T27;
  int _T28;
  struct Cyc_Lex_Trie * * _T29;
  struct Cyc_Lex_Trie * * _T2A;
  struct _RegionHandle * _T2B;
  unsigned int _T2C;
  unsigned int _T2D;
  struct Cyc_Lex_Trie * * _T2E;
  int _T2F;
  struct _fat_ptr _T30;
  unsigned char * _T31;
  const char * _T32;
  unsigned int _T33;
  int _T34;
  char _T35;
  int _T36;
  struct Cyc_Lex_Trie * * _T37;
  int _T38;
  struct Cyc_Lex_Trie * _T39;
  struct _RegionHandle * _T3A;
  struct Cyc_Lex_Trie * _T3B;
  struct Cyc_Lex_Trie * * _T3C;
  int _T3D;
  struct _RegionHandle * _T3E;
  struct Cyc_Lex_Trie * _T3F;
  struct Cyc_Lex_Trie * _T40;
  struct Cyc_Lex_Trie * _T41;
  struct _fat_ptr _T42;
  unsigned int _T43;
  unsigned int _T44;
  int _T45;
  unsigned char * _T46;
  const char * _T47;
  char _T48;
  int _T49;
  struct Cyc_Lex_Trie * _T4A;
  struct Cyc_Lex_Trie * _T4B;
  struct Cyc_Lex_Trie * _T4C;
  unsigned int i = 0U;
  _T0 = buff;
  _T1 = offset;
  buff = _fat_ptr_plus(_T0,sizeof(char),_T1);
  _T2 = len;
  _T3 = buff;
  _T4 = _get_fat_size(_T3,sizeof(char));
  if (_T2 < _T4) { goto _TL3A;
  }else { goto _TL3C;
  }
  _TL3C: _T6 = Cyc_Warn_impos;
  { int (* _T4D)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							     struct _fat_ptr))_T6;
    _T5 = _T4D;
  }_T7 = _tag_fat("array bounds in trie_lookup",sizeof(char),28U);
  _T8 = _tag_fat(0U,sizeof(void *),0);
  _T5(_T7,_T8);
  goto _TL3B;
  _TL3A: _TL3B: _TL3D: if (i < len) { goto _TL3E;
  }else { goto _TL3F;
  }
  _TL3E: _T9 = _check_null(t);
  { union Cyc_Lex_TrieChildren _T4D = _T9->children;
    struct Cyc_Lex_Trie * _T4E;
    int _T4F;
    struct Cyc_Lex_Trie * * _T50;
    _TA = _T4D.One;
    _TB = _TA.tag;
    switch (_TB) {
    case 3: 
      _TC = _T4D.Many;
      _T50 = _TC.val;
      { struct Cyc_Lex_Trie * * arr = _T50;
	_TD = buff;
	_TE = i;
	_TF = (int)_TE;
	_T10 = _check_fat_subscript(_TD,sizeof(char),_TF);
	_T11 = (const char *)_T10;
	_T12 = *_T11;
	_T13 = (int)_T12;
	{ int ch = Cyc_Lex_trie_char(_T13);
	  _T14 = arr;
	  _T15 = ch;
	  _T16 = _T14[_T15];
	  if (_T16 != 0) { goto _TL41;
	  }
	  _T17 = arr;
	  _T18 = ch;
	  _T1A = r;
	  { struct Cyc_Lex_Trie * _T51 = _region_malloc(_T1A,0U,sizeof(struct Cyc_Lex_Trie));
	    _T51->children = Cyc_Lex_Zero();
	    _T51->shared_str = 0;
	    _T19 = (struct Cyc_Lex_Trie *)_T51;
	  }_T17[_T18] = _T19;
	  goto _TL42;
	  _TL41: _TL42: _T1B = arr;
	  _T1C = ch;
	  t = _T1B[_T1C];
	  i = i + 1;
	  goto _LL0;
	}
      }
    case 2: 
      _T1D = _T4D.One;
      _T1E = _T1D.val;
      _T4F = _T1E.f0;
      _T1F = _T4D.One;
      _T20 = _T1F.val;
      _T4E = _T20.f1;
      { int one_ch = _T4F;
	struct Cyc_Lex_Trie * one_trie = _T4E;
	_T21 = one_ch;
	_T22 = buff;
	_T23 = _T22.curr;
	_T24 = (const char *)_T23;
	_T25 = i;
	_T26 = (int)_T25;
	_T27 = _T24[_T26];
	_T28 = (int)_T27;
	if (_T21 != _T28) { goto _TL43;
	}
	t = one_trie;
	goto _TL44;
	_TL43: { unsigned int _T51 = 65U;
	  _T2B = r;
	  _T2C = _check_times(_T51,sizeof(struct Cyc_Lex_Trie *));
	  { struct Cyc_Lex_Trie * * _T52 = _region_malloc(_T2B,0U,_T2C);
	    { unsigned int _T53 = _T51;
	      unsigned int j;
	      j = 0;
	      _TL48: if (j < _T53) { goto _TL46;
	      }else { goto _TL47;
	      }
	      _TL46: _T2D = j;
	      _T52[_T2D] = 0;
	      j = j + 1;
	      goto _TL48;
	      _TL47: ;
	    }_T2A = (struct Cyc_Lex_Trie * *)_T52;
	  }_T29 = _T2A;
	}{ struct Cyc_Lex_Trie * * arr = _T29;
	  _T2E = arr;
	  _T2F = Cyc_Lex_trie_char(one_ch);
	  _T2E[_T2F] = one_trie;
	  _T30 = buff;
	  _T31 = _T30.curr;
	  _T32 = (const char *)_T31;
	  _T33 = i;
	  _T34 = (int)_T33;
	  _T35 = _T32[_T34];
	  _T36 = (int)_T35;
	  { int ch = Cyc_Lex_trie_char(_T36);
	    _T37 = arr;
	    _T38 = ch;
	    _T3A = r;
	    { struct Cyc_Lex_Trie * _T51 = _region_malloc(_T3A,0U,sizeof(struct Cyc_Lex_Trie));
	      _T51->children = Cyc_Lex_Zero();
	      _T51->shared_str = 0;
	      _T39 = (struct Cyc_Lex_Trie *)_T51;
	    }_T37[_T38] = _T39;
	    _T3B = t;
	    _T3B->children = Cyc_Lex_Many(arr);
	    _T3C = arr;
	    _T3D = ch;
	    t = _T3C[_T3D];
	  }
	}_TL44: i = i + 1;
	goto _LL0;
      }
    default: 
      _TL49: if (i < len) { goto _TL4A;
      }else { goto _TL4B;
      }
      _TL4A: { struct Cyc_Lex_Trie * next;
	_T3E = r;
	next = _region_malloc(_T3E,0U,sizeof(struct Cyc_Lex_Trie));
	_T3F = next;
	_T3F->children = Cyc_Lex_Zero();
	_T40 = next;
	_T40->shared_str = 0;
	_T41 = t;
	_T42 = buff;
	_T43 = i;
	i = _T43 + 1;
	_T44 = _T43;
	_T45 = (int)_T44;
	_T46 = _check_fat_subscript(_T42,sizeof(char),_T45);
	_T47 = (const char *)_T46;
	_T48 = *_T47;
	_T49 = (int)_T48;
	_T4A = next;
	_T41->children = Cyc_Lex_One(_T49,_T4A);
	t = next;
      }goto _TL49;
      _TL4B: _T4B = t;
      return _T4B;
    }
    _LL0: ;
  }goto _TL3D;
  _TL3F: _T4C = t;
  return _T4C;
}
 struct _tuple31 {
  struct Cyc_Lex_Trie * f0;
  struct Cyc_Xarray_Xarray * f1;
  struct _fat_ptr f2;
  int f3;
  int f4;
};
static int Cyc_Lex_str_index_body(struct _RegionHandle * d,struct _tuple31 * env) {
  struct _tuple31 * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_Lex_Trie * _T2;
  struct _fat_ptr _T3;
  int _T4;
  int _T5;
  unsigned int _T6;
  struct Cyc_Lex_Trie * _T7;
  int _T8;
  int _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  int _TE;
  struct _fat_ptr _TF;
  int _T10;
  unsigned long _T11;
  int (* _T12)(struct Cyc_Xarray_Xarray *,struct _fat_ptr *);
  int (* _T13)(struct Cyc_Xarray_Xarray *,void *);
  struct Cyc_Xarray_Xarray * _T14;
  struct _fat_ptr * _T15;
  struct _fat_ptr _T16;
  struct Cyc_Lex_Trie * _T17;
  struct Cyc_Lex_Trie * _T18;
  int _T19;
  _T0 = env;
  { struct _tuple31 _T1A = *_T0;
    int _T1B;
    int _T1C;
    struct _fat_ptr _T1D;
    struct Cyc_Xarray_Xarray * _T1E;
    struct Cyc_Lex_Trie * _T1F;
    _T1F = _T1A.f0;
    _T1E = _T1A.f1;
    _T1D = _T1A.f2;
    _T1C = _T1A.f3;
    _T1B = _T1A.f4;
    { struct Cyc_Lex_Trie * tree = _T1F;
      struct Cyc_Xarray_Xarray * symbols = _T1E;
      struct _fat_ptr buff = _T1D;
      int offset = _T1C;
      int len = _T1B;
      _T1 = d;
      _T2 = tree;
      _T3 = buff;
      _T4 = offset;
      _T5 = len;
      _T6 = (unsigned int)_T5;
      { struct Cyc_Lex_Trie * t = Cyc_Lex_trie_lookup(_T1,_T2,_T3,_T4,_T6);
	_T7 = _check_null(t);
	_T8 = _T7->shared_str;
	if (_T8 != 0) { goto _TL4C;
	}
	_T9 = len + 1;
	_TA = (unsigned int)_T9;
	{ struct _fat_ptr newstr = Cyc_Core_new_string(_TA);
	  _TB = newstr;
	  _TC = _fat_ptr_decrease_size(_TB,sizeof(char),1U);
	  _TD = buff;
	  _TE = offset;
	  _TF = _fat_ptr_plus(_TD,sizeof(char),_TE);
	  _T10 = len;
	  _T11 = (unsigned long)_T10;
	  Cyc_zstrncpy(_TC,_TF,_T11);
	  _T13 = Cyc_Xarray_add_ind;
	  { int (* _T20)(struct Cyc_Xarray_Xarray *,struct _fat_ptr *) = (int (*)(struct Cyc_Xarray_Xarray *,
										  struct _fat_ptr *))_T13;
	    _T12 = _T20;
	  }_T14 = symbols;
	  { struct _fat_ptr * _T20 = _cycalloc(sizeof(struct _fat_ptr));
	    _T16 = newstr;
	    *_T20 = _T16;
	    _T15 = (struct _fat_ptr *)_T20;
	  }{ int ans = _T12(_T14,_T15);
	    _T17 = t;
	    _T17->shared_str = ans;
	  }
	}goto _TL4D;
	_TL4C: _TL4D: _T18 = t;
	_T19 = _T18->shared_str;
	return _T19;
      }
    }
  }
}
static int Cyc_Lex_str_index(struct _fat_ptr buff,int offset,int len) {
  struct Cyc_Lex_DynTrieSymbols * _T0;
  struct _tuple31 _T1;
  int (* _T2)(struct Cyc_Core_DynamicRegion *,struct _tuple31 *,int (*)(struct _RegionHandle *,
									struct _tuple31 *));
  void * (* _T3)(struct Cyc_Core_DynamicRegion *,void *,void * (*)(struct _RegionHandle *,
								   void *));
  struct Cyc_Core_DynamicRegion * _T4;
  struct _tuple31 * _T5;
  struct Cyc_Lex_DynTrieSymbols * _T6;
  struct Cyc_Lex_DynTrieSymbols _T7;
  int _T8;
  struct Cyc_Lex_DynTrieSymbols * idt = 0;
  { struct Cyc_Lex_DynTrieSymbols * _T9 = idt;
    struct Cyc_Lex_DynTrieSymbols * _TA = Cyc_Lex_ids_trie;
    idt = _TA;
    Cyc_Lex_ids_trie = _T9;
  }_T0 = _check_null(idt);
  { struct Cyc_Lex_DynTrieSymbols _T9 = *_T0;
    struct Cyc_Xarray_Xarray * _TA;
    struct Cyc_Lex_Trie * _TB;
    struct Cyc_Core_DynamicRegion * _TC;
    _TC = _T9.dyn;
    _TB = _T9.t;
    _TA = _T9.symbols;
    { struct Cyc_Core_DynamicRegion * dyn = _TC;
      struct Cyc_Lex_Trie * t = _TB;
      struct Cyc_Xarray_Xarray * symbols = _TA;
      { struct _tuple31 _TD;
	_TD.f0 = t;
	_TD.f1 = symbols;
	_TD.f2 = buff;
	_TD.f3 = offset;
	_TD.f4 = len;
	_T1 = _TD;
      }{ struct _tuple31 env = _T1;
	_T3 = Cyc_Core_open_region;
	{ int (* _TD)(struct Cyc_Core_DynamicRegion *,struct _tuple31 *,int (*)(struct _RegionHandle *,
										struct _tuple31 *)) = (int (*)(struct Cyc_Core_DynamicRegion *,
													       struct _tuple31 *,
													       int (*)(struct _RegionHandle *,
														       struct _tuple31 *)))_T3;
	  _T2 = _TD;
	}_T4 = dyn;
	_T5 = &env;
	{ int res = _T2(_T4,_T5,Cyc_Lex_str_index_body);
	  _T6 = idt;
	  { struct Cyc_Lex_DynTrieSymbols _TD;
	    _TD.dyn = dyn;
	    _TD.t = t;
	    _TD.symbols = symbols;
	    _T7 = _TD;
	  }*_T6 = _T7;
	  { struct Cyc_Lex_DynTrieSymbols * _TD = idt;
	    struct Cyc_Lex_DynTrieSymbols * _TE = Cyc_Lex_ids_trie;
	    idt = _TE;
	    Cyc_Lex_ids_trie = _TD;
	  }_T8 = res;
	  return _T8;
	}
      }
    }
  }
}
static int Cyc_Lex_str_index_lbuf(struct Cyc_Lexing_lexbuf * lbuf) {
  struct Cyc_Lexing_lexbuf * _T0;
  struct _fat_ptr _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  int _T3;
  struct Cyc_Lexing_lexbuf * _T4;
  int _T5;
  struct Cyc_Lexing_lexbuf * _T6;
  int _T7;
  int _T8;
  int _T9;
  _T0 = lbuf;
  _T1 = _T0->lex_buffer;
  _T2 = lbuf;
  _T3 = _T2->lex_start_pos;
  _T4 = lbuf;
  _T5 = _T4->lex_curr_pos;
  _T6 = lbuf;
  _T7 = _T6->lex_start_pos;
  _T8 = _T5 - _T7;
  _T9 = Cyc_Lex_str_index(_T1,_T3,_T8);
  return _T9;
}
 struct _tuple32 {
  struct Cyc_Lex_Trie * f0;
  struct _fat_ptr f1;
};
static int Cyc_Lex_insert_typedef_body(struct _RegionHandle * h,struct _tuple32 * arg) {
  struct _tuple32 * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_Lex_Trie * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  unsigned int _T6;
  struct Cyc_Lex_Trie * _T7;
  _T0 = arg;
  { struct _tuple32 _T8 = *_T0;
    struct _fat_ptr _T9;
    struct Cyc_Lex_Trie * _TA;
    _TA = _T8.f0;
    _T9 = _T8.f1;
    { struct Cyc_Lex_Trie * t = _TA;
      struct _fat_ptr s = _T9;
      _T1 = h;
      _T2 = t;
      _T3 = s;
      _T4 = s;
      _T5 = _get_fat_size(_T4,sizeof(char));
      _T6 = _T5 - 1U;
      { struct Cyc_Lex_Trie * t_node = Cyc_Lex_trie_lookup(_T1,_T2,_T3,0,
							   _T6);
	_T7 = _check_null(t_node);
	_T7->shared_str = 1;
	return 0;
      }
    }
  }
}
static void Cyc_Lex_insert_typedef(struct _fat_ptr * sptr) {
  struct _fat_ptr * _T0;
  struct Cyc_Lex_DynTrie * _T1;
  struct _tuple32 _T2;
  int (* _T3)(struct Cyc_Core_DynamicRegion *,struct _tuple32 *,int (*)(struct _RegionHandle *,
									struct _tuple32 *));
  void * (* _T4)(struct Cyc_Core_DynamicRegion *,void *,void * (*)(struct _RegionHandle *,
								   void *));
  struct Cyc_Core_DynamicRegion * _T5;
  struct _tuple32 * _T6;
  struct _tuple32 * _T7;
  struct Cyc_Lex_DynTrie * _T8;
  struct Cyc_Lex_DynTrie _T9;
  _T0 = sptr;
  { struct _fat_ptr s = *_T0;
    struct Cyc_Lex_DynTrie * tdefs = 0;
    { struct Cyc_Lex_DynTrie * _TA = tdefs;
      struct Cyc_Lex_DynTrie * _TB = Cyc_Lex_typedefs_trie;
      tdefs = _TB;
      Cyc_Lex_typedefs_trie = _TA;
    }_T1 = _check_null(tdefs);
    { struct Cyc_Lex_DynTrie _TA = *_T1;
      struct Cyc_Lex_Trie * _TB;
      struct Cyc_Core_DynamicRegion * _TC;
      _TC = _TA.dyn;
      _TB = _TA.t;
      { struct Cyc_Core_DynamicRegion * dyn = _TC;
	struct Cyc_Lex_Trie * t = _TB;
	{ struct _tuple32 _TD;
	  _TD.f0 = t;
	  _TD.f1 = s;
	  _T2 = _TD;
	}{ struct _tuple32 env = _T2;
	  _T4 = Cyc_Core_open_region;
	  { int (* _TD)(struct Cyc_Core_DynamicRegion *,struct _tuple32 *,
			int (*)(struct _RegionHandle *,struct _tuple32 *)) = (int (*)(struct Cyc_Core_DynamicRegion *,
										      struct _tuple32 *,
										      int (*)(struct _RegionHandle *,
											      struct _tuple32 *)))_T4;
	    _T3 = _TD;
	  }_T5 = dyn;
	  _T6 = &env;
	  _T7 = (struct _tuple32 *)_T6;
	  _T3(_T5,_T7,Cyc_Lex_insert_typedef_body);
	  _T8 = tdefs;
	  { struct Cyc_Lex_DynTrie _TD;
	    _TD.dyn = dyn;
	    _TD.t = t;
	    _T9 = _TD;
	  }*_T8 = _T9;
	  { struct Cyc_Lex_DynTrie * _TD = tdefs;
	    struct Cyc_Lex_DynTrie * _TE = Cyc_Lex_typedefs_trie;
	    tdefs = _TE;
	    Cyc_Lex_typedefs_trie = _TD;
	  }return;
	}
      }
    }
  }
}
 struct _tuple33 {
  struct Cyc_Lex_Trie * f0;
  struct Cyc_Xarray_Xarray * f1;
  int f2;
};
static struct _fat_ptr * Cyc_Lex_get_symbol_body(struct _RegionHandle * dyn,
						 struct _tuple33 * env) {
  struct _tuple33 * _T0;
  struct _fat_ptr * (* _T1)(struct Cyc_Xarray_Xarray *,int);
  void * (* _T2)(struct Cyc_Xarray_Xarray *,int);
  struct _fat_ptr * _T3;
  _T0 = env;
  { struct _tuple33 _T4 = *_T0;
    int _T5;
    struct Cyc_Xarray_Xarray * _T6;
    struct Cyc_Lex_Trie * _T7;
    _T7 = _T4.f0;
    _T6 = _T4.f1;
    _T5 = _T4.f2;
    { struct Cyc_Lex_Trie * t = _T7;
      struct Cyc_Xarray_Xarray * symbols = _T6;
      int symbol_num = _T5;
      _T2 = Cyc_Xarray_get;
      { struct _fat_ptr * (* _T8)(struct Cyc_Xarray_Xarray *,int) = (struct _fat_ptr * (*)(struct Cyc_Xarray_Xarray *,
											   int))_T2;
	_T1 = _T8;
      }_T3 = _T1(symbols,symbol_num);
      return _T3;
    }
  }
}
static struct _fat_ptr * Cyc_Lex_get_symbol(int symbol_num) {
  struct Cyc_Lex_DynTrieSymbols * _T0;
  struct _tuple33 _T1;
  struct _fat_ptr * (* _T2)(struct Cyc_Core_DynamicRegion *,struct _tuple33 *,
			    struct _fat_ptr * (*)(struct _RegionHandle *,
						  struct _tuple33 *));
  void * (* _T3)(struct Cyc_Core_DynamicRegion *,void *,void * (*)(struct _RegionHandle *,
								   void *));
  struct Cyc_Core_DynamicRegion * _T4;
  struct _tuple33 * _T5;
  struct Cyc_Lex_DynTrieSymbols * _T6;
  struct Cyc_Lex_DynTrieSymbols _T7;
  struct _fat_ptr * _T8;
  struct Cyc_Lex_DynTrieSymbols * idt = 0;
  { struct Cyc_Lex_DynTrieSymbols * _T9 = idt;
    struct Cyc_Lex_DynTrieSymbols * _TA = Cyc_Lex_ids_trie;
    idt = _TA;
    Cyc_Lex_ids_trie = _T9;
  }_T0 = _check_null(idt);
  { struct Cyc_Lex_DynTrieSymbols _T9 = *_T0;
    struct Cyc_Xarray_Xarray * _TA;
    struct Cyc_Lex_Trie * _TB;
    struct Cyc_Core_DynamicRegion * _TC;
    _TC = _T9.dyn;
    _TB = _T9.t;
    _TA = _T9.symbols;
    { struct Cyc_Core_DynamicRegion * dyn = _TC;
      struct Cyc_Lex_Trie * t = _TB;
      struct Cyc_Xarray_Xarray * symbols = _TA;
      { struct _tuple33 _TD;
	_TD.f0 = t;
	_TD.f1 = symbols;
	_TD.f2 = symbol_num;
	_T1 = _TD;
      }{ struct _tuple33 env = _T1;
	_T3 = Cyc_Core_open_region;
	{ struct _fat_ptr * (* _TD)(struct Cyc_Core_DynamicRegion *,struct _tuple33 *,
				    struct _fat_ptr * (*)(struct _RegionHandle *,
							  struct _tuple33 *)) = (struct _fat_ptr * (*)(struct Cyc_Core_DynamicRegion *,
												       struct _tuple33 *,
												       struct _fat_ptr * (*)(struct _RegionHandle *,
															     struct _tuple33 *)))_T3;
	  _T2 = _TD;
	}_T4 = dyn;
	_T5 = &env;
	{ struct _fat_ptr * res = _T2(_T4,_T5,Cyc_Lex_get_symbol_body);
	  _T6 = idt;
	  { struct Cyc_Lex_DynTrieSymbols _TD;
	    _TD.dyn = dyn;
	    _TD.t = t;
	    _TD.symbols = symbols;
	    _T7 = _TD;
	  }*_T6 = _T7;
	  { struct Cyc_Lex_DynTrieSymbols * _TD = idt;
	    struct Cyc_Lex_DynTrieSymbols * _TE = Cyc_Lex_ids_trie;
	    idt = _TE;
	    Cyc_Lex_ids_trie = _TD;
	  }_T8 = res;
	  return _T8;
	}
      }
    }
  }
}
static int Cyc_Lex_int_of_char(char c) {
  char _T0;
  int _T1;
  char _T2;
  int _T3;
  char _T4;
  int _T5;
  int _T6;
  char _T7;
  int _T8;
  char _T9;
  int _TA;
  char _TB;
  int _TC;
  int _TD;
  int _TE;
  char _TF;
  int _T10;
  char _T11;
  int _T12;
  char _T13;
  int _T14;
  int _T15;
  int _T16;
  struct Cyc_Core_Invalid_argument_exn_struct * _T17;
  void * _T18;
  _T0 = c;
  _T1 = (int)_T0;
  if (48 > _T1) { goto _TL4E;
  }
  _T2 = c;
  _T3 = (int)_T2;
  if (_T3 > 57) { goto _TL4E;
  }
  _T4 = c;
  _T5 = (int)_T4;
  _T6 = _T5 - 48;
  return _T6;
  _TL4E: _T7 = c;
  _T8 = (int)_T7;
  if (97 > _T8) { goto _TL50;
  }
  _T9 = c;
  _TA = (int)_T9;
  if (_TA > 102) { goto _TL50;
  }
  _TB = c;
  _TC = (int)_TB;
  _TD = 10 + _TC;
  _TE = _TD - 97;
  return _TE;
  _TL50: _TF = c;
  _T10 = (int)_TF;
  if (65 > _T10) { goto _TL52;
  }
  _T11 = c;
  _T12 = (int)_T11;
  if (_T12 > 70) { goto _TL52;
  }
  _T13 = c;
  _T14 = (int)_T13;
  _T15 = 10 + _T14;
  _T16 = _T15 - 65;
  return _T16;
  _TL52: { struct Cyc_Core_Invalid_argument_exn_struct * _T19 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T19->tag = Cyc_Core_Invalid_argument;
    _T19->f1 = _tag_fat("string to integer conversion",sizeof(char),29U);
    _T17 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T19;
  }_T18 = (void *)_T17;
  _throw(_T18);
}
static union Cyc_Absyn_Cnst Cyc_Lex_intconst(struct Cyc_Lexing_lexbuf * lbuf,
					     int start,int end,int base) {
  struct Cyc_Lexing_lexbuf * _T0;
  int _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  struct _fat_ptr _T3;
  int _T4;
  struct Cyc_Lexing_lexbuf * _T5;
  int _T6;
  int _T7;
  struct _fat_ptr _T8;
  int _T9;
  unsigned char * _TA;
  char * _TB;
  char _TC;
  int _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  char * _T10;
  int _T11;
  char _T12;
  int _T13;
  struct _fat_ptr _T14;
  unsigned char * _T15;
  char * _T16;
  int _T17;
  char _T18;
  int _T19;
  struct _fat_ptr _T1A;
  unsigned char * _T1B;
  char * _T1C;
  int _T1D;
  char _T1E;
  int _T1F;
  struct _fat_ptr _T20;
  unsigned char * _T21;
  char * _T22;
  int _T23;
  char _T24;
  int _T25;
  struct _fat_ptr _T26;
  unsigned char * _T27;
  char * _T28;
  int _T29;
  char _T2A;
  int _T2B;
  enum Cyc_Absyn_Sign _T2C;
  int _T2D;
  unsigned long long _T2E;
  int _T2F;
  unsigned long long _T30;
  unsigned long long _T31;
  struct _fat_ptr _T32;
  int _T33;
  unsigned char * _T34;
  char * _T35;
  char _T36;
  int _T37;
  unsigned long long _T38;
  long _T39;
  enum Cyc_Absyn_Size_of _T3A;
  int _T3B;
  struct _fat_ptr _T3C;
  struct Cyc_Lexing_lexbuf * _T3D;
  enum Cyc_Absyn_Size_of _T3E;
  int _T3F;
  union Cyc_Absyn_Cnst _T40;
  unsigned long long _T41;
  unsigned int _T42;
  union Cyc_Absyn_Cnst _T43;
  unsigned long long _T44;
  long long _T45;
  int _T46;
  long long _T47;
  long long _T48;
  struct _fat_ptr _T49;
  int _T4A;
  unsigned char * _T4B;
  char * _T4C;
  char _T4D;
  int _T4E;
  long long _T4F;
  long long _T50;
  unsigned long long _T51;
  long _T52;
  enum Cyc_Absyn_Size_of _T53;
  int _T54;
  struct _fat_ptr _T55;
  struct Cyc_Lexing_lexbuf * _T56;
  enum Cyc_Absyn_Size_of _T57;
  int _T58;
  union Cyc_Absyn_Cnst _T59;
  long long _T5A;
  union Cyc_Absyn_Cnst _T5B;
  union Cyc_Absyn_Cnst _T5C;
  enum Cyc_Absyn_Sign sn = 2U;
  _T0 = lbuf;
  _T1 = _T0->lex_start_pos;
  start = start + _T1;
  _T2 = lbuf;
  _T3 = _T2->lex_buffer;
  _T4 = start;
  { struct _fat_ptr buff = _fat_ptr_plus(_T3,sizeof(char),_T4);
    _T5 = lbuf;
    _T6 = _T5->lex_curr_pos;
    _T7 = end;
    { int end2 = _T6 - _T7;
      int len = end2 - start;
      enum Cyc_Absyn_Size_of size = 2U;
      long declared_size = 0;
      union Cyc_Absyn_Cnst res;
      if (len < 1) { goto _TL54;
      }
      _T8 = buff;
      _T9 = len - 1;
      _TA = _check_fat_subscript(_T8,sizeof(char),_T9);
      _TB = (char *)_TA;
      _TC = *_TB;
      _TD = (int)_TC;
      if (_TD == 108) { goto _TL56;
      }else { goto _TL57;
      }
      _TL57: _TE = buff;
      _TF = _TE.curr;
      _T10 = (char *)_TF;
      _T11 = len - 1;
      _T12 = _T10[_T11];
      _T13 = (int)_T12;
      if (_T13 == 76) { goto _TL56;
      }else { goto _TL54;
      }
      _TL56: len = len - 1;
      declared_size = 1;
      if (len < 1) { goto _TL58;
      }
      _T14 = buff;
      _T15 = _T14.curr;
      _T16 = (char *)_T15;
      _T17 = len - 1;
      _T18 = _T16[_T17];
      _T19 = (int)_T18;
      if (_T19 == 108) { goto _TL5A;
      }else { goto _TL5B;
      }
      _TL5B: _T1A = buff;
      _T1B = _T1A.curr;
      _T1C = (char *)_T1B;
      _T1D = len - 1;
      _T1E = _T1C[_T1D];
      _T1F = (int)_T1E;
      if (_T1F == 76) { goto _TL5A;
      }else { goto _TL58;
      }
      _TL5A: len = len - 1;
      size = 4U;
      goto _TL59;
      _TL58: _TL59: goto _TL55;
      _TL54: _TL55: if (len < 1) { goto _TL5C;
      }
      _T20 = buff;
      _T21 = _T20.curr;
      _T22 = (char *)_T21;
      _T23 = len - 1;
      _T24 = _T22[_T23];
      _T25 = (int)_T24;
      if (_T25 == 117) { goto _TL5E;
      }else { goto _TL5F;
      }
      _TL5F: _T26 = buff;
      _T27 = _T26.curr;
      _T28 = (char *)_T27;
      _T29 = len - 1;
      _T2A = _T28[_T29];
      _T2B = (int)_T2A;
      if (_T2B == 85) { goto _TL5E;
      }else { goto _TL5C;
      }
      _TL5E: len = len - 1;
      sn = 1U;
      goto _TL5D;
      _TL5C: _TL5D: _T2C = sn;
      _T2D = (int)_T2C;
      if (_T2D != 1) { goto _TL60;
      }
      { unsigned long long n = 0U;
	{ int i = 0;
	  _TL65: if (i < len) { goto _TL63;
	  }else { goto _TL64;
	  }
	  _TL63: _T2E = n;
	  _T2F = base;
	  _T30 = (unsigned long long)_T2F;
	  _T31 = _T2E * _T30;
	  _T32 = buff;
	  _T33 = i;
	  _T34 = _check_fat_subscript(_T32,sizeof(char),_T33);
	  _T35 = (char *)_T34;
	  _T36 = *_T35;
	  _T37 = Cyc_Lex_int_of_char(_T36);
	  _T38 = (unsigned long long)_T37;
	  n = _T31 + _T38;
	  i = i + 1;
	  goto _TL65;
	  _TL64: ;
	}if (n <= 4294967295U) { goto _TL66;
	}
	_T39 = declared_size;
	if (! _T39) { goto _TL68;
	}
	_T3A = size;
	_T3B = (int)_T3A;
	if (_T3B != 2) { goto _TL68;
	}
	_T3C = _tag_fat("integer constant too large",sizeof(char),27U);
	_T3D = lbuf;
	Cyc_Lex_err(_T3C,_T3D);
	goto _TL69;
	_TL68: _TL69: size = 4U;
	goto _TL67;
	_TL66: _TL67: _T3E = size;
	_T3F = (int)_T3E;
	if (_T3F != 2) { goto _TL6A;
	}
	{ union Cyc_Absyn_Cnst _T5D;
	  (_T5D.Int_c).tag = 5U;
	  ((_T5D.Int_c).val).f0 = sn;
	  _T41 = n;
	  _T42 = (unsigned int)_T41;
	  ((_T5D.Int_c).val).f1 = (int)_T42;
	  _T40 = _T5D;
	}res = _T40;
	goto _TL6B;
	_TL6A: { union Cyc_Absyn_Cnst _T5D;
	  (_T5D.LongLong_c).tag = 6U;
	  ((_T5D.LongLong_c).val).f0 = sn;
	  _T44 = n;
	  ((_T5D.LongLong_c).val).f1 = (long long)_T44;
	  _T43 = _T5D;
	}res = _T43;
	_TL6B: ;
      }goto _TL61;
      _TL60: { long long n = 0;
	{ int i = 0;
	  _TL6F: if (i < len) { goto _TL6D;
	  }else { goto _TL6E;
	  }
	  _TL6D: _T45 = n;
	  _T46 = base;
	  _T47 = (long long)_T46;
	  _T48 = _T45 * _T47;
	  _T49 = buff;
	  _T4A = i;
	  _T4B = _check_fat_subscript(_T49,sizeof(char),_T4A);
	  _T4C = (char *)_T4B;
	  _T4D = *_T4C;
	  _T4E = Cyc_Lex_int_of_char(_T4D);
	  _T4F = (long long)_T4E;
	  n = _T48 + _T4F;
	  i = i + 1;
	  goto _TL6F;
	  _TL6E: ;
	}_T50 = n;
	_T51 = (unsigned long long)_T50;
	{ unsigned long long x = _T51 >> 32;
	  if (x == 4294967295U) { goto _TL70;
	  }
	  if (x == 0U) { goto _TL70;
	  }
	  _T52 = declared_size;
	  if (! _T52) { goto _TL72;
	  }
	  _T53 = size;
	  _T54 = (int)_T53;
	  if (_T54 != 2) { goto _TL72;
	  }
	  _T55 = _tag_fat("integer constant too large",sizeof(char),27U);
	  _T56 = lbuf;
	  Cyc_Lex_err(_T55,_T56);
	  goto _TL73;
	  _TL72: _TL73: size = 4U;
	  goto _TL71;
	  _TL70: _TL71: _T57 = size;
	  _T58 = (int)_T57;
	  if (_T58 != 2) { goto _TL74;
	  }
	  { union Cyc_Absyn_Cnst _T5D;
	    (_T5D.Int_c).tag = 5U;
	    ((_T5D.Int_c).val).f0 = sn;
	    _T5A = n;
	    ((_T5D.Int_c).val).f1 = (int)_T5A;
	    _T59 = _T5D;
	  }res = _T59;
	  goto _TL75;
	  _TL74: { union Cyc_Absyn_Cnst _T5D;
	    (_T5D.LongLong_c).tag = 6U;
	    ((_T5D.LongLong_c).val).f0 = sn;
	    ((_T5D.LongLong_c).val).f1 = n;
	    _T5B = _T5D;
	  }res = _T5B;
	  _TL75: ;
	}
      }_TL61: _T5C = res;
      return _T5C;
    }
  }
}
static char Cyc_Lex_string_buffer_v[11U] = {'x',
					    'x',
					    'x',
					    'x',
					    'x',
					    'x',
					    'x',
					    'x',
					    'x',
					    'x',
					    '\000'};
static struct _fat_ptr Cyc_Lex_string_buffer = {(void *)Cyc_Lex_string_buffer_v,
						(void *)Cyc_Lex_string_buffer_v,
						(void *)(Cyc_Lex_string_buffer_v + 11U)};
static int Cyc_Lex_string_pos = 0;
static void Cyc_Lex_store_string_char(char c) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  int _T4;
  unsigned int _T5;
  char * _T6;
  unsigned int _T7;
  unsigned int _T8;
  int _T9;
  unsigned int _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  unsigned int _TD;
  int _TE;
  unsigned char * _TF;
  char * _T10;
  unsigned int _T11;
  struct _fat_ptr _T12;
  int _T13;
  unsigned char * _T14;
  char * _T15;
  unsigned int _T16;
  unsigned char * _T17;
  char * _T18;
  _T0 = Cyc_Lex_string_buffer;
  _T1 = _get_fat_size(_T0,sizeof(char));
  _T2 = _T1 - 1U;
  { int sz = (int)_T2;
    if (Cyc_Lex_string_pos < sz) { goto _TL76;
    }
    { int newsz = sz;
      _TL78: if (Cyc_Lex_string_pos >= newsz) { goto _TL79;
      }else { goto _TL7A;
      }
      _TL79: newsz = newsz * 2;
      goto _TL78;
      _TL7A: _T4 = newsz;
      _T5 = (unsigned int)_T4;
      { unsigned int _T19 = _T5 + 1U;
	_T7 = _check_times(_T19,sizeof(char));
	{ char * _T1A = _cycalloc_atomic(_T7);
	  { unsigned int _T1B = _T19;
	    unsigned int i;
	    i = 0;
	    _TL7E: if (i < _T1B) { goto _TL7C;
	    }else { goto _TL7D;
	    }
	    _TL7C: _T8 = i;
	    _T9 = sz;
	    _TA = (unsigned int)_T9;
	    if (_T8 >= _TA) { goto _TL7F;
	    }
	    _TB = i;
	    _TC = Cyc_Lex_string_buffer;
	    _TD = i;
	    _TE = (int)_TD;
	    _TF = _check_fat_subscript(_TC,sizeof(char),_TE);
	    _T10 = (char *)_TF;
	    _T1A[_TB] = *_T10;
	    goto _TL80;
	    _TL7F: _T11 = i;
	    _T1A[_T11] = '\000';
	    _TL80: i = i + 1;
	    goto _TL7E;
	    _TL7D: _T1A[_T1B] = 0;
	  }_T6 = (char *)_T1A;
	}_T3 = _tag_fat(_T6,sizeof(char),_T19);
      }{ struct _fat_ptr str = _T3;
	Cyc_Lex_string_buffer = str;
      }
    }goto _TL77;
    _TL76: _TL77: _T12 = Cyc_Lex_string_buffer;
    _T13 = Cyc_Lex_string_pos;
    { struct _fat_ptr _T19 = _fat_ptr_plus(_T12,sizeof(char),_T13);
      _T14 = _check_fat_subscript(_T19,sizeof(char),0U);
      _T15 = (char *)_T14;
      { char _T1A = *_T15;
	char _T1B = c;
	_T16 = _get_fat_size(_T19,sizeof(char));
	if (_T16 != 1U) { goto _TL81;
	}
	if (_T1A != 0) { goto _TL81;
	}
	if (_T1B == 0) { goto _TL81;
	}
	_throw_arraybounds();
	goto _TL82;
	_TL81: _TL82: _T17 = _T19.curr;
	_T18 = (char *)_T17;
	*_T18 = _T1B;
      }
    }Cyc_Lex_string_pos = Cyc_Lex_string_pos + 1;
  }
}
static void Cyc_Lex_store_string(struct _fat_ptr s) {
  unsigned long _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  const char * _T3;
  const char * _T4;
  int _T5;
  char _T6;
  _T0 = Cyc_strlen(s);
  { int sz = (int)_T0;
    int i = 0;
    _TL86: if (i < sz) { goto _TL84;
    }else { goto _TL85;
    }
    _TL84: _T1 = s;
    _T2 = _T1.curr;
    _T3 = (const char *)_T2;
    _T4 = _check_null(_T3);
    _T5 = i;
    _T6 = _T4[_T5];
    Cyc_Lex_store_string_char(_T6);
    i = i + 1;
    goto _TL86;
    _TL85: ;
  }
}
static struct _fat_ptr Cyc_Lex_get_stored_string() {
  struct _fat_ptr _T0;
  int _T1;
  unsigned long _T2;
  struct _fat_ptr _T3;
  _T0 = Cyc_Lex_string_buffer;
  _T1 = Cyc_Lex_string_pos;
  _T2 = (unsigned long)_T1;
  { struct _fat_ptr str = Cyc_substring(_T0,0,_T2);
    Cyc_Lex_string_pos = 0;
    _T3 = str;
    return _T3;
  }
}
 struct Cyc_Lex_Ldecls {
  struct Cyc_Set_Set * typedefs;
};
static struct Cyc_Core_Opt * Cyc_Lex_lstate = 0;
static struct Cyc_Lex_Ldecls * Cyc_Lex_mk_empty_ldecls(long ignore) {
  struct Cyc_Lex_Ldecls * _T0;
  struct Cyc_Set_Set * (* _T1)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _T2)(int (*)(void *,void *));
  int (* _T3)(struct _fat_ptr *,struct _fat_ptr *);
  { struct Cyc_Lex_Ldecls * _T4 = _cycalloc(sizeof(struct Cyc_Lex_Ldecls));
    _T2 = Cyc_Set_empty;
    { struct Cyc_Set_Set * (* _T5)(int (*)(struct _fat_ptr *,struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
														     struct _fat_ptr *)))_T2;
      _T1 = _T5;
    }_T3 = Cyc_zstrptrcmp;
    _T4->typedefs = _T1(_T3);
    _T0 = (struct Cyc_Lex_Ldecls *)_T4;
  }return _T0;
}
static void Cyc_Lex_typedef_init() {
  struct Cyc_Core_Opt * _T0;
  struct Cyc_Binding_NSCtxt * (* _T1)(long,struct Cyc_Lex_Ldecls * (*)(long));
  struct Cyc_Binding_NSCtxt * (* _T2)(void *,void * (*)(void *));
  { struct Cyc_Core_Opt * _T3 = _cycalloc(sizeof(struct Cyc_Core_Opt));
    _T2 = Cyc_Binding_mt_nsctxt;
    { struct Cyc_Binding_NSCtxt * (* _T4)(long,struct Cyc_Lex_Ldecls * (*)(long)) = (struct Cyc_Binding_NSCtxt * (*)(long,
														     struct Cyc_Lex_Ldecls * (*)(long)))_T2;
      _T1 = _T4;
    }_T3->v = _T1(1,Cyc_Lex_mk_empty_ldecls);
    _T0 = (struct Cyc_Core_Opt *)_T3;
  }Cyc_Lex_lstate = _T0;
}
static void Cyc_Lex_recompute_typedefs() {
  struct Cyc_Lex_DynTrie * _T0;
  struct Cyc_Lex_Trie * (* _T1)(struct Cyc_Core_DynamicRegion *,int,struct Cyc_Lex_Trie * (*)(struct _RegionHandle *,
											      int));
  void * (* _T2)(struct Cyc_Core_DynamicRegion *,void *,void * (*)(struct _RegionHandle *,
								   void *));
  struct Cyc_Core_DynamicRegion * _T3;
  struct Cyc_Lex_DynTrie * _T4;
  struct Cyc_Lex_DynTrie _T5;
  struct Cyc_Core_Opt * _T6;
  void * _T7;
  struct Cyc_Binding_NSCtxt * _T8;
  struct Cyc_List_List * _T9;
  int * _TA;
  int _TB;
  struct Cyc_Lex_Ldecls * (* _TC)(struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _TD)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Core_Opt * _TE;
  void * _TF;
  struct Cyc_Binding_NSCtxt * _T10;
  struct Cyc_Dict_Dict _T11;
  struct Cyc_List_List * _T12;
  void (* _T13)(void (*)(struct _fat_ptr *),struct Cyc_Set_Set *);
  void (* _T14)(void (*)(void *),struct Cyc_Set_Set *);
  struct Cyc_Lex_Ldecls * _T15;
  struct Cyc_Set_Set * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_Lex_DynTrie * tdefs = 0;
  { struct Cyc_Lex_DynTrie * _T18 = tdefs;
    struct Cyc_Lex_DynTrie * _T19 = Cyc_Lex_typedefs_trie;
    tdefs = _T19;
    Cyc_Lex_typedefs_trie = _T18;
  }_T0 = _check_null(tdefs);
  { struct Cyc_Lex_DynTrie _T18 = *_T0;
    struct Cyc_Lex_Trie * _T19;
    struct Cyc_Core_DynamicRegion * _T1A;
    _T1A = _T18.dyn;
    _T19 = _T18.t;
    { struct Cyc_Core_DynamicRegion * dyn = _T1A;
      struct Cyc_Lex_Trie * t = _T19;
      Cyc_Core_free_ukey(dyn);
      { struct Cyc_Core_NewDynamicRegion _T1B = Cyc_Core__new_ukey(0U,"internal-error",
								   "internal-error",
								   0);
	struct Cyc_Core_DynamicRegion * _T1C;
	_T1C = _T1B.key;
	{ struct Cyc_Core_DynamicRegion * dyn2 = _T1C;
	  _T2 = Cyc_Core_open_region;
	  { struct Cyc_Lex_Trie * (* _T1D)(struct Cyc_Core_DynamicRegion *,
					   int,struct Cyc_Lex_Trie * (*)(struct _RegionHandle *,
									 int)) = (struct Cyc_Lex_Trie * (*)(struct Cyc_Core_DynamicRegion *,
													    int,
													    struct Cyc_Lex_Trie * (*)(struct _RegionHandle *,
																      int)))_T2;
	    _T1 = _T1D;
	  }_T3 = dyn2;
	  { struct Cyc_Lex_Trie * t2 = _T1(_T3,0,Cyc_Lex_empty_trie);
	    _T4 = tdefs;
	    { struct Cyc_Lex_DynTrie _T1D;
	      _T1D.dyn = dyn2;
	      _T1D.t = t2;
	      _T5 = _T1D;
	    }*_T4 = _T5;
	    { struct Cyc_Lex_DynTrie * _T1D = Cyc_Lex_typedefs_trie;
	      struct Cyc_Lex_DynTrie * _T1E = tdefs;
	      Cyc_Lex_typedefs_trie = _T1E;
	      tdefs = _T1D;
	    }_T6 = _check_null(Cyc_Lex_lstate);
	    _T7 = _T6->v;
	    _T8 = (struct Cyc_Binding_NSCtxt *)_T7;
	    { struct Cyc_List_List * as = _T8->availables;
	      _TL8A: if (as != 0) { goto _TL88;
	      }else { goto _TL89;
	      }
	      _TL88: _T9 = as;
	      { void * _T1D = _T9->hd;
		struct Cyc_List_List * _T1E;
		_TA = (int *)_T1D;
		_TB = *_TA;
		if (_TB != 1) { goto _TL8B;
		}
		{ struct Cyc_Binding_Using_Binding_NSDirective_struct * _T1F = (struct Cyc_Binding_Using_Binding_NSDirective_struct *)_T1D;
		  _T1E = _T1F->f1;
		}{ struct Cyc_List_List * ns = _T1E;
		  _T1E = ns;
		  goto _LLA;
		}_TL8B: { struct Cyc_Binding_Namespace_Binding_NSDirective_struct * _T1F = (struct Cyc_Binding_Namespace_Binding_NSDirective_struct *)_T1D;
		  _T1E = _T1F->f1;
		}_LLA: { struct Cyc_List_List * ns = _T1E;
		  _TD = Cyc_Dict_lookup;
		  { struct Cyc_Lex_Ldecls * (* _T1F)(struct Cyc_Dict_Dict,
						     struct Cyc_List_List *) = (struct Cyc_Lex_Ldecls * (*)(struct Cyc_Dict_Dict,
													    struct Cyc_List_List *))_TD;
		    _TC = _T1F;
		  }_TE = Cyc_Lex_lstate;
		  _TF = _TE->v;
		  _T10 = (struct Cyc_Binding_NSCtxt *)_TF;
		  _T11 = _T10->ns_data;
		  _T12 = ns;
		  { struct Cyc_Lex_Ldecls * ts = _TC(_T11,_T12);
		    _T14 = Cyc_Set_iter;
		    { void (* _T1F)(void (*)(struct _fat_ptr *),struct Cyc_Set_Set *) = (void (*)(void (*)(struct _fat_ptr *),
												  struct Cyc_Set_Set *))_T14;
		      _T13 = _T1F;
		    }_T15 = ts;
		    _T16 = _T15->typedefs;
		    _T13(Cyc_Lex_insert_typedef,_T16);
		    goto _LL6;
		  }
		}_LL6: ;
	      }_T17 = as;
	      as = _T17->tl;
	      goto _TL8A;
	      _TL89: ;
	    }
	  }
	}
      }
    }
  }
}
static long Cyc_Lex_is_typedef_in_namespace(struct Cyc_List_List * ns,struct _fat_ptr * v) {
  struct Cyc_Core_Opt * _T0;
  void * _T1;
  struct Cyc_Binding_NSCtxt * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_Lex_Ldecls * (* _T4)(struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T5)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Core_Opt * _T6;
  void * _T7;
  struct Cyc_Binding_NSCtxt * _T8;
  struct Cyc_Dict_Dict _T9;
  struct Cyc_List_List * _TA;
  long (* _TB)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _TC)(struct Cyc_Set_Set *,void *);
  struct Cyc_Lex_Ldecls * _TD;
  struct Cyc_Set_Set * _TE;
  struct _fat_ptr * _TF;
  long _T10;
  _T0 = _check_null(Cyc_Lex_lstate);
  _T1 = _T0->v;
  _T2 = (struct Cyc_Binding_NSCtxt *)_T1;
  _T3 = ns;
  { struct Cyc_List_List * ans = Cyc_Binding_resolve_rel_ns(0U,_T2,_T3);
    _T5 = Cyc_Dict_lookup;
    { struct Cyc_Lex_Ldecls * (* _T11)(struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_Lex_Ldecls * (*)(struct Cyc_Dict_Dict,
														   struct Cyc_List_List *))_T5;
      _T4 = _T11;
    }_T6 = _check_null(Cyc_Lex_lstate);
    _T7 = _T6->v;
    _T8 = (struct Cyc_Binding_NSCtxt *)_T7;
    _T9 = _T8->ns_data;
    _TA = ans;
    { struct Cyc_Lex_Ldecls * ts = _T4(_T9,_TA);
      _TC = Cyc_Set_member;
      { long (* _T11)(struct Cyc_Set_Set *,struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
									  struct _fat_ptr *))_TC;
	_TB = _T11;
      }_TD = ts;
      _TE = _TD->typedefs;
      _TF = v;
      _T10 = _TB(_TE,_TF);
      return _T10;
    }
  }
}
 struct _tuple34 {
  struct Cyc_List_List * f0;
  struct Cyc_Lex_Trie * f1;
  struct _fat_ptr f2;
};
static long Cyc_Lex_is_typedef_body(struct _RegionHandle * d,struct _tuple34 * env) {
  struct _tuple34 * _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  unsigned int _T3;
  struct Cyc_Lex_Trie * _T4;
  struct _union_TrieChildren_One _T5;
  unsigned int _T6;
  struct _union_TrieChildren_One _T7;
  struct _tuple29 _T8;
  struct _union_TrieChildren_One _T9;
  struct _tuple29 _TA;
  int _TB;
  struct _fat_ptr _TC;
  unsigned char * _TD;
  const char * _TE;
  int _TF;
  char _T10;
  int _T11;
  struct _union_TrieChildren_One _T12;
  struct _tuple29 _T13;
  struct _union_TrieChildren_Many _T14;
  struct Cyc_Lex_Trie * * _T15;
  struct _fat_ptr _T16;
  int _T17;
  unsigned char * _T18;
  const char * _T19;
  char _T1A;
  int _T1B;
  int _T1C;
  struct Cyc_Lex_Trie * _T1D;
  int _T1E;
  _T0 = env;
  { struct _tuple34 _T1F = *_T0;
    struct _fat_ptr _T20;
    struct Cyc_Lex_Trie * _T21;
    struct Cyc_List_List * _T22;
    _T22 = _T1F.f0;
    _T21 = _T1F.f1;
    _T20 = _T1F.f2;
    { struct Cyc_List_List * ns = _T22;
      struct Cyc_Lex_Trie * t = _T21;
      struct _fat_ptr s = _T20;
      _T1 = s;
      _T2 = _get_fat_size(_T1,sizeof(char));
      _T3 = _T2 - 1U;
      { int len = (int)_T3;
	{ int i = 0;
	  _TL90: if (i < len) { goto _TL8E;
	  }else { goto _TL8F;
	  }
	  _TL8E: _T4 = _check_null(t);
	  { union Cyc_Lex_TrieChildren _T23 = _T4->children;
	    struct Cyc_Lex_Trie * * _T24;
	    struct Cyc_Lex_Trie * _T25;
	    int _T26;
	    _T5 = _T23.One;
	    _T6 = _T5.tag;
	    switch (_T6) {
	    case 1: 
	      return 0;
	    case 2: 
	      _T7 = _T23.One;
	      _T8 = _T7.val;
	      _T26 = _T8.f0;
	      _T9 = _T23.One;
	      _TA = _T9.val;
	      _T25 = _TA.f1;
	      _TB = (int)_T26;
	      _TC = s;
	      _TD = _TC.curr;
	      _TE = (const char *)_TD;
	      _TF = i;
	      _T10 = _TE[_TF];
	      _T11 = (int)_T10;
	      if (_TB == _T11) { goto _TL92;
	      }
	      { int one_ch = _T26;
		struct Cyc_Lex_Trie * one_trie = _T25;
		return 0;
	      }_TL92: _T12 = _T23.One;
	      _T13 = _T12.val;
	      _T25 = _T13.f1;
	      { struct Cyc_Lex_Trie * one_trie = _T25;
		t = one_trie;
		goto _LL3;
	      }
	    default: 
	      _T14 = _T23.Many;
	      _T24 = _T14.val;
	      { struct Cyc_Lex_Trie * * arr = _T24;
		_T15 = arr;
		_T16 = s;
		_T17 = i;
		_T18 = _check_fat_subscript(_T16,sizeof(char),_T17);
		_T19 = (const char *)_T18;
		_T1A = *_T19;
		_T1B = (int)_T1A;
		_T1C = Cyc_Lex_trie_char(_T1B);
		{ struct Cyc_Lex_Trie * next = _T15[_T1C];
		  if (next != 0) { goto _TL94;
		  }
		  return 0;
		  _TL94: t = next;
		  goto _LL3;
		}
	      }
	    }
	    _LL3: ;
	  }i = i + 1;
	  goto _TL90;
	  _TL8F: ;
	}_T1D = _check_null(t);
	_T1E = _T1D->shared_str;
	return _T1E;
      }
    }
  }
}
static long Cyc_Lex_is_typedef(struct Cyc_List_List * ns,struct _fat_ptr * v) {
  long _T0;
  struct _fat_ptr * _T1;
  struct Cyc_Lex_DynTrie * _T2;
  struct _tuple34 _T3;
  long (* _T4)(struct Cyc_Core_DynamicRegion *,struct _tuple34 *,long (*)(struct _RegionHandle *,
									  struct _tuple34 *));
  void * (* _T5)(struct Cyc_Core_DynamicRegion *,void *,void * (*)(struct _RegionHandle *,
								   void *));
  struct Cyc_Core_DynamicRegion * _T6;
  struct _tuple34 * _T7;
  struct _tuple34 * _T8;
  struct Cyc_Lex_DynTrie * _T9;
  struct Cyc_Lex_DynTrie _TA;
  long _TB;
  if (ns == 0) { goto _TL96;
  }
  _T0 = Cyc_Lex_is_typedef_in_namespace(ns,v);
  return _T0;
  _TL96: _T1 = v;
  { struct _fat_ptr s = *_T1;
    struct Cyc_Lex_DynTrie * tdefs = 0;
    { struct Cyc_Lex_DynTrie * _TC = tdefs;
      struct Cyc_Lex_DynTrie * _TD = Cyc_Lex_typedefs_trie;
      tdefs = _TD;
      Cyc_Lex_typedefs_trie = _TC;
    }_T2 = _check_null(tdefs);
    { struct Cyc_Lex_DynTrie _TC = *_T2;
      struct Cyc_Lex_Trie * _TD;
      struct Cyc_Core_DynamicRegion * _TE;
      _TE = _TC.dyn;
      _TD = _TC.t;
      { struct Cyc_Core_DynamicRegion * dyn = _TE;
	struct Cyc_Lex_Trie * t = _TD;
	{ struct _tuple34 _TF;
	  _TF.f0 = ns;
	  _TF.f1 = t;
	  _TF.f2 = s;
	  _T3 = _TF;
	}{ struct _tuple34 env = _T3;
	  _T5 = Cyc_Core_open_region;
	  { long (* _TF)(struct Cyc_Core_DynamicRegion *,struct _tuple34 *,
			 long (*)(struct _RegionHandle *,struct _tuple34 *)) = (long (*)(struct Cyc_Core_DynamicRegion *,
											 struct _tuple34 *,
											 long (*)(struct _RegionHandle *,
												  struct _tuple34 *)))_T5;
	    _T4 = _TF;
	  }_T6 = dyn;
	  _T7 = &env;
	  _T8 = (struct _tuple34 *)_T7;
	  { long res = _T4(_T6,_T8,Cyc_Lex_is_typedef_body);
	    _T9 = tdefs;
	    { struct Cyc_Lex_DynTrie _TF;
	      _TF.dyn = dyn;
	      _TF.t = t;
	      _TA = _TF;
	    }*_T9 = _TA;
	    { struct Cyc_Lex_DynTrie * _TF = tdefs;
	      struct Cyc_Lex_DynTrie * _T10 = Cyc_Lex_typedefs_trie;
	      tdefs = _T10;
	      Cyc_Lex_typedefs_trie = _TF;
	    }_TB = res;
	    return _TB;
	  }
	}
      }
    }
  }
}
void Cyc_Lex_enter_namespace(struct _fat_ptr * s) {
  void (* _T0)(struct Cyc_Binding_NSCtxt *,struct _fat_ptr *,long,struct Cyc_Lex_Ldecls * (*)(long));
  void (* _T1)(struct Cyc_Binding_NSCtxt *,struct _fat_ptr *,void *,void * (*)(void *));
  struct Cyc_Core_Opt * _T2;
  void * _T3;
  struct Cyc_Binding_NSCtxt * _T4;
  struct _fat_ptr * _T5;
  struct Cyc_Lex_Ldecls * (* _T6)(struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T7)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Core_Opt * _T8;
  void * _T9;
  struct Cyc_Binding_NSCtxt * _TA;
  struct Cyc_Dict_Dict _TB;
  struct Cyc_Core_Opt * _TC;
  void * _TD;
  struct Cyc_Binding_NSCtxt * _TE;
  struct Cyc_List_List * _TF;
  void (* _T10)(void (*)(struct _fat_ptr *),struct Cyc_Set_Set *);
  void (* _T11)(void (*)(void *),struct Cyc_Set_Set *);
  struct Cyc_Lex_Ldecls * _T12;
  struct Cyc_Set_Set * _T13;
  _T1 = Cyc_Binding_enter_ns;
  { void (* _T14)(struct Cyc_Binding_NSCtxt *,struct _fat_ptr *,long,struct Cyc_Lex_Ldecls * (*)(long)) = (void (*)(struct Cyc_Binding_NSCtxt *,
														    struct _fat_ptr *,
														    long,
														    struct Cyc_Lex_Ldecls * (*)(long)))_T1;
    _T0 = _T14;
  }_T2 = _check_null(Cyc_Lex_lstate);
  _T3 = _T2->v;
  _T4 = (struct Cyc_Binding_NSCtxt *)_T3;
  _T5 = s;
  _T0(_T4,_T5,1,Cyc_Lex_mk_empty_ldecls);
  _T7 = Cyc_Dict_lookup;
  { struct Cyc_Lex_Ldecls * (* _T14)(struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_Lex_Ldecls * (*)(struct Cyc_Dict_Dict,
														 struct Cyc_List_List *))_T7;
    _T6 = _T14;
  }_T8 = _check_null(Cyc_Lex_lstate);
  _T9 = _T8->v;
  _TA = (struct Cyc_Binding_NSCtxt *)_T9;
  _TB = _TA->ns_data;
  _TC = Cyc_Lex_lstate;
  _TD = _TC->v;
  _TE = (struct Cyc_Binding_NSCtxt *)_TD;
  _TF = _TE->curr_ns;
  { struct Cyc_Lex_Ldecls * ts = _T6(_TB,_TF);
    _T11 = Cyc_Set_iter;
    { void (* _T14)(void (*)(struct _fat_ptr *),struct Cyc_Set_Set *) = (void (*)(void (*)(struct _fat_ptr *),
										  struct Cyc_Set_Set *))_T11;
      _T10 = _T14;
    }_T12 = ts;
    _T13 = _T12->typedefs;
    _T10(Cyc_Lex_insert_typedef,_T13);
  }
}
void Cyc_Lex_leave_namespace() {
  struct Cyc_Core_Opt * _T0;
  void * _T1;
  struct Cyc_Binding_NSCtxt * _T2;
  _T0 = _check_null(Cyc_Lex_lstate);
  _T1 = _T0->v;
  _T2 = (struct Cyc_Binding_NSCtxt *)_T1;
  Cyc_Binding_leave_ns(_T2);
  Cyc_Lex_recompute_typedefs();
}
void Cyc_Lex_enter_using(struct _tuple0 * q) {
  struct Cyc_Core_Opt * _T0;
  void * _T1;
  struct Cyc_Binding_NSCtxt * _T2;
  struct _tuple0 * _T3;
  struct Cyc_Lex_Ldecls * (* _T4)(struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T5)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Core_Opt * _T6;
  void * _T7;
  struct Cyc_Binding_NSCtxt * _T8;
  struct Cyc_Dict_Dict _T9;
  struct Cyc_List_List * _TA;
  void (* _TB)(void (*)(struct _fat_ptr *),struct Cyc_Set_Set *);
  void (* _TC)(void (*)(void *),struct Cyc_Set_Set *);
  struct Cyc_Lex_Ldecls * _TD;
  struct Cyc_Set_Set * _TE;
  _T0 = _check_null(Cyc_Lex_lstate);
  _T1 = _T0->v;
  _T2 = (struct Cyc_Binding_NSCtxt *)_T1;
  _T3 = q;
  { struct Cyc_List_List * ns = Cyc_Binding_enter_using(0U,_T2,_T3);
    _T5 = Cyc_Dict_lookup;
    { struct Cyc_Lex_Ldecls * (* _TF)(struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_Lex_Ldecls * (*)(struct Cyc_Dict_Dict,
														  struct Cyc_List_List *))_T5;
      _T4 = _TF;
    }_T6 = _check_null(Cyc_Lex_lstate);
    _T7 = _T6->v;
    _T8 = (struct Cyc_Binding_NSCtxt *)_T7;
    _T9 = _T8->ns_data;
    _TA = ns;
    { struct Cyc_Lex_Ldecls * ts = _T4(_T9,_TA);
      _TC = Cyc_Set_iter;
      { void (* _TF)(void (*)(struct _fat_ptr *),struct Cyc_Set_Set *) = (void (*)(void (*)(struct _fat_ptr *),
										   struct Cyc_Set_Set *))_TC;
	_TB = _TF;
      }_TD = ts;
      _TE = _TD->typedefs;
      _TB(Cyc_Lex_insert_typedef,_TE);
    }
  }
}
void Cyc_Lex_leave_using() {
  struct Cyc_Core_Opt * _T0;
  void * _T1;
  struct Cyc_Binding_NSCtxt * _T2;
  _T0 = _check_null(Cyc_Lex_lstate);
  _T1 = _T0->v;
  _T2 = (struct Cyc_Binding_NSCtxt *)_T1;
  Cyc_Binding_leave_using(_T2);
  Cyc_Lex_recompute_typedefs();
}
void Cyc_Lex_register_typedef(struct _tuple0 * q) {
  struct Cyc_Lex_Ldecls * (* _T0)(struct Cyc_Dict_Dict,struct Cyc_List_List *);
  void * (* _T1)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Core_Opt * _T2;
  void * _T3;
  struct Cyc_Binding_NSCtxt * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Core_Opt * _T6;
  void * _T7;
  struct Cyc_Binding_NSCtxt * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_Lex_Ldecls * _TA;
  struct Cyc_Set_Set * (* _TB)(struct Cyc_Set_Set *,struct _fat_ptr *);
  struct Cyc_Set_Set * (* _TC)(struct Cyc_Set_Set *,void *);
  struct Cyc_Lex_Ldecls * _TD;
  struct Cyc_Set_Set * _TE;
  struct _tuple0 * _TF;
  struct _tuple0 _T10;
  struct _fat_ptr * _T11;
  struct _tuple0 * _T12;
  struct _tuple0 _T13;
  struct _fat_ptr * _T14;
  _T1 = Cyc_Dict_lookup;
  { struct Cyc_Lex_Ldecls * (* _T15)(struct Cyc_Dict_Dict,struct Cyc_List_List *) = (struct Cyc_Lex_Ldecls * (*)(struct Cyc_Dict_Dict,
														 struct Cyc_List_List *))_T1;
    _T0 = _T15;
  }_T2 = _check_null(Cyc_Lex_lstate);
  _T3 = _T2->v;
  _T4 = (struct Cyc_Binding_NSCtxt *)_T3;
  _T5 = _T4->ns_data;
  _T6 = Cyc_Lex_lstate;
  _T7 = _T6->v;
  _T8 = (struct Cyc_Binding_NSCtxt *)_T7;
  _T9 = _T8->curr_ns;
  { struct Cyc_Lex_Ldecls * ts = _T0(_T5,_T9);
    _TA = ts;
    _TC = Cyc_Set_insert;
    { struct Cyc_Set_Set * (* _T15)(struct Cyc_Set_Set *,struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
													struct _fat_ptr *))_TC;
      _TB = _T15;
    }_TD = ts;
    _TE = _TD->typedefs;
    _TF = q;
    _T10 = *_TF;
    _T11 = _T10.f1;
    _TA->typedefs = _TB(_TE,_T11);
    _T12 = q;
    _T13 = *_T12;
    _T14 = _T13.f1;
    Cyc_Lex_insert_typedef(_T14);
  }
}
static short Cyc_Lex_process_id(struct Cyc_Lexing_lexbuf * lbuf) {
  long _T0;
  struct _fat_ptr _T1;
  int _T2;
  unsigned char * _T3;
  struct Cyc_Lex_KeyWordInfo * _T4;
  struct Cyc_Lex_KeyWordInfo _T5;
  long _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned char * _T9;
  struct Cyc_Lex_KeyWordInfo * _TA;
  struct Cyc_Lex_KeyWordInfo _TB;
  int _TC;
  short _TD;
  struct _fat_ptr * _TE;
  short _TF;
  long _T10;
  int symbol_num = Cyc_Lex_str_index_lbuf(lbuf);
  if (symbol_num > Cyc_Lex_num_kws) { goto _TL98;
  }
  _T0 = Cyc_Lex_in_extern_c;
  if (_T0) { goto _TL9D;
  }else { goto _TL9C;
  }
  _TL9D: _T1 = Cyc_Lex_kw_nums;
  _T2 = symbol_num - 1;
  _T3 = _check_fat_subscript(_T1,sizeof(struct Cyc_Lex_KeyWordInfo),_T2);
  _T4 = (struct Cyc_Lex_KeyWordInfo *)_T3;
  _T5 = *_T4;
  _T6 = _T5.is_c_keyword;
  if (_T6) { goto _TL9C;
  }else { goto _TL9A;
  }
  _TL9C: _T7 = Cyc_Lex_kw_nums;
  _T8 = symbol_num - 1;
  _T9 = _check_fat_subscript(_T7,sizeof(struct Cyc_Lex_KeyWordInfo),_T8);
  _TA = (struct Cyc_Lex_KeyWordInfo *)_T9;
  _TB = *_TA;
  _TC = _TB.token_index;
  { short res = (short)_TC;
    _TD = res;
    return _TD;
  }_TL9A: goto _TL99;
  _TL98: _TL99: { struct _fat_ptr * s = Cyc_Lex_get_symbol(symbol_num);
    _TE = s;
    Cyc_Lex_token_string = *_TE;
    _T10 = Cyc_Lex_is_typedef(0,s);
    if (! _T10) { goto _TL9E;
    }
    _TF = 399;
    goto _TL9F;
    _TL9E: _TF = 391;
    _TL9F: return _TF;
  }
}
static short Cyc_Lex_process_qual_id(struct Cyc_Lexing_lexbuf * lbuf) {
  long _T0;
  struct _fat_ptr _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  struct Cyc_Lexing_lexbuf * _T3;
  struct Cyc_Lexing_lexbuf * _T4;
  struct Cyc_Lexing_lexbuf * _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  char * _T9;
  char _TA;
  int _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  struct _fat_ptr _TD;
  struct Cyc_List_List * _TE;
  int _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  struct _fat_ptr _T11;
  struct Cyc_List_List * _T12;
  void * _T13;
  struct _fat_ptr * _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  int _T17;
  struct Cyc_List_List * _T18;
  struct _tuple0 * _T19;
  struct Cyc_List_List * _T1A;
  void * _T1B;
  struct _fat_ptr * _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  int _T1F;
  struct Cyc_List_List * _T20;
  struct _tuple0 * _T21;
  struct _tuple0 * _T22;
  short _T23;
  long _T24;
  _T0 = Cyc_Lex_in_extern_c;
  if (! _T0) { goto _TLA0;
  }
  _T1 = _tag_fat("qualified identifiers not allowed in C code",sizeof(char),
		 44U);
  _T2 = lbuf;
  Cyc_Lex_err(_T1,_T2);
  goto _TLA1;
  _TLA0: _TLA1: _T3 = lbuf;
  { int i = _T3->lex_start_pos;
    _T4 = lbuf;
    { int end = _T4->lex_curr_pos;
      _T5 = lbuf;
      { struct _fat_ptr s = _T5->lex_buffer;
	struct _fat_ptr * v = 0;
	struct Cyc_List_List * rev_vs = 0;
	_TLA2: if (i < end) { goto _TLA3;
	}else { goto _TLA4;
	}
	_TLA3: { int start = i;
	  _TLA8: if (i < end) { goto _TLA9;
	  }else { goto _TLA7;
	  }
	  _TLA9: _T6 = s;
	  _T7 = i;
	  _T8 = _check_fat_subscript(_T6,sizeof(char),_T7);
	  _T9 = (char *)_T8;
	  _TA = *_T9;
	  _TB = (int)_TA;
	  if (_TB != 58) { goto _TLA6;
	  }else { goto _TLA7;
	  }
	  _TLA6: i = i + 1;
	  goto _TLA8;
	  _TLA7: if (start != i) { goto _TLAA;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T25;
	    _T25.tag = 0;
	    _T25.f1 = _tag_fat("bad namespace",sizeof(char),14U);
	    _TC = _T25;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T25 = _TC;
	    void * _T26[1];
	    _T26[0] = &_T25;
	    _TD = _tag_fat(_T26,sizeof(void *),1);
	    Cyc_Warn_impos2(_TD);
	  }goto _TLAB;
	  _TLAA: _TLAB: { int vlen = i - start;
	    if (v == 0) { goto _TLAC;
	    }
	    { struct Cyc_List_List * _T25 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T25->hd = v;
	      _T25->tl = rev_vs;
	      _TE = (struct Cyc_List_List *)_T25;
	    }rev_vs = _TE;
	    goto _TLAD;
	    _TLAC: _TLAD: _TF = Cyc_Lex_str_index(s,start,vlen);
	    v = Cyc_Lex_get_symbol(_TF);
	    i = i + 2;
	  }
	}goto _TLA2;
	_TLA4: if (v != 0) { goto _TLAE;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T25;
	  _T25.tag = 0;
	  _T25.f1 = _tag_fat("bad namespace",sizeof(char),14U);
	  _T10 = _T25;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T25 = _T10;
	  void * _T26[1];
	  _T26[0] = &_T25;
	  _T11 = _tag_fat(_T26,sizeof(void *),1);
	  Cyc_Warn_impos2(_T11);
	}goto _TLAF;
	_TLAE: _TLAF: { struct Cyc_List_List * vs = Cyc_List_imp_rev(rev_vs);
	  if (vs == 0) { goto _TLB0;
	  }
	  _T12 = vs;
	  _T13 = _T12->hd;
	  _T14 = (struct _fat_ptr *)_T13;
	  _T15 = *_T14;
	  _T16 = _tag_fat("Cyc",sizeof(char),4U);
	  _T17 = Cyc_strcmp(_T15,_T16);
	  if (_T17 != 0) { goto _TLB0;
	  }
	  _T18 = vs;
	  vs = _T18->tl;
	  { struct _tuple0 * _T25 = _cycalloc(sizeof(struct _tuple0));
	    _T25->f0 = Cyc_Absyn_Abs_n(vs,0);
	    _T25->f1 = v;
	    _T19 = (struct _tuple0 *)_T25;
	  }Cyc_Lex_token_qvar = _T19;
	  goto _TLB1;
	  _TLB0: if (vs == 0) { goto _TLB2;
	  }
	  _T1A = vs;
	  _T1B = _T1A->hd;
	  _T1C = (struct _fat_ptr *)_T1B;
	  _T1D = *_T1C;
	  _T1E = _tag_fat("C",sizeof(char),2U);
	  _T1F = Cyc_strcmp(_T1D,_T1E);
	  if (_T1F != 0) { goto _TLB2;
	  }
	  _T20 = vs;
	  vs = _T20->tl;
	  { struct _tuple0 * _T25 = _cycalloc(sizeof(struct _tuple0));
	    _T25->f0 = Cyc_Absyn_Abs_n(vs,1);
	    _T25->f1 = v;
	    _T21 = (struct _tuple0 *)_T25;
	  }Cyc_Lex_token_qvar = _T21;
	  goto _TLB3;
	  _TLB2: { struct _tuple0 * _T25 = _cycalloc(sizeof(struct _tuple0));
	    _T25->f0 = Cyc_Absyn_Rel_n(vs);
	    _T25->f1 = v;
	    _T22 = (struct _tuple0 *)_T25;
	  }Cyc_Lex_token_qvar = _T22;
	  _TLB3: _TLB1: _T24 = Cyc_Lex_is_typedef(vs,v);
	  if (! _T24) { goto _TLB4;
	  }
	  _T23 = 401;
	  goto _TLB5;
	  _TLB4: _T23 = 400;
	  _TLB5: return _T23;
	}
      }
    }
  }
}
 struct Cyc_Lex_PosInfo {
  struct Cyc_Lex_PosInfo * next;
  unsigned int starting_line;
  struct _fat_ptr filename;
  struct _fat_ptr linenumpos;
  unsigned int linenumpos_offset;
};
static struct Cyc_Lex_PosInfo * Cyc_Lex_pos_info = 0;
static int Cyc_Lex_linenumber = 1;
static struct Cyc_Lex_PosInfo * Cyc_Lex_rnew_filepos(struct _RegionHandle * r,
						     struct _fat_ptr filename,
						     unsigned int starting_line,
						     struct Cyc_Lex_PosInfo * next) {
  struct _fat_ptr _T0;
  struct _RegionHandle * _T1;
  unsigned int _T2;
  void * _T3;
  struct _fat_ptr _T4;
  unsigned char * _T5;
  unsigned int * _T6;
  struct Cyc_Yyltype _T7;
  struct Cyc_Lex_PosInfo * _T8;
  struct _RegionHandle * _T9;
  { unsigned int _TA = 10U;
    _T1 = Cyc_Core_heap_region;
    _T2 = Cyc_Core_unique_qual;
    _T3 = _region_calloc(_T1,_T2,sizeof(unsigned int),_TA);
    _T0 = _tag_fat(_T3,sizeof(unsigned int),_TA);
  }{ struct _fat_ptr linenumpos = _T0;
    _T4 = linenumpos;
    _T5 = _T4.curr;
    _T6 = (unsigned int *)_T5;
    _T7 = Cyc_yylloc;
    _T6[0] = _T7.first_line;
    _T9 = r;
    { struct Cyc_Lex_PosInfo * _TA = _region_malloc(_T9,0U,sizeof(struct Cyc_Lex_PosInfo));
      _TA->next = next;
      _TA->starting_line = starting_line;
      _TA->filename = filename;
      _TA->linenumpos = linenumpos;
      _TA->linenumpos_offset = 1U;
      _T8 = (struct Cyc_Lex_PosInfo *)_TA;
    }return _T8;
  }
}
static void Cyc_Lex_inc_linenumber() {
  struct Cyc_Warn_String_Warn_Warg_struct _T0;
  int (* _T1)(struct _fat_ptr);
  void * (* _T2)(struct _fat_ptr);
  struct _fat_ptr _T3;
  struct Cyc_Lex_PosInfo * _T4;
  struct Cyc_Lex_PosInfo * _T5;
  struct Cyc_Lex_PosInfo * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _RegionHandle * _T9;
  unsigned int _TA;
  void * _TB;
  struct _fat_ptr _TC;
  unsigned int _TD;
  int _TE;
  unsigned char * _TF;
  unsigned int * _T10;
  struct _fat_ptr _T11;
  unsigned char * _T12;
  unsigned int * _T13;
  unsigned int * _T14;
  unsigned int _T15;
  int _T16;
  void (* _T17)(unsigned int *);
  void (* _T18)(void *);
  struct _fat_ptr _T19;
  unsigned char * _T1A;
  unsigned int * _T1B;
  struct _fat_ptr _T1C;
  unsigned int _T1D;
  int _T1E;
  unsigned char * _T1F;
  unsigned int * _T20;
  struct Cyc_Yyltype _T21;
  struct Cyc_Lex_PosInfo * _T22;
  struct Cyc_Lex_PosInfo * _T23;
  struct Cyc_Lex_PosInfo * _T24;
  if (Cyc_Lex_pos_info != 0) { goto _TLB6;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _T25;
    _T25.tag = 0;
    _T25.f1 = _tag_fat("empty position info!",sizeof(char),21U);
    _T0 = _T25;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T25 = _T0;
    void * _T26[1];
    _T26[0] = &_T25;
    _T2 = Cyc_Warn_impos2;
    { int (* _T27)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T2;
      _T1 = _T27;
    }_T3 = _tag_fat(_T26,sizeof(void *),1);
    _T1(_T3);
  }goto _TLB7;
  _TLB6: _TLB7: { struct Cyc_Lex_PosInfo * p = Cyc_Lex_pos_info;
    struct _fat_ptr linenums = _tag_fat(0,0,0);
    _T4 = p;
    { struct _fat_ptr _T25 = _T4->linenumpos;
      struct _fat_ptr _T26 = linenums;
      _T5 = p;
      _T5->linenumpos = _T26;
      linenums = _T25;
    }_T6 = p;
    { unsigned int offset = _T6->linenumpos_offset;
      _T7 = linenums;
      { unsigned int n = _get_fat_size(_T7,sizeof(unsigned int));
	if (offset < n) { goto _TLB8;
	}
	{ unsigned int _T25 = n * 2U;
	  _T9 = Cyc_Core_heap_region;
	  _TA = Cyc_Core_unique_qual;
	  _TB = _region_calloc(_T9,_TA,sizeof(unsigned int),_T25);
	  _T8 = _tag_fat(_TB,sizeof(unsigned int),_T25);
	}{ struct _fat_ptr newlinenums = _T8;
	  { unsigned int i = 0U;
	    _TLBD: if (i < n) { goto _TLBB;
	    }else { goto _TLBC;
	    }
	    _TLBB: _TC = newlinenums;
	    _TD = i;
	    _TE = (int)_TD;
	    _TF = _check_fat_subscript(_TC,sizeof(unsigned int),_TE);
	    _T10 = (unsigned int *)_TF;
	    _T11 = linenums;
	    _T12 = _T11.curr;
	    _T13 = (unsigned int *)_T12;
	    _T14 = _check_null(_T13);
	    _T15 = i;
	    _T16 = (int)_T15;
	    *_T10 = _T14[_T16];
	    i = i + 1;
	    goto _TLBD;
	    _TLBC: ;
	  }{ struct _fat_ptr _T25 = linenums;
	    struct _fat_ptr _T26 = newlinenums;
	    linenums = _T26;
	    newlinenums = _T25;
	  }_T18 = Cyc_Core_ufree;
	  { void (* _T25)(unsigned int *) = (void (*)(unsigned int *))_T18;
	    _T17 = _T25;
	  }_T19 = newlinenums;
	  _T1A = _untag_fat_ptr_check_bound(_T19,sizeof(unsigned int),1U);
	  _T1B = (unsigned int *)_T1A;
	  _T17(_T1B);
	}goto _TLB9;
	_TLB8: _TLB9: _T1C = linenums;
	_T1D = offset;
	_T1E = (int)_T1D;
	_T1F = _check_fat_subscript(_T1C,sizeof(unsigned int),_T1E);
	_T20 = (unsigned int *)_T1F;
	_T21 = Cyc_yylloc;
	*_T20 = _T21.first_line;
	_T22 = p;
	_T22->linenumpos_offset = offset + 1U;
	Cyc_Lex_linenumber = Cyc_Lex_linenumber + 1;
	_T23 = p;
	{ struct _fat_ptr _T25 = _T23->linenumpos;
	  struct _fat_ptr _T26 = linenums;
	  _T24 = p;
	  _T24->linenumpos = _T26;
	  linenums = _T25;
	}
      }
    }
  }
}
static void Cyc_Lex_process_directive(struct _fat_ptr line) {
  int _T0;
  struct Cyc_IntPtr_sa_ScanfArg_struct _T1;
  struct Cyc_CharPtr_sa_ScanfArg_struct _T2;
  char * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct Cyc_String_pa_PrintArg_struct _T8;
  char * _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct Cyc_Lex_PosInfo * _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  int _TF;
  int _T10;
  struct Cyc_IntPtr_sa_ScanfArg_struct _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct Cyc_Lex_PosInfo * _T15;
  struct _RegionHandle * _T16;
  struct _fat_ptr _T17;
  int _T18;
  unsigned int _T19;
  struct Cyc_Lex_PosInfo * _T1A;
  int i;
  char buf[100U];
  struct _fat_ptr filename = _tag_fat("",sizeof(char),1U);
  { struct Cyc_IntPtr_sa_ScanfArg_struct _T1B;
    _T1B.tag = 2;
    _T1B.f1 = &i;
    _T1 = _T1B;
  }{ struct Cyc_IntPtr_sa_ScanfArg_struct _T1B = _T1;
    { struct Cyc_CharPtr_sa_ScanfArg_struct _T1C;
      _T1C.tag = 7;
      _T3 = buf;
      _T1C.f1 = _tag_fat(_T3,sizeof(char),100U);
      _T2 = _T1C;
    }{ struct Cyc_CharPtr_sa_ScanfArg_struct _T1C = _T2;
      void * _T1D[2];
      _T1D[0] = &_T1B;
      _T1D[1] = &_T1C;
      _T4 = line;
      _T5 = _tag_fat("# %d \"%s",sizeof(char),9U);
      _T6 = _tag_fat(_T1D,sizeof(void *),2);
      _T0 = Cyc_sscanf(_T4,_T5,_T6);
    }
  }if (_T0 != 2) { goto _TLBE;
  }
  { struct Cyc_String_pa_PrintArg_struct _T1B;
    _T1B.tag = 0;
    _T9 = buf;
    _T1B.f1 = _tag_fat(_T9,sizeof(char),100U);
    _T8 = _T1B;
  }{ struct Cyc_String_pa_PrintArg_struct _T1B = _T8;
    void * _T1C[1];
    _T1C[0] = &_T1B;
    _TA = _tag_fat("\"%s",sizeof(char),4U);
    _TB = _tag_fat(_T1C,sizeof(void *),1);
    _T7 = Cyc_aprintf(_TA,_TB);
  }filename = _T7;
  if (Cyc_Lex_linenumber != i) { goto _TLC0;
  }
  if (Cyc_Lex_pos_info == 0) { goto _TLC0;
  }
  _TC = Cyc_Lex_pos_info;
  _TD = _TC->filename;
  _TE = filename;
  _TF = Cyc_strcmp(_TD,_TE);
  if (_TF != 0) { goto _TLC0;
  }
  return;
  _TLC0: Cyc_Lex_linenumber = i;
  goto _TLBF;
  _TLBE: { struct Cyc_IntPtr_sa_ScanfArg_struct _T1B;
    _T1B.tag = 2;
    _T1B.f1 = &i;
    _T11 = _T1B;
  }{ struct Cyc_IntPtr_sa_ScanfArg_struct _T1B = _T11;
    void * _T1C[1];
    _T1C[0] = &_T1B;
    _T12 = line;
    _T13 = _tag_fat("# %d",sizeof(char),5U);
    _T14 = _tag_fat(_T1C,sizeof(void *),1);
    _T10 = Cyc_sscanf(_T12,_T13,_T14);
  }if (_T10 != 1) { goto _TLC2;
  }
  if (Cyc_Lex_linenumber != i) { goto _TLC4;
  }
  return;
  _TLC4: Cyc_Lex_linenumber = i;
  if (Cyc_Lex_pos_info == 0) { goto _TLC6;
  }
  _T15 = Cyc_Lex_pos_info;
  filename = _T15->filename;
  goto _TLC7;
  _TLC6: _TLC7: goto _TLC3;
  _TLC2: Cyc_Lex_linenumber = Cyc_Lex_linenumber + 1;
  return;
  _TLC3: _TLBF: _T16 = Cyc_Core_heap_region;
  _T17 = filename;
  _T18 = Cyc_Lex_linenumber;
  _T19 = (unsigned int)_T18;
  _T1A = Cyc_Lex_pos_info;
  Cyc_Lex_pos_info = Cyc_Lex_rnew_filepos(_T16,_T17,_T19,_T1A);
}
 struct _tuple35 {
  struct _fat_ptr f0;
  unsigned int f1;
};
struct _tuple35 Cyc_Lex_xlate_pos(unsigned int char_offset) {
  struct Cyc_Lex_PosInfo * _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  unsigned int * _T3;
  struct Cyc_Lex_PosInfo * _T4;
  struct Cyc_Lex_PosInfo * _T5;
  struct Cyc_Lex_PosInfo * _T6;
  unsigned int _T7;
  unsigned int _T8;
  int _T9;
  unsigned int _TA;
  unsigned int _TB;
  unsigned int _TC;
  struct Cyc_Lex_PosInfo * _TD;
  struct _fat_ptr _TE;
  int _TF;
  unsigned char * _T10;
  unsigned int * _T11;
  unsigned int _T12;
  unsigned int _T13;
  int _T14;
  unsigned int _T15;
  unsigned int _T16;
  int _T17;
  unsigned int _T18;
  int _T19;
  struct _tuple35 _T1A;
  struct Cyc_Lex_PosInfo * _T1B;
  struct Cyc_Lex_PosInfo * _T1C;
  unsigned int _T1D;
  unsigned int _T1E;
  struct Cyc_Lex_PosInfo * _T1F;
  struct _tuple35 _T20;
  { struct Cyc_Lex_PosInfo * p = Cyc_Lex_pos_info;
    _TLCB: if (p != 0) { goto _TLC9;
    }else { goto _TLCA;
    }
    _TLC9: _T0 = p;
    _T1 = _T0->linenumpos;
    _T2 = _check_fat_subscript(_T1,sizeof(unsigned int),0);
    _T3 = (unsigned int *)_T2;
    { unsigned int first_char_offset = *_T3;
      if (char_offset >= first_char_offset) { goto _TLCC;
      }
      _T4 = p;
      _T5 = _T4->next;
      if (_T5 == 0) { goto _TLCC;
      }
      goto _TLC8;
      _TLCC: { unsigned int base = 0U;
	_T6 = p;
	{ unsigned int size = _T6->linenumpos_offset;
	  _TLCE: if (size > 1U) { goto _TLCF;
	  }else { goto _TLD0;
	  }
	  _TLCF: _T7 = size / 2U;
	  { int half = (int)_T7;
	    _T8 = base;
	    _T9 = half;
	    _TA = (unsigned int)_T9;
	    _TB = _T8 + _TA;
	    { int mid = (int)_TB;
	      _TC = char_offset;
	      _TD = p;
	      _TE = _TD->linenumpos;
	      _TF = mid;
	      _T10 = _check_fat_subscript(_TE,sizeof(unsigned int),_TF);
	      _T11 = (unsigned int *)_T10;
	      _T12 = *_T11;
	      if (_TC <= _T12) { goto _TLD1;
	      }
	      _T13 = base;
	      _T14 = half;
	      _T15 = (unsigned int)_T14;
	      base = _T13 + _T15;
	      _T16 = size;
	      _T17 = half;
	      _T18 = (unsigned int)_T17;
	      size = _T16 - _T18;
	      goto _TLD2;
	      _TLD1: _T19 = half;
	      size = (unsigned int)_T19;
	      _TLD2: ;
	    }
	  }goto _TLCE;
	  _TLD0: { struct _tuple35 _T21;
	    _T1B = p;
	    _T21.f0 = _T1B->filename;
	    _T1C = p;
	    _T1D = _T1C->starting_line;
	    _T1E = base;
	    _T21.f1 = _T1D + _T1E;
	    _T1A = _T21;
	  }return _T1A;
	}
      }
    }_TLC8: _T1F = p;
    p = _T1F->next;
    goto _TLCB;
    _TLCA: ;
  }{ struct _tuple35 _T21;
    _T21.f0 = _tag_fat(0,0,0);
    _T21.f1 = 0U;
    _T20 = _T21;
  }return _T20;
}
int Cyc_Lex_token(struct Cyc_Lexing_lexbuf *);
int Cyc_Lex_scan_charconst(struct Cyc_Lexing_lexbuf *);
int Cyc_Lex_strng(struct Cyc_Lexing_lexbuf *);
int Cyc_Lex_strng_next(struct Cyc_Lexing_lexbuf *);
int Cyc_Lex_wstrng(struct Cyc_Lexing_lexbuf *);
int Cyc_Lex_wstrng_next(struct Cyc_Lexing_lexbuf *);
int Cyc_Lex_comment(struct Cyc_Lexing_lexbuf *);
int Cyc_yylex(struct Cyc_Lexing_lexbuf * lbuf,union Cyc_YYSTYPE * yylval,
	      struct Cyc_Yyltype * yyllocptr) {
  struct Cyc_Yyltype * _T0;
  int _T1;
  struct Cyc_Yyltype * _T2;
  int _T3;
  int _T4;
  int _T5;
  union Cyc_YYSTYPE * _T6;
  union Cyc_YYSTYPE _T7;
  union Cyc_YYSTYPE * _T8;
  union Cyc_YYSTYPE _T9;
  union Cyc_YYSTYPE * _TA;
  union Cyc_YYSTYPE _TB;
  union Cyc_YYSTYPE * _TC;
  union Cyc_YYSTYPE _TD;
  int _TE;
  int ans = Cyc_Lex_token(lbuf);
  _T0 = yyllocptr;
  _T1 = Cyc_Lexing_lexeme_start(lbuf);
  _T0->first_line = (unsigned int)_T1;
  Cyc_yylloc.first_line = _T0->first_line;
  _T2 = yyllocptr;
  _T3 = Cyc_Lexing_lexeme_end(lbuf);
  _T2->last_line = (unsigned int)_T3;
  Cyc_yylloc.last_line = _T2->last_line;
  _T4 = ans;
  _T5 = (int)_T4;
  switch (_T5) {
  case 402: 
    goto _LL4;
  case 398: 
    _LL4: goto _LL6;
  case 396: 
    _LL6: goto _LL8;
  case 397: 
    _LL8: goto _LLA;
  case 393: 
    _LLA: goto _LLC;
  case 394: 
    _LLC: goto _LLE;
  case 391: 
    _LLE: goto _LL10;
  case 399: 
    _LL10: _T6 = yylval;
    { union Cyc_YYSTYPE _TF;
      (_TF.String_tok).tag = 4U;
      (_TF.String_tok).val = Cyc_Lex_token_string;
      _T7 = _TF;
    }*_T6 = _T7;
    goto _LL0;
  case 400: 
    goto _LL14;
  case 401: 
    _LL14: _T8 = yylval;
    { union Cyc_YYSTYPE _TF;
      (_TF.QualId_tok).tag = 5U;
      (_TF.QualId_tok).val = Cyc_Lex_token_qvar;
      _T9 = _TF;
    }*_T8 = _T9;
    goto _LL0;
  case 392: 
    _TA = yylval;
    { union Cyc_YYSTYPE _TF;
      (_TF.Int_tok).tag = 2U;
      (_TF.Int_tok).val = Cyc_Lex_token_int;
      _TB = _TF;
    }*_TA = _TB;
    goto _LL0;
  case 395: 
    _TC = yylval;
    { union Cyc_YYSTYPE _TF;
      (_TF.Char_tok).tag = 3U;
      (_TF.Char_tok).val = Cyc_Lex_token_char;
      _TD = _TF;
    }*_TC = _TD;
    goto _LL0;
  default: 
    goto _LL0;
  }
  _LL0: _TE = ans;
  return _TE;
}
const int Cyc_Lex_lex_base[209U] = {0,
				    113,
				    119,
				    120,
				    125,
				    126,
				    127,
				    131,
				    - 6,
				    4,
				    12,
				    2,
				    - 3,
				    - 1,
				    - 2,
				    115,
				    - 4,
				    121,
				    - 1,
				    131,
				    - 5,
				    209,
				    217,
				    240,
				    272,
				    132,
				    - 4,
				    - 3,
				    - 2,
				    5,
				    2,
				    133,
				    - 17,
				    138,
				    - 1,
				    351,
				    - 18,
				    6,
				    - 12,
				    - 11,
				    280,
				    - 13,
				    - 10,
				    - 7,
				    - 8,
				    - 9,
				    424,
				    447,
				    295,
				    - 14,
				    154,
				    - 17,
				    7,
				    - 1,
				    - 15,
				    - 16,
				    8,
				    - 1,
				    502,
				    303,
				    575,
				    650,
				    367,
				    - 16,
				    - 59,
				    178,
				    - 39,
				    9,
				    2,
				    - 41,
				    137,
				    30,
				    107,
				    117,
				    32,
				    115,
				    101,
				    377,
				    150,
				    727,
				    770,
				    135,
				    138,
				    98,
				    141,
				    823,
				    898,
				    987,
				    1045,
				    100,
				    1120,
				    1178,
				    110,
				    - 58,
				    - 23,
				    - 29,
				    1253,
				    1328,
				    1403,
				    1478,
				    1553,
				    1628,
				    1703,
				    1778,
				    1853,
				    1928,
				    - 24,
				    2003,
				    - 42,
				    - 43,
				    2078,
				    117,
				    2136,
				    2211,
				    2286,
				    119,
				    2361,
				    2436,
				    2511,
				    - 15,
				    130,
				    - 27,
				    134,
				    - 32,
				    - 26,
				    - 35,
				    146,
				    - 36,
				    2586,
				    2615,
				    518,
				    500,
				    130,
				    132,
				    131,
				    737,
				    2625,
				    2655,
				    2689,
				    2729,
				    502,
				    144,
				    2799,
				    2837,
				    724,
				    145,
				    146,
				    158,
				    168,
				    194,
				    725,
				    204,
				    205,
				    219,
				    726,
				    283,
				    284,
				    - 8,
				    278,
				    - 40,
				    204,
				    - 21,
				    - 39,
				    10,
				    169,
				    2769,
				    - 34,
				    - 19,
				    - 33,
				    - 20,
				    1,
				    2877,
				    2,
				    180,
				    479,
				    187,
				    188,
				    192,
				    193,
				    196,
				    197,
				    198,
				    200,
				    203,
				    2950,
				    3034,
				    - 56,
				    - 50,
				    - 49,
				    - 48,
				    - 47,
				    - 46,
				    - 45,
				    - 44,
				    - 51,
				    - 54,
				    - 55,
				    809,
				    211,
				    - 52,
				    - 53,
				    - 57,
				    - 28,
				    - 25,
				    - 22,
				    355,
				    - 37,
				    11,
				    426};
const int Cyc_Lex_lex_backtrk[209U] = {- 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       6,
				       - 1,
				       5,
				       3,
				       4,
				       - 1,
				       - 1,
				       - 1,
				       2,
				       - 1,
				       2,
				       - 1,
				       5,
				       - 1,
				       2,
				       - 1,
				       2,
				       2,
				       2,
				       - 1,
				       - 1,
				       - 1,
				       1,
				       3,
				       15,
				       - 1,
				       15,
				       - 1,
				       18,
				       - 1,
				       1,
				       - 1,
				       - 1,
				       13,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       14,
				       13,
				       - 1,
				       15,
				       - 1,
				       1,
				       - 1,
				       - 1,
				       - 1,
				       14,
				       - 1,
				       17,
				       12,
				       - 1,
				       13,
				       12,
				       - 1,
				       - 1,
				       37,
				       - 1,
				       38,
				       58,
				       - 1,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       7,
				       9,
				       58,
				       58,
				       58,
				       58,
				       58,
				       1,
				       1,
				       58,
				       58,
				       58,
				       58,
				       58,
				       - 1,
				       - 1,
				       - 1,
				       3,
				       1,
				       1,
				       1,
				       1,
				       1,
				       1,
				       1,
				       1,
				       0,
				       - 1,
				       4,
				       - 1,
				       - 1,
				       1,
				       - 1,
				       - 1,
				       2,
				       2,
				       - 1,
				       5,
				       - 1,
				       5,
				       - 1,
				       30,
				       - 1,
				       29,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       10,
				       9,
				       - 1,
				       9,
				       9,
				       9,
				       9,
				       - 1,
				       10,
				       10,
				       7,
				       8,
				       7,
				       7,
				       - 1,
				       6,
				       6,
				       6,
				       6,
				       6,
				       7,
				       7,
				       8,
				       8,
				       8,
				       8,
				       7,
				       7,
				       7,
				       - 1,
				       7,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       38,
				       - 1,
				       10,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       36,
				       37};
const int Cyc_Lex_lex_default[209U] = {64,
				       54,
				       26,
				       31,
				       26,
				       15,
				       7,
				       7,
				       0,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       0,
				       0,
				       25,
				       0,
				       25,
				       0,
				       - 1,
				       0,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       25,
				       0,
				       0,
				       0,
				       - 1,
				       - 1,
				       50,
				       0,
				       50,
				       0,
				       - 1,
				       0,
				       - 1,
				       0,
				       0,
				       - 1,
				       0,
				       0,
				       0,
				       0,
				       0,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       50,
				       0,
				       - 1,
				       0,
				       0,
				       0,
				       - 1,
				       0,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       0,
				       - 1,
				       0,
				       - 1,
				       - 1,
				       0,
				       205,
				       - 1,
				       - 1,
				       170,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       0,
				       0,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       - 1,
				       0,
				       0,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       - 1,
				       0,
				       - 1,
				       0,
				       0,
				       0,
				       - 1,
				       0,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       - 1,
				       0,
				       160,
				       0,
				       0,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       0,
				       0,
				       0,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       - 1,
				       - 1,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       205,
				       0,
				       - 1,
				       - 1};
const int Cyc_Lex_lex_trans[3291U] = {0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      65,
				      66,
				      65,
				      65,
				      67,
				      8,
				      14,
				      14,
				      14,
				      63,
				      162,
				      162,
				      206,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      65,
				      68,
				      69,
				      70,
				      13,
				      71,
				      72,
				      73,
				      201,
				      200,
				      74,
				      75,
				      13,
				      76,
				      77,
				      78,
				      79,
				      80,
				      80,
				      80,
				      80,
				      80,
				      80,
				      80,
				      80,
				      80,
				      81,
				      14,
				      82,
				      83,
				      84,
				      41,
				      85,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      87,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      204,
				      88,
				      169,
				      89,
				      90,
				      91,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      55,
				      92,
				      - 1,
				      56,
				      - 1,
				      27,
				      28,
				      32,
				      26,
				      52,
				      33,
				      27,
				      28,
				      16,
				      8,
				      29,
				      17,
				      9,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      202,
				      51,
				      206,
				      51,
				      - 1,
				      207,
				      27,
				      57,
				      53,
				      34,
				      - 1,
				      - 1,
				      27,
				      63,
				      38,
				      18,
				      106,
				      167,
				      168,
				      - 1,
				      14,
				      - 1,
				      - 1,
				      203,
				      10,
				      14,
				      94,
				      - 1,
				      - 1,
				      11,
				      112,
				      36,
				      112,
				      - 1,
				      21,
				      21,
				      21,
				      21,
				      21,
				      21,
				      21,
				      21,
				      208,
				      - 1,
				      208,
				      208,
				      121,
				      159,
				      125,
				      14,
				      124,
				      126,
				      160,
				      122,
				      49,
				      123,
				      30,
				      119,
				      120,
				      127,
				      58,
				      133,
				      - 1,
				      42,
				      171,
				      208,
				      161,
				      35,
				      - 1,
				      162,
				      166,
				      42,
				      163,
				      19,
				      199,
				      148,
				      146,
				      43,
				      14,
				      - 1,
				      - 1,
				      195,
				      194,
				      14,
				      14,
				      - 1,
				      193,
				      192,
				      14,
				      95,
				      191,
				      190,
				      189,
				      133,
				      188,
				      42,
				      14,
				      187,
				      43,
				      44,
				      14,
				      - 1,
				      14,
				      42,
				      14,
				      196,
				      22,
				      148,
				      146,
				      43,
				      0,
				      93,
				      24,
				      24,
				      24,
				      24,
				      24,
				      24,
				      24,
				      24,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      43,
				      44,
				      0,
				      0,
				      44,
				      152,
				      45,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      45,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      44,
				      152,
				      45,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      12,
				      12,
				      12,
				      12,
				      12,
				      12,
				      12,
				      12,
				      48,
				      48,
				      48,
				      48,
				      48,
				      48,
				      48,
				      48,
				      45,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      49,
				      49,
				      49,
				      49,
				      49,
				      49,
				      49,
				      49,
				      62,
				      62,
				      62,
				      62,
				      62,
				      62,
				      62,
				      62,
				      156,
				      157,
				      14,
				      0,
				      157,
				      37,
				      206,
				      0,
				      0,
				      207,
				      51,
				      0,
				      - 1,
				      0,
				      - 1,
				      0,
				      - 1,
				      36,
				      - 1,
				      0,
				      0,
				      0,
				      - 1,
				      20,
				      12,
				      0,
				      38,
				      0,
				      - 1,
				      - 1,
				      - 1,
				      39,
				      156,
				      157,
				      - 1,
				      - 1,
				      157,
				      0,
				      0,
				      0,
				      40,
				      40,
				      40,
				      40,
				      40,
				      40,
				      40,
				      40,
				      0,
				      0,
				      0,
				      - 1,
				      0,
				      0,
				      0,
				      41,
				      41,
				      41,
				      41,
				      41,
				      41,
				      41,
				      41,
				      41,
				      164,
				      0,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      208,
				      0,
				      208,
				      208,
				      0,
				      0,
				      0,
				      0,
				      42,
				      0,
				      0,
				      0,
				      0,
				      12,
				      26,
				      0,
				      0,
				      0,
				      20,
				      0,
				      0,
				      0,
				      0,
				      208,
				      0,
				      - 1,
				      8,
				      0,
				      0,
				      0,
				      43,
				      0,
				      44,
				      0,
				      45,
				      0,
				      46,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      196,
				      0,
				      0,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      197,
				      197,
				      197,
				      197,
				      197,
				      197,
				      197,
				      197,
				      0,
				      39,
				      0,
				      0,
				      0,
				      0,
				      42,
				      0,
				      0,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      59,
				      59,
				      59,
				      59,
				      59,
				      59,
				      59,
				      59,
				      0,
				      0,
				      0,
				      135,
				      0,
				      135,
				      0,
				      38,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      134,
				      0,
				      149,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      42,
				      0,
				      44,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      45,
				      0,
				      0,
				      0,
				      0,
				      14,
				      12,
				      0,
				      0,
				      0,
				      26,
				      0,
				      0,
				      0,
				      134,
				      0,
				      149,
				      - 1,
				      20,
				      0,
				      0,
				      0,
				      8,
				      42,
				      43,
				      44,
				      44,
				      0,
				      60,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      128,
				      0,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      139,
				      139,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      0,
				      130,
				      39,
				      0,
				      0,
				      147,
				      153,
				      158,
				      140,
				      0,
				      0,
				      0,
				      0,
				      0,
				      43,
				      45,
				      157,
				      141,
				      0,
				      0,
				      142,
				      128,
				      0,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      130,
				      39,
				      0,
				      0,
				      147,
				      153,
				      158,
				      140,
				      0,
				      0,
				      0,
				      130,
				      39,
				      43,
				      45,
				      157,
				      141,
				      0,
				      131,
				      142,
				      196,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      132,
				      0,
				      198,
				      198,
				      198,
				      198,
				      198,
				      198,
				      198,
				      198,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      130,
				      39,
				      0,
				      0,
				      0,
				      0,
				      0,
				      131,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      132,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      0,
				      0,
				      0,
				      0,
				      117,
				      0,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      111,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      0,
				      0,
				      0,
				      0,
				      110,
				      0,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      108,
				      0,
				      0,
				      0,
				      0,
				      109,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      111,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      0,
				      0,
				      0,
				      0,
				      110,
				      0,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      98,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      0,
				      0,
				      0,
				      0,
				      96,
				      0,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      0,
				      0,
				      0,
				      0,
				      96,
				      0,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      99,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      100,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      101,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      102,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      97,
				      103,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      104,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      97,
				      97,
				      97,
				      97,
				      105,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      0,
				      0,
				      0,
				      0,
				      97,
				      0,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      0,
				      0,
				      0,
				      0,
				      107,
				      0,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      111,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      0,
				      0,
				      0,
				      0,
				      110,
				      0,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      0,
				      0,
				      0,
				      0,
				      114,
				      0,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      115,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      0,
				      0,
				      0,
				      0,
				      113,
				      0,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      0,
				      0,
				      0,
				      0,
				      114,
				      0,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      0,
				      0,
				      0,
				      0,
				      116,
				      0,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      0,
				      0,
				      0,
				      0,
				      118,
				      0,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      0,
				      0,
				      0,
				      0,
				      118,
				      0,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      130,
				      39,
				      0,
				      0,
				      0,
				      0,
				      128,
				      39,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      0,
				      130,
				      39,
				      0,
				      130,
				      39,
				      0,
				      0,
				      131,
				      0,
				      0,
				      39,
				      39,
				      0,
				      0,
				      0,
				      0,
				      132,
				      39,
				      0,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      0,
				      0,
				      0,
				      130,
				      39,
				      0,
				      0,
				      0,
				      0,
				      0,
				      131,
				      130,
				      39,
				      0,
				      39,
				      0,
				      0,
				      0,
				      39,
				      132,
				      39,
				      0,
				      128,
				      0,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      139,
				      139,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      130,
				      39,
				      130,
				      39,
				      0,
				      0,
				      0,
				      39,
				      0,
				      154,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      155,
				      128,
				      0,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      0,
				      0,
				      0,
				      130,
				      39,
				      0,
				      0,
				      0,
				      0,
				      0,
				      154,
				      130,
				      39,
				      0,
				      0,
				      0,
				      0,
				      0,
				      150,
				      155,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      151,
				      0,
				      0,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      0,
				      0,
				      0,
				      130,
				      39,
				      0,
				      0,
				      0,
				      0,
				      0,
				      150,
				      130,
				      39,
				      0,
				      0,
				      0,
				      0,
				      0,
				      39,
				      151,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      130,
				      39,
				      0,
				      0,
				      0,
				      0,
				      0,
				      39,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      0,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      0,
				      0,
				      0,
				      172,
				      0,
				      144,
				      0,
				      0,
				      173,
				      0,
				      0,
				      0,
				      0,
				      0,
				      145,
				      0,
				      0,
				      174,
				      174,
				      174,
				      174,
				      174,
				      174,
				      174,
				      174,
				      0,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      175,
				      0,
				      0,
				      0,
				      0,
				      144,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      145,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      176,
				      0,
				      0,
				      0,
				      0,
				      177,
				      178,
				      0,
				      0,
				      0,
				      179,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      180,
				      0,
				      0,
				      0,
				      181,
				      0,
				      182,
				      0,
				      183,
				      0,
				      184,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      186,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0};
const int Cyc_Lex_lex_check[3291U] = {- 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      0,
				      0,
				      0,
				      0,
				      0,
				      9,
				      29,
				      37,
				      52,
				      56,
				      67,
				      163,
				      207,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      0,
				      0,
				      0,
				      0,
				      30,
				      0,
				      0,
				      0,
				      170,
				      172,
				      0,
				      0,
				      11,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      10,
				      0,
				      0,
				      0,
				      68,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      71,
				      0,
				      74,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
				      0,
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
				      15,
				      1,
				      73,
				      2,
				      2,
				      3,
				      17,
				      2,
				      3,
				      4,
				      4,
				      5,
				      6,
				      4,
				      5,
				      6,
				      7,
				      25,
				      31,
				      7,
				      72,
				      76,
				      70,
				      33,
				      15,
				      70,
				      2,
				      1,
				      2,
				      3,
				      17,
				      73,
				      4,
				      75,
				      83,
				      5,
				      89,
				      76,
				      76,
				      50,
				      19,
				      25,
				      31,
				      72,
				      6,
				      19,
				      92,
				      33,
				      7,
				      6,
				      111,
				      75,
				      115,
				      7,
				      19,
				      19,
				      19,
				      19,
				      19,
				      19,
				      19,
				      19,
				      65,
				      50,
				      65,
				      65,
				      120,
				      78,
				      81,
				      19,
				      122,
				      81,
				      78,
				      82,
				      82,
				      82,
				      4,
				      84,
				      84,
				      126,
				      1,
				      132,
				      15,
				      133,
				      73,
				      65,
				      78,
				      3,
				      17,
				      160,
				      164,
				      134,
				      160,
				      5,
				      173,
				      141,
				      145,
				      146,
				      19,
				      25,
				      31,
				      175,
				      176,
				      19,
				      19,
				      33,
				      177,
				      178,
				      19,
				      92,
				      179,
				      180,
				      181,
				      132,
				      182,
				      133,
				      19,
				      183,
				      147,
				      148,
				      19,
				      50,
				      19,
				      134,
				      19,
				      198,
				      19,
				      141,
				      145,
				      146,
				      - 1,
				      0,
				      21,
				      21,
				      21,
				      21,
				      21,
				      21,
				      21,
				      21,
				      22,
				      22,
				      22,
				      22,
				      22,
				      22,
				      22,
				      22,
				      22,
				      22,
				      147,
				      148,
				      - 1,
				      - 1,
				      149,
				      151,
				      152,
				      22,
				      22,
				      22,
				      22,
				      22,
				      22,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      153,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      149,
				      151,
				      152,
				      22,
				      22,
				      22,
				      22,
				      22,
				      22,
				      24,
				      24,
				      24,
				      24,
				      24,
				      24,
				      24,
				      24,
				      40,
				      40,
				      40,
				      40,
				      40,
				      40,
				      40,
				      40,
				      153,
				      23,
				      23,
				      23,
				      23,
				      23,
				      23,
				      48,
				      48,
				      48,
				      48,
				      48,
				      48,
				      48,
				      48,
				      59,
				      59,
				      59,
				      59,
				      59,
				      59,
				      59,
				      59,
				      155,
				      156,
				      35,
				      - 1,
				      158,
				      35,
				      205,
				      - 1,
				      - 1,
				      205,
				      1,
				      - 1,
				      15,
				      - 1,
				      73,
				      - 1,
				      2,
				      3,
				      17,
				      - 1,
				      - 1,
				      - 1,
				      4,
				      5,
				      6,
				      - 1,
				      35,
				      - 1,
				      7,
				      25,
				      31,
				      35,
				      155,
				      156,
				      70,
				      33,
				      158,
				      - 1,
				      - 1,
				      - 1,
				      35,
				      35,
				      35,
				      35,
				      35,
				      35,
				      35,
				      35,
				      - 1,
				      - 1,
				      - 1,
				      50,
				      - 1,
				      - 1,
				      - 1,
				      35,
				      62,
				      62,
				      62,
				      62,
				      62,
				      62,
				      62,
				      62,
				      77,
				      - 1,
				      77,
				      77,
				      77,
				      77,
				      77,
				      77,
				      77,
				      77,
				      77,
				      77,
				      208,
				      - 1,
				      208,
				      208,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      35,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      35,
				      35,
				      - 1,
				      - 1,
				      - 1,
				      35,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      208,
				      - 1,
				      160,
				      35,
				      - 1,
				      - 1,
				      - 1,
				      35,
				      - 1,
				      35,
				      - 1,
				      35,
				      - 1,
				      35,
				      46,
				      46,
				      46,
				      46,
				      46,
				      46,
				      46,
				      46,
				      46,
				      46,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      46,
				      46,
				      46,
				      46,
				      46,
				      46,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      174,
				      - 1,
				      - 1,
				      46,
				      46,
				      46,
				      46,
				      46,
				      46,
				      174,
				      174,
				      174,
				      174,
				      174,
				      174,
				      174,
				      174,
				      - 1,
				      58,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      58,
				      - 1,
				      - 1,
				      47,
				      47,
				      47,
				      47,
				      47,
				      47,
				      58,
				      58,
				      58,
				      58,
				      58,
				      58,
				      58,
				      58,
				      - 1,
				      - 1,
				      - 1,
				      130,
				      - 1,
				      130,
				      - 1,
				      58,
				      130,
				      130,
				      130,
				      130,
				      130,
				      130,
				      130,
				      130,
				      130,
				      130,
				      131,
				      - 1,
				      140,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      131,
				      - 1,
				      140,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      58,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      58,
				      58,
				      - 1,
				      - 1,
				      - 1,
				      58,
				      - 1,
				      - 1,
				      - 1,
				      131,
				      - 1,
				      140,
				      205,
				      58,
				      - 1,
				      - 1,
				      - 1,
				      58,
				      131,
				      58,
				      140,
				      58,
				      - 1,
				      58,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      60,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      61,
				      79,
				      - 1,
				      79,
				      79,
				      79,
				      79,
				      79,
				      79,
				      79,
				      79,
				      79,
				      79,
				      135,
				      135,
				      135,
				      135,
				      135,
				      135,
				      135,
				      135,
				      135,
				      135,
				      - 1,
				      79,
				      79,
				      - 1,
				      - 1,
				      144,
				      150,
				      154,
				      79,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      144,
				      150,
				      154,
				      79,
				      - 1,
				      - 1,
				      79,
				      80,
				      - 1,
				      80,
				      80,
				      80,
				      80,
				      80,
				      80,
				      80,
				      80,
				      80,
				      80,
				      79,
				      79,
				      - 1,
				      - 1,
				      144,
				      150,
				      154,
				      79,
				      - 1,
				      - 1,
				      - 1,
				      80,
				      80,
				      144,
				      150,
				      154,
				      79,
				      - 1,
				      80,
				      79,
				      197,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      80,
				      - 1,
				      197,
				      197,
				      197,
				      197,
				      197,
				      197,
				      197,
				      197,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      80,
				      80,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      80,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      80,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      85,
				      - 1,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      85,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      86,
				      - 1,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      86,
				      87,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      87,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      87,
				      - 1,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      87,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      88,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      90,
				      - 1,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      90,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      91,
				      - 1,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      91,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      96,
				      - 1,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      96,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      97,
				      - 1,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      97,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      98,
				      - 1,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      98,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      99,
				      - 1,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      99,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      100,
				      - 1,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      100,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      101,
				      - 1,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      101,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      102,
				      - 1,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      102,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      103,
				      - 1,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      103,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      104,
				      - 1,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      104,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      105,
				      - 1,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      105,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      107,
				      - 1,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      107,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      110,
				      - 1,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      110,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      112,
				      - 1,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      112,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      113,
				      - 1,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      113,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      114,
				      - 1,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      114,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      116,
				      - 1,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      116,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      117,
				      - 1,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      117,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      118,
				      - 1,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      118,
				      128,
				      128,
				      128,
				      128,
				      128,
				      128,
				      128,
				      128,
				      128,
				      128,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      128,
				      128,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      129,
				      128,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      129,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      136,
				      - 1,
				      129,
				      129,
				      - 1,
				      128,
				      128,
				      - 1,
				      - 1,
				      129,
				      - 1,
				      - 1,
				      128,
				      136,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      129,
				      136,
				      - 1,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      137,
				      - 1,
				      - 1,
				      - 1,
				      129,
				      129,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      129,
				      137,
				      137,
				      - 1,
				      136,
				      - 1,
				      - 1,
				      - 1,
				      137,
				      129,
				      136,
				      - 1,
				      138,
				      - 1,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      138,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      137,
				      137,
				      138,
				      138,
				      - 1,
				      - 1,
				      - 1,
				      137,
				      - 1,
				      138,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      138,
				      139,
				      - 1,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      139,
				      - 1,
				      - 1,
				      - 1,
				      138,
				      138,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      138,
				      139,
				      139,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      139,
				      138,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      139,
				      - 1,
				      - 1,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      165,
				      - 1,
				      - 1,
				      - 1,
				      139,
				      139,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      139,
				      165,
				      165,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      165,
				      139,
				      142,
				      142,
				      142,
				      142,
				      142,
				      142,
				      142,
				      142,
				      142,
				      142,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      142,
				      142,
				      142,
				      142,
				      142,
				      142,
				      165,
				      165,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      165,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      - 1,
				      142,
				      142,
				      142,
				      142,
				      142,
				      142,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      - 1,
				      - 1,
				      - 1,
				      171,
				      - 1,
				      143,
				      - 1,
				      - 1,
				      171,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      143,
				      - 1,
				      - 1,
				      171,
				      171,
				      171,
				      171,
				      171,
				      171,
				      171,
				      171,
				      - 1,
				      143,
				      143,
				      143,
				      143,
				      143,
				      143,
				      171,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      143,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      143,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      171,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      171,
				      171,
				      - 1,
				      - 1,
				      - 1,
				      171,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      171,
				      - 1,
				      - 1,
				      - 1,
				      171,
				      - 1,
				      171,
				      - 1,
				      171,
				      - 1,
				      171,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      184,
				      185,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      185,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1,
				      - 1};
int Cyc_Lex_lex_engine(int start_state,struct Cyc_Lexing_lexbuf * lbuf) {
  struct Cyc_Lexing_lexbuf * _T0;
  struct Cyc_Lexing_lexbuf * _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  struct Cyc_Lexing_lexbuf * _T3;
  int _T4;
  const int * _T5;
  int _T6;
  const char * _T7;
  const int * _T8;
  int _T9;
  int _TA;
  const int * _TB;
  int _TC;
  struct Cyc_Lexing_lexbuf * _TD;
  struct Cyc_Lexing_lexbuf * _TE;
  struct Cyc_Lexing_lexbuf * _TF;
  struct Cyc_Lexing_lexbuf * _T10;
  int _T11;
  struct Cyc_Lexing_lexbuf * _T12;
  int _T13;
  struct Cyc_Lexing_lexbuf * _T14;
  long _T15;
  int _T16;
  int _T17;
  struct Cyc_Lexing_lexbuf * _T18;
  struct _fat_ptr _T19;
  struct Cyc_Lexing_lexbuf * _T1A;
  int _T1B;
  int _T1C;
  unsigned char * _T1D;
  char * _T1E;
  char _T1F;
  int _T20;
  int _T21;
  const int * _T22;
  int _T23;
  const char * _T24;
  const int * _T25;
  int _T26;
  int _T27;
  const int * _T28;
  int _T29;
  const int * _T2A;
  int _T2B;
  struct Cyc_Lexing_lexbuf * _T2C;
  struct Cyc_Lexing_lexbuf * _T2D;
  struct Cyc_Lexing_lexbuf * _T2E;
  int _T2F;
  int _T30;
  struct Cyc_Lexing_Error_exn_struct * _T31;
  void * _T32;
  struct Cyc_Lexing_lexbuf * _T33;
  int _T34;
  struct Cyc_Lexing_lexbuf * _T35;
  int state;
  int base;
  int backtrk;
  int c;
  state = start_state;
  if (state < 0) { goto _TLD4;
  }
  _T0 = lbuf;
  _T1 = lbuf;
  _T2 = lbuf;
  _T1->lex_start_pos = _T2->lex_curr_pos;
  _T0->lex_last_pos = _T1->lex_start_pos;
  _T3 = lbuf;
  _T3->lex_last_action = - 1;
  goto _TLD5;
  _TLD4: _T4 = - state;
  state = _T4 - 1;
  _TLD5: _TLD6: if (1) { goto _TLD7;
  }else { goto _TLD8;
  }
  _TLD7: _T5 = Cyc_Lex_lex_base;
  _T6 = state;
  _T7 = _check_known_subscript_notnull(_T5,209U,sizeof(int),_T6);
  _T8 = (const int *)_T7;
  base = *_T8;
  if (base >= 0) { goto _TLD9;
  }
  _T9 = - base;
  _TA = _T9 - 1;
  return _TA;
  _TLD9: _TB = Cyc_Lex_lex_backtrk;
  _TC = state;
  backtrk = _TB[_TC];
  if (backtrk < 0) { goto _TLDB;
  }
  _TD = lbuf;
  _TE = lbuf;
  _TD->lex_last_pos = _TE->lex_curr_pos;
  _TF = lbuf;
  _TF->lex_last_action = backtrk;
  goto _TLDC;
  _TLDB: _TLDC: _T10 = lbuf;
  _T11 = _T10->lex_curr_pos;
  _T12 = lbuf;
  _T13 = _T12->lex_buffer_len;
  if (_T11 < _T13) { goto _TLDD;
  }
  _T14 = lbuf;
  _T15 = _T14->lex_eof_reached;
  if (_T15) { goto _TLDF;
  }else { goto _TLE1;
  }
  _TLE1: _T16 = - state;
  _T17 = _T16 - 1;
  return _T17;
  _TLDF: c = 256;
  goto _TLDE;
  _TLDD: _T18 = lbuf;
  _T19 = _T18->lex_buffer;
  _T1A = lbuf;
  _T1B = _T1A->lex_curr_pos;
  _T1A->lex_curr_pos = _T1B + 1;
  _T1C = _T1B;
  _T1D = _check_fat_subscript(_T19,sizeof(char),_T1C);
  _T1E = (char *)_T1D;
  _T1F = *_T1E;
  c = (int)_T1F;
  _T20 = c;
  _T21 = - 1;
  if (_T20 != _T21) { goto _TLE2;
  }
  c = 256;
  goto _TLE3;
  _TLE2: if (c >= 0) { goto _TLE4;
  }
  c = 256 + c;
  goto _TLE5;
  _TLE4: _TLE5: _TLE3: _TLDE: _T22 = Cyc_Lex_lex_check;
  _T23 = base + c;
  _T24 = _check_known_subscript_notnull(_T22,3291U,sizeof(int),_T23);
  _T25 = (const int *)_T24;
  _T26 = *_T25;
  _T27 = state;
  if (_T26 != _T27) { goto _TLE6;
  }
  _T28 = Cyc_Lex_lex_trans;
  _T29 = base + c;
  state = _T28[_T29];
  goto _TLE7;
  _TLE6: _T2A = Cyc_Lex_lex_default;
  _T2B = state;
  state = _T2A[_T2B];
  _TLE7: if (state >= 0) { goto _TLE8;
  }
  _T2C = lbuf;
  _T2D = lbuf;
  _T2C->lex_curr_pos = _T2D->lex_last_pos;
  _T2E = lbuf;
  _T2F = _T2E->lex_last_action;
  _T30 = - 1;
  if (_T2F != _T30) { goto _TLEA;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T36 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T36->tag = Cyc_Lexing_Error;
    _T36->f1 = _tag_fat("empty token",sizeof(char),12U);
    _T31 = (struct Cyc_Lexing_Error_exn_struct *)_T36;
  }_T32 = (void *)_T31;
  _throw(_T32);
  goto _TLEB;
  _TLEA: _T33 = lbuf;
  _T34 = _T33->lex_last_action;
  return _T34;
  _TLEB: goto _TLE9;
  _TLE8: if (c != 256) { goto _TLEC;
  }
  _T35 = lbuf;
  _T35->lex_eof_reached = 0;
  goto _TLED;
  _TLEC: _TLED: _TLE9: goto _TLD6;
  _TLD8: ;
}
int Cyc_Lex_token_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  short _T2;
  int _T3;
  short _T4;
  int _T5;
  int _T6;
  struct _fat_ptr * _T7;
  int _T8;
  struct _fat_ptr * _T9;
  int _TA;
  struct _fat_ptr _TB;
  int _TC;
  int _TD;
  int _TE;
  int _TF;
  int _T10;
  int _T11;
  int _T12;
  union Cyc_Absyn_Cnst _T13;
  struct Cyc_Lexing_lexbuf * _T14;
  union Cyc_Absyn_Cnst _T15;
  struct Cyc_Lexing_lexbuf * _T16;
  int _T17;
  char _T18;
  int _T19;
  struct Cyc_Lexing_lexbuf * _T1A;
  void (* _T1B)(struct Cyc_Lexing_lexbuf *);
  int _T1C;
  struct Cyc_Lexing_Error_exn_struct * _T1D;
  void * _T1E;
  lexstate = Cyc_Lex_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    return 350;
  case 1: 
    _T2 = Cyc_Lex_process_id(lexbuf);
    _T3 = (int)_T2;
    return _T3;
  case 2: 
    _T4 = Cyc_Lex_process_qual_id(lexbuf);
    _T5 = (int)_T4;
    return _T5;
  case 3: 
    _T6 = Cyc_Lex_str_index_lbuf(lexbuf);
    _T7 = Cyc_Lex_get_symbol(_T6);
    Cyc_Lex_token_string = *_T7;
    return 398;
  case 4: 
    _T8 = Cyc_Lex_str_index_lbuf(lexbuf);
    _T9 = Cyc_Lex_get_symbol(_T8);
    Cyc_Lex_token_string = *_T9;
    return 402;
  case 5: 
    _TA = Cyc_Lex_do_possible_qualifier(lexbuf);
    return _TA;
  case 6: 
    Cyc_Lex_token_int = Cyc_Lex_intconst(lexbuf,2,0,16);
    return 392;
  case 7: 
    Cyc_Lex_token_int = Cyc_Lex_intconst(lexbuf,0,0,8);
    return 392;
  case 8: 
    Cyc_Lex_token_int = Cyc_Lex_intconst(lexbuf,0,0,10);
    return 392;
  case 9: 
    Cyc_Lex_token_int = Cyc_Lex_intconst(lexbuf,0,0,10);
    return 392;
  case 10: 
    Cyc_Lex_token_string = Cyc_Lexing_lexeme(lexbuf);
    return 397;
  case 11: 
    return 374;
  case 12: 
    return 375;
  case 13: 
    return 372;
  case 14: 
    return 373;
  case 15: 
    return 368;
  case 16: 
    return 369;
  case 17: 
    return 381;
  case 18: 
    return 382;
  case 19: 
    return 378;
  case 20: 
    return 379;
  case 21: 
    return 380;
  case 22: 
    return 387;
  case 23: 
    return 386;
  case 24: 
    return 385;
  case 25: 
    return 383;
  case 26: 
    return 384;
  case 27: 
    return 376;
  case 28: 
    return 377;
  case 29: 
    return 370;
  case 30: 
    return 371;
  case 31: 
    return 389;
  case 32: 
    return 367;
  case 33: 
    return 388;
  case 34: 
    return 390;
  case 35: 
    return 324;
  case 36: 
    _TB = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Lex_process_directive(_TB);
    _TC = Cyc_Lex_token(lexbuf);
    return _TC;
  case 37: 
    _TD = Cyc_Lex_token(lexbuf);
    return _TD;
  case 38: 
    Cyc_Lex_inc_linenumber();
    _TE = Cyc_Lex_token(lexbuf);
    return _TE;
  case 39: 
    Cyc_Lex_comment_depth = 1;
    Cyc_Lex_runaway_start = Cyc_Lexing_lexeme_start(lexbuf);
    Cyc_Lex_comment(lexbuf);
    _TF = Cyc_Lex_token(lexbuf);
    return _TF;
  case 40: 
    Cyc_Lex_string_pos = 0;
    Cyc_Lex_runaway_start = Cyc_Lexing_lexeme_start(lexbuf);
    _TLEF: _T10 = Cyc_Lex_strng(lexbuf);
    if (_T10) { goto _TLF0;
    }else { goto _TLF1;
    }
    _TLF0: goto _TLEF;
    _TLF1: Cyc_Lex_token_string = Cyc_Lex_get_stored_string();
    return 393;
  case 41: 
    Cyc_Lex_string_pos = 0;
    Cyc_Lex_runaway_start = Cyc_Lexing_lexeme_start(lexbuf);
    _TLF2: _T11 = Cyc_Lex_wstrng(lexbuf);
    if (_T11) { goto _TLF3;
    }else { goto _TLF4;
    }
    _TLF3: goto _TLF2;
    _TLF4: Cyc_Lex_token_string = Cyc_Lex_get_stored_string();
    return 394;
  case 42: 
    Cyc_Lex_string_pos = 0;
    Cyc_Lex_runaway_start = Cyc_Lexing_lexeme_start(lexbuf);
    _TLF5: _T12 = Cyc_Lex_scan_charconst(lexbuf);
    if (_T12) { goto _TLF6;
    }else { goto _TLF7;
    }
    _TLF6: goto _TLF5;
    _TLF7: Cyc_Lex_token_string = Cyc_Lex_get_stored_string();
    return 396;
  case 43: 
    Cyc_Lex_token_char = '\a';
    return 395;
  case 44: 
    Cyc_Lex_token_char = '\b';
    return 395;
  case 45: 
    Cyc_Lex_token_char = '\f';
    return 395;
  case 46: 
    Cyc_Lex_token_char = '\n';
    return 395;
  case 47: 
    Cyc_Lex_token_char = '\r';
    return 395;
  case 48: 
    Cyc_Lex_token_char = '\t';
    return 395;
  case 49: 
    Cyc_Lex_token_char = '\v';
    return 395;
  case 50: 
    Cyc_Lex_token_char = '\\';
    return 395;
  case 51: 
    Cyc_Lex_token_char = '\'';
    return 395;
  case 52: 
    Cyc_Lex_token_char = '"';
    return 395;
  case 53: 
    Cyc_Lex_token_char = '?';
    return 395;
  case 54: 
    _T13 = Cyc_Lex_intconst(lexbuf,2,1,8);
    _T14 = lexbuf;
    Cyc_Lex_token_char = Cyc_Lex_cnst2char(_T13,_T14);
    return 395;
  case 55: 
    _T15 = Cyc_Lex_intconst(lexbuf,3,1,16);
    _T16 = lexbuf;
    Cyc_Lex_token_char = Cyc_Lex_cnst2char(_T15,_T16);
    return 395;
  case 56: 
    Cyc_Lex_token_char = Cyc_Lexing_lexeme_char(lexbuf,1);
    return 395;
  case 57: 
    _T17 = - 1;
    return _T17;
  case 58: 
    _T18 = Cyc_Lexing_lexeme_char(lexbuf,0);
    _T19 = (int)_T18;
    return _T19;
  default: 
    _T1A = lexbuf;
    _T1B = _T1A->refill_buff;
    _T1B(lexbuf);
    _T1C = Cyc_Lex_token_rec(lexbuf,lexstate);
    return _T1C;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T1F = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T1F->tag = Cyc_Lexing_Error;
    _T1F->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T1D = (struct Cyc_Lexing_Error_exn_struct *)_T1F;
  }_T1E = (void *)_T1D;
  _throw(_T1E);
}
int Cyc_Lex_token(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lex_token_rec(lexbuf,0);
  return _T0;
}
int Cyc_Lex_scan_charconst_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  char _T4;
  struct _fat_ptr _T5;
  struct Cyc_Lexing_lexbuf * _T6;
  struct _fat_ptr _T7;
  struct Cyc_Lexing_lexbuf * _T8;
  struct _fat_ptr _T9;
  struct Cyc_Lexing_lexbuf * _TA;
  struct Cyc_Lexing_lexbuf * _TB;
  void (* _TC)(struct Cyc_Lexing_lexbuf *);
  int _TD;
  struct Cyc_Lexing_Error_exn_struct * _TE;
  void * _TF;
  lexstate = Cyc_Lex_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    return 0;
  case 1: 
    Cyc_Lex_store_string_char('\a');
    return 1;
  case 2: 
    Cyc_Lex_store_string_char('\b');
    return 1;
  case 3: 
    Cyc_Lex_store_string_char('\f');
    return 1;
  case 4: 
    Cyc_Lex_store_string_char('\n');
    return 1;
  case 5: 
    Cyc_Lex_store_string_char('\r');
    return 1;
  case 6: 
    Cyc_Lex_store_string_char('\t');
    return 1;
  case 7: 
    Cyc_Lex_store_string_char('\v');
    return 1;
  case 8: 
    Cyc_Lex_store_string_char('\\');
    return 1;
  case 9: 
    Cyc_Lex_store_string_char('\'');
    return 1;
  case 10: 
    Cyc_Lex_store_string_char('"');
    return 1;
  case 11: 
    Cyc_Lex_store_string_char('?');
    return 1;
  case 12: 
    _T2 = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Lex_store_string(_T2);
    return 1;
  case 13: 
    _T3 = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Lex_store_string(_T3);
    return 1;
  case 14: 
    _T4 = Cyc_Lexing_lexeme_char(lexbuf,0);
    Cyc_Lex_store_string_char(_T4);
    return 1;
  case 15: 
    Cyc_Lex_inc_linenumber();
    _T5 = _tag_fat("wide character ends in newline",sizeof(char),31U);
    _T6 = lexbuf;
    Cyc_Lex_runaway_err(_T5,_T6);
    return 0;
  case 16: 
    _T7 = _tag_fat("unterminated wide character",sizeof(char),28U);
    _T8 = lexbuf;
    Cyc_Lex_runaway_err(_T7,_T8);
    return 0;
  case 17: 
    _T9 = _tag_fat("bad character following backslash in wide character",
		   sizeof(char),52U);
    _TA = lexbuf;
    Cyc_Lex_err(_T9,_TA);
    return 1;
  default: 
    _TB = lexbuf;
    _TC = _TB->refill_buff;
    _TC(lexbuf);
    _TD = Cyc_Lex_scan_charconst_rec(lexbuf,lexstate);
    return _TD;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T10 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T10->tag = Cyc_Lexing_Error;
    _T10->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _TE = (struct Cyc_Lexing_Error_exn_struct *)_T10;
  }_TF = (void *)_TE;
  _throw(_TF);
}
int Cyc_Lex_scan_charconst(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lex_scan_charconst_rec(lexbuf,1);
  return _T0;
}
int Cyc_Lex_strng_next_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  int _T3;
  struct Cyc_Lexing_lexbuf * _T4;
  struct Cyc_Lexing_lexbuf * _T5;
  void (* _T6)(struct Cyc_Lexing_lexbuf *);
  int _T7;
  struct Cyc_Lexing_Error_exn_struct * _T8;
  void * _T9;
  lexstate = Cyc_Lex_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    return 1;
  case 1: 
    Cyc_Lex_inc_linenumber();
    _T2 = Cyc_Lex_strng_next(lexbuf);
    return _T2;
  case 2: 
    _T3 = Cyc_Lex_strng_next(lexbuf);
    return _T3;
  case 3: 
    _T4 = lexbuf;
    _T4->lex_curr_pos = _T4->lex_curr_pos + -1;
    return 0;
  default: 
    _T5 = lexbuf;
    _T6 = _T5->refill_buff;
    _T6(lexbuf);
    _T7 = Cyc_Lex_strng_next_rec(lexbuf,lexstate);
    return _T7;
  }
  { struct Cyc_Lexing_Error_exn_struct * _TA = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _TA->tag = Cyc_Lexing_Error;
    _TA->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T8 = (struct Cyc_Lexing_Error_exn_struct *)_TA;
  }_T9 = (void *)_T8;
  _throw(_T9);
}
int Cyc_Lex_strng_next(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lex_strng_next_rec(lexbuf,2);
  return _T0;
}
int Cyc_Lex_strng_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  long _T3;
  long _T4;
  union Cyc_Absyn_Cnst _T5;
  struct Cyc_Lexing_lexbuf * _T6;
  char _T7;
  union Cyc_Absyn_Cnst _T8;
  struct Cyc_Lexing_lexbuf * _T9;
  char _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct Cyc_Lexing_lexbuf * _TD;
  struct _fat_ptr _TE;
  struct Cyc_Lexing_lexbuf * _TF;
  struct _fat_ptr _T10;
  struct Cyc_Lexing_lexbuf * _T11;
  struct Cyc_Lexing_lexbuf * _T12;
  void (* _T13)(struct Cyc_Lexing_lexbuf *);
  int _T14;
  struct Cyc_Lexing_Error_exn_struct * _T15;
  void * _T16;
  lexstate = Cyc_Lex_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = Cyc_Lex_strng_next(lexbuf);
    return _T2;
  case 1: 
    Cyc_Lex_inc_linenumber();
    return 1;
  case 2: 
    Cyc_Lex_store_string_char('\a');
    return 1;
  case 3: 
    Cyc_Lex_store_string_char('\b');
    return 1;
  case 4: 
    Cyc_Lex_store_string_char('\f');
    return 1;
  case 5: 
    _T3 = Cyc_Lex_expand_specials;
    if (! _T3) { goto _TLFB;
    }
    Cyc_Lex_store_string_char('\\');
    Cyc_Lex_store_string_char('n');
    goto _TLFC;
    _TLFB: Cyc_Lex_store_string_char('\n');
    _TLFC: return 1;
  case 6: 
    Cyc_Lex_store_string_char('\r');
    return 1;
  case 7: 
    _T4 = Cyc_Lex_expand_specials;
    if (! _T4) { goto _TLFD;
    }
    Cyc_Lex_store_string_char('\\');
    Cyc_Lex_store_string_char('t');
    goto _TLFE;
    _TLFD: Cyc_Lex_store_string_char('\t');
    _TLFE: return 1;
  case 8: 
    Cyc_Lex_store_string_char('\v');
    return 1;
  case 9: 
    Cyc_Lex_store_string_char('\\');
    return 1;
  case 10: 
    Cyc_Lex_store_string_char('\'');
    return 1;
  case 11: 
    Cyc_Lex_store_string_char('"');
    return 1;
  case 12: 
    Cyc_Lex_store_string_char('?');
    return 1;
  case 13: 
    _T5 = Cyc_Lex_intconst(lexbuf,1,0,8);
    _T6 = lexbuf;
    _T7 = Cyc_Lex_cnst2char(_T5,_T6);
    Cyc_Lex_store_string_char(_T7);
    return 1;
  case 14: 
    _T8 = Cyc_Lex_intconst(lexbuf,2,0,16);
    _T9 = lexbuf;
    _TA = Cyc_Lex_cnst2char(_T8,_T9);
    Cyc_Lex_store_string_char(_TA);
    return 1;
  case 15: 
    _TB = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Lex_store_string(_TB);
    return 1;
  case 16: 
    Cyc_Lex_inc_linenumber();
    _TC = _tag_fat("string ends in newline",sizeof(char),23U);
    _TD = lexbuf;
    Cyc_Lex_runaway_err(_TC,_TD);
    return 0;
  case 17: 
    _TE = _tag_fat("unterminated string",sizeof(char),20U);
    _TF = lexbuf;
    Cyc_Lex_runaway_err(_TE,_TF);
    return 0;
  case 18: 
    _T10 = _tag_fat("bad character following backslash in string",sizeof(char),
		    44U);
    _T11 = lexbuf;
    Cyc_Lex_err(_T10,_T11);
    return 1;
  default: 
    _T12 = lexbuf;
    _T13 = _T12->refill_buff;
    _T13(lexbuf);
    _T14 = Cyc_Lex_strng_rec(lexbuf,lexstate);
    return _T14;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T17 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T17->tag = Cyc_Lexing_Error;
    _T17->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T15 = (struct Cyc_Lexing_Error_exn_struct *)_T17;
  }_T16 = (void *)_T15;
  _throw(_T16);
}
int Cyc_Lex_strng(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lex_strng_rec(lexbuf,3);
  return _T0;
}
int Cyc_Lex_wstrng_next_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr _T2;
  int _T3;
  int _T4;
  struct Cyc_Lexing_lexbuf * _T5;
  struct Cyc_Lexing_lexbuf * _T6;
  void (* _T7)(struct Cyc_Lexing_lexbuf *);
  int _T8;
  struct Cyc_Lexing_Error_exn_struct * _T9;
  void * _TA;
  lexstate = Cyc_Lex_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = _tag_fat("\" L\"",sizeof(char),5U);
    Cyc_Lex_store_string(_T2);
    return 1;
  case 1: 
    Cyc_Lex_inc_linenumber();
    _T3 = Cyc_Lex_wstrng_next(lexbuf);
    return _T3;
  case 2: 
    _T4 = Cyc_Lex_wstrng_next(lexbuf);
    return _T4;
  case 3: 
    _T5 = lexbuf;
    _T5->lex_curr_pos = _T5->lex_curr_pos + -1;
    return 0;
  default: 
    _T6 = lexbuf;
    _T7 = _T6->refill_buff;
    _T7(lexbuf);
    _T8 = Cyc_Lex_wstrng_next_rec(lexbuf,lexstate);
    return _T8;
  }
  { struct Cyc_Lexing_Error_exn_struct * _TB = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _TB->tag = Cyc_Lexing_Error;
    _TB->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T9 = (struct Cyc_Lexing_Error_exn_struct *)_TB;
  }_TA = (void *)_T9;
  _throw(_TA);
}
int Cyc_Lex_wstrng_next(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lex_wstrng_next_rec(lexbuf,4);
  return _T0;
}
int Cyc_Lex_wstrng_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  char _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_Lexing_lexbuf * _T6;
  struct _fat_ptr _T7;
  struct Cyc_Lexing_lexbuf * _T8;
  struct _fat_ptr _T9;
  struct Cyc_Lexing_lexbuf * _TA;
  struct Cyc_Lexing_lexbuf * _TB;
  void (* _TC)(struct Cyc_Lexing_lexbuf *);
  int _TD;
  struct Cyc_Lexing_Error_exn_struct * _TE;
  void * _TF;
  lexstate = Cyc_Lex_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = Cyc_Lex_wstrng_next(lexbuf);
    return _T2;
  case 1: 
    Cyc_Lex_store_string_char('\\');
    _T3 = Cyc_Lexing_lexeme_char(lexbuf,1);
    Cyc_Lex_store_string_char(_T3);
    return 1;
  case 2: 
    _T4 = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Lex_store_string(_T4);
    return 1;
  case 3: 
    Cyc_Lex_inc_linenumber();
    _T5 = _tag_fat("string ends in newline",sizeof(char),23U);
    _T6 = lexbuf;
    Cyc_Lex_runaway_err(_T5,_T6);
    return 0;
  case 4: 
    _T7 = _tag_fat("unterminated string",sizeof(char),20U);
    _T8 = lexbuf;
    Cyc_Lex_runaway_err(_T7,_T8);
    return 0;
  case 5: 
    _T9 = _tag_fat("bad character following backslash in string",sizeof(char),
		   44U);
    _TA = lexbuf;
    Cyc_Lex_err(_T9,_TA);
    return 1;
  default: 
    _TB = lexbuf;
    _TC = _TB->refill_buff;
    _TC(lexbuf);
    _TD = Cyc_Lex_wstrng_rec(lexbuf,lexstate);
    return _TD;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T10 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T10->tag = Cyc_Lexing_Error;
    _T10->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _TE = (struct Cyc_Lexing_Error_exn_struct *)_T10;
  }_TF = (void *)_TE;
  _throw(_TF);
}
int Cyc_Lex_wstrng(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lex_wstrng_rec(lexbuf,5);
  return _T0;
}
int Cyc_Lex_comment_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  int _T3;
  int _T4;
  struct _fat_ptr _T5;
  struct Cyc_Lexing_lexbuf * _T6;
  int _T7;
  int _T8;
  int _T9;
  int _TA;
  struct Cyc_Lexing_lexbuf * _TB;
  void (* _TC)(struct Cyc_Lexing_lexbuf *);
  int _TD;
  struct Cyc_Lexing_Error_exn_struct * _TE;
  void * _TF;
  lexstate = Cyc_Lex_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    Cyc_Lex_comment_depth = Cyc_Lex_comment_depth + 1;
    _T2 = Cyc_Lex_comment(lexbuf);
    return _T2;
  case 1: 
    Cyc_Lex_comment_depth = Cyc_Lex_comment_depth + -1;
    _T3 = Cyc_Lex_comment_depth;
    if (_T3 <= 0) { goto _TL102;
    }
    _T4 = Cyc_Lex_comment(lexbuf);
    return _T4;
    _TL102: return 0;
  case 2: 
    _T5 = _tag_fat("unterminated comment",sizeof(char),21U);
    _T6 = lexbuf;
    Cyc_Lex_runaway_err(_T5,_T6);
    return 0;
  case 3: 
    _T7 = Cyc_Lex_comment(lexbuf);
    return _T7;
  case 4: 
    _T8 = Cyc_Lex_comment(lexbuf);
    return _T8;
  case 5: 
    Cyc_Lex_inc_linenumber();
    _T9 = Cyc_Lex_comment(lexbuf);
    return _T9;
  case 6: 
    _TA = Cyc_Lex_comment(lexbuf);
    return _TA;
  default: 
    _TB = lexbuf;
    _TC = _TB->refill_buff;
    _TC(lexbuf);
    _TD = Cyc_Lex_comment_rec(lexbuf,lexstate);
    return _TD;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T10 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T10->tag = Cyc_Lexing_Error;
    _T10->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _TE = (struct Cyc_Lexing_Error_exn_struct *)_T10;
  }_TF = (void *)_TE;
  _throw(_TF);
}
int Cyc_Lex_comment(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lex_comment_rec(lexbuf,6);
  return _T0;
}
void Cyc_Lex_pos_init() {
  Cyc_Lex_linenumber = 1;
  Cyc_Lex_pos_info = 0;
}
static struct Cyc_Xarray_Xarray * Cyc_Lex_empty_xarray(struct _RegionHandle * id_rgn,
						       int dummy) {
  struct Cyc_Xarray_Xarray * (* _T0)(struct _RegionHandle *,int,struct _fat_ptr *);
  struct Cyc_Xarray_Xarray * (* _T1)(struct _RegionHandle *,int,void *);
  struct _RegionHandle * _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr _T4;
  void (* _T5)(struct Cyc_Xarray_Xarray *,struct _fat_ptr *);
  void (* _T6)(struct Cyc_Xarray_Xarray *,void *);
  struct Cyc_Xarray_Xarray * _T7;
  struct _fat_ptr * _T8;
  struct _fat_ptr * _T9;
  struct Cyc_Xarray_Xarray * _TA;
  _T1 = Cyc_Xarray_rcreate;
  { struct Cyc_Xarray_Xarray * (* _TB)(struct _RegionHandle *,int,struct _fat_ptr *) = (struct Cyc_Xarray_Xarray * (*)(struct _RegionHandle *,
														       int,
														       struct _fat_ptr *))_T1;
    _T0 = _TB;
  }_T2 = id_rgn;
  { struct _fat_ptr * _TB = _cycalloc(sizeof(struct _fat_ptr));
    _T4 = _tag_fat("",sizeof(char),1U);
    *_TB = _T4;
    _T3 = (struct _fat_ptr *)_TB;
  }{ struct Cyc_Xarray_Xarray * symbols = _T0(_T2,101,_T3);
    _T6 = Cyc_Xarray_add;
    { void (* _TB)(struct Cyc_Xarray_Xarray *,struct _fat_ptr *) = (void (*)(struct Cyc_Xarray_Xarray *,
									     struct _fat_ptr *))_T6;
      _T5 = _TB;
    }_T7 = symbols;
    _T8 = &Cyc_Lex_bogus_string;
    _T9 = (struct _fat_ptr *)_T8;
    _T5(_T7,_T9);
    _TA = symbols;
    return _TA;
  }
}
void Cyc_Lex_lex_init(long include_cyclone_keywords) {
  struct Cyc_List_List * _T0;
  void (* _T1)(struct Cyc_List_List *);
  void (* _T2)(void *);
  struct Cyc_Lex_DynTrieSymbols * _T3;
  void (* _T4)(struct Cyc_Lex_DynTrieSymbols *);
  void (* _T5)(void *);
  struct Cyc_Lex_DynTrie * _T6;
  void (* _T7)(struct Cyc_Lex_DynTrie *);
  void (* _T8)(void *);
  struct Cyc_Lex_Trie * (* _T9)(struct Cyc_Core_DynamicRegion *,int,struct Cyc_Lex_Trie * (*)(struct _RegionHandle *,
											      int));
  void * (* _TA)(struct Cyc_Core_DynamicRegion *,void *,void * (*)(struct _RegionHandle *,
								   void *));
  struct Cyc_Core_DynamicRegion * _TB;
  struct Cyc_Xarray_Xarray * (* _TC)(struct Cyc_Core_DynamicRegion *,int,
				     struct Cyc_Xarray_Xarray * (*)(struct _RegionHandle *,
								    int));
  void * (* _TD)(struct Cyc_Core_DynamicRegion *,void *,void * (*)(struct _RegionHandle *,
								   void *));
  struct Cyc_Core_DynamicRegion * _TE;
  struct Cyc_Lex_DynTrieSymbols * _TF;
  unsigned int _T10;
  struct Cyc_Lex_Trie * (* _T11)(struct Cyc_Core_DynamicRegion *,int,struct Cyc_Lex_Trie * (*)(struct _RegionHandle *,
											       int));
  void * (* _T12)(struct Cyc_Core_DynamicRegion *,void *,void * (*)(struct _RegionHandle *,
								    void *));
  struct Cyc_Core_DynamicRegion * _T13;
  struct Cyc_Lex_DynTrie * _T14;
  unsigned int _T15;
  struct _fat_ptr _T16;
  int _T17;
  struct Cyc_Lex_KeyWordInfo * _T18;
  unsigned int _T19;
  unsigned int _T1A;
  unsigned int _T1B;
  long _T1C;
  struct _tuple30 * _T1D;
  unsigned int _T1E;
  int _T1F;
  struct _tuple30 _T20;
  long _T21;
  struct _tuple30 * _T22;
  unsigned int _T23;
  int _T24;
  struct _tuple30 _T25;
  struct _fat_ptr _T26;
  unsigned long _T27;
  int _T28;
  struct _fat_ptr _T29;
  unsigned int _T2A;
  int _T2B;
  unsigned char * _T2C;
  struct Cyc_Lex_KeyWordInfo * _T2D;
  struct Cyc_Lex_KeyWordInfo _T2E;
  struct _tuple30 * _T2F;
  unsigned int _T30;
  int _T31;
  struct _tuple30 _T32;
  short _T33;
  struct _tuple30 * _T34;
  unsigned int _T35;
  int _T36;
  struct _tuple30 _T37;
  Cyc_Lex_in_extern_c = 0;
  { struct Cyc_List_List * x = 0;
    { struct Cyc_List_List * _T38 = Cyc_Lex_prev_extern_c;
      struct Cyc_List_List * _T39 = x;
      Cyc_Lex_prev_extern_c = _T39;
      x = _T38;
    }_TL104: if (x != 0) { goto _TL105;
    }else { goto _TL106;
    }
    _TL105: _T0 = x;
    { struct Cyc_List_List * t = _T0->tl;
      _T2 = Cyc_Core_ufree;
      { void (* _T38)(struct Cyc_List_List *) = (void (*)(struct Cyc_List_List *))_T2;
	_T1 = _T38;
      }_T1(x);
      x = t;
    }goto _TL104;
    _TL106: if (Cyc_Lex_ids_trie == 0) { goto _TL107;
    }
    { struct Cyc_Lex_DynTrieSymbols * idt = 0;
      { struct Cyc_Lex_DynTrieSymbols * _T38 = idt;
	struct Cyc_Lex_DynTrieSymbols * _T39 = Cyc_Lex_ids_trie;
	idt = _T39;
	Cyc_Lex_ids_trie = _T38;
      }_T3 = idt;
      { struct Cyc_Lex_DynTrieSymbols _T38 = *_T3;
	struct Cyc_Core_DynamicRegion * _T39;
	_T39 = _T38.dyn;
	{ struct Cyc_Core_DynamicRegion * dyn = _T39;
	  Cyc_Core_free_ukey(dyn);
	  _T5 = Cyc_Core_ufree;
	  { void (* _T3A)(struct Cyc_Lex_DynTrieSymbols *) = (void (*)(struct Cyc_Lex_DynTrieSymbols *))_T5;
	    _T4 = _T3A;
	  }_T4(idt);
	}
      }
    }goto _TL108;
    _TL107: _TL108: if (Cyc_Lex_typedefs_trie == 0) { goto _TL109;
    }
    { struct Cyc_Lex_DynTrie * tdefs = 0;
      { struct Cyc_Lex_DynTrie * _T38 = tdefs;
	struct Cyc_Lex_DynTrie * _T39 = Cyc_Lex_typedefs_trie;
	tdefs = _T39;
	Cyc_Lex_typedefs_trie = _T38;
      }_T6 = tdefs;
      { struct Cyc_Lex_DynTrie _T38 = *_T6;
	struct Cyc_Core_DynamicRegion * _T39;
	_T39 = _T38.dyn;
	{ struct Cyc_Core_DynamicRegion * dyn = _T39;
	  Cyc_Core_free_ukey(dyn);
	  _T8 = Cyc_Core_ufree;
	  { void (* _T3A)(struct Cyc_Lex_DynTrie *) = (void (*)(struct Cyc_Lex_DynTrie *))_T8;
	    _T7 = _T3A;
	  }_T7(tdefs);
	}
      }
    }goto _TL10A;
    _TL109: _TL10A: { struct Cyc_Core_NewDynamicRegion _T38 = Cyc_Core__new_ukey(0U,
										 "internal-error",
										 "internal-error",
										 0);
      struct Cyc_Core_DynamicRegion * _T39;
      _T39 = _T38.key;
      { struct Cyc_Core_DynamicRegion * id_dyn = _T39;
	_TA = Cyc_Core_open_region;
	{ struct Cyc_Lex_Trie * (* _T3A)(struct Cyc_Core_DynamicRegion *,
					 int,struct Cyc_Lex_Trie * (*)(struct _RegionHandle *,
								       int)) = (struct Cyc_Lex_Trie * (*)(struct Cyc_Core_DynamicRegion *,
													  int,
													  struct Cyc_Lex_Trie * (*)(struct _RegionHandle *,
																    int)))_TA;
	  _T9 = _T3A;
	}_TB = id_dyn;
	{ struct Cyc_Lex_Trie * ts = _T9(_TB,0,Cyc_Lex_empty_trie);
	  _TD = Cyc_Core_open_region;
	  { struct Cyc_Xarray_Xarray * (* _T3A)(struct Cyc_Core_DynamicRegion *,
						int,struct Cyc_Xarray_Xarray * (*)(struct _RegionHandle *,
										   int)) = (struct Cyc_Xarray_Xarray * (*)(struct Cyc_Core_DynamicRegion *,
															   int,
															   struct Cyc_Xarray_Xarray * (*)(struct _RegionHandle *,
																			  int)))_TD;
	    _TC = _T3A;
	  }_TE = id_dyn;
	  { struct Cyc_Xarray_Xarray * xa = _TC(_TE,0,Cyc_Lex_empty_xarray);
	    _T10 = Cyc_Core_unique_qual;
	    { struct Cyc_Lex_DynTrieSymbols * _T3A = _aqual_malloc(_T10,sizeof(struct Cyc_Lex_DynTrieSymbols));
	      _T3A->dyn = id_dyn;
	      _T3A->t = ts;
	      _T3A->symbols = xa;
	      _TF = (struct Cyc_Lex_DynTrieSymbols *)_T3A;
	    }Cyc_Lex_ids_trie = _TF;
	    { struct Cyc_Core_NewDynamicRegion _T3A = Cyc_Core__new_ukey(0U,
									 "internal-error",
									 "internal-error",
									 0);
	      struct Cyc_Core_DynamicRegion * _T3B;
	      _T3B = _T3A.key;
	      { struct Cyc_Core_DynamicRegion * typedefs_dyn = _T3B;
		_T12 = Cyc_Core_open_region;
		{ struct Cyc_Lex_Trie * (* _T3C)(struct Cyc_Core_DynamicRegion *,
						 int,struct Cyc_Lex_Trie * (*)(struct _RegionHandle *,
									       int)) = (struct Cyc_Lex_Trie * (*)(struct Cyc_Core_DynamicRegion *,
														  int,
														  struct Cyc_Lex_Trie * (*)(struct _RegionHandle *,
																	    int)))_T12;
		  _T11 = _T3C;
		}_T13 = typedefs_dyn;
		{ struct Cyc_Lex_Trie * t = _T11(_T13,0,Cyc_Lex_empty_trie);
		  _T15 = Cyc_Core_unique_qual;
		  { struct Cyc_Lex_DynTrie * _T3C = _aqual_malloc(_T15,sizeof(struct Cyc_Lex_DynTrie));
		    _T3C->dyn = typedefs_dyn;
		    _T3C->t = t;
		    _T14 = (struct Cyc_Lex_DynTrie *)_T3C;
		  }Cyc_Lex_typedefs_trie = _T14;
		  Cyc_Lex_num_kws = Cyc_Lex_num_keywords(include_cyclone_keywords);
		  _T17 = Cyc_Lex_num_kws;
		  { unsigned int _T3C = (unsigned int)_T17;
		    _T19 = _check_times(_T3C,sizeof(struct Cyc_Lex_KeyWordInfo));
		    { struct Cyc_Lex_KeyWordInfo * _T3D = _cycalloc(_T19);
		      { unsigned int _T3E = _T3C;
			unsigned int i;
			i = 0;
			_TL10E: if (i < _T3E) { goto _TL10C;
			}else { goto _TL10D;
			}
			_TL10C: _T1A = i;
			(_T3D[_T1A]).token_index = 0;
			_T1B = i;
			(_T3D[_T1B]).is_c_keyword = 0;
			i = i + 1;
			goto _TL10E;
			_TL10D: ;
		      }_T18 = (struct Cyc_Lex_KeyWordInfo *)_T3D;
		    }_T16 = _tag_fat(_T18,sizeof(struct Cyc_Lex_KeyWordInfo),
				     _T3C);
		  }Cyc_Lex_kw_nums = _T16;
		  { unsigned int i = 0U;
		    unsigned int rwsze = 103U;
		    { unsigned int j = 0U;
		      _TL112: if (j < rwsze) { goto _TL110;
		      }else { goto _TL111;
		      }
		      _TL110: _T1C = include_cyclone_keywords;
		      if (_T1C) { goto _TL115;
		      }else { goto _TL116;
		      }
		      _TL116: _T1D = Cyc_Lex_rw_array;
		      _T1E = j;
		      _T1F = (int)_T1E;
		      _T20 = _T1D[_T1F];
		      _T21 = _T20.f2;
		      if (_T21) { goto _TL115;
		      }else { goto _TL113;
		      }
		      _TL115: _T22 = Cyc_Lex_rw_array;
		      _T23 = j;
		      _T24 = (int)_T23;
		      _T25 = _T22[_T24];
		      { struct _fat_ptr str = _T25.f0;
			_T26 = str;
			_T27 = Cyc_strlen(str);
			_T28 = (int)_T27;
			Cyc_Lex_str_index(_T26,0,_T28);
			_T29 = Cyc_Lex_kw_nums;
			_T2A = i;
			_T2B = (int)_T2A;
			_T2C = _check_fat_subscript(_T29,sizeof(struct Cyc_Lex_KeyWordInfo),
						    _T2B);
			_T2D = (struct Cyc_Lex_KeyWordInfo *)_T2C;
			{ struct Cyc_Lex_KeyWordInfo _T3C;
			  _T2F = Cyc_Lex_rw_array;
			  _T30 = j;
			  _T31 = (int)_T30;
			  _T32 = _T2F[_T31];
			  _T33 = _T32.f1;
			  _T3C.token_index = (int)_T33;
			  _T34 = Cyc_Lex_rw_array;
			  _T35 = j;
			  _T36 = (int)_T35;
			  _T37 = _T34[_T36];
			  _T3C.is_c_keyword = _T37.f2;
			  _T2E = _T3C;
			}*_T2D = _T2E;
			i = i + 1;
		      }goto _TL114;
		      _TL113: _TL114: j = j + 1;
		      goto _TL112;
		      _TL111: ;
		    }Cyc_Lex_typedef_init();
		    Cyc_Lex_comment_depth = 0;
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
