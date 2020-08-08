require_extension('D');
require_rv64;
require_fp;
WRITE_FRD(f64(RS1));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
