// vfmax
VI_VFP_VV_LOOP
({
  vd = f32_max(vs2, vs1);
},
{
  vd = f64_max(vs2, vs1);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
