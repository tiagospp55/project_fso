/*
 *  \author ...
 */

#ifndef __SOMM22__MODULE__PCT__GROUP__
#define __SOMM22__MODULE__PCT__GROUP__

#include "somm22.h"

#include <list>
#include <stdio.h>
#include <map>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <errno.h>
#include <iterator>


using namespace std;
namespace somm22
{
    
    namespace group 
    {

        namespace pct
        {
            struct process{
                uint32_t pid;
                uint32_t arrivalTime;
                uint32_t duration;
                uint32_t addrSpaceSize;
                void* startAddr;
                uint32_t startTime;
                enum ProcessState state;
            };
            extern std:: map < uint32_t, process> process_table; 
        } // end of namespace pct

    } // end of namespace group

} // end of namespace somm22

#endif /* __SOMM22__MODULE__PCT__GROUP__ */




