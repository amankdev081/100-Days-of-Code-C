// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

void transpose(int row, int column, int arr[row][column]);

int main(void) {
    int row, column; 
    printf("Enter the values of rows and columns: ");
    if (scanf("%d %d", &row, &column) != 2) {
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

    transpose(row, column, data);

    return 0;
}

void transpose(int row, int column, int arr[row][column]) {
    for (int j = 0; j < column; ++j) {
        for (int i = 0; i < row; ++i) {
            printf("%d ", arr[i][j]);
        }
    putchar('\n');
    }
}
