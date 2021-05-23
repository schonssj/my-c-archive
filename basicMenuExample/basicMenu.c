#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int option;

    while (option < 1 || option > 3) {
        printf("Choose an option below:");
        printf("\n1 - Option 1");
        printf("\n2 - Option 2");
        printf("\n3 - Option 3\n");

        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Option 1 selected");
                break;
            case 2:
                printf("Option 2 selected");
                break;
            case 3:
                printf("Option 3 selected");
                break;
            default:
                printf("Invalid option!");
                break;
        }
    }
}