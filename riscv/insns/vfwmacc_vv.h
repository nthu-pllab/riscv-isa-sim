// vfwmacc.vv vd, vs2, vs1
VI_VFP_VV_LOOP_WIDE
({
  vd = f64_mulAdd(vs1, vs2, vd);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
