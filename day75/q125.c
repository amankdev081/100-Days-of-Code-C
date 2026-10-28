// Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
// Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char file[100];
    printf("Enter File: ");
    fgets(file, sizeof(file), stdin);
    file[strcspn(file, "\n")] = '\0';

    FILE *fptr;
    if ((fptr = fopen(file, "a")) == NULL) {
        puts("Error: Could not create or open file");
        return 1;
    }

    char buffer[256];
    printf("Enter new line of text: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    fprintf(fptr, "%s\n", buffer);
    printf("File updated successfully with appended text.\n");

    fclose(fptr);

    return 0;
}