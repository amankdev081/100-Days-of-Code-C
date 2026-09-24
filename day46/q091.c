// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>

void remove_vowels(char *str);

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
       str[strcspn(str, "\n")] = '\0'; 
    } 

    remove_vowels(str);

    puts(str);

    return 0;
}

void remove_vowels(char *str) {
    int write_index = 0;

    for (int read_index = 0; str[read_index] != '\0'; ++read_index) {
        char ch = str[read_index];

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[write_index] = str[read_index];
            ++write_index;
        }
    }
    
    str[write_index] = '\0';
}


