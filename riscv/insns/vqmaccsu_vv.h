// vqmaccsu.vx vd, vs2, rs1
VI_VV_LOOP_QUAD
({
  VI_QUAD_OP_AND_ASSIGN_MIX(vs2, vs1, vd_w, *, +, int, uint, int);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
