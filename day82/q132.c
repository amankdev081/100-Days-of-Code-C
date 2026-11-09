// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    RED, 
    YELLOW,
    GREEN
} TrafficLight;

int main(void) {
    char light[10];
    printf("Enter light: ");
    if (scanf("%s", light) != 1) {
        puts("Error: Invalid light");
        return 1;
    }

    TrafficLight current_light;

    if (!strcmp(light, "RED")) {
        current_light = RED;
    } else if (!strcmp(light, "YELLOW")) {
        current_light = YELLOW;
    } else if (!strcmp(light, "GREEN")) {
        current_light = GREEN;
    } else {
        puts("Error: Invalid traffic light");
        puts("Available options: RED, YELLOW, GREEN");
        return 1;
    }

    switch (current_light) {
        case RED:
            puts("Stop");
            break;
        case YELLOW: 
            puts("Wait");
            break;
        case GREEN:
            puts("Go");
            break;         
    }

    return 0;
}