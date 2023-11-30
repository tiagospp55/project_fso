/*
 *  \author ...
 */

#include "somm22.h"
#include "peq_module.h"

using namespace std;

namespace somm22
{

    namespace group 
    {

// ================================================================================== //

        void peqInsert(EventType type, uint32_t time, uint32_t pid)
        {
            soProbe(304, "%s(%s, %u, %u)\n", __func__, peqEventTypeAsString(type), time, pid);
            require(pid > 0, "process ID must be non-zero");

            /* ACTION POINT: Replace next instruction with your code */
            Event aux;
            aux.pid = pid;
            aux.eventTime = time;
            aux.eventType = type;
            list<Event>::iterator it;

            //bool inserted = false;

            for(it = peq::eventList.begin(); it != peq::eventList.end(); ++it){
                uint32_t it_event_time = it->eventTime;
                    if(it_event_time > aux.eventTime){
                        break;

                    }
            } 
            peq::eventList.insert(it,aux);

          //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22
