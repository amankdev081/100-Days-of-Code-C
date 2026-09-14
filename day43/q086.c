// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(const char str[]);

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (scanf("%1023[^\n]", str) != 1) {
        puts("Error: No input provided");
        return 1;
    }

    bool result = is_palindrome(str);
    if (result) {
        puts("Palindrome");
    } else {
        puts("Not palindrome");
    }

    return 0;
}

bool is_palindrome(const char str[]) {
    int len = 0;
    while (str[len]) {
        ++len;
    }

    int left = 0, right = len - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }

    return true;
}