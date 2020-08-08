if(sreg_t(RS1) < sreg_t(RS2))
  set_pc(BRANCH_TARGET);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
