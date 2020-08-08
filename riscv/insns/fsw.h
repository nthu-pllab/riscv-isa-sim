require_extension('F');
require_fp;
MMU.store_uint32(RS1 + insn.s_imm(), FRS2.v[0]);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
