#include "include/api/api.h"
#include "include/core/platform.h"
#include "include/basic_control_loop/basic_control_loop.h"
#include "_basic_control_loop_main.h"
// *********** From the preamble, verbatim:
#line 63 "/home/efsane/Documents/case-study/src/basic_control_loop.lf"
 void work_until(instant_t t) {
    while (lf_time_physical() < t) {
        //
    }
}

int compute_actuator_input(int sensor_data, instant_t until) {
    sensor_data *= 2;
    work_until(until);
    return sensor_data;
}

int read_sensor(instant_t until) {
    work_until(until);
    return rand();
}
#line 24 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_basic_control_loop_main.c"

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
_basic_control_loop_main_main_self_t* new__basic_control_loop_main() {
    _basic_control_loop_main_main_self_t* self = (_basic_control_loop_main_main_self_t*)_lf_new_reactor(sizeof(_basic_control_loop_main_main_self_t));

    return self;
}
