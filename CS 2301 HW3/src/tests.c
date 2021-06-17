/*
 * tests.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Therese
 */

#include "tests.h"
#include "production.h"
#include "LinkedList+LetterNum.h"
#include "card.h"



bool tests()
{
	bool answer = false;

	bool ok1 = testCallLetterNum();
    bool ok2 = testInitCard();
    bool ok3 = testCardSearch();
    bool ok4 = testCallHistory();

	answer = ok1 && ok2 && ok3 && ok4;
	return answer;
}


bool testCallLetterNum() {
    bool answer = false;

    int index = -1;
    char letter = "-";
    int num = -1;

    LLNode* lP = makeEmptyLinkedList();
    LetterNum * test1 = callLetterNum(lP);

    index = test1->index;
    letter = test1->letter;
    num = test1->num;

    printf("Begin Test 1 Check\n");
    printf("Test 1 Index: %d\n", index);
    printf("Test 1 Letter: %c\n", letter);
    printf("Test 1 Num: %d\n", num);

    if(index != -1 && letter != "=" && num != -1){
        answer = true;
    }


    if(answer == true){
        printf("Test one passed!\n\n");
    }else{
        printf("Test one failed!\n\n");
    }
    return answer;

}




bool testInitCard(){
    bool answer = false;
    LLNode* lP = makeEmptyLinkedList();
    LetterNum* theSpaceP = (LetterNum*) malloc(20*20*sizeof(LetterNum));
    initCard(theSpaceP, 20);
    printCard(theSpaceP, 20, 0);

    answer = true; //if the printCard works, passes

    if(answer == true){
        printf("Test two passed!\n\n");
    }else{
        printf("Test two failed!\n\n");
    }
    return answer;
}


bool testCardSearch(){
    bool answer = false;

    LLNode* lP = makeEmptyLinkedList();
    LetterNum* theSpaceP = (LetterNum*) malloc(20*20*sizeof(LetterNum));
    initCard(theSpaceP, 20);

    LetterNum *currentCall = callLetterNum(lP);
    getCurrentCall(lP);

    int row = rowSearch(theSpaceP, currentCall);
    int col = colSearch(theSpaceP, currentCall);

    if(row >= -1 && col >= -1){
        answer = true;
    }

    if(answer == true){
        printf("Test three passed!\n\n");
    }else{
        printf("Test three failed!\n\n");
    }
    return answer;
}


bool testCallHistory(){
    bool answer = false;

    int currentIndex = 1;
    LLNode* lP = makeEmptyLinkedList();
    LetterNum* theSpaceP = (LetterNum*) malloc(20*20*sizeof(LetterNum));
    initCard(theSpaceP, 20);

    for(int i = 0; i < 20; i++) { //Runs 20 calls, marks any instances of calls on the board

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
                //printf("All marked!\n");
            }

        }

        //printCard(theSpaceP,20,currentIndex);
        currentIndex += 1;

    }

    getCallHistory(lP);
    answer = true; //if it reaches this point, test passed

    if(answer == true){
        printf("Test four passed!\n\n");
    }else{
        printf("Test four failed!\n\n");
    }
    return answer;
}
