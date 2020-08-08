// vredmaxu.vs vd, vs2 ,vs1
VI_VV_ULOOP_REDUCTION
({
  vd_0_res = (vd_0_res >= vs2) ? vd_0_res : vs2;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
