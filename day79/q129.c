// Q129: A file numbers.txt contains a list of integers separated by spaces. 
// Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main(void) {
    FILE *fptr;
    if ((fptr = fopen("numbers.txt", "r")) == NULL) {
        puts("Error: Could not open file");
        return 1;
    }

    int num;
    int count = 0;
    int sum = 0;

    while (fscanf(fptr, "%d", &num) == 1) {
            ++count;
            sum += num;
    }

    if (count > 0) {
        printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / count);
    } else {
        puts("File is empty or contain no valid integers.");
    }
    

    fclose(fptr);

    return 0;
}