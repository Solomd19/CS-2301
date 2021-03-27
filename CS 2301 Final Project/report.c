//
// Created by supad on 12/11/2020.
//
#include "report.h"

report* makeReport(char* days, char* time, bool pass, int row){
    printf("Begin creating report\n");



    report simpleReport;
    simpleReport.days = days;
    simpleReport.time = time;
    simpleReport.reason = "failure4";
    simpleReport.success = false;

    report* newReport = (report*) malloc(sizeof(report));
    newReport->days = "failure1";
    newReport->time = "failure2";
    newReport->reason = "failure3";
    newReport->success = false;

    printf("Created report file\n");
    newReport->days = simpleReport.days;
    printf("%s\n", newReport->days);
    printf("Created report days\n");
    newReport->time = simpleReport.time;
    printf("%s\n", newReport->time);
    printf("Created report time\n");

    if(row == -1){
        newReport->reason = "time of class was invalid";
        pass = false;
    }else if(pass == false){
        newReport->reason = "class conflicted with already scheduled classes";
    }else{
        newReport->reason = "N/A.";
    }
    newReport->success = pass;
    //printf("%s",pass);
    printf("Created report success\n");
    printf("%s\n", newReport->reason);
    printf("Created report reason\n");

    return newReport;
}
