// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1024];
    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        size_t len = strcspn(str, "\n");
        if (str[len] == '\n') {
            str[len] = '\0';
        } else if ((len == sizeof(str) - 1)) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        } else {
            clearerr(stdin);
            putchar('\n');
        }

        int start = 0;
        for (int i = 0; ; i++) {
            if (str[i] == ' ' || str[i] == '\0') {
                int end = i - 1;
                while (start < end) {
                    char temp = str[start];
                    str[start] = str[end];
                    str[end] = temp;
                    start++;
                    end--;
                }
                start = i + 1;

                if (str[i] == '\0') {
                    break;
                }
            }
        }

        puts(str);
    } else {
        puts("\nError: Unexpected End-Of-File (EOF) or read failure.");
    }

    return 0;
}