/*
 *  \author ...
 */

#include "somm22.h"
#include "pct_module.h"
#include <bits/stdc++.h>
#include <string>
namespace somm22
{

    namespace group 
    {
        void imprimir(FILE* file){
            std::vector<int> key, value;

            fprintf(file, "\n+====================================================================================+\n|                               Process Control Table                                |\n+-------+-------------+----------+---------------+-----------+-----------------------+\n|  PID  | arrivalTime | duration | addrSpaceSize |   state   | startTime |  memAddr  |\n+-------+-------------+----------+---------------+-----------+-----------------------+\n"); 

            for(auto it = pct::process_table.begin(); it != pct::process_table.end(); ++it) {
                key.push_back(it->first);
                value.push_back(it->second.pid);
                
            }
            sort(key.begin(), key.end());
            // char * nill = "(nil)";  //fix warning2 ?

            for(uint32_t i = 0; i<key.size(); i++){
                
                ProcessState state = pct::process_table[key[i]].state;
                if (pct::process_table[key[i]].state == SWAPPED || pct::process_table[key[i]].state == TO_COME || pct::process_table[key[i]].state == DISCARDED){  // fix warning3 ?
                    fprintf(file, "| %5d | %11d | %8d | %#13x | %9s |    (nil)  | %9p |\n", 
                    pct::process_table[key[i]].pid, pct::process_table[key[i]].arrivalTime, 
                    pct::process_table[key[i]].duration, pct::process_table[key[i]].addrSpaceSize, 
                    pctStateAsString(state),  pct::process_table[key[i]].startAddr);
                }else{
                    fprintf(file, "| %5d | %11d | %8d | %#13x | %9s | %9d | %9p |\n", 
                    pct::process_table[key[i]].pid, pct::process_table[key[i]].arrivalTime, 
                    pct::process_table[key[i]].duration, pct::process_table[key[i]].addrSpaceSize, 
                    pctStateAsString(state), pct::process_table[key[i]].startTime , pct::process_table[key[i]].startAddr);
                }
            }
            
            fprintf(file, "+====================================================================================+\n\n");
        }
// ================================================================================== //

        void pctPrint(const char *fname, PrintMode mode)
        {
            soProbe(202, "%s(\"%s\", %s)\n", __func__, fname, (mode == NEW) ? "NEW" : "APPEND");
            FILE* file;
            switch (mode)
            {
            case NEW:
                /* print to a new file (zapping if necessary) */
                file = fopen(fname, "w");
                imprimir(file);
                fclose(file);
                break;
            case APPEND:
                // append printing to the end of the fileto
                file = fopen(fname, "a");
                imprimir(file);
                fclose(file);
                break;
            default:
                cout << "Error in Print Mode ";
                break;
            }

            /* ACTION POINT: Replace next instruction with your code */
            // throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

        void pctLog()
        {
            soProbe(202, "%s()\n", __func__);

            /* ACTION POINT: Replace next instruction with your code */

                imprimir(logGetStream());

            // throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22
