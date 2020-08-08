require(SHAMT < xlen);
WRITE_RD(sext_xlen(sext_xlen(RS1) >> SHAMT));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
