require_extension('C');
require_extension('D');
require_fp;
WRITE_RVC_FRS2S(f64(MMU.load_uint64(RVC_RS1S + insn.rvc_ld_imm())));
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
