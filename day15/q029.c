// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num < 0 || num > 20) {
        printf("Error: Invalid input. Vaild range is 0-20.\n");
        return 1;
    }

    unsigned long long result = 1;

    for (int i = 2; i <= num; ++i) {
        result *= i;
    }

    printf("%llu\n", result);
  
    return 0;
}