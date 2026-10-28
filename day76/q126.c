// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the 
// file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

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
        puts("Error: File does not exist!");
        return 1;
    }
    puts("File opened successfully.");

    char buffer[512];
    while(fgets(buffer, sizeof(buffer), fptr)) {
        fputs(buffer, stdout);
    }

    fclose(fptr);

    return 0;
}