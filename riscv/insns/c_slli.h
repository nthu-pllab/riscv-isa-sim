require_extension('C');
require(insn.rvc_zimm() < xlen);
WRITE_RD(sext_xlen(RVC_RS1 << insn.rvc_zimm()));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
