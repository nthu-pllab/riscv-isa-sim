require_extension('C');
MMU.store_uint32(RVC_SP + insn.rvc_swsp_imm(), RVC_RS2);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
