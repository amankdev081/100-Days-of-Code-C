// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main(void) {
    int num1, num2, result;
    char op;

    printf("Enter two numbers and one operator (+, -, *, /, %%): ");
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        puts("Error: Invalid input");
        return 1;
    }

    switch (op) {
        case '+': 
            result = num1 + num2;
            break;
        case '-': 
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                puts("Error: Division by 0 is not possible.");
                return 1;
            }
            result = num1 / num2;
            break;
        case '%':
            if (num2 == 0) {
                puts("Error: Modulus by 0 is not possible.");
                return 1;
            }
            result = num1 % num2;
            break; 
        default: 
            puts("Invalid operator");
            return 1;         
    }

    printf("%d\n", result);
    return 0;
}