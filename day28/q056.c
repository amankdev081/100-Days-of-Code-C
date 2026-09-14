// Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        puts("Error: Invalid input");
        return 1;
    }

    int data[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", data[i]);
    }
    putchar('\n');

    return 0;
}