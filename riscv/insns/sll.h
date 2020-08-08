WRITE_RD(sext_xlen(RS1 << (RS2 & (xlen-1))));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
