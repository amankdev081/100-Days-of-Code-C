// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (scanf("%1023[^\n]", str) != 1) {
        puts("Error: No input provided");
        return 1;
    }

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    puts(str);

    return 0;
}