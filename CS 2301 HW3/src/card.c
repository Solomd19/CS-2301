/*
 * space.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Therese
 */
#include "card.h"
#include <stdio.h>
#include <stdlib.h>

bool initCard(LetterNum* corner, int howManyRows)
{
	bool ok = true;

	for(int row = 0; row< 20; row++)
	{
		for(int col = 0; col < 20; col++)
		{
            LetterNum initialize;
            initialize.index = 0;
            initialize.letter = 90 - (rand() % 25);
            initialize.num = (rand() % 9) + 1;
            *(corner+row*howManyRows + col) = initialize;
		}
	}
	return ok;
}

void printCard(LetterNum* corner, int howManyRows, int index) {
    printf("Index: %d (X0 = Marked Space)\n", index);
    for(int row = 0; row < 20; row++) {
        for(int col = 0; col < 20; col++) {
            printf("| ");
            printf("%c",(*(corner+row*howManyRows + col)).letter);
            printf("%d",(*(corner+row*howManyRows + col)).num);
            printf(" |");
        }
        printf("\n");
    }
    printf("\n");
}

void markCard(LetterNum* corner, int* row, int* col){
    (*(corner+(19-(int)row)*20 + (int)col)).letter = 'X';
    (*(corner+(19-(int)row)*20+ (int)col)).num = 0;

}


/*int* cardSearch(LetterNum* corner, LetterNum* combo){
    printf("Starting card search\n");
    int coords[2] = {0,0};
    bool key = false;
    for(int row = 0; row< 20; row++)
    {
        for(int col = 0; col < 20; col++)
        {
            if((*(corner+row*20 + col)).letter == combo->letter && (*(corner+row*20 + col)).num == combo->num) {
                printf("%c%d is at Row %d, Col %d\n", combo->letter, combo->num, 19-row, col);
                coords[0] = row;
                coords[1] = col;
                key = true;
            }
        }
    }
    if(key == false){
        printf("%c%d not found", combo->letter, combo->num);
    }
    return coords;
}*/

int* rowSearch(LetterNum* corner, LetterNum* combo){
    printf("Starting row search\n");
    int coords = -1;
    bool key = false;
    for(int row = 0; row< 20; row++)
    {
        for(int col = 0; col < 20; col++)
        {
            if((*(corner+row*20 + col)).letter == combo->letter && (*(corner+row*20 + col)).num == combo->num) {
                printf("%c%d is at Row %d\n", combo->letter, combo->num, 19-row);
                coords = row;

                key = true;
            }
        }
    }
    if(key == false){
        printf("%c%d not found\n", combo->letter, combo->num);
    }
    return coords;
}

int* colSearch(LetterNum* corner, LetterNum* combo){
    printf("Starting col search\n");
    int coords = -1;
    bool key = false;
    for(int row = 0; row< 20; row++)
    {
        for(int col = 0; col < 20; col++)
        {
            if((*(corner+row*20 + col)).letter == combo->letter && (*(corner+row*20 + col)).num == combo->num) {
                printf("%c%d is at Col %d\n", combo->letter, combo->num, col);
                coords = col;

                key = true;
            }
        }
    }
    if(key == false){
        printf("%c%d not found\n", combo->letter, combo->num);
    }
    return coords;
}