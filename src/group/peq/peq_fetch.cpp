/*
 *  \author ...
 */

#include "somm22.h"
#include "peq_module.h"

namespace somm22
{

    namespace group 
    {

// ================================================================================== //

        Event peqFetchNext(uint32_t mask)
        {
            const char *maskStr = (mask == 0) ? "ANY" : ((mask == POSTPONED) ? "POSTPONED" : "ARRIVAL | TERMINATE");
            soProbe(305, "%s(%s)\n", __func__, maskStr);
            /* ACTION POINT: Replace next instruction with your code */
            Event retEvent;
           if ( mask == 0) mask =0b111;

                for(auto it = peq::eventList.begin(); it != peq::eventList.end(); ++it){
                    if((it->eventType & mask) != 0){
                        retEvent.eventTime = it->eventTime;
                        retEvent.eventType = it->eventType;
                        retEvent.pid = it->pid;
                        peq::eventList.erase(it);
                        break;

                    }

                } 


            return retEvent;
            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

        Event peqPeekNext(uint32_t mask)
        {
            const char *maskStr = (mask == 0) ? "ANY" : ((mask == POSTPONED) ? "POSTPONED" : "ARRIVAL | TERMINATE");
            soProbe(305, "%s(%s)\n", __func__, maskStr);

            /* ACTION POINT: Replace next instruction with your code */
            Event retEvent;
            if ( mask == 0) mask =0b111;
            for(auto it = peq::eventList.begin(); it != peq::eventList.end(); ++it){
                if((it->eventType & mask) != 0){
                    retEvent.eventTime = it->eventTime;
                    retEvent.eventType = it->eventType;
                    retEvent.pid = it->pid;
                    break;
                }

            }
            
            return retEvent;
            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22
