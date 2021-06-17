/*
 * tests.h
 *
 *  Created on: Jul 4, 2019
 *      Author: Therese
 */

#ifndef TESTS_H_
#define TESTS_H_


#include "production.h"
#include "AdjMat.h"
#include "LinkedList.h"
bool tests();

bool testReadFile();
bool testGotAdjacencyMatrix();
bool testMakeLList();
bool testEnqueue();
bool testRemoveFromList();
bool testPrintHistory();

//New tests - round 2
bool testSetandGetEdge();
//bool testGetEdge();
bool testMakeEmptyLinkedList();
bool testSavePayload();


#endif /* TESTS_H_ */
