// Q123: Read a text file and count the total number of characters, words, and lines. A word 
// is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>
#include <string.h>

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

    int char_count = 0;
    int word_count = 0;
    int line_count = 0;

    int ch;
    int in_word = 0;

    while ((ch = fgetc(fptr)) != EOF) {
        char_count++;

        if (ch == ' ' || ch == '\n') {
            in_word = 0;
        } else if (!in_word) {
            ++word_count;
            in_word = 1;
        }

        if (ch == '\n') {
            ++line_count;
        }
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", char_count, word_count, line_count);

    return 0;
}