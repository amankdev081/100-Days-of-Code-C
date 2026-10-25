// Q119: Write a program to take an integer array as input. Only one element will be repeated. 
// Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) {
        puts("Error: Invalid n");
        return 1;
    }

    int nums1[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums1[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }

    int visited[100000] = {0};
    for (int i = 0; i < n; i++) {
        if (!visited[nums1[i]]) {
            visited[nums1[i]] = 1;
        } else {
            printf("%d\n", nums1[i]);
        }
    }

    return 0;
}