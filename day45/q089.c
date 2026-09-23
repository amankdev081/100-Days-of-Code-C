// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (scanf("%1023[^\n]", str) != 1) {
        puts("Error: No input provided");
        return 1;
    }

    getchar();

    char ch;
    printf("Enter a character to get its frequency: ");
    scanf("%c", &ch);
    if (ch == '\n') {
      puts("Error: No input provided");
        return 1;
    }

    int frequency = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ch) {
            ++frequency;
        }
    }
    printf("Frequency of %c: %d\n", ch, frequency);

    return 0;
}