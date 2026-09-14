// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    if (num < 0) {
        num = -num;
    }

    int result= 1;

    while (num != 0) {
        int temp = num % 10;

        if ((temp % 2) != 0) {
            result *= temp; 
        }
        
        num /= 10;
    }

    printf("%d\n", result);

    return 0;
}