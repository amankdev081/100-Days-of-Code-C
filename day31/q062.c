// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

void reverse_array_index(int arr[], int size);
void reverse_array_pointer(int arr[], int size);

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
            puts("Invalid array element");
            return 1;
        }
    }

    reverse_array_pointer(data, n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", data[i]);
    }
    putchar('\n');

    return 0;
}

void reverse_array_index(int arr[], int size) {
    for (int i = 0; i < (size / 2); ++i) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void reverse_array_pointer(int arr[], int size) {
    int *left = arr, *right = &arr[size - 1];

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        
        ++left;
        --right;
    }
}