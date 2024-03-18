#ifndef _TIMER_PRIORITY_LOGIC_MAIN_H
#define _TIMER_PRIORITY_LOGIC_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1400671358_H
#define TOP_LEVEL_PREAMBLE_1400671358_H
#include "platform.h"
#include <wiringPi.h> 
#define TOGGLE_PIN 16
#endif
typedef struct {
    struct self_base_t base;
#line 13 "/home/efsane/Documents/5th-year-benchmarks/src-gen/timer_priority_logic/_timer_priority_logic_main.h"
    #line 15 "/home/efsane/Documents/5th-year-benchmarks/src/timer_priority_logic.lf"
    int flag;
#line 16 "/home/efsane/Documents/5th-year-benchmarks/src-gen/timer_priority_logic/_timer_priority_logic_main.h"
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _timer_priority_logic_main_main_self_t;
_timer_priority_logic_main_main_self_t* new__timer_priority_logic_main();
#endif // _TIMER_PRIORITY_LOGIC_MAIN_H
