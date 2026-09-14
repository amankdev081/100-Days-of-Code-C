// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

void ones_complement(unsigned long long int num); 

int main(void) {
    unsigned long long int num;

    printf("Enter a binary number: ");
    if (scanf("%llu", &num) != 1 || num <= 0) {
        puts("Error: Invaid input");
        return 1;
    }

    ones_complement(num);

    return 0;
}

void ones_complement(unsigned long long int num) {
    unsigned long long int divisor = 1; 

    while ((num / divisor) >= 10) {
        divisor *= 10;
    }

    while (divisor > 0) {
        int current_digit = (num / divisor) % 10;

        if (current_digit == 0) {
            printf("1");
        }
        else {
            printf("0");
        }

        divisor /= 10;
    }

    printf("\n");
}

