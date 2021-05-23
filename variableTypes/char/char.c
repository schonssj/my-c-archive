#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() 
{
    char b;
    b = 'T';

    printf("\nThe b value is %c", b);
    scanf(" %c", &b);
    printf("\n Now, the b value is %c", b);

    printf("\nLetter's code on the ASCII table = %d", b);

    system("pause");
}