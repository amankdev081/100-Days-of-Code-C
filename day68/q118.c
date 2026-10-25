// Q118: Write a program to take an input array of size n. The array should contain all 
// the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>

int find_missing_num_brute_force(int nums1[], int n);
int find_missing_num_optimized(int nums1[], int n);
int find_missing_num_xor(int nums1[], int n);

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
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

    printf("%d\n", find_missing_num_xor(nums1, n));
    
    return 0;
}

/*
 * Approach 1: Brute Force
 * Checks every possible number 0 to n against every element in the array.
 * Time Complexity: O(n^2) - because it uses loop inside a loop.
 * Space Complexity: O(1) - because it only uses a few extra integer variables.
 */
int find_missing_num_brute_force(int nums1[], int n) {
    int i = 0; 

    for (i = 0; i <= n; i++) {
        int found = 0; 

        for (int j = 0; j < n; j++) {
            if (i == nums1[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            break;
        }
    } 
    
    return i;
}

/*
 * Approach 2: Mathematical Sum Formula
 * Calculates the expected sum of 0 to n using n*(n+1) / 2, then substact the actual sum of the array.
 * Time Complexity: O(n) - Iterates through the array exactly once.
 * Space Complexity: O(1) - Only uses a few extra integer variables.
 */
int find_missing_num_optimized(int nums1[], int n) {
    int total_sum = n * (n + 1) / 2;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums1[i]; 
    }

    return total_sum - sum;
}

/*
 * Approach 3: Bitwise XOR
 * Uses the XOR operator to cancel out matching pairs between the expected numbers and actual array elements.
 * The only number left standing is the missing one. This safely prevents integer overflow.
 * Time complexity: O(n) - Iterates through the expected numbers and array sequentially.
 * Space comlexity: O(1) - Uses a single integer variable to accumulate the result. 
 */
int find_missing_num_xor(int nums1[], int n) {
    int result = 0;

    for (int i = 1; i <= n; i++) {
        result ^= i;
    }
     
    for (int i = 0; i < n; i++) {
         result ^= nums1[i];
    }

    return result;
}