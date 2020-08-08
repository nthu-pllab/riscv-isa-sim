require_extension('M');
require_rv64;
sreg_t lhs = sext32(RS1);
sreg_t rhs = sext32(RS2);
if(rhs == 0)
  WRITE_RD(lhs);
else
  WRITE_RD(sext32(lhs % rhs));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
