// Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int iterative_binarysearch(int arr[], int size, int target);

int recursive_binarysearch(int arr[], int size, int target);
int recursive_helper(int arr[], int left, int right, int target); 

int main(void) {
    int n; 
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid input");
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

    int target;
    printf("Enter the element to search: ");
    if (scanf("%d", &target) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    int result_index = iterative_binarysearch(data, n, target);

    if (result_index != -1) {
        printf("Found at index %d\n", result_index);
    } else {
        puts("-1");
    }

    return 0;
}

int iterative_binarysearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;
        
        if (arr[middle] == target) {
            return middle;
        } else if (arr[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int recursive_binarysearch(int arr[], int size, int target){
    return recursive_helper(arr, 0, size - 1, target);
}

int recursive_helper(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int middle = left + (right - left) / 2;

    if (arr[middle] == target) {
        return middle;
    } else if (arr[middle] < target) {
        return recursive_helper(arr, middle + 1, right, target);
    } else {
        return recursive_helper(arr, left, middle - 1, target);
    }
}

