require_rv64;
WRITE_RD(sext32(int32_t(RS1) >> (RS2 & 0x1F)));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
