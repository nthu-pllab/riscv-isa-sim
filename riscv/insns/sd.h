require_rv64;
MMU.store_uint64(RS1 + insn.s_imm(), RS2);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
