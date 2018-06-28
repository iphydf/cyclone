#include <cyc_include.h>
struct _fat_ptr Cyc_Core_new_string(unsigned int);
struct _fat_ptr Cyc_Core_rnew_string(struct _RegionHandle *,unsigned int);
extern struct _RegionHandle * Cyc_Core_heap_region;
struct Cyc___cycFILE;
extern int Cyc_file_string_read(struct Cyc___cycFILE *,struct _fat_ptr,int,
				int);
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
 struct Cyc_Lexing_function_lexbuf_state {
  int (* read_fun)(struct _fat_ptr,int,void *);
  void * read_fun_state;
};
extern struct _fat_ptr Cyc_zstrncpy(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
char Cyc_Lexing_Error[6U] = "Error";
static char Cyc_Lexing_aux_buffer_v[1U] = {'\000'};
static struct _fat_ptr Cyc_Lexing_aux_buffer = {(void *)Cyc_Lexing_aux_buffer_v,
						(void *)Cyc_Lexing_aux_buffer_v,
						(void *)(Cyc_Lexing_aux_buffer_v + 1U)};
void Cyc_Lexing_lex_refill(struct Cyc_Lexing_lexbuf * lexbuf) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  void * _T3;
  struct Cyc_Lexing_function_lexbuf_state * _T4;
  int (* _T5)(struct _fat_ptr,int,void *);
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  unsigned int _T8;
  unsigned int _T9;
  int _TA;
  struct Cyc_Lexing_lexbuf * _TB;
  void * _TC;
  struct Cyc_Lexing_function_lexbuf_state * _TD;
  void * _TE;
  int _TF;
  struct Cyc_Lexing_lexbuf * _T10;
  struct Cyc_Lexing_lexbuf * _T11;
  int _T12;
  int _T13;
  struct Cyc_Lexing_lexbuf * _T14;
  int _T15;
  unsigned int _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  int _T19;
  struct _fat_ptr _T1A;
  struct Cyc_Lexing_lexbuf * _T1B;
  struct _fat_ptr _T1C;
  int _T1D;
  unsigned long _T1E;
  struct Cyc_Lexing_lexbuf * _T1F;
  struct Cyc_Lexing_lexbuf * _T20;
  struct Cyc_Lexing_lexbuf * _T21;
  struct Cyc_Lexing_lexbuf * _T22;
  int _T23;
  int _T24;
  struct Cyc_Lexing_lexbuf * _T25;
  struct Cyc_Lexing_lexbuf * _T26;
  int _T27;
  int _T28;
  struct Cyc_Lexing_lexbuf * _T29;
  struct Cyc_Lexing_lexbuf * _T2A;
  int _T2B;
  int _T2C;
  struct Cyc_Lexing_lexbuf * _T2D;
  struct Cyc_Lexing_lexbuf * _T2E;
  int _T2F;
  int _T30;
  struct Cyc_Lexing_lexbuf * _T31;
  struct _fat_ptr _T32;
  struct _fat_ptr _T33;
  struct Cyc_Lexing_lexbuf * _T34;
  struct _fat_ptr _T35;
  int _T36;
  struct _fat_ptr _T37;
  struct Cyc_Lexing_lexbuf * _T38;
  int _T39;
  int _T3A;
  int _T3B;
  unsigned long _T3C;
  struct Cyc_Lexing_lexbuf * _T3D;
  struct _fat_ptr _T3E;
  struct Cyc_Lexing_lexbuf * _T3F;
  int _T40;
  int _T41;
  int _T42;
  struct _fat_ptr _T43;
  struct _fat_ptr _T44;
  struct _fat_ptr _T45;
  int _T46;
  unsigned long _T47;
  struct Cyc_Lexing_lexbuf * _T48;
  struct Cyc_Lexing_lexbuf * _T49;
  int _T4A;
  int _T4B;
  struct Cyc_Lexing_lexbuf * _T4C;
  struct Cyc_Lexing_lexbuf * _T4D;
  int _T4E;
  int _T4F;
  struct Cyc_Lexing_lexbuf * _T50;
  struct Cyc_Lexing_lexbuf * _T51;
  int _T52;
  int _T53;
  struct Cyc_Lexing_lexbuf * _T54;
  struct Cyc_Lexing_lexbuf * _T55;
  int _T56;
  int _T57;
  _T0 = Cyc_Lexing_aux_buffer;
  _T1 = _get_fat_size(_T0,sizeof(char));
  if (_T1 != 1U) { goto _TL0;
  }
  Cyc_Lexing_aux_buffer = Cyc_Core_new_string(4097U);
  goto _TL1;
  _TL0: _TL1: _T2 = lexbuf;
  _T3 = _T2->refill_state;
  _T4 = (struct Cyc_Lexing_function_lexbuf_state *)_T3;
  _T5 = _T4->read_fun;
  _T6 = Cyc_Lexing_aux_buffer;
  _T7 = Cyc_Lexing_aux_buffer;
  _T8 = _get_fat_size(_T7,sizeof(char));
  _T9 = _T8 - 1U;
  _TA = (int)_T9;
  _TB = lexbuf;
  _TC = _TB->refill_state;
  _TD = (struct Cyc_Lexing_function_lexbuf_state *)_TC;
  _TE = _TD->read_fun_state;
  { int read = _T5(_T6,_TA,_TE);
    if (read <= 0) { goto _TL2;
    }
    _TF = read;
    goto _TL3;
    _TL2: _T10 = lexbuf;
    _T10->lex_eof_reached = 1;
    _TF = 0;
    _TL3: { int n = _TF;
      _T11 = lexbuf;
      _T12 = _T11->lex_start_pos;
      _T13 = n;
      if (_T12 >= _T13) { goto _TL4;
      }
      _T14 = lexbuf;
      { int oldlen = _T14->lex_buffer_len;
	int newlen = oldlen * 2;
	_T15 = newlen + 1;
	_T16 = (unsigned int)_T15;
	{ struct _fat_ptr newbuf = Cyc_Core_new_string(_T16);
	  _T17 = newbuf;
	  _T18 = _fat_ptr_decrease_size(_T17,sizeof(char),1U);
	  _T19 = oldlen;
	  _T1A = _fat_ptr_plus(_T18,sizeof(char),_T19);
	  _T1B = lexbuf;
	  _T1C = _T1B->lex_buffer;
	  _T1D = oldlen;
	  _T1E = (unsigned long)_T1D;
	  Cyc_zstrncpy(_T1A,_T1C,_T1E);
	  _T1F = lexbuf;
	  _T1F->lex_buffer = newbuf;
	  _T20 = lexbuf;
	  _T20->lex_buffer_len = newlen;
	  _T21 = lexbuf;
	  _T22 = lexbuf;
	  _T23 = _T22->lex_abs_pos;
	  _T24 = oldlen;
	  _T21->lex_abs_pos = _T23 - _T24;
	  _T25 = lexbuf;
	  _T26 = lexbuf;
	  _T27 = _T26->lex_curr_pos;
	  _T28 = oldlen;
	  _T25->lex_curr_pos = _T27 + _T28;
	  _T29 = lexbuf;
	  _T2A = lexbuf;
	  _T2B = _T2A->lex_start_pos;
	  _T2C = oldlen;
	  _T29->lex_start_pos = _T2B + _T2C;
	  _T2D = lexbuf;
	  _T2E = lexbuf;
	  _T2F = _T2E->lex_last_pos;
	  _T30 = oldlen;
	  _T2D->lex_last_pos = _T2F + _T30;
	}
      }goto _TL5;
      _TL4: _TL5: _T31 = lexbuf;
      _T32 = _T31->lex_buffer;
      _T33 = _fat_ptr_decrease_size(_T32,sizeof(char),1U);
      _T34 = lexbuf;
      _T35 = _T34->lex_buffer;
      _T36 = n;
      _T37 = _fat_ptr_plus(_T35,sizeof(char),_T36);
      _T38 = lexbuf;
      _T39 = _T38->lex_buffer_len;
      _T3A = n;
      _T3B = _T39 - _T3A;
      _T3C = (unsigned long)_T3B;
      Cyc_zstrncpy(_T33,_T37,_T3C);
      _T3D = lexbuf;
      _T3E = _T3D->lex_buffer;
      _T3F = lexbuf;
      _T40 = _T3F->lex_buffer_len;
      _T41 = n;
      _T42 = _T40 - _T41;
      _T43 = _fat_ptr_plus(_T3E,sizeof(char),_T42);
      _T44 = _fat_ptr_decrease_size(_T43,sizeof(char),1U);
      _T45 = Cyc_Lexing_aux_buffer;
      _T46 = n;
      _T47 = (unsigned long)_T46;
      Cyc_zstrncpy(_T44,_T45,_T47);
      _T48 = lexbuf;
      _T49 = lexbuf;
      _T4A = _T49->lex_abs_pos;
      _T4B = n;
      _T48->lex_abs_pos = _T4A + _T4B;
      _T4C = lexbuf;
      _T4D = lexbuf;
      _T4E = _T4D->lex_curr_pos;
      _T4F = n;
      _T4C->lex_curr_pos = _T4E - _T4F;
      _T50 = lexbuf;
      _T51 = lexbuf;
      _T52 = _T51->lex_start_pos;
      _T53 = n;
      _T50->lex_start_pos = _T52 - _T53;
      _T54 = lexbuf;
      _T55 = lexbuf;
      _T56 = _T55->lex_last_pos;
      _T57 = n;
      _T54->lex_last_pos = _T56 - _T57;
    }
  }
}
struct Cyc_Lexing_lexbuf * Cyc_Lexing_from_function(int (* read_fun)(struct _fat_ptr,
								     int,
								     void *),
						    void * read_fun_state) {
  struct Cyc_Lexing_lexbuf * _T0;
  struct Cyc_Lexing_function_lexbuf_state * _T1;
  { struct Cyc_Lexing_lexbuf * _T2 = _cycalloc(sizeof(struct Cyc_Lexing_lexbuf));
    _T2->refill_buff = Cyc_Lexing_lex_refill;
    { struct Cyc_Lexing_function_lexbuf_state * _T3 = _cycalloc(sizeof(struct Cyc_Lexing_function_lexbuf_state));
      _T3->read_fun = read_fun;
      _T3->read_fun_state = read_fun_state;
      _T1 = (struct Cyc_Lexing_function_lexbuf_state *)_T3;
    }_T2->refill_state = _T1;
    _T2->lex_buffer = Cyc_Core_new_string(8193U);
    _T2->lex_buffer_len = 8192;
    _T2->lex_abs_pos = - 8192;
    _T2->lex_start_pos = 8192;
    _T2->lex_curr_pos = 8192;
    _T2->lex_last_pos = 8192;
    _T2->lex_last_action = 0;
    _T2->lex_eof_reached = 0;
    _T0 = (struct Cyc_Lexing_lexbuf *)_T2;
  }return _T0;
}
static int Cyc_Lexing_read_from_file(struct _fat_ptr aux,int n,struct Cyc___cycFILE * f) {
  int _T0;
  _T0 = Cyc_file_string_read(f,aux,0,n);
  return _T0;
}
struct Cyc_Lexing_lexbuf * Cyc_Lexing_from_file(struct Cyc___cycFILE * f) {
  struct Cyc_Lexing_lexbuf * (* _T0)(int (*)(struct _fat_ptr,int,struct Cyc___cycFILE *),
				     struct Cyc___cycFILE *);
  struct Cyc___cycFILE * _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  { struct Cyc_Lexing_lexbuf * (* _T3)(int (*)(struct _fat_ptr,int,struct Cyc___cycFILE *),
				       struct Cyc___cycFILE *) = (struct Cyc_Lexing_lexbuf * (*)(int (*)(struct _fat_ptr,
													 int,
													 struct Cyc___cycFILE *),
												 struct Cyc___cycFILE *))Cyc_Lexing_from_function;
    _T0 = _T3;
  }_T1 = f;
  _T2 = _T0(Cyc_Lexing_read_from_file,_T1);
  return _T2;
}
static void Cyc_Lexing_set_eof(struct Cyc_Lexing_lexbuf * lbuf) {
  struct Cyc_Lexing_lexbuf * _T0;
  _T0 = lbuf;
  _T0->lex_eof_reached = 1;
}
struct Cyc_Lexing_lexbuf * Cyc_Lexing_from_string(struct _fat_ptr s) {
  struct Cyc_Lexing_lexbuf * _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  { struct Cyc_Lexing_lexbuf * _T3 = _cycalloc(sizeof(struct Cyc_Lexing_lexbuf));
    _T3->refill_buff = Cyc_Lexing_set_eof;
    _T3->refill_state = (void *)0;
    _T3->lex_buffer = Cyc_strdup(s);
    _T1 = s;
    _T2 = _get_fat_size(_T1,sizeof(char));
    _T3->lex_buffer_len = (int)_T2;
    _T3->lex_abs_pos = 0;
    _T3->lex_start_pos = 0;
    _T3->lex_curr_pos = 0;
    _T3->lex_last_pos = 0;
    _T3->lex_last_action = 0;
    _T3->lex_eof_reached = 1;
    _T0 = (struct Cyc_Lexing_lexbuf *)_T3;
  }return _T0;
}
struct _fat_ptr Cyc_Lexing_rlexeme(struct _RegionHandle * r,struct Cyc_Lexing_lexbuf * lbuf) {
  struct Cyc_Lexing_lexbuf * _T0;
  int _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  int _T3;
  struct _RegionHandle * _T4;
  int _T5;
  unsigned int _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_Lexing_lexbuf * _T9;
  struct _fat_ptr _TA;
  struct Cyc_Lexing_lexbuf * _TB;
  int _TC;
  struct _fat_ptr _TD;
  int _TE;
  unsigned long _TF;
  struct _fat_ptr _T10;
  int _T11;
  unsigned char * _T12;
  char * _T13;
  unsigned int _T14;
  unsigned char * _T15;
  char * _T16;
  struct _fat_ptr _T17;
  _T0 = lbuf;
  _T1 = _T0->lex_curr_pos;
  _T2 = lbuf;
  _T3 = _T2->lex_start_pos;
  { int len = _T1 - _T3;
    _T4 = r;
    _T5 = len + 1;
    _T6 = (unsigned int)_T5;
    { struct _fat_ptr s = Cyc_Core_rnew_string(_T4,_T6);
      _T7 = s;
      _T8 = _fat_ptr_decrease_size(_T7,sizeof(char),1U);
      _T9 = lbuf;
      _TA = _T9->lex_buffer;
      _TB = lbuf;
      _TC = _TB->lex_start_pos;
      _TD = _fat_ptr_plus(_TA,sizeof(char),_TC);
      _TE = len;
      _TF = (unsigned long)_TE;
      Cyc_zstrncpy(_T8,_TD,_TF);
      _T10 = s;
      _T11 = len;
      { struct _fat_ptr _T18 = _fat_ptr_plus(_T10,sizeof(char),_T11);
	_T12 = _check_fat_subscript(_T18,sizeof(char),0U);
	_T13 = (char *)_T12;
	{ char _T19 = *_T13;
	  char _T1A = '\000';
	  _T14 = _get_fat_size(_T18,sizeof(char));
	  if (_T14 != 1U) { goto _TL6;
	  }
	  if (_T19 != 0) { goto _TL6;
	  }
	  if (_T1A == 0) { goto _TL6;
	  }
	  _throw_arraybounds();
	  goto _TL7;
	  _TL6: _TL7: _T15 = _T18.curr;
	  _T16 = (char *)_T15;
	  *_T16 = _T1A;
	}
      }_T17 = s;
      return _T17;
    }
  }
}
struct _fat_ptr Cyc_Lexing_lexeme(struct Cyc_Lexing_lexbuf * lbuf) {
  struct _fat_ptr _T0;
  _T0 = Cyc_Lexing_rlexeme(Cyc_Core_heap_region,lbuf);
  return _T0;
}
char Cyc_Lexing_lexeme_char(struct Cyc_Lexing_lexbuf * lbuf,int i) {
  struct Cyc_Lexing_lexbuf * _T0;
  struct _fat_ptr _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  int _T3;
  int _T4;
  int _T5;
  unsigned char * _T6;
  char * _T7;
  char _T8;
  _T0 = lbuf;
  _T1 = _T0->lex_buffer;
  _T2 = lbuf;
  _T3 = _T2->lex_start_pos;
  _T4 = i;
  _T5 = _T3 + _T4;
  _T6 = _check_fat_subscript(_T1,sizeof(char),_T5);
  _T7 = (char *)_T6;
  _T8 = *_T7;
  return _T8;
}
int Cyc_Lexing_lexeme_start(struct Cyc_Lexing_lexbuf * lbuf) {
  struct Cyc_Lexing_lexbuf * _T0;
  int _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  int _T3;
  int _T4;
  _T0 = lbuf;
  _T1 = _T0->lex_abs_pos;
  _T2 = lbuf;
  _T3 = _T2->lex_start_pos;
  _T4 = _T1 + _T3;
  return _T4;
}
int Cyc_Lexing_lexeme_end(struct Cyc_Lexing_lexbuf * lbuf) {
  struct Cyc_Lexing_lexbuf * _T0;
  int _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  int _T3;
  int _T4;
  _T0 = lbuf;
  _T1 = _T0->lex_abs_pos;
  _T2 = lbuf;
  _T3 = _T2->lex_curr_pos;
  _T4 = _T1 + _T3;
  return _T4;
}
