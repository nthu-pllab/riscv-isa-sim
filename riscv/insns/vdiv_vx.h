// vdiv.vx vd, vs2, rs1
VI_VX_LOOP
({
  if(rs1 == 0)
    vd = -1;
  else if(vs2 == (INT64_MIN >> (64 - sew)) && rs1 == -1)
    vd = vs2;
  else
    vd = vs2 / rs1;
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
