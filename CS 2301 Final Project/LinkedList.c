//
// Created by supad on 12/9/2020.
//

#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isEmpty(LLNode* lp)
{
    bool ans = false;
    if(lp->payP == (Payload*)0)
    {
        ans = true;
    }
    return ans;
}


LLNode* makeEmptyLinkedList()
{
    LLNode* lp = (LLNode*) malloc(sizeof(LLNode));
    lp->next = (struct LLNode*)0;
    lp->prev = (struct LLNode*)0;
    lp->payP = (Payload*)0;

    return lp;
}

void savePayload(LLNode* lp, Payload* mp)
{
    //if the list is empty, then make payP be mp
    //else traverse the list,
    //make a new list element
    //put mp in that
    //attach the new list element to the existing list
    if(isEmpty(lp))
    {
        printf("Linked List was empty, adding item as first in list\n");
        lp->payP = mp;
    }
    else
    {
        printf("Linked List was NOT empty, adding item as next in list\n");
        LLNode* temp = lp;
        while(temp->next)
        {
            temp= (LLNode*)temp->next;
        }
        //now temp points to the last element
        printf("now temp points to the last element\n");

        //make a new element, attach mp to it, wire up the new element
        LLNode* newList = makeEmptyLinkedList();
        printf("First step done\n");
        newList->payP = mp;
        printf("Second step done\n");
        temp->next = (struct LLNode*)newList;
        printf("Third step done\n");
        newList->prev = (struct LLNode*) temp;
        printf("Fourth step done\n");
    }

}

bool printHistory(LLNode* hp, char* logName)
{
    FILE *outStream = NULL;
    outStream = fopen (logName, "w"); //MUST have quotation marks around it in command line

    puts("Printing history");
    if(hp->payP == (Payload*)0)

    {
        puts("Empty list");
    }
    else
    {
        printf("Linked List is not empty, proceeding with history\n");
        //traverse the list, printing as we go

        LLNode* temp = hp;
        char* days;
        char* time;
        char* reason;
        bool success;
        char* successReport;

        days = temp->payP->days;
        time = temp->payP->time;
        reason = temp->payP->reason;
        success = temp->payP->success;
        printf("Report data copied\n");

        if(success == true){
            successReport = "success";
        }else{
            successReport = "failure";
        }

        printf("Starting loop through of list\n");
        while(temp->next)
        {
            printf("Next item print out begin\n");

            days = temp->payP->days;
            time = temp->payP->time;
            reason = temp->payP->reason;
            success = temp->payP->success;
            printf("Report data copied\n");

            if(success == true){
                 successReport = "success";
            }else{
                successReport = "failure";
            }
            printf("Success data copied\n");
            printf("Report of data:\n");
            printf("Days: %s\n", days);
            printf("Time: %s\n", time);
            printf("Reason: %s\n", reason);
            printf("Success: %s\n", successReport);
            printf("End of data report.\n");



            printf("This class is held on %s at %s. The course addition was a %s.\n", days, time, successReport);
            fprintf (outStream, "This class is held on %s at %s. The course addition was a %s.\n", days, time, successReport);
            if(success == false){
                printf("The reason was that the %s.\n", reason);
                fprintf (outStream, "The reason was that the %s.\n", reason);
            }

            printf("\n");
            //TODO: what goes here?
            temp = (LLNode*)temp->next;
            printf("Temp now points to next in list\n");
        }

        days = temp->payP->days;
        time = temp->payP->time;
        reason = temp->payP->reason;
        success = temp->payP->success;

        if(success == true){
            successReport = "success";
        }else{
            successReport = "failure";
        }

        printf("This class is held on %s at %s. The course addition was a %s.\n", days, time, successReport);
        fprintf (outStream, "This class is held on %s at %s. The course addition was a %s.\n", days, time, successReport);
        if(success == false){
            printf("The reason was that the %s.\n", reason);
            fprintf (outStream, "The reason was that the %s.\n", reason);
        }

    }
    printf("History fully printed.\n");
    fclose (outStream);
    return true;
}