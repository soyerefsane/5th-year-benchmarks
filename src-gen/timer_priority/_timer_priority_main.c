#include "include/api/schedule.h"
#include "include/core/platform.h"
#include "include/timer_priority/timer_priority.h"
#include "_timer_priority_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _timer_priority_mainreaction_function_0(void* instance_args) {
    _timer_priority_main_main_self_t* self = (_timer_priority_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 13 "/home/efsane/Documents/issue-332/src/timer_priority.lf"
    lf_thread_t th = lf_thread_self();
    if (th == 0) {
      lf_print_error_and_exit("lf_thread_self failed");
    }
    
    lf_scheduling_policy_priority_t policy;
    policy.base.policy = LF_SCHED_PRIORITY;
    policy.priority = 80;
    if (lf_thread_set_scheduling_policy(th, (lf_scheduling_policy_t *) &policy) != 0) {
      lf_print_error_and_exit("lf_thread_set_scheduling_policy failed");
    }
    
    if(lf_thread_set_cpu(th, 3) != 0) {
      lf_print_error_and_exit("lf_thread_set_cpu failed");
    }
    
    if(lf_thread_set_priority(th, 75) != 0) {
      lf_print_error_and_exit("lf_thread_set_priority failed");
    }
#line 32 "/home/efsane/Documents/issue-332/src-gen/timer_priority/_timer_priority_main.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _timer_priority_mainreaction_function_1(void* instance_args) {
    _timer_priority_main_main_self_t* self = (_timer_priority_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 34 "/home/efsane/Documents/issue-332/src/timer_priority.lf"
    //
#line 41 "/home/efsane/Documents/issue-332/src-gen/timer_priority/_timer_priority_main.c"
}
#include "include/api/reaction_macros_undef.h"
_timer_priority_main_main_self_t* new__timer_priority_main() {
    _timer_priority_main_main_self_t* self = (_timer_priority_main_main_self_t*)_lf_new_reactor(sizeof(_timer_priority_main_main_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _timer_priority_mainreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _timer_priority_mainreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_1;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    return self;
}
