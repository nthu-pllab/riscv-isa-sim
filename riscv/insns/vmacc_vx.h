// vmacc.vx: vd[i] = +(x[rs1] * vs2[i]) + vd[i]
VI_VX_LOOP
({
  vd = rs1 * vs2 + vd;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
