require_extension('F');
require_fp;
softfloat_roundingMode = RM;
WRITE_FRD(f32_mulAdd(f32(f32(FRS1).v ^ F32_SIGN), f32(FRS2), f32(FRS3)));
set_fp_exceptions;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
