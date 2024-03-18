#ifndef _BASIC_CONTROL_LOOP_MAIN_H
#define _BASIC_CONTROL_LOOP_MAIN_H
#include "include/core/reactor.h"
#include "_actuator.h"
#include "_sensor.h"
#include "_process.h"
#ifndef TOP_LEVEL_PREAMBLE_510636394_H
#define TOP_LEVEL_PREAMBLE_510636394_H
#include <stdlib.h>
#include <time.h>

void work_until(instant_t t);
int compute_actuator_input(int sensor_data, instant_t until);
int sensor_data(instant_t until);
#endif
typedef struct {
    struct self_base_t base;
#line 19 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_basic_control_loop_main.h"
#line 20 "/home/efsane/Documents/case-study/src-gen/basic_control_loop/_basic_control_loop_main.h"
} _basic_control_loop_main_main_self_t;
_basic_control_loop_main_main_self_t* new__basic_control_loop_main();
#endif // _BASIC_CONTROL_LOOP_MAIN_H
