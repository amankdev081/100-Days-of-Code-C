/* Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
* The elements in the sorted array might be repeated. You need to print the first and 
* last occurrence of the target and print the index of first and last 
* occurrence. Print -1, -1 if the target is not present.
*/

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>
#include <stdbool.h>

void linear_search(int nums[], int n, int target);

void binary_search(int nums[], int n, int target);
int find_occurence(int nums[], int n, int target, bool search_first);


int main(void) {
    int n; 
    printf("Enter the length of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid array length");
        return 1;
    }

    int nums[n];
    printf("Enter the elements of sorted array: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        } 
    }

    int target;
    printf("Enter the target element: ");
    if (scanf("%d", &target) != 1) {
        puts("Error: Invalid target element");
        return 1;
    }

    binary_search(nums, n, target);

    return 0;
}

void linear_search(int nums[], int n, int target) {
    int first = -1; 
    int last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
}

void binary_search(int nums[], int n, int target) {
    int first = find_occurence(nums, n, target, true);
    int last = find_occurence(nums, n, target, false);

    printf("%d,%d\n", first, last);
}

int find_occurence(int nums[], int n, int target, bool search_first) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;

            if (search_first) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    } 
    return result;   
}