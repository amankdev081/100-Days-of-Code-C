// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int matrix_trace(int size, int data[size][size]);

int main(void) {
    int row, column;
    printf("Enter the values of rows and columns: ");
    if (scanf("%d %d", &row, &column) != 2 || row <= 0 || column != row) {
        puts("Error: Invalid input or square matrix is required.");
        return 1;
    }

    int data[row][column];
    printf("Enter the elements of matrix: ");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            if (scanf("%d", &data[i][j]) != 1) {
                puts("Error: Invalid input");
                return 1;
            }
        }
    }

    int result = matrix_trace(row, data);
    printf("%d\n", result);

    return 0;
}

int matrix_trace(int size, int data[size][size]) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += data[i][i];
    }

    return sum;
}