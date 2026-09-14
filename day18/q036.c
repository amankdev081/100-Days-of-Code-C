// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int gdb(int a, int b);

int main(void) {
    int num1, num2, result;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 < 1 || num2 < 1) {
        puts("Error: Invalid input");
        return 1;
    }

    printf("%d\n", gdb(num1, num2));

    return 0;
}

int gdb(int a, int b) {
    int rem = 1;

    while (b != 0){
        rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

