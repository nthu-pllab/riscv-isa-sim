// vmfge.vf vd, vs2, rs1
VI_VFP_LOOP_CMP
({
  res = f32_le(rs1, vs2);
},
{
  res = f64_le(rs1, vs2);
},
false)
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
