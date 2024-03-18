// Code generated by the Lingua Franca compiler from:
// file://home/efsane/Documents/5th-year-benchmarks/src/timer_logic_flag.lf
#define LOG_LEVEL 2

#include <limits.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/api/schedule.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
int main(int argc, const char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
const char* _lf_default_argv[] = { "dummy", "-o", "2", "sec" };
void lf_set_default_command_line_options() {
        default_argc = 4;
        default_argv = _lf_default_argv;
}
#include "_timer_logic_flag_main.h"
typedef enum {
    timer_logic_flag_main,
    _num_enclaves
} _enclave_id;
// The global array of environments associated with each enclave
environment_t envs[_num_enclaves];
// 'Create' and initialize the environments in the program
void lf_create_environments() {
    environment_init(&envs[timer_logic_flag_main],"timer_logic_flag",timer_logic_flag_main,_lf_number_of_workers,1,1,0,0,0,0,0,0,NULL);
}
// Update the pointer argument to point to the beginning of the environment array
// and return the size of that array
int _lf_get_environments(environment_t ** return_envs) {
   (*return_envs) = (environment_t *) envs;
   return _num_enclaves;
}
void _lf_initialize_trigger_objects() {
    int startup_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(startup_reaction_count);
    int shutdown_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(shutdown_reaction_count);
    int reset_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(reset_reaction_count);
    int timer_triggers_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(timer_triggers_count);
    int modal_state_reset_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_state_reset_count);
    int modal_reactor_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_reactor_count);
    int watchdog_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(watchdog_count);
    int bank_index;
    SUPPRESS_UNUSED_WARNING(bank_index);
    int watchdog_number = 0;
    SUPPRESS_UNUSED_WARNING(watchdog_number);
    _timer_logic_flag_main_main_self_t* timer_logic_flag_main_self[1];
    SUPPRESS_UNUSED_WARNING(timer_logic_flag_main_self);
    // ***** Start initializing timer_logic_flag of class timer_logic_flag
    timer_logic_flag_main_self[0] = new__timer_logic_flag_main();
    timer_logic_flag_main_self[0]->base.environment = &envs[timer_logic_flag_main];
    bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
    envs[timer_logic_flag_main].startup_reactions[startup_reaction_count[timer_logic_flag_main]++] = &timer_logic_flag_main_self[0]->_lf__reaction_0;
    { // For scoping
        static int _initial = 0;
        timer_logic_flag_main_self[0]->flag = _initial;
    } // End scoping.
    // Initiaizing timer timer_logic_flag.t.
    timer_logic_flag_main_self[0]->_lf__t.offset = MSEC(10);
    timer_logic_flag_main_self[0]->_lf__t.period = MSEC(1);
    // Associate timer with the environment of its parent
    envs[timer_logic_flag_main].timer_triggers[timer_triggers_count[timer_logic_flag_main]++] = &timer_logic_flag_main_self[0]->_lf__t;
    timer_logic_flag_main_self[0]->_lf__t.mode = NULL;
    
    timer_logic_flag_main_self[0]->_lf__reaction_0.deadline = NEVER;
    timer_logic_flag_main_self[0]->_lf__reaction_1.deadline = NEVER;
    //***** End initializing timer_logic_flag
    // **** Start deferred initialize for timer_logic_flag
    {
    
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_1 of timer_logic_flag.
        timer_logic_flag_main_self[0]->_lf__reaction_0.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 0 of timer_logic_flag
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_2 of timer_logic_flag.
        timer_logic_flag_main_self[0]->_lf__reaction_1.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 1 of timer_logic_flag
    
    }
    // **** End of deferred initialize for timer_logic_flag
    // **** Start non-nested deferred initialize for timer_logic_flag
    {
    
    
    
    }
    // **** End of non-nested deferred initialize for timer_logic_flag
    // Connect inputs and outputs for reactor timer_logic_flag.

    
    // Set reaction priorities for ReactorInstance timer_logic_flag
    {
        timer_logic_flag_main_self[0]->_lf__reaction_0.chain_id = 1;
        // index is the OR of level 0 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        timer_logic_flag_main_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
        timer_logic_flag_main_self[0]->_lf__reaction_1.chain_id = 1;
        // index is the OR of level 1 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        timer_logic_flag_main_self[0]->_lf__reaction_1.index = 0xffffffffffff0001LL;
    }
    
    // Initialize the scheduler
    size_t num_reactions_per_level[2] = 
        {1, 1};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 2};
    lf_sched_init(
        &envs[timer_logic_flag_main],
        envs[timer_logic_flag_main].num_workers,
        &sched_params
    );
    #ifdef EXECUTABLE_PREAMBLE
    _lf_executable_preamble(&envs[0]);
    #endif
    #ifdef FEDERATED
    initialize_triggers_for_federate();
    #endif // FEDERATED
}
void logical_tag_complete(tag_t tag_to_send) {
#ifdef FEDERATED_CENTRALIZED
        lf_latest_tag_complete(tag_to_send);
#endif // FEDERATED_CENTRALIZED

}
#ifndef FEDERATED
void lf_terminate_execution(environment_t* env) {}
#endif
