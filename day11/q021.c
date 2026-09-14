// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a month number: ");
    if (scanf("%d", &num) != 1) {
        puts("Error: Invalid input");
        return 1;
    }

    switch (num) {
        case 1:
            puts("January, 31 days");
            break;
        case 2:
            puts("February, 28 days");
            break;
        case 3: 
            puts("March, 31 days");
            break;
        case 4:
            puts("April, 30 days");
            break;
        case 5:
            puts("May, 31 days");
            break;
        case 6:
            puts("June, 30 days");
            break;
        case 7:
            puts("July, 31 days");
            break;
        case 8:
            puts("August, 31 days");
            break;
        case 9:
            puts("September, 30 days");
            break;
        case 10:
            puts("October, 31 days");
            break;
        case 11:
            puts("November, 30 days");
            break;
        case 12:
            puts("December, 31 days"); 
            break; 
        default:
            puts("Error: Please enter a number from 1 to 12 only.");
            return 2;      
    }

    return 0;
}