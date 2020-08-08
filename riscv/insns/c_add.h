require_extension('C');
require(insn.rvc_rs2() != 0);
WRITE_RD(sext_xlen(RVC_RS1 + RVC_RS2));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
