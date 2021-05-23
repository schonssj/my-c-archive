#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main ()
{
    bool a = true, b = false;

    if (a) {
        printf("A is true");
    }

    if (!b) {
        printf("\nB is false");
    } else {
        printf("\nB is true");
    }
}