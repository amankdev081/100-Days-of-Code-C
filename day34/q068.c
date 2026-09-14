// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

void delete_element(int arr[], int size, int target_index);

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

    int target_index;
    printf("Enter the index at which element is to be deleted: ");
    if (scanf("%d", &target_index) != 1 || target_index < 0 || target_index > (n - 1)) {
        puts("Error: Invalid target index");
        return 1;
    }

    delete_element(data, n, target_index);

    for (int i = 0; i < (n - 1); ++i) {
        printf("%d ", data[i]);
    }
    putchar('\n');

    return 0;
}

void delete_element(int arr[], int size, int target_index) {
    for (int i = target_index; i < (size - 1); ++i) {
        arr[i] = arr[i + 1];
    }
}