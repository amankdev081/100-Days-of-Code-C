// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h> 

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest = num1;

    if (num2 >  largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    printf("Largest is %d\n", largest);
    
    return 0;   
}