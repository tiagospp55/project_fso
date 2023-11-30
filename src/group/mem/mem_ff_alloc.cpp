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

        void *memFirstFitAlloc(uint32_t pid, uint32_t size)
        {
            soProbe(404, "%s(%u, 0x%x)\n", __func__, pid, size);

            require(pid > 0, "process ID must be non-zero");

            uint32_t size2=mem::memory.chunkSize;
            if(size%size2!=0)
            {
                size=size+size2+(size%size2);
            }

            for (uint32_t i = 0; i < mem::memory.freeMem.size(); i++)
            {
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