require_extension('C');
require_extension('D');
require_fp;
MMU.store_uint64(RVC_SP + insn.rvc_sdsp_imm(), RVC_FRS2.v[0]);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
