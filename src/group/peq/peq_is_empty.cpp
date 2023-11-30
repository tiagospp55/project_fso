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

        bool peqIsEmpty(uint32_t mask) 
        {
            const char *maskStr = (mask == 0) ? "ANY" : ((mask == POSTPONED) ? "POSTPONED" : "ARRIVAL | TERMINATE");
            soProbe(303, "%s(%s)\n", __func__, maskStr);
            bool ret = true;
            /* ACTION POINT: Replace next instruction with your code */
            if(mask == 0) mask = 0b111;
            if(mask == 0b111){
                ret = (peq::eventList.size() == 0);
                return ret;
            }else{
                for(auto it = peq::eventList.begin(); it != peq::eventList.end(); ++it){
                    if((it->eventType & mask ) != 0){
                        ret = false;    // fix warning5
                        break;
                    }

                } 

                return ret;
            }
            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22

