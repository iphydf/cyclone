#include <cyc_include.h>
struct Cyc___cycFILE;
struct __abstractFILE;
extern struct Cyc___cycFILE * Cyc_fromCfile(struct __abstractFILE *);
struct Cyc___cycFILE;
extern struct _fat_ptr Cyc_strcpy(struct _fat_ptr,struct _fat_ptr);
extern struct __abstractFILE * tmpfile();
extern char * tmpnam(char *);
struct Cyc___cycFILE * Cyc_tmpfile() {
  struct Cyc___cycFILE * _T0;
  struct __abstractFILE * cf = tmpfile();
  _T0 = Cyc_fromCfile(cf);
  return _T0;
}
struct _fat_ptr Cyc_tmpnam(struct _fat_ptr s) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  void * _T6;
  void * _T7;
  unsigned int _T8;
  struct _fat_ptr _T9;
  void * _TA;
  void * _TB;
  unsigned int _TC;
  char * name = tmpnam(0);
  _T1 = s;
  _T2 = _T1.curr;
  _T3 = (unsigned int)_T2;
  if (! _T3) { goto _TL0;
  }
  _T4 = s;
  { char * _TD = name;
    _T6 = (void *)_TD;
    _T7 = (void *)_TD;
    _T8 = _get_zero_arr_size_char(_T7,1U);
    _T5 = _tag_fat(_T6,sizeof(char),_T8);
  }_T0 = Cyc_strcpy(_T4,_T5);
  goto _TL1;
  _TL0: { char * _TD = name;
    _TA = (void *)_TD;
    _TB = (void *)_TD;
    _TC = _get_zero_arr_size_char(_TB,1U);
    _T9 = _tag_fat(_TA,sizeof(char),_TC);
  }_T0 = _T9;
  _TL1: return _T0;
}
