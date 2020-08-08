// vsltu.vx  vd, vs2, vs1
VI_VX_ULOOP_CMP
({
  res = vs2 < rs1;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
