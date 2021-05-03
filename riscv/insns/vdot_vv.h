// vdot vd, vs2, vs1
// modified vdot only for SEW=32, EDIV=4 version, vs1 - signed, vs2 - unsigned
VI_VV_LOOP
({
  int32_t vs1_0 = static_cast<int8_t>((vs1 >> 0) & 0xff);
  int32_t vs1_1 = static_cast<int8_t>((vs1 >> 8) & 0xff);
  int32_t vs1_2 = static_cast<int8_t>((vs1 >> 16) & 0xff);
  int32_t vs1_3 = static_cast<int8_t>((vs1 >> 24) & 0xff);

  int32_t vs2_0 = static_cast<uint8_t>((vs2 >> 0) & 0xff);
  int32_t vs2_1 = static_cast<uint8_t>((vs2 >> 8) & 0xff);
  int32_t vs2_2 = static_cast<uint8_t>((vs2 >> 16) & 0xff);
  int32_t vs2_3 = static_cast<uint8_t>((vs2 >> 24) & 0xff);

  int32_t vd_0 = (static_cast<int32_t>(vs2_0) * static_cast<int32_t>(vs1_0));
  int32_t vd_1 = (static_cast<int32_t>(vs2_1) * static_cast<int32_t>(vs1_1));
  int32_t vd_2 = (static_cast<int32_t>(vs2_2) * static_cast<int32_t>(vs1_2));
  int32_t vd_3 = (static_cast<int32_t>(vs2_3) * static_cast<int32_t>(vs1_3));

  // vd += vs2 * vs1;
  vd += (vd_0 + vd_1 + vd_2 + vd_3);
  // vd = (vd_0 + vd_1 + vd_2 + vd_3);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
