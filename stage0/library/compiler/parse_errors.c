#include <cyc_include.h>
extern long Cyc_Flags_print_parser_state_and_token;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
struct _fat_ptr Cyc_token2string(int);
 struct Cyc_Yyltype {
  int timestamp;
  unsigned int first_line;
  unsigned int first_column;
  unsigned int last_line;
  unsigned int last_column;
};
extern struct Cyc_Yyltype Cyc_yylloc;
void Cyc_Warn_err(unsigned int,struct _fat_ptr,struct _fat_ptr);
extern void exit(int);
 struct Cyc_ParseErrors_ParseState {
  int state;
  int token;
  struct _fat_ptr msg;
};
static char _TmpG0[34U] = "undeclared type or missing comma ";
static char _TmpG1[28U] = "type has not been declared ";
static char _TmpG2[13U] = "missing ';' ";
static char _TmpG3[31U] = "missing ')' on parameter list ";
static char _TmpG4[29U] = "expecting IDENTIFIER or '{' ";
static char _TmpG5[29U] = "expecting IDENTIFIER or '{' ";
static char _TmpG6[19U] = "expecting PATTERN ";
static char _TmpG7[22U] = "expecting IDENTIFIER ";
static char _TmpG8[22U] = "expecting IDENTIFIER ";
static char _TmpG9[30U] = "expecting '(' EXPRESSION ')' ";
static char _TmpGA[19U] = "expecting 'union' ";
static char _TmpGB[22U] = "expecting 'datatype' ";
static char _TmpGC[36U] = "expecting '((' ATTRIBUTE_LIST '))' ";
static char _TmpGD[34U] = "expecting '(' PARAMETER_LIST ')' ";
static char _TmpGE[16U] = "expecting KIND ";
static char _TmpGF[16U] = "expecting KIND ";
static char _TmpG10[22U] = "expecting ';' or '{' ";
static char _TmpG11[22U] = "expecting ';' or '{' ";
static char _TmpG12[29U] = "expecting '<' or IDENTIFIER ";
static char _TmpG13[14U] = "missing '};' ";
static char _TmpG14[22U] = "expecting IDENTIFIER ";
static char _TmpG15[15U] = "expecting '(' ";
static char _TmpG16[22U] = "expecting IDENTIFIER ";
static char _TmpG17[19U] = "expecting PATTERN ";
static char _TmpG18[35U] = "expecting IDENTIFIER or extra ',' ";
static char _TmpG19[22U] = "expecting EXPRESSION ";
static char _TmpG1A[13U] = "missing '}' ";
static char _TmpG1B[13U] = "missing '}' ";
static char _TmpG1C[13U] = "missing ';' ";
static char _TmpG1D[22U] = "expecting EXPRESSION ";
static char _TmpG1E[23U] = "expecting DECLARATION ";
static char _TmpG1F[13U] = "missing '}' ";
static char _TmpG20[29U] = "expecting ']' or EXPRESSION ";
static char _TmpG21[22U] = "expecting EXPRESSION ";
static char _TmpG22[16U] = "expecting TYPE ";
static char _TmpG23[13U] = "missing ')' ";
static char _TmpG24[22U] = "expecting EXPRESSION ";
static char _TmpG25[13U] = "missing ')' ";
static char _TmpG26[16U] = "expecting TYPE ";
static char _TmpG27[22U] = "expecting EXPRESSION ";
static char _TmpG28[13U] = "missing '}' ";
static char _TmpG29[32U] = "expecting TYPE_VARIABLE or '_' ";
static char _TmpG2A[45U] = "expecting '(' EXPRESSION ')' or '( TYPE ')' ";
static char _TmpG2B[13U] = "missing ')' ";
static char _TmpG2C[22U] = "expecting EXPRESSION ";
static char _TmpG2D[37U] = "expecting INITIALIZER or EXPRESSION ";
static char _TmpG2E[29U] = "expecting '(' EXPRESSION ') ";
static char _TmpG2F[25U] = "expecting EXPRESSION ') ";
static char _TmpG30[12U] = "missing ') ";
static char _TmpG31[44U] = "expecting '(' EXPRESSION ',' EXPRESSION ') ";
static char _TmpG32[40U] = "expecting EXPRESSION ',' EXPRESSION ') ";
static char _TmpG33[29U] = "expecting ',' EXPRESSION ') ";
static char _TmpG34[13U] = "missing ')' ";
static char _TmpG35[15U] = "expecting '(' ";
static char _TmpG36[22U] = "expecting EXPRESSION ";
static char _TmpG37[15U] = "expecting ',' ";
static char _TmpG38[30U] = "expecting 'sizeof(' TYPE ')' ";
static char _TmpG39[16U] = "expecting TYPE ";
static char _TmpG3A[13U] = "missing ')' ";
static char _TmpG3B[15U] = "expecting '(' ";
static char _TmpG3C[22U] = "expecting EXPRESSION ";
static char _TmpG3D[15U] = "expecting ',' ";
static char _TmpG3E[22U] = "expecting EXPRESSION ";
static char _TmpG3F[15U] = "expecting ',' ";
static char _TmpG40[20U] = "expecting 'sizeof' ";
static char _TmpG41[15U] = "expecting '(' ";
static char _TmpG42[16U] = "expecting TYPE ";
static char _TmpG43[13U] = "missing ')' ";
static char _TmpG44[37U] = "expecting '(' REGION_EXPRESSION ')' ";
static char _TmpG45[13U] = "missing ')' ";
static char _TmpG46[37U] = "expecting INITIALIZER or EXPRESSION ";
static char _TmpG47[30U] = "expecting '(' EXPRESSION ')' ";
static char _TmpG48[26U] = "expecting EXPRESSION ')' ";
static char _TmpG49[13U] = "missing ')' ";
static char _TmpG4A[24U] = "expecting '(' TYPE ')' ";
static char _TmpG4B[20U] = "expecting TYPE ')' ";
static char _TmpG4C[13U] = "missing ')' ";
static char _TmpG4D[15U] = "expecting '(' ";
static char _TmpG4E[22U] = "expecting EXPRESSION ";
static char _TmpG4F[41U] = "expecting '.' IDENTIFIER or missing ')' ";
static char _TmpG50[22U] = "expecting IDENTIFIER ";
static char _TmpG51[46U] = "expecting TYPE_LIST, EXPRESSION_LIST, or ')' ";
static char _TmpG52[15U] = "expecting ')' ";
static char _TmpG53[24U] = "missing ':' EXPRESSION ";
static char _TmpG54[33U] = "missing EXPRESSION or extra '?' ";
static char _TmpG55[38U] = "missing EXPRESSION or extra operator ";
static char _TmpG56[38U] = "missing EXPRESSION or extra operator ";
static char _TmpG57[33U] = "missing EXPRESSION or extra '|' ";
static char _TmpG58[33U] = "missing EXPRESSION or extra '&' ";
static char _TmpG59[33U] = "missing EXPRESSION or extra '^' ";
static char _TmpG5A[33U] = "missing EXPRESSION or extra '&' ";
static char _TmpG5B[38U] = "missing EXPRESSION or extra operator ";
static char _TmpG5C[38U] = "missing EXPRESSION or extra operator ";
static char _TmpG5D[34U] = "missing EXPRESSION or extra '>>' ";
static char _TmpG5E[34U] = "missing EXPRESSION or extra '<<' ";
static char _TmpG5F[22U] = "expecting EXPRESSION ";
static char _TmpG60[22U] = "expecting EXPRESSION ";
static char _TmpG61[22U] = "expecting EXPRESSION ";
static char _TmpG62[31U] = "extra ',' or missing argument ";
static char _TmpG63[13U] = "missing ')' ";
static char _TmpG64[22U] = "expecting IDENTIFIER ";
static char _TmpG65[22U] = "expecting IDENTIFIER ";
static char _TmpG66[48U] = "extra space not allowed in empty instantiation ";
static char _TmpG67[37U] = "expecting '<>' or '<' TYPE_LIST '>' ";
static struct Cyc_ParseErrors_ParseState Cyc_ParseErrors_msg_table[104U] = {{153,
									     391,
									     {(unsigned char *)_TmpG0,
									      (unsigned char *)_TmpG0,
									      (unsigned char *)_TmpG0 + 34U}},
									    {81,
									     391,
									     {(unsigned char *)_TmpG1,
									      (unsigned char *)_TmpG1,
									      (unsigned char *)_TmpG1 + 28U}},
									    {581,
									     - 1,
									     {(unsigned char *)_TmpG2,
									      (unsigned char *)_TmpG2,
									      (unsigned char *)_TmpG2 + 13U}},
									    {378,
									     - 1,
									     {(unsigned char *)_TmpG3,
									      (unsigned char *)_TmpG3,
									      (unsigned char *)_TmpG3 + 31U}},
									    {77,
									     - 1,
									     {(unsigned char *)_TmpG4,
									      (unsigned char *)_TmpG4,
									      (unsigned char *)_TmpG4 + 29U}},
									    {24,
									     - 1,
									     {(unsigned char *)_TmpG5,
									      (unsigned char *)_TmpG5,
									      (unsigned char *)_TmpG5 + 29U}},
									    {29,
									     - 1,
									     {(unsigned char *)_TmpG6,
									      (unsigned char *)_TmpG6,
									      (unsigned char *)_TmpG6 + 19U}},
									    {31,
									     - 1,
									     {(unsigned char *)_TmpG7,
									      (unsigned char *)_TmpG7,
									      (unsigned char *)_TmpG7 + 22U}},
									    {32,
									     - 1,
									     {(unsigned char *)_TmpG8,
									      (unsigned char *)_TmpG8,
									      (unsigned char *)_TmpG8 + 22U}},
									    {43,
									     - 1,
									     {(unsigned char *)_TmpG9,
									      (unsigned char *)_TmpG9,
									      (unsigned char *)_TmpG9 + 30U}},
									    {45,
									     - 1,
									     {(unsigned char *)_TmpGA,
									      (unsigned char *)_TmpGA,
									      (unsigned char *)_TmpGA + 19U}},
									    {46,
									     - 1,
									     {(unsigned char *)_TmpGB,
									      (unsigned char *)_TmpGB,
									      (unsigned char *)_TmpGB + 22U}},
									    {52,
									     - 1,
									     {(unsigned char *)_TmpGC,
									      (unsigned char *)_TmpGC,
									      (unsigned char *)_TmpGC + 36U}},
									    {56,
									     - 1,
									     {(unsigned char *)_TmpGD,
									      (unsigned char *)_TmpGD,
									      (unsigned char *)_TmpGD + 34U}},
									    {131,
									     - 1,
									     {(unsigned char *)_TmpGE,
									      (unsigned char *)_TmpGE,
									      (unsigned char *)_TmpGE + 16U}},
									    {140,
									     - 1,
									     {(unsigned char *)_TmpGF,
									      (unsigned char *)_TmpGF,
									      (unsigned char *)_TmpGF + 16U}},
									    {65,
									     - 1,
									     {(unsigned char *)_TmpG10,
									      (unsigned char *)_TmpG10,
									      (unsigned char *)_TmpG10 + 22U}},
									    {66,
									     - 1,
									     {(unsigned char *)_TmpG11,
									      (unsigned char *)_TmpG11,
									      (unsigned char *)_TmpG11 + 22U}},
									    {37,
									     - 1,
									     {(unsigned char *)_TmpG12,
									      (unsigned char *)_TmpG12,
									      (unsigned char *)_TmpG12 + 29U}},
									    {1006,
									     - 1,
									     {(unsigned char *)_TmpG13,
									      (unsigned char *)_TmpG13,
									      (unsigned char *)_TmpG13 + 14U}},
									    {80,
									     - 1,
									     {(unsigned char *)_TmpG14,
									      (unsigned char *)_TmpG14,
									      (unsigned char *)_TmpG14 + 22U}},
									    {111,
									     - 1,
									     {(unsigned char *)_TmpG15,
									      (unsigned char *)_TmpG15,
									      (unsigned char *)_TmpG15 + 15U}},
									    {108,
									     - 1,
									     {(unsigned char *)_TmpG16,
									      (unsigned char *)_TmpG16,
									      (unsigned char *)_TmpG16 + 22U}},
									    {112,
									     - 1,
									     {(unsigned char *)_TmpG17,
									      (unsigned char *)_TmpG17,
									      (unsigned char *)_TmpG17 + 19U}},
									    {270,
									     - 1,
									     {(unsigned char *)_TmpG18,
									      (unsigned char *)_TmpG18,
									      (unsigned char *)_TmpG18 + 35U}},
									    {136,
									     - 1,
									     {(unsigned char *)_TmpG19,
									      (unsigned char *)_TmpG19,
									      (unsigned char *)_TmpG19 + 22U}},
									    {148,
									     - 1,
									     {(unsigned char *)_TmpG1A,
									      (unsigned char *)_TmpG1A,
									      (unsigned char *)_TmpG1A + 13U}},
									    {323,
									     - 1,
									     {(unsigned char *)_TmpG1B,
									      (unsigned char *)_TmpG1B,
									      (unsigned char *)_TmpG1B + 13U}},
									    {153,
									     - 1,
									     {(unsigned char *)_TmpG1C,
									      (unsigned char *)_TmpG1C,
									      (unsigned char *)_TmpG1C + 13U}},
									    {328,
									     - 1,
									     {(unsigned char *)_TmpG1D,
									      (unsigned char *)_TmpG1D,
									      (unsigned char *)_TmpG1D + 22U}},
									    {326,
									     - 1,
									     {(unsigned char *)_TmpG1E,
									      (unsigned char *)_TmpG1E,
									      (unsigned char *)_TmpG1E + 23U}},
									    {171,
									     0,
									     {(unsigned char *)_TmpG1F,
									      (unsigned char *)_TmpG1F,
									      (unsigned char *)_TmpG1F + 13U}},
									    {175,
									     - 1,
									     {(unsigned char *)_TmpG20,
									      (unsigned char *)_TmpG20,
									      (unsigned char *)_TmpG20 + 29U}},
									    {526,
									     - 1,
									     {(unsigned char *)_TmpG21,
									      (unsigned char *)_TmpG21,
									      (unsigned char *)_TmpG21 + 22U}},
									    {386,
									     - 1,
									     {(unsigned char *)_TmpG22,
									      (unsigned char *)_TmpG22,
									      (unsigned char *)_TmpG22 + 16U}},
									    {634,
									     - 1,
									     {(unsigned char *)_TmpG23,
									      (unsigned char *)_TmpG23,
									      (unsigned char *)_TmpG23 + 13U}},
									    {384,
									     - 1,
									     {(unsigned char *)_TmpG24,
									      (unsigned char *)_TmpG24,
									      (unsigned char *)_TmpG24 + 22U}},
									    {632,
									     - 1,
									     {(unsigned char *)_TmpG25,
									      (unsigned char *)_TmpG25,
									      (unsigned char *)_TmpG25 + 13U}},
									    {193,
									     - 1,
									     {(unsigned char *)_TmpG26,
									      (unsigned char *)_TmpG26,
									      (unsigned char *)_TmpG26 + 16U}},
									    {397,
									     - 1,
									     {(unsigned char *)_TmpG27,
									      (unsigned char *)_TmpG27,
									      (unsigned char *)_TmpG27 + 22U}},
									    {201,
									     - 1,
									     {(unsigned char *)_TmpG28,
									      (unsigned char *)_TmpG28,
									      (unsigned char *)_TmpG28 + 13U}},
									    {262,
									     - 1,
									     {(unsigned char *)_TmpG29,
									      (unsigned char *)_TmpG29,
									      (unsigned char *)_TmpG29 + 32U}},
									    {203,
									     - 1,
									     {(unsigned char *)_TmpG2A,
									      (unsigned char *)_TmpG2A,
									      (unsigned char *)_TmpG2A + 45U}},
									    {436,
									     - 1,
									     {(unsigned char *)_TmpG2B,
									      (unsigned char *)_TmpG2B,
									      (unsigned char *)_TmpG2B + 13U}},
									    {206,
									     - 1,
									     {(unsigned char *)_TmpG2C,
									      (unsigned char *)_TmpG2C,
									      (unsigned char *)_TmpG2C + 22U}},
									    {207,
									     - 1,
									     {(unsigned char *)_TmpG2D,
									      (unsigned char *)_TmpG2D,
									      (unsigned char *)_TmpG2D + 37U}},
									    {209,
									     - 1,
									     {(unsigned char *)_TmpG2E,
									      (unsigned char *)_TmpG2E,
									      (unsigned char *)_TmpG2E + 29U}},
									    {411,
									     - 1,
									     {(unsigned char *)_TmpG2F,
									      (unsigned char *)_TmpG2F,
									      (unsigned char *)_TmpG2F + 25U}},
									    {654,
									     - 1,
									     {(unsigned char *)_TmpG30,
									      (unsigned char *)_TmpG30,
									      (unsigned char *)_TmpG30 + 12U}},
									    {210,
									     - 1,
									     {(unsigned char *)_TmpG31,
									      (unsigned char *)_TmpG31,
									      (unsigned char *)_TmpG31 + 44U}},
									    {412,
									     - 1,
									     {(unsigned char *)_TmpG32,
									      (unsigned char *)_TmpG32,
									      (unsigned char *)_TmpG32 + 40U}},
									    {655,
									     - 1,
									     {(unsigned char *)_TmpG33,
									      (unsigned char *)_TmpG33,
									      (unsigned char *)_TmpG33 + 29U}},
									    {830,
									     - 1,
									     {(unsigned char *)_TmpG34,
									      (unsigned char *)_TmpG34,
									      (unsigned char *)_TmpG34 + 13U}},
									    {214,
									     - 1,
									     {(unsigned char *)_TmpG35,
									      (unsigned char *)_TmpG35,
									      (unsigned char *)_TmpG35 + 15U}},
									    {416,
									     - 1,
									     {(unsigned char *)_TmpG36,
									      (unsigned char *)_TmpG36,
									      (unsigned char *)_TmpG36 + 22U}},
									    {659,
									     - 1,
									     {(unsigned char *)_TmpG37,
									      (unsigned char *)_TmpG37,
									      (unsigned char *)_TmpG37 + 15U}},
									    {834,
									     - 1,
									     {(unsigned char *)_TmpG38,
									      (unsigned char *)_TmpG38,
									      (unsigned char *)_TmpG38 + 30U}},
									    {1068,
									     - 1,
									     {(unsigned char *)_TmpG39,
									      (unsigned char *)_TmpG39,
									      (unsigned char *)_TmpG39 + 16U}},
									    {1218,
									     - 1,
									     {(unsigned char *)_TmpG3A,
									      (unsigned char *)_TmpG3A,
									      (unsigned char *)_TmpG3A + 13U}},
									    {216,
									     - 1,
									     {(unsigned char *)_TmpG3B,
									      (unsigned char *)_TmpG3B,
									      (unsigned char *)_TmpG3B + 15U}},
									    {418,
									     - 1,
									     {(unsigned char *)_TmpG3C,
									      (unsigned char *)_TmpG3C,
									      (unsigned char *)_TmpG3C + 22U}},
									    {661,
									     - 1,
									     {(unsigned char *)_TmpG3D,
									      (unsigned char *)_TmpG3D,
									      (unsigned char *)_TmpG3D + 15U}},
									    {836,
									     - 1,
									     {(unsigned char *)_TmpG3E,
									      (unsigned char *)_TmpG3E,
									      (unsigned char *)_TmpG3E + 22U}},
									    {959,
									     - 1,
									     {(unsigned char *)_TmpG3F,
									      (unsigned char *)_TmpG3F,
									      (unsigned char *)_TmpG3F + 15U}},
									    {1070,
									     - 1,
									     {(unsigned char *)_TmpG40,
									      (unsigned char *)_TmpG40,
									      (unsigned char *)_TmpG40 + 20U}},
									    {1148,
									     - 1,
									     {(unsigned char *)_TmpG41,
									      (unsigned char *)_TmpG41,
									      (unsigned char *)_TmpG41 + 15U}},
									    {1220,
									     - 1,
									     {(unsigned char *)_TmpG42,
									      (unsigned char *)_TmpG42,
									      (unsigned char *)_TmpG42 + 16U}},
									    {1256,
									     - 1,
									     {(unsigned char *)_TmpG43,
									      (unsigned char *)_TmpG43,
									      (unsigned char *)_TmpG43 + 13U}},
									    {218,
									     - 1,
									     {(unsigned char *)_TmpG44,
									      (unsigned char *)_TmpG44,
									      (unsigned char *)_TmpG44 + 37U}},
									    {663,
									     - 1,
									     {(unsigned char *)_TmpG45,
									      (unsigned char *)_TmpG45,
									      (unsigned char *)_TmpG45 + 13U}},
									    {838,
									     - 1,
									     {(unsigned char *)_TmpG46,
									      (unsigned char *)_TmpG46,
									      (unsigned char *)_TmpG46 + 37U}},
									    {220,
									     - 1,
									     {(unsigned char *)_TmpG47,
									      (unsigned char *)_TmpG47,
									      (unsigned char *)_TmpG47 + 30U}},
									    {422,
									     - 1,
									     {(unsigned char *)_TmpG48,
									      (unsigned char *)_TmpG48,
									      (unsigned char *)_TmpG48 + 26U}},
									    {665,
									     - 1,
									     {(unsigned char *)_TmpG49,
									      (unsigned char *)_TmpG49,
									      (unsigned char *)_TmpG49 + 13U}},
									    {222,
									     - 1,
									     {(unsigned char *)_TmpG4A,
									      (unsigned char *)_TmpG4A,
									      (unsigned char *)_TmpG4A + 24U}},
									    {424,
									     - 1,
									     {(unsigned char *)_TmpG4B,
									      (unsigned char *)_TmpG4B,
									      (unsigned char *)_TmpG4B + 20U}},
									    {667,
									     - 1,
									     {(unsigned char *)_TmpG4C,
									      (unsigned char *)_TmpG4C,
									      (unsigned char *)_TmpG4C + 13U}},
									    {223,
									     - 1,
									     {(unsigned char *)_TmpG4D,
									      (unsigned char *)_TmpG4D,
									      (unsigned char *)_TmpG4D + 15U}},
									    {425,
									     - 1,
									     {(unsigned char *)_TmpG4E,
									      (unsigned char *)_TmpG4E,
									      (unsigned char *)_TmpG4E + 22U}},
									    {668,
									     - 1,
									     {(unsigned char *)_TmpG4F,
									      (unsigned char *)_TmpG4F,
									      (unsigned char *)_TmpG4F + 41U}},
									    {844,
									     - 1,
									     {(unsigned char *)_TmpG50,
									      (unsigned char *)_TmpG50,
									      (unsigned char *)_TmpG50 + 22U}},
									    {606,
									     - 1,
									     {(unsigned char *)_TmpG51,
									      (unsigned char *)_TmpG51,
									      (unsigned char *)_TmpG51 + 46U}},
									    {676,
									     - 1,
									     {(unsigned char *)_TmpG52,
									      (unsigned char *)_TmpG52,
									      (unsigned char *)_TmpG52 + 15U}},
									    {680,
									     - 1,
									     {(unsigned char *)_TmpG53,
									      (unsigned char *)_TmpG53,
									      (unsigned char *)_TmpG53 + 24U}},
									    {442,
									     - 1,
									     {(unsigned char *)_TmpG54,
									      (unsigned char *)_TmpG54,
									      (unsigned char *)_TmpG54 + 33U}},
									    {459,
									     - 1,
									     {(unsigned char *)_TmpG55,
									      (unsigned char *)_TmpG55,
									      (unsigned char *)_TmpG55 + 38U}},
									    {463,
									     - 1,
									     {(unsigned char *)_TmpG56,
									      (unsigned char *)_TmpG56,
									      (unsigned char *)_TmpG56 + 38U}},
									    {444,
									     - 1,
									     {(unsigned char *)_TmpG57,
									      (unsigned char *)_TmpG57,
									      (unsigned char *)_TmpG57 + 33U}},
									    {446,
									     - 1,
									     {(unsigned char *)_TmpG58,
									      (unsigned char *)_TmpG58,
									      (unsigned char *)_TmpG58 + 33U}},
									    {445,
									     - 1,
									     {(unsigned char *)_TmpG59,
									      (unsigned char *)_TmpG59,
									      (unsigned char *)_TmpG59 + 33U}},
									    {235,
									     - 1,
									     {(unsigned char *)_TmpG5A,
									      (unsigned char *)_TmpG5A,
									      (unsigned char *)_TmpG5A + 33U}},
									    {449,
									     - 1,
									     {(unsigned char *)_TmpG5B,
									      (unsigned char *)_TmpG5B,
									      (unsigned char *)_TmpG5B + 38U}},
									    {454,
									     - 1,
									     {(unsigned char *)_TmpG5C,
									      (unsigned char *)_TmpG5C,
									      (unsigned char *)_TmpG5C + 38U}},
									    {456,
									     - 1,
									     {(unsigned char *)_TmpG5D,
									      (unsigned char *)_TmpG5D,
									      (unsigned char *)_TmpG5D + 34U}},
									    {455,
									     - 1,
									     {(unsigned char *)_TmpG5E,
									      (unsigned char *)_TmpG5E,
									      (unsigned char *)_TmpG5E + 34U}},
									    {476,
									     - 1,
									     {(unsigned char *)_TmpG5F,
									      (unsigned char *)_TmpG5F,
									      (unsigned char *)_TmpG5F + 22U}},
									    {226,
									     - 1,
									     {(unsigned char *)_TmpG60,
									      (unsigned char *)_TmpG60,
									      (unsigned char *)_TmpG60 + 22U}},
									    {483,
									     - 1,
									     {(unsigned char *)_TmpG61,
									      (unsigned char *)_TmpG61,
									      (unsigned char *)_TmpG61 + 22U}},
									    {852,
									     41,
									     {(unsigned char *)_TmpG62,
									      (unsigned char *)_TmpG62,
									      (unsigned char *)_TmpG62 + 31U}},
									    {695,
									     59,
									     {(unsigned char *)_TmpG63,
									      (unsigned char *)_TmpG63,
									      (unsigned char *)_TmpG63 + 13U}},
									    {482,
									     - 1,
									     {(unsigned char *)_TmpG64,
									      (unsigned char *)_TmpG64,
									      (unsigned char *)_TmpG64 + 22U}},
									    {478,
									     - 1,
									     {(unsigned char *)_TmpG65,
									      (unsigned char *)_TmpG65,
									      (unsigned char *)_TmpG65 + 22U}},
									    {698,
									     62,
									     {(unsigned char *)_TmpG66,
									      (unsigned char *)_TmpG66,
									      (unsigned char *)_TmpG66 + 48U}},
									    {485,
									     - 1,
									     {(unsigned char *)_TmpG67,
									      (unsigned char *)_TmpG67,
									      (unsigned char *)_TmpG67 + 37U}}};
