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
         * \brief Get the current simulation step
         * \details
         *   - This modules keeps internally the number of events already processed.
         *     The current simulation step corresponds to the number of events already
         *     processed by the module.
         * \return The current simulation step
         */
        uint32_t simGetCurrentSimStep()
        {
            soProbe(504, "%s()\n", __func__);

            /* ACTION POINT: Replace next instruction with your code */

            return sim::step;
            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

        /*
         * \brief Get the current simulation time
         * \details
         *   - On consequence of the execution of events, the current simulation time may advance. 
         * \return The current simulation time
         */
        uint32_t simGetCurrentSimTime()
        {
            soProbe(504, "%s()\n", __func__);

            /* ACTION POINT: Replace next instruction with your code */

            return sim::currentTime;
            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

        /*
         * \brief Get the current simulation mask
         * \details
         *   - At every step, the type of events that can be processed may change.
         *     The event mask is a bitwise-or of those possible.
         * \return The current simulation mask
         */
        uint32_t simGetCurrentSimMask()
        {
            soProbe(504, "%s()\n", __func__);

            /* ACTION POINT: Replace next instruction with your code */

            return sim::mask;
            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22
