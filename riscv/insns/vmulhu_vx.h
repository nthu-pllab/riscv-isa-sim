// vmulhu vd ,vs2, rs1
VI_VX_ULOOP
({
  vd = ((uint128_t)vs2 * rs1) >> sew;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
