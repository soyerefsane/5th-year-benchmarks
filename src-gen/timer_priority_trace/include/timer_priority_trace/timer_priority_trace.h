#ifndef _timer_priority_trace_main_H
#define _timer_priority_trace_main_H
#ifndef _TIMER_PRIORITY_TRACE_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1931008760_H
#define TOP_LEVEL_PREAMBLE_1931008760_H
/*Correspondence: Range: [(6, 2), (6, 23)) -> Range: [(0, 0), (0, 21)) (verbatim=true; src=/home/efsane/Documents/5th-year-benchmarks/src/timer_priority_trace.lf)*/#include "platform.h"
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct timer_priority_trace_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} timer_priority_trace_self_t;
#endif
#endif
