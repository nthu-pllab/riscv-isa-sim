// vfsgnj
VI_VFP_VV_LOOP
({
  vd = fsgnj32(vs2.v, vs1.v, false, false);
},
{
  vd = fsgnj64(vs2.v, vs1.v, false, false);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
