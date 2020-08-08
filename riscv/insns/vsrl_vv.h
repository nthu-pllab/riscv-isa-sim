// vsrl.vv  vd, vs2, vs1
VI_VV_ULOOP
({
  vd = vs2 >> (vs1 & (sew - 1));
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
