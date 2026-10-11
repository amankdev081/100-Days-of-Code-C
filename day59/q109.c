// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int find_max_subarray_sum(int arr[], int n, int k);

int main(void) {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        puts("Error: Invalid value of n");
        return 1;
    }

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            puts("Error: Invalid array elment");
            return 1;
        }
    }

    int k;
    printf("Enter the value of K: ");
    if (scanf("%d", &k) != 1 || k < 0 || k > n) {
        puts("Error: Invalid value of k");
        return 1;
    }

    printf("%d\n", find_max_subarray_sum(arr, n, k));

    return 0;
}

int find_max_subarray_sum(int arr[], int n, int k) {
    int size = n - k + 1;

    int current_sum = 0; 
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    int max_sum = current_sum;
    for (int i = 1; i < (size); i++) {
        current_sum += arr[i + k - 1] - arr[i  - 1];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        } 
     }

    return max_sum;
}