// vlxh.v and vlxseg[2-8]h.v
require(P.VU.vsew >= e16);
VI_DUPLICATE_VREG(insn.rs2(), P.VU.vlmax);
VI_LD_INDEX(index[i], fn, uint16, 2);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
