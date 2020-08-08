require_extension('C');
WRITE_RVC_RS1S(RVC_RS1S & insn.rvc_imm());
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
