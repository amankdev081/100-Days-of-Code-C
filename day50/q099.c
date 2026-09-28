// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int extract_num(const char str[], char delimiter, int *index_ptr);

int main(void) {
    char str[1024];
    printf("Enter the date: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        size_t len = strcspn(str, "\n");

        if (len == 0) {
            puts("Error: No input provided");
            return 1;
        } else if (str[len] == '\n') {
            str[len] = '\0';
        } else if (len == (sizeof(str) - 1)) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            puts("Warning: Input was too long and got truncated to 1023 characters.");
        } else {
            putchar('\n');
            clearerr(stdin);
        }
    } else {
        puts("\nError: Unexpected End-Of-File (EOF) or read failure.");
        return 1;
    }

    int i = 0;
    int day = extract_num(str, '/', &i);
    if (day < 1 || day > 31) {
        puts("Error: Invalid day");
        return 1;
    }
    int month = extract_num(str, '/', &i);
    if (month < 1 || month > 12) {
        puts("Error: Invalid month");
        return 1;
    }
    int year = extract_num(str, '\0', &i);
    if (year < 1) {
        puts("Error: Invalid year");
        return 1;
    }

    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("%d-%s-%d\n", day, months[month - 1], year);

    return 0;
}

int extract_num(const char str[], char delimiter, int *index_ptr) {
    int num = 0;

    while (str[*index_ptr] != delimiter) {
        num = num * 10 + str[*index_ptr] - '0';
        (*index_ptr)++;
    } 
    (*index_ptr)++;

    return num;
}