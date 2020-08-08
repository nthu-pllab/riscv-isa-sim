// vfwadd.wf vd, vs2, vs1
VI_VFP_WF_LOOP_WIDE
({
  vd = f64_add(vs2, rs1);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
