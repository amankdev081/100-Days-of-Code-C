// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to 
// determine if s and t are valid anagrams, meaning they contain the same characters with the 
// same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int is_anagram(char s[], int len_s, char t[], int len_t);

int main(void) {
    char s[1024];
    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);
    int len_s = strlen(s);
    if (s[len_s - 1] == '\n') {
        s[len_s - 1] = '\0';
        len_s--;
    }

    char t[1024];
    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);
    int len_t = strlen(t);
    if (t[len_t - 1] == '\n') {
        t[len_t - 1] = '\0';
        len_t--;
    }     

    
    if (is_anagram(s, len_s, t, len_t)) {
        puts("Anagram");
    } else {
        puts("Not Anagram");
    }

    return 0;
}

int is_anagram(char s[], int len_s, char t[], int len_t) {
    if (len_s != len_t) {
        return false;
    } 

    int counts[26] = {0};
    for (int i = 0; i < len_s; i++) {
        ++counts[s[i] - 'a'];
        --counts[t[i] - 'a'];
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i]) {
            return false;
        }
    }

    return true;
}