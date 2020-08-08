require_extension('A');
require_rv64;
auto res = MMU.load_int64(RS1);
MMU.acquire_load_reservation(RS1);
WRITE_RD(res);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
