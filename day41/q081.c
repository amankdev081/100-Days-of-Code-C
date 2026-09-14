// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int char_counter(const char str[]);

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (scanf("%1023[^\n]", str) != 1) {
        puts("Error: No input provided");
        return 1;
    }

    int result = char_counter(str);
    printf("%d\n", result);

    return 0;
}

int char_counter(const char str[]) {
    int i = 0; 
    while (str[i]) {
        ++i;
    }

    return i;
}