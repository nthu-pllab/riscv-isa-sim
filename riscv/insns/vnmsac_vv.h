// vmsac.vv: vd[i] = -(vs1[i] * vs2[i]) + vd[i]
VI_VV_LOOP
({
  vd = -(vs1 * vs2) + vd;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
