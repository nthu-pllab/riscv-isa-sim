// vwmaccsu.vv vd, vs2, vs1
VI_CHECK_DSS(true);
VI_VV_LOOP_WIDEN
({
  VI_WIDE_OP_AND_ASSIGN_MIX(vs2, vs1, vd_w, *, +, int, uint, int);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
