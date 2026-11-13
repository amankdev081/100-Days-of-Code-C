// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} Color;

int main(void) {
    const char *colors[] = {
        "RED",
        "YELLOW",
        "GREEN"
    };

    for (Color i = RED; i <= GREEN; ++i) {
        printf("%s=%d\n", colors[i], i);
    }

    return 0;
}
