/*
 * tests.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Therese
 */

#include "tests.h"
#include "production.h"
#include "LinkedList.h"


bool tests()
{
	bool answer = false;
	bool ok1 = testReadFile();
	bool ok2 = testGotAdjacencyMatrix();
	bool ok3 = testMakeLList();
	bool ok4 = testEnqueue();
	bool ok5 = testRemoveFromList();
	bool ok6 = testPrintHistory();

	//New tests
    bool ok7 = testSetandGetEdge();
    bool ok8 = testMakeEmptyLinkedList();
    bool ok9 = testSavePayload();
	answer = ok1 && ok2 && ok3 && ok4 && ok5 && ok6 && ok7 && ok8 && ok9;
	//answer = true; //Take out later!!!!!
	return answer;
}

/*bool testSetEdge();
bool testGetEdge();
bool testMakeEmptyLinkedList();
bool testSavePayload();*/



bool testReadFile()
{
	puts("starting testReadFile"); fflush(stdout);
	bool ok = false;
	//the file tells how many rooms there are
	int answer = -1;
	int rightAnswer = 8;


	AdjMat* adjMP = (AdjMat*) malloc(sizeof(AdjMat));
	Room* theRoomPs[10];//addresses for 10 rooms


	ok = readFile("C:\\Users\\supad\\Desktop\\houseGraph.txt", &answer, adjMP, theRoomPs); //read the file
	if(ok)
	{
		if(answer!=rightAnswer)
		{
			puts("test failed on number of rooms");
		}

	}
	puts("The adjacency matrix");
	for(int i = 0; i<answer; i++)
	{
		for(int j = 0; j<answer; j++)
		{
			printf("%d",getEdge(adjMP, i, j));

		}
		printf("\n");
	}
	puts("The treasure values");
	for(int i = 0; i<answer; i++)
	{
		printf("%f\n", theRoomPs[i]->treasure);
	}

    //fclose("C:\\Users\\supad\\Desktop\\houseGraph.txt");

    if(ok == true){
        printf("Test 1 passed!\n\n");
    }else{
        printf("Test 1 failed...\n\n");
    }

	return ok;
}

bool testGotAdjacencyMatrix()
{
	bool ans = true;

    int answer = -1;
    int rightAnswer = 8;

    AdjMat* adjMP = (AdjMat*) malloc(sizeof(AdjMat));
    Room* theRoomPs[10];//addresses for 10 rooms


    bool ok = readFile(
            "C:\\Users\\supad\\Desktop\\houseGraph.txt", &answer, adjMP, theRoomPs); //read the file
    if(ok)
    {
        if(answer!=rightAnswer)
        {
            puts("test failed on number of rooms");
            exit(0);
        }

    }

    puts("The adjacency matrix");
    for(int i = 0; i<answer; i++)
    {
        for(int j = 0; j<answer; j++)
        {
            printf("%d",getEdge(adjMP, i, j));
            if(getEdge(adjMP, i, j) != 0){
                if(getEdge(adjMP, i, j) != 1){
                    ans = false;
                }
            }
        }
        printf("\n");
    }

    if(ans == true){
        printf("Test 2 passed!\n\n");
    }else{
        printf("Test 2 failed...\n\n");
    }

	return ans;
}

bool testMakeLList()
{
	bool ok = true;
	puts("starting testMakeLList");fflush(stdout);
	//what are the criteria for success for make LList?
	//should be able to make one, add data to it, get the data back
	//test case 1:

	LLNode* theListP = makeEmptyLinkedList();
	bool rightAnswer = true;
	bool answer = isEmpty(theListP);
	if(answer!=rightAnswer)
	{
		ok = false;
	}
	//test case 2: add data to it
    Room* theRoom = (Room*) malloc(sizeof(Room));
	theRoom->roomNumber = 3;
    theRoom->treasure = 11.0;
    theRoom->searched = false;
    savePayload(theListP, theRoom);
    if(theListP->payP->searched == false && theListP->payP->roomNumber == 3 && theListP->payP->treasure == 11.0){

    }else{
        ok = false;
    }
	//TODO more test cases here


    if(ok == true){
        printf("Test 3 passed!\n\n");
    }else{
        printf("Test 3 failed...\n\n");
    }

	return ok;
}

bool testEnqueue() {

   bool ok = false;

    LLNode2* historyP = makeEmptyLinkedList2();

    LLNode* searchQ = makeEmptyLinkedList();

    Room* roomZero = (Room*) malloc(sizeof(Room));
    roomZero->roomNumber = 2;
    roomZero->treasure = 4.0;
    roomZero->searched = true;

    savePayload(searchQ,roomZero);//TODO: what goes here? //Done?

    if(searchQ->payP->roomNumber == 2 && searchQ->payP->treasure == 4.0 && searchQ->payP->searched == true){
        ok = true;
    }


    if(ok == true){
        printf("Test 4 passed!\n\n");
    }else{
        printf("Test 4 failed...\n\n");
    }

return ok;
}

