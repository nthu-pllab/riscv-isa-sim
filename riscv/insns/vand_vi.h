// vand.vi vd, simm5, vs2, vm
VI_VI_LOOP
({
  vd = simm5 & vs2;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
