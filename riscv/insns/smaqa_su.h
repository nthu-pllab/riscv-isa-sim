require_rv64;
P_REDUCTION_LOOP(8, {
  if (i < 4) {
    pd1 += ((int32_t)ps1 * static_cast<int>(ps2));
  } else {
    pd2 += ((int32_t)ps1 * static_cast<int>(ps2));
  }
}, true);
