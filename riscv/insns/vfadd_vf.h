// vfadd.vf vd, vs2, rs1
VI_VFP_VF_LOOP
({
  vd = f32_add(rs1, vs2);
},
{
  vd = f64_add(rs1, vs2);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
