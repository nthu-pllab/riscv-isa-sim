// vssra.vi vd, vs2, simm5
VRM xrm = P.VU.get_vround_mode();
VI_VI_LOOP
({
  int sh = simm5 & (sew - 1) & 0x1f;
  int128_t val = vs2;

  INT_ROUNDING(val, xrm, sh);
  vd = val >> sh;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
