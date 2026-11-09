// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} Month;

int main(void) {
    char input_month[10];
    printf("Enter month: ");
    if (scanf("%s", input_month) != 1) {
        puts("\nError: End of File (EOF) detected on standard input");
        return 1;
    } 

    Month current_month;

    if (!strcmp(input_month, "JAN")) {
        current_month = JAN;
    } else if (!strcmp(input_month, "FEB")) {
        current_month = FEB;
    } else if (!strcmp(input_month, "MAR")) {
        current_month = MAR;
    } else if (!strcmp(input_month, "APR")) {
        current_month = APR;
    } else if (!strcmp(input_month, "MAY")) {
        current_month = MAY;
    } else if (!strcmp(input_month, "JUN")) {
        current_month = JUN;
    } else if (!strcmp(input_month, "JUL")) {
        current_month = JUL;
    } else if (!strcmp(input_month, "AUG")) {
        current_month = AUG;
    } else if (!strcmp(input_month, "SEP")) {
        current_month = SEP; 
    } else if (!strcmp(input_month, "OCT")) {
        current_month = OCT;
    } else if (!strcmp(input_month, "NOV")) {
        current_month = NOV;
    } else if (!strcmp(input_month, "DEC")) {
        current_month = DEC;
    } else {
        puts("Error: Invalid month");
        puts("Usage: Write only first three letters of month with capital letters");
        return 1;
    }

    switch (current_month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            puts("31 days");
            break;
        case FEB: 
            puts("28 or 29 days");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            puts("30 days");            
    }
    
    return 0;
}