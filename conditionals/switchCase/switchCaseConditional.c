#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int a = 1;
    char b = 'a';

    switch (a) {
        case 1:
            printf("Option 1");
            break;
        case 2:
            printf("Option 2");
            break;
        case 3:
            printf("Option 3");
            break;
        default:
            printf("Invalid option!");
            break;
    }

    switch (b) {
        case 'x':
            printf("\nThe letter is x!");
            break;
        default:
            printf("\The letter isn't x!");
            break;
    }
}