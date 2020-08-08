reg_t tmp = npc;
set_pc(JUMP_TARGET);
WRITE_RD(tmp);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
