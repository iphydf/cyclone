// vararg for printf functions.  The functions themselves are defined
// in printf.cyc.
extern datatype PrintArg<`r::E> {
  String_pa(const char ? @nozeroterm`r);
  Int_pa(unsigned long);
  Double_pa(double);
  LongDouble_pa(long double);
  ShortPtr_pa(short @`r);
  IntPtr_pa(unsigned long @`r);
};
typedef datatype PrintArg<`r> @`r parg_t<`r>;
extern int printf(const char ?, ... inject parg_t)
__attribute__((format(printf,1,2)))
    ;
