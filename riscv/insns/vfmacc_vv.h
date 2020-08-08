// vfmacc.vv vd, rs1, vs2, vm    # vd[i] = +(vs2[i] * vs1[i]) + vd[i]
VI_VFP_VV_LOOP
({
  vd = f32_mulAdd(vs1, vs2, vd);
},
{
  vd = f64_mulAdd(vs1, vs2, vd);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
