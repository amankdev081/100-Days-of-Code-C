// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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

    int positive_count = 0, negative_count = 0, zero_count = 0;

    for (int i = 0; i < n; ++i) {
        if (data[i] > 0) {
            positive_count += 1;
        }
        else if (data[i] < 0) {
            negative_count += 1;
        }
        else {
            zero_count += 1;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive_count, negative_count, zero_count);

    return 0;
}