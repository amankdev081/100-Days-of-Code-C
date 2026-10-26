// Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_title_case(char *str);
void to_title_case_built_in(char *str);

int main(void) {
    char str[1023];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    to_title_case_built_in(str);
    puts(str);

    return 0;
}

/*
 * Converts a string to Title Case in-place manually.
 * Capitalizes the first letter and any letter immediately following a space
 * using ASCII subtraction ('a' - 'A').
 */
void to_title_case(char str[]) {
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 'a' - 'A';
    }

    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            if (str[i + 1] >= 'a' && str[i+ 1] <= 'z')
            str[i + 1] -= 'a' - 'A';
        }
    }    
}

/*
 * Converts a string to Title Case in-place using the standard library.
 * It capitalizes the first character and any character immediately following a space.
 */
void to_title_case_built_in(char *str) {
    str[0] = toupper(str[0]);

    for (int i = 0; str[i]; i++) {
        if(str[i] == ' ') {
            str[i + 1] = toupper(str[i + 1]);
        } 
    }
}