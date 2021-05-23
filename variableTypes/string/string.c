#include <stdio.h>
#include <stdlib.h>

void main()
{
    char word[255];

    printf("Type a word: ");
    
    // Cleaning the buffer.
    setbuf(stdin, 0);
    
    // Reading our improvised string.
    fgets(word, 255, stdin);
    
    // Cleaning the not allocated spaces.
    word[strlen(word) - 1] = '\0';

    printf("%s", word);
}