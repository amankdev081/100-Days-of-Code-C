// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h> 

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    if (num < 0) {
        num = -num;
    }
    
    int result = 0;
    while (num != 0) {
        result += num % 10;
        num /= 10;
    }

    printf("%d\n", result);

    return 0;
}