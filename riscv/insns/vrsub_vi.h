// vrsub.vi vd, vs2, imm, vm   # vd[i] = imm - vs2[i]
VI_VI_LOOP
({
  vd = simm5 - vs2;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
