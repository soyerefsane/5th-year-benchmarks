#ifndef _GPIO_CMAKE_MAIN_H
#define _GPIO_CMAKE_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1307810440_H
#define TOP_LEVEL_PREAMBLE_1307810440_H
#include <wiringPi.h> 
#define TOGGLE_PIN 16
#endif
typedef struct {
    struct self_base_t base;
#line 12 "/home/efsane/Documents/issue-332/src-gen/gpio_cmake/_gpio_cmake_main.h"
#line 13 "/home/efsane/Documents/issue-332/src-gen/gpio_cmake/_gpio_cmake_main.h"
    reaction_t _lf__reaction_0;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _gpio_cmake_main_main_self_t;
_gpio_cmake_main_main_self_t* new__gpio_cmake_main();
#endif // _GPIO_CMAKE_MAIN_H
