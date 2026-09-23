// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>

int main(void) {
    char str[1024];

    printf("Enter a string: ");
    if (scanf("%1023[^\n]", str) != 1) {
        puts("Error: No input provided");
        return 1;
    }

    int space_count = 0, digit_count = 0, special_char_count = 0; 
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
           ++space_count;
        } else if (str[i] >= '0' && str[i] <= '9') {
            ++digit_count;
        } else if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) {
            ++special_char_count;
        }
    }
    
    printf("Spaces=%d, Digits=%d, Special=%d\n", space_count, digit_count, special_char_count);

    return 0;
}