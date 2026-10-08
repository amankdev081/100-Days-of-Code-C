// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements 
// between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. 
// If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot 
// integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>
#include <math.h>


int find_pivot_iterative(int n);
int find_pivot_binary(int n);
int find_pivot_optimized(int n);

int main(void) {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid value of n");
        return 1;
    }

    int result = find_pivot_optimized(n);
    printf("%d\n", result);

    return 0;
}

// Iterative approach: O(n) time complexity
// Walks through every possible pivot candidate 'i' from 1 to n.
int find_pivot_iterative(int n) {
    long long int total_sum = ((long long int) n * (n + 1) / 2);
    long long int left_sum = 1;

    for (int i = 1; i <= n; i++) {
        long long int right_sum = total_sum - left_sum + i;

        if (right_sum == left_sum) {
            return i;
        }

        left_sum += i + 1;
    }

    return -1;
}

// Binary Search approach: O(log n) time complexity
// Finds the pivot by repeatedly cutting the search range in half
int find_pivot_binary(int n) {
    long long int total_sum = ((long long int) n * (n + 1) / 2);
    int low = 1;
    int high = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long int square = (long long) mid * mid;

        if (square == total_sum) {
            return mid;
        } else if (square < total_sum) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

// Mathematical approach: O(1) time complexity
// Directly calculates the pivot using the derived formula x = sqrt(total_sum).
int find_pivot_optimized(int n) {
    long long int total_sum = ((long long int) n * (n + 1)) / 2;
    int x = sqrt(total_sum);
    
    if ((long long int) x * x == total_sum) {
        return x;
    }

    return -1;
}

