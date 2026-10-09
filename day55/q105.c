// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element 
// is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: 
// Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>

int find_majority_element_brute_force(int nums[], int n);
int find_majority_element_boyer_moore(int nums[], int n);

int main(void) {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid value of n");
        return 1;
    }

    int nums[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            puts("Error: Invalid value of array element");
            return 1;
        }
    }

    int result = find_majority_element_boyer_moore(nums, n);
    printf("%d\n", result);

    return 0;
}

/*
* Method 1: Brute-Force (Nested Loops) Approach
* Time Complexity: O(n^2) - Uses nested loops to count frequencies.
* Space Complexity: O(n) - Uses a secondary tracking array to skip duplicates.
*/
int find_majority_element_brute_force(int nums[], int n) {
    int majority = n / 2;

    int visited[n];
    for (int i = 0; i < n ; i++) {
        visited[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
                visited[j] = 1;
            }
        }  

        if (count > majority) {
            return nums[i];
        }
    }

    return -1;
}

/*
* Method 2: Boyer-Moore Voting Algorithm
* Time Complexity: O(n) - Scans the array only twice in linear time.
* Space Complexity: O(1) - Uses a fixed number of variables, saving memory.
*/
int find_majority_element_boyer_moore(int nums[], int n) {
    int candidate = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int actual_count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actual_count++;
        }
    }

    if (actual_count > (n / 2)) {
        return candidate;
    }

    return -1;
}