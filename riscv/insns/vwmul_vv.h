// vwmul.vv vd, vs2, vs1
VI_CHECK_DSS(true);
VI_VV_LOOP_WIDEN
({
  VI_WIDE_OP_AND_ASSIGN(vs2, vs1, 0, *, +, int);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
