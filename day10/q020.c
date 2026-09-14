// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number (1-7): ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    switch (num) {
        case 1: 
            puts("Monday");
            break;
        case 2:
            puts("Tuesday");  
            break;
        case 3:
            puts("Wednesday");
            break;
        case 4:
            puts("Thursday");
            break;
        case 5:
            puts("Friday");
            break;
        case 6:
            puts("Saturday");
            break;
        case 7:
            puts("Sunday");
            break; 
        default: 
            puts("Error: Only input from 1 to 7 are allowed.");
            return 2;            
    }

    return 0;
}