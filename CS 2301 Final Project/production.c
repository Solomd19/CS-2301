//
// Created by supad on 12/9/2020.
//

#include "production.h"
#include "report.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h> //strncpy
#include <stdlib.h> //strtol
#include "LinkedList.h"
#include "LinkedList.c"
#include "schedule.c"
#include "report.c"
bool production(int argc, char* argv[])
{

    LLNode* lP = makeEmptyLinkedList();

    char** theSpaceP = (char**) malloc(20*20*sizeof(char*));
    printf("Initializing Student Schedule...\n\n");
    initSchedule(theSpaceP);
    printSchedule(theSpaceP);

    printf("Opening Existing Classes and Applying...\n\n");
    readFile(argv[1], theSpaceP, lP, argv[3]); //argv[1] is the file of existing courses
    printf("Finished Opening Existing Classes and Applying.\n\n");
    printHistory(lP, argv[3]); //argv[3] is the log


    printf("Opening New Classes and Applying if Possible...\n\n");
    readFile(argv[2], theSpaceP, lP, argv[3]);//argv[2] is the file of courses to add
    printf("Finished Opening New Classes and Applying if Possible.\n\n");

    //Deal with the linked list
    printHistory(lP, argv[3]);


}

bool readFile(char* filename, char** corner, LLNode* lP, char* logName)
{
    bool ok = false;
    FILE* fp = fopen(filename, "r"); //read the file

    if (fp == NULL)
    {
        puts("Error! opening file");
    }
    else
    {
        char daysBuff[5] = "    ";
        char timeBuff[5] = "    ";
        char days[5] = "    ";
        char time[5] = "    ";
        printf("Starting assignment loop\n");
        while(! feof (fp)){

            fscanf(fp, "%s", daysBuff);

            days[0] = daysBuff[0];
            days[1] = daysBuff[1];
            days[2] = daysBuff[2];
            days[3] = daysBuff[3];
            printf("\n%s\n", days);

            fscanf(fp, "%s", timeBuff);

            time[0] = timeBuff[0];
            time[1] = timeBuff[1];
            time[2] = timeBuff[2];
            time[3] = timeBuff[3];
            printf("%s\n", time);


            int row = timeToCoords(time);


            int* col = dayToCoords(days);

            bool pass = true;

            for(int i = 0; i < 5; i++){
                if(col[i] == 1){
                    if(*(corner+row*6 + i + 1) == "XXXX"){
                        pass = false;

                    }
                }
            }

            if(pass == true){
                for(int i = 0; i < 5; i++){
                    if(col[i] == 1){
                        *(corner+row*6 + i + 1) = "XXXX";
                    }
                }
            }else{
                printf("CLASS DENIED: Conflicts with Schedule\n");
            }

            char newDays[64];

            strcpy(newDays, days);

            report* newReport = makeReport(getCurrentDays(col) , getCurrentTime(time), pass, row);

            printf("Begin save payload\n");

            savePayload(lP, newReport);
            printf("Payload saved.\n");


            printSchedule(corner);
            ok = true;
        }
    }
    fclose(fp);

    return ok;
}





