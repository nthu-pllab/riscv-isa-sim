// vsxb.v and vsxseg[2-8]b.v
require(P.VU.vsew >= e8);
VI_DUPLICATE_VREG(insn.rs2(), P.VU.vlmax);
VI_ST_INDEX(index[i], fn, uint8, 1);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
