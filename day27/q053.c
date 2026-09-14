/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main(void) {
    int rows = 5;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < (2 * i + 1); ++j) {
            putchar('*');
        }

        putchar('\n');
    }

    int star_count = rows * 2 - 3;

    for (int i = 0; i < (rows - 1); ++i) {
        for (int j = 0; j < (star_count - (2 * i)); ++j) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}