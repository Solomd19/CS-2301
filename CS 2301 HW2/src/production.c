/*
 * production.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Therese
 */
#include "production.h"
#include "space.h"
#include "LinkedList+marker.h"

bool production(int argc, char* argv[])
{
	bool answer = true;

	//obtain space for 20x20 of integers

	int* theSpaceP = (int*) malloc(20*20*sizeof(int));
    bool okInit = initSpace(theSpaceP, 20);
    printSpace(theSpaceP, 20, 0);

    LLNode* lP = makeEmptyLinkedList();

    Marker* initialMark = makeMarker(1, rand() % 20, rand() % 20);

    moveMultipleRandom(theSpaceP, initialMark, 10, lP);
    printHistory(lP);


    //we'll want to read the file
	return answer;
}
