#ifndef _gpio_cmake_main_H
#define _gpio_cmake_main_H
#ifndef _GPIO_CMAKE_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1307810440_H
#define TOP_LEVEL_PREAMBLE_1307810440_H
/*Correspondence: Range: [(5, 4), (6, 21)) -> Range: [(0, 0), (1, 21)) (verbatim=true; src=/home/efsane/Documents/issue-332/src/gpio_cmake.lf)*/#include <wiringPi.h> 
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
typedef struct gpio_cmake_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} gpio_cmake_self_t;
#endif
#endif
