// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main() {
    int len, bre;

    printf("Enter the length and bredth of rectnagle: ");
    scanf("%d %d", &len, &bre);

    printf("Area=%d, Perimeter=%d\n", len * bre, 2 * (len + bre));

    return 0;
}