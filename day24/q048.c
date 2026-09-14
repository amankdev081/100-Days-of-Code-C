/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345
*/

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i; ++j) {
            putchar('1' + j);
        }

        putchar('\n');
    }

    return 0;
}