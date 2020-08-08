require_extension('F');
require_fp;
softfloat_roundingMode = RM;
WRITE_RD(sext32(f32_to_ui32(f32(FRS1), RM, true)));
set_fp_exceptions;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
