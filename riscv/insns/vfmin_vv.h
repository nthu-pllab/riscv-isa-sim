// vfmin vd, vs2, vs1
VI_VFP_VV_LOOP
({
  vd = f32_min(vs2, vs1);
},
{
  vd = f64_min(vs2, vs1);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
