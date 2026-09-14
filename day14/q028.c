// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main(void) {
    int num, result = 1;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num <= 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    for (int i = 2; i <= num; i += 2) {
        result *= i;
    }

    printf("%d (%d", result, 2);
    for (int i = 4; i <= num; i += 2) {
        printf(" * %d", i);
    }
    printf(")\n");

    return 0;
}