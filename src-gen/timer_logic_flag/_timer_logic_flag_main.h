#ifndef _TIMER_LOGIC_FLAG_MAIN_H
#define _TIMER_LOGIC_FLAG_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1400671358_H
#define TOP_LEVEL_PREAMBLE_1400671358_H
#include <wiringPi.h> 
#define TOGGLE_PIN 16
#endif
typedef struct {
    struct self_base_t base;
#line 12 "/home/efsane/Documents/5th-year-benchmarks/src-gen/timer_logic_flag/_timer_logic_flag_main.h"
    #line 14 "/home/efsane/Documents/5th-year-benchmarks/src/timer_logic_flag.lf"
    int flag;
#line 15 "/home/efsane/Documents/5th-year-benchmarks/src-gen/timer_logic_flag/_timer_logic_flag_main.h"
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _timer_logic_flag_main_main_self_t;
_timer_logic_flag_main_main_self_t* new__timer_logic_flag_main();
#endif // _TIMER_LOGIC_FLAG_MAIN_H
