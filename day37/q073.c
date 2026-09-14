// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

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
                puts("Error: Invalid input");
                return 1;
            }                
        }
    }

    int arr[row];
    for (int i = 0; i < row; ++i) {
        int sum = 0;
        for (int j = 0; j < column; ++j) {
            sum += data[i][j];
        }
        arr[i] = sum; 
    }

    for (int i = 0; i < row; ++i) {
        printf("%d%s", arr[i], (i == row -1) ? "" : " ");
    }
    putchar('\n');

    return 0;
}