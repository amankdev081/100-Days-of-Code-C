// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

void insert_sorted(int arr[], int size, int new_element);

int main(void) {
    int n; 
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid input");
        return 1;
    }

    int data[n + 1];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &data[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }

    int new_num;
    printf("Enter the new_number: ");
    if (scanf("%d", &new_num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    insert_sorted(data, n, new_num);

    for (int i = 0; i < (n + 1); ++i) {
        printf("%d ", data[i]);
    }
    putchar('\n');

    return 0;
}

void insert_sorted(int arr[], int size, int new_element) {
    int i = size - 1;

    while (i >= 0 && arr[i] > new_element) {
        arr[i + 1] = arr[i];
        --i;
    }

    arr[i + 1] = new_element;
}