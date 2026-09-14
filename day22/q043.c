// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int get_factorial(int digit);

int main(void) {
    int num, result = 0;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    if (num <= 0) {
        puts("Not strong number");
        return 0;
    }

    int num_copy = num;

    while (num_copy != 0) {
        int digit = num_copy % 10, factorial = 1;

        result += get_factorial(digit);
        num_copy /= 10;
    }    

    if (num == result) {
        puts("Strong number");
    }
    else {
        puts("Not strong number");
    }

    return 0;
}

int get_factorial(int digit) {
    int factorial = 1;

    for (int i = 2; i <= digit; ++i) {
        factorial *= i;
    }

    return factorial;
}