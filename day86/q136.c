// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    ADD,
    SUBSTRACT,
    MULTIPLY
} Operation;

int main(void) {
    char input_operation[10];
    printf("Enter operation: ");
    if (scanf("%9s", input_operation) != 1) {
        puts("\nError: End of File (EOF) detected on standard input");
        return 1;
    }

    Operation current_operation;

    if (!strcmp(input_operation, "ADD")) {
        current_operation = ADD;
    } else if (!strcmp(input_operation, "SUBSTRACT")) {
        current_operation = SUBSTRACT;
    } else if (!strcmp(input_operation, "MULTIPLY")) {
        current_operation = MULTIPLY;
    } else {
        puts("Error: Invalid operation");
        puts("Usage: Valid operation include ADD, SUBSTRACT, MULTIPLY");
        return 1;
    }

    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        puts("Error: Invalid input");
        return 1;
    }

    switch(current_operation) {
        case ADD: 
            printf("%d\n", a + b);
            break;
        case SUBSTRACT: 
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;            
    }

    return 0;
}