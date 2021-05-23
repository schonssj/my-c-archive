#include <stdio.h>
#include <stdlib.h>

void main () 
{
    int a = 5, b = 10, c = 15;
    char d = 'x';
    
    // Majority.
    if (a > 2) {
        printf("\n%d is greater than 2", a);
    }
    
    // Majority or equality.
    if (c >= b) {
        printf("\n%d is greater than %d", c, b);
    }
    
    // Minority.
    if (a < 10) {
        printf("\n%d is less than 10", a);
    }
    
    // Minority or equality.
    if (a <= 10) {
        printf("\n%d is less than 10", a);
    }
    
    // Difference between numbers.
    if (c != 10) {
        printf("\n%d isn't 10", c);
    }
    
    // Difference between characters.
    if (d != 'a') {
        printf("\n%c isn't a", d);
    }
}