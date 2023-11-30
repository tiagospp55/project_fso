/*
 *  \author ...
 */

#include "somm22.h"
#include "sim_module.h"

namespace somm22
{

    namespace group
    {

// ================================================================================== //

        /*
         * Solution may be based on a state machine with two states, which are related to the
         * type of events that are fetched from the Process Event Queue.
         * The meaningful cases are:
         * - ARRIVAL | TERMINATE
         * - POSTPONED
         */

        void processArrival(Event next_event){
            uint32_t event_pid = next_event.pid; 
            uint32_t event_time = next_event.eventTime;
            uint32_t duration = pctGetProcessDuration(event_pid);
            uint32_t needed_memory = pctGetProcessAddressSpaceSize(event_pid);
            uint32_t total_memory = memGetMaxAllowableSize();
            if(needed_memory > total_memory){
                pctSetProcessState(event_pid, DISCARDED);
                return;
            }    

            void* startAddr;
            //check if there are other postponed processes;
            uint32_t id = peqGetFirstPostponedProcess();
            if(id == 0){
                if((startAddr = memAlloc(event_pid,needed_memory)) != NULL){
                pctSetProcessState(event_pid,RUNNING);
                sim::currentTime = event_time;
                pctSetProcessStartTime(event_pid,sim::currentTime);
                pctSetProcessMemAddress(event_pid,startAddr);
                peqInsert(TERMINATE,sim::currentTime + duration ,event_pid);
                    
                }else{
                    pctSetProcessState(event_pid,SWAPPED);
                    peqInsert(POSTPONED,event_time ,event_pid);
                }
            }else{
                pctSetProcessState(event_pid,SWAPPED);
                peqInsert(POSTPONED,event_time ,event_pid);
                sim::currentTime = event_time;
            }
            
                   
                sim::mask = ARRIVAL | TERMINATE;
        }

        void processTerminate(Event next_event){
            uint32_t event_pid = next_event.pid; 
            uint32_t event_time = next_event.eventTime;
            void* addr = pctGetProcessMemAddress(event_pid);
            memFree(addr);
            pctSetProcessState(event_pid,FINISHED);
            sim::currentTime = event_time;

        }

        void processPostponed(Event next_event){
            void* addr;
            uint32_t process_space = pctGetProcessAddressSpaceSize(next_event.pid);
            if((addr = memAlloc(next_event.pid,process_space)) != NULL){
                pctSetProcessMemAddress(next_event.pid, addr);
                pctSetProcessStartTime(next_event.pid,sim::currentTime);
                pctSetProcessState(next_event.pid,RUNNING);
                peqInsert(TERMINATE,pctGetProcessDuration(next_event.pid) + sim::currentTime, next_event.pid);
            }

        }


        void processEvent(){
            Event next_event = peqFetchNext(sim::mask);
            uint32_t event_mask = next_event.eventType;
            //so se for arrival
            if(event_mask == ARRIVAL){
                processArrival(next_event);
            }
            
            //processar terminate
            if(event_mask == TERMINATE){
                processTerminate(next_event);
                uint32_t id = peqGetFirstPostponedProcess();
                if(id != 0){
                    uint32_t biggest_hole = memGetBiggestHole();
                    uint32_t postponed_space = pctGetProcessAddressSpaceSize(id);
                    if(postponed_space <= biggest_hole){
                        sim::mask = POSTPONED;
                    }else{
                        sim::mask = ARRIVAL | TERMINATE;
                    }
                }else{
                    sim::mask = ARRIVAL | TERMINATE;
                }

            }
            //processar postponed - chamar memAlloc
            if(event_mask == POSTPONED){
                processPostponed(next_event);
                uint32_t id = peqGetFirstPostponedProcess();
                if(id != 0){
                    uint32_t biggest_hole = memGetBiggestHole();
                    uint32_t postponed_space = pctGetProcessAddressSpaceSize(id);
                    if(postponed_space <= biggest_hole){
                        sim::mask = POSTPONED;
                    }else{
                        sim::mask = ARRIVAL | TERMINATE;
                    }
                }else{
                    sim::mask = ARRIVAL | TERMINATE;
                }
            }

        }



        void simRun(uint32_t cnt)
        {
            soProbe(503, "%s(cnt: %u)\n", __func__, cnt);

            /* ACTION POINT: Replace next instruction with your code */
            if(cnt == 0){
                while(not peqIsEmpty(0)){
                    processEvent();
                    sim::step++;
                }
            }else{
                for(uint32_t i = 0; i<cnt;i++){
                    if(not peqIsEmpty(0)){
                        processEvent();
                        sim::step++;
                    }else{
                        break;
                    }
                }   
            }
            
                

            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22
