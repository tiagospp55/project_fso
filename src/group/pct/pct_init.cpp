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

        void pctInit(const char *fname) 
        {
            soProbe(201, "%s(\"%s\")\n", __func__, fname);
        
            /* ACTION POINT: Replace next instruction with your code */
            //carregar o mapa usando o insert
            FILE* file = fopen(fname,"r");
            
            if (NULL == file) {
                cerr << "File not found";
                throw Exception(errno, __func__);
            }

            char line[1000]; 

            uint32_t pid, arrivalTime, duration, addrSpace; 
            while(fgets(line,1000,file) != NULL) 
            {  
                if(line[0]=='#'){
                    // cout << "commented line" << endl;
                    continue;
                }
                sscanf(line,"%d ;%d ;%d ; 0x%x ",&pid,&arrivalTime,&duration,&addrSpace); //has to receive the address
                pctInsert(pid,arrivalTime,duration,addrSpace);
            }
            
            fclose(file);

            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22

