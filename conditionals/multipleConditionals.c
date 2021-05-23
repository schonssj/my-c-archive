#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 10;

    // AND.
    if (a > 5 && a < 15){
        printf("%d is between 5 and 15!", a);
    }

    // OR.
    if (a > 5 || a > 15){
        printf("\n%d is greater than 5 or 15!", a);
    }

    // Both.
    if ((a > 5 && a < 15) || a == 20){
        printf("\nThe variable with the value %d is between 5 and 15 or equals to 20!", a);
    }
}