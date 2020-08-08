// vqmaccu.vx vd, vs2, rs1
VI_VX_LOOP_QUAD
({
  VI_QUAD_OP_AND_ASSIGN(vs2, rs1, vd_w, *, +, uint);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
