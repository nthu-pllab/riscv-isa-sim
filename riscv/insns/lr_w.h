require_extension('A');
auto res = MMU.load_int32(RS1);
MMU.acquire_load_reservation(RS1);
WRITE_RD(res);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
