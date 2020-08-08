require_extension('S');
require_privilege(get_field(STATE.mstatus, MSTATUS_TVM) ? PRV_M : PRV_S);
MMU.flush_tlb();
ADD_INSN_COUNT(1);
ADD_CYCLE_COUNT(1);
