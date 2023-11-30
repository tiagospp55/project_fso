/*
 *  \author ...
 */

#include "somm22.h"
#include "peq_module.h"


using namespace std;

namespace somm22
{

    namespace group 
    {

// ================================================================================== //

        void peqInit(const char *fname)
        {
            soProbe(301, "%s(\"%s\")\n", __func__, fname);

            /* ACTION POINT: Replace next instruction with your code */

            //throw Exception(ENOSYS, __func__);

            /* initializing*/
            FILE* file = fopen(fname,"r");
            
            if (NULL == file) {
                cerr << "File not found";
                throw Exception(errno, __func__);
            }

            char line[1000]; 

            uint32_t pid, arrivalTime, duration,addrSpace; 
            while(fgets(line,1000,file) != NULL) 
            {  
                if(line[0]=='#'){
                    continue;
                }

                sscanf(line,"%d ;%d ;%d ;0x%x ",&pid,&arrivalTime,&duration,&addrSpace); //has to receive the address
                /* passing the arguments to create the event*/
                peqInsert(ARRIVAL, arrivalTime,pid);

            }
            
            fclose(file);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22

