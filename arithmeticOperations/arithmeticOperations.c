#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() 
{
    int a = 6, b = 3;

    printf("The sum between %d and %d is %d", a, b, a + b);
    printf("\n The subtraction between %d and %d is %d", a, b, a - b);
    printf("\n The multiplication of %d by %d is %d", a, b, a * b);
    printf("\n The division of %d by %d is %d", a, b, a / b);
    printf("\n The rest of the division between %d and %d is %d", a, b, a % b);
    printf("\n The absolute value of -3 is %d", abs(-3));
}