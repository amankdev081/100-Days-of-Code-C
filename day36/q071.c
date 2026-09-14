// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>

int main(void) {
    int row, column;
    printf("Enter the row and column of the matrix: ");
    if (scanf("%d %d", &row, &column) != 2 || row <= 0 || column <= 0) {
        puts("Error: Invalid input");
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

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d%s", data[i][j], (j == column - 1) ? "" : " ");
        }
        putchar('\n');
    }
    
    return 0;
}    





















