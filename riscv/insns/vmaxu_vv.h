// vmaxu.vv vd, vs2, vs1, vm   # Vector-vector
VI_VV_ULOOP
({
  if (vs1 >= vs2) {
    vd = vs1;
  } else {
    vd = vs2;
  }
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
