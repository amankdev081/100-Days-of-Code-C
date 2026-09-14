// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main(void) {
    int num;
    
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num < 0 || num > 524287) {
        puts("Error: Invalid input (input must be from 0 to 524287).");
        return 1;
    } 

    unsigned long long int bin = 0;
    unsigned long long int place = 1;

    while (num != 0) {
        bin = bin  + (num % 2) * place ;
        num /= 2;
        place *= 10;
    }

    printf("%llu\n", bin);
    
    return 0;
}