require_extension('C');
WRITE_RVC_RS2S(MMU.load_int32(RVC_RS1S + insn.rvc_lw_imm()));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
