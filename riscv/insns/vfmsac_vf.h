// vfmsac: vd[i] = +(f[rs1] * vs2[i]) - vd[i]
VI_VFP_VF_LOOP
({
  vd = f32_mulAdd(rs1, vs2, f32(vd.v ^ F32_SIGN));
},
{
  vd = f64_mulAdd(rs1, vs2, f64(vd.v ^ F64_SIGN));
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
