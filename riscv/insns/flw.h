require_extension('F');
require_fp;
WRITE_FRD(f32(MMU.load_uint32(RS1 + insn.i_imm())));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
