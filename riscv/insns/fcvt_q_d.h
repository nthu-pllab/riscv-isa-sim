require_extension('Q');
require_fp;
softfloat_roundingMode = RM;
WRITE_FRD(f64_to_f128(f64(FRS1)));
set_fp_exceptions;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
