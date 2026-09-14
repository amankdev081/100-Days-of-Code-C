// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void) {
    int num1, num2;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 < 1 || num2 < 1) {
        puts("Error: Invalid input");
        return 1;
    }

    printf("%d\n", lcm(num1, num2));

    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a , b)) * b;
}
