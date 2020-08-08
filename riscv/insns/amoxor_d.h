require_extension('A');
require_rv64;
WRITE_RD(MMU.amo_uint64(RS1, [&](uint64_t lhs) { return lhs ^ RS2; }));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
