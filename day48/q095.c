// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_rotation(char str1[], char str2[]);

int main(void) {
    char str1[1024];
    printf("Enter a string: ");
    if (fgets(str1, sizeof(str1), stdin) != NULL) {
        size_t len = strcspn(str1, "\n");

        if (str1[len] == '\n') {
            str1[len] = '\0';
        } else {
            int c;
            while ((c = getchar()) != '\n' || c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        }
    }

    char str2[1024];
    printf("Enter another string: ");
    if (fgets(str2, sizeof(str2), stdin) != NULL) {
        size_t len = strcspn(str2, "\n");

        if (str2[len] == '\n') {
            str2[len] = '\0';
        } else {
            int c;
            while ((c = getchar()) != '\n' || c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        }
    }    

    if (is_rotation(str1, str2)) {
        puts("Rotation");
    } else {
        puts("Not rotation");
    }

    return 0;
}

bool is_rotation(char str1[], char str2[]) {
    int len1 = 0;
    while (str1[len1]) {
        ++len1;
    }

    int len2 = 0;
    while (str2[len2]) {
        ++len2;
    }
    
    if (len1 != len2) {
        return false;
    }

    char doubled_str1[(2 * len1) + 1];
    for (int i = 0; i < len1; i++) {
        doubled_str1[i] = str1[i];
        doubled_str1[len1 + i] = str1[i];
    }
    doubled_str1[2 * len1] = '\0';
 
    for (int i = 0; i < len1; i++) {
        int match = 1;

        for (int j = 0; j < len1; j++) {
            if (doubled_str1[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            return true;
        }
    }

    return false;
}