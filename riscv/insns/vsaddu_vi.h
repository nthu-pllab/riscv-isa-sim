// vsaddu vd, vs2, simm5
VI_VI_ULOOP
({
  bool sat = false;
  vd = vs2 + (insn.v_simm5() & (UINT64_MAX >> (64 - P.VU.vsew)));

  sat = vd < vs2;
  vd |= -(vd < vs2);

  P.VU.vxsat |= sat;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
