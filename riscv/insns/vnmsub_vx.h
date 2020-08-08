// vnmsub.vx: vd[i] = -(vd[i] * x[rs1]) + vs2[i]
VI_VX_LOOP
({
  vd = -(vd * rs1) + vs2;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
