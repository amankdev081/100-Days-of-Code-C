// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

void reverse_string(char str[]);

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (scanf("%1023[^\n]", str) != 1) {
        puts("Error: No input provided");
        return 1;
    }

    reverse_string(str);
    printf("%s\n", str);

    return 0;
}

void reverse_string(char str[]) {
    int len = 0;
    while (str[len]) {
        ++len;
    }

    int left = 0, right = len - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        ++left;
        --right;
    }
}