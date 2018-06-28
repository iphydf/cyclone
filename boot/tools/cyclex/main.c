#include <cyc_include.h>
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
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int remove(const char *);
extern struct Cyc___cycFILE * Cyc_file_open(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_Filename_chop_extension(struct _fat_ptr);
extern long Cyc_Filename_check_suffix(struct _fat_ptr,struct _fat_ptr);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int remove(const char *);
extern struct Cyc___cycFILE * Cyc_file_open(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Syntax_Location {
  int start_pos;
  int end_pos;
  int start_line;
  int start_col;
};
 struct Cyc_Syntax_Lexer_definition {
  struct Cyc_Syntax_Location * header;
  struct Cyc_List_List * entrypoints;
  struct Cyc_Syntax_Location * trailer;
};
extern struct Cyc_Syntax_Lexer_definition * Cyc_Parser_parse_file(struct Cyc___cycFILE *);
extern char Cyc_Parser_Parser_error[13U];
 struct Cyc_Parser_Parser_error_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Lexer_Lexical_error[14U];
 struct Cyc_Lexer_Lexical_error_exn_struct {
  char * tag;
  struct _fat_ptr f1;
  int f2;
  int f3;
};
extern int Cyc_Lexer_line_num;
 struct _tuple5 {
  struct Cyc_List_List * f0;
  struct _fat_ptr f1;
};
extern struct _tuple5 * Cyc_Lexgen_make_dfa(struct Cyc_Syntax_Lexer_definition *);
 struct Cyc_Compact_Lex_tables {
  struct _fat_ptr base;
  struct _fat_ptr backtrk;
  struct _fat_ptr defaultX;
  struct _fat_ptr trans;
  struct _fat_ptr check;
};
extern struct Cyc_Compact_Lex_tables * Cyc_Compact_compact_tables(struct _fat_ptr);
extern void Cyc_Output_output_lexdef(struct _fat_ptr,struct Cyc___cycFILE *,
				     struct Cyc___cycFILE *,struct Cyc_Syntax_Location *,
				     struct Cyc_Compact_Lex_tables *,struct Cyc_List_List *,
				     struct Cyc_Syntax_Location *);
extern char Cyc_Output_Table_overflow[15U];
 struct Cyc_Output_Table_overflow_exn_struct {
  char * tag;
  int f1;
};
extern void GC_blacklist_warn_clear();
int Cyc_main(int argc,struct _fat_ptr argv) {
  struct Cyc___cycFILE * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  struct _fat_ptr * _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  struct _fat_ptr * _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  long _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct _handler_cons * _T10;
  int _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  void * _T16;
  struct Cyc___cycFILE * _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  unsigned char * _T1B;
  unsigned char * _T1C;
  const char * _T1D;
  struct _handler_cons * _T1E;
  int _T1F;
  struct _fat_ptr _T20;
  struct Cyc___cycFILE * _T21;
  struct Cyc___cycFILE * _T22;
  struct Cyc_Syntax_Lexer_definition * _T23;
  struct Cyc_Syntax_Location * _T24;
  struct Cyc_Compact_Lex_tables * _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_Syntax_Lexer_definition * _T27;
  struct Cyc_Syntax_Location * _T28;
  void * _T29;
  struct Cyc_Parser_Parser_error_exn_struct * _T2A;
  char * _T2B;
  char * _T2C;
  struct Cyc_String_pa_PrintArg_struct _T2D;
  struct Cyc_Int_pa_PrintArg_struct _T2E;
  int _T2F;
  struct Cyc___cycFILE * _T30;
  struct _fat_ptr _T31;
  struct _fat_ptr _T32;
  struct Cyc_Lexer_Lexical_error_exn_struct * _T33;
  char * _T34;
  char * _T35;
  struct Cyc_String_pa_PrintArg_struct _T36;
  struct Cyc_Int_pa_PrintArg_struct _T37;
  int _T38;
  struct Cyc_Int_pa_PrintArg_struct _T39;
  int _T3A;
  struct Cyc_String_pa_PrintArg_struct _T3B;
  struct Cyc___cycFILE * _T3C;
  struct _fat_ptr _T3D;
  struct _fat_ptr _T3E;
  struct Cyc_Output_Table_overflow_exn_struct * _T3F;
  char * _T40;
  char * _T41;
  struct Cyc_String_pa_PrintArg_struct _T42;
  struct Cyc___cycFILE * _T43;
  struct _fat_ptr _T44;
  struct _fat_ptr _T45;
  struct Cyc___cycFILE * _T46;
  struct _fat_ptr _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  unsigned char * _T4A;
  unsigned char * _T4B;
  const char * _T4C;
  GC_blacklist_warn_clear();
  if (argc < 2) { goto _TL2;
  }else { goto _TL3;
  }
  _TL3: if (argc > 3) { goto _TL2;
  }else { goto _TL0;
  }
  _TL2: _T0 = Cyc_stderr;
  _T1 = _tag_fat("Usage: cyclex <input file> [<output file>]",sizeof(char),
		 43U);
  _T2 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T0,_T1,_T2);
  return 1;
  _TL0: _T3 = argv;
  _T4 = _check_fat_subscript(_T3,sizeof(struct _fat_ptr),1);
  _T5 = (struct _fat_ptr *)_T4;
  { struct _fat_ptr source_name = *_T5;
    struct _fat_ptr dest_name;
    if (argc != 3) { goto _TL4;
    }
    _T6 = argv;
    _T7 = _check_fat_subscript(_T6,sizeof(struct _fat_ptr),2);
    _T8 = (struct _fat_ptr *)_T7;
    dest_name = *_T8;
    goto _TL5;
    _TL4: _T9 = source_name;
    _TA = _tag_fat(".cyl",sizeof(char),5U);
    _TB = Cyc_Filename_check_suffix(_T9,_TA);
    if (! _TB) { goto _TL6;
    }
    _TC = Cyc_Filename_chop_extension(source_name);
    _TD = _tag_fat(".cyc",sizeof(char),5U);
    dest_name = Cyc_strconcat(_TC,_TD);
    goto _TL7;
    _TL6: _TE = source_name;
    _TF = _tag_fat(".cyc",sizeof(char),5U);
    dest_name = Cyc_strconcat(_TE,_TF);
    _TL7: _TL5: { struct Cyc___cycFILE * ic;
      struct Cyc___cycFILE * oc;
      { struct _handler_cons _T4D;
	_T10 = &_T4D;
	_push_handler(_T10);
	{ int _T4E = 0;
	  _T11 = setjmp(_T4D.handler);
	  if (! _T11) { goto _TL8;
	  }
	  _T4E = 1;
	  goto _TL9;
	  _TL8: _TL9: if (_T4E) { goto _TLA;
	  }else { goto _TLC;
	  }
	  _TLC: _T12 = source_name;
	  _T13 = _tag_fat("rb",sizeof(char),3U);
	  ic = Cyc_file_open(_T12,_T13);
	  _T14 = dest_name;
	  _T15 = _tag_fat("w",sizeof(char),2U);
	  oc = Cyc_file_open(_T14,_T15);
	  _pop_handler();
	  goto _TLB;
	  _TLA: _T16 = Cyc_Core_get_exn_thrown();
	  { void * _T4F = (void *)_T16;
	    _T17 = Cyc_stderr;
	    _T18 = _tag_fat("trouble opening files",sizeof(char),22U);
	    _T19 = _tag_fat(0U,sizeof(void *),0);
	    Cyc_fprintf(_T17,_T18,_T19);
	    _T1A = dest_name;
	    _T1B = _untag_fat_ptr_check_bound(_T1A,sizeof(char),1U);
	    _T1C = _check_null(_T1B);
	    _T1D = (const char *)_T1C;
	    remove(_T1D);
	    return 1;
	    ;
	  }_TLB: ;
	}
      }{ struct _handler_cons _T4D;
	_T1E = &_T4D;
	_push_handler(_T1E);
	{ int _T4E = 0;
	  _T1F = setjmp(_T4D.handler);
	  if (! _T1F) { goto _TLD;
	  }
	  _T4E = 1;
	  goto _TLE;
	  _TLD: _TLE: if (_T4E) { goto _TLF;
	  }else { goto _TL11;
	  }
	  _TL11: { struct Cyc_Syntax_Lexer_definition * def = Cyc_Parser_parse_file(ic);
	    struct _tuple5 * _T4F = Cyc_Lexgen_make_dfa(def);
	    struct _fat_ptr _T50;
	    struct Cyc_List_List * _T51;
	    { struct _tuple5 _T52 = *_T4F;
	      _T51 = _T52.f0;
	      _T50 = _T52.f1;
	    }{ struct Cyc_List_List * entries = _T51;
	      struct _fat_ptr transitions = _T50;
	      struct Cyc_Compact_Lex_tables * tables = Cyc_Compact_compact_tables(transitions);
	      _T20 = source_name;
	      _T21 = ic;
	      _T22 = oc;
	      _T23 = _check_null(def);
	      _T24 = _T23->header;
	      _T25 = tables;
	      _T26 = entries;
	      _T27 = def;
	      _T28 = _T27->trailer;
	      Cyc_Output_output_lexdef(_T20,_T21,_T22,_T24,_T25,_T26,_T28);
	    }
	  }_pop_handler();
	  goto _TL10;
	  _TLF: _T29 = Cyc_Core_get_exn_thrown();
	  { void * _T4F = (void *)_T29;
	    void * _T50;
	    int _T51;
	    int _T52;
	    struct _fat_ptr _T53;
	    _T2A = (struct Cyc_Parser_Parser_error_exn_struct *)_T4F;
	    _T2B = _T2A->tag;
	    _T2C = Cyc_Parser_Parser_error;
	    if (_T2B != _T2C) { goto _TL12;
	    }
	    { struct Cyc_Parser_Parser_error_exn_struct * _T54 = (struct Cyc_Parser_Parser_error_exn_struct *)_T4F;
	      _T53 = _T54->f1;
	    }{ struct _fat_ptr s = _T53;
	      { struct Cyc_String_pa_PrintArg_struct _T54;
		_T54.tag = 0;
		_T54.f1 = source_name;
		_T2D = _T54;
	      }{ struct Cyc_String_pa_PrintArg_struct _T54 = _T2D;
		{ struct Cyc_Int_pa_PrintArg_struct _T55;
		  _T55.tag = 1;
		  _T2F = Cyc_Lexer_line_num;
		  _T55.f1 = (unsigned long)_T2F;
		  _T2E = _T55;
		}{ struct Cyc_Int_pa_PrintArg_struct _T55 = _T2E;
		  void * _T56[2];
		  _T56[0] = &_T54;
		  _T56[1] = &_T55;
		  _T30 = Cyc_stderr;
		  _T31 = _tag_fat("File \"%s\", line %d: syntax error.\n",
				  sizeof(char),35U);
		  _T32 = _tag_fat(_T56,sizeof(void *),2);
		  Cyc_fprintf(_T30,_T31,_T32);
		}
	      }goto _LL6;
	    }_TL12: _T33 = (struct Cyc_Lexer_Lexical_error_exn_struct *)_T4F;
	    _T34 = _T33->tag;
	    _T35 = Cyc_Lexer_Lexical_error;
	    if (_T34 != _T35) { goto _TL14;
	    }
	    { struct Cyc_Lexer_Lexical_error_exn_struct * _T54 = (struct Cyc_Lexer_Lexical_error_exn_struct *)_T4F;
	      _T53 = _T54->f1;
	      _T52 = _T54->f2;
	      _T51 = _T54->f3;
	    }{ struct _fat_ptr msg = _T53;
	      int line = _T52;
	      int col = _T51;
	      { struct Cyc_String_pa_PrintArg_struct _T54;
		_T54.tag = 0;
		_T54.f1 = source_name;
		_T36 = _T54;
	      }{ struct Cyc_String_pa_PrintArg_struct _T54 = _T36;
		{ struct Cyc_Int_pa_PrintArg_struct _T55;
		  _T55.tag = 1;
		  _T38 = line;
		  _T55.f1 = (unsigned long)_T38;
		  _T37 = _T55;
		}{ struct Cyc_Int_pa_PrintArg_struct _T55 = _T37;
		  { struct Cyc_Int_pa_PrintArg_struct _T56;
		    _T56.tag = 1;
		    _T3A = col;
		    _T56.f1 = (unsigned long)_T3A;
		    _T39 = _T56;
		  }{ struct Cyc_Int_pa_PrintArg_struct _T56 = _T39;
		    { struct Cyc_String_pa_PrintArg_struct _T57;
		      _T57.tag = 0;
		      _T57.f1 = msg;
		      _T3B = _T57;
		    }{ struct Cyc_String_pa_PrintArg_struct _T57 = _T3B;
		      void * _T58[4];
		      _T58[0] = &_T54;
		      _T58[1] = &_T55;
		      _T58[2] = &_T56;
		      _T58[3] = &_T57;
		      _T3C = Cyc_stderr;
		      _T3D = _tag_fat("File \"%s\", line %d, character %d: %s.\n",
				      sizeof(char),39U);
		      _T3E = _tag_fat(_T58,sizeof(void *),4);
		      Cyc_fprintf(_T3C,_T3D,_T3E);
		    }
		  }
		}
	      }goto _LL6;
	    }_TL14: _T3F = (struct Cyc_Output_Table_overflow_exn_struct *)_T4F;
	    _T40 = _T3F->tag;
	    _T41 = Cyc_Output_Table_overflow;
	    if (_T40 != _T41) { goto _TL16;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T54;
	      _T54.tag = 0;
	      _T54.f1 = source_name;
	      _T42 = _T54;
	    }{ struct Cyc_String_pa_PrintArg_struct _T54 = _T42;
	      void * _T55[1];
	      _T55[0] = &_T54;
	      _T43 = Cyc_stderr;
	      _T44 = _tag_fat("File \"%s\":\ntransition table overflow, automaton is too big\n",
			      sizeof(char),60U);
	      _T45 = _tag_fat(_T55,sizeof(void *),1);
	      Cyc_fprintf(_T43,_T44,_T45);
	    }goto _LL6;
	    _TL16: _T50 = _T4F;
	    { void * exn = _T50;
	      _T46 = Cyc_stderr;
	      _T47 = _tag_fat("error in parsing, generation, compaction, or output",
			      sizeof(char),52U);
	      _T48 = _tag_fat(0U,sizeof(void *),0);
	      Cyc_fprintf(_T46,_T47,_T48);
	      _T49 = dest_name;
	      _T4A = _untag_fat_ptr_check_bound(_T49,sizeof(char),1U);
	      _T4B = _check_null(_T4A);
	      _T4C = (const char *)_T4B;
	      remove(_T4C);
	      _throw(exn);
	      return 1;
	    }_LL6: ;
	  }_TL10: ;
	}
      }return 0;
    }
  }
}
