// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        puts("Error: Invalid input");
        return 1;
    }
     
    unsigned int original_num = num;
    unsigned long long int reversed_num = 0;

    while (num != 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }

    if (original_num == reversed_num) {
        puts("Palindrome");
    }
    else {
        puts("Not palindrome");
    }

    return 0;
}