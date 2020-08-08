// vmfne.vf vd, vs2, rs1
VI_VFP_LOOP_CMP
({
  res = !f32_eq(vs2, rs1);
},
{
  res = !f64_eq(vs2, rs1);
},
false)
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
