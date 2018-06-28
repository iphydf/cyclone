#include <cyc_include.h>
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stdout;
extern struct Cyc___cycFILE * Cyc_stderr;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_optarg;
extern int Cyc_optind;
 struct Cyc_option {
  struct _fat_ptr name;
  int has_arg;
  int * flag;
  int val;
};
extern int Cyc_getopt_long(int,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr,
			   int *);
extern void exit(int);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stdout;
extern struct Cyc___cycFILE * Cyc_stderr;
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
extern void exit(int);
extern struct _fat_ptr Cyc_spec_outfile;
extern struct _fat_ptr Cyc_spec_name_prefix;
extern struct _fat_ptr Cyc_spec_file_prefix;
extern struct _fat_ptr Cyc_infile;
int Cyc_verboseflag;
int Cyc_definesflag;
int Cyc_debugflag;
int Cyc_nolinesflag;
int Cyc_noparserflag = 0;
int Cyc_toknumflag = 0;
int Cyc_rawtoknumflag = 0;
struct _fat_ptr Cyc_spec_name_prefix;
struct _fat_ptr Cyc_spec_file_prefix;
extern int Cyc_fixed_outfiles;
extern struct _fat_ptr Cyc_program_name;
extern struct _fat_ptr Cyc_version_string;
static char _TmpG0[6U] = "debug";
static char _TmpG1[8U] = "defines";
static char _TmpG2[12U] = "file-prefix";
static char _TmpG3[19U] = "fixed-output-files";
static char _TmpG4[5U] = "help";
static char _TmpG5[12U] = "name-prefix";
static char _TmpG6[9U] = "no-lines";
static char _TmpG7[10U] = "no-parser";
static char _TmpG8[7U] = "output";
static char _TmpG9[12U] = "output-file";
static char _TmpGA[4U] = "raw";
static char _TmpGB[12U] = "token-table";
static char _TmpGC[8U] = "verbose";
static char _TmpGD[8U] = "version";
static char _TmpGE[5U] = "yacc";
struct Cyc_option Cyc_longopts[16U] = {{{(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
					 (unsigned char *)_TmpG0 + 6U},0,
					&Cyc_debugflag,1},
				       {{(unsigned char *)_TmpG1,(unsigned char *)_TmpG1,
					 (unsigned char *)_TmpG1 + 8U},0,
					&Cyc_definesflag,1},
				       {{(unsigned char *)_TmpG2,(unsigned char *)_TmpG2,
					 (unsigned char *)_TmpG2 + 12U},1,
					0,(int)'b'},
				       {{(unsigned char *)_TmpG3,(unsigned char *)_TmpG3,
					 (unsigned char *)_TmpG3 + 19U},0,
					&Cyc_fixed_outfiles,1},
				       {{(unsigned char *)_TmpG4,(unsigned char *)_TmpG4,
					 (unsigned char *)_TmpG4 + 5U},0,
					0,(int)'h'},
				       {{(unsigned char *)_TmpG5,(unsigned char *)_TmpG5,
					 (unsigned char *)_TmpG5 + 12U},1,
					0,(int)'p'},
				       {{(unsigned char *)_TmpG6,(unsigned char *)_TmpG6,
					 (unsigned char *)_TmpG6 + 9U},0,
					&Cyc_nolinesflag,1},
				       {{(unsigned char *)_TmpG7,(unsigned char *)_TmpG7,
					 (unsigned char *)_TmpG7 + 10U},0,
					&Cyc_noparserflag,1},
				       {{(unsigned char *)_TmpG8,(unsigned char *)_TmpG8,
					 (unsigned char *)_TmpG8 + 7U},1,
					0,(int)'o'},
				       {{(unsigned char *)_TmpG9,(unsigned char *)_TmpG9,
					 (unsigned char *)_TmpG9 + 12U},1,
					0,(int)'o'},
				       {{(unsigned char *)_TmpGA,(unsigned char *)_TmpGA,
					 (unsigned char *)_TmpGA + 4U},0,
					&Cyc_rawtoknumflag,1},
				       {{(unsigned char *)_TmpGB,(unsigned char *)_TmpGB,
					 (unsigned char *)_TmpGB + 12U},0,
					&Cyc_toknumflag,1},
				       {{(unsigned char *)_TmpGC,(unsigned char *)_TmpGC,
					 (unsigned char *)_TmpGC + 8U},0,
					&Cyc_verboseflag,1},
				       {{(unsigned char *)_TmpGD,(unsigned char *)_TmpGD,
					 (unsigned char *)_TmpGD + 8U},0,
					0,(int)'V'},
				       {{(unsigned char *)_TmpGE,(unsigned char *)_TmpGE,
					 (unsigned char *)_TmpGE + 5U},0,
					&Cyc_fixed_outfiles,1},
				       {{(void *)0,(void *)0,(void *)(0 + 0)},
					0,0,0}};
void Cyc_usage(struct Cyc___cycFILE * stream) {
  struct Cyc_String_pa_PrintArg_struct _T0;
  struct Cyc___cycFILE * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  { struct Cyc_String_pa_PrintArg_struct _T4;
    _T4.tag = 0;
    _T4.f1 = Cyc_program_name;
    _T0 = _T4;
  }{ struct Cyc_String_pa_PrintArg_struct _T4 = _T0;
    void * _T5[1];
    _T5[0] = &_T4;
    _T1 = stream;
    _T2 = _tag_fat("Usage: %s [-dhklnTvyv] [-b file-prefix] [-o outfile] [-p name-prefix]\n       [--debug] [--defines] [--fixed-output-files] [--no-lines]\n       [--verbose] [--version] [--help] [--yacc]\n       [--no-parser] [--token-table]\n       [--file-prefix=prefix] [--name-prefix=prefix]\n       [--output=outfile] grammar-file\n",
		   sizeof(char),314U);
    _T3 = _tag_fat(_T5,sizeof(void *),1);
    Cyc_fprintf(_T1,_T2,_T3);
  }
}
void Cyc_getargs(int argc,struct _fat_ptr argv) {
  int _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_option * _T3;
  struct _fat_ptr _T4;
  int _T5;
  int _T6;
  int _T7;
  int _T8;
  struct Cyc_String_pa_PrintArg_struct _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct Cyc_String_pa_PrintArg_struct _TC;
  struct Cyc___cycFILE * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  int _T10;
  int _T11;
  struct Cyc_String_pa_PrintArg_struct _T12;
  struct Cyc_String_pa_PrintArg_struct _T13;
  struct _fat_ptr _T14;
  int _T15;
  unsigned char * _T16;
  struct _fat_ptr * _T17;
  struct Cyc___cycFILE * _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  int _T1C;
  unsigned char * _T1D;
  struct _fat_ptr * _T1E;
  register int c;
  Cyc_verboseflag = 0;
  Cyc_definesflag = 0;
  Cyc_debugflag = 0;
  Cyc_noparserflag = 0;
  Cyc_rawtoknumflag = 0;
  Cyc_toknumflag = 0;
  Cyc_fixed_outfiles = 0;
  _TL0: _T0 = argc;
  _T1 = argv;
  _T2 = _tag_fat("yvdhrltknVo:b:p:",sizeof(char),17U);
  _T3 = Cyc_longopts;
  _T4 = _tag_fat(_T3,sizeof(struct Cyc_option),16U);
  c = Cyc_getopt_long(_T0,_T1,_T2,_T4,0);
  _T5 = c;
  _T6 = - 1;
  if (_T5 != _T6) { goto _TL1;
  }else { goto _TL2;
  }
  _TL1: _T7 = c;
  _T8 = (int)_T7;
  switch (_T8) {
  case 0: 
    goto _LL0;
  case 121: 
    Cyc_fixed_outfiles = 1;
    goto _LL0;
  case 104: 
    Cyc_usage(Cyc_stdout);
    exit(0);
    goto _LL0;
  case 86: 
    { struct Cyc_String_pa_PrintArg_struct _T1F;
      _T1F.tag = 0;
      _T1F.f1 = Cyc_version_string;
      _T9 = _T1F;
    }{ struct Cyc_String_pa_PrintArg_struct _T1F = _T9;
      void * _T20[1];
      _T20[0] = &_T1F;
      _TA = _tag_fat("%s",sizeof(char),3U);
      _TB = _tag_fat(_T20,sizeof(void *),1);
      Cyc_printf(_TA,_TB);
    }exit(0);
    goto _LL0;
  case 118: 
    Cyc_verboseflag = 1;
    goto _LL0;
  case 100: 
    Cyc_definesflag = 1;
    goto _LL0;
  case 108: 
    Cyc_nolinesflag = 1;
    goto _LL0;
  case 107: 
    Cyc_toknumflag = 1;
    goto _LL0;
  case 114: 
    Cyc_rawtoknumflag = 1;
    goto _LL0;
  case 110: 
    Cyc_noparserflag = 1;
    goto _LL0;
  case 116: 
    Cyc_debugflag = 1;
    goto _LL0;
  case 111: 
    Cyc_spec_outfile = Cyc_optarg;
    goto _LL0;
  case 98: 
    Cyc_spec_file_prefix = Cyc_optarg;
    goto _LL0;
  case 112: 
    Cyc_spec_name_prefix = Cyc_optarg;
    goto _LL0;
  default: 
    Cyc_usage(Cyc_stderr);
    exit(1);
    goto _LL0;
  }
  _LL0: goto _TL0;
  _TL2: if (Cyc_optind != argc) { goto _TL4;
  }
  { struct Cyc_String_pa_PrintArg_struct _T1F;
    _T1F.tag = 0;
    _T1F.f1 = Cyc_program_name;
    _TC = _T1F;
  }{ struct Cyc_String_pa_PrintArg_struct _T1F = _TC;
    void * _T20[1];
    _T20[0] = &_T1F;
    _TD = Cyc_stderr;
    _TE = _tag_fat("%s: no grammar file given\n",sizeof(char),27U);
    _TF = _tag_fat(_T20,sizeof(void *),1);
    Cyc_fprintf(_TD,_TE,_TF);
  }exit(1);
  goto _TL5;
  _TL4: _TL5: _T10 = Cyc_optind;
  _T11 = argc - 1;
  if (_T10 >= _T11) { goto _TL6;
  }
  { struct Cyc_String_pa_PrintArg_struct _T1F;
    _T1F.tag = 0;
    _T1F.f1 = Cyc_program_name;
    _T12 = _T1F;
  }{ struct Cyc_String_pa_PrintArg_struct _T1F = _T12;
    { struct Cyc_String_pa_PrintArg_struct _T20;
      _T20.tag = 0;
      _T14 = argv;
      _T15 = Cyc_optind;
      _T16 = _check_fat_subscript(_T14,sizeof(struct _fat_ptr),_T15);
      _T17 = (struct _fat_ptr *)_T16;
      _T20.f1 = *_T17;
      _T13 = _T20;
    }{ struct Cyc_String_pa_PrintArg_struct _T20 = _T13;
      void * _T21[2];
      _T21[0] = &_T1F;
      _T21[1] = &_T20;
      _T18 = Cyc_stderr;
      _T19 = _tag_fat("%s: extra arguments ignored after '%s'\n",sizeof(char),
		      40U);
      _T1A = _tag_fat(_T21,sizeof(void *),2);
      Cyc_fprintf(_T18,_T19,_T1A);
    }
  }goto _TL7;
  _TL6: _TL7: _T1B = argv;
  _T1C = Cyc_optind;
  _T1D = _check_fat_subscript(_T1B,sizeof(struct _fat_ptr),_T1C);
  _T1E = (struct _fat_ptr *)_T1D;
  Cyc_infile = *_T1E;
}
