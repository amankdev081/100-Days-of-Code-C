// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main() {
    int temp;
    
    printf("Enter temperature in Celcius: ");
    scanf("%d", &temp);

    printf("Fahrenheit=%d\n", (temp * 9 /5) + 32);

    return 0;
}