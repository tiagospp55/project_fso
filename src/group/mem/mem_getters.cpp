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

        uint32_t memGetBiggestHole()
        {
            soProbe(409, "%s()\n", __func__);

            mem::memory.freeMem.sort([](mem::Mem_Block a, mem::Mem_Block b){return a.moduleSize > b.moduleSize;});
            return mem::memory.freeMem.front().moduleSize;
        }

// ================================================================================== //

        uint32_t memGetMaxAllowableSize()
        {
            soProbe(409, "%s()\n", __func__);
            return mem::memory.memSize - mem::memory.memSizeOS;
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22