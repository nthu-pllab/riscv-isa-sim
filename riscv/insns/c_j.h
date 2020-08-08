require_extension('C');
set_pc(pc + insn.rvc_j_imm());
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
