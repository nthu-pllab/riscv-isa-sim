// vnsrl.vx vd, vs2, rs1
VI_VX_LOOP_NSHIFT
({
  vd = vs2_u >> (rs1 & (sew * 2 - 1));
}, false)
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
