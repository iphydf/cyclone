#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

int main(int argc, char *argv[]) {
  char const *arch;

  if (argc < 2)
    return 1;

#ifdef __i386__
  arch = "i386";
#elif defined(__x86_64__)
  arch = "x86_64";
#else
  arch = "unknown";
#endif

  printf("char const *const Carch = \"%s\";\n", arch);
  printf("char const *const Cversion = \"1.0\";\n");
  printf("int const Wchar_t_unsigned = %d;\n", (wchar_t)-1 > 0);
  printf("int const Sizeof_wchar_t = %u;\n", (unsigned)sizeof(wchar_t));

  return 0;
}
