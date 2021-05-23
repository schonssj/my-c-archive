#include <stdio.h>
#include <stdlib.h>

void main () 
{
    // Variable declaration.
    int a = 1, b;
    
    // Printing an integer variable.
    printf("%d", a);
    
    // Concatenation.
    printf("\nThe value of a is: %d", a);
    
    // Changing the value of an existing variable.
    a = 2;
    printf("\nNow the value of a is: %d", a);
    
    // Reading the variable's value.
    scanf("%d", &b);
    printf("The value of b is: %d", b);
    
    // Breaking row.
    printf("\n");
}