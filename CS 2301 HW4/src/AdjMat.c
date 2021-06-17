/*
 * AdjMat.c
 *
 *  Created on: Oct 24, 2019
 *      Author: Therese
 */

#include "AdjMat.h"
#include <stdio.h>

void init(AdjMat* adjMP) //Resets adj matrix to all 0s - no links
{
	int ncols = adjMP->n;
	printf("In init with ncols = %d\n", ncols);
	for(int row = 0; row<ncols; row++)
	{
		for(int col = 0; col<ncols; col++)
		{
			*((adjMP->edgesP)+(row*ncols)+col)= 0;
		}
	}

}

void setEdge(AdjMat* adjMP, int row, int col) //Edge is a link between two rooms! 1=Linked 0=Not linked
{

	int ncols = adjMP->n;
	int* arrayBeginning = adjMP->edgesP;
	*(arrayBeginning + (ncols*row) +col) = 1; //Sets both spots, mirrored over diagonal of 1s on the matrix
	*(arrayBeginning + (ncols*col) + row) = 1;
}
int getEdge(AdjMat* adjMP, int row, int col) //Returns if two rooms are connected aka the row and col
{
	int ncols = adjMP->n;
	int* arrayBeginning = adjMP->edgesP;
	return *(arrayBeginning + (ncols*row) +col) ;
}

