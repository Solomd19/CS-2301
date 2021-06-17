/*
 * space.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Therese
 */
#include "space.h"
#include <stdio.h>

bool initSpace(int* corner, int howManyRows)
{
	bool ok = true;
	for(int row = 0; row< 20; row++)
	{
		for(int col = 0; col < 20; col++)
		{
			*(corner+row*howManyRows + col) = 0;
		}
	}
	return ok;
}

void printSpace(int* corner, int howManyRows, int index) {
    printf("Index: %d\n", index);
    for(int row = 0; row < howManyRows; row++) {
        for(int col = 0; col < howManyRows; col++) {
            printf("%d",*(corner+row*howManyRows + col));
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}