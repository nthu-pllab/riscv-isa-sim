// vfwnmacc.vv vd, vs2, vs1
VI_VFP_VV_LOOP_WIDE
({
  vd = f64_mulAdd(f64(vs1.v ^ F64_SIGN), vs2, f64(vd.v ^ F64_SIGN));
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
