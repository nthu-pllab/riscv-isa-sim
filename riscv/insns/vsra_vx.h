// vsra.vx vd, vs2, rs1
VI_VX_LOOP
({
  vd = vs2 >> (rs1 & (sew - 1));
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
