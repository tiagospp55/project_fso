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

        void memFree(void *addr)
        {
            soProbe(408, "%s(addr: %p)\n", __func__, addr);

            require(addr != NULL, "addr must be non-null");
            require(mem::memory.memSizeOS > 0, "memory must be initialized");
            for( uint32_t i =0; i<mem::memory.usedMem.size(); i++){
                if(std::next(mem::memory.usedMem.begin(),i)->moduleStart == addr){

                    uint32_t addrsize= std::next(mem::memory.usedMem.begin(),i)->moduleSize;

                    if(mem::memory.freeMem.size() == 1)
                    {
                        char *addrU = (char *)addr;
                        
                        void* before = std::next(mem::memory.freeMem.begin(),0)->moduleStart;
                        char *beforeStart = (char *)before;

                        if( addrU + addrsize == beforeStart)
                        {
                            std::next(mem::memory.freeMem.begin(),0)->moduleSize += addrsize;
                            std::next(mem::memory.freeMem.begin(),0)->moduleStart = addr;
                        }
                        else
                        {
                            mem::memory.freeMem.insert(std::next(mem::memory.freeMem.begin(),0),mem::Mem_Block{0,addrsize,addr});
                        }
                    }
                    else
                    {
                        for(uint32_t j=0; j<mem::memory.freeMem.size()-1; j++){

                            uint32_t before_size = std::next(mem::memory.freeMem.begin(),j)->moduleSize;
                            char* before_start = (char *)std::next(mem::memory.freeMem.begin(),j)->moduleStart;
                            
                            uint32_t after_size = std::next(mem::memory.freeMem.begin(),j+1)->moduleSize;
                            char* after_start = (char *)std::next(mem::memory.freeMem.begin(),j+1)->moduleStart;

                            if((before_start+before_size) == (char *)addr && ((char *)addr+addrsize) == after_start){
                                std::next(mem::memory.freeMem.begin(),j)->moduleSize += addrsize + after_size;
                                mem::memory.freeMem.erase(std::next(mem::memory.freeMem.begin(),j+1));
                                break;
                            }
                            else if((before_start+before_size) == (char *)addr){
                                std::next(mem::memory.freeMem.begin(),j)->moduleSize += addrsize;
                                break;
                            }
                            else if(((char *)addr+addrsize) == after_start){
                                std::next(mem::memory.freeMem.begin(),j+1)->moduleSize += addrsize;
                                std::next(mem::memory.freeMem.begin(),j+1)->moduleStart = addr;
                                break;
                            }
                            else if( (char *)addr + addrsize== before_start){
                                std::next(mem::memory.freeMem.begin(),j+1)->moduleSize += addrsize;
                                std::next(mem::memory.freeMem.begin(),j+1)->moduleStart = addr;
                                break;
                            }else
                            {
                                mem::memory.freeMem.insert(std::next(mem::memory.freeMem.begin(),j),mem::Mem_Block{0,addrsize,addr});
                                break;
                            }
                    
                        }
                    }
                    mem::memory.usedMem.erase(std::next(mem::memory.usedMem.begin(),i));
                    break;
                }
            }
        }

    // ================================================================================== //

    } // end of namespace group

} // end of namespace somm22