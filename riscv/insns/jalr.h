reg_t tmp = npc;
set_pc((RS1 + insn.i_imm()) & ~reg_t(1));
WRITE_RD(tmp);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
