// vseq.vi vd, vs2, simm5
VI_VI_LOOP_CMP
({
  res = simm5 == vs2;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
