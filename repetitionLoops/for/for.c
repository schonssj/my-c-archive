#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int i;

    for (i = 1; i <= 10; i++) {
        printf("\n5 X %d = %d", i, 5 * i);
    }

    for (i = 1; i <= 10; i += 2) {
        printf("\n%d", i);
    }

    for (i = 10; i > 0; i--) {
        printf("\n%d", i);
    }
}