// Q127: Write a program that reads text from input.txt, converts all lowercase 
// letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char file[100];
    printf("Enter file: ");
    fgets(file, sizeof(file), stdin);
    file[strcspn(file, "\n")] = '\0';

    FILE *in_fptr;
    if ((in_fptr = fopen(file, "r")) == NULL) {
        puts("Error: Could not open file");
        return 1;
    }

    FILE *out_fptr;
    if ((out_fptr = fopen("output.txt", "w")) == NULL) {
        puts("Error: Could not create file");
        return 1;
    }
    
    int ch;
    while((ch = fgetc(in_fptr)) != EOF) {
        ch = toupper(ch);
        fputc(ch, out_fptr);
    }
    puts("Conversion complete. Saved to output.txt");

    fclose(in_fptr);
    fclose(out_fptr);

    return 0;
}