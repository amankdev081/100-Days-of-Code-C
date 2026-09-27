// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_anagrams(char str1[], char str2[]);

int main(void) {
    char str1[1024];
    printf("Enter the first string: ");
    if (fgets(str1, sizeof(str1), stdin) != NULL) {
        size_t len = strcspn(str1, "\n");

        if (str1[len] == '\n') {
            str1[len] = '\0';
        } else {
            int c;
            while((c = getchar()) != '\n' && c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        }
    }

    char str2[1024];
    printf("Enter the second string: ");
    if (fgets(str2, sizeof(str2), stdin) != NULL) {
        size_t len = strcspn(str2, "\n");

        if (str2[len] == '\n') {
            str2[len] = '\0';
        } else {
            int c;
            while((c = getchar()) != '\n' && c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        }
    }    

    if (is_anagrams(str1, str2)) {
        puts("Anagrams");
    } else {
        puts("Not anagrams");
    }

    return 0;
}

bool is_anagrams(char str1[], char str2[]) {
    int arr[256] = {0};
    
    for (int i = 0; str1[i]; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 'a' - 'A';
        }
        arr[str1[i]]++;
    }

    for (int i = 0; str2[i]; i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z') {
            str2[i] = str2[i] + 'a' - 'A';
        }        
        arr[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (arr[i] != 0) {
            return false;
        }
    }

    return true;
}

    
