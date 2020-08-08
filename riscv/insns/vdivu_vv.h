// vdivu.vv vd, vs2, vs1
VI_VV_ULOOP
({
  if(vs1 == 0)
    vd = -1;
  else
    vd = vs2 / vs1;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
