#include <stdio.h>
#include <stdlib.h>
#include "tests.h"
#include "tests.c"
#include "production.c"
#include "TMSName.h"

int main(int argc, char* argv[]) {
    puts("!!!Let's do  the Final!!!");
    int beep = 32767 / 2;
    printf("%d",beep);

    if(tests(argc, argv))
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
