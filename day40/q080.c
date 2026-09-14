// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

void matrix_multiplication(int rows_a, int cols_a, int mat_a[rows_a][cols_a], int cols_b, int mat_b[cols_a][cols_b]);

int main(void) {
    int rows_a, cols_a;
    printf("Enter the values of rows and columns of first matrix: ");
    if (scanf("%d %d", &rows_a, &cols_a) != 2 || rows_a <= 0 || cols_a <= 0) {
        puts("Error: Invalid input");
        return 1;
    }

    int mat_a[rows_a][cols_a];
    printf("Enter the elements of first matrix: ");
    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < cols_a; ++j) {
            if (scanf("%d", &mat_a[i][j]) != 1) {
                puts("Error: Invalid matrix element");
                return 1;
            }
        }
    }    

    int rows_b, cols_b;
    printf("Enter the values of rows and columns of second matrix: ");
    if (scanf("%d %d", &rows_b, &cols_b) != 2 || rows_b <= 0 || cols_b <= 0) {
        puts("Error: Invalid input");
        return 1;
    }

    if (cols_a != rows_b) {
        puts("Error: Multiplication is not possible as inner dimensions differ.");
        return 1;
    }

    int mat_b[rows_b][cols_b];
    printf("Enter the elements of second matrix: ");
    for (int i = 0; i < rows_b; ++i) {
        for (int j = 0; j < cols_b; ++j) {
            if (scanf("%d", &mat_b[i][j]) != 1) {
                puts("Error: Invalid matrix element");
                return 1;   
            }
        }
    }

    matrix_multiplication(rows_a, cols_a, mat_a, cols_b, mat_b);

    return 0;
}

void matrix_multiplication(int rows_a, int cols_a, int mat_a[rows_a][cols_a], int cols_b, int mat_b[cols_a][cols_b]) {
    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < cols_b; ++j) {
            int sum = 0;
            for (int k = 0; k < cols_a; ++k) {
                sum += mat_a[i][k] * mat_b[k][j];
            }
            printf("%d ", sum);
        }
        putchar('\n');
    }
}