// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

typedef struct {
    enum Gender {
        MALE,
        FEMALE,
        OTHER
    } gender;
} Person;

int main(void) {
    char input_gender[7];
    printf("Gender=");
    if (scanf("%6s", input_gender) == EOF) {
        puts("\nError: End of File (EOF) detected on standard input");
        return 1;
    };

    Person person;

    if (!strcmp(input_gender, "MALE")) {
        person.gender = MALE;
    } else if (!strcmp(input_gender, "FEMALE")) {
        person.gender = FEMALE;
    } else if (!strcmp(input_gender, "OTHER")) {
        person.gender = OTHER;
    } else {
        puts("Error: Invalid gender");
        puts("Usage: Valid options include MALE, FEMALE and OTHER");
        return 1;
    }

    switch (person.gender) {
        case MALE: 
            puts("Male");
            break;
        case FEMALE: 
            puts("Female");
            break;
        case OTHER: 
            puts("Other");
            break;                    
    }
    
    return 0;
}