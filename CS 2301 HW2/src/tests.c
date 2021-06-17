/*
 * tests.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Therese
 */

#include "tests.h"
#include "production.h"
#include "LinkedList+marker.h"
#include "space.h"



bool tests()
{
	bool answer = false;

	bool ok1 = testMakeMarker();
	bool ok2 = testMoveMarker();
    bool ok3 = testLinkedList();
	answer = ok1 && ok2 && ok3;
	return answer;
}

bool testMakeMarker() {
    int* theSpaceP = (int*) malloc(20*20*sizeof(int));

    bool answer = false;
    initSpace(theSpaceP, 20);
    Marker* mP = makeMarker(1,4,5);

    if(mP->index == 1 && mP->row == 5 && mP->col == 6) {
        answer = true;
        printf("Test 1 Passed!!!\n");
    }
    return answer;

}


bool testMoveMarker() {
    printf("Test 2 Start\n\n");
    int* theSpaceP = (int*) malloc(20*20*sizeof(int));

    bool answer = true;
    initSpace(theSpaceP, 20);
    printSpace(theSpaceP, 20, 000);
    LLNode* lP = makeEmptyLinkedList();
    moveMarker(theSpaceP, makeMarker(1,0,0), lP);
    printf("Test 2 Passed!!!\n");
    return answer;

}


bool testLinkedList() {
    int* theSpaceP = (int*) malloc(20*20*sizeof(int));

    bool answer = true;
    initSpace(theSpaceP, 20);
    LLNode* lP = makeEmptyLinkedList();
    moveMultipleRandom(theSpaceP, makeMarker(1,4,5), 3, lP);
    printHistory(lP);
    printf("Test 3 Passed!!!\n\n");
    return answer;
}
