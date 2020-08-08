// vl1r.v vd, (rs1)
require_vector;
const reg_t baseAddr = RS1;
const reg_t vd = insn.rd();
for (reg_t i = 0; i < P.VU.vlenb; ++i) {
  auto val = MMU.load_uint8(baseAddr + i);
  P.VU.elt<uint8_t>(vd, i, true) = val;
}
P.VU.vstart = 0;
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
