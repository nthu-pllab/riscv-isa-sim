require_extension('D');
require_fp;
WRITE_RD(f64_lt(f64(FRS1), f64(FRS2)));
set_fp_exceptions;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
