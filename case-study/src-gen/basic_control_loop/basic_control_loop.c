// Code generated by the Lingua Franca compiler from:
// file://home/efsane/Documents/case-study/src/basic_control_loop.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/home/efsane/Documents/case-study/src-gen/basic_control_loop"

#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/trace.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
int main(int argc, const char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
const char* _lf_default_argv[] = { "dummy", "-o", "10", "sec" };
void _lf_set_default_command_line_options() {
        default_argc = 4;
        default_argv = _lf_default_argv;
}
#include "_sensor.h"
#include "_process.h"
#include "_actuator.h"
#include "_basic_control_loop_main.h"
typedef enum {
    basic_control_loop_main,
    _num_enclaves
} _enclave_id;
// The global array of environments associated with each enclave
environment_t envs[_num_enclaves];
// 'Create' and initialize the environments in the program
void _lf_create_environments() {
    environment_init(&envs[basic_control_loop_main],"basic_control_loop",basic_control_loop_main,_lf_number_of_workers,1,1,0,0,2,0,0,"basic_control_loop.lft");
}
// Update the pointer argument to point to the beginning of the environment array
// and return the size of that array
int _lf_get_environments(environment_t ** return_envs) {
   (*return_envs) = (environment_t *) envs;
   return _num_enclaves;
}
// No watchdogs found.
typedef void watchdog_t;
watchdog_t* _lf_watchdogs = NULL;
int _lf_watchdog_count = 0;
void _lf_initialize_trigger_objects() {
    int startup_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(startup_reaction_count);
    int shutdown_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(shutdown_reaction_count);
    int reset_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(reset_reaction_count);
    int timer_triggers_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(timer_triggers_count);
    int modal_state_reset_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_state_reset_count);
    int modal_reactor_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_reactor_count);
    int bank_index;
    SUPPRESS_UNUSED_WARNING(bank_index);
    int watchdog_number = 0;
    SUPPRESS_UNUSED_WARNING(watchdog_number);
    _basic_control_loop_main_main_self_t* basic_control_loop_main_self[1];
    SUPPRESS_UNUSED_WARNING(basic_control_loop_main_self);
    _sensor_self_t* basic_control_loop_sensor_self[1];
    SUPPRESS_UNUSED_WARNING(basic_control_loop_sensor_self);
    _process_self_t* basic_control_loop_process_self[1];
    SUPPRESS_UNUSED_WARNING(basic_control_loop_process_self);
    _actuator_self_t* basic_control_loop_actuator_self[1];
    SUPPRESS_UNUSED_WARNING(basic_control_loop_actuator_self);
    // ***** Start initializing basic_control_loop of class basic_control_loop
    basic_control_loop_main_self[0] = new__basic_control_loop_main();
    basic_control_loop_main_self[0]->base.environment = &envs[basic_control_loop_main];
    _lf_register_trace_event(envs[basic_control_loop_main].trace, basic_control_loop_main_self[0], NULL, trace_reactor, "basic_control_loop");
    bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
    SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
    {
        _basic_control_loop_main_main_self_t *self = basic_control_loop_main_self[0];
        // ***** Start initializing basic_control_loop.sensor of class Sensor
        basic_control_loop_sensor_self[0] = new__sensor();
        basic_control_loop_sensor_self[0]->base.environment = &envs[basic_control_loop_main];
        _lf_register_trace_event(envs[basic_control_loop_main].trace, basic_control_loop_sensor_self[0], NULL, trace_reactor, "sensor");
        _lf_register_trace_event(envs[basic_control_loop_main].trace, basic_control_loop_sensor_self[0], &(basic_control_loop_sensor_self[0]->_lf__t), trace_trigger, "sensor.t");
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        basic_control_loop_sensor_self[0]->poll_period = MSEC(10);
        basic_control_loop_sensor_self[0]->sense_time = MSEC(1);
        basic_control_loop_sensor_self[0]->randomized = false;
        // width of -2 indicates that it is not a multiport.
        basic_control_loop_sensor_self[0]->_lf_out_width = -2;
        envs[basic_control_loop_main].startup_reactions[startup_reaction_count[basic_control_loop_main]++] = &basic_control_loop_sensor_self[0]->_lf__reaction_0;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
        // Initiaizing timer basic_control_loop.sensor.t.
        basic_control_loop_sensor_self[0]->_lf__t.offset = MSEC(10);
        basic_control_loop_sensor_self[0]->_lf__t.period = MSEC(10);
        // Associate timer with the environment of its parent
        envs[basic_control_loop_main].timer_triggers[timer_triggers_count[basic_control_loop_main]++] = &basic_control_loop_sensor_self[0]->_lf__t;
        basic_control_loop_sensor_self[0]->_lf__t.mode = NULL;
    
        basic_control_loop_sensor_self[0]->_lf__reaction_0.deadline = NEVER;
        basic_control_loop_sensor_self[0]->_lf__reaction_1.deadline = NEVER;
        //***** End initializing basic_control_loop.sensor
    }
    {
        _basic_control_loop_main_main_self_t *self = basic_control_loop_main_self[0];
        // ***** Start initializing basic_control_loop.process of class Process
        basic_control_loop_process_self[0] = new__process();
        basic_control_loop_process_self[0]->base.environment = &envs[basic_control_loop_main];
        _lf_register_trace_event(envs[basic_control_loop_main].trace, basic_control_loop_process_self[0], NULL, trace_reactor, "process");
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        basic_control_loop_process_self[0]->proc_time = MSEC(6);
        // width of -2 indicates that it is not a multiport.
        basic_control_loop_process_self[0]->_lf_out_width = -2;
        // width of -2 indicates that it is not a multiport.
        basic_control_loop_process_self[0]->_lf_in_width = -2;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
        basic_control_loop_process_self[0]->_lf__reaction_0.deadline = NEVER;
        //***** End initializing basic_control_loop.process
    }
    {
        _basic_control_loop_main_main_self_t *self = basic_control_loop_main_self[0];
        // ***** Start initializing basic_control_loop.actuator of class Actuator
        basic_control_loop_actuator_self[0] = new__actuator();
        basic_control_loop_actuator_self[0]->base.environment = &envs[basic_control_loop_main];
        _lf_register_trace_event(envs[basic_control_loop_main].trace, basic_control_loop_actuator_self[0], NULL, trace_reactor, "actuator");
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        basic_control_loop_actuator_self[0]->poll_interval = MSEC(1);
        basic_control_loop_actuator_self[0]->wait_time = 0;
        // width of -2 indicates that it is not a multiport.
        basic_control_loop_actuator_self[0]->_lf_in_width = -2;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
        basic_control_loop_actuator_self[0]->_lf__reaction_0.deadline = NEVER;
        //***** End initializing basic_control_loop.actuator
    }
    //***** End initializing basic_control_loop
    // **** Start deferred initialize for basic_control_loop
    {
    
    
    
        // **** Start deferred initialize for basic_control_loop.sensor
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of basic_control_loop.sensor.
            basic_control_loop_sensor_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 0 of basic_control_loop.sensor
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_2 of basic_control_loop.sensor.
            basic_control_loop_sensor_self[0]->_lf__reaction_1.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            basic_control_loop_sensor_self[0]->_lf__reaction_1.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &basic_control_loop_sensor_self[0]->base.allocations);
            basic_control_loop_sensor_self[0]->_lf__reaction_1.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &basic_control_loop_sensor_self[0]->base.allocations);
            basic_control_loop_sensor_self[0]->_lf__reaction_1.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &basic_control_loop_sensor_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    basic_control_loop_sensor_self[0]->_lf__reaction_1.output_produced[count++] = &basic_control_loop_sensor_self[0]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 1 of basic_control_loop.sensor
        
        }
        // **** End of deferred initialize for basic_control_loop.sensor
        // **** Start deferred initialize for basic_control_loop.process
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of basic_control_loop.process.
            basic_control_loop_process_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            basic_control_loop_process_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &basic_control_loop_process_self[0]->base.allocations);
            basic_control_loop_process_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &basic_control_loop_process_self[0]->base.allocations);
            basic_control_loop_process_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &basic_control_loop_process_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    basic_control_loop_process_self[0]->_lf__reaction_0.output_produced[count++] = &basic_control_loop_process_self[0]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of basic_control_loop.process
        
        }
        // **** End of deferred initialize for basic_control_loop.process
        // **** Start deferred initialize for basic_control_loop.actuator
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of basic_control_loop.actuator.
            basic_control_loop_actuator_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 0 of basic_control_loop.actuator
        
        }
        // **** End of deferred initialize for basic_control_loop.actuator
    }
    // **** End of deferred initialize for basic_control_loop
    // **** Start non-nested deferred initialize for basic_control_loop
    {
    
    
    
        // **** Start non-nested deferred initialize for basic_control_loop.sensor
        {
        
            // For reference counting, set num_destinations for port basic_control_loop.sensor.out.
            // Iterate over range basic_control_loop.sensor.out(0,1)->[basic_control_loop.process.in(0,1)].
            {
                int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                basic_control_loop_sensor_self[src_runtime]->_lf_out._base.num_destinations = 1;
                basic_control_loop_sensor_self[src_runtime]->_lf_out._base.source_reactor = (self_base_t*)basic_control_loop_sensor_self[src_runtime];
            }
            {
                int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
                // Iterate over range basic_control_loop.sensor.out(0,1)->[basic_control_loop.process.in(0,1)].
                {
                    int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                    int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                    int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                    int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                    // Reaction 1 of basic_control_loop.sensor triggers 1 downstream reactions
                    // through port basic_control_loop.sensor.out.
                    basic_control_loop_sensor_self[src_runtime]->_lf__reaction_1.triggered_sizes[triggers_index[src_runtime]] = 1;
                    // For reaction 1 of basic_control_loop.sensor, allocate an
                    // array of trigger pointers for downstream reactions through port basic_control_loop.sensor.out
                    trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                            1, sizeof(trigger_t*),
                            &basic_control_loop_sensor_self[src_runtime]->base.allocations); 
                    basic_control_loop_sensor_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime]++] = trigger_array;
                }
                for (int i = 0; i < 1; i++) triggers_index[i] = 0;
                // Iterate over ranges basic_control_loop.sensor.out(0,1)->[basic_control_loop.process.in(0,1)] and basic_control_loop.process.in(0,1).
                {
                    int src_runtime = 0; // Runtime index.
                    SUPPRESS_UNUSED_WARNING(src_runtime);
                    int src_channel = 0; // Channel index.
                    SUPPRESS_UNUSED_WARNING(src_channel);
                    int src_bank = 0; // Bank index.
                    SUPPRESS_UNUSED_WARNING(src_bank);
                    // Iterate over range basic_control_loop.process.in(0,1).
                    {
                        int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                        int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                        int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                        // Point to destination port basic_control_loop.process.in's trigger struct.
                        basic_control_loop_sensor_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime] + src_channel][0] = &basic_control_loop_process_self[dst_runtime]->_lf__in;
                    }
                }
            }
        
        }
        // **** End of non-nested deferred initialize for basic_control_loop.sensor
        // **** Start non-nested deferred initialize for basic_control_loop.process
        {
        
            // For reference counting, set num_destinations for port basic_control_loop.process.out.
            // Iterate over range basic_control_loop.process.out(0,1)->[basic_control_loop.actuator.in(0,1)].
            {
                int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                basic_control_loop_process_self[src_runtime]->_lf_out._base.num_destinations = 1;
                basic_control_loop_process_self[src_runtime]->_lf_out._base.source_reactor = (self_base_t*)basic_control_loop_process_self[src_runtime];
            }
            {
                int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
                // Iterate over range basic_control_loop.process.out(0,1)->[basic_control_loop.actuator.in(0,1)].
                {
                    int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                    int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                    int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                    int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                    // Reaction 0 of basic_control_loop.process triggers 1 downstream reactions
                    // through port basic_control_loop.process.out.
                    basic_control_loop_process_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
                    // For reaction 0 of basic_control_loop.process, allocate an
                    // array of trigger pointers for downstream reactions through port basic_control_loop.process.out
                    trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                            1, sizeof(trigger_t*),
                            &basic_control_loop_process_self[src_runtime]->base.allocations); 
                    basic_control_loop_process_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
                }
                for (int i = 0; i < 1; i++) triggers_index[i] = 0;
                // Iterate over ranges basic_control_loop.process.out(0,1)->[basic_control_loop.actuator.in(0,1)] and basic_control_loop.actuator.in(0,1).
                {
                    int src_runtime = 0; // Runtime index.
                    SUPPRESS_UNUSED_WARNING(src_runtime);
                    int src_channel = 0; // Channel index.
                    SUPPRESS_UNUSED_WARNING(src_channel);
                    int src_bank = 0; // Bank index.
                    SUPPRESS_UNUSED_WARNING(src_bank);
                    // Iterate over range basic_control_loop.actuator.in(0,1).
                    {
                        int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                        int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                        int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                        // Point to destination port basic_control_loop.actuator.in's trigger struct.
                        basic_control_loop_process_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &basic_control_loop_actuator_self[dst_runtime]->_lf__in;
                    }
                }
            }
        
        }
        // **** End of non-nested deferred initialize for basic_control_loop.process
        // **** Start non-nested deferred initialize for basic_control_loop.actuator
        {
        
        
        
        
        }
        // **** End of non-nested deferred initialize for basic_control_loop.actuator
    }
    // **** End of non-nested deferred initialize for basic_control_loop
    // Connect inputs and outputs for reactor basic_control_loop.
    // Connect inputs and outputs for reactor basic_control_loop.sensor.
    // Connect basic_control_loop.sensor.out(0,1)->[basic_control_loop.process.in(0,1)] to port basic_control_loop.process.in(0,1)
    // Iterate over ranges basic_control_loop.sensor.out(0,1)->[basic_control_loop.process.in(0,1)] and basic_control_loop.process.in(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range basic_control_loop.process.in(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            basic_control_loop_process_self[dst_runtime]->_lf_in = (_process_in_t*)&basic_control_loop_sensor_self[src_runtime]->_lf_out;
        }
    }
    // Connect inputs and outputs for reactor basic_control_loop.process.
    // Connect basic_control_loop.process.out(0,1)->[basic_control_loop.actuator.in(0,1)] to port basic_control_loop.actuator.in(0,1)
    // Iterate over ranges basic_control_loop.process.out(0,1)->[basic_control_loop.actuator.in(0,1)] and basic_control_loop.actuator.in(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range basic_control_loop.actuator.in(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            basic_control_loop_actuator_self[dst_runtime]->_lf_in = (_actuator_in_t*)&basic_control_loop_process_self[src_runtime]->_lf_out;
        }
    }
    // Connect inputs and outputs for reactor basic_control_loop.actuator.
    {
    }
    {
    }
    {
    }
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            // Add port basic_control_loop.sensor.out to array of is_present fields.
            envs[basic_control_loop_main].is_present_fields[0 + count] = &basic_control_loop_sensor_self[0]->_lf_out.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port basic_control_loop.sensor.out to array of intended_tag fields.
            envs[basic_control_loop_main]._lf_intended_tag_fields[0 + count] = &basic_control_loop_sensor_self[0]->_lf_out.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
        }
    }
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            // Add port basic_control_loop.process.out to array of is_present fields.
            envs[basic_control_loop_main].is_present_fields[1 + count] = &basic_control_loop_process_self[0]->_lf_out.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port basic_control_loop.process.out to array of intended_tag fields.
            envs[basic_control_loop_main]._lf_intended_tag_fields[1 + count] = &basic_control_loop_process_self[0]->_lf_out.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
        }
    }
    
    // Set reaction priorities for ReactorInstance basic_control_loop
    {
    
        // Set reaction priorities for ReactorInstance basic_control_loop.sensor
        {
            basic_control_loop_sensor_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            basic_control_loop_sensor_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
            basic_control_loop_sensor_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            basic_control_loop_sensor_self[0]->_lf__reaction_1.index = 0xffffffffffff0001LL;
        }
    
    
        // Set reaction priorities for ReactorInstance basic_control_loop.process
        {
            basic_control_loop_process_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            basic_control_loop_process_self[0]->_lf__reaction_0.index = 0xffffffffffff0002LL;
        }
    
    
        // Set reaction priorities for ReactorInstance basic_control_loop.actuator
        {
            basic_control_loop_actuator_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 3 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            basic_control_loop_actuator_self[0]->_lf__reaction_0.index = 0xffffffffffff0003LL;
        }
    
    }
    
    // Initialize the scheduler
    size_t num_reactions_per_level[4] = 
        {1, 1, 1, 1};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 4};
    lf_sched_init(
        &envs[basic_control_loop_main],
        envs[basic_control_loop_main].num_workers,
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
void terminate_execution(environment_t* env) {}
#endif