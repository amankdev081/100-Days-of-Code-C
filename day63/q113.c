// Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the 
// kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>

int kth_smallest_element(int arr[], int n, int k);

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
            puts("Error: Invalid array element");
            return 1;
        }
    }

    int k;
    printf("Enter the value of k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        puts("Error: Invalid value of k");
        return 1;
    }

    printf("%d\n", kth_smallest_element(arr, n, k));

    return 0;
}

int kth_smallest_element(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int min_index = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    return arr[k - 1];
}