require_extension('C');
if (xlen == 32) {
  reg_t tmp = npc;
  set_pc(pc + insn.rvc_j_imm());
  WRITE_REG(X_RA, tmp);
} else { // c.addiw
  require(insn.rvc_rd() != 0);
  WRITE_RD(sext32(RVC_RS1 + insn.rvc_imm()));
}
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
