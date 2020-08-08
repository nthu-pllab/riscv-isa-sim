// vmv.v.i vd, simm5
require_vector;
VI_CHECK_SSS(false);
VI_VVXI_MERGE_LOOP
({
  vd = simm5;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
