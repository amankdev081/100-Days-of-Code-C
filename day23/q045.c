// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

float series_sum(int n);

int main(void) {
    int n;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        puts("Error: Invalid input");
        return 1;
    }

    if (n == 0) {
        puts("Approximate sum: 0.00");
    }
    else {
        printf("Approximate sum: %.2f\n", series_sum(n));
    }

    return 0;
}

float series_sum(int n) {
    float result = 0.0f;

    for (int i = 1; i <= n; ++i) {
        result += (2.0f * i) / (4.0f * i - 1);
    }

    return result;
}

