require_extension('Q');
require_fp;
WRITE_FRD(MMU.load_float128(RS1 + insn.i_imm()));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
