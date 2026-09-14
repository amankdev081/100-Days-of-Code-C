// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

void matrix_diagonal_traversal(int row, int column, int data[row][column]);

int main(void) {
    int row,column; 
    printf("Enter the values of rows and columns: ");
    if (scanf("%d %d", &row, &column) != 2 || row <= 0 || column <= 0) {
        puts("Error: Invalid input");
        return 1;
    }

    int data[row][column];
    printf("Enter the elements of matrix: ");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            if (scanf("%d", &data[i][j]) != 1) {
                puts("Error: Invalid matrix element");
                return 1;
            }
        }
    }

    matrix_diagonal_traversal(row, column, data);

    return 0;
}

void matrix_diagonal_traversal(int row, int column, int data[row][column]) {
    int max_sum = (row - 1) + (column - 1);

    for (int s = 0; s <= max_sum; ++s) {
        if (s % 2 == 0) {
            for (int i = row - 1; i >= 0; --i) {
                int j = s - i;
                if (j >= 0 && j < column) {
                    printf("%d ", data[i][j]);
                }                
            }    
        } else {
            for (int i = 0; i < row; ++i) { 
                int j = s - i;
                if (j >= 0 && j < column) {
                    printf("%d ", data[i][j]);
                }
            }  
        }   
    }

    putchar('\n');
}

