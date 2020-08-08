// vsrl.vi vd, vs2, zimm5
VI_VI_ULOOP
({
  vd = vs2 >> (zimm5 & (sew - 1) & 0x1f);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
