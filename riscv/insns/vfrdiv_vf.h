// vfrdiv.vf vd, vs2, rs1, vm  # scalar-vector, vd[i] = f[rs1]/vs2[i]
VI_VFP_VF_LOOP
({
  vd = f32_div(rs1, vs2);
},
{
  vd = f64_div(rs1, vs2);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
