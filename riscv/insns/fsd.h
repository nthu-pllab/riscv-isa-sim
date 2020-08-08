require_extension('D');
require_fp;
MMU.store_uint64(RS1 + insn.s_imm(), FRS2.v[0]);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
