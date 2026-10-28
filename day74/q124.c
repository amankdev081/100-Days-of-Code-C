// Q124: Take two filenames from the user – a source file and a destination file. Copy all the 
// content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char src_file[100];
    printf("Enter source file: ");
    fgets(src_file, sizeof(src_file), stdin);
    src_file[strcspn(src_file, "\n")] = '\0';

    FILE *src_fptr;
    if ((src_fptr = fopen(src_file, "r")) == NULL) {
        puts("Error: Could not open source file");
        return 1;
    }

    char dest_file[100];
    printf("Enter destination file: ");
    fgets(dest_file, sizeof(dest_file), stdin);
    dest_file[strcspn(dest_file, "\n")] = '\0';

    FILE *dest_fptr;
    if ((dest_fptr = fopen(dest_file, "w")) == NULL) {
        puts("Error: Could not create or open file");
        return 1;
    }

    int ch;
    while((ch = fgetc(src_fptr)) != EOF) {
        fputc(ch, dest_fptr);
    }
    printf("File copied successfully to %s\n", dest_file);

    fclose(src_fptr);
    fclose(dest_fptr);

    return 0;
}