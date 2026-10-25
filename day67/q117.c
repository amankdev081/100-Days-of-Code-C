// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both 
// the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main(void) {
    int m;
    printf("Enter m: ");
    if (scanf("%d", &m) != 1 || m <= 0) {
        puts("Error: Invalid m");
        return 1;
    }

    int nums1[m];
    printf("Enter elements of nums1 array: ");
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &nums1[i]) != 1) {
            puts("Error: Invalid element of nums1 array");
            return 1;
        }    
    } 

    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid n");
        return 1;
    }

    int nums2[n];
    printf("Enter elements of nums2 array: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums2[i]) != 1) {
            puts("Error: Invalid element of nums2 array");
            return 1;
        }
    }

    int merged[n+m];

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k] = nums1[i];
            i++;
            k++;
        } else {
            merged[k] = nums2[j];
            j++;
            k++;
        }
    }

    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    for (int i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    putchar('\n');

    return 0;
}