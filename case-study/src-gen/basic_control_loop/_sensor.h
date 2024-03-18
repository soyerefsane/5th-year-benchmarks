#ifndef _SENSOR_H
#define _SENSOR_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_510636394_H
#define TOP_LEVEL_PREAMBLE_510636394_H
#include <stdlib.h>
#include <time.h>

void work_until(instant_t t);
int compute_actuator_input(int sensor_data, instant_t until);
int sensor_data(instant_t until);
#endif
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
} _sensor_out_t;
typedef struct {
    struct self_base_t base;
    #line 15 "/home/efsane/Documents/case-study/src/basic_control_loop.lf"
    interval_t poll_period;
    #line 15 "/home/efsane/Documents/case-study/src/basic_control_loop.lf"
    interval_t sense_time;
    #line 15 "/home/efsane/Documents/case-study/src/basic_control_loop.lf"
    bool randomized;
#line 36 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_sensor.h"
#line 37 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_sensor.h"
    _sensor_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _sensor_self_t;
_sensor_self_t* new__sensor();
#endif // _SENSOR_H
