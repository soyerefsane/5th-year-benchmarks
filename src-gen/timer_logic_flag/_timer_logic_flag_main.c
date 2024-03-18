#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/timer_logic_flag/timer_logic_flag.h"
#include "_timer_logic_flag_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _timer_logic_flag_mainreaction_function_0(void* instance_args) {
    _timer_logic_flag_main_main_self_t* self = (_timer_logic_flag_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 16 "/home/efsane/Documents/5th-year-benchmarks/src/timer_logic_flag.lf"
    if (wiringPiSetupGpio() == -1) {
        printf("gpio setup problem");
    } 
    pinMode(TOGGLE_PIN, OUTPUT);
#line 17 "/home/efsane/Documents/5th-year-benchmarks/src-gen/timer_logic_flag/_timer_logic_flag_main.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _timer_logic_flag_mainreaction_function_1(void* instance_args) {
    _timer_logic_flag_main_main_self_t* self = (_timer_logic_flag_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 22 "/home/efsane/Documents/5th-year-benchmarks/src/timer_logic_flag.lf"
    if (self->flag) {
        digitalWrite(TOGGLE_PIN, LOW);
        self->flag = 0;
    } else {
        digitalWrite(TOGGLE_PIN, HIGH);
        self->flag = 1;
    }
#line 32 "/home/efsane/Documents/5th-year-benchmarks/src-gen/timer_logic_flag/_timer_logic_flag_main.c"
}
#include "include/api/reaction_macros_undef.h"
_timer_logic_flag_main_main_self_t* new__timer_logic_flag_main() {
    _timer_logic_flag_main_main_self_t* self = (_timer_logic_flag_main_main_self_t*)lf_new_reactor(sizeof(_timer_logic_flag_main_main_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _timer_logic_flag_mainreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _timer_logic_flag_mainreaction_function_1;
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
