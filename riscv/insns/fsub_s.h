require_extension('F');
require_fp;
softfloat_roundingMode = RM;
WRITE_FRD(f32_sub(f32(FRS1), f32(FRS2)));
set_fp_exceptions;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
