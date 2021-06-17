/*
 ============================================================================
 Name        : HW2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "tests.h"
#include "production.h"
#include "LinkedList+marker.h"
#include "TMSName.h"

int main(int argc, char* argv[]) {
	puts("!!!Let's do HW2  !!!"); /* prints !!!Hello World!!! */
	if(tests())
	{
		puts("About to run production.");
		production(argc, argv);
	}
	else
	{
		 puts("Tests did not pass.");
	}
	return EXIT_SUCCESS;
}
