/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/    

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < i; ++j) {
            putchar(' ');
        } 

        for (int k = 0; k < (5 - i); ++k) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}