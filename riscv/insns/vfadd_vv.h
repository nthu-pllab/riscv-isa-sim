// vfadd.vv vd, vs2, vs1
VI_VFP_VV_LOOP
({
  vd = f32_add(vs1, vs2);
},
{
  vd = f64_add(vs1, vs2);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
