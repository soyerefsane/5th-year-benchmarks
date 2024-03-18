#ifndef _HELLO2_MAIN_H
#define _HELLO2_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_428687695_H
#define TOP_LEVEL_PREAMBLE_428687695_H
#include <wiringPi.h> 
#define TOGGLE_PIN 16
#endif
typedef struct {
    struct self_base_t base;
#line 12 "/home/efsane/Documents/issue-332/src-gen/hello2/_hello2_main.h"
#line 13 "/home/efsane/Documents/issue-332/src-gen/hello2/_hello2_main.h"
    reaction_t _lf__reaction_0;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _hello2_main_main_self_t;
_hello2_main_main_self_t* new__hello2_main();
#endif // _HELLO2_MAIN_H
