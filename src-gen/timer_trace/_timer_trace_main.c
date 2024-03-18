#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/timer_trace/timer_trace.h"
#include "_timer_trace_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _timer_trace_mainreaction_function_0(void* instance_args) {
    _timer_trace_main_main_self_t* self = (_timer_trace_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 9 "/home/efsane/Documents/issue-332/src/timer_trace.lf"
    //
#line 14 "/home/efsane/Documents/issue-332/src-gen/timer_trace/_timer_trace_main.c"
}
#include "include/api/reaction_macros_undef.h"
_timer_trace_main_main_self_t* new__timer_trace_main() {
    _timer_trace_main_main_self_t* self = (_timer_trace_main_main_self_t*)lf_new_reactor(sizeof(_timer_trace_main_main_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _timer_trace_mainreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
