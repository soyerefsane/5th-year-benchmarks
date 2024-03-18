#ifndef _hello2_main_H
#define _hello2_main_H
#ifndef _HELLO2_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_428687695_H
#define TOP_LEVEL_PREAMBLE_428687695_H
/*Correspondence: Range: [(3, 4), (4, 21)) -> Range: [(0, 0), (1, 21)) (verbatim=true; src=/home/efsane/Documents/issue-332/src/hello2.lf)*/#include <wiringPi.h> 
#define TOGGLE_PIN 16
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct hello2_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} hello2_self_t;
#endif
#endif
