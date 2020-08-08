// vand.vv vd, vs1, vs2, vm
VI_VV_LOOP
({
  vd = vs1 & vs2;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
