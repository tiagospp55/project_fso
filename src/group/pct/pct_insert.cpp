    /*
 *  \author ...
 */

#include "somm22.h"
#include "pct_module.h"
using namespace std;
namespace somm22
{

    namespace group 
    {

// ================================================================================== //

        void pctInsert(uint32_t pid, uint32_t arrivalTime, uint32_t duration, uint32_t addrSpaceSize)
        {   
            soProbe(203, "%s(%d, %u, %u, 0x%x)\n", __func__, pid, arrivalTime, duration, addrSpaceSize);
            require(pid > 0, "process ID must be non-zero");
            

            /* ACTION POINT: Replace next instruction with your code */
            pct:: process aux;
            aux.pid=pid;
            aux.arrivalTime=arrivalTime;
            aux.duration=duration;
            aux.addrSpaceSize=addrSpaceSize;
            aux.state = TO_COME;
            aux.startAddr = NULL;
            aux.startTime = -1;
            pct::process_table[pid]=aux;

            /*throw Exception(ENOSYS, __func__);*/
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22
