// vfnmsub: vd[i] = -(vd[i] * vs1[i]) + vs2[i]
VI_VFP_VV_LOOP
({
  vd = f32_mulAdd(f32(vd.v ^ F32_SIGN), vs1, vs2);
},
{
  vd = f64_mulAdd(f64(vd.v ^ F64_SIGN), vs1, vs2);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
