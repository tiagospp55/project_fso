/*
 *  \author ...
 */

#include "somm22.h"
#include "mem_module.h"
#include <iostream>
#include <sstream>

namespace somm22
{

    namespace group 
    {       
        void imprimirmem(FILE * file)
        {

            fprintf(file,"+==============================+\n");
            fprintf(file,"|  Memory Management busy list |\n");
            fprintf(file,"+-------+-----------+----------+\n");
            fprintf(file,"|  PID  |   start   |   size   |\n");
            for( uint32_t i=0; i<mem::memory.usedMem.size(); i++){
                fprintf(file, "| %5d | %9p | %#9x|\n", 
                std::next(mem::memory.usedMem.begin(),i)->PID, std::next(mem::memory.usedMem.begin(),i)->moduleStart, 
                std::next(mem::memory.usedMem.begin(),i)->moduleSize);
            }
            fprintf(file,"+==============================+\n\n\n");

            fprintf(file,"+==============================+\n");
            fprintf(file,"|  Memory Management free list |\n");
            fprintf(file,"+-------+-----------+----------+\n");
            fprintf(file,"|  PID  |   start   |   size   |\n");
            for( uint32_t i=0; i<mem::memory.freeMem.size(); i++){
                fprintf(file, "| %5d | %9p | %#9x|\n", 
                std::next(mem::memory.freeMem.begin(),i)->PID, std::next(mem::memory.freeMem.begin(),i)->moduleStart, 
                std::next(mem::memory.freeMem.begin(),i)->moduleSize);
            }
            fprintf(file,"+==============================+\n\n\n");
            
            
        }
// ================================================================================== //

    
    void memLog()
        {
            soProbe(402, "%s()\n", __func__);
            
            FILE* fout = logGetStream();
            imprimirmem(fout);
            
        }

// ================================================================================== //

        void memPrint(const char *fname, PrintMode mode)
        {
            soProbe(402, "%s(\"%s\", %s)\n", __func__, fname, (mode == NEW) ? "NEW" : "APPEND");

            FILE* file;
            switch (mode)
            {
            case NEW:
                /* print to a new file (zapping if necessary) */
                file = fopen(fname, "w");
                imprimirmem(file);
                fclose(file);
                break;
            case APPEND:
                // append printing to the end of the fileto
                file = fopen(fname, "a");
                imprimirmem(file);
                fclose(file);
                break;
            }
        }

    // ================================================================================== //

    } // end of namespace group

} // end of namespace somm22