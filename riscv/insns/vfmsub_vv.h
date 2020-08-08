// vfmsub: vd[i] = +(vd[i] * vs1[i]) - vs2[i]
VI_VFP_VV_LOOP
({
  vd = f32_mulAdd(vd, vs1, f32(vs2.v ^ F32_SIGN));
},
{
  vd = f64_mulAdd(vd, vs1, f64(vs2.v ^ F64_SIGN));
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
