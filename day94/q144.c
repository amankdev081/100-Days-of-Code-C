// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

void print_members(struct Student);

int main(void) {
    struct Student student;

    printf("Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Roll number: ");
    if (scanf("%d", &student.roll) != 1) {
        puts("Error: Invalid roll number");
        return 1;
    }

    printf("Marks: ");
    if (scanf("%d", &student.marks) != 1) {
        puts("Error: Invalid marks");
        return 1;
    }

    print_members(student);

    return 0;
}

void print_members(struct Student student) {
    printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll, student.marks);
}