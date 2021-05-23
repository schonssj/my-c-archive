#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main ()
{
    // Randomly feeding values.
    srand((unsigned)time(NULL));
    // Variable that receives the rest of division of a number by 3 (random number between 0 and 2).
    int random = rand() % 3;
    // Variable that receives the rest of division of a number by 5 (random number between 1 and 5).
    int anotherRandom = (rand() % 5) + 1;

    printf("%d", anotherRandom);
}