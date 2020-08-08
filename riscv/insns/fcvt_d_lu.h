require_extension('D');
require_rv64;
require_fp;
softfloat_roundingMode = RM;
WRITE_FRD(ui64_to_f64(RS1));
set_fp_exceptions;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
