// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

void rotate_by_shift(int arr[], int size, int k);

void rotate_with_temp(int arr[], int size, int k);

void rotate_by_reversal(int arr[], int size, int k);
void reverse(int arr[], int start, int end); 

int main(void) {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid input");
        return 1;
    }

    int data[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &data[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }

    int k;
    printf("Enter the value of k: ");
    if (scanf("%d", &k) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    rotate_by_reversal(data, n, k);

    for (int i = 0; i < n; ++i) {
        printf("%d ", data[i]);
    }
    putchar('\n');

    return 0;
}

/*
* Method 1: Step by Step Shift
*
* Time complexity: O(n * k)
* Space complexity: O(1)
*
* Advantage: Intuitive and requires zero extra memory
* Disadvantage: Highly inefficient for large arrays and large values of k
* due to redundant shifting operations.
*/
void rotate_by_shift(int arr[], int size, int k) {
    k %= size;
    if (k < 0) {
        k += size;
    }

    for (int i = 0; i < k; ++i) {
        int temp = arr[size - 1];
    for (int j = size - 2; j >= 0; --j) {
        arr[j + 1] = arr[j];
    }
    arr[0] = temp;
    }
}

/*
* Method 2: Temporary Array
*
* Time complexity: O(n)
* Space complexity: O(n)
*
* Advantage: Extremely fast, completing the rotation in a single pass.
* Disadvantage: Consumes additional memory proportional to the array size,
* which may be be problematic in memory constrained environments.
*/
void rotate_with_temp(int arr[], int size, int k) {
    k %= size;
    if (k < 0) {
        k += size;
    }

    int temp[size];
    for (int i = 0; i < size; ++i) {
        int new_index = (i + k) % size;
        temp[new_index] = arr[i];
    }

    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

/*
* Method 3: The Reversal Trick
*
* Time complexity: O(n)
* Space complexity: O(1)
*
* Advantage: The optimal solution. Achieves the speed of the temporary array
* method without requiring any extra memory.
* Disadvantage: The underlying logic is slightly less obvious at first glance
* compared to direct shifting.
*/
void rotate_by_reversal(int arr[], int size, int k) {
    k %= size;
    if (k < 0) {
        k += size;
    }

    reverse(arr, 0, size - 1);
    reverse(arr, 0, k-1);
    reverse(arr, k, size - 1);
}

/*
* Helper function to reverse a specific segment of an array in place.
* Used the two-pointer technique to swap elements from the outside in.
*/
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }
}