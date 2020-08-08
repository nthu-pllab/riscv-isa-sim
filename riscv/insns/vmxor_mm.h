// vmxor.mm vd, vs2, vs1
VI_LOOP_MASK(vs2 ^ vs1);
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(3);
