#include "include/api/api.h"
#include "include/core/platform.h"
#include "include/basic_control_loop/Process.h"
#include "_process.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _processreaction_function_0(void* instance_args) {
    _process_self_t* self = (_process_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _process_in_t* in = self->_lf_in;
    int in_width = self->_lf_in_width; SUPPRESS_UNUSED_WARNING(in_width);
    _process_out_t* out = &self->_lf_out;
    #line 39 "/home/efsane/Documents/case-study/src/basic_control_loop.lf"
    instant_t now = lf_time_physical();
    //processing data
    int actuator_data = compute_actuator_input(in->value, now + self->proc_time);
    lf_set(out, actuator_data);
#line 19 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_process.c"
}
#include "include/api/set_undef.h"
_process_self_t* new__process() {
    _process_self_t* self = (_process_self_t*)_lf_new_reactor(sizeof(_process_self_t));
    // Set input by default to an always absent default input.
    self->_lf_in = &self->_lf_default__in;
    // Set the default source reactor pointer
    self->_lf_default__in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _processreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__in.reactions = &self->_lf__in_reactions[0];
    self->_lf__in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__in.tmplt.type.element_size = sizeof(int);
    return self;
}
