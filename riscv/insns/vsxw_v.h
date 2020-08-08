// vsxw.v and vsxseg[2-8]w.v
require(P.VU.vsew >= e32);
VI_DUPLICATE_VREG(insn.rs2(), P.VU.vlmax);
VI_ST_INDEX(index[i], fn, uint32, 4);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
