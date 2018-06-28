#include <cyc_include.h>
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
struct _fat_ptr Cyc_Core_new_string(unsigned int);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
 struct Cyc_Lineno_Pos {
  struct _fat_ptr logical_file;
  struct _fat_ptr line;
  int line_no;
  int col;
};
struct Cyc_Lineno_Pos * Cyc_Lineno_pos_of_abs(struct _fat_ptr,int);
struct Cyc_Position_Error;
extern long Cyc_Position_use_gcc_style_location;
 struct _tuple0 {
  struct _fat_ptr f0;
  unsigned int f1;
};
static struct _tuple0 Cyc_Position_seg_to_loc(unsigned int);
long Cyc_Position_use_gcc_style_location = 0;
static char _TmpG0[1U] = "";
static struct _fat_ptr Cyc_Position_source = {(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
					      (unsigned char *)_TmpG0 + 1U};
unsigned int Cyc_Position_segment_join(unsigned int s1,unsigned int s2) {
  unsigned int _T0;
  unsigned int _T1;
  unsigned int _T2;
  if (s1 != 0U) { goto _TL0;
  }
  _T0 = s2;
  return _T0;
  _TL0: if (s2 != 0U) { goto _TL2;
  }
  _T1 = s1;
  return _T1;
  _TL2: _T2 = s1;
  return _T2;
}
long Cyc_Position_segment_equals(unsigned int s1,unsigned int s2) {
  int _T0;
  _T0 = s1 == s2;
  return _T0;
}
struct _fat_ptr Cyc_Position_string_of_loc(unsigned int seg) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  int _T2;
  long _T3;
  struct _fat_ptr _T4;
  struct Cyc_String_pa_PrintArg_struct _T5;
  struct Cyc_Lineno_Pos * _T6;
  struct Cyc_Int_pa_PrintArg_struct _T7;
  struct Cyc_Lineno_Pos * _T8;
  int _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct Cyc_String_pa_PrintArg_struct _TD;
  struct Cyc_Lineno_Pos * _TE;
  struct Cyc_Int_pa_PrintArg_struct _TF;
  struct Cyc_Lineno_Pos * _T10;
  int _T11;
  struct Cyc_Int_pa_PrintArg_struct _T12;
  struct Cyc_Lineno_Pos * _T13;
  int _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct _tuple0 _T17 = Cyc_Position_seg_to_loc(seg);
  unsigned int _T18;
  struct _fat_ptr _T19;
  _T19 = _T17.f0;
  _T18 = _T17.f1;
  { struct _fat_ptr source = _T19;
    unsigned int loc = _T18;
    _T0 = source;
    _T1 = loc;
    _T2 = (int)_T1;
    { struct Cyc_Lineno_Pos * pos = Cyc_Lineno_pos_of_abs(_T0,_T2);
      _T3 = Cyc_Position_use_gcc_style_location;
      if (! _T3) { goto _TL4;
      }
      { struct Cyc_String_pa_PrintArg_struct _T1A;
	_T1A.tag = 0;
	_T6 = pos;
	_T1A.f1 = _T6->logical_file;
	_T5 = _T1A;
      }{ struct Cyc_String_pa_PrintArg_struct _T1A = _T5;
	{ struct Cyc_Int_pa_PrintArg_struct _T1B;
	  _T1B.tag = 1;
	  _T8 = pos;
	  _T9 = _T8->line_no;
	  _T1B.f1 = (unsigned long)_T9;
	  _T7 = _T1B;
	}{ struct Cyc_Int_pa_PrintArg_struct _T1B = _T7;
	  void * _T1C[2];
	  _T1C[0] = &_T1A;
	  _T1C[1] = &_T1B;
	  _TA = _tag_fat("%s:%d",sizeof(char),6U);
	  _TB = _tag_fat(_T1C,sizeof(void *),2);
	  _T4 = Cyc_aprintf(_TA,_TB);
	}
      }return _T4;
      _TL4: { struct Cyc_String_pa_PrintArg_struct _T1A;
	_T1A.tag = 0;
	_TE = pos;
	_T1A.f1 = _TE->logical_file;
	_TD = _T1A;
      }{ struct Cyc_String_pa_PrintArg_struct _T1A = _TD;
	{ struct Cyc_Int_pa_PrintArg_struct _T1B;
	  _T1B.tag = 1;
	  _T10 = pos;
	  _T11 = _T10->line_no;
	  _T1B.f1 = (unsigned long)_T11;
	  _TF = _T1B;
	}{ struct Cyc_Int_pa_PrintArg_struct _T1B = _TF;
	  { struct Cyc_Int_pa_PrintArg_struct _T1C;
	    _T1C.tag = 1;
	    _T13 = pos;
	    _T14 = _T13->col;
	    _T1C.f1 = (unsigned long)_T14;
	    _T12 = _T1C;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T1C = _T12;
	    void * _T1D[3];
	    _T1D[0] = &_T1A;
	    _T1D[1] = &_T1B;
	    _T1D[2] = &_T1C;
	    _T15 = _tag_fat("%s:%d:%d",sizeof(char),9U);
	    _T16 = _tag_fat(_T1D,sizeof(void *),3);
	    _TC = Cyc_aprintf(_T15,_T16);
	  }
	}
      }return _TC;
    }
  }
}
static struct _fat_ptr Cyc_Position_string_of_pos_pr(struct Cyc_Lineno_Pos * pos) {
  long _T0;
  struct _fat_ptr _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct Cyc_Lineno_Pos * _T3;
  struct Cyc_Int_pa_PrintArg_struct _T4;
  struct Cyc_Lineno_Pos * _T5;
  int _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct Cyc_String_pa_PrintArg_struct _TA;
  struct Cyc_Lineno_Pos * _TB;
  struct Cyc_Int_pa_PrintArg_struct _TC;
  struct Cyc_Lineno_Pos * _TD;
  int _TE;
  struct Cyc_Int_pa_PrintArg_struct _TF;
  struct Cyc_Lineno_Pos * _T10;
  int _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  _T0 = Cyc_Position_use_gcc_style_location;
  if (! _T0) { goto _TL6;
  }
  { struct Cyc_String_pa_PrintArg_struct _T14;
    _T14.tag = 0;
    _T3 = pos;
    _T14.f1 = _T3->logical_file;
    _T2 = _T14;
  }{ struct Cyc_String_pa_PrintArg_struct _T14 = _T2;
    { struct Cyc_Int_pa_PrintArg_struct _T15;
      _T15.tag = 1;
      _T5 = pos;
      _T6 = _T5->line_no;
      _T15.f1 = (unsigned long)_T6;
      _T4 = _T15;
    }{ struct Cyc_Int_pa_PrintArg_struct _T15 = _T4;
      void * _T16[2];
      _T16[0] = &_T14;
      _T16[1] = &_T15;
      _T7 = _tag_fat("%s:%d",sizeof(char),6U);
      _T8 = _tag_fat(_T16,sizeof(void *),2);
      _T1 = Cyc_aprintf(_T7,_T8);
    }
  }return _T1;
  _TL6: { struct Cyc_String_pa_PrintArg_struct _T14;
    _T14.tag = 0;
    _TB = pos;
    _T14.f1 = _TB->logical_file;
    _TA = _T14;
  }{ struct Cyc_String_pa_PrintArg_struct _T14 = _TA;
    { struct Cyc_Int_pa_PrintArg_struct _T15;
      _T15.tag = 1;
      _TD = pos;
      _TE = _TD->line_no;
      _T15.f1 = (unsigned long)_TE;
      _TC = _T15;
    }{ struct Cyc_Int_pa_PrintArg_struct _T15 = _TC;
      { struct Cyc_Int_pa_PrintArg_struct _T16;
	_T16.tag = 1;
	_T10 = pos;
	_T11 = _T10->col;
	_T16.f1 = (unsigned long)_T11;
	_TF = _T16;
      }{ struct Cyc_Int_pa_PrintArg_struct _T16 = _TF;
	void * _T17[3];
	_T17[0] = &_T14;
	_T17[1] = &_T15;
	_T17[2] = &_T16;
	_T12 = _tag_fat("%s:%d:%d",sizeof(char),9U);
	_T13 = _tag_fat(_T17,sizeof(void *),3);
	_T9 = Cyc_aprintf(_T12,_T13);
      }
    }
  }return _T9;
}
struct _fat_ptr Cyc_Position_string_of_segment(unsigned int s) {
  struct _fat_ptr _T0;
  _T0 = Cyc_Position_string_of_loc(s);
  return _T0;
}
static struct Cyc_Lineno_Pos * Cyc_Position_new_pos() {
  struct Cyc_Lineno_Pos * _T0;
  { struct Cyc_Lineno_Pos * _T1 = _cycalloc(sizeof(struct Cyc_Lineno_Pos));
    _T1->logical_file = _tag_fat("",sizeof(char),1U);
    _T1->line = Cyc_Core_new_string(0U);
    _T1->line_no = 0;
    _T1->col = 0;
    _T0 = (struct Cyc_Lineno_Pos *)_T1;
  }return _T0;
}
struct Cyc_List_List * Cyc_Position_strings_of_segments(struct Cyc_List_List * segs) {
  struct Cyc_List_List * _T0;
  struct _fat_ptr * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  unsigned int _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * ans = 0;
  _TLB: if (segs != 0) { goto _TL9;
  }else { goto _TLA;
  }
  _TL9: { struct Cyc_List_List * _T7 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct _fat_ptr * _T8 = _cycalloc(sizeof(struct _fat_ptr));
      _T2 = segs;
      _T3 = _T2->hd;
      _T4 = (unsigned int)_T3;
      *_T8 = Cyc_Position_string_of_segment(_T4);
      _T1 = (struct _fat_ptr *)_T8;
    }_T7->hd = _T1;
    _T7->tl = ans;
    _T0 = (struct Cyc_List_List *)_T7;
  }ans = _T0;
  _T5 = segs;
  segs = _T5->tl;
  goto _TLB;
  _TLA: _T6 = ans;
  return _T6;
}
 struct Cyc_Position_Error {
  struct _fat_ptr source;
  unsigned int seg;
  struct _fat_ptr desc;
};
struct Cyc_Position_Error * Cyc_Position_mk_err(unsigned int l,struct _fat_ptr desc) {
  struct Cyc_Position_Error * _T0;
  struct _tuple0 _T1 = Cyc_Position_seg_to_loc(l);
  unsigned int _T2;
  struct _fat_ptr _T3;
  _T3 = _T1.f0;
  _T2 = _T1.f1;
  { struct _fat_ptr source = _T3;
    unsigned int loc = _T2;
    { struct Cyc_Position_Error * _T4 = _cycalloc(sizeof(struct Cyc_Position_Error));
      _T4->source = source;
      _T4->seg = l;
      _T4->desc = desc;
      _T0 = (struct Cyc_Position_Error *)_T4;
    }return _T0;
  }
}
unsigned int Cyc_Position_get_seg(struct Cyc_Position_Error * e) {
  struct Cyc_Position_Error * _T0;
  unsigned int _T1;
  _T0 = e;
  _T1 = _T0->seg;
  return _T1;
}
struct _fat_ptr Cyc_Position_get_desc(struct Cyc_Position_Error * e) {
  struct Cyc_Position_Error * _T0;
  struct _fat_ptr _T1;
  _T0 = e;
  _T1 = _T0->desc;
  return _T1;
}
void Cyc_Position_reset_position(struct _fat_ptr s) {
  Cyc_Position_source = s;
}
void Cyc_Position_set_position_file(struct _fat_ptr s) {
  Cyc_Position_source = s;
}
struct _fat_ptr Cyc_Position_get_position_file() {
  struct _fat_ptr _T0;
  _T0 = Cyc_Position_source;
  return _T0;
}
struct _fat_ptr Cyc_Position_get_line_directive(unsigned int s) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned int _T4;
  int _T5;
  struct _fat_ptr _T6;
  struct Cyc_Int_pa_PrintArg_struct _T7;
  struct Cyc_Lineno_Pos * _T8;
  int _T9;
  struct Cyc_String_pa_PrintArg_struct _TA;
  struct Cyc_Lineno_Pos * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct _tuple0 _TF = Cyc_Position_seg_to_loc(s);
  unsigned int _T10;
  struct _fat_ptr _T11;
  _T11 = _TF.f0;
  _T10 = _TF.f1;
  { struct _fat_ptr source = _T11;
    unsigned int loc = _T10;
    _T0 = source;
    _T1 = _T0.curr;
    _T2 = (unsigned int)_T1;
    if (! _T2) { goto _TLC;
    }
    _T3 = source;
    _T4 = loc;
    _T5 = (int)_T4;
    { struct Cyc_Lineno_Pos * pos_s = Cyc_Lineno_pos_of_abs(_T3,_T5);
      if (pos_s == 0) { goto _TLE;
      }
      { struct Cyc_Int_pa_PrintArg_struct _T12;
	_T12.tag = 1;
	_T8 = pos_s;
	_T9 = _T8->line_no;
	_T12.f1 = (unsigned long)_T9;
	_T7 = _T12;
      }{ struct Cyc_Int_pa_PrintArg_struct _T12 = _T7;
	{ struct Cyc_String_pa_PrintArg_struct _T13;
	  _T13.tag = 0;
	  _TB = pos_s;
	  _T13.f1 = _TB->logical_file;
	  _TA = _T13;
	}{ struct Cyc_String_pa_PrintArg_struct _T13 = _TA;
	  void * _T14[2];
	  _T14[0] = &_T12;
	  _T14[1] = &_T13;
	  _TC = _tag_fat("\n#line %d \"%s\"\n",sizeof(char),16U);
	  _TD = _tag_fat(_T14,sizeof(void *),2);
	  _T6 = Cyc_aprintf(_TC,_TD);
	}
      }return _T6;
      _TLE: ;
    }goto _TLD;
    _TLC: _TLD: _TE = _tag_fat(0,0,0);
    return _TE;
  }
}
unsigned int Cyc_Position_loc_to_seg(unsigned int loc) {
  unsigned int _T0;
  _T0 = loc;
  return _T0;
}
static struct _tuple0 Cyc_Position_seg_to_loc(unsigned int seg) {
  struct _tuple0 _T0;
  { struct _tuple0 _T1;
    _T1.f0 = Cyc_Position_source;
    _T1.f1 = seg;
    _T0 = _T1;
  }return _T0;
}
