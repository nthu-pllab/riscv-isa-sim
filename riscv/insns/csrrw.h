int csr = validate_csr(insn.csr(), true);
reg_t old = p->get_csr(csr);
p->set_csr(csr, RS1);
WRITE_RD(sext_xlen(old));
serialize();
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
