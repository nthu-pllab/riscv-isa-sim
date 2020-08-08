require_rv64;
WRITE_RD(MMU.load_int64(RS1 + insn.i_imm()));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
