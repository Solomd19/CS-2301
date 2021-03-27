//
// Created by supad on 12/9/2020.
//

#ifndef CS_2301_FINAL_PROJECT_LINKEDLIST_H
#define CS_2301_FINAL_PROJECT_LINKEDLIST_H
#include "report.h"


typedef report Payload;
struct LLNode;

typedef struct
{
    struct LLNode* next;
    struct LLNode* prev;
    Payload* payP;
}LLNode;





LLNode* makeEmptyLinkedList();
void savePayload(LLNode* lp, Payload* mp);
bool isEmpty(LLNode* lp);
bool printHistory(LLNode* hp, char* logName);
#endif //CS_2301_FINAL_PROJECT_LINKEDLIST_H
