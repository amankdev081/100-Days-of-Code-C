// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

void matrix_add(int row, int column, int arr1[row][column], int arr2[row][column]);

int main(void) {
    int row1, column1;

    printf("Enter the values of rows and columns of first matrix: ");
    if (scanf("%d %d", &row1, &column1) != 2 || row1 <= 0 || column1 <= 0) {
        puts("Error: Invalid input");
        return 1;
    }

    int data1[row1][column1];
    printf("Enter the elements of matrix: ");
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < column1; ++j) {
            if (scanf("%d", &data1[i][j]) != 1) {
                puts("Error: Invalid array element");
                return 1;
            }
        }
    }

    int row2, column2;
    printf("Enter the values of rows and columns of second matrix: ");
    if (scanf("%d %d", &row2, &column2) != 2 || row2 != row1 || column2 != column1) {
        puts("Error: Matrices must have identical dimensions to be added.");
        return 1;
    }

    int data2[row2][column2];
    printf("Enter the elements of second matrix: ");
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < column2; ++j) {
            if (scanf("%d", &data2[i][j]) != 1) {
                puts("Error: Invalid array element");
                return 1;
            }
        }
    }
    
    matrix_add(row1, column1, data1, data2);

    return 0;
}

void matrix_add(int row, int column, int arr1[row][column], int arr2[row][column]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        putchar('\n');
    }
}