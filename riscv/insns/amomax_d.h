require_extension('A');
require_rv64;
WRITE_RD(MMU.amo_uint64(RS1, [&](int64_t lhs) { return std::max(lhs, int64_t(RS2)); }));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
