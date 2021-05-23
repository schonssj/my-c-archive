#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void main()
{
    int vector[TAM], i;

    vector[0] = 5;
    vector[1] = 10;
    vector[2] = 15;

    for (i = 0; i < TAM; i++) {
        vector[i] = vector[i] + 1;
    }

    printf("Position 0: %d", vector[0]);
    printf("\nPosition 1: %d", vector[1]);
    printf("\nPosition 2: %d", vector[2]);

    for (i = 0; i < TAM; i++){
        printf("\nPosition %d : %d", i, vector[i]);
    }

    for (i = 0; i < TAM; i++){
        scanf("\n%d", &vector[i]);
    }

    for (i = 0; i < TAM; i++){
        printf("\nPosition %d : %d", i, vector[i]);
    }
}