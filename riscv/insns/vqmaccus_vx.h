// vqmaccus.vx  vd, vs2, rs1
VI_VX_LOOP_QUAD
({
  VI_QUAD_OP_AND_ASSIGN_MIX(vs2, rs1, vd_w, *, +, int, int, uint);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
