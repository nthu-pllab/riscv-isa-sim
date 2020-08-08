// vmv.v.x vd, rs1
require_vector;
VI_CHECK_SSS(false);
VI_VVXI_MERGE_LOOP
({
  vd = rs1;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
