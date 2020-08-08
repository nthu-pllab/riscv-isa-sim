// vfmax
VI_VFP_VF_LOOP
({
  vd = f32_max(vs2, rs1);
},
{
  vd = f64_max(vs2, rs1);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
