require_privilege(get_field(STATE.mstatus, MSTATUS_TW) ? PRV_M : PRV_S);
wfi();
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
