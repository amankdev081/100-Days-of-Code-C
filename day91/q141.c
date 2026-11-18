// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    int roll_no;
    int marks;
} Student;

int main(void) {
    Student student;

    printf("Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Roll: ");
    if (scanf("%d", &student.roll_no) != 1) {
        puts("Error: Invalid roll number");
        return 1;
    }

    printf("Marks: ");
    if (scanf("%d", &student.marks) != 1) {
        puts("Error: Invalid marks");
        return 1;
    }

    printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll_no, student.marks);

    return 0;
}