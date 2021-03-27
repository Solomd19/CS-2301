//
// Created by supad on 12/9/2020.
//

#ifndef CS_2301_FINAL_PROJECT_TESTS_H
#define CS_2301_FINAL_PROJECT_TESTS_H

#include "production.h"
#include "LinkedList.h"
bool tests(int argc, char* argv[]);

//production tests
bool testReadFile(int argc, char* argv[]);

//report tests
bool testMakeReport();

//schedule tests
bool testInitSchedule();
bool testDayToCoords();
bool testTimeToCoords();
bool testGetCurrentDays();
bool testGetCurrentTime();
bool testPrintSchedule();

//LinkedList tests

bool testMakeEmptyLinkedList();
bool testSavePayload();
bool testIsEmpty();
bool testPrintHistory(int argc, char* argv[]);

#endif //CS_2301_FINAL_PROJECT_TESTS_H
