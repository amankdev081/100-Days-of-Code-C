/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345
*/

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i; ++j) {
            putchar('5' - i + j);
        }
    putchar('\n');            
    }

    return 0;
}