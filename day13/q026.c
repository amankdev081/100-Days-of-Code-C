// Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid input");
        return 1;
    }
    
    printf("1");
    for (int i = 2; i <= n; ++i) {
        printf(" %d", i);
    }

    printf("\n");
    
    return 0;
}