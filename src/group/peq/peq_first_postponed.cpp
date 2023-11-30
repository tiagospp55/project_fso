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

        uint32_t peqGetFirstPostponedProcess() 
        {
            soProbe(306, "%s()\n", __func__);

            /* ACTION POINT: Replace next instruction with your code */
            //if event type begin == POstponed returns pid from the first event on the list;
            if(peq::eventList.begin()->eventType == POSTPONED){
                return peq::eventList.begin()->pid;
            }

            list<Event>::iterator it;
            uint32_t id = 0;
            uint32_t earliest_time = peq::eventList.begin()->eventTime;
            for(it = peq::eventList.begin(); it != peq::eventList.end(); ++it){
                uint32_t it_event_time = it->eventTime;
                uint32_t it_event_type = it->eventType;

                if(it_event_type == POSTPONED && it_event_time < earliest_time)
                    id = it->pid;
                } 

            printf("id: %d\n", id);

            return id;

            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22

