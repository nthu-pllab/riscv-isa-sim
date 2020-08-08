// vfwsub.wv vd, vs2, vs1
VI_VFP_WV_LOOP_WIDE
({
  vd = f64_sub(vs2, vs1);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
