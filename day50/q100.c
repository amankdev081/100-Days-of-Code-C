// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        size_t len = strcspn(str, "\n");

        if (len == 0) {
            puts("Error: No input provided");
            return 1;
        } else if (str[len] == '\n') {
            str[len] = '\0';
        } else if (len == (sizeof(str) - 1)) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        }
        else {
            putchar('\n');
            clearerr(stdin);
        }
    } else {
        puts("\nError: Unexpected End-Of-File (EOF) or read failure.");
        return 1;
    }

    int len = 0; 
    while (str[len]) {
        ++len;
    }

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            int k;
            for (k = i; k <= j; k++) {
                putchar(str[k]);
            }
            if (i != (len - 1)) {
                putchar(',');
            }       
        }    
    }
    putchar('\n');
    
    return 0;
}