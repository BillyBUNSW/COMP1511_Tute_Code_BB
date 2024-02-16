// face.c
//
// Written by Billy z5417266,
// on 16-02-24
//
// The program prints two simple faces
//
// Face 1:
//  ~ ~
//  0 0
//   o
//   -
//
// Face 2:
//  ~ ~
//  0 0
//   o
//  \_/

#include <stdio.h>

int main(void) {
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o  \n");
    printf("\\_/\n"); // escape sequence \\ prints a single '\'
    return 0;
}
