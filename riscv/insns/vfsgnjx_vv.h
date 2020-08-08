// vfsgnx
VI_VFP_VV_LOOP
({
  vd = fsgnj32(vs2.v, vs1.v, false, true);
},
{
  vd = fsgnj64(vs2.v, vs1.v, false, true);
})
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
