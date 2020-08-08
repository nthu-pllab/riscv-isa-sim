require_extension('M');
if (xlen == 64)
  WRITE_RD(mulhu(RS1, RS2));
else
  WRITE_RD(sext32(((uint64_t)(uint32_t)RS1 * (uint64_t)(uint32_t)RS2) >> 32));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
