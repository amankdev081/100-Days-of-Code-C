// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the 
// product of all the elements of nums except nums[i]. The product of any prefix or suffix of 
// nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>

void product_except_self_brute_force(int nums[], int n);
void product_except_self_optimized(int nums[], int n);

int main(void) {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid input");
        return 1;
    } 

    int nums[n];
    printf("Enter array elemets: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }

    product_except_self_optimized(nums, n);

    return 0;
}

/*
* Method 1: Brute-Force (Nested Loops) Approach
* Time complexity: O(n^2) - Uses nested loops to calculate the product of all other elements for each index.
* Space complexity: O(1) - Uses no extra data structures, printing directly to the console. 
*/
void product_except_self_brute_force(int nums[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        int result = 1;

        for (int j = 0; j < n; j++) {
            result *= (i != j) ? nums[j] : 1;
        }

        printf("%d%s", result, (i != n - 1) ? "," : "");
    }
    printf("]\n");    
}

/*
* Method 2: Optimized (Prefix and Suffix) Approach
* Time complexity: O(n) - Uses two separate single-pass loops (left-to-right, then right-to-left) without nesting.
* Space Complexity: O(n) - Uses an array of size n to store the prefix and suffix products before printing. 
*/
void product_except_self_optimized(int nums[], int n) {
    int answer[n];

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", answer[i], (i != n - 1) ? "," : "");
    }
    printf("]\n");
}