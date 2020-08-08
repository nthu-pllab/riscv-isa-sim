// vsadd.vx vd, vs2, rs1
VI_CHECK_SSS(false);
VI_LOOP_BASE
bool sat = false;
switch(sew) {
case e8: {
  VX_PARAMS(e8);
  vd = sat_add<int8_t, uint8_t>(vs2, rs1, sat);
  break;
}
case e16: {
  VX_PARAMS(e16);
  vd = sat_add<int16_t, uint16_t>(vs2, rs1, sat);
  break;
}
case e32: {
  VX_PARAMS(e32);
  vd = sat_add<int32_t, uint32_t>(vs2, rs1, sat);
  break;
}
default: {
  VX_PARAMS(e64);
  vd = sat_add<int64_t, uint64_t>(vs2, rs1, sat);
  break;
}
}
P.VU.vxsat |= sat;
VI_LOOP_END
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
