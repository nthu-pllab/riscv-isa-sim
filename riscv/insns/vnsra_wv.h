// vnsra.vv vd, vs2, vs1
VI_VV_LOOP_NSHIFT
({
  vd = vs2 >> (vs1 & (sew * 2 - 1));
}, true)
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
