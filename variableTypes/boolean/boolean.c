#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    bool c;
    c = true;

    printf("\nThe value of c is %d", c);
    scanf("%d", &c);
    printf("\n Now, the value of c is %d", c);

    system("pause");
}