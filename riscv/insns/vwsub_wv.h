// vwsub.wv vd, vs2, vs1
VI_CHECK_DDS(true);
VI_VV_LOOP_WIDEN
({
  VI_WIDE_WVX_OP(vs1, -, int);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
