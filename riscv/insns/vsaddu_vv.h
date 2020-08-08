// vsaddu vd, vs2, vs1
VI_VV_ULOOP
({
  bool sat = false;
  vd = vs2 + vs1;

  sat = vd < vs2;
  vd |= -(vd < vs2);

  P.VU.vxsat |= sat;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
