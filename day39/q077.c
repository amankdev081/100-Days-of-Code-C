// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
#include <stdbool.h>

bool has_unique_diagonal(int row, int column, int data[row][column]);

int main(void) {
    int row, column;
    printf("Enter the values of rows and columns:  ");
    if (scanf("%d %d", &row, &column) != 2 || row <= 0 || column <= 0) {
        puts("Error: Invalid input");
        return 1;
    }

    int data[row][column];
    printf("Enter the elements of array: ");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            if (scanf("%d", &data[i][j]) != 1) {
                puts("Error: Invalid array element");
                return 1;
            }
        }
    }

    bool result = has_unique_diagonal(row, column, data);

    if (result) {
        puts("True");
    } else {
        puts("False");
    }

    return 0;
}

bool has_unique_diagonal(int row, int column, int data[row][column]) {
    if (row > column) {
        row = column;
    }
    for (int i = 0; i < row; ++i) {
        for (int j = i + 1; j < row; ++j) {
            if (data[i][i] == data[j][j]) {
                return false;
            }
        }
    }

    return true;
}