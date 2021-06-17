/*
 ============================================================================
 Name        : HW1.c
 Author      : Drew Solomon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "tests.h"
#include "production.h"
#include "DrewSolomon.h"
#include "HW1.h"

int main(int argc, char* argv[]) {
    puts("!!!Let's do HW1!!!"); /* prints !!!Hello World!!! */
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
