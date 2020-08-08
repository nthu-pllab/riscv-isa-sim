// vfmadd: vd[i] = +(vd[i] * vs1[i]) + vs2[i]
VI_VFP_VV_LOOP
({
  vd = f32_mulAdd(vd, vs1, vs2);
},
{
  vd = f64_mulAdd(vd, vs1, vs2);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
