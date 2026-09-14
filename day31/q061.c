// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int linearsearch(int arr[], int size, int target);
int sentinel_linearsearch(int arr[], int size, int target); 

int main(void) {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid or zero input");
        return 1;
    }

    int data[n];

    printf("Enter the elements of the array: "); 
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &data[i]) != 1) {
            puts("Error: Invalid array element");
            return 1;
        }
    }

    int target; 

    printf("Enter the target: ");
    if (scanf("%d", &target) != 1) {
        puts("Error: Invalid input");
        return 1;
    }
    
    // Calling the optimized search function
    int result_index = sentinel_linearsearch(data, n, target);

    if (result_index != -1) {
        printf("Found at index %d\n", result_index);
    }
    else {
        puts("-1");
    }

    return 0;
}

/*
* Standard Linear Search
* Time complexity: O(n)
* Perform two checks per iteration: bounds check (i < size) and equality check.
*/
int linearsearch(int data[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (data[i] == target) {
            return i;
        }
    }

    return -1;
}

/*
* Optimized Sentinel Linear Search
* Time complexity: O(n), but with fewer CPU opearations per iteration.
* Optimization: By placing the target at the end of the array (the sentinel),
* we eliminate the need to check the array bounds (i < size) inside the loop, 
* effectively cutting the number of comparisons per iteration in half.
*/
int sentinel_linearsearch(int arr[], int size, int target) {
    if (size == 1) {
        return (arr[0] == target) ? 0 : -1;
    }

    int last_element = arr[size -1];
    arr[size - 1] = target;

    int i = 0;
    while (arr[i] != target) {
        ++i;
    }

    arr[size - 1] = last_element;

    if (i < (size -1) || (arr[size - 1] == target)) {
        return i;
    }

    return -1;
}

