// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the value of n: "); 
    if (scanf("%d", &n) != 1 || n < 1) {
        puts("Error: Invalid input");
        return 1;
    }

    for (int i = 2; i <= n; ++i) {
        int is_prime = 1;

        for (int j = 2; j * j <= i; ++j) {
            if ((i % j) == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
        }
    }

    putchar('\n');

    return 0;
}