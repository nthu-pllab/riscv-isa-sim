// vrem.vv vd, vs2, vs1
VI_VV_LOOP
({
  if (vs1 == 0)
    vd = vs2;
  else if(vs2 == -(1 << (sew - 1)) && vs1 == -1)
    vd = 0;
  else {
    vd = vs2 % vs1;
  }
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
