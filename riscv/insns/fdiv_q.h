require_extension('Q');
require_fp;
softfloat_roundingMode = RM;
WRITE_FRD(f128_div(f128(FRS1), f128(FRS2)));
set_fp_exceptions;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
