// vand.vx vd, rs1, vs2, vm
VI_VX_LOOP
({
  vd = rs1 & vs2;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
