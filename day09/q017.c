// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, d;

    printf("Enter the coefficients of quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 1;
    }

    d = (b*b - 4*a*c);

    if (d > 0) {
        double d_sqrt = sqrt(d);
        double root1 = -(b - d_sqrt) / (2*a);
        double root2 = -(b + d_sqrt) / (2*a);

        printf("Roots are real and different: %.lf %.lf\n", root1, root2);
    }
    else if (d == 0) {
        double root = -b / (2*a);
        printf("Roots are real and same: %.lf\n", root);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}