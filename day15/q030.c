// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    int reversed_num = 0; 

    while (num != 0) { 
        reversed_num = reversed_num * 10 + num % 10;
        num = num / 10;
    }

    printf("%d\n", reversed_num);

    return 0;
}