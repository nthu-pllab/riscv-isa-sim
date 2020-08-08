require_extension('C');
require_rv64;
WRITE_RVC_RS1S(sext32(RVC_RS1S + RVC_RS2S));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
