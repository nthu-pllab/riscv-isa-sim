require_extension('C');
require_extension('D');
require_fp;
MMU.store_uint64(RVC_RS1S + insn.rvc_ld_imm(), RVC_FRS2S.v[0]);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
