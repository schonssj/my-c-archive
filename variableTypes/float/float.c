#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    float a;
    a = 2.3;

    printf("\nThe value of a is %.1f", a);
    scanf("%f", &a);
    printf("\n Now, the value of a is %.2f", a);

    system("pause");
}