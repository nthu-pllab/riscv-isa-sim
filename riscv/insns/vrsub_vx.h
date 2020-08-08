// vrsub.vx vd, vs2, rs1, vm   # vd[i] = rs1 - vs2[i]
VI_VX_LOOP
({
  vd = rs1 - vs2;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
