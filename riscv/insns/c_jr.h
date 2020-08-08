require_extension('C');
require(insn.rvc_rs1() != 0);
set_pc(RVC_RS1 & ~reg_t(1));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
