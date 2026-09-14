// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter the lengths of the sides of triangle: ");
    if (scanf("%d %d %d", &a , &b, &c) != 3) {
        printf("Error: Invalid input\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0 ||
        (a + b <= c) || (b + c <= a) || (a + c <= b) ) {
            printf("Error: The given lengths do not form a valid triangle.\n");
            return 2;
        }

    if (a == b && b == c) {
        printf("Equilateral\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    return 0;
}