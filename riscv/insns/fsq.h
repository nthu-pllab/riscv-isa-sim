require_extension('Q');
require_fp;
MMU.store_float128(RS1 + insn.s_imm(), FRS2);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
