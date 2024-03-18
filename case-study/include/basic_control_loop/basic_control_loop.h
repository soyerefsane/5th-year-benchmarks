#ifndef _basic_control_loop_main_H
#define _basic_control_loop_main_H
#ifndef _BASIC_CONTROL_LOOP_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
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
typedef struct basic_control_loop_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} basic_control_loop_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;

} sensor_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;

} process_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;

} process_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;

} actuator_in_t;
#endif
#endif
