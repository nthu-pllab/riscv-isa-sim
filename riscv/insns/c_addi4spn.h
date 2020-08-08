require_extension('C');
require(insn.rvc_addi4spn_imm() != 0);
WRITE_RVC_RS2S(sext_xlen(RVC_SP + insn.rvc_addi4spn_imm()));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
