// vseq.vv vd, vs2, vs1
VI_VV_LOOP_CMP
({
  res = vs2 == vs1;
})

ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
