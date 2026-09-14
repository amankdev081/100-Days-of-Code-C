// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

void merge_array(int arr1[], int size1, int arr2[], int size2, int merged[]);

int main(void) {
    int n1; 
    printf("Enter the number of elements in first array: ");
    if (scanf("%d", &n1) != 1 || n1 <= 0) {
        puts("Error: Invalid input");
        return 1;
    }
    int data1[n1];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n1; ++i) {
        if (scanf("%d", &data1[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }

    int n2;
    printf("Enter the number of elements in second array: ");
    if (scanf("%d", &n2) != 1 || n2 <= 0) {
        puts("Invalid input");
        return 1;
    }
    int data2[n2];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n2; ++i) {
        if (scanf("%d", &data2[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }

    int merged[n1 + n2];
    merge_array(data1, n1, data2, n2, merged);

    for (int i = 0; i < (n1 + n2); ++i) {
        printf("%d ", merged[i]);
    }
    putchar('\n');
   
    return 0;
}

void merge_array(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    for (int i = 0; i < size1; ++i) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        merged[size1 + i] = arr2[i];
    }
}