bool testRemoveFromList()
{
	bool ok = true;
	//cases:
	//1 list is empty:return same list
	//2 list is of length one, and item is present: return empty list
	//3 list is of length one, and item is not present: return same list
	//4 list is longer than one, item is present, at first location: return list starting at second element
	//5 list is longer than one, item is present, not at first location: return list with item removed
	//6 list is longer than one, item is not present: return same list
	LLNode* case1 = makeEmptyLinkedList();
	Payload* pay1 = (Payload*) malloc(sizeof(Room));
	pay1->roomNumber = 1;
	LLNode* ans = removeFromList(case1, pay1);
	if((ans != case1) || (ans->payP != (Payload*)0))
	{
		ok = false;

	}
	printf("testRemove case 1 with %d\n", ok); fflush(stdout);
	savePayload(case1, pay1);
	//this is case2
	ans = removeFromList(case1, pay1);
	if((ans != case1) || (ans->payP != (Payload*)0))
	{
		ok = false;

	}
	printf("testRemove case 2 with %d\n", ok); fflush(stdout);
	//now case 3
	Payload* pay3 = (Payload*) malloc(sizeof(Room));
	pay3->roomNumber = 3;
	ans = removeFromList(case1, pay3);
	if(ans != case1)//this is only a partial check for list unchanged
	{
		ok = false;

	}
	printf("testRemove case 3 with %d\n", ok); fflush(stdout);
	//now case 4
	case1 = makeEmptyLinkedList();
	pay1 = (Payload*) malloc(sizeof(Room));
	pay1->roomNumber = 1;
	savePayload(case1, pay1);
	pay3 = (Payload*) malloc(sizeof(Room));
	pay3->roomNumber = 3;
	savePayload(case1, pay3);
	ans = removeFromList(case1, pay1);

	if(ans == case1)
	{
		ok = false;

	}
	printf("testRemove case 4 with %d\n", ok); fflush(stdout);
	//now case 5
	case1 = makeEmptyLinkedList();
	pay1 = (Payload*) malloc(sizeof(Room));
	pay1->roomNumber = 1;
	savePayload(case1, pay1);
	pay3 = (Payload*) malloc(sizeof(Room));
	pay3->roomNumber = 3;
	savePayload(case1, pay3);
	//puts("trying case 5");fflush(stdout);
	ans = removeFromList(case1, pay3);//ans should be equal to case1
	LLNode* theNext = (LLNode*) ans->next; //this is element where pay3 got attached
	Payload* check = (Payload*) 0;
	if (theNext)
	{
		check = theNext->payP; //this should be pay3, which should have been removed
	}
	//printf("testRemove returned from case 5\n"); fflush(stdout);
	if((ans != case1) || (check != (Payload*)0))//disquiet
	{
		ok = false;

	}
	//printf("ans == case1 is %d\n", ans==case1);
	//printf("check != 0 is %d\n", check != (Payload*)0);
	printf("testRemove case 5 with %d\n", ok); fflush(stdout);
	//now case 6
	case1 = makeEmptyLinkedList();
	pay1 = (Payload*) malloc(sizeof(Room));
	pay1->roomNumber = 1;
	savePayload(case1, pay1);
	pay3 = (Payload*) malloc(sizeof(Room));
	pay3->roomNumber = 3;
	savePayload(case1, pay3);
	Payload* another = (Payload*) malloc(sizeof(Room));
	another->roomNumber=2;
	ans = removeFromList(case1, another);
	if((ans != case1))
	{
		ok = false;

	}
	printf("testRemove case 6 with %d\n", ok); fflush(stdout);

    if(ok == true){
        printf("Test 5 passed!\n\n");
    }else{
        printf("Test 5 failed...\n\n");
    }

	return ok;
}
bool testPrintHistory()
{
	bool ok = true;

    LLNode2* theListP = makeEmptyLinkedList();

    Room* theRoom = (Room*) malloc(sizeof(Room));
    theRoom->roomNumber = 3;
    theRoom->treasure = 11.0;
    theRoom->searched = false;
    savePayload2(theListP, theRoom);

    Room* nextRoom = (Room*) malloc(sizeof(Room));
    nextRoom->roomNumber = 5;
    nextRoom->treasure = 12.0;
    nextRoom->searched = false;
    savePayload2(theListP, nextRoom);

    Room* lastRoom = (Room*) malloc(sizeof(Room));
    lastRoom->roomNumber = 1;
    lastRoom->treasure = 13.0;
    lastRoom->searched = false;
    savePayload2(theListP, lastRoom);


    printHistory(theListP);



    if(ok == true){
        printf("Test 6 passed!\n\n");
    }else{
        printf("Test 6 failed...\n\n");
    }

	return ok;
}

bool testSetandGetEdge(){
    bool ok = false;

    AdjMat* adjMP = (AdjMat*) malloc(sizeof(AdjMat));
    int howManyRooms = 5;
    adjMP->edgesP = (int*) malloc(howManyRooms * howManyRooms *sizeof(int));
    adjMP->n = 5;
    printf("Starting initialization\n\n");
    init(adjMP);
    printf("Starting set edge part\n\n");

    setEdge(adjMP, 1, 1);
    if(getEdge(adjMP, 1, 1) == 1) {
        ok = true;
    }

    if(ok == true){
        printf("Test 7 passed!\n\n");
    }else{
        printf("Test 7 failed...\n\n");
    }

    return ok;
}

bool testMakeEmptyLinkedList(){
    bool ok = false;


    ok = isEmpty(makeEmptyLinkedList());

    if(ok == true){
        printf("Test 8 passed!\n\n");
    }else{
        printf("Test 8 failed...\n\n");
    }

    return ok;
}

bool testSavePayload(){
    bool ok = false;

    LLNode2* theListP = makeEmptyLinkedList2();

    Room* theRoom = (Room*) malloc(sizeof(Room));
    theRoom->roomNumber = 3;
    theRoom->treasure = 11.0;
    theRoom->searched = false;
    savePayload2(theListP, theRoom);

    ok = !(isEmpty(theListP));

    if(ok == true){
        printf("Test 9 passed!\n\n");
    }else{
        printf("Test 9 failed...\n\n");
    }

    return ok;
}