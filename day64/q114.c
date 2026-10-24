// Q114: Write a program to take a string s as input. The task is to find the length of the 
// longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>

int length_of_longest_substring(char *s);

int main(void) {
    char s[1024];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("%d\n", length_of_longest_substring(s));

    return 0;
}

int length_of_longest_substring(char *s) {
    int n = 0;
    while (s[n]) {
        ++n;
    }

    if (*(s + n - 1) == '\n') {
        *(s + n - 1) = '\0'; 
    }

    int last_index[256];
    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }

    int max_len = 0;
    int left = 0;
    
    for (int right = 0; s[right]; right++) {
        unsigned char c = s[right];

        if (last_index[c] >= left) {
            left = last_index[c] + 1;
        }

        last_index[c] = right;

        int current_len = right - left + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    return max_len;
}
