#include <cyc_include.h>
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fclose(struct Cyc___cycFILE *);
extern int Cyc_fflush(struct Cyc___cycFILE *);
extern struct Cyc___cycFILE * Cyc_fopen(const char *,const char *);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int Cyc_getc(struct Cyc___cycFILE *);
extern void perror(const char *);
extern int Cyc_putc(int,struct Cyc___cycFILE *);
extern void Cyc_rewind(struct Cyc___cycFILE *);
extern void exit(int);
extern int unlink(const char *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fclose(struct Cyc___cycFILE *);
extern int Cyc_fflush(struct Cyc___cycFILE *);
extern struct Cyc___cycFILE * Cyc_fopen(const char *,const char *);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int Cyc_getc(struct Cyc___cycFILE *);
extern int Cyc_putc(int,struct Cyc___cycFILE *);
extern void exit(int);
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strncmp(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);
extern struct Cyc___cycFILE * Cyc_finput;
extern struct Cyc___cycFILE * Cyc_foutput;
extern struct Cyc___cycFILE * Cyc_fdefines;
extern struct Cyc___cycFILE * Cyc_ftable;
extern struct Cyc___cycFILE * Cyc_fattrs;
extern struct Cyc___cycFILE * Cyc_fattrs0;
extern struct Cyc___cycFILE * Cyc_fguard;
extern struct Cyc___cycFILE * Cyc_faction;
extern struct _fat_ptr Cyc_spec_outfile;
extern struct _fat_ptr Cyc_spec_file_prefix;
extern struct _fat_ptr Cyc_infile;
extern struct _fat_ptr Cyc_outfile;
extern struct _fat_ptr Cyc_defsfile;
extern struct _fat_ptr Cyc_tabfile;
extern struct _fat_ptr Cyc_attrsfile;
extern struct _fat_ptr Cyc_attrs0file;
extern struct _fat_ptr Cyc_guardfile;
extern struct _fat_ptr Cyc_actfile;
struct Cyc___cycFILE * Cyc_finput = 0;
struct Cyc___cycFILE * Cyc_foutput = 0;
struct Cyc___cycFILE * Cyc_fdefines = 0;
struct Cyc___cycFILE * Cyc_ftable = 0;
struct Cyc___cycFILE * Cyc_fattrs = 0;
struct Cyc___cycFILE * Cyc_fattrs0 = 0;
struct Cyc___cycFILE * Cyc_fguard = 0;
struct Cyc___cycFILE * Cyc_faction = 0;
struct _fat_ptr Cyc_spec_outfile;
struct _fat_ptr Cyc_infile;
struct _fat_ptr Cyc_outfile;
struct _fat_ptr Cyc_defsfile;
struct _fat_ptr Cyc_tabfile;
struct _fat_ptr Cyc_attrsfile;
struct _fat_ptr Cyc_attrs0file;
struct _fat_ptr Cyc_guardfile;
struct _fat_ptr Cyc_actfile;
struct _fat_ptr Cyc_tmpattrsfile;
struct _fat_ptr Cyc_tmpattrs0file;
struct _fat_ptr Cyc_tmptabfile;
struct _fat_ptr Cyc_tmpdefsfile;
extern int Cyc_noparserflag;
struct Cyc___cycFILE * Cyc_tryopen(struct _fat_ptr,const char *);
void Cyc_done(int);
extern struct _fat_ptr Cyc_program_name;
extern int Cyc_verboseflag;
extern int Cyc_definesflag;
int Cyc_fixed_outfiles = 0;
struct _fat_ptr Cyc_stringappend(struct _fat_ptr string1,int end1,struct _fat_ptr string2) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned long _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr ostring;
  _T0 = string1;
  _T1 = end1;
  _T2 = (unsigned long)_T1;
  _T3 = Cyc_substring(_T0,0,_T2);
  _T4 = string2;
  ostring = Cyc_strconcat(_T3,_T4);
  _T5 = ostring;
  return _T5;
}
void Cyc_openfiles() {
  unsigned long _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  unsigned int _T3;
  unsigned long _T4;
  struct _fat_ptr _T5;
  int _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  int _T9;
  struct _fat_ptr _TA;
  int _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  int _TE;
  struct _fat_ptr _TF;
  unsigned char * _T10;
  unsigned int _T11;
  unsigned long _T12;
  struct _fat_ptr _T13;
  struct Cyc_String_pa_PrintArg_struct _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct _fat_ptr _T17;
  int _T18;
  struct _fat_ptr _T19;
  unsigned long _T1A;
  struct _fat_ptr _T1B;
  int _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  int _T1F;
  struct _fat_ptr _T20;
  int _T21;
  struct _fat_ptr _T22;
  int _T23;
  struct _fat_ptr _T24;
  int _T25;
  struct _fat_ptr _T26;
  int _T27;
  struct _fat_ptr _T28;
  int _T29;
  struct _fat_ptr _T2A;
  int _T2B;
  struct _fat_ptr _T2C;
  int _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr _T2F;
  int _T30;
  struct _fat_ptr _T31;
  struct _fat_ptr _T32;
  int _T33;
  struct _fat_ptr _T34;
  struct _fat_ptr _T35;
  int _T36;
  struct _fat_ptr _T37;
  struct _fat_ptr _T38;
  int _T39;
  struct _fat_ptr _T3A;
  int _T3B;
  int _T3C;
  struct _fat_ptr _T3D;
  int _T3E;
  struct _fat_ptr _T3F;
  int _T40;
  struct _fat_ptr _T41;
  unsigned char * _T42;
  unsigned char * _T43;
  const char * _T44;
  struct _fat_ptr _T45;
  unsigned char * _T46;
  unsigned char * _T47;
  const char * _T48;
  struct _fat_ptr _T49;
  unsigned char * _T4A;
  unsigned char * _T4B;
  const char * _T4C;
  struct _fat_ptr _T4D;
  unsigned char * _T4E;
  unsigned char * _T4F;
  const char * _T50;
  struct _fat_ptr _T51;
  unsigned char * _T52;
  unsigned char * _T53;
  const char * _T54;
  struct _fat_ptr _T55;
  unsigned char * _T56;
  unsigned int _T57;
  struct _fat_ptr _T58;
  int _T59;
  struct _fat_ptr _T5A;
  struct _fat_ptr _T5B;
  int _T5C;
  struct _fat_ptr _T5D;
  struct _fat_ptr _T5E;
  int _T5F;
  struct _fat_ptr _T60;
  struct _fat_ptr _T61;
  int _T62;
  struct _fat_ptr _T63;
  struct _fat_ptr name_base;
  int base_length;
  int short_base_length;
  struct _fat_ptr tmp_base = _tag_fat("/tmp/b.",sizeof(char),8U);
  int tmp_len;
  _T0 = Cyc_strlen(tmp_base);
  tmp_len = (int)_T0;
  _T1 = Cyc_spec_outfile;
  _T2 = _T1.curr;
  _T3 = (unsigned int)_T2;
  if (! _T3) { goto _TL0;
  }
  name_base = Cyc_spec_outfile;
  _T4 = Cyc_strlen(name_base);
  base_length = (int)_T4;
  _T5 = name_base;
  _T6 = base_length - 4;
  _T7 = _fat_ptr_plus(_T5,sizeof(char),_T6);
  _T8 = _tag_fat(".cyc",sizeof(char),5U);
  _T9 = Cyc_strcmp(_T7,_T8);
  if (_T9) { goto _TL2;
  }else { goto _TL4;
  }
  _TL4: base_length = base_length - 4;
  goto _TL3;
  _TL2: _TL3: short_base_length = base_length;
  _TA = name_base;
  _TB = short_base_length - 4;
  _TC = _fat_ptr_plus(_TA,sizeof(char),_TB);
  _TD = _tag_fat("_tab",sizeof(char),5U);
  _TE = Cyc_strncmp(_TC,_TD,4U);
  if (_TE) { goto _TL5;
  }else { goto _TL7;
  }
  _TL7: short_base_length = short_base_length - 4;
  goto _TL6;
  _TL5: _TL6: goto _TL1;
  _TL0: _TF = Cyc_spec_file_prefix;
  _T10 = _TF.curr;
  _T11 = (unsigned int)_T10;
  if (! _T11) { goto _TL8;
  }
  _T12 = Cyc_strlen(Cyc_spec_file_prefix);
  short_base_length = (int)_T12;
  base_length = short_base_length + 4;
  { struct Cyc_String_pa_PrintArg_struct _T64;
    _T64.tag = 0;
    _T64.f1 = Cyc_spec_file_prefix;
    _T14 = _T64;
  }{ struct Cyc_String_pa_PrintArg_struct _T64 = _T14;
    void * _T65[1];
    _T65[0] = &_T64;
    _T15 = _tag_fat("%s_tab",sizeof(char),7U);
    _T16 = _tag_fat(_T65,sizeof(void *),1);
    _T13 = Cyc_aprintf(_T15,_T16);
  }name_base = _T13;
  goto _TL9;
  _TL8: _T18 = Cyc_fixed_outfiles;
  if (! _T18) { goto _TLA;
  }
  _T19 = _tag_fat("y.y",sizeof(char),4U);
  _T17 = Cyc_strdup(_T19);
  goto _TLB;
  _TLA: _T17 = Cyc_infile;
  _TLB: name_base = _T17;
  _T1A = Cyc_strlen(name_base);
  base_length = (int)_T1A;
  _T1B = name_base;
  _T1C = base_length - 2;
  _T1D = _fat_ptr_plus(_T1B,sizeof(char),_T1C);
  _T1E = _tag_fat(".y",sizeof(char),3U);
  _T1F = Cyc_strcmp(_T1D,_T1E);
  if (_T1F) { goto _TLC;
  }else { goto _TLE;
  }
  _TLE: base_length = base_length - 2;
  goto _TLD;
  _TLC: _TLD: short_base_length = base_length;
  _T20 = name_base;
  _T21 = short_base_length;
  _T22 = _tag_fat("_tab",sizeof(char),5U);
  name_base = Cyc_stringappend(_T20,_T21,_T22);
  base_length = short_base_length + 4;
  _TL9: _TL1: Cyc_finput = Cyc_tryopen(Cyc_infile,"r");
  _T23 = Cyc_verboseflag;
  if (! _T23) { goto _TLF;
  }
  _T24 = name_base;
  _T25 = short_base_length;
  _T26 = _tag_fat(".output",sizeof(char),8U);
  Cyc_outfile = Cyc_stringappend(_T24,_T25,_T26);
  Cyc_foutput = Cyc_tryopen(Cyc_outfile,"w");
  goto _TL10;
  _TLF: _TL10: _T27 = Cyc_noparserflag;
  if (! _T27) { goto _TL11;
  }
  _T28 = name_base;
  _T29 = short_base_length;
  _T2A = _tag_fat(".act",sizeof(char),5U);
  Cyc_actfile = Cyc_stringappend(_T28,_T29,_T2A);
  Cyc_faction = Cyc_tryopen(Cyc_actfile,"w");
  goto _TL12;
  _TL11: _TL12: _T2B = Cyc_noparserflag;
  if (_T2B) { goto _TL13;
  }else { goto _TL15;
  }
  _TL15: _T2C = tmp_base;
  _T2D = tmp_len;
  _T2E = _tag_fat("act.XXXXXX",sizeof(char),11U);
  Cyc_actfile = Cyc_stringappend(_T2C,_T2D,_T2E);
  goto _TL14;
  _TL13: _TL14: _T2F = tmp_base;
  _T30 = tmp_len;
  _T31 = _tag_fat("attrs.XXXXXX",sizeof(char),13U);
  Cyc_tmpattrsfile = Cyc_stringappend(_T2F,_T30,_T31);
  _T32 = tmp_base;
  _T33 = tmp_len;
  _T34 = _tag_fat("attrs0.XXXXXX",sizeof(char),14U);
  Cyc_tmpattrs0file = Cyc_stringappend(_T32,_T33,_T34);
  _T35 = tmp_base;
  _T36 = tmp_len;
  _T37 = _tag_fat("tab.XXXXXX",sizeof(char),11U);
  Cyc_tmptabfile = Cyc_stringappend(_T35,_T36,_T37);
  _T38 = tmp_base;
  _T39 = tmp_len;
  _T3A = _tag_fat("defs.XXXXXX",sizeof(char),12U);
  Cyc_tmpdefsfile = Cyc_stringappend(_T38,_T39,_T3A);
  _T3B = Cyc_noparserflag;
  if (_T3B) { goto _TL16;
  }else { goto _TL18;
  }
  _TL18: Cyc_faction = Cyc_tryopen(Cyc_actfile,"w+");
  goto _TL17;
  _TL16: _TL17: Cyc_fattrs = Cyc_tryopen(Cyc_tmpattrsfile,"w+");
  Cyc_fattrs0 = Cyc_tryopen(Cyc_tmpattrs0file,"w+");
  Cyc_ftable = Cyc_tryopen(Cyc_tmptabfile,"w+");
  _T3C = Cyc_definesflag;
  if (! _T3C) { goto _TL19;
  }
  _T3D = name_base;
  _T3E = base_length;
  _T3F = _tag_fat(".h",sizeof(char),3U);
  Cyc_defsfile = Cyc_stringappend(_T3D,_T3E,_T3F);
  Cyc_fdefines = Cyc_tryopen(Cyc_tmpdefsfile,"w+");
  goto _TL1A;
  _TL19: _TL1A: _T40 = Cyc_noparserflag;
  if (_T40) { goto _TL1B;
  }else { goto _TL1D;
  }
  _TL1D: _T41 = Cyc_actfile;
  _T42 = _untag_fat_ptr_check_bound(_T41,sizeof(char),1U);
  _T43 = _check_null(_T42);
  _T44 = (const char *)_T43;
  unlink(_T44);
  goto _TL1C;
  _TL1B: _TL1C: _T45 = Cyc_tmpattrsfile;
  _T46 = _untag_fat_ptr_check_bound(_T45,sizeof(char),1U);
  _T47 = _check_null(_T46);
  _T48 = (const char *)_T47;
  unlink(_T48);
  _T49 = Cyc_tmpattrs0file;
  _T4A = _untag_fat_ptr_check_bound(_T49,sizeof(char),1U);
  _T4B = _check_null(_T4A);
  _T4C = (const char *)_T4B;
  unlink(_T4C);
  _T4D = Cyc_tmptabfile;
  _T4E = _untag_fat_ptr_check_bound(_T4D,sizeof(char),1U);
  _T4F = _check_null(_T4E);
  _T50 = (const char *)_T4F;
  unlink(_T50);
  _T51 = Cyc_tmpdefsfile;
  _T52 = _untag_fat_ptr_check_bound(_T51,sizeof(char),1U);
  _T53 = _check_null(_T52);
  _T54 = (const char *)_T53;
  unlink(_T54);
  _T55 = Cyc_spec_outfile;
  _T56 = _T55.curr;
  _T57 = (unsigned int)_T56;
  if (! _T57) { goto _TL1E;
  }
  Cyc_tabfile = Cyc_spec_outfile;
  goto _TL1F;
  _TL1E: _T58 = name_base;
  _T59 = base_length;
  _T5A = _tag_fat(".cyc",sizeof(char),5U);
  Cyc_tabfile = Cyc_stringappend(_T58,_T59,_T5A);
  _TL1F: _T5B = name_base;
  _T5C = short_base_length;
  _T5D = _tag_fat(".stype.h",sizeof(char),9U);
  Cyc_attrsfile = Cyc_stringappend(_T5B,_T5C,_T5D);
  _T5E = name_base;
  _T5F = short_base_length;
  _T60 = _tag_fat(".stype0.h",sizeof(char),10U);
  Cyc_attrs0file = Cyc_stringappend(_T5E,_T5F,_T60);
  _T61 = name_base;
  _T62 = short_base_length;
  _T63 = _tag_fat(".guard.c",sizeof(char),9U);
  Cyc_guardfile = Cyc_stringappend(_T61,_T62,_T63);
}
void Cyc_open_extra_files() {
  struct Cyc___cycFILE * _T0;
  struct Cyc___cycFILE * _T1;
  int _T2;
  int _T3;
  struct Cyc___cycFILE * _T4;
  struct Cyc___cycFILE * ftmp;
  int c;
  ftmp = Cyc_tryopen(Cyc_attrsfile,"w");
  _T0 = _check_null(Cyc_fattrs);
  Cyc_rewind(_T0);
  _TL20: _T1 = _check_null(Cyc_fattrs);
  c = Cyc_getc(_T1);
  _T2 = c;
  _T3 = - 1;
  if (_T2 != _T3) { goto _TL21;
  }else { goto _TL22;
  }
  _TL21: Cyc_putc(c,ftmp);
  goto _TL20;
  _TL22: _T4 = _check_null(Cyc_fattrs);
  Cyc_fclose(_T4);
  Cyc_fattrs = ftmp;
  Cyc_fguard = Cyc_tryopen(Cyc_guardfile,"w");
}
struct Cyc___cycFILE * Cyc_tryopen(struct _fat_ptr name,const char * mode) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  unsigned char * _T2;
  const char * _T3;
  const char * _T4;
  struct Cyc_String_pa_PrintArg_struct _T5;
  struct Cyc___cycFILE * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  unsigned char * _TA;
  const char * _TB;
  struct Cyc___cycFILE * _TC;
  struct Cyc___cycFILE * ptr;
  _T0 = name;
  _T1 = _untag_fat_ptr_check_bound(_T0,sizeof(char),1U);
  _T2 = _check_null(_T1);
  _T3 = (const char *)_T2;
  _T4 = mode;
  ptr = Cyc_fopen(_T3,_T4);
  if (ptr != 0) { goto _TL23;
  }
  { struct Cyc_String_pa_PrintArg_struct _TD;
    _TD.tag = 0;
    _TD.f1 = Cyc_program_name;
    _T5 = _TD;
  }{ struct Cyc_String_pa_PrintArg_struct _TD = _T5;
    void * _TE[1];
    _TE[0] = &_TD;
    _T6 = Cyc_stderr;
    _T7 = _tag_fat("%s: ",sizeof(char),5U);
    _T8 = _tag_fat(_TE,sizeof(void *),1);
    Cyc_fprintf(_T6,_T7,_T8);
  }_T9 = name;
  _TA = _untag_fat_ptr(_T9,sizeof(char),1U);
  _TB = (const char *)_TA;
  perror(_TB);
  Cyc_done(2);
  goto _TL24;
  _TL23: _TL24: _TC = ptr;
  return _TC;
}
void Cyc_done(int k) {
  struct Cyc___cycFILE * _T0;
  unsigned int _T1;
  struct Cyc___cycFILE * _T2;
  unsigned int _T3;
  struct Cyc___cycFILE * _T4;
  unsigned int _T5;
  struct Cyc___cycFILE * _T6;
  unsigned int _T7;
  struct Cyc___cycFILE * _T8;
  unsigned int _T9;
  struct Cyc___cycFILE * _TA;
  unsigned int _TB;
  struct Cyc___cycFILE * _TC;
  struct Cyc___cycFILE * _TD;
  int _TE;
  int _TF;
  struct Cyc___cycFILE * _T10;
  int _T11;
  struct Cyc___cycFILE * _T12;
  struct Cyc___cycFILE * _T13;
  int _T14;
  int _T15;
  struct Cyc___cycFILE * _T16;
  _T0 = Cyc_faction;
  _T1 = (unsigned int)_T0;
  if (! _T1) { goto _TL25;
  }
  Cyc_fclose(Cyc_faction);
  goto _TL26;
  _TL25: _TL26: _T2 = Cyc_fattrs;
  _T3 = (unsigned int)_T2;
  if (! _T3) { goto _TL27;
  }
  Cyc_fclose(Cyc_fattrs);
  goto _TL28;
  _TL27: _TL28: _T4 = Cyc_fattrs0;
  _T5 = (unsigned int)_T4;
  if (! _T5) { goto _TL29;
  }
  Cyc_fclose(Cyc_fattrs0);
  goto _TL2A;
  _TL29: _TL2A: _T6 = Cyc_fguard;
  _T7 = (unsigned int)_T6;
  if (! _T7) { goto _TL2B;
  }
  Cyc_fclose(Cyc_fguard);
  goto _TL2C;
  _TL2B: _TL2C: _T8 = Cyc_finput;
  _T9 = (unsigned int)_T8;
  if (! _T9) { goto _TL2D;
  }
  Cyc_fclose(Cyc_finput);
  goto _TL2E;
  _TL2D: _TL2E: _TA = Cyc_foutput;
  _TB = (unsigned int)_TA;
  if (! _TB) { goto _TL2F;
  }
  Cyc_fclose(Cyc_foutput);
  goto _TL30;
  _TL2F: _TL30: if (k != 0) { goto _TL31;
  }
  if (Cyc_ftable == 0) { goto _TL31;
  }
  { struct Cyc___cycFILE * ftmp;
    register int c;
    ftmp = Cyc_tryopen(Cyc_tabfile,"w");
    _TC = _check_null(Cyc_ftable);
    Cyc_rewind(_TC);
    _TL33: _TD = _check_null(Cyc_ftable);
    c = Cyc_getc(_TD);
    _TE = c;
    _TF = - 1;
    if (_TE != _TF) { goto _TL34;
    }else { goto _TL35;
    }
    _TL34: Cyc_putc(c,ftmp);
    goto _TL33;
    _TL35: Cyc_fclose(ftmp);
    _T10 = _check_null(Cyc_ftable);
    Cyc_fclose(_T10);
    _T11 = Cyc_definesflag;
    if (! _T11) { goto _TL36;
    }
    ftmp = Cyc_tryopen(Cyc_defsfile,"w");
    Cyc_fflush(Cyc_fdefines);
    _T12 = _check_null(Cyc_fdefines);
    Cyc_rewind(_T12);
    _TL38: _T13 = _check_null(Cyc_fdefines);
    c = Cyc_getc(_T13);
    _T14 = c;
    _T15 = - 1;
    if (_T14 != _T15) { goto _TL39;
    }else { goto _TL3A;
    }
    _TL39: Cyc_putc(c,ftmp);
    goto _TL38;
    _TL3A: Cyc_fclose(ftmp);
    _T16 = _check_null(Cyc_fdefines);
    Cyc_fclose(_T16);
    goto _TL37;
    _TL36: _TL37: ;
  }goto _TL32;
  _TL31: _TL32: exit(k);
}