//
// Created by supad on 12/9/2020.
//

#ifndef CS_2301_FINAL_PROJECT_REPORT_H
#define CS_2301_FINAL_PROJECT_REPORT_H

typedef struct
{
    char* days;
    char* time;
    bool success;
    char* reason;
}report;

report* makeReport(char* days, char* time, bool success, int row);

#endif //CS_2301_FINAL_PROJECT_REPORT_H
