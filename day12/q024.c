/* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/


#include <stdio.h>

int main() {
    int unit, bill;

    printf("Enter units consumed: ");
    if (scanf("%d", &unit) != 1 || unit <= 0) {
        printf("Error: Invalid input\n");
        return 1;
    }

    if (unit <= 100) {
        bill = unit * 5;
    }
    else if (unit <= 200) {
        bill = (100 * 5) + ((unit - 100) * 7);
    }
    else if (unit <= 300) {
        bill = (100 * 5) + (100 * 7) + ((unit - 200) * 10);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (300 * 10) + ((unit - 300) * 12);
    } 

    printf("Bill: ₹%d\n", bill);

    return 0;
}