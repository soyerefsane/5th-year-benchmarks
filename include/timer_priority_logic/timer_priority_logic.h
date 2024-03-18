#ifndef _timer_priority_logic_main_H
#define _timer_priority_logic_main_H
#ifndef _TIMER_PRIORITY_LOGIC_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1400671358_H
#define TOP_LEVEL_PREAMBLE_1400671358_H
/*Correspondence: Range: [(7, 2), (9, 21)) -> Range: [(0, 0), (2, 21)) (verbatim=true; src=/home/efsane/Documents/5th-year-benchmarks/src/timer_priority_logic.lf)*/#include "platform.h"
#include <wiringPi.h> 
#define TOGGLE_PIN 16
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct timer_priority_logic_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int flag;
    int end[0]; // placeholder; MSVC does not compile empty structs
} timer_priority_logic_self_t;
#endif
#endif
