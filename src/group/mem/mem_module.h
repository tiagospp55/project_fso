/*
 *  \author ...
 */

#ifndef __SOMM22__MODULE__MEM__GROUP__
#define __SOMM22__MODULE__MEM__GROUP__

#include "somm22.h"
#include <list>

namespace somm22
{
    
    namespace group 
    {

        namespace mem
        {
            struct Mem_Block
            {
                uint32_t  PID;
                uint32_t  moduleSize;
                void*  moduleStart;
            };
            
            struct Memory{
                uint32_t   memSize;
                uint32_t  	memSizeOS;
                uint32_t  	chunkSize;
                uint32_t nextFit;
                AllocationPolicy  	policy;
                std::list<Mem_Block> freeMem, usedMem;
            };
            extern Memory memory;
        } // end of namespace mem

    } // end of namespace group

} // end of namespace somm22

#endif /* __SOMM22__MODULE__MEM__GROUP__ */

