// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1024];
    printf("Enter your name: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        size_t len = strcspn(str, "\n");
        if (str[len] == '\n') {
            str[len] = '\0';
        } else if (len == (sizeof(str) - 1)) {
            int c;
            while((c = getchar()) != '\n' && c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        } else {
            putchar('\n');
            clearerr(stdin);
        }

        if (len > 0) {
            int target_index = 0;
            for (int i = 0; ; i++) {
                if (str[i] == ' ' || str[i] == '\0') {
                    if (str[target_index] != ' ' && str[target_index] != '\0') {
                        printf("%c.", str[target_index]);
                    }  
                    target_index = i + 1;  
                }
                if (str[i] == '\0') {
                    break;
                }
            }
            putchar('\n');
        } else {
            puts("Error: No input provided");
        }
    } else {
        puts("\nError: Unexpected End-Of-File (EOF) or read failure.");
    }

    return 0;
}