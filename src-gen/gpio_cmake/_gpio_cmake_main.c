#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/gpio_cmake/gpio_cmake.h"
#include "_gpio_cmake_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _gpio_cmake_mainreaction_function_0(void* instance_args) {
    _gpio_cmake_main_main_self_t* self = (_gpio_cmake_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 12 "/home/efsane/Documents/issue-332/src/gpio_cmake.lf"
    printf("Hello world\n");
    if (wiringPiSetupGpio() == -1) {
        printf("gpio setup problem");
    } 
    pinMode(TOGGLE_PIN, OUTPUT);
    digitalWrite(TOGGLE_PIN, HIGH);
    digitalWrite(TOGGLE_PIN, LOW);
#line 20 "/home/efsane/Documents/issue-332/src-gen/gpio_cmake/_gpio_cmake_main.c"
}
#include "include/api/reaction_macros_undef.h"
_gpio_cmake_main_main_self_t* new__gpio_cmake_main() {
    _gpio_cmake_main_main_self_t* self = (_gpio_cmake_main_main_self_t*)lf_new_reactor(sizeof(_gpio_cmake_main_main_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _gpio_cmake_mainreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
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
