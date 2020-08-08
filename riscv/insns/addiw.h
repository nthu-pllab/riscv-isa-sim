require_rv64;
WRITE_RD(sext32(insn.i_imm() + RS1));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
