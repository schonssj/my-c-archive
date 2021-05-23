#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 2, option= 1;
    float b = 2.5;
    char c = 'x';

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

    if (c == 'x') {
        printf("Equal");
    }

    if (option == 1) {
        printf("\n1");
    } else if (option == 2) {
        printf("\n2");
    } else {
        printf("\nIt's not 1 or 2.");
    }
}