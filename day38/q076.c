// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
#include <stdbool.h>

bool is_symmetric(int row, int column, int arr[row][column]);

int main(void) {
    int row, column;
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
                puts("Error: Invalid array element");
                return 1;
            }
        }
    }

    bool result = is_symmetric(row, column, data);
    if (result) {
        puts("True");
    } else {
        puts("False");
    }

    return 0;
}

bool is_symmetric(int row, int column, int arr[row][column]) {
    if (row != column) {
        return false;
    }
    for (int i = 0; i < row; ++i) {
        for (int j = i + 1; j < column; ++j) {
            if (arr[i][j] != arr[j][i]) {
                return false; 
            }
        }
    }

    return true;
}