require_extension('F');
require_fp;
WRITE_RD(f32_lt(f32(FRS1), f32(FRS2)));
set_fp_exceptions;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