void Cyc_yyerror(struct _fat_ptr s,int state,int token) {
  long _T0;
  struct Cyc_Int_pa_PrintArg_struct _T1;
  int _T2;
  struct Cyc_Int_pa_PrintArg_struct _T3;
  int _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc_ParseErrors_ParseState * _T7;
  unsigned int _T8;
  int _T9;
  struct Cyc_ParseErrors_ParseState _TA;
  int _TB;
  int _TC;
  struct Cyc_ParseErrors_ParseState * _TD;
  unsigned int _TE;
  int _TF;
  struct Cyc_ParseErrors_ParseState _T10;
  int _T11;
  int _T12;
  struct Cyc_ParseErrors_ParseState * _T13;
  unsigned int _T14;
  int _T15;
  struct Cyc_ParseErrors_ParseState _T16;
  struct Cyc_ParseErrors_ParseState * _T17;
  unsigned int _T18;
  int _T19;
  struct Cyc_ParseErrors_ParseState _T1A;
  int _T1B;
  int _T1C;
  struct Cyc_ParseErrors_ParseState * _T1D;
  unsigned int _T1E;
  int _T1F;
  struct Cyc_ParseErrors_ParseState _T20;
  struct _fat_ptr _T21;
  unsigned char * _T22;
  char * _T23;
  struct Cyc_String_pa_PrintArg_struct _T24;
  struct Cyc_String_pa_PrintArg_struct _T25;
  struct Cyc_Yyltype _T26;
  unsigned int _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  struct Cyc_String_pa_PrintArg_struct _T2A;
  struct Cyc_Yyltype _T2B;
  unsigned int _T2C;
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  _T0 = Cyc_Flags_print_parser_state_and_token;
  if (! _T0) { goto _TL0;
  }
  { struct Cyc_Int_pa_PrintArg_struct _T2F;
    _T2F.tag = 1;
    _T2 = state;
    _T2F.f1 = (unsigned long)_T2;
    _T1 = _T2F;
  }{ struct Cyc_Int_pa_PrintArg_struct _T2F = _T1;
    { struct Cyc_Int_pa_PrintArg_struct _T30;
      _T30.tag = 1;
      _T4 = token;
      _T30.f1 = (unsigned long)_T4;
      _T3 = _T30;
    }{ struct Cyc_Int_pa_PrintArg_struct _T30 = _T3;
      void * _T31[2];
      _T31[0] = &_T2F;
      _T31[1] = &_T30;
      _T5 = _tag_fat("parse error: state [%d], token [%d]\n",sizeof(char),
		     37U);
      _T6 = _tag_fat(_T31,sizeof(void *),2);
      Cyc_printf(_T5,_T6);
    }
  }exit(1);
  goto _TL1;
  _TL0: _TL1: { unsigned int i = 0U;
    _TL5: if (i < 104U) { goto _TL3;
    }else { goto _TL4;
    }
    _TL3: _T7 = Cyc_ParseErrors_msg_table;
    _T8 = i;
    _T9 = (int)_T8;
    _TA = _T7[_T9];
    _TB = _TA.state;
    _TC = state;
    if (_TB != _TC) { goto _TL6;
    }
    _TD = Cyc_ParseErrors_msg_table;
    _TE = i;
    _TF = (int)_TE;
    _T10 = _TD[_TF];
    _T11 = _T10.token;
    _T12 = token;
    if (_T11 != _T12) { goto _TL6;
    }
    _T13 = Cyc_ParseErrors_msg_table;
    _T14 = i;
    _T15 = (int)_T14;
    _T16 = _T13[_T15];
    s = _T16.msg;
    goto _TL4;
    _TL6: _T17 = Cyc_ParseErrors_msg_table;
    _T18 = i;
    _T19 = (int)_T18;
    _T1A = _T17[_T19];
    _T1B = _T1A.state;
    _T1C = state;
    if (_T1B != _T1C) { goto _TL8;
    }
    _T1D = Cyc_ParseErrors_msg_table;
    _T1E = i;
    _T1F = (int)_T1E;
    _T20 = _T1D[_T1F];
    s = _T20.msg;
    goto _TL9;
    _TL8: _TL9: i = i + 1;
    goto _TL5;
    _TL4: ;
  }{ struct _fat_ptr ts = Cyc_token2string(token);
    _T21 = ts;
    _T22 = _T21.curr;
    _T23 = (char *)_T22;
    if (_T23 == 0) { goto _TLA;
    }
    { struct Cyc_String_pa_PrintArg_struct _T2F;
      _T2F.tag = 0;
      _T2F.f1 = s;
      _T24 = _T2F;
    }{ struct Cyc_String_pa_PrintArg_struct _T2F = _T24;
      { struct Cyc_String_pa_PrintArg_struct _T30;
	_T30.tag = 0;
	_T30.f1 = Cyc_token2string(token);
	_T25 = _T30;
      }{ struct Cyc_String_pa_PrintArg_struct _T30 = _T25;
	void * _T31[2];
	_T31[0] = &_T2F;
	_T31[1] = &_T30;
	_T26 = Cyc_yylloc;
	_T27 = _T26.first_line;
	_T28 = _tag_fat("%s (found %s instead)",sizeof(char),22U);
	_T29 = _tag_fat(_T31,sizeof(void *),2);
	Cyc_Warn_err(_T27,_T28,_T29);
      }
    }goto _TLB;
    _TLA: { struct Cyc_String_pa_PrintArg_struct _T2F;
      _T2F.tag = 0;
      _T2F.f1 = s;
      _T2A = _T2F;
    }{ struct Cyc_String_pa_PrintArg_struct _T2F = _T2A;
      void * _T30[1];
      _T30[0] = &_T2F;
      _T2B = Cyc_yylloc;
      _T2C = _T2B.first_line;
      _T2D = _tag_fat("%s ",sizeof(char),4U);
      _T2E = _tag_fat(_T30,sizeof(void *),1);
      Cyc_Warn_err(_T2C,_T2D,_T2E);
    }_TLB: ;
  }
}
