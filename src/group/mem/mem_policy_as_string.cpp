/*
 *  \author ...
 */

#include "somm22.h"
#include "mem_module.h"

namespace somm22
{

    namespace group 
    {

// ================================================================================== //

        const char *memAllocationPolicyAsString(AllocationPolicy policy)
        {
            soProbe(490, "%s(\"%u\")\n", __func__, policy);

            if (policy == AllocationPolicy::BestFit)
                return "BestFit";
            else if (policy == AllocationPolicy::FirstFit)
                return "FirstFit";
            else if (policy == AllocationPolicy::NextFit)
                return "NextFit";
            else if (policy == AllocationPolicy::WorstFit)
                return "WorstFit";
            else
                return "Unknown";
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22