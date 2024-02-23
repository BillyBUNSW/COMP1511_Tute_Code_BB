/*
    prints a series of puns
    written by billy
*/

#include <stdio.h>

int main(void) {
    // enter 'y' or 'n'
    char input;
    printf("Do you like puns?\n");
    scanf("%c", &input);

    if (input == 'y') {
        printf("Do you like computers more than books?\n");
        scanf(" %c", &input);
        if (input == 'y') {
            printf("You will be glad to C this pun, then\n");
        } else if(input == 'n') {
            printf("I hope the police *book* you for saying that.\n");
        }
    } else if (input == 'n') {
        printf("That's pUnfortunate\n");
    }
}
