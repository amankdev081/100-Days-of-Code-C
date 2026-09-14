// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

void position_insert(int arr[], int size, int position, int new_element);

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

    int target_index;
    printf("Enter the index at which new element is to be inserted: ");
    if (scanf("%d", &target_index) != 1 || target_index < 0 || target_index > n) {
        puts("Error: Invalid index position");
        return 1;
    } 

    int new_num;
    printf("Enter the new number: ");
    if (scanf("%d", &new_num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    position_insert(data, n, target_index, new_num);

    for (int i = 0; i < (n + 1); ++i) {
        printf("%d ", data[i]);
    }
    putchar('\n');

    return 0;
}

void position_insert(int arr[], int size, int target_index, int new_element) {
    for (int i = size - 1; i >= target_index; --i)  {
        arr[i + 1] = arr[i];
    }

    arr[target_index] = new_element;
}