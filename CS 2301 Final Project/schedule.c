//
// Created by supad on 12/8/2020.
//

#include "schedule.h"
#include <stdio.h>
#include <stdlib.h>

bool initSchedule(char** corner)
{
    bool ok = true;

    for(int row = 0; row< 14; row++)
    {
        for(int col = 0; col < 6; col++)
        {

            char* initialize;
            if(row == 0 && col == 1){
                initialize = "  M ";
            }else if(row == 0 && col == 2){
                initialize = "  T ";
            }else if(row == 0 && col == 3){
                initialize = "  W ";
            }else if(row == 0 && col == 4){
                initialize = "  R ";
            }else if(row == 0 && col == 5){
                initialize = "  F ";
            }else if(row == 1 && col == 0){
                initialize = " 8am";
            }else if(row == 2 && col == 0){
                initialize = " 9am";
            }else if(row == 3 && col == 0){
                initialize = "10am";
            }else if(row == 4 && col == 0){
                initialize = "11am";
            }else if(row == 5 && col == 0){
                initialize = "12pm";
            }else if(row == 6 && col == 0){
                initialize = " 1pm";
            }else if(row == 7 && col == 0){
                initialize = " 2pm";
            }else if(row == 8 && col == 0){
                initialize = " 3pm";
            }else if(row == 9 && col == 0){
                initialize = " 4pm";
            }else if(row == 10 && col == 0){
                initialize = " 5pm";
            }else if(row == 11 && col == 0){
                initialize = " 6pm";
            }else if(row == 12 && col == 0){
                initialize = " 7pm";
            }else if(row == 13 && col == 0){
                initialize = " 8pm";
            }else {
                initialize = "    ";
            }
            *(corner+row*6 + col) = initialize;
        }
    }
    return ok;
}

bool printSchedule(char** corner) {
    printf("Current Student Schedule\n");
    for(int row = 0; row < 14; row++) {
        for(int col = 0; col < 6; col++) {
            printf("| ");
            printf((*(corner+row*6 + col)));
            //printf("%d",(*(corner+row*6 + col)).num);
            printf(" |");
        }
        printf("\n");
    }
    printf("\n\n");
    return true;
}

int* dayToCoords(char days[]){

    int length = strlen(days);

    static int col[5] = {0,0,0,0,0};

    for(int j = 0; j < 4; j++){
        if(j > length){
            days[j] = 0;
            col[j] = 0;
        }
    }


    if(days[0] == 'M'){
        col[0] = 1;
    }else{
        col[0] = 0;
    }


    if(days[0] == 'T' || days[1] == 'T'){
        col[1] = 1;
    }else{
        col[1] = 0;
    }

    if(days[0] == 'W' || days[1] == 'W' || days[2] == 'W'){
        col[2] = 1;
    }else{
        col[2] = 0;
    }

    if(days[0] == 'R' || days[1] == 'R' || days[2] == 'R' || days[3] == 'R'){
        col[3] = 1;
    }else{
        col[3] = 0;
    }

    if(days[0] == 'F' || days[1] == 'F' || days[2] == 'F' || days[3] == 'F' || days[4] == 'F'){
        col[4] = 1;
    }else{
        col[4] = 0;
    }

    return col;
}

int timeToCoords(char time[]){
    char *ptr;
    int row = strtol(time, &ptr, 10);

    if(row >= 13){
        printf("Invalid time for class!\n");
        return -1;
    }

    if(row <= 12 && row >= 8){
        row = row - 7;
    }else if(row >= 1){
        row = row + 5;
    }
    return row;
}

char* getCurrentDays(int daysCols[]){

    if(daysCols[0] == 1 && daysCols[1] == 0 && daysCols[2] == 0 && daysCols[3] == 0 && daysCols[4] == 0){
        return "M";
    }
    if(daysCols[0] == 0 && daysCols[1] == 1 && daysCols[2] == 0 && daysCols[3] == 0 && daysCols[4] == 0){
        return "T";
    }
    if(daysCols[0] == 0 && daysCols[1] == 0 && daysCols[2] == 1 && daysCols[3] == 0 && daysCols[4] == 0){
        return "W";
    }
    if(daysCols[0] == 0 && daysCols[1] == 0 && daysCols[2] == 0 && daysCols[3] == 1 && daysCols[4] == 0){
        return "R";
    }
    if(daysCols[0] == 0 && daysCols[1] == 0 && daysCols[2] == 0 && daysCols[3] == 0 && daysCols[4] == 1){
        return "F";
    }
    if(daysCols[0] == 1 && daysCols[1] == 1 && daysCols[2] == 0 && daysCols[3] == 1 && daysCols[4] == 1){
        return "MTRF";
    }
    if(daysCols[0] == 1 && daysCols[1] == 0 && daysCols[2] == 0 && daysCols[3] == 1 && daysCols[4] == 0){
        return "MR";
    }
    if(daysCols[0] == 0 && daysCols[1] == 1 && daysCols[2] == 0 && daysCols[3] == 0 && daysCols[4] == 1){
        return "TF";
    }
}

char* getCurrentTime(char time[]){

    if (time[0] == '1' && time[1] == '0'){
        return "10";
    }else if (time[0] == '1' && time[1] == '1'){
        return "11";
    }else if (time[0] == '1' && time[1] == '2') {
        return "12";
    }else if(time[1] == '3' || time[1] == '4' || time[1] == '5' || time[1] == '6' || time[1] == '7' || time[1] == '8' || time[1] == '9'){
        return "0 (Was invalid input time)";
    }else if(time[0] == '1'){
        return "1";
    }else if (time[0] == '2'){
        return "2";
    }else if (time[0] == '3'){
        return "3";
    }else if (time[0] == '4'){
        return "4";
    }else if (time[0] == '5'){
        return "5";
    }else if (time[0] == '6'){
        return "6";
    }else if (time[0] == '7'){
        return "7";
    }else if (time[0] == '8'){
        return "8";
    }else if (time[0] == '9'){
        return "9";
    }else {
        return "0";
    }
}
