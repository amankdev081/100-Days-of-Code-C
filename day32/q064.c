// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main(void) {
    int digit[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    while (num != 0) {
        int temp = num % 10;
        ++count[temp];
        num /= 10;
    }

    int max_count = 0, winning_digit;

    for (int i = 0; i < 10; ++i) {
        if (count[i] > max_count) {
            max_count = count[i];
            winning_digit = digit[i];
        }
    }

    printf("%d\n", winning_digit);

    return 0;
}