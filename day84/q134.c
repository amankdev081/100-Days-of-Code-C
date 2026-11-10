// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

int main(void) {
    char input_status[8];
    printf("Enter status: ");
    scanf("%7s", input_status);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    Status current_status;
    
    if (!strcmp(input_status, "SUCCESS")) {
        current_status = SUCCESS;
    } else if (!strcmp(input_status, "FAILURE")) {
        current_status = FAILURE;
    } else if (!strcmp(input_status, "TIMEOUT")) {
        current_status = TIMEOUT;
    } else {
        puts("Error: Invalid input");
        puts("Usage: VAlid options include SUCCESS, FAILURE and TIMEOUT");
        return 1;
    }

    switch (current_status) {
        case SUCCESS: 
            puts("Operation succeeded");
            break;
        case FAILURE: 
            puts("Operation failed");  
            break;
        case TIMEOUT:
            puts("Operation timed out");
            break;      
    }

    return 0;
}