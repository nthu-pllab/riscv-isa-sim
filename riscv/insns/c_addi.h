require_extension('C');
WRITE_RD(sext_xlen(RVC_RS1 + insn.rvc_imm()));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
