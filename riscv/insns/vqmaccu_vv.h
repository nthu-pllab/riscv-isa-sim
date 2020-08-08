// vqmaccu.vv vd, vs2, vs1
VI_VV_LOOP_QUAD
({
  VI_QUAD_OP_AND_ASSIGN(vs2, vs1, vd_w, *, +, uint);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
