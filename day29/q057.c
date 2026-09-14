// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the number of array elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid or zero input");
        return 1;
    }

    int data[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &data[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += data[i];
    }

    printf("%d\n", sum);

    return 0;
}