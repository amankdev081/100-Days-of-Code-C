// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main(void) {
    int num, original_sign= 1;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    if (num < 0) {
        num *= -1;
        original_sign *= -1;

    }

    int num_copy = num, divisor = 1;

    while (num_copy > 10) {
        divisor *= 10;
        num_copy /= 10;    
    }

    int first = num / divisor;
    int last = num % 10;
    int new_num = num - first * divisor - last + last * divisor + first;

    printf("%d\n", new_num * original_sign);

    return 0;
}