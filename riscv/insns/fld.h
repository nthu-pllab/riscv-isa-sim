require_extension('D');
require_fp;
WRITE_FRD(f64(MMU.load_uint64(RS1 + insn.i_imm())));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
