/*
 *  \author ...
 */

#include "somm22.h"
#include "sim_module.h"
#include <list>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

namespace somm22
{

    namespace group
    {

// ================================================================================== //

        bool simCheckInputFormat(const char *fname) 
        // 4 campos separados por ;
        // pids > 0
        //  # são ignorados

        {
            soProbe(502, "%s(\"%s\")\n", __func__, fname);
            
            FILE* file = fopen(fname, "r");
            ifstream ficheiro(fname);

            if (NULL == file) {
                cerr << "File not found";
                throw Exception(errno, __func__);
            }

            uint32_t pid, arrivalTime, duration, addr;
            char buff[200];
            list<uint32_t> pids;
            bool found;
            string linha;

            // for (auto const &i: pids) {
            //     cout << i << std::endl;
            // }
            int line = 0;
            while(fgets(buff, 200, file)!= NULL){
                line++;
                if(buff[0]=='#'){
                    // cout << "commented line" << endl;
                    continue;
                }
                
                int x = sscanf(buff, " %d ; %d ; %d ; 0x%x%*[^\n]\n", &pid, &arrivalTime, &duration, &addr);
                

                if (x!= 4){
                    printf("-- Syntax error at line %d: \"%s\"", line, buff);
                    return false;
                }

                // printf("%d;%d;%d;0x%x\n", pid, arrivalTime, duration, addr);
                
                found = (find(pids.begin(), pids.end(), pid) != pids.end()); // verificar se o ids sao repetidos

                if(found){ 
                    printf("-- Semantic error at line %d (PID %d is repeated): \"%s \" ", line, pid, buff);
                    return false;
                }else{
                    if(pid>0){
                        pids.push_back(pid);
                    }else{
                        cerr << "Invalid PID (<0)\n";
                        throw Exception(errno, __func__);
                    }
                }

                if(duration <= 0){
                    printf("-- Semantic error at line %d (duration is %d): \"%s\"", line, duration, buff);
                    return false;
                }

                if(addr<=0){
                    printf("-- Semantic error at line %d (address space size is %d):\"%s", line, addr, buff);
                    return false;
                }
            }

            fclose(file);
            return true;
            /* ACTION POINT: Replace next instruction with your code */
            // throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22
                    
                    
                    