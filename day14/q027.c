// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main(void) {
    int num, result = 0;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Error: Invalid input\n");
        return 1;
    }

    for (int i = 0; i < num; ++i) {
            result += 2 * i + 1;
    }

    printf("%d\n", result);

    return 0;
}