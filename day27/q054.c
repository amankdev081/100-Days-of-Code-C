/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/   


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main(void) {
    int rows = 4;
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < (rows - 1 - i); ++j) {
            putchar(' ');
        }
        for (int k = 0; k < (2 * i + 1); ++k) {
            putchar('*');
        }
        putchar('\n');
    }

    int star_count = 2 * rows - 3;

    for (int i = 0; i < (rows - 1); ++i) {
        for (int j = 0; j < (i + 1); ++j) {
            putchar(' ');
        }
        for (int k = 0; k < (star_count - 2 * i); ++k) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}