// vfwnmacc.vf vd, vs2, rs1
VI_VFP_VF_LOOP_WIDE
({
  vd = f64_mulAdd(f64(rs1.v ^ F64_SIGN), vs2, vd);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
