// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <stdbool.h>

bool is_armstrong(int num);

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    } 
    
    if (is_armstrong(num)) {
        puts("Armstrong");
    }
    else {
        puts("Not Armstrong");
    }

    return 0;
}

bool is_armstrong(int num) {
    int dig = 0, num1 = num;
   
    while (num1 != 0) {
        ++dig;
        num1 /= 10;
    }

    int num2 = num, new_num = 0;

    for (int i = 0; i < dig; ++i) {
        int temp = num2 % 10, a = temp;

        for (int j = 1; j < dig; ++j) {
           temp *= a; 
        }

       new_num += temp;
       num2 /= 10; 
    }

    return (num == new_num);
}