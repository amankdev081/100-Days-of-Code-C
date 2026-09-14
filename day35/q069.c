// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>
#include <limits.h>

int second_largest(int arr[], int size);

int main(void) {
    int n;
    printf("Enter the number of elements of array: ");
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

    int result = second_largest(data, n);

    if (result == INT_MIN) {
        puts("There is no second largest element.");
    } else {
        printf("%d\n", result);
    }

    return 0;
} 

int second_largest(int arr[], int size) {
    int largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i]; 
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    return second_largest;
}