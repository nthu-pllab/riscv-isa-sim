require_extension('C');
MMU.store_uint32(RVC_RS1S + insn.rvc_lw_imm(), RVC_RS2S);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
