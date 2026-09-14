// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (scanf("%1023[^\n]", str) != 1) {
        puts("Error: No input provided");
        return 1;
    }

    int i = 0, vowel_count = 0, consonant_count = 0;
    while (str[i]) {
        switch (str[i]) {
            case 'A': case 'a':
            case 'E': case 'e':
            case 'I': case 'i':
            case 'O': case 'o':
            case 'U': case 'u':
                ++vowel_count;
                break;
            default:
                if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
                    ++consonant_count;
                }    
        }
        ++i;
    }
    printf("Vowels=%d, Consonants=%d\n", vowel_count, consonant_count);

    return 0;
}