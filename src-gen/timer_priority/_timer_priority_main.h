#ifndef _TIMER_PRIORITY_MAIN_H
#define _TIMER_PRIORITY_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_931548023_H
#define TOP_LEVEL_PREAMBLE_931548023_H
#include "platform.h"
#endif
typedef struct {
    struct self_base_t base;
#line 11 "/home/efsane/Documents/issue-332/src-gen/timer_priority/_timer_priority_main.h"
#line 12 "/home/efsane/Documents/issue-332/src-gen/timer_priority/_timer_priority_main.h"
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _timer_priority_main_main_self_t;
_timer_priority_main_main_self_t* new__timer_priority_main();
#endif // _TIMER_PRIORITY_MAIN_H
