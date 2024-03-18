#include "include/api/api.h"
#include "include/core/platform.h"
#include "include/basic_control_loop/Sensor.h"
#include "_sensor.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _sensorreaction_function_0(void* instance_args) {
    _sensor_self_t* self = (_sensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 20 "/home/efsane/Documents/case-study/src/basic_control_loop.lf"
    //Seed the random number generator
    srand(time(NULL));
#line 15 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_sensor.c"
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _sensorreaction_function_1(void* instance_args) {
    _sensor_self_t* self = (_sensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _sensor_out_t* out = &self->_lf_out;
    #line 24 "/home/efsane/Documents/case-study/src/basic_control_loop.lf"
    //logic analyzer toggle -- E2E start time
    
    instant_t now = lf_time_physical();
    //work_until(now + self->sense_time);
    int measurement =  read_sensor(now + self->sense_time);
    lf_set(out, measurement);
#line 29 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_sensor.c"
}
#include "include/api/set_undef.h"
_sensor_self_t* new__sensor() {
    _sensor_self_t* self = (_sensor_self_t*)_lf_new_reactor(sizeof(_sensor_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _sensorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _sensorreaction_function_1;
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
