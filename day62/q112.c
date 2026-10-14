// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum 
// of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. 
// If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>

long long int maximum_sum_subarray(int arr[], int n);

int main(void) {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid value of n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }

    printf("%lld\n", maximum_sum_subarray(arr, n));

    return 0;
}

long long int maximum_sum_subarray(int arr[], int n) {
    long long max_so_far = arr[0];
    long long curr_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > curr_max + arr[i]) {
            curr_max = arr[i];
        } else {
            curr_max += arr[i];
        }

        if (curr_max > max_so_far) {
            max_so_far = curr_max;
        }
    }

    return max_so_far;
}