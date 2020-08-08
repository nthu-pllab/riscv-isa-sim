// vvmv.v.v vd, vs1
require_vector;
VI_CHECK_SSS(true);
VI_VVXI_MERGE_LOOP
({
  vd = vs1;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
