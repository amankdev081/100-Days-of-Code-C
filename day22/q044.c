// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

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
        puts("Approximate sum: 0.0");
    }
    else {
        printf("Approximate sum: %.1f\n", series_sum(n));
    }

    return 0;
}

float series_sum(int n) {
    float result = 1.0f;

    for (int i = 1; i < n; ++i) {
        float numerator = (i * 2.0f) + 1.0f;
        float denominator = (i * 2.0f) + 2.0f;

        result += numerator / denominator;
    }

    return result;
}