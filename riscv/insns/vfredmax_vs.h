// vfredmax vd, vs2, vs1
VI_VFP_VV_LOOP_REDUCTION
({
  vd_0 = f32_max(vd_0, vs2);
},
{
  vd_0 = f64_max(vd_0, vs2);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
