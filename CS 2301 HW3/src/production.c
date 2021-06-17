/*
 * production.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Therese
 */
#include "production.h"
#include "card.h"
#include <stdio.h>
#include "LinkedList+LetterNum.h"



bool production(int argc, char* argv[])
{
    int currentIndex = 1;
	bool answer = true;
    char* ptr;

	int numLoops = strtol(argv[1], ptr, 10);
	printf("\nNumber of Loops: %d\n", numLoops);

	if(numLoops < 0){
        printf("\nNumber of loops too low! Must be 0 or above.\n");
        exit(0);
	}

	//obtain space for 20x20 of integers
    LLNode* lP = makeEmptyLinkedList();
    LetterNum* theSpaceP = (LetterNum*) malloc(20*20*sizeof(LetterNum));
    initCard(theSpaceP, 20);
    printCard(theSpaceP, 20, 0);


for(int i = 0; i < numLoops; i++) { //Runs 20 calls, marks any instances of calls on the board

    LetterNum *currentCall = callLetterNum(lP);
    getCurrentCall(lP);
    int row = -2;
    int col = -2;
    while (row != -1 && col != -1) {

        row = rowSearch(theSpaceP, currentCall);
        col = colSearch(theSpaceP, currentCall);
        if (row >= 0 && col >= 0) {
            markCard(theSpaceP, 19 - row, col);
        }else{
            printf("All marked!\n");
        }

    }

    printCard(theSpaceP,20,currentIndex);
    currentIndex += 1;

}

    //we'll want to read the file
	return answer;
}
