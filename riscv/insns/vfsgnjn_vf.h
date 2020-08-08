// vfsgnn
VI_VFP_VF_LOOP
({
  vd = fsgnj32(vs2.v, rs1.v, true, false);
},
{
  vd = fsgnj64(vs2.v, rs1.v, true, false);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
