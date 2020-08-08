// vfmacc.vf vd, rs1, vs2, vm    # vd[i] = +(vs2[i] * x[rs1]) + vd[i]
VI_VFP_VF_LOOP
({
  vd = f32_mulAdd(rs1, vs2, vd);
},
{
  vd = f64_mulAdd(rs1, vs2, vd);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
