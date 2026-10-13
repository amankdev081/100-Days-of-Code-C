// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative 
// integer in each subarray of size k moving from left to right. If no negative exists in a window, 
// print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>

void first_negative_subarray(int arr[], int n, int k);

int main(void) {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
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
    if (scanf("%d", &k) != 1) {
        puts("Error: Invalid value of k");
        return 1;
    }

    first_negative_subarray(arr, n, k);

    return 0;
}

void first_negative_subarray(int arr[], int n, int k) {
    int neg_idx = 0; 
    for (int i = 0; i <= (n - k); i++) {
        if (neg_idx < i) {
            neg_idx = i;
        }
        while (neg_idx < (i + k) && arr[neg_idx] >= 0) {
            neg_idx++;
        }
        printf("%d ", (neg_idx < (i + k)) ? arr[neg_idx] : 0);
    }
    putchar('\n');
}