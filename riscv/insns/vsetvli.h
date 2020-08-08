require_vector_for_vsetvl;
WRITE_RD(P.VU.set_vl(insn.rd(), insn.rs1(), RS1, insn.v_zimm11()));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
