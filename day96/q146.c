// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[30];
    int id;
    Date joining_date;
} Employee;

int main(void) {
    Employee employee;

    printf("Enter name: ");
    fgets(employee.name, sizeof(employee.name), stdin);
    employee.name[strcspn(employee.name, "\n")] = '\0';

    printf("Enter id: ");
    if (scanf("%d", &employee.id) != 1) {
        puts("Error: Invalid id");
        return 1;
    }

    printf("Enter joining date: ");
    if (scanf("%d %d %d", &employee.joining_date.day, &employee.joining_date.month, &employee.joining_date.year) != 3) {
        puts("Error: Invalid date");
        puts("Usage: DD MM YYYY (e.g, 12 05 2020)");
        return 1;
    }

    printf("Name: %s | ID: %d | ", employee.name, employee.id);
    printf("Joining Date: %d/%d/%d\n",  employee.joining_date.day, employee.joining_date.month, employee.joining_date.year);

    return 0;
}