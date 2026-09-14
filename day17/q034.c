// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num);

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    if (is_prime(num) == true) {
        puts("Prime");
    }
    else {
        puts("Not prime");
    }

    return 0;
}

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}