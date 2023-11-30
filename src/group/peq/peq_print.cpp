/*
 *  \author ...
 */

#include "somm22.h"
#include "peq_module.h"

namespace somm22
{

    namespace group 
    {
 
// ================================================================================== //

        void peqLog()
        {
            soProbe(302, "%s()\n", __func__);

            /* ACTION POINT: Replace next instruction with your code */
            fprintf(stdout, "\n+===============================+\n"); 
            fprintf(stdout,"|      Process Event Queue      |\n");
            fprintf(stdout,"+-----------+-----------+-------+\n");
            fprintf(stdout,"| eventTime | eventType |  PID  |\n");
            fprintf(stdout,"+-----------+-----------+-------+\n");

            for(auto it = peq::eventList.begin(); it != peq::eventList.end();++it){
                Event event;
                event.pid = it->pid;
                event.eventTime = it->eventTime;
                event.eventType = it->eventType;

                fprintf(stdout,"| %9d | %9s | %5d |\n", event.eventTime,peqEventTypeAsString(event.eventType),event.pid);
            }

            fprintf(stdout,"+===============================+\n");
            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

        void peqLogEvent(Event *e, const char *msg)
        {
            soProbe(302, "%s(...)\n", __func__);

            /* ACTION POINT: Replace next instruction with your code */
            printf("%s: (%s, %d, %d)\n",  msg,peqEventTypeAsString(e->eventType), e->eventTime, e->pid);
            
            //throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

        void peqPrint(const char *fname, PrintMode mode)
        {
            soProbe(302, "%s(\"%s\", %s)\n", __func__, fname, (mode == NEW) ? "NEW" : "APPEND");
            FILE * file;
            file = fopen(fname, "w");
            
            fprintf(file, "\n+===============================+\n"); 
            fprintf(file,"|      Process Event Queue      |\n");
            fprintf(file,"+-----------+-----------+-------+\n");
            fprintf(file,"| eventTime | eventType |  PID  |\n");
            fprintf(file,"+-----------+-----------+-------+\n");

            for(auto it = peq::eventList.begin(); it != peq::eventList.end();++it){
                Event event;
                event.pid = it->pid;
                event.eventTime = it->eventTime;
                event.eventType = it->eventType;

                fprintf(file,"| %9d | %9s | %5d |\n", event.eventTime,peqEventTypeAsString(event.eventType),event.pid);
            }

            fprintf(stdout,"+===============================+\n");
            /* ACTION POINT: Replace next instruction with your code */
            // throw Exception(ENOSYS, __func__);
        }

// ================================================================================== //

    } // end of namespace group

} // end of namespace somm22

