/*
 * space.h
 *
 *  Created on: Jan 27, 2020
 *      Author: Therese
 */

#ifndef CARD_H_
#define CARD_H_

#include <stdbool.h>
#include "LinkedList+LetterNum.h"
bool initCard(LetterNum* corner, int howManyRows);
void printCard(LetterNum* corner, int howManyRows, int index);
void markCard(LetterNum* corner, int* row, int* col);
//int* cardSearch(LetterNum* corner, LetterNum* combo);
int* rowSearch(LetterNum* corner, LetterNum* combo);
int* colSearch(LetterNum* corner, LetterNum* combo);

#endif /* SPACE_H_ */
