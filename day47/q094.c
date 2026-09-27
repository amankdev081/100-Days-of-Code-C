// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1024];
    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = strcspn(str, "\n");

        if (str[len] == '\n') {
            str[len] = '\0';
        } else {
            int c;
            while (c != getchar() && c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        }
    }
    
    int i = 0, current_len = 0, max_len = 0, max_start_index = 0;
    while (str[i]) { 
        if (str[i] != ' ' && str[i] != '\0') {
            ++current_len;
        } else {
            if (current_len > max_len) {
                max_len = current_len;
                max_start_index = i - current_len;
            }
            current_len = 0;
        }
        ++i;
    }
    if (current_len > max_len) {
        max_len = current_len;
        max_start_index = i - current_len;
    }


    for (int i = max_start_index; str[i] != ' ' && str[i] != '\0'; ++i) {
        putchar(str[i]);
    }
    if (max_len) {
        putchar('\n');
    }    

    return 0;
}