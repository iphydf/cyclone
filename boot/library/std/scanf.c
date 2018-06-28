#include <cyc_include.h>
extern char Cyc_Core_Invalid_argument[17U];
 struct Cyc_Core_Invalid_argument_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Impossible[11U];
 struct Cyc_Core_Impossible_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stdin;
extern int Cyc_fgetc(struct Cyc___cycFILE *);
 struct Cyc_ShortPtr_sa_ScanfArg_struct {
  int tag;
  short * f1;
};
 struct Cyc_UShortPtr_sa_ScanfArg_struct {
  int tag;
  unsigned short * f1;
};
 struct Cyc_IntPtr_sa_ScanfArg_struct {
  int tag;
  int * f1;
};
 struct Cyc_UIntPtr_sa_ScanfArg_struct {
  int tag;
  unsigned int * f1;
};
 struct Cyc_StringPtr_sa_ScanfArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_DoublePtr_sa_ScanfArg_struct {
  int tag;
  double * f1;
};
 struct Cyc_FloatPtr_sa_ScanfArg_struct {
  int tag;
  float * f1;
};
 struct Cyc_CharPtr_sa_ScanfArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern int Cyc_getc(struct Cyc___cycFILE *);
extern int Cyc_ungetc(int,struct Cyc___cycFILE *);
extern int isspace(int);
extern int isupper(int);
extern double atof(const char *);
extern long strtol(char *,char * *,int);
extern unsigned long strtoul(char *,char * *,int);
static struct _fat_ptr Cyc___sccl(char *,struct _fat_ptr);
static short * Cyc_va_arg_short_ptr(void * a) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  short * _T4;
  void * _T5;
  unsigned short * _T6;
  short * _T7;
  struct Cyc_Core_Invalid_argument_exn_struct * _T8;
  void * _T9;
  unsigned short * _TA;
  short * _TB;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = a;
    { struct Cyc_ShortPtr_sa_ScanfArg_struct * _TC = (struct Cyc_ShortPtr_sa_ScanfArg_struct *)_T3;
      _TB = _TC->f1;
    }{ short * p = _TB;
      _T4 = p;
      return _T4;
    }
  case 1: 
    _T5 = a;
    { struct Cyc_UShortPtr_sa_ScanfArg_struct * _TC = (struct Cyc_UShortPtr_sa_ScanfArg_struct *)_T5;
      _TA = _TC->f1;
    }{ unsigned short * p = _TA;
      _T6 = p;
      _T7 = (short *)_T6;
      return _T7;
    }
  default: 
    { struct Cyc_Core_Invalid_argument_exn_struct * _TC = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
      _TC->tag = Cyc_Core_Invalid_argument;
      _TC->f1 = _tag_fat("scan expects short pointer",sizeof(char),27U);
      _T8 = (struct Cyc_Core_Invalid_argument_exn_struct *)_TC;
    }_T9 = (void *)_T8;
    _throw(_T9);
  }
  ;
}
static int * Cyc_va_arg_int_ptr(void * a) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  int * _T4;
  void * _T5;
  unsigned int * _T6;
  int * _T7;
  struct Cyc_Core_Invalid_argument_exn_struct * _T8;
  void * _T9;
  unsigned int * _TA;
  int * _TB;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 2: 
    _T3 = a;
    { struct Cyc_IntPtr_sa_ScanfArg_struct * _TC = (struct Cyc_IntPtr_sa_ScanfArg_struct *)_T3;
      _TB = _TC->f1;
    }{ int * p = _TB;
      _T4 = p;
      return _T4;
    }
  case 3: 
    _T5 = a;
    { struct Cyc_UIntPtr_sa_ScanfArg_struct * _TC = (struct Cyc_UIntPtr_sa_ScanfArg_struct *)_T5;
      _TA = _TC->f1;
    }{ unsigned int * p = _TA;
      _T6 = p;
      _T7 = (int *)_T6;
      return _T7;
    }
  default: 
    { struct Cyc_Core_Invalid_argument_exn_struct * _TC = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
      _TC->tag = Cyc_Core_Invalid_argument;
      _TC->f1 = _tag_fat("scan expects int pointer",sizeof(char),25U);
      _T8 = (struct Cyc_Core_Invalid_argument_exn_struct *)_TC;
    }_T9 = (void *)_T8;
    _throw(_T9);
  }
  ;
}
static struct _fat_ptr Cyc_va_arg_string_ptr(void * a) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  void * _T6;
  struct _fat_ptr _T7;
  struct Cyc_Core_Invalid_argument_exn_struct * _T8;
  void * _T9;
  struct _fat_ptr _TA;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 4: 
    _T3 = a;
    { struct Cyc_StringPtr_sa_ScanfArg_struct * _TB = (struct Cyc_StringPtr_sa_ScanfArg_struct *)_T3;
      _TA = _TB->f1;
    }{ struct _fat_ptr p = _TA;
      _T4 = p;
      _T5 = _fat_ptr_decrease_size(_T4,sizeof(char),1U);
      return _T5;
    }
  case 7: 
    _T6 = a;
    { struct Cyc_CharPtr_sa_ScanfArg_struct * _TB = (struct Cyc_CharPtr_sa_ScanfArg_struct *)_T6;
      _TA = _TB->f1;
    }{ struct _fat_ptr p = _TA;
      _T7 = p;
      return _T7;
    }
  default: 
    { struct Cyc_Core_Invalid_argument_exn_struct * _TB = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
      _TB->tag = Cyc_Core_Invalid_argument;
      _TB->f1 = _tag_fat("scan expects char pointer",sizeof(char),26U);
      _T8 = (struct Cyc_Core_Invalid_argument_exn_struct *)_TB;
    }_T9 = (void *)_T8;
    _throw(_T9);
  }
  ;
}
static double * Cyc_va_arg_double_ptr(void * a) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  double * _T4;
  struct Cyc_Core_Invalid_argument_exn_struct * _T5;
  void * _T6;
  double * _T7;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 5) { goto _TL3;
  }
  _T3 = a;
  { struct Cyc_DoublePtr_sa_ScanfArg_struct * _T8 = (struct Cyc_DoublePtr_sa_ScanfArg_struct *)_T3;
    _T7 = _T8->f1;
  }{ double * p = _T7;
    _T4 = p;
    return _T4;
  }_TL3: { struct Cyc_Core_Invalid_argument_exn_struct * _T8 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T8->tag = Cyc_Core_Invalid_argument;
    _T8->f1 = _tag_fat("scan expects double pointer",sizeof(char),28U);
    _T5 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T8;
  }_T6 = (void *)_T5;
  _throw(_T6);
  ;
}
static float * Cyc_va_arg_float_ptr(void * a) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  float * _T4;
  struct Cyc_Core_Invalid_argument_exn_struct * _T5;
  void * _T6;
  float * _T7;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 6) { goto _TL5;
  }
  _T3 = a;
  { struct Cyc_FloatPtr_sa_ScanfArg_struct * _T8 = (struct Cyc_FloatPtr_sa_ScanfArg_struct *)_T3;
    _T7 = _T8->f1;
  }{ float * p = _T7;
    _T4 = p;
    return _T4;
  }_TL5: { struct Cyc_Core_Invalid_argument_exn_struct * _T8 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T8->tag = Cyc_Core_Invalid_argument;
    _T8->f1 = _tag_fat("scan expects float pointer",sizeof(char),27U);
    _T5 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T8;
  }_T6 = (void *)_T5;
  _throw(_T6);
  ;
}
static struct _fat_ptr Cyc_va_arg_char_ptr(void * a) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct _fat_ptr _T4;
  void * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct Cyc_Core_Invalid_argument_exn_struct * _T8;
  void * _T9;
  struct _fat_ptr _TA;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 7: 
    _T3 = a;
    { struct Cyc_CharPtr_sa_ScanfArg_struct * _TB = (struct Cyc_CharPtr_sa_ScanfArg_struct *)_T3;
      _TA = _TB->f1;
    }{ struct _fat_ptr p = _TA;
      _T4 = p;
      return _T4;
    }
  case 4: 
    _T5 = a;
    { struct Cyc_StringPtr_sa_ScanfArg_struct * _TB = (struct Cyc_StringPtr_sa_ScanfArg_struct *)_T5;
      _TA = _TB->f1;
    }{ struct _fat_ptr p = _TA;
      _T6 = p;
      _T7 = _fat_ptr_decrease_size(_T6,sizeof(char),1U);
      return _T7;
    }
  default: 
    { struct Cyc_Core_Invalid_argument_exn_struct * _TB = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
      _TB->tag = Cyc_Core_Invalid_argument;
      _TB->f1 = _tag_fat("scan expects char pointer",sizeof(char),26U);
      _T8 = (struct Cyc_Core_Invalid_argument_exn_struct *)_TB;
    }_T9 = (void *)_T8;
    _throw(_T9);
  }
  ;
}
int Cyc__IO_vfscanf(int (* _IO_getc)(void *),int (* _IO_ungetc)(int,void *),
		    int (* _IO_peekc)(void *),void * fp,struct _fat_ptr fmt0,
		    struct _fat_ptr ap,int * errp) {
  char * _T0;
  unsigned int _T1;
  char * _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr _T4;
  unsigned char * _T5;
  const char * _T6;
  char _T7;
  int _T8;
  int _T9;
  int _TA;
  int _TB;
  struct _fat_ptr * _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  const char * _TF;
  char _T10;
  int _T11;
  int _T12;
  int _T13;
  int _T14;
  int _T15;
  int _T16;
  int _T17;
  int _T18;
  int _T19;
  int _T1A;
  int _T1B;
  int _T1C;
  int _T1D;
  int _T1E;
  int _T1F;
  int _T20;
  int _T21;
  long long _T22;
  int _T23;
  long long _T24;
  long long _T25;
  int _T26;
  struct _fat_ptr _T27;
  unsigned char * _T28;
  void * * _T29;
  void * _T2A;
  short * _T2B;
  int _T2C;
  struct _fat_ptr _T2D;
  unsigned char * _T2E;
  void * * _T2F;
  void * _T30;
  int * _T31;
  struct _fat_ptr _T32;
  unsigned char * _T33;
  void * * _T34;
  void * _T35;
  int * _T36;
  struct _fat_ptr * _T37;
  int _T38;
  int _T39;
  int _T3A;
  int _T3B;
  int _T3C;
  int _T3D;
  int _T3E;
  int _T3F;
  int _T40;
  int _T41;
  int _T42;
  int _T43;
  int _T44;
  long long _T45;
  struct _fat_ptr _T46;
  unsigned char * _T47;
  void * * _T48;
  void * _T49;
  struct _fat_ptr * _T4A;
  int _T4B;
  int _T4C;
  int _T4D;
  int _T4E;
  struct _fat_ptr _T4F;
  unsigned char * _T50;
  char * _T51;
  int _T52;
  struct _fat_ptr * _T53;
  long long _T54;
  char * _T55;
  int _T56;
  char _T57;
  int _T58;
  char _T59;
  int _T5A;
  long long _T5B;
  int _T5C;
  int _T5D;
  struct _fat_ptr _T5E;
  unsigned char * _T5F;
  void * * _T60;
  void * _T61;
  struct _fat_ptr _T62;
  struct _fat_ptr * _T63;
  char * _T64;
  int _T65;
  char _T66;
  int _T67;
  char _T68;
  int _T69;
  struct _fat_ptr _T6A;
  unsigned int _T6B;
  struct _fat_ptr _T6C;
  unsigned char * _T6D;
  char * _T6E;
  int _T6F;
  struct _fat_ptr * _T70;
  long long _T71;
  int _T72;
  int _T73;
  struct _fat_ptr _T74;
  unsigned char * _T75;
  char * _T76;
  struct _fat_ptr _T77;
  unsigned char * _T78;
  char * _T79;
  struct _fat_ptr _T7A;
  unsigned char * _T7B;
  struct _fat_ptr _T7C;
  unsigned char * _T7D;
  int _T7E;
  struct _fat_ptr _T7F;
  unsigned int _T80;
  struct _fat_ptr _T81;
  unsigned char * _T82;
  char * _T83;
  int _T84;
  int _T85;
  unsigned char _T86;
  int _T87;
  int _T88;
  long long _T89;
  int _T8A;
  int _T8B;
  int _T8C;
  struct _fat_ptr _T8D;
  unsigned char * _T8E;
  void * * _T8F;
  void * _T90;
  struct _fat_ptr * _T91;
  int _T92;
  unsigned char _T93;
  int _T94;
  int _T95;
  struct _fat_ptr _T96;
  unsigned int _T97;
  struct _fat_ptr _T98;
  unsigned char * _T99;
  char * _T9A;
  int _T9B;
  struct _fat_ptr * _T9C;
  long long _T9D;
  int _T9E;
  int _T9F;
  struct _fat_ptr _TA0;
  unsigned int _TA1;
  struct _fat_ptr _TA2;
  unsigned char * _TA3;
  char * _TA4;
  struct _fat_ptr _TA5;
  unsigned char * _TA6;
  struct _fat_ptr _TA7;
  unsigned char * _TA8;
  int _TA9;
  int _TAA;
  long long _TAB;
  unsigned int _TAC;
  unsigned int _TAD;
  long long _TAE;
  unsigned int _TAF;
  unsigned int _TB0;
  int _TB1;
  int _TB2;
  char * _TB3;
  int _TB4;
  unsigned char _TB5;
  int _TB6;
  int _TB7;
  int _TB8;
  int _TB9;
  int _TBA;
  int _TBB;
  int _TBC;
  int _TBD;
  short * _TBE;
  int _TBF;
  short _TC0;
  int _TC1;
  int _TC2;
  int _TC3;
  short * _TC4;
  int _TC5;
  short _TC6;
  int _TC7;
  int _TC8;
  int _TC9;
  int _TCA;
  int _TCB;
  int _TCC;
  int _TCD;
  struct _fat_ptr _TCE;
  int _TCF;
  struct _fat_ptr _TD0;
  unsigned char * _TD1;
  char * _TD2;
  char * _TD3;
  int _TD4;
  struct _fat_ptr * _TD5;
  unsigned char * _TD6;
  char * _TD7;
  int _TD8;
  unsigned int _TD9;
  unsigned char * _TDA;
  char * _TDB;
  int _TDC;
  int _TDD;
  struct _fat_ptr _TDE;
  unsigned char * _TDF;
  char * _TE0;
  char * _TE1;
  struct _fat_ptr * _TE2;
  struct _fat_ptr _TE3;
  unsigned char * _TE4;
  char * _TE5;
  char _TE6;
  int _TE7;
  void * _TE8;
  struct _fat_ptr _TE9;
  unsigned char * _TEA;
  char * _TEB;
  int _TEC;
  char _TED;
  struct _fat_ptr * _TEE;
  int _TEF;
  unsigned char * _TF0;
  char * _TF1;
  unsigned int _TF2;
  unsigned char * _TF3;
  char * _TF4;
  long _TF5;
  long _TF6;
  struct _fat_ptr _TF7;
  unsigned char * _TF8;
  void * * _TF9;
  void * _TFA;
  int * _TFB;
  unsigned long _TFC;
  struct _fat_ptr _TFD;
  unsigned char * _TFE;
  void * * _TFF;
  void * _T100;
  short * _T101;
  unsigned long _T102;
  struct _fat_ptr _T103;
  unsigned char * _T104;
  void * * _T105;
  void * _T106;
  int * _T107;
  unsigned long _T108;
  struct _fat_ptr _T109;
  unsigned char * _T10A;
  void * * _T10B;
  void * _T10C;
  int * _T10D;
  unsigned long _T10E;
  struct _fat_ptr * _T10F;
  struct _fat_ptr _T110;
  unsigned char * _T111;
  char * _T112;
  struct _fat_ptr _T113;
  unsigned char * _T114;
  int _T115;
  int _T116;
  long long _T117;
  unsigned int _T118;
  unsigned int _T119;
  long long _T11A;
  unsigned int _T11B;
  unsigned int _T11C;
  int _T11D;
  int _T11E;
  int _T11F;
  char * _T120;
  int _T121;
  int _T122;
  int _T123;
  int _T124;
  int _T125;
  int _T126;
  int _T127;
  int _T128;
  int _T129;
  int _T12A;
  int _T12B;
  int _T12C;
  int _T12D;
  int _T12E;
  int _T12F;
  struct _fat_ptr * _T130;
  unsigned char * _T131;
  char * _T132;
  int _T133;
  unsigned int _T134;
  unsigned char * _T135;
  char * _T136;
  int _T137;
  int _T138;
  struct _fat_ptr _T139;
  unsigned char * _T13A;
  char * _T13B;
  char * _T13C;
  struct _fat_ptr * _T13D;
  struct _fat_ptr _T13E;
  unsigned char * _T13F;
  char * _T140;
  char _T141;
  int _T142;
  void * _T143;
  struct _fat_ptr * _T144;
  struct _fat_ptr _T145;
  unsigned char * _T146;
  char * _T147;
  char _T148;
  struct _fat_ptr * _T149;
  struct _fat_ptr _T14A;
  unsigned char * _T14B;
  char * _T14C;
  char _T14D;
  int _T14E;
  unsigned char * _T14F;
  char * _T150;
  unsigned int _T151;
  unsigned char * _T152;
  char * _T153;
  char * _T154;
  const char * _T155;
  struct _fat_ptr _T156;
  unsigned char * _T157;
  void * * _T158;
  void * _T159;
  double * _T15A;
  struct _fat_ptr _T15B;
  unsigned char * _T15C;
  void * * _T15D;
  void * _T15E;
  float * _T15F;
  double _T160;
  struct _fat_ptr * _T161;
  struct _fat_ptr _T162;
  unsigned char * _T163;
  char * _T164;
  struct _fat_ptr _T165;
  unsigned char * _T166;
  int _T167;
  int _T168;
  struct Cyc_Core_Impossible_exn_struct * _T169;
  void * _T16A;
  int * _T16B;
  unsigned int _T16C;
  int * _T16D;
  int * _T16E;
  unsigned int _T16F;
  int _T170;
  int * _T171;
  int _T172;
  struct _fat_ptr fmt = fmt0;
  int c;
  long long width;
  struct _fat_ptr p = _tag_fat(0,0,0);
  int n;
  int flags = 0;
  struct _fat_ptr p0 = _tag_fat(0,0,0);
  int nassigned;
  int nread;
  int base = 0;
  long use_strtoul = 0;
  char ccltab[256U];
  char buf[351U];
  { unsigned int _T173 = 350U;
    unsigned int i;
    i = 0;
    _TLB: if (i < _T173) { goto _TL9;
    }else { goto _TLA;
    }
    _TL9: _T0 = buf;
    _T1 = i;
    _T0[_T1] = '0';
    i = i + 1;
    goto _TLB;
    _TLA: _T2 = buf;
    _T2[_T173] = 0;
  }{ int seen_eof = 0;
    static short basefix[17U] = {10,
				 1,
				 2,
				 3,
				 4,
				 5,
				 6,
				 7,
				 8,
				 9,
				 10,
				 11,
				 12,
				 13,
				 14,
				 15,
				 16};
    nassigned = 0;
    nread = 0;
    _TLF: if (1) { goto _TLD;
    }else { goto _TLE;
    }
    _TLD: _T3 = &fmt;
    _T4 = _fat_ptr_inplace_plus_post(_T3,sizeof(char),1);
    _T5 = _T4.curr;
    _T6 = (const char *)_T5;
    _T7 = *_T6;
    c = (int)_T7;
    if (c != 0) { goto _TL10;
    }
    goto done;
    _TL10: _T8 = isspace(c);
    if (! _T8) { goto _TL12;
    }
    _TL17: if (1) { goto _TL15;
    }else { goto _TL16;
    }
    _TL15: c = _IO_getc(fp);
    _T9 = c;
    _TA = - 1;
    if (_T9 != _TA) { goto _TL18;
    }
    seen_eof = seen_eof + 1;
    goto _TL16;
    _TL18: _TB = isspace(c);
    if (_TB) { goto _TL1A;
    }else { goto _TL1C;
    }
    _TL1C: _IO_ungetc(c,fp);
    goto _TL16;
    _TL1A: nread = nread + 1;
    goto _TL17;
    _TL16: goto _TLC;
    _TL12: if (c == 37) { goto _TL1D;
    }
    goto literal;
    _TL1D: width = 0;
    flags = 0;
    again: _TC = &fmt;
    _TD = _fat_ptr_inplace_plus_post(_TC,sizeof(char),1);
    _TE = _check_fat_subscript(_TD,sizeof(char),0U);
    _TF = (const char *)_TE;
    _T10 = *_TF;
    c = (int)_T10;
    _T11 = c;
    _T12 = (int)_T11;
    switch (_T12) {
    case 37: 
      literal: n = _IO_getc(fp);
      _T13 = n;
      _T14 = - 1;
      if (_T13 != _T14) { goto _TL20;
      }
      goto eof_failure;
      _TL20: if (n == c) { goto _TL22;
      }
      _IO_ungetc(n,fp);
      goto match_failure;
      _TL22: nread = nread + 1;
      goto _TLC;
    case 42: 
      _T15 = flags;
      if (! _T15) { goto _TL24;
      }
      goto control_failure;
      _TL24: flags = 8;
      goto again;
    case 108: 
      _T16 = flags;
      _T17 = 8 | 64;
      _T18 = ~ _T17;
      if (! (_T16 & _T18)) { goto _TL26;
      }
      goto control_failure;
      _TL26: flags = flags | 1;
      goto again;
    case 76: 
      _T19 = flags;
      _T1A = 8 | 64;
      _T1B = ~ _T1A;
      if (! (_T19 & _T1B)) { goto _TL28;
      }
      goto control_failure;
      _TL28: flags = flags | 2;
      goto again;
    case 104: 
      _T1C = flags;
      _T1D = 8 | 64;
      _T1E = ~ _T1D;
      if (! (_T1C & _T1E)) { goto _TL2A;
      }
      goto control_failure;
      _TL2A: flags = flags | 4;
      goto again;
    case 48: 
      goto _LLE;
    case 49: 
      _LLE: goto _LL10;
    case 50: 
      _LL10: goto _LL12;
    case 51: 
      _LL12: goto _LL14;
    case 52: 
      _LL14: goto _LL16;
    case 53: 
      _LL16: goto _LL18;
    case 54: 
      _LL18: goto _LL1A;
    case 55: 
      _LL1A: goto _LL1C;
    case 56: 
      _LL1C: goto _LL1E;
    case 57: 
      _LL1E: _T1F = flags;
      _T20 = 8 | 64;
      _T21 = ~ _T20;
      if (! (_T1F & _T21)) { goto _TL2C;
      }
      goto control_failure;
      _TL2C: flags = flags | 64;
      _T22 = width * 10;
      _T23 = c;
      _T24 = (long long)_T23;
      _T25 = _T22 + _T24;
      width = _T25 - 48;
      goto again;
    case 68: 
      flags = flags | 1;
      goto _LL22;
    case 100: 
      _LL22: c = 3;
      use_strtoul = 0;
      base = 10;
      goto _LL0;
    case 105: 
      c = 3;
      use_strtoul = 0;
      base = 0;
      goto _LL0;
    case 79: 
      flags = flags | 1;
      goto _LL28;
    case 111: 
      _LL28: c = 3;
      use_strtoul = 1;
      base = 8;
      goto _LL0;
    case 117: 
      c = 3;
      use_strtoul = 1;
      base = 10;
      goto _LL0;
    case 88: 
      goto _LL2E;
    case 120: 
      _LL2E: flags = flags | 256;
      c = 3;
      use_strtoul = 1;
      base = 16;
      goto _LL0;
    case 69: 
      goto _LL32;
    case 70: 
      _LL32: goto _LL34;
    case 101: 
      _LL34: goto _LL36;
    case 102: 
      _LL36: goto _LL38;
    case 103: 
      _LL38: c = 4;
      goto _LL0;
    case 115: 
      c = 2;
      goto _LL0;
    case 91: 
      fmt = Cyc___sccl(ccltab,fmt);
      flags = flags | 32;
      c = 1;
      goto _LL0;
    case 99: 
      flags = flags | 32;
      c = 0;
      goto _LL0;
    case 112: 
      _T26 = 16 | 256;
      flags = flags | _T26;
      c = 3;
      use_strtoul = 1;
      base = 16;
      goto _LL0;
    case 110: 
      if (! (flags & 8)) { goto _TL2E;
      }
      goto _TLC;
      _TL2E: if (! (flags & 4)) { goto _TL30;
      }
      _T27 = ap;
      _T28 = _T27.curr;
      _T29 = (void * *)_T28;
      _T2A = *_T29;
      _T2B = Cyc_va_arg_short_ptr(_T2A);
      _T2C = nread;
      *_T2B = (short)_T2C;
      goto _TL31;
      _TL30: if (! (flags & 1)) { goto _TL32;
      }
      _T2D = ap;
      _T2E = _T2D.curr;
      _T2F = (void * *)_T2E;
      _T30 = *_T2F;
      _T31 = Cyc_va_arg_int_ptr(_T30);
      *_T31 = nread;
      goto _TL33;
      _TL32: _T32 = ap;
      _T33 = _T32.curr;
      _T34 = (void * *)_T33;
      _T35 = *_T34;
      _T36 = Cyc_va_arg_int_ptr(_T35);
      *_T36 = nread;
      _TL33: _TL31: _T37 = &ap;
      _fat_ptr_inplace_plus(_T37,sizeof(void *),1);
      goto _TLC;
    case 0: 
      nassigned = - 1;
      goto done;
    default: 
      _T38 = isupper(c);
      if (! _T38) { goto _TL34;
      }
      flags = flags | 1;
      goto _TL35;
      _TL34: _TL35: c = 3;
      use_strtoul = 0;
      base = 10;
      goto _LL0;
    }
    _LL0: _T39 = _IO_peekc(fp);
    _T3A = - 1;
    if (_T39 != _T3A) { goto _TL36;
    }
    goto eof_failure;
    _TL36: _T3B = flags & 32;
    if (_T3B != 0) { goto _TL38;
    }
    n = _IO_peekc(fp);
    _TL3A: _T3C = isspace(n);
    if (_T3C) { goto _TL3B;
    }else { goto _TL3C;
    }
    _TL3B: n = _IO_getc(fp);
    nread = nread + 1;
    n = _IO_peekc(fp);
    _T3D = n;
    _T3E = - 1;
    if (_T3D != _T3E) { goto _TL3D;
    }
    goto eof_failure;
    _TL3D: goto _TL3A;
    _TL3C: goto _TL39;
    _TL38: _TL39: _T3F = c;
    _T40 = (int)_T3F;
    switch (_T40) {
    case 0: 
      if (width != 0) { goto _TL40;
      }
      width = 1;
      goto _TL41;
      _TL40: _TL41: if (! (flags & 8)) { goto _TL42;
      }
      { long long sum = 0;
	_TL47: if (width > 0) { goto _TL45;
	}else { goto _TL46;
	}
	_TL45: n = _IO_getc(fp);
	_T41 = n;
	_T42 = - 1;
	if (_T41 != _T42) { goto _TL48;
	}
	if (width == 0) { goto _TL48;
	}
	goto eof_failure;
	_TL48: _T43 = n;
	_T44 = - 1;
	if (_T43 != _T44) { goto _TL4A;
	}
	seen_eof = seen_eof + 1;
	goto _TL46;
	_TL4A: sum = sum + 1;
	width = width + -1;
	goto _TL47;
	_TL46: _T45 = sum;
	nread = nread + _T45;
      }goto _TL43;
      _TL42: { long long sum = 0;
	_T46 = ap;
	_T47 = _T46.curr;
	_T48 = (void * *)_T47;
	_T49 = *_T48;
	{ struct _fat_ptr z = Cyc_va_arg_char_ptr(_T49);
	  _T4A = &ap;
	  _fat_ptr_inplace_plus(_T4A,sizeof(void *),1);
	  _TL4F: if (width > 0) { goto _TL4D;
	  }else { goto _TL4E;
	  }
	  _TL4D: n = _IO_getc(fp);
	  _T4B = n;
	  _T4C = - 1;
	  if (_T4B != _T4C) { goto _TL50;
	  }
	  if (width == 0) { goto _TL50;
	  }
	  goto eof_failure;
	  _TL50: _T4D = n;
	  _T4E = - 1;
	  if (_T4D != _T4E) { goto _TL52;
	  }
	  seen_eof = seen_eof + 1;
	  goto _TL4E;
	  _TL52: _T4F = z;
	  _T50 = _T4F.curr;
	  _T51 = (char *)_T50;
	  _T52 = n;
	  *_T51 = (char)_T52;
	  _T53 = &z;
	  _fat_ptr_inplace_plus(_T53,sizeof(char),1);
	  sum = sum + 1;
	  width = width + -1;
	  goto _TL4F;
	  _TL4E: _T54 = sum;
	  nread = nread + _T54;
	  nassigned = nassigned + 1;
	}
      }_TL43: goto _LL47;
    case 1: 
      if (width != 0) { goto _TL54;
      }
      width = -1;
      goto _TL55;
      _TL54: _TL55: if (! (flags & 8)) { goto _TL56;
      }
      n = 0;
      { int c = _IO_peekc(fp);
	_TL58: _T55 = ccltab;
	_T56 = c;
	_T57 = (char)_T56;
	_T58 = (int)_T57;
	_T59 = _T55[_T58];
	_T5A = (int)_T59;
	if (_T5A) { goto _TL59;
	}else { goto _TL5A;
	}
	_TL59: n = n + 1;
	_IO_getc(fp);
	width = width + -1;
	_T5B = width;
	if (_T5B != 0) { goto _TL5B;
	}
	goto _TL5A;
	_TL5B: c = _IO_peekc(fp);
	_T5C = c;
	_T5D = - 1;
	if (_T5C != _T5D) { goto _TL5D;
	}
	if (n != 0) { goto _TL5F;
	}
	goto eof_failure;
	_TL5F: seen_eof = seen_eof + 1;
	goto _TL5A;
	_TL5D: goto _TL58;
	_TL5A: if (n != 0) { goto _TL61;
	}
	goto match_failure;
	_TL61: ;
      }goto _TL57;
      _TL56: _T5E = ap;
      _T5F = _T5E.curr;
      _T60 = (void * *)_T5F;
      _T61 = *_T60;
      _T62 = Cyc_va_arg_string_ptr(_T61);
      { struct _fat_ptr p4 = _T62;
	_T63 = &ap;
	_fat_ptr_inplace_plus(_T63,sizeof(void *),1);
	{ struct _fat_ptr p5 = p4;
	  int c = _IO_peekc(fp);
	  _TL63: _T64 = ccltab;
	  _T65 = c;
	  _T66 = (char)_T65;
	  _T67 = (int)_T66;
	  _T68 = _T64[_T67];
	  _T69 = (int)_T68;
	  if (_T69) { goto _TL64;
	  }else { goto _TL65;
	  }
	  _TL64: _T6A = p5;
	  _T6B = _get_fat_size(_T6A,sizeof(char));
	  if (_T6B != 0U) { goto _TL66;
	  }
	  goto eof_failure;
	  _TL66: _T6C = p5;
	  _T6D = _T6C.curr;
	  _T6E = (char *)_T6D;
	  _T6F = c;
	  *_T6E = (char)_T6F;
	  _T70 = &p5;
	  _fat_ptr_inplace_plus(_T70,sizeof(char),1);
	  _IO_getc(fp);
	  width = width + -1;
	  _T71 = width;
	  if (_T71 != 0) { goto _TL68;
	  }
	  goto _TL65;
	  _TL68: c = _IO_peekc(fp);
	  _T72 = c;
	  _T73 = - 1;
	  if (_T72 != _T73) { goto _TL6A;
	  }
	  _T74 = p5;
	  _T75 = _T74.curr;
	  _T76 = (char *)_T75;
	  _T77 = p0;
	  _T78 = _T77.curr;
	  _T79 = (char *)_T78;
	  if (_T76 != _T79) { goto _TL6C;
	  }
	  goto eof_failure;
	  _TL6C: seen_eof = seen_eof + 1;
	  goto _TL65;
	  _TL6A: goto _TL63;
	  _TL65: _T7A = p5;
	  _T7B = _T7A.curr;
	  _T7C = p4;
	  _T7D = _T7C.curr;
	  _T7E = _T7B - _T7D;
	  n = _T7E / sizeof(char);
	  if (n != 0) { goto _TL6E;
	  }
	  goto match_failure;
	  _TL6E: _T7F = p5;
	  _T80 = _get_fat_size(_T7F,sizeof(char));
	  if (_T80 != 0U) { goto _TL70;
	  }
	  goto eof_failure;
	  _TL70: _T81 = p5;
	  _T82 = _T81.curr;
	  _T83 = (char *)_T82;
	  *_T83 = '\000';
	  nassigned = nassigned + 1;
	}
      }_TL57: _T84 = n;
      nread = nread + _T84;
      goto _LL47;
    case 2: 
      if (width != 0) { goto _TL72;
      }
      width = -1;
      goto _TL73;
      _TL72: _TL73: if (! (flags & 8)) { goto _TL74;
      }
      n = 0;
      { int c = _IO_peekc(fp);
	_TL76: _T85 = c;
	_T86 = (unsigned char)_T85;
	_T87 = (int)_T86;
	_T88 = isspace(_T87);
	if (_T88) { goto _TL78;
	}else { goto _TL77;
	}
	_TL77: n = n + 1;
	_IO_getc(fp);
	width = width + -1;
	_T89 = width;
	if (_T89 != 0) { goto _TL79;
	}
	goto _TL78;
	_TL79: c = _IO_peekc(fp);
	_T8A = c;
	_T8B = - 1;
	if (_T8A != _T8B) { goto _TL7B;
	}
	seen_eof = seen_eof + 1;
	goto _TL78;
	_TL7B: goto _TL76;
	_TL78: _T8C = n;
	nread = nread + _T8C;
      }goto _TL75;
      _TL74: _T8D = ap;
      _T8E = _T8D.curr;
      _T8F = (void * *)_T8E;
      _T90 = *_T8F;
      { struct _fat_ptr p2 = Cyc_va_arg_string_ptr(_T90);
	_T91 = &ap;
	_fat_ptr_inplace_plus(_T91,sizeof(void *),1);
	{ struct _fat_ptr p3 = p2;
	  int c = _IO_peekc(fp);
	  _TL7D: _T92 = c;
	  _T93 = (unsigned char)_T92;
	  _T94 = (int)_T93;
	  _T95 = isspace(_T94);
	  if (_T95) { goto _TL7F;
	  }else { goto _TL7E;
	  }
	  _TL7E: c = _IO_getc(fp);
	  _T96 = p3;
	  _T97 = _get_fat_size(_T96,sizeof(char));
	  if (_T97 != 0U) { goto _TL80;
	  }
	  goto eof_failure;
	  _TL80: _T98 = p3;
	  _T99 = _T98.curr;
	  _T9A = (char *)_T99;
	  _T9B = c;
	  *_T9A = (char)_T9B;
	  _T9C = &p3;
	  _fat_ptr_inplace_plus(_T9C,sizeof(char),1);
	  width = width + -1;
	  _T9D = width;
	  if (_T9D != 0) { goto _TL82;
	  }
	  goto _TL7F;
	  _TL82: c = _IO_peekc(fp);
	  _T9E = c;
	  _T9F = - 1;
	  if (_T9E != _T9F) { goto _TL84;
	  }
	  seen_eof = seen_eof + 1;
	  goto _TL7F;
	  _TL84: goto _TL7D;
	  _TL7F: _TA0 = p3;
	  _TA1 = _get_fat_size(_TA0,sizeof(char));
	  if (_TA1 != 0U) { goto _TL86;
	  }
	  goto eof_failure;
	  _TL86: _TA2 = p3;
	  _TA3 = _TA2.curr;
	  _TA4 = (char *)_TA3;
	  *_TA4 = '\000';
	  _TA5 = p3;
	  _TA6 = _TA5.curr;
	  _TA7 = p2;
	  _TA8 = _TA7.curr;
	  _TA9 = _TA6 - _TA8;
	  _TAA = _TA9 / sizeof(char);
	  nread = nread + _TAA;
	  nassigned = nassigned + 1;
	}
      }_TL75: goto _TLC;
    case 3: 
      if (width == 0) { goto _TL8A;
      }else { goto _TL8B;
      }
      _TL8B: _TAB = width;
      _TAC = sizeof(buf);
      _TAD = _TAC - 1U;
      _TAE = (long long)_TAD;
      if (_TAB > _TAE) { goto _TL8A;
      }else { goto _TL88;
      }
      _TL8A: _TAF = sizeof(buf);
      _TB0 = _TAF - 1U;
      width = (long long)_TB0;
      goto _TL89;
      _TL88: _TL89: _TB1 = 64 | 128;
      _TB2 = _TB1 | 512;
      flags = flags | _TB2;
      _TB3 = buf;
      p = _tag_fat(_TB3,sizeof(char),351U);
      _TL8F: if (width != 0) { goto _TL8D;
      }else { goto _TL8E;
      }
      _TL8D: _TB4 = _IO_peekc(fp);
      _TB5 = (unsigned char)_TB4;
      c = (int)_TB5;
      _TB6 = c;
      _TB7 = (int)_TB6;
      switch (_TB7) {
      case 48: 
	if (base != 0) { goto _TL91;
	}
	base = 8;
	flags = flags | 256;
	goto _TL92;
	_TL91: _TL92: if (! (flags & 512)) { goto _TL93;
	}
	_TB8 = 64 | 512;
	_TB9 = _TB8 | 128;
	_TBA = ~ _TB9;
	flags = flags & _TBA;
	goto _TL94;
	_TL93: _TBB = 64 | 256;
	_TBC = _TBB | 128;
	_TBD = ~ _TBC;
	flags = flags & _TBD;
	_TL94: goto ok;
      case 49: 
	goto _LL5A;
      case 50: 
	_LL5A: goto _LL5C;
      case 51: 
	_LL5C: goto _LL5E;
      case 52: 
	_LL5E: goto _LL60;
      case 53: 
	_LL60: goto _LL62;
      case 54: 
	_LL62: goto _LL64;
      case 55: 
	_LL64: _TBE = basefix;
	_TBF = base;
	_TC0 = _TBE[_TBF];
	base = (int)_TC0;
	_TC1 = 64 | 256;
	_TC2 = _TC1 | 128;
	_TC3 = ~ _TC2;
	flags = flags & _TC3;
	goto ok;
      case 56: 
	goto _LL68;
      case 57: 
	_LL68: _TC4 = basefix;
	_TC5 = base;
	_TC6 = _TC4[_TC5];
	base = (int)_TC6;
	if (base > 8) { goto _TL95;
	}
	goto _LL54;
	_TL95: _TC7 = 64 | 256;
	_TC8 = _TC7 | 128;
	_TC9 = ~ _TC8;
	flags = flags & _TC9;
	goto ok;
      case 65: 
	goto _LL6C;
      case 66: 
	_LL6C: goto _LL6E;
      case 67: 
	_LL6E: goto _LL70;
      case 68: 
	_LL70: goto _LL72;
      case 69: 
	_LL72: goto _LL74;
      case 70: 
	_LL74: goto _LL76;
      case 97: 
	_LL76: goto _LL78;
      case 98: 
	_LL78: goto _LL7A;
      case 99: 
	_LL7A: goto _LL7C;
      case 100: 
	_LL7C: goto _LL7E;
      case 101: 
	_LL7E: goto _LL80;
      case 102: 
	_LL80: if (base > 10) { goto _TL97;
	}
	goto _LL54;
	_TL97: _TCA = 64 | 256;
	_TCB = _TCA | 128;
	_TCC = ~ _TCB;
	flags = flags & _TCC;
	goto ok;
      case 43: 
	goto _LL84;
      case 45: 
	_LL84: if (! (flags & 64)) { goto _TL99;
	}
	_TCD = ~ 64;
	flags = flags & _TCD;
	goto ok;
	_TL99: goto _LL54;
      case 120: 
	goto _LL88;
      case 88: 
	_LL88: if (! (flags & 256)) { goto _TL9B;
	}
	_TCE = p;
	_TCF = - 1;
	_TD0 = _fat_ptr_plus(_TCE,sizeof(char),_TCF);
	_TD1 = _TD0.curr;
	_TD2 = (char *)_TD1;
	_TD3 = buf;
	if (_TD2 != _TD3) { goto _TL9B;
	}
	base = 16;
	_TD4 = ~ 256;
	flags = flags & _TD4;
	goto ok;
	_TL9B: goto _LL54;
      default: 
	goto _LL54;
      }
      _LL54: goto _TL8E;
      ok: _TD5 = &p;
      { struct _fat_ptr _T173 = _fat_ptr_inplace_plus_post(_TD5,sizeof(char),
							   1);
	_TD6 = _check_fat_subscript(_T173,sizeof(char),0U);
	_TD7 = (char *)_TD6;
	{ char _T174 = *_TD7;
	  _TD8 = c;
	  { char _T175 = (char)_TD8;
	    _TD9 = _get_fat_size(_T173,sizeof(char));
	    if (_TD9 != 1U) { goto _TL9D;
	    }
	    if (_T174 != 0) { goto _TL9D;
	    }
	    if (_T175 == 0) { goto _TL9D;
	    }
	    _throw_arraybounds();
	    goto _TL9E;
	    _TL9D: _TL9E: _TDA = _T173.curr;
	    _TDB = (char *)_TDA;
	    *_TDB = _T175;
	  }
	}
      }_IO_getc(fp);
      _TDC = _IO_peekc(fp);
      _TDD = - 1;
      if (_TDC != _TDD) { goto _TL9F;
      }
      seen_eof = seen_eof + 1;
      goto _TL8E;
      _TL9F: width = width + -1;
      goto _TL8F;
      _TL8E: if (! (flags & 128)) { goto _TLA1;
      }
      _TDE = p;
      _TDF = _TDE.curr;
      _TE0 = (char *)_TDF;
      _TE1 = buf;
      if (_TE0 <= _TE1) { goto _TLA3;
      }
      _TE2 = &p;
      _fat_ptr_inplace_plus(_TE2,sizeof(char),-1);
      _TE3 = p;
      _TE4 = _TE3.curr;
      _TE5 = (char *)_TE4;
      _TE6 = *_TE5;
      _TE7 = (int)_TE6;
      _TE8 = fp;
      _IO_ungetc(_TE7,_TE8);
      goto _TLA4;
      _TLA3: _TLA4: goto match_failure;
      _TLA1: _TE9 = p;
      _TEA = _TE9.curr;
      _TEB = (char *)_TEA;
      _TEC = - 1;
      _TED = _TEB[_TEC];
      c = (int)_TED;
      if (c == 120) { goto _TLA7;
      }else { goto _TLA8;
      }
      _TLA8: if (c == 88) { goto _TLA7;
      }else { goto _TLA5;
      }
      _TLA7: _TEE = &p;
      _fat_ptr_inplace_plus(_TEE,sizeof(char),-1);
      _IO_ungetc(c,fp);
      goto _TLA6;
      _TLA5: _TLA6: _TEF = flags & 8;
      if (_TEF != 0) { goto _TLA9;
      }
      { unsigned long res;
	{ struct _fat_ptr _T173 = p;
	  _TF0 = _T173.curr;
	  _TF1 = (char *)_TF0;
	  { char _T174 = *_TF1;
	    char _T175 = '\000';
	    _TF2 = _get_fat_size(_T173,sizeof(char));
	    if (_TF2 != 1U) { goto _TLAB;
	    }
	    if (_T174 != 0) { goto _TLAB;
	    }
	    if (_T175 == 0) { goto _TLAB;
	    }
	    _throw_arraybounds();
	    goto _TLAC;
	    _TLAB: _TLAC: _TF3 = _T173.curr;
	    _TF4 = (char *)_TF3;
	    *_TF4 = _T175;
	  }
	}_TF5 = use_strtoul;
	if (! _TF5) { goto _TLAD;
	}
	res = strtoul(buf,0,base);
	goto _TLAE;
	_TLAD: _TF6 = strtol(buf,0,base);
	res = (unsigned long)_TF6;
	_TLAE: if (! (flags & 16)) { goto _TLAF;
	}
	_TF7 = ap;
	_TF8 = _TF7.curr;
	_TF9 = (void * *)_TF8;
	_TFA = *_TF9;
	_TFB = Cyc_va_arg_int_ptr(_TFA);
	_TFC = res;
	*_TFB = (int)_TFC;
	goto _TLB0;
	_TLAF: if (! (flags & 4)) { goto _TLB1;
	}
	_TFD = ap;
	_TFE = _TFD.curr;
	_TFF = (void * *)_TFE;
	_T100 = *_TFF;
	_T101 = Cyc_va_arg_short_ptr(_T100);
	_T102 = res;
	*_T101 = (short)_T102;
	goto _TLB2;
	_TLB1: if (! (flags & 1)) { goto _TLB3;
	}
	_T103 = ap;
	_T104 = _T103.curr;
	_T105 = (void * *)_T104;
	_T106 = *_T105;
	_T107 = Cyc_va_arg_int_ptr(_T106);
	_T108 = res;
	*_T107 = (int)_T108;
	goto _TLB4;
	_TLB3: _T109 = ap;
	_T10A = _T109.curr;
	_T10B = (void * *)_T10A;
	_T10C = *_T10B;
	_T10D = Cyc_va_arg_int_ptr(_T10C);
	_T10E = res;
	*_T10D = (int)_T10E;
	_TLB4: _TLB2: _TLB0: _T10F = &ap;
	_fat_ptr_inplace_plus(_T10F,sizeof(void *),1);
	nassigned = nassigned + 1;
      }goto _TLAA;
      _TLA9: _TLAA: _T110 = p;
      _T111 = _T110.curr;
      _T112 = buf;
      _T113 = _tag_fat(_T112,sizeof(char),351U);
      _T114 = _T113.curr;
      _T115 = _T111 - _T114;
      _T116 = _T115 / sizeof(char);
      nread = nread + _T116;
      goto _LL47;
    case 4: 
      if (width == 0) { goto _TLB7;
      }else { goto _TLB8;
      }
      _TLB8: _T117 = width;
      _T118 = sizeof(buf);
      _T119 = _T118 - 1U;
      _T11A = (long long)_T119;
      if (_T117 > _T11A) { goto _TLB7;
      }else { goto _TLB5;
      }
      _TLB7: _T11B = sizeof(buf);
      _T11C = _T11B - 1U;
      width = (long long)_T11C;
      goto _TLB6;
      _TLB5: _TLB6: _T11D = 64 | 128;
      _T11E = _T11D | 256;
      _T11F = _T11E | 512;
      flags = flags | _T11F;
      _T120 = buf;
      p = _tag_fat(_T120,sizeof(char),351U);
      _TLBC: if (width != 0) { goto _TLBA;
      }else { goto _TLBB;
      }
      _TLBA: c = _IO_peekc(fp);
      _T121 = c;
      _T122 = (int)_T121;
      switch (_T122) {
      case 48: 
	goto _LL8F;
      case 49: 
	_LL8F: goto _LL91;
      case 50: 
	_LL91: goto _LL93;
      case 51: 
	_LL93: goto _LL95;
      case 52: 
	_LL95: goto _LL97;
      case 53: 
	_LL97: goto _LL99;
      case 54: 
	_LL99: goto _LL9B;
      case 55: 
	_LL9B: goto _LL9D;
      case 56: 
	_LL9D: goto _LL9F;
      case 57: 
	_LL9F: _T123 = 64 | 128;
	_T124 = ~ _T123;
	flags = flags & _T124;
	goto fok;
      case 43: 
	goto _LLA3;
      case 45: 
	_LLA3: if (! (flags & 64)) { goto _TLBE;
	}
	_T125 = ~ 64;
	flags = flags & _T125;
	goto fok;
	_TLBE: goto _LL8B;
      case 46: 
	if (! (flags & 256)) { goto _TLC0;
	}
	_T126 = 64 | 256;
	_T127 = ~ _T126;
	flags = flags & _T127;
	goto fok;
	_TLC0: goto _LL8B;
      case 101: 
	goto _LLA9;
      case 69: 
	_LLA9: _T128 = flags;
	_T129 = 128 | 512;
	_T12A = _T128 & _T129;
	if (_T12A != 512) { goto _TLC2;
	}
	_T12B = flags;
	_T12C = 512 | 256;
	_T12D = ~ _T12C;
	_T12E = _T12B & _T12D;
	_T12F = _T12E | 64;
	flags = _T12F | 128;
	goto fok;
	_TLC2: goto _LL8B;
      default: 
	goto _LL8B;
      }
      _LL8B: goto _TLBB;
      fok: _T130 = &p;
      { struct _fat_ptr _T173 = _fat_ptr_inplace_plus_post(_T130,sizeof(char),
							   1);
	_T131 = _check_fat_subscript(_T173,sizeof(char),0U);
	_T132 = (char *)_T131;
	{ char _T174 = *_T132;
	  _T133 = c;
	  { char _T175 = (char)_T133;
	    _T134 = _get_fat_size(_T173,sizeof(char));
	    if (_T134 != 1U) { goto _TLC4;
	    }
	    if (_T174 != 0) { goto _TLC4;
	    }
	    if (_T175 == 0) { goto _TLC4;
	    }
	    _throw_arraybounds();
	    goto _TLC5;
	    _TLC4: _TLC5: _T135 = _T173.curr;
	    _T136 = (char *)_T135;
	    *_T136 = _T175;
	  }
	}
      }_IO_getc(fp);
      _T137 = _IO_peekc(fp);
      _T138 = - 1;
      if (_T137 != _T138) { goto _TLC6;
      }
      seen_eof = seen_eof + 1;
      goto _TLBB;
      _TLC6: width = width + -1;
      goto _TLBC;
      _TLBB: if (! (flags & 128)) { goto _TLC8;
      }
      if (! (flags & 512)) { goto _TLCA;
      }
      _TLCC: _T139 = p;
      _T13A = _T139.curr;
      _T13B = (char *)_T13A;
      _T13C = buf;
      if (_T13B > _T13C) { goto _TLCD;
      }else { goto _TLCE;
      }
      _TLCD: _T13D = &p;
      _fat_ptr_inplace_plus(_T13D,sizeof(char),-1);
      _T13E = p;
      _T13F = _check_fat_subscript(_T13E,sizeof(char),0U);
      _T140 = (char *)_T13F;
      _T141 = *_T140;
      _T142 = (int)_T141;
      _T143 = fp;
      _IO_ungetc(_T142,_T143);
      goto _TLCC;
      _TLCE: goto match_failure;
      _TLCA: _T144 = &p;
      _fat_ptr_inplace_plus(_T144,sizeof(char),-1);
      _T145 = p;
      _T146 = _T145.curr;
      _T147 = (char *)_T146;
      _T148 = *_T147;
      c = (int)_T148;
      if (c == 101) { goto _TLCF;
      }
      if (c == 69) { goto _TLCF;
      }
      _IO_ungetc(c,fp);
      _T149 = &p;
      _fat_ptr_inplace_plus(_T149,sizeof(char),-1);
      _T14A = p;
      _T14B = _T14A.curr;
      _T14C = (char *)_T14B;
      _T14D = *_T14C;
      c = (int)_T14D;
      goto _TLD0;
      _TLCF: _TLD0: _IO_ungetc(c,fp);
      goto _TLC9;
      _TLC8: _TLC9: _T14E = flags & 8;
      if (_T14E != 0) { goto _TLD1;
      }
      { double res;
	{ struct _fat_ptr _T173 = p;
	  _T14F = _T173.curr;
	  _T150 = (char *)_T14F;
	  { char _T174 = *_T150;
	    char _T175 = '\000';
	    _T151 = _get_fat_size(_T173,sizeof(char));
	    if (_T151 != 1U) { goto _TLD3;
	    }
	    if (_T174 != 0) { goto _TLD3;
	    }
	    if (_T175 == 0) { goto _TLD3;
	    }
	    _throw_arraybounds();
	    goto _TLD4;
	    _TLD3: _TLD4: _T152 = _T173.curr;
	    _T153 = (char *)_T152;
	    *_T153 = _T175;
	  }
	}_T154 = buf;
	_T155 = (const char *)_T154;
	res = atof(_T155);
	if (! (flags & 1)) { goto _TLD5;
	}
	_T156 = ap;
	_T157 = _T156.curr;
	_T158 = (void * *)_T157;
	_T159 = *_T158;
	_T15A = Cyc_va_arg_double_ptr(_T159);
	*_T15A = res;
	goto _TLD6;
	_TLD5: _T15B = ap;
	_T15C = _T15B.curr;
	_T15D = (void * *)_T15C;
	_T15E = *_T15D;
	_T15F = Cyc_va_arg_float_ptr(_T15E);
	_T160 = res;
	*_T15F = (float)_T160;
	_TLD6: _T161 = &ap;
	_fat_ptr_inplace_plus(_T161,sizeof(void *),1);
	nassigned = nassigned + 1;
      }goto _TLD2;
      _TLD1: _TLD2: _T162 = p;
      _T163 = _T162.curr;
      _T164 = buf;
      _T165 = _tag_fat(_T164,sizeof(char),351U);
      _T166 = _T165.curr;
      _T167 = _T163 - _T166;
      _T168 = _T167 / sizeof(char);
      nread = nread + _T168;
      goto _LL47;
    default: 
      { struct Cyc_Core_Impossible_exn_struct * _T173 = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
	_T173->tag = Cyc_Core_Impossible;
	_T173->f1 = _tag_fat("scanf3",sizeof(char),7U);
	_T169 = (struct Cyc_Core_Impossible_exn_struct *)_T173;
      }_T16A = (void *)_T169;
      _throw(_T16A);
    }
    _LL47: _TLC: goto _TLF;
    _TLE: eof_failure: seen_eof = seen_eof + 1;
    if (nassigned != 0) { goto _TLD7;
    }
    nassigned = - 1;
    goto _TLD8;
    _TLD7: _TLD8: control_failure: match_failure: _T16B = errp;
    _T16C = (unsigned int)_T16B;
    if (! _T16C) { goto _TLD9;
    }
    _T16D = errp;
    *_T16D = *_T16D | 2;
    goto _TLDA;
    _TLD9: _TLDA: done: _T16E = errp;
    _T16F = (unsigned int)_T16E;
    if (! _T16F) { goto _TLDB;
    }
    _T170 = seen_eof;
    if (! _T170) { goto _TLDB;
    }
    _T171 = errp;
    *_T171 = *_T171 | 1;
    goto _TLDC;
    _TLDB: _TLDC: _T172 = nassigned;
    return _T172;
  }
}
static struct _fat_ptr Cyc___sccl(char * tab,struct _fat_ptr fmt) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  const char * _T3;
  char _T4;
  struct _fat_ptr * _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  const char * _T8;
  char _T9;
  char * _TA;
  int _TB;
  int _TC;
  struct _fat_ptr _TD;
  int _TE;
  struct _fat_ptr _TF;
  char * _T10;
  int _T11;
  char * _T12;
  char * _T13;
  int _T14;
  struct _fat_ptr * _T15;
  struct _fat_ptr _T16;
  unsigned char * _T17;
  const char * _T18;
  char _T19;
  int _T1A;
  int _T1B;
  struct _fat_ptr _T1C;
  int _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  unsigned char * _T20;
  const char * _T21;
  char _T22;
  struct _fat_ptr * _T23;
  char * _T24;
  int _T25;
  char * _T26;
  char * _T27;
  int _T28;
  struct _fat_ptr _T29;
  int c;
  int n;
  int v;
  _T0 = &fmt;
  _T1 = _fat_ptr_inplace_plus_post(_T0,sizeof(char),1);
  _T2 = _check_fat_subscript(_T1,sizeof(char),0U);
  _T3 = (const char *)_T2;
  _T4 = *_T3;
  c = (int)_T4;
  if (c != 94) { goto _TLDD;
  }
  v = 1;
  _T5 = &fmt;
  _T6 = _fat_ptr_inplace_plus_post(_T5,sizeof(char),1);
  _T7 = _check_fat_subscript(_T6,sizeof(char),0U);
  _T8 = (const char *)_T7;
  _T9 = *_T8;
  c = (int)_T9;
  goto _TLDE;
  _TLDD: v = 0;
  _TLDE: n = 0;
  _TLE2: if (n < 256) { goto _TLE0;
  }else { goto _TLE1;
  }
  _TLE0: _TA = tab;
  _TB = n;
  _TC = v;
  _TA[_TB] = (char)_TC;
  n = n + 1;
  goto _TLE2;
  _TLE1: if (c != 0) { goto _TLE3;
  }
  _TD = fmt;
  _TE = - 1;
  _TF = _fat_ptr_plus(_TD,sizeof(char),_TE);
  return _TF;
  _TLE3: v = 1 - v;
  _TLE8: if (1) { goto _TLE6;
  }else { goto _TLE7;
  }
  _TLE6: _T10 = tab;
  _T11 = c;
  _T12 = _check_known_subscript_notnull(_T10,256U,sizeof(char),_T11);
  _T13 = (char *)_T12;
  _T14 = v;
  *_T13 = (char)_T14;
  doswitch: _T15 = &fmt;
  _T16 = _fat_ptr_inplace_plus_post(_T15,sizeof(char),1);
  _T17 = _check_fat_subscript(_T16,sizeof(char),0U);
  _T18 = (const char *)_T17;
  _T19 = *_T18;
  n = (int)_T19;
  _T1A = n;
  _T1B = (int)_T1A;
  switch (_T1B) {
  case 0: 
    _T1C = fmt;
    _T1D = - 1;
    _T1E = _fat_ptr_plus(_T1C,sizeof(char),_T1D);
    return _T1E;
  case 45: 
    _T1F = fmt;
    _T20 = _check_fat_subscript(_T1F,sizeof(char),0U);
    _T21 = (const char *)_T20;
    _T22 = *_T21;
    n = (int)_T22;
    if (n == 93) { goto _TLEC;
    }else { goto _TLED;
    }
    _TLED: if (n < c) { goto _TLEC;
    }else { goto _TLEA;
    }
    _TLEC: c = 45;
    goto _LL0;
    _TLEA: _T23 = &fmt;
    _fat_ptr_inplace_plus(_T23,sizeof(char),1);
    _TLEE: _T24 = tab;
    c = c + 1;
    _T25 = c;
    _T26 = _check_known_subscript_notnull(_T24,256U,sizeof(char),_T25);
    _T27 = (char *)_T26;
    _T28 = v;
    *_T27 = (char)_T28;
    if (c < n) { goto _TLEE;
    }else { goto _TLEF;
    }
    _TLEF: goto doswitch;
    goto _LL0;
  case 93: 
    _T29 = fmt;
    return _T29;
  default: 
    c = n;
    goto _LL0;
  }
  _LL0: goto _TLE8;
  _TLE7: ;
}
static int Cyc_string_getc(struct _fat_ptr * sptr) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  char * _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  const char * _T8;
  char _T9;
  int _TA;
  int _TB;
  struct _fat_ptr * _TC;
  struct _fat_ptr _TD;
  char _TE;
  int _TF;
  char c;
  _T0 = sptr;
  { struct _fat_ptr s = *_T0;
    _T1 = s;
    _T2 = _T1.curr;
    _T3 = (char *)_T2;
    if (_T3 == 0) { goto _TLF2;
    }else { goto _TLF4;
    }
    _TLF4: _T4 = s;
    _T5 = _get_fat_size(_T4,sizeof(char));
    if (_T5 == 0U) { goto _TLF2;
    }else { goto _TLF3;
    }
    _TLF3: _T6 = s;
    _T7 = _T6.curr;
    _T8 = (const char *)_T7;
    c = _T8[0];
    _T9 = c;
    _TA = (int)_T9;
    if (_TA == 0) { goto _TLF2;
    }else { goto _TLF0;
    }
    _TLF2: _TB = - 1;
    return _TB;
    _TLF0: _TC = sptr;
    _TD = s;
    *_TC = _fat_ptr_plus(_TD,sizeof(char),1);
    _TE = c;
    _TF = (int)_TE;
    return _TF;
  }
}
static int Cyc_string_ungetc(int ignore,struct _fat_ptr * sptr) {
  struct _fat_ptr * _T0;
  struct _fat_ptr * _T1;
  struct _fat_ptr _T2;
  int _T3;
  _T0 = sptr;
  _T1 = sptr;
  _T2 = *_T1;
  _T3 = - 1;
  *_T0 = _fat_ptr_plus(_T2,sizeof(char),_T3);
  return 0;
}
static int Cyc_string_peekc(struct _fat_ptr * sptr) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  char * _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  const char * _T8;
  char _T9;
  int _TA;
  int _TB;
  char _TC;
  int _TD;
  char c;
  _T0 = sptr;
  { struct _fat_ptr s = *_T0;
    _T1 = s;
    _T2 = _T1.curr;
    _T3 = (char *)_T2;
    if (_T3 == 0) { goto _TLF7;
    }else { goto _TLF9;
    }
    _TLF9: _T4 = s;
    _T5 = _get_fat_size(_T4,sizeof(char));
    if (_T5 == 0U) { goto _TLF7;
    }else { goto _TLF8;
    }
    _TLF8: _T6 = s;
    _T7 = _T6.curr;
    _T8 = (const char *)_T7;
    c = _T8[0];
    _T9 = c;
    _TA = (int)_T9;
    if (_TA == 0) { goto _TLF7;
    }else { goto _TLF5;
    }
    _TLF7: _TB = - 1;
    return _TB;
    _TLF5: _TC = c;
    _TD = (int)_TC;
    return _TD;
  }
}
int Cyc_vsscanf(struct _fat_ptr src1,struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  int (* _T1)(int (*)(struct _fat_ptr *),int (*)(int,struct _fat_ptr *),int (*)(struct _fat_ptr *),
	      struct _fat_ptr *,struct _fat_ptr,struct _fat_ptr,int *);
  struct _fat_ptr * _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  int * _T6;
  int _T7;
  _T0 = src1;
  { struct _fat_ptr src = _T0;
    int err = 0;
    { int (* _T8)(int (*)(struct _fat_ptr *),int (*)(int,struct _fat_ptr *),
		  int (*)(struct _fat_ptr *),struct _fat_ptr *,struct _fat_ptr,
		  struct _fat_ptr,int *) = (int (*)(int (*)(struct _fat_ptr *),
						    int (*)(int,struct _fat_ptr *),
						    int (*)(struct _fat_ptr *),
						    struct _fat_ptr *,struct _fat_ptr,
						    struct _fat_ptr,int *))Cyc__IO_vfscanf;
      _T1 = _T8;
    }_T2 = &src;
    _T3 = (struct _fat_ptr *)_T2;
    _T4 = fmt;
    _T5 = ap;
    _T6 = &err;
    _T7 = _T1(Cyc_string_getc,Cyc_string_ungetc,Cyc_string_peekc,_T3,_T4,
	      _T5,_T6);
    return _T7;
  }
}
int Cyc_sscanf(struct _fat_ptr src,struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  _T0 = Cyc_vsscanf(src,fmt,ap);
  return _T0;
}
int Cyc_peekc(struct Cyc___cycFILE * stream) {
  int _T0;
  int c = Cyc_fgetc(stream);
  Cyc_ungetc(c,stream);
  _T0 = c;
  return _T0;
}
int Cyc_vfscanf(struct Cyc___cycFILE * stream,struct _fat_ptr fmt,struct _fat_ptr ap) {
  int (* _T0)(int (*)(struct Cyc___cycFILE *),int (*)(int,struct Cyc___cycFILE *),
	      int (*)(struct Cyc___cycFILE *),struct Cyc___cycFILE *,struct _fat_ptr,
	      struct _fat_ptr,int *);
  int (* _T1)(struct Cyc___cycFILE *);
  int (* _T2)(int,struct Cyc___cycFILE *);
  struct Cyc___cycFILE * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  int * _T6;
  int _T7;
  int err = 0;
  { int (* _T8)(int (*)(struct Cyc___cycFILE *),int (*)(int,struct Cyc___cycFILE *),
		int (*)(struct Cyc___cycFILE *),struct Cyc___cycFILE *,struct _fat_ptr,
		struct _fat_ptr,int *) = (int (*)(int (*)(struct Cyc___cycFILE *),
						  int (*)(int,struct Cyc___cycFILE *),
						  int (*)(struct Cyc___cycFILE *),
						  struct Cyc___cycFILE *,
						  struct _fat_ptr,struct _fat_ptr,
						  int *))Cyc__IO_vfscanf;
    _T0 = _T8;
  }_T1 = Cyc_getc;
  _T2 = Cyc_ungetc;
  _T3 = stream;
  _T4 = fmt;
  _T5 = ap;
  _T6 = &err;
  _T7 = _T0(_T1,_T2,Cyc_peekc,_T3,_T4,_T5,_T6);
  return _T7;
}
int Cyc_fscanf(struct Cyc___cycFILE * stream,struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  _T0 = Cyc_vfscanf(stream,fmt,ap);
  return _T0;
}
int Cyc_scanf(struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  _T0 = Cyc_vfscanf(Cyc_stdin,fmt,ap);
  return _T0;
}
