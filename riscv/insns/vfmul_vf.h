// vfmul.vf vd, vs2, rs1, vm
VI_VFP_VF_LOOP
({
  vd = f32_mul(vs2, rs1);
},
{
  vd = f64_mul(vs2, rs1);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
