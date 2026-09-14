// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (scanf("%1023[^\n]", str) != 1) {
        puts("Error: No input provided");
        return 1;
    }

    int i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
        ++i;
    }
    printf("%s\n", str);

    return 0;
}