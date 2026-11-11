// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    ADMIN,
    USER,
    GUEST
} Role;

int main(void) {
    char input_role[6];
    printf("Enter role: ");
    if (scanf("%5s", input_role) != 1) {
        puts("\nError: End of File (EOF) detected on standard input");
        return 1;
    }

    Role current_role;

    if (!strcmp(input_role, "ADMIN")) {
        current_role = ADMIN;
    } else if (!strcmp(input_role, "USER")) {
        current_role = USER;
    } else if (!strcmp(input_role, "GUEST")) {
        current_role = GUEST;
    } else {
        puts("Error: Invalid role");
        puts("Usage: Valid role include ADMIN, USER AND GUEST");
        return 1;
    }

    switch(current_role) {
        case ADMIN: 
            puts("Welcome Admin!");
            break;
        case USER: 
            puts("Welcome User!");
            break;
        case GUEST:
            puts("Welcome Guest!");        
    }

    return 0;
}