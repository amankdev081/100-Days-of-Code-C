// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int calculate_margin(int cp, int sp) {
    if (cp <= 0) {
        return 0;
    }

    return ((sp - cp) * 100) / cp; 
}

int main(void) {
    int cp, sp;

    printf("Enter the cost price and selling price: ");
    if (scanf("%d %d", &cp, &sp) != 2) {
        puts("Error: Invalid input");
        return 1;
    }

    if (cp <= 0 || sp < 0) {
        printf("Error: Cost price must be greater than zero and " 
               "selling price cannot be negative.\n");
        return 1;
    }

    int margin = calculate_margin(cp , sp);

    if (margin > 0) {
        printf("Profit %d%%\n", margin);
    }
    else if (margin < 0) {
        printf("Loss %d%%\n", - margin);
    }
    else {
        puts("No Profit No Loss");
    }

    return 0;
}