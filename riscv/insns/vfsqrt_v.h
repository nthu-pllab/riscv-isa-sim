// vsqrt.v vd, vd2, vm
VI_VFP_VV_LOOP
({
  vd = f32_sqrt(vs2);
},
{
  vd = f64_sqrt(vs2);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
