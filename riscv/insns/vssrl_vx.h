// vssrl.vx vd, vs2, rs1
VRM xrm = P.VU.get_vround_mode();
VI_VX_ULOOP
({
  int sh = rs1 & (sew - 1);
  uint128_t val = vs2;

  INT_ROUNDING(val, xrm, sh);
  vd = val >> sh;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
