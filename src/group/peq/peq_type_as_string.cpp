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

        const char *peqEventTypeAsString(EventType type)
        {
            soProbe(397, "%s(\"0x%x\")\n", __func__, type);

            /* ACTION POINT: Replace next instruction with your code */
            
            if(type == ARRIVAL)
                return "ARRIVAL";
            else if (type == POSTPONED)
            {
                return "POSTPONED";
            }
            else if (type ==TERMINATE)
            {
                return "TERMINATE";
            }
            //throw Exception(ENOSYS, __func__);

            return NULL;
        }

// ================================================================================== //

        const char *peqEventMaskAsString(uint32_t mask)
        {
            soProbe(397, "%s(\"0x%x\")\n", __func__, mask);

            require((mask | 0b111) == 0b111, "wrong event mask");

            /* ACTION POINT: Replace next instruction with your code */
            if(mask == ARRIVAL){
                return "ARRIVAL";
            }else if(mask == (ARRIVAL | TERMINATE)){
                return "ARRIVAL | TERMINATE";
            }

            return NULL;
            //throw Excepion(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22

