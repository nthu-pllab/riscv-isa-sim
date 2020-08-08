// vsub: vd[i] = (vd[i] * x[rs1]) - vs2[i]
VI_VX_LOOP
({
  vd = vs2 - rs1;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
