/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main(void) {
    int rows = 3;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < (2 * i + 1); ++j) {
            puts("*");
        }

        putchar('\n');
    }
    
    for (int i = 0; i < (rows - 1); ++i) {
        for (int j = 0; j < ((2 * rows - 3) - (2 * i)); ++j) {
            puts("*");
        }

        putchar('\n');
    }

    return 0;
}