#include <cyc_include.h>
extern long Cyc_Flags_warn_override;
extern long Cyc_Flags_tc_aggressive_warn;
extern long Cyc_Flags_warn_alias_coerce;
extern long Cyc_Flags_warn_region_coerce;
extern long Cyc_Flags_warn_lose_unique;
extern long Cyc_Flags_warn_bounds_checks;
extern long Cyc_Flags_warn_all_null_deref;
extern long Cyc_Flags_warn_assert;
enum Cyc_Flags_C_Compilers {
  Cyc_Flags_Gcc_c = 0U,
  Cyc_Flags_Vc_c = 1U
};
enum Cyc_Flags_Cyclone_Passes {
  Cyc_Flags_Cpp = 0U,
  Cyc_Flags_Parsing = 1U,
  Cyc_Flags_Binding = 2U,
  Cyc_Flags_CurrentRegion = 3U,
  Cyc_Flags_TypeChecking = 4U,
  Cyc_Flags_Jumps = 5U,
  Cyc_Flags_FlowAnalysis = 6U,
  Cyc_Flags_VCGen = 7U,
  Cyc_Flags_CheckInsertion = 8U,
  Cyc_Flags_Toc = 9U,
  Cyc_Flags_AggregateRemoval = 10U,
  Cyc_Flags_LabelRemoval = 11U,
  Cyc_Flags_TempRename = 12U,
  Cyc_Flags_CastRemoval = 13U,
  Cyc_Flags_EvalOrder = 14U,
  Cyc_Flags_AllPasses = 15U
};
extern enum Cyc_Flags_Cyclone_Passes Cyc_Flags_stop_after_pass;
long Cyc_Flags_verbose = 0;
long Cyc_Flags_warn_alias_coerce = 0;
long Cyc_Flags_warn_region_coerce = 0;
enum Cyc_Flags_C_Compilers Cyc_Flags_c_compiler = Cyc_Flags_Gcc_c;
long Cyc_Flags_porting_c_code = 0;
long Cyc_Flags_no_regions = 0;
long Cyc_Flags_no_reaps = 0;
long Cyc_Flags_override_fat = 0;
long Cyc_Flags_resolve = 0;
long Cyc_Flags_interproc = 0;
long Cyc_Flags_no_merge = 1;
long Cyc_Flags_no_register = 0;
long Cyc_Flags_noexpand_r = 0;
long Cyc_Flags_warn_bounds_checks = 0;
long Cyc_Flags_warn_all_null_deref = 0;
long Cyc_Flags_warn_override = 0;
long Cyc_Flags_warn_lose_unique = 0;
long Cyc_Flags_tc_aggressive_warn = 0;
enum Cyc_Flags_Cyclone_Passes Cyc_Flags_stop_after_pass = Cyc_Flags_AllPasses;
long Cyc_Flags_print_parser_state_and_token = 0;
long Cyc_Flags_allpaths = 1;
long Cyc_Flags_debug_assn = 0;
long Cyc_Flags_print_unprovable = 0;
long Cyc_Flags_warn_assert = 0;
unsigned int Cyc_Flags_max_vc_summary = 500U;
unsigned int Cyc_Flags_max_vc_paths = 33U;
unsigned int Cyc_Flags_max_vc_term_size = 100000U;
long Cyc_Flags_better_widen = 0;
void Cyc_Flags_set_all_warnings() {
  Cyc_Flags_warn_bounds_checks = 1;
  Cyc_Flags_warn_all_null_deref = 1;
  Cyc_Flags_warn_lose_unique = 1;
  Cyc_Flags_warn_alias_coerce = 1;
  Cyc_Flags_warn_region_coerce = 1;
  Cyc_Flags_tc_aggressive_warn = 1;
  Cyc_Flags_warn_override = 1;
  Cyc_Flags_warn_assert = 1;
}
void Cyc_Flags_set_parseonly() {
  enum Cyc_Flags_Cyclone_Passes _T0;
  enum Cyc_Flags_Cyclone_Passes _T1;
  int _T2;
  _T1 = Cyc_Flags_stop_after_pass;
  _T2 = (int)_T1;
  if (_T2 >= 1) { goto _TL0;
  }
  _T0 = Cyc_Flags_stop_after_pass;
  goto _TL1;
  _TL0: _T0 = 1U;
  _TL1: Cyc_Flags_stop_after_pass = _T0;
}
void Cyc_Flags_set_crgnonly() {
  enum Cyc_Flags_Cyclone_Passes _T0;
  enum Cyc_Flags_Cyclone_Passes _T1;
  int _T2;
  _T1 = Cyc_Flags_stop_after_pass;
  _T2 = (int)_T1;
  if (_T2 >= 3) { goto _TL2;
  }
  _T0 = Cyc_Flags_stop_after_pass;
  goto _TL3;
  _TL2: _T0 = 3U;
  _TL3: Cyc_Flags_stop_after_pass = _T0;
}
void Cyc_Flags_set_tconly() {
  enum Cyc_Flags_Cyclone_Passes _T0;
  enum Cyc_Flags_Cyclone_Passes _T1;
  int _T2;
  _T1 = Cyc_Flags_stop_after_pass;
  _T2 = (int)_T1;
  if (_T2 >= 4) { goto _TL4;
  }
  _T0 = Cyc_Flags_stop_after_pass;
  goto _TL5;
  _TL4: _T0 = 4U;
  _TL5: Cyc_Flags_stop_after_pass = _T0;
}
void Cyc_Flags_set_cfonly() {
  enum Cyc_Flags_Cyclone_Passes _T0;
  enum Cyc_Flags_Cyclone_Passes _T1;
  int _T2;
  _T1 = Cyc_Flags_stop_after_pass;
  _T2 = (int)_T1;
  if (_T2 >= 6) { goto _TL6;
  }
  _T0 = Cyc_Flags_stop_after_pass;
  goto _TL7;
  _TL6: _T0 = 6U;
  _TL7: Cyc_Flags_stop_after_pass = _T0;
}
