// Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/

#include <stdio.h>

enum Week {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(void) {
    const char *day_names[] = {
        "SUNDAY", 
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THRUSDAY",
        "FRIDAY", 
        "SATURDAY"
    };

    for (enum Week day = SUNDAY; day <= SATURDAY; day++) {
        printf("%s = %d\n", day_names[day], day);
    }

    return 0;
}