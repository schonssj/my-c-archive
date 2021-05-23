#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 2, option= 1;
    float b = 2.5;

    if (a == 5) {
        printf("Equal");
    } else {
        printf("Different");
    }

    if (a % 2 == 1) {
        printf("\nOdd");
    } else {
        printf("\nEven");
    }

    if (b == 2.5) {
        printf("Equal");
    }
    
    if (option == 1) {
        printf("\n1");
    } else if (option == 2) {
        printf("\n2");
    } else {
        printf("\nIt's not 1 or 2.");
    }

    bool a = true, b = false;

    if (a) {
        printf("A is true");
    }

    if (!b) {
        printf("\nB is false");
    } else {
        printf("\nB is true");
    }

    char c = 'x';

    if (c == 'x') {
        printf("Equal");
    }
}