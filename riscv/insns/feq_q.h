require_extension('Q');
require_fp;
WRITE_RD(f128_eq(f128(FRS1), f128(FRS2)));
set_fp_exceptions;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
