// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char file[100];
    printf("Enter file: ");
    fgets(file, sizeof(file), stdin);
    file[strcspn(file, "\n")] = '\0';

    FILE *fptr;
    if ((fptr = fopen(file, "r")) == NULL) {
        puts("Error: Could not open file");
        return 1;
    }

    int ch;
    int vowel_count = 0;
    int cons_count = 0;

    while((ch = fgetc(fptr)) != EOF) {
        if (isalpha(ch)) {
           ch = tolower(ch);

           if (ch == 'a' || ch == 'e' ||
               ch == 'i' || ch == 'o' ||
               ch == 'u') {
                vowel_count++;
            } else {
                cons_count++;
            }
        }
    }
    
    printf("Vowels: %d\nConsonants: %d\n", vowel_count, cons_count);

    fclose(fptr);

    return 0;
}