// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the number of elements: ");
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

    int even_count = 0;

    for (int i = 0; i < n; ++i) {
        if ((data[i] % 2) == 0) {
            even_count += 1; 
        }
    }

    int odd_count = n - even_count;

    printf("Even=%d, Odd=%d\n", even_count, odd_count);

    return 0;
}