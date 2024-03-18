#ifndef _sensor_H
#define _sensor_H
#ifndef _SENSOR_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_510636394_H
#define TOP_LEVEL_PREAMBLE_510636394_H
/*Correspondence: Range: [(6, 4), (11, 33)) -> Range: [(0, 0), (5, 33)) (verbatim=true; src=/home/efsane/Documents/case-study/src/basic_control_loop.lf)*/#include <stdlib.h>
#include <time.h>

void work_until(instant_t t);
int compute_actuator_input(int sensor_data, instant_t until);
int sensor_data(instant_t until);
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct sensor_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t poll_period;
    interval_t sense_time;
    bool randomized;
    int end[0]; // placeholder; MSVC does not compile empty structs
} sensor_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} sensor_out_t;
#endif
#endif
