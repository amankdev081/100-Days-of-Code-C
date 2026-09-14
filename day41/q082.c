// Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

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
        printf("%c\n", str[i]);
        ++i;
    }

    return 0;
}