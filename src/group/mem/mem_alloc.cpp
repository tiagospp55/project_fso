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

        void *memAlloc(uint32_t pid, uint32_t size)
        {
            soProbe(403, "%s(%u, 0x%x)\n", __func__, pid, size);

            require(pid > 0, "process ID must be non-zero");

            switch (mem::memory.policy)
            {
                case AllocationPolicy:: BestFit:
                    return memBestFitAlloc(pid, size);
                    break;
                case AllocationPolicy::FirstFit:
                    return memFirstFitAlloc(pid, size);
                    break;
                case AllocationPolicy::NextFit:
                    return memWorstFitAlloc(pid, size);
                    break;
                case AllocationPolicy::WorstFit:
                    return memNextFitAlloc(pid, size);
                    break;
            }
            return NULL;
        }

// ================================================================================== //

    } // end of namespace group

} // end of names