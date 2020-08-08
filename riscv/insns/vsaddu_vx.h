// vsaddu vd, vs2, rs1
VI_VX_ULOOP
({
  bool sat = false;
  vd = vs2 + rs1;

  sat = vd < vs2;
  vd |= -(vd < vs2);

  P.VU.vxsat |= sat;

})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
