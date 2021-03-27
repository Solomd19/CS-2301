//
// Created by supad on 12/9/2020.
//

#include "tests.h"
#include "schedule.h"
bool tests(int argc, char* argv[])
{
    bool answer = true;

    //production tests
    bool ok1 = testReadFile(argc, argv);

    //report tests
    bool ok2 = testMakeReport();

    //schedule tests
    bool ok3 = testInitSchedule();
    bool ok4 = testDayToCoords();
    bool ok5 = testTimeToCoords();
    bool ok6 = testGetCurrentDays();
    bool ok7 = testGetCurrentTime();
    bool ok8 = testPrintSchedule();

    //LinkedList tests tests

    bool ok9 = testMakeEmptyLinkedList();
    bool ok10 = testSavePayload();
    bool ok11 = testIsEmpty();
    bool ok12 = testPrintHistory(argc, argv);


    answer = ok1 && ok2 && ok3 && ok4 && ok5 && ok6 && ok7 && ok8 && ok9 && ok10 && ok11 && ok12;
    //answer = true; //Take out later!!!!!

    return answer;

}

//production tests
bool testReadFile(int argc, char* argv[]){
    bool ok = false;

    LLNode* myNewLL = makeEmptyLinkedList();
    char** mySpaceP = (char**) malloc(20*20*sizeof(char*));
    initSchedule(mySpaceP);
    ok = readFile(argv[1], mySpaceP, myNewLL, argv[3]);

    if(ok == true){
        printf("Test 1 passed!\n\n");
    }else{
        printf("Test 1 failed...\n\n");
    }

    return ok;
}

//report tests
bool testMakeReport(){
    bool ok = false;

    report* myReport = makeReport("M", "1", true, 3);

    if(myReport->success == true && myReport->days[0] == 'M' && myReport->time[0] == '1'){
        ok = true;
    }

    if(ok == true){
        printf("Test 2 passed!\n\n");
    }else{
        printf("Test 2 failed...\n\n");
    }

    return ok;
}

//schedule tests
bool testInitSchedule(){
    bool ok = false;

    char** mySpaceP = (char**) malloc(20*20*sizeof(char*));
    ok = initSchedule(mySpaceP);

    if(ok == true){
        printf("Test 3 passed!\n\n");
    }else{
        printf("Test 3 failed...\n\n");
    }

    return ok;
}

bool testDayToCoords(){
    bool ok = false;

    char* thisString = "MTRF";
    int* myCols = dayToCoords(thisString);
    if(myCols[0] == 1 && myCols[1] == 1 && myCols[2] == 0 && myCols[3] == 1 && myCols[4] == 1){
        ok = true;
    }

    if(ok == true){
        printf("Test 4 passed!\n\n");
    }else{
        printf("Test 4 failed...\n\n");
    }

    return ok;
}

bool testTimeToCoords(){
    bool ok = false;

    char* thisString = "12";
    int myRow = timeToCoords(thisString);
    if(myRow == 5){
        ok = true;
    }

    if(ok == true){
        printf("Test 5 passed!\n\n");
    }else{
        printf("Test 5 failed...\n\n");
    }

    return ok;
}

bool testGetCurrentDays(){
    bool ok = false;

    int theseInts[5] = {0,1,0,0,0};
    char* myChar = getCurrentDays(theseInts);
    if(myChar[0] == 'T'){
        ok = true;
    }

    if(ok == true){
        printf("Test 6 passed!\n\n");
    }else{
        printf("Test 6 failed...\n\n");
    }

    return ok;
}

bool testGetCurrentTime(){
    bool ok = false;

    char* thatString = "5";
    char* rowYaBoat = getCurrentTime(thatString);
    if(rowYaBoat[0] == '5'){
        ok = true;
    }

    if(ok == true){
        printf("Test 7 passed!\n\n");
    }else{
        printf("Test 7 failed...\n\n");
    }

    return ok;
}

bool testPrintSchedule(){
    bool ok = false;

    char** mySpaceP = (char**) malloc(20*20*sizeof(char*));
    initSchedule(mySpaceP);
    ok = printSchedule(mySpaceP);

    if(ok == true){
        printf("Test 8 passed!\n\n");
    }else{
        printf("Test 8 failed...\n\n");
    }

    return ok;
}


//LinkedList tests tests

bool testMakeEmptyLinkedList(){
    bool ok = false;

    LLNode* brandNewLL = makeEmptyLinkedList();
    if(brandNewLL->next == (struct LLNode*)0 && brandNewLL->prev == (struct LLNode*)0 && brandNewLL->payP == (Payload*)0){
        ok = true;
    }

    if(ok == true){
        printf("Test 9 passed!\n\n");
    }else{
        printf("Test 9 failed...\n\n");
    }

    return ok;
}

bool testSavePayload(){
    bool ok = false;

    report* thisReport = makeReport("M", "1", true, 3);
    LLNode* thisNewLL = makeEmptyLinkedList();
    savePayload(thisNewLL, thisReport);
    if(thisNewLL->payP->success == true && thisNewLL->payP->days[0] == 'M' && thisNewLL->payP->time[0] == '1'){
        ok = true;
    }

    if(ok == true){
        printf("Test 10 passed!\n\n");
    }else{
        printf("Test 10 failed...\n\n");
    }

    return ok;
}

bool testIsEmpty(){
    bool ok = false;

    LLNode* myNewLL = makeEmptyLinkedList();
    ok = isEmpty(myNewLL);

    if(ok == true){
        printf("Test 11 passed!\n\n");
    }else{
        printf("Test 11 failed...\n\n");
    }

    return ok;
}

bool testPrintHistory(int argc, char* argv[]){
    bool ok = false;

    LLNode* LINKED_LIST = makeEmptyLinkedList();

    char** THE_SPACE = (char**) malloc(20*20*sizeof(char*));
    printf("Initializing Student Schedule...\n\n");
    initSchedule(THE_SPACE);
    printSchedule(THE_SPACE);

    printf("Opening Existing Classes and Applying...\n\n");
    readFile(argv[1], THE_SPACE, LINKED_LIST, argv[3]); //argv[1] is the file of existing courses
    printf("Finished Opening Existing Classes and Applying.\n\n");
    ok = printHistory(LINKED_LIST, argv[3]);

    if(ok == true){
        printf("Test 12 passed!\n\n");
    }else{
        printf("Test 12 failed...\n\n");
    }

    return ok;
}
