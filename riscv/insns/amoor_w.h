require_extension('A');
WRITE_RD(sext32(MMU.amo_uint32(RS1, [&](uint32_t lhs) { return lhs | RS2; })));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
