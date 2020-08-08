// vmulhu vd ,vs2, vs1
VI_VV_ULOOP
({
  vd = ((uint128_t)vs2 * vs1) >> sew;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
