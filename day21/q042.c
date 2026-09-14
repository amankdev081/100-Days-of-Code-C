// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main(void) {
    int num, sum = 1;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    if (num <= 1) {
        puts("Not perfect number");
        return 0;
    }
    else {
        for (int i = 2; i * i <= num; ++i) {
            if ((num % i) == 0) {
                if ((num / i) == i) {
                    sum += i;
                }
                else {
                sum += i + (num / i);
                }
            }
        }
    }

    if (sum == num) {
        puts("Perfect number");
    }
    else {
        puts("Not perfect number");
    }

    return 0;
}