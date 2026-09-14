// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

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
        };
    }

    int min = data[0], max = data[0];

    // loop to compute min
    for (int i = 0; i < n; ++i) {
        if (data[i] > max) {
            max = data[i];
        }    
        else if (data[i] < min) {
            min = data[i];
        } 
    }       

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}