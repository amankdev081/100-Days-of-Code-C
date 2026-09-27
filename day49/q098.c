// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

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
            while ((c = getchar()) != '\n' && c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        } else {
            putchar('\n');
            clearerr(stdin);
        }
       
        if (len > 0) {
            for (int i = len - 1; i >= 0 && str[i] == ' '; i--) {
                str[i] = '\0';   
            }

            int target_index = 0;
            for (int i = 0; ; i++) {
                if (str[i] == ' ') {
                    if (str[target_index] != ' ') {
                        printf("%c.", str[target_index]);
                    }
                    target_index = i + 1;
                } else if (str[i] == '\0') {
                    putchar(' ');
                    for (int j = target_index; j < i; ++j) {
                        putchar(str[j]);    
                    }
                    putchar('\n');
                    break;
                }
            }
        } else {
            puts("Error: No input provided");
        }
    } else {
        puts("\nError: Unexpected End-Of-file (EOF) or read failure.");
    }

    return 0;
}
 
