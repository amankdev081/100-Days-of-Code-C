// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main() {
    float pri, rat, tim;

    printf("Enter principal, rate, and interest: ");
    scanf("%f %f %f", &pri, &rat, &tim);

    printf("Simple Interest=%.f\n", (pri*rat*tim) / 100);
    
    float ci = pri*(pow(1 + (rat/100), tim) - 1);
    printf("Compound Interest=%.2f\n", ci);

    return 0;
}