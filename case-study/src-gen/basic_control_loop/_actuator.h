#ifndef _ACTUATOR_H
#define _ACTUATOR_H
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
} _actuator_in_t;
typedef struct {
    struct self_base_t base;
    #line 46 "/home/efsane/Documents/case-study/src/basic_control_loop.lf"
    interval_t poll_interval;
    #line 46 "/home/efsane/Documents/case-study/src/basic_control_loop.lf"
    interval_t wait_time;
#line 34 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_actuator.h"
#line 35 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_actuator.h"
    _actuator_in_t* _lf_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_in_width;
    // Default input (in case it does not get connected)
    _actuator_in_t _lf_default__in;
    reaction_t _lf__reaction_0;
    trigger_t _lf__in;
    reaction_t* _lf__in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _actuator_self_t;
_actuator_self_t* new__actuator();
#endif // _ACTUATOR_H
