/*
Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for 
each element of the array in order of their appearance in the array. Previous greater element of an element 
in the array is the nearest element on the left which is greater than the current element. If 
there does not exist next greater of current element, then previous greater element 
for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

*/

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        puts("Error: Invalid value of n");
        return 1;
    }

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }
    
    for (int i = 0; i < n; i++) {
        int next_greater = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }
        printf("%d%s", next_greater, (i == n - 1) ? "" : ", ");
    }
    putchar('\n');

    return 0;
}