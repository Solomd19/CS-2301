//
// Created by supad on 12/9/2020.
//

#ifndef CS_2301_FINAL_PROJECT_SCHEDULE_H
#define CS_2301_FINAL_PROJECT_SCHEDULE_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h> //strncpy
#include <stdlib.h> //strtol
#include "LinkedList.h"
bool initSchedule(char** corner);
bool printSchedule(char** corner);
int* dayToCoords(char days[]);
int timeToCoords(char time[]);
char* getCurrentDays(int daysCols[]);
char* getCurrentTime(char* time);


#endif //CS_2301_FINAL_PROJECT_SCHEDULE_H
