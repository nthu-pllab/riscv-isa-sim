// vminx.vx vd, vs2, rs1, vm   # vector-scalar
VI_VX_LOOP
({
  if (rs1 <= vs2) {
    vd = rs1;
  } else {
    vd = vs2;
  }


})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
