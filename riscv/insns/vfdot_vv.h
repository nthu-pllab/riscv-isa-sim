// vfdot.vv vd, vs2, vs1
VI_VFP_VV_LOOP
({
  vd = f32_add(vd, f32_mul(vs2, vs1));
},
{
  vd = f64_add(vd, f64_mul(vs2, vs1));
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
