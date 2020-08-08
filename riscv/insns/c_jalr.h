require_extension('C');
require(insn.rvc_rs1() != 0);
reg_t tmp = npc;
set_pc(RVC_RS1 & ~reg_t(1));
WRITE_REG(X_RA, tmp);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
