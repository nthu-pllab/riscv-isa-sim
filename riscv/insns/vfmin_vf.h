// vfmin vd, vs2, rs1
VI_VFP_VF_LOOP
({
  vd = f32_min(vs2, rs1);
},
{
  vd = f64_min(vs2, rs1);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
