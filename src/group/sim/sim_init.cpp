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
         * \brief Init the module's internal data structure
         */
        void simInit()
        {
            soProbe(501, "%s()\n", __func__);

            /* ACTION POINT: Replace next instruction with your code */
            sim::currentTime = 0;
            sim::mask = ARRIVAL | TERMINATE;
            sim::step = 0;

            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22
