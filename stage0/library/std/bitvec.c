#include <cyc_include.h>
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
extern void * Cyc___assert_fail(struct _fat_ptr,struct _fat_ptr,unsigned int);
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
extern void * Cyc_Dict_lookup(struct Cyc_Dict_Dict,void *);
long Cyc_Bitvec_get(struct _fat_ptr bvec,int pos) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  int * _T3;
  int _T4;
  int _T5;
  int _T6;
  int _T7;
  int _T8;
  int word = pos >> 5;
  int offset = pos & 31;
  _T0 = bvec;
  _T1 = word;
  _T2 = _check_fat_subscript(_T0,sizeof(int),_T1);
  _T3 = (int *)_T2;
  _T4 = *_T3;
  _T5 = offset;
  _T6 = _T4 >> _T5;
  _T7 = _T6 & 1;
  _T8 = _T7 == 1;
  return _T8;
}
void Cyc_Bitvec_set(struct _fat_ptr bvec,int pos) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  int * _T2;
  int _T3;
  struct _fat_ptr _T4;
  int _T5;
  unsigned char * _T6;
  int * _T7;
  int _T8;
  unsigned int _T9;
  unsigned int _TA;
  unsigned int _TB;
  int word = pos >> 5;
  int offset = pos & 31;
  _T0 = bvec;
  _T1 = _T0.curr;
  _T2 = (int *)_T1;
  _T3 = word;
  _T4 = bvec;
  _T5 = word;
  _T6 = _check_fat_subscript(_T4,sizeof(int),_T5);
  _T7 = (int *)_T6;
  _T8 = *_T7;
  _T9 = (unsigned int)_T8;
  _TA = 1U << offset;
  _TB = _T9 | _TA;
  _T2[_T3] = (int)_TB;
}
void Cyc_Bitvec_clear(struct _fat_ptr bvec,int pos) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  int * _T2;
  int _T3;
  struct _fat_ptr _T4;
  int _T5;
  unsigned char * _T6;
  int * _T7;
  int _T8;
  unsigned int _T9;
  unsigned int _TA;
  unsigned int _TB;
  unsigned int _TC;
  int word = pos >> 5;
  int offset = pos & 31;
  _T0 = bvec;
  _T1 = _T0.curr;
  _T2 = (int *)_T1;
  _T3 = word;
  _T4 = bvec;
  _T5 = word;
  _T6 = _check_fat_subscript(_T4,sizeof(int),_T5);
  _T7 = (int *)_T6;
  _T8 = *_T7;
  _T9 = (unsigned int)_T8;
  _TA = 1U << offset;
  _TB = ~ _TA;
  _TC = _T9 & _TB;
  _T2[_T3] = (int)_TC;
}
long Cyc_Bitvec_get_and_set(struct _fat_ptr bvec,int pos) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  int * _T3;
  int _T4;
  int _T5;
  long _T6;
  struct _fat_ptr _T7;
  unsigned char * _T8;
  int * _T9;
  int _TA;
  int _TB;
  unsigned int _TC;
  unsigned int _TD;
  unsigned int _TE;
  long _TF;
  int word = pos >> 5;
  int offset = pos & 31;
  _T0 = bvec;
  _T1 = word;
  _T2 = _check_fat_subscript(_T0,sizeof(int),_T1);
  _T3 = (int *)_T2;
  { int slot = *_T3;
    _T4 = slot >> offset;
    _T5 = _T4 & 1;
    { long ans = _T5 == 1;
      _T6 = ans;
      if (_T6) { goto _TL0;
      }else { goto _TL2;
      }
      _TL2: _T7 = bvec;
      _T8 = _T7.curr;
      _T9 = (int *)_T8;
      _TA = word;
      _TB = slot;
      _TC = (unsigned int)_TB;
      _TD = 1U << offset;
      _TE = _TC | _TD;
      _T9[_TA] = (int)_TE;
      goto _TL1;
      _TL0: _TL1: _TF = ans;
      return _TF;
    }
  }
}
void Cyc_Bitvec_union_two(struct _fat_ptr dest,struct _fat_ptr src1,struct _fat_ptr src2) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  unsigned int _T6;
  int (* _T7)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T8)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  int _TB;
  unsigned int _TC;
  unsigned int _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  int * _T10;
  int * _T11;
  int _T12;
  struct _fat_ptr _T13;
  unsigned char * _T14;
  int * _T15;
  int * _T16;
  int _T17;
  int _T18;
  struct _fat_ptr _T19;
  unsigned char * _T1A;
  int * _T1B;
  int * _T1C;
  int _T1D;
  int _T1E;
  _T0 = dest;
  { unsigned int len = _get_fat_size(_T0,sizeof(int));
    _T1 = len;
    _T2 = src1;
    _T3 = _get_fat_size(_T2,sizeof(int));
    if (_T1 > _T3) { goto _TL3;
    }
    _T4 = len;
    _T5 = src2;
    _T6 = _get_fat_size(_T5,sizeof(int));
    if (_T4 > _T6) { goto _TL3;
    }
    goto _TL4;
    _TL3: _T8 = Cyc___assert_fail;
    { int (* _T1F)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									    struct _fat_ptr,
									    unsigned int))_T8;
      _T7 = _T1F;
    }_T9 = _tag_fat("len <= numelts(src1) && len <= numelts(src2)",sizeof(char),
		    45U);
    _TA = _tag_fat("cyclone/library/std/bitvec.cyc",sizeof(char),31U);
    _T7(_T9,_TA,71U);
    _TL4: { int i = 0;
      _TL8: _TB = i;
      _TC = (unsigned int)_TB;
      _TD = len;
      if (_TC < _TD) { goto _TL6;
      }else { goto _TL7;
      }
      _TL6: _TE = dest;
      _TF = _TE.curr;
      _T10 = (int *)_TF;
      _T11 = _check_null(_T10);
      _T12 = i;
      _T13 = src1;
      _T14 = _T13.curr;
      _T15 = (int *)_T14;
      _T16 = _check_null(_T15);
      _T17 = i;
      _T18 = _T16[_T17];
      _T19 = src2;
      _T1A = _T19.curr;
      _T1B = (int *)_T1A;
      _T1C = _check_null(_T1B);
      _T1D = i;
      _T1E = _T1C[_T1D];
      _T11[_T12] = _T18 | _T1E;
      i = i + 1;
      goto _TL8;
      _TL7: ;
    }
  }
}
void Cyc_Bitvec_intersect_two(struct _fat_ptr dest,struct _fat_ptr src1,struct _fat_ptr src2) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  unsigned int _T6;
  int (* _T7)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T8)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  int _TB;
  unsigned int _TC;
  unsigned int _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  int * _T10;
  int * _T11;
  int _T12;
  struct _fat_ptr _T13;
  unsigned char * _T14;
  int * _T15;
  int * _T16;
  int _T17;
  int _T18;
  struct _fat_ptr _T19;
  unsigned char * _T1A;
  int * _T1B;
  int * _T1C;
  int _T1D;
  int _T1E;
  _T0 = dest;
  { unsigned int len = _get_fat_size(_T0,sizeof(int));
    _T1 = len;
    _T2 = src1;
    _T3 = _get_fat_size(_T2,sizeof(int));
    if (_T1 > _T3) { goto _TL9;
    }
    _T4 = len;
    _T5 = src2;
    _T6 = _get_fat_size(_T5,sizeof(int));
    if (_T4 > _T6) { goto _TL9;
    }
    goto _TLA;
    _TL9: _T8 = Cyc___assert_fail;
    { int (* _T1F)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									    struct _fat_ptr,
									    unsigned int))_T8;
      _T7 = _T1F;
    }_T9 = _tag_fat("len <= numelts(src1) && len <= numelts(src2)",sizeof(char),
		    45U);
    _TA = _tag_fat("cyclone/library/std/bitvec.cyc",sizeof(char),31U);
    _T7(_T9,_TA,78U);
    _TLA: { int i = 0;
      _TLE: _TB = i;
      _TC = (unsigned int)_TB;
      _TD = len;
      if (_TC < _TD) { goto _TLC;
      }else { goto _TLD;
      }
      _TLC: _TE = dest;
      _TF = _TE.curr;
      _T10 = (int *)_TF;
      _T11 = _check_null(_T10);
      _T12 = i;
      _T13 = src1;
      _T14 = _T13.curr;
      _T15 = (int *)_T14;
      _T16 = _check_null(_T15);
      _T17 = i;
      _T18 = _T16[_T17];
      _T19 = src2;
      _T1A = _T19.curr;
      _T1B = (int *)_T1A;
      _T1C = _check_null(_T1B);
      _T1D = i;
      _T1E = _T1C[_T1D];
      _T11[_T12] = _T18 & _T1E;
      i = i + 1;
      goto _TLE;
      _TLD: ;
    }
  }
}
void Cyc_Bitvec_diff_two(struct _fat_ptr dest,struct _fat_ptr src1,struct _fat_ptr src2) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  unsigned int _T6;
  int (* _T7)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T8)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  int _TB;
  unsigned int _TC;
  unsigned int _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  int * _T10;
  int * _T11;
  int _T12;
  struct _fat_ptr _T13;
  unsigned char * _T14;
  int * _T15;
  int * _T16;
  int _T17;
  int _T18;
  struct _fat_ptr _T19;
  unsigned char * _T1A;
  int * _T1B;
  int * _T1C;
  int _T1D;
  int _T1E;
  int _T1F;
  _T0 = dest;
  { unsigned int len = _get_fat_size(_T0,sizeof(int));
    _T1 = len;
    _T2 = src1;
    _T3 = _get_fat_size(_T2,sizeof(int));
    if (_T1 > _T3) { goto _TLF;
    }
    _T4 = len;
    _T5 = src2;
    _T6 = _get_fat_size(_T5,sizeof(int));
    if (_T4 > _T6) { goto _TLF;
    }
    goto _TL10;
    _TLF: _T8 = Cyc___assert_fail;
    { int (* _T20)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									    struct _fat_ptr,
									    unsigned int))_T8;
      _T7 = _T20;
    }_T9 = _tag_fat("len <= numelts(src1) && len <= numelts(src2)",sizeof(char),
		    45U);
    _TA = _tag_fat("cyclone/library/std/bitvec.cyc",sizeof(char),31U);
    _T7(_T9,_TA,85U);
    _TL10: { int i = 0;
      _TL14: _TB = i;
      _TC = (unsigned int)_TB;
      _TD = len;
      if (_TC < _TD) { goto _TL12;
      }else { goto _TL13;
      }
      _TL12: _TE = dest;
      _TF = _TE.curr;
      _T10 = (int *)_TF;
      _T11 = _check_null(_T10);
      _T12 = i;
      _T13 = src1;
      _T14 = _T13.curr;
      _T15 = (int *)_T14;
      _T16 = _check_null(_T15);
      _T17 = i;
      _T18 = _T16[_T17];
      _T19 = src2;
      _T1A = _T19.curr;
      _T1B = (int *)_T1A;
      _T1C = _check_null(_T1B);
      _T1D = i;
      _T1E = _T1C[_T1D];
      _T1F = ~ _T1E;
      _T11[_T12] = _T18 & _T1F;
      i = i + 1;
      goto _TL14;
      _TL13: ;
    }
  }
}
long Cyc_Bitvec_compare_two(struct _fat_ptr src1,struct _fat_ptr src2) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  int (* _T4)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T5)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned int _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  unsigned char * _TC;
  int * _TD;
  int * _TE;
  int _TF;
  int _T10;
  struct _fat_ptr _T11;
  unsigned char * _T12;
  int * _T13;
  int * _T14;
  int _T15;
  int _T16;
  _T0 = src1;
  { unsigned int len = _get_fat_size(_T0,sizeof(int));
    _T1 = len;
    _T2 = src2;
    _T3 = _get_fat_size(_T2,sizeof(int));
    if (_T1 > _T3) { goto _TL15;
    }
    goto _TL16;
    _TL15: _T5 = Cyc___assert_fail;
    { int (* _T17)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									    struct _fat_ptr,
									    unsigned int))_T5;
      _T4 = _T17;
    }_T6 = _tag_fat("len <= numelts(src2)",sizeof(char),21U);
    _T7 = _tag_fat("cyclone/library/std/bitvec.cyc",sizeof(char),31U);
    _T4(_T6,_T7,92U);
    _TL16: { int i = 0;
      _TL1A: _T8 = i;
      _T9 = (unsigned int)_T8;
      _TA = len;
      if (_T9 < _TA) { goto _TL18;
      }else { goto _TL19;
      }
      _TL18: _TB = src1;
      _TC = _TB.curr;
      _TD = (int *)_TC;
      _TE = _check_null(_TD);
      _TF = i;
      _T10 = _TE[_TF];
      _T11 = src2;
      _T12 = _T11.curr;
      _T13 = (int *)_T12;
      _T14 = _check_null(_T13);
      _T15 = i;
      _T16 = _T14[_T15];
      if (_T10 == _T16) { goto _TL1B;
      }
      return 0;
      _TL1B: i = i + 1;
      goto _TL1A;
      _TL19: ;
    }return 1;
  }
}
struct _fat_ptr Cyc_Bitvec_new_empty(int sz) {
  struct _fat_ptr _T0;
  int _T1;
  int _T2;
  int * _T3;
  unsigned int _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  _T1 = sz / 32;
  _T2 = _T1 + 1;
  { unsigned int _T7 = (unsigned int)_T2;
    _T4 = _check_times(_T7,sizeof(int));
    { int * _T8 = _cycalloc_atomic(_T4);
      { unsigned int _T9 = _T7;
	unsigned int i;
	i = 0;
	_TL20: if (i < _T9) { goto _TL1E;
	}else { goto _TL1F;
	}
	_TL1E: _T5 = i;
	_T8[_T5] = 0;
	i = i + 1;
	goto _TL20;
	_TL1F: ;
      }_T3 = (int *)_T8;
    }_T0 = _tag_fat(_T3,sizeof(int),_T7);
  }{ struct _fat_ptr ans = _T0;
    _T6 = ans;
    return _T6;
  }
}
struct _fat_ptr Cyc_Bitvec_new_full(int sz) {
  struct _fat_ptr _T0;
  int _T1;
  int _T2;
  int * _T3;
  unsigned int _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  _T1 = sz / 32;
  _T2 = _T1 + 1;
  { unsigned int _T7 = (unsigned int)_T2;
    _T4 = _check_times(_T7,sizeof(int));
    { int * _T8 = _cycalloc_atomic(_T4);
      { unsigned int _T9 = _T7;
	unsigned int i;
	i = 0;
	_TL24: if (i < _T9) { goto _TL22;
	}else { goto _TL23;
	}
	_TL22: _T5 = i;
	_T8[_T5] = -1;
	i = i + 1;
	goto _TL24;
	_TL23: ;
      }_T3 = (int *)_T8;
    }_T0 = _tag_fat(_T3,sizeof(int),_T7);
  }{ struct _fat_ptr ans = _T0;
    _T6 = ans;
    return _T6;
  }
}
struct _fat_ptr Cyc_Bitvec_new_copy(struct _fat_ptr old) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  int _T2;
  struct _fat_ptr _T3;
  _T0 = old;
  _T1 = _get_fat_size(_T0,sizeof(int));
  _T2 = (int)_T1;
  { struct _fat_ptr copy = Cyc_Bitvec_new_empty(_T2);
    Cyc_Bitvec_union_two(copy,copy,old);
    _T3 = copy;
    return _T3;
  }
}
struct _fat_ptr Cyc_Bitvec_from_list(struct Cyc_Dict_Dict d,int (* f)(void *),
				     int sz,struct Cyc_List_List * l) {
  struct _fat_ptr _T0;
  int _T1;
  int _T2;
  int * _T3;
  unsigned int _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  struct Cyc_Dict_Dict _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  void * _TA;
  int _TB;
  struct Cyc_List_List * _TC;
  struct _fat_ptr _TD;
  _T1 = sz % 32;
  _T2 = _T1 + 1;
  { unsigned int _TE = (unsigned int)_T2;
    _T4 = _check_times(_TE,sizeof(int));
    { int * _TF = _cycalloc_atomic(_T4);
      { unsigned int _T10 = _TE;
	unsigned int i;
	i = 0;
	_TL28: if (i < _T10) { goto _TL26;
	}else { goto _TL27;
	}
	_TL26: _T5 = i;
	_TF[_T5] = 0;
	i = i + 1;
	goto _TL28;
	_TL27: ;
      }_T3 = (int *)_TF;
    }_T0 = _tag_fat(_T3,sizeof(int),_TE);
  }{ struct _fat_ptr ans = _T0;
    _TL2C: if (l != 0) { goto _TL2A;
    }else { goto _TL2B;
    }
    _TL2A: _T6 = ans;
    _T7 = d;
    _T8 = l;
    _T9 = _T8->hd;
    _TA = Cyc_Dict_lookup(_T7,_T9);
    _TB = f(_TA);
    Cyc_Bitvec_set(_T6,_TB);
    _TC = l;
    l = _TC->tl;
    goto _TL2C;
    _TL2B: _TD = ans;
    return _TD;
  }
}
struct Cyc_List_List * Cyc_Bitvec_to_sorted_list(struct _fat_ptr bvec,int sz) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  int * _T3;
  int _T4;
  int _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  unsigned int _T8;
  int _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * ans = 0;
  { int pos = sz - 1;
    _TL30: if (pos >= 0) { goto _TL2E;
    }else { goto _TL2F;
    }
    _TL2E: { int word = pos >> 5;
      _T0 = bvec;
      _T1 = word;
      _T2 = _check_fat_subscript(_T0,sizeof(int),_T1);
      _T3 = (int *)_T2;
      { int bits = *_T3;
	int offset = pos & 31;
	_TL34: if (offset >= 0) { goto _TL32;
	}else { goto _TL33;
	}
	_TL32: _T4 = bits >> offset;
	_T5 = _T4 & 1;
	if (_T5 != 1) { goto _TL35;
	}
	{ unsigned int _TB = 1;
	  _T8 = _check_times(_TB,sizeof(struct Cyc_List_List));
	  { struct Cyc_List_List * _TC = _cycalloc(_T8);
	    _T9 = pos;
	    (_TC[0]).hd = (void *)_T9;
	    (_TC[0]).tl = ans;
	    _T7 = (struct Cyc_List_List *)_TC;
	  }_T6 = _T7;
	}ans = _T6;
	goto _TL36;
	_TL35: _TL36: offset = offset + -1;
	pos = pos + -1;
	goto _TL34;
	_TL33: ;
      }
    }goto _TL30;
    _TL2F: ;
  }_TA = ans;
  return _TA;
}
void Cyc_Bitvec_clear_all(struct _fat_ptr bvec) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned int _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  unsigned char * _T5;
  int * _T6;
  int * _T7;
  int _T8;
  _T0 = bvec;
  { unsigned int len = _get_fat_size(_T0,sizeof(int));
    int i = 0;
    _TL3A: _T1 = i;
    _T2 = (unsigned int)_T1;
    _T3 = len;
    if (_T2 < _T3) { goto _TL38;
    }else { goto _TL39;
    }
    _TL38: _T4 = bvec;
    _T5 = _T4.curr;
    _T6 = (int *)_T5;
    _T7 = _check_null(_T6);
    _T8 = i;
    _T7[_T8] = 0;
    i = i + 1;
    goto _TL3A;
    _TL39: ;
  }
}
void Cyc_Bitvec_set_all(struct _fat_ptr bvec) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned int _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  unsigned char * _T5;
  int * _T6;
  int * _T7;
  int _T8;
  _T0 = bvec;
  { unsigned int len = _get_fat_size(_T0,sizeof(int));
    int i = 0;
    _TL3E: _T1 = i;
    _T2 = (unsigned int)_T1;
    _T3 = len;
    if (_T2 < _T3) { goto _TL3C;
    }else { goto _TL3D;
    }
    _TL3C: _T4 = bvec;
    _T5 = _T4.curr;
    _T6 = (int *)_T5;
    _T7 = _check_null(_T6);
    _T8 = i;
    _T7[_T8] = -1;
    i = i + 1;
    goto _TL3E;
    _TL3D: ;
  }
}
long Cyc_Bitvec_all_set(struct _fat_ptr bvec,int sz) {
  int _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  int (* _T4)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T5)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  unsigned char * _T9;
  int * _TA;
  int * _TB;
  int _TC;
  int _TD;
  long _TE;
  int words = sz >> 5;
  _T0 = words;
  _T1 = (unsigned int)_T0;
  _T2 = bvec;
  _T3 = _get_fat_size(_T2,sizeof(int));
  if (_T1 >= _T3) { goto _TL3F;
  }
  goto _TL40;
  _TL3F: _T5 = Cyc___assert_fail;
  { int (* _TF)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									 struct _fat_ptr,
									 unsigned int))_T5;
    _T4 = _TF;
  }_T6 = _tag_fat("words < numelts(bvec)",sizeof(char),22U);
  _T7 = _tag_fat("cyclone/library/std/bitvec.cyc",sizeof(char),31U);
  _T4(_T6,_T7,148U);
  _TL40: { int i = 0;
    _TL44: if (i < words) { goto _TL42;
    }else { goto _TL43;
    }
    _TL42: _T8 = bvec;
    _T9 = _T8.curr;
    _TA = (int *)_T9;
    _TB = _check_null(_TA);
    _TC = i;
    _TD = _TB[_TC];
    if (_TD == -1) { goto _TL45;
    }
    return 0;
    _TL45: i = i + 1;
    goto _TL44;
    _TL43: ;
  }{ int i = words * 32;
    _TL4A: if (i < sz) { goto _TL48;
    }else { goto _TL49;
    }
    _TL48: _TE = Cyc_Bitvec_get(bvec,i);
    if (_TE) { goto _TL4B;
    }else { goto _TL4D;
    }
    _TL4D: return 0;
    _TL4B: i = i + 1;
    goto _TL4A;
    _TL49: ;
  }return 1;
}
void Cyc_Bitvec_print_bvec(struct _fat_ptr bvec) {
  int _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  unsigned int _T4;
  struct Cyc_Int_pa_PrintArg_struct _T5;
  int _T6;
  long _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  { int i = 0;
    _TL51: _T0 = i;
    _T1 = (unsigned int)_T0;
    _T2 = bvec;
    _T3 = _get_fat_size(_T2,sizeof(int));
    _T4 = 32U * _T3;
    if (_T1 < _T4) { goto _TL4F;
    }else { goto _TL50;
    }
    _TL4F: { struct Cyc_Int_pa_PrintArg_struct _TC;
      _TC.tag = 1;
      _T7 = Cyc_Bitvec_get(bvec,i);
      if (! _T7) { goto _TL52;
      }
      _T6 = 1;
      goto _TL53;
      _TL52: _T6 = 0;
      _TL53: _TC.f1 = (unsigned long)_T6;
      _T5 = _TC;
    }{ struct Cyc_Int_pa_PrintArg_struct _TC = _T5;
      void * _TD[1];
      _TD[0] = &_TC;
      _T8 = _tag_fat("%d",sizeof(char),3U);
      _T9 = _tag_fat(_TD,sizeof(void *),1);
      Cyc_printf(_T8,_T9);
    }i = i + 1;
    goto _TL51;
    _TL50: ;
  }_TA = _tag_fat("\n",sizeof(char),2U);
  _TB = _tag_fat(0U,sizeof(void *),0);
  Cyc_printf(_TA,_TB);
}
