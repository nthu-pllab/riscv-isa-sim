// vsleu.vi vd, vs2, simm5
VI_VI_ULOOP_CMP
({
  res = vs2 <= (insn.v_simm5() & (UINT64_MAX >> (64 - P.VU.vsew)));
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
