// vnmsub.vv: vd[i] = -(vd[i] * vs1[i]) + vs2[i]
VI_VV_LOOP
({
  vd = -(vd * vs1) + vs2;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
