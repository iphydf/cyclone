#include <cyc_include.h>
extern char Cyc_Core_Invalid_argument[17U];
 struct Cyc_Core_Invalid_argument_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
extern unsigned int Cyc_Core_unique_qual;
void Cyc_Core_ufree(void *);
struct Cyc_Buffer_t;
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern struct _fat_ptr Cyc_strncpy(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern struct _fat_ptr Cyc_zstrncpy(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);
 struct Cyc_Buffer_t {
  struct _fat_ptr buffer;
  unsigned int position;
  unsigned int length;
  struct _fat_ptr initial_buffer;
};
struct Cyc_Buffer_t * Cyc_Buffer_create(unsigned int n) {
  struct _fat_ptr _T0;
  struct _RegionHandle * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Buffer_t * _T4;
  struct Cyc_Buffer_t * _T5;
  if (n <= 0U) { goto _TL0;
  }
  { unsigned int _T6 = n + 1U;
    _T1 = Cyc_Core_heap_region;
    _T2 = Cyc_Core_unique_qual;
    _T3 = _region_calloc(_T1,_T2,sizeof(char),_T6);
    _T0 = _tag_fat(_T3,sizeof(char),_T6);
  }{ struct _fat_ptr s = _T0;
    { struct Cyc_Buffer_t * _T6 = _cycalloc(sizeof(struct Cyc_Buffer_t));
      _T6->buffer = s;
      _T6->position = 0U;
      _T6->length = n;
      _T6->initial_buffer = _tag_fat(0,0,0);
      _T4 = (struct Cyc_Buffer_t *)_T6;
    }return _T4;
  }_TL0: { struct Cyc_Buffer_t * _T6 = _cycalloc(sizeof(struct Cyc_Buffer_t));
    _T6->buffer = _tag_fat(0,0,0);
    _T6->position = 0U;
    _T6->length = 0U;
    _T6->initial_buffer = _tag_fat(0,0,0);
    _T5 = (struct Cyc_Buffer_t *)_T6;
  }return _T5;
}
struct _fat_ptr Cyc_Buffer_contents(struct Cyc_Buffer_t * b) {
  struct Cyc_Buffer_t * _T0;
  struct Cyc_Buffer_t * _T1;
  struct _fat_ptr _T2;
  unsigned char * _T3;
  char * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc_Buffer_t * _T7;
  unsigned int _T8;
  struct Cyc_Buffer_t * _T9;
  struct Cyc_Buffer_t * _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr buf = _tag_fat(0,0,0);
  { struct _fat_ptr _TC = buf;
    _T0 = b;
    { struct _fat_ptr _TD = _T0->buffer;
      buf = _TD;
      _T1 = b;
      _T1->buffer = _TC;
    }
  }_T2 = buf;
  _T3 = _T2.curr;
  _T4 = (char *)_T3;
  if (_T4 != 0) { goto _TL2;
  }
  _T5 = _tag_fat(0,0,0);
  return _T5;
  _TL2: _T6 = buf;
  _T7 = b;
  _T8 = _T7->position;
  { struct _fat_ptr res = Cyc_substring(_T6,0,_T8);
    { struct _fat_ptr _TC = buf;
      _T9 = b;
      { struct _fat_ptr _TD = _T9->buffer;
	buf = _TD;
	_TA = b;
	_TA->buffer = _TC;
      }
    }_TB = res;
    return _TB;
  }
}
struct _fat_ptr Cyc_Buffer_extract(struct Cyc_Buffer_t * b) {
  struct Cyc_Buffer_t * _T0;
  struct Cyc_Buffer_t * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Buffer_t * _T3;
  unsigned int _T4;
  int _T5;
  unsigned char * _T6;
  char * _T7;
  unsigned int _T8;
  unsigned char * _T9;
  char * _TA;
  struct Cyc_Buffer_t * _TB;
  struct Cyc_Buffer_t * _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr buf = _tag_fat(0,0,0);
  { struct _fat_ptr _TE = buf;
    _T0 = b;
    { struct _fat_ptr _TF = _T0->buffer;
      buf = _TF;
      _T1 = b;
      _T1->buffer = _TE;
    }
  }_T2 = buf;
  _T3 = b;
  _T4 = _T3->position;
  _T5 = (int)_T4;
  { struct _fat_ptr _TE = _fat_ptr_plus(_T2,sizeof(char),_T5);
    _T6 = _check_fat_subscript(_TE,sizeof(char),0U);
    _T7 = (char *)_T6;
    { char _TF = *_T7;
      char _T10 = '\000';
      _T8 = _get_fat_size(_TE,sizeof(char));
      if (_T8 != 1U) { goto _TL4;
      }
      if (_TF != 0) { goto _TL4;
      }
      if (_T10 == 0) { goto _TL4;
      }
      _throw_arraybounds();
      goto _TL5;
      _TL4: _TL5: _T9 = _TE.curr;
      _TA = (char *)_T9;
      *_TA = _T10;
    }
  }_TB = b;
  _TB->position = 0U;
  _TC = b;
  _TC->length = 0U;
  _TD = buf;
  return _TD;
}
long Cyc_Buffer_restore(struct Cyc_Buffer_t * b,struct _fat_ptr buf) {
  unsigned long _T0;
  struct Cyc_Buffer_t * _T1;
  struct Cyc_Buffer_t * _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  char * _T5;
  struct Cyc_Buffer_t * _T6;
  struct Cyc_Buffer_t * _T7;
  void (* _T8)(char *);
  void (* _T9)(void *);
  struct _fat_ptr _TA;
  unsigned int _TB;
  unsigned char * _TC;
  char * _TD;
  struct Cyc_Buffer_t * _TE;
  struct Cyc_Buffer_t * _TF;
  int _T10;
  _T0 = Cyc_strlen(buf);
  { int len = (int)_T0;
    { struct _fat_ptr _T11 = buf;
      _T1 = b;
      { struct _fat_ptr _T12 = _T1->buffer;
	buf = _T12;
	_T2 = b;
	_T2->buffer = _T11;
      }
    }_T3 = buf;
    _T4 = _T3.curr;
    _T5 = (char *)_T4;
    if (_T5 == 0) { goto _TL6;
    }
    { struct _fat_ptr _T11 = buf;
      _T6 = b;
      { struct _fat_ptr _T12 = _T6->buffer;
	buf = _T12;
	_T7 = b;
	_T7->buffer = _T11;
      }
    }_T9 = Cyc_Core_ufree;
    { void (* _T11)(char *) = (void (*)(char *))_T9;
      _T8 = _T11;
    }_TA = buf;
    _TB = 1U + 1U;
    _TC = _untag_fat_ptr_check_bound(_TA,sizeof(char),_TB);
    _TD = (char *)_TC;
    _T8(_TD);
    return 0;
    _TL6: _TE = b;
    _TE->position = 0U;
    _TF = b;
    _T10 = len;
    _TF->length = (unsigned int)_T10;
    return 1;
  }
}
unsigned long Cyc_Buffer_length(struct Cyc_Buffer_t * b) {
  struct Cyc_Buffer_t * _T0;
  unsigned int _T1;
  _T0 = b;
  _T1 = _T0->position;
  return _T1;
}
void Cyc_Buffer_clear(struct Cyc_Buffer_t * b) {
  struct Cyc_Buffer_t * _T0;
  _T0 = b;
  _T0->position = 0U;
}
void Cyc_Buffer_reset(struct Cyc_Buffer_t * b) {
  struct Cyc_Buffer_t * _T0;
  struct Cyc_Buffer_t * _T1;
  struct _fat_ptr _T2;
  unsigned char * _T3;
  char * _T4;
  struct Cyc_Buffer_t * _T5;
  struct Cyc_Buffer_t * _T6;
  struct Cyc_Buffer_t * _T7;
  struct _fat_ptr _T8;
  unsigned int _T9;
  struct Cyc_Buffer_t * _TA;
  struct Cyc_Buffer_t * _TB;
  void (* _TC)(char *);
  void (* _TD)(void *);
  struct _fat_ptr _TE;
  unsigned int _TF;
  unsigned char * _T10;
  char * _T11;
  _T0 = b;
  _T0->position = 0U;
  _T1 = b;
  _T2 = _T1->initial_buffer;
  _T3 = _T2.curr;
  _T4 = (char *)_T3;
  if (_T4 == 0) { goto _TL8;
  }
  { struct _fat_ptr buf = _tag_fat(0,0,0);
    _T5 = b;
    { struct _fat_ptr _T12 = _T5->initial_buffer;
      struct _fat_ptr _T13 = buf;
      _T6 = b;
      _T6->initial_buffer = _T13;
      buf = _T12;
    }_T7 = b;
    _T8 = buf;
    _T9 = _get_fat_size(_T8,sizeof(char));
    _T7->length = _T9 - 1U;
    _TA = b;
    { struct _fat_ptr _T12 = _TA->buffer;
      struct _fat_ptr _T13 = buf;
      _TB = b;
      _TB->buffer = _T13;
      buf = _T12;
    }_TD = Cyc_Core_ufree;
    { void (* _T12)(char *) = (void (*)(char *))_TD;
      _TC = _T12;
    }_TE = buf;
    _TF = 1U + 1U;
    _T10 = _untag_fat_ptr_check_bound(_TE,sizeof(char),_TF);
    _T11 = (char *)_T10;
    _TC(_T11);
  }goto _TL9;
  _TL8: _TL9: return;
}
static void Cyc_Buffer_resize(struct Cyc_Buffer_t * b,unsigned int more) {
  struct Cyc_Buffer_t * _T0;
  unsigned int _T1;
  struct Cyc_Buffer_t * _T2;
  unsigned int _T3;
  unsigned int _T4;
  unsigned int _T5;
  unsigned long _T6;
  struct _fat_ptr _T7;
  struct _RegionHandle * _T8;
  unsigned int _T9;
  void * _TA;
  struct Cyc_Buffer_t * _TB;
  unsigned int _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct Cyc_Buffer_t * _TF;
  struct _fat_ptr _T10;
  struct Cyc_Buffer_t * _T11;
  unsigned int _T12;
  struct Cyc_Buffer_t * _T13;
  struct _fat_ptr _T14;
  unsigned char * _T15;
  char * _T16;
  struct Cyc_Buffer_t * _T17;
  struct Cyc_Buffer_t * _T18;
  struct Cyc_Buffer_t * _T19;
  struct Cyc_Buffer_t * _T1A;
  struct Cyc_Buffer_t * _T1B;
  struct Cyc_Buffer_t * _T1C;
  void (* _T1D)(char *);
  void (* _T1E)(void *);
  struct _fat_ptr _T1F;
  unsigned int _T20;
  unsigned char * _T21;
  char * _T22;
  struct Cyc_Buffer_t * _T23;
  _T0 = b;
  { unsigned long len = _T0->length;
    if (len != 0U) { goto _TLA;
    }
    _T1 = 1U;
    goto _TLB;
    _TLA: _T1 = len;
    _TLB: { unsigned long new_len = _T1;
      struct _fat_ptr new_buffer;
      _TLC: _T2 = b;
      _T3 = _T2->position;
      _T4 = more;
      _T5 = _T3 + _T4;
      _T6 = new_len;
      if (_T5 > _T6) { goto _TLD;
      }else { goto _TLE;
      }
      _TLD: new_len = 2U * new_len;
      goto _TLC;
      _TLE: { unsigned int _T24 = new_len + 1U;
	_T8 = Cyc_Core_heap_region;
	_T9 = Cyc_Core_unique_qual;
	_TA = _region_calloc(_T8,_T9,sizeof(char),_T24);
	_T7 = _tag_fat(_TA,sizeof(char),_T24);
      }new_buffer = _T7;
      _TB = b;
      _TC = _TB->length;
      if (_TC == 0U) { goto _TLF;
      }
      { struct _fat_ptr _T24;
	_T24 = new_buffer;
	{ struct _fat_ptr x = _T24;
	  _TD = x;
	  _TE = _fat_ptr_decrease_size(_TD,sizeof(char),1U);
	  _TF = b;
	  _T10 = _TF->buffer;
	  _T11 = b;
	  _T12 = _T11->position;
	  Cyc_strncpy(_TE,_T10,_T12);
	}
      }goto _TL10;
      _TLF: _TL10: _T13 = b;
      _T14 = _T13->initial_buffer;
      _T15 = _T14.curr;
      _T16 = (char *)_T15;
      if (_T16 != 0) { goto _TL11;
      }
      _T17 = b;
      { struct _fat_ptr _T24 = _T17->initial_buffer;
	_T18 = b;
	{ struct _fat_ptr _T25 = _T18->buffer;
	  _T19 = b;
	  _T19->initial_buffer = _T25;
	  _T1A = b;
	  _T1A->buffer = _T24;
	}
      }goto _TL12;
      _TL11: _TL12: _T1B = b;
      { struct _fat_ptr _T24 = _T1B->buffer;
	struct _fat_ptr _T25 = new_buffer;
	_T1C = b;
	_T1C->buffer = _T25;
	new_buffer = _T24;
      }_T1E = Cyc_Core_ufree;
      { void (* _T24)(char *) = (void (*)(char *))_T1E;
	_T1D = _T24;
      }_T1F = new_buffer;
      _T20 = 1U + 1U;
      _T21 = _untag_fat_ptr_check_bound(_T1F,sizeof(char),_T20);
      _T22 = (char *)_T21;
      _T1D(_T22);
      _T23 = b;
      _T23->length = new_len;
      return;
    }
  }
}
void Cyc_Buffer_add_char(struct Cyc_Buffer_t * b,char c) {
  struct Cyc_Buffer_t * _T0;
  unsigned int _T1;
  int _T2;
  unsigned int _T3;
  struct Cyc_Buffer_t * _T4;
  unsigned int _T5;
  struct Cyc_Buffer_t * _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned char * _T9;
  char * _TA;
  unsigned int _TB;
  unsigned char * _TC;
  char * _TD;
  struct Cyc_Buffer_t * _TE;
  int _TF;
  _T0 = b;
  _T1 = _T0->position;
  { int pos = (int)_T1;
    _T2 = pos;
    _T3 = (unsigned int)_T2;
    _T4 = b;
    _T5 = _T4->length;
    if (_T3 < _T5) { goto _TL13;
    }
    Cyc_Buffer_resize(b,1U);
    goto _TL14;
    _TL13: _TL14: _T6 = b;
    _T7 = _T6->buffer;
    _T8 = pos;
    { struct _fat_ptr _T10 = _fat_ptr_plus(_T7,sizeof(char),_T8);
      _T9 = _check_fat_subscript(_T10,sizeof(char),0U);
      _TA = (char *)_T9;
      { char _T11 = *_TA;
	char _T12 = c;
	_TB = _get_fat_size(_T10,sizeof(char));
	if (_TB != 1U) { goto _TL15;
	}
	if (_T11 != 0) { goto _TL15;
	}
	if (_T12 == 0) { goto _TL15;
	}
	_throw_arraybounds();
	goto _TL16;
	_TL15: _TL16: _TC = _T10.curr;
	_TD = (char *)_TC;
	*_TD = _T12;
      }
    }_TE = b;
    _TF = pos + 1;
    _TE->position = (unsigned int)_TF;
    return;
  }
}
void Cyc_Buffer_add_substring(struct Cyc_Buffer_t * b,struct _fat_ptr s,int offset,
			      int len) {
  int _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  struct Cyc_Core_Invalid_argument_exn_struct * _T4;
  void * _T5;
  struct Cyc_Buffer_t * _T6;
  unsigned int _T7;
  int _T8;
  unsigned int _T9;
  unsigned int _TA;
  int _TB;
  unsigned int _TC;
  struct Cyc_Buffer_t * _TD;
  unsigned int _TE;
  struct Cyc_Buffer_t * _TF;
  int _T10;
  unsigned int _T11;
  struct Cyc_Buffer_t * _T12;
  struct Cyc_Buffer_t * _T13;
  struct _fat_ptr _T14;
  struct Cyc_Buffer_t * _T15;
  unsigned int _T16;
  int _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  int _T1B;
  struct _fat_ptr _T1C;
  int _T1D;
  unsigned long _T1E;
  struct Cyc_Buffer_t * _T1F;
  struct Cyc_Buffer_t * _T20;
  struct Cyc_Buffer_t * _T21;
  int _T22;
  if (offset < 0) { goto _TL19;
  }else { goto _TL1B;
  }
  _TL1B: if (len < 0) { goto _TL19;
  }else { goto _TL1A;
  }
  _TL1A: _T0 = offset + len;
  _T1 = (unsigned int)_T0;
  _T2 = s;
  _T3 = _get_fat_size(_T2,sizeof(char));
  if (_T1 > _T3) { goto _TL19;
  }else { goto _TL17;
  }
  _TL19: { struct Cyc_Core_Invalid_argument_exn_struct * _T23 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T23->tag = Cyc_Core_Invalid_argument;
    _T23->f1 = _tag_fat("Buffer::add_substring",sizeof(char),22U);
    _T4 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T23;
  }_T5 = (void *)_T4;
  _throw(_T5);
  goto _TL18;
  _TL17: _TL18: _T6 = b;
  _T7 = _T6->position;
  _T8 = len;
  _T9 = (unsigned int)_T8;
  _TA = _T7 + _T9;
  { int new_position = (int)_TA;
    _TB = new_position;
    _TC = (unsigned int)_TB;
    _TD = b;
    _TE = _TD->length;
    if (_TC <= _TE) { goto _TL1C;
    }
    _TF = b;
    _T10 = len;
    _T11 = (unsigned int)_T10;
    Cyc_Buffer_resize(_TF,_T11);
    goto _TL1D;
    _TL1C: _TL1D: { struct _fat_ptr buf = _tag_fat(0,0,0);
      { struct _fat_ptr _T23 = buf;
	_T12 = b;
	{ struct _fat_ptr _T24 = _T12->buffer;
	  buf = _T24;
	  _T13 = b;
	  _T13->buffer = _T23;
	}
      }{ struct _fat_ptr _T23;
	_T23 = buf;
	{ struct _fat_ptr x = _T23;
	  _T14 = x;
	  _T15 = b;
	  _T16 = _T15->position;
	  _T17 = (int)_T16;
	  _T18 = _fat_ptr_plus(_T14,sizeof(char),_T17);
	  _T19 = _fat_ptr_decrease_size(_T18,sizeof(char),1U);
	  _T1A = s;
	  _T1B = offset;
	  _T1C = _fat_ptr_plus(_T1A,sizeof(char),_T1B);
	  _T1D = len;
	  _T1E = (unsigned long)_T1D;
	  Cyc_zstrncpy(_T19,_T1C,_T1E);
	}
      }{ struct _fat_ptr _T23 = buf;
	_T1F = b;
	{ struct _fat_ptr _T24 = _T1F->buffer;
	  buf = _T24;
	  _T20 = b;
	  _T20->buffer = _T23;
	}
      }_T21 = b;
      _T22 = new_position;
      _T21->position = (unsigned int)_T22;
      return;
    }
  }
}
void Cyc_Buffer_add_string(struct Cyc_Buffer_t * b,struct _fat_ptr s) {
  unsigned long _T0;
  struct Cyc_Buffer_t * _T1;
  unsigned int _T2;
  int _T3;
  unsigned int _T4;
  unsigned int _T5;
  int _T6;
  unsigned int _T7;
  struct Cyc_Buffer_t * _T8;
  unsigned int _T9;
  struct Cyc_Buffer_t * _TA;
  int _TB;
  unsigned int _TC;
  struct Cyc_Buffer_t * _TD;
  struct Cyc_Buffer_t * _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct Cyc_Buffer_t * _T11;
  unsigned int _T12;
  int _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  int _T16;
  unsigned long _T17;
  struct Cyc_Buffer_t * _T18;
  struct Cyc_Buffer_t * _T19;
  struct Cyc_Buffer_t * _T1A;
  int _T1B;
  _T0 = Cyc_strlen(s);
  { int len = (int)_T0;
    _T1 = b;
    _T2 = _T1->position;
    _T3 = len;
    _T4 = (unsigned int)_T3;
    _T5 = _T2 + _T4;
    { int new_position = (int)_T5;
      _T6 = new_position;
      _T7 = (unsigned int)_T6;
      _T8 = b;
      _T9 = _T8->length;
      if (_T7 <= _T9) { goto _TL1E;
      }
      _TA = b;
      _TB = len;
      _TC = (unsigned int)_TB;
      Cyc_Buffer_resize(_TA,_TC);
      goto _TL1F;
      _TL1E: _TL1F: { struct _fat_ptr buf = _tag_fat(0,0,0);
	{ struct _fat_ptr _T1C = buf;
	  _TD = b;
	  { struct _fat_ptr _T1D = _TD->buffer;
	    buf = _T1D;
	    _TE = b;
	    _TE->buffer = _T1C;
	  }
	}{ struct _fat_ptr _T1C;
	  _T1C = buf;
	  { struct _fat_ptr x = _T1C;
	    _TF = x;
	    _T10 = _fat_ptr_decrease_size(_TF,sizeof(char),1U);
	    _T11 = b;
	    _T12 = _T11->position;
	    _T13 = (int)_T12;
	    _T14 = _fat_ptr_plus(_T10,sizeof(char),_T13);
	    _T15 = s;
	    _T16 = len;
	    _T17 = (unsigned long)_T16;
	    Cyc_strncpy(_T14,_T15,_T17);
	  }
	}{ struct _fat_ptr _T1C = buf;
	  _T18 = b;
	  { struct _fat_ptr _T1D = _T18->buffer;
	    buf = _T1D;
	    _T19 = b;
	    _T19->buffer = _T1C;
	  }
	}_T1A = b;
	_T1B = new_position;
	_T1A->position = (unsigned int)_T1B;
	return;
      }
    }
  }
}
void Cyc_Buffer_add_buffer(struct Cyc_Buffer_t * b,struct Cyc_Buffer_t * bs) {
  struct Cyc_Buffer_t * _T0;
  struct Cyc_Buffer_t * _T1;
  struct _fat_ptr _T2;
  struct Cyc_Buffer_t * _T3;
  unsigned int _T4;
  int _T5;
  _T0 = b;
  _T1 = bs;
  _T2 = _T1->buffer;
  _T3 = bs;
  _T4 = _T3->position;
  _T5 = (int)_T4;
  Cyc_Buffer_add_substring(_T0,_T2,0,_T5);
  return;
}
