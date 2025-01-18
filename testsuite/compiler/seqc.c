#include <cyc_include.h>
void Cyc_memcpy(struct _fat_ptr dest, struct _fat_ptr src, unsigned long n) {
  unsigned long i;
  if (n > _get_fat_size(src, sizeof(char)) || n > _get_fat_size(dest, sizeof(char))) {
    return;
  }
  for (i = 0U; i < n; ++i) {
    (_check_null((char *)dest.curr))[(int)i] = (_check_null((const char *)src.curr))[(int)i];
  }
}
