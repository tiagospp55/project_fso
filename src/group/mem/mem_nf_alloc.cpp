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

        void *memNextFitAlloc(uint32_t pid, uint32_t size)
        {
            soProbe(405, "%s(%u, 0x%x)\n", __func__, pid, size);

            require(pid > 0, "process ID must be non-zero");

            for( ; mem::memory.nextFit<mem::memory.freeMem.size();)
            {
                if(mem::memory.nextFit==mem::memory.freeMem.size()-1)
                    mem::memory.nextFit=0;
                else
                    mem::memory.nextFit++;
                uint32_t i=mem::memory.nextFit;
                
                if (std::next(mem::memory.freeMem.begin(), i)->moduleSize >= size)
                {
                    uint32_t addrsize = std::next(mem::memory.freeMem.begin(), i)->moduleSize;
                    void *addr =std::next(mem::memory.freeMem.begin(), i)->moduleStart;
                    
                    if (addrsize == size)
                    {
                        mem::memory.usedMem.push_back(mem::Mem_Block{pid, size, addr});
                        mem::memory.freeMem.erase(std::next(mem::memory.freeMem.begin(), i));

                        return addr;
                    }
                    else
                    {
                        mem::memory.usedMem.push_back(mem::Mem_Block{pid, size, addr});
                        std::next(mem::memory.freeMem.begin(), i)->moduleSize -= size;
                        std::next(mem::memory.freeMem.begin(), i)->moduleStart = (char*)addr + size;
                        return addr;
                    }
                }
            }
            return NULL;
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22