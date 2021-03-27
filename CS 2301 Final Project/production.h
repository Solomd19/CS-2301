//
// Created by supad on 12/9/2020.
//

#ifndef CS_2301_FINAL_PROJECT_PRODUCTION_H
#define CS_2301_FINAL_PROJECT_PRODUCTION_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h> //strncpy
#include <stdlib.h> //strtol
#include "LinkedList.h"
#include "report.h"



//#define FILENAMELENGTHALLOWANCE 50

bool production(int argc, char* argv[]);
bool readFile(char* filename, char** corner, LLNode* lP, char* logName);


#endif //CS_2301_FINAL_PROJECT_PRODUCTION_H
