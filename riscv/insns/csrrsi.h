bool write = insn.rs1() != 0;
int csr = validate_csr(insn.csr(), write);
reg_t old = p->get_csr(csr);
if (write) {
  p->set_csr(csr, old | insn.rs1());
}
WRITE_RD(sext_xlen(old));
serialize();
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
