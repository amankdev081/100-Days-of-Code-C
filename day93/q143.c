// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main(void) {
    Student topper_student;
    
    for (int i = 1; i <= 3; i++) {
        Student current_student;

        printf("For student %d:\n", i);

        printf("Name: ");
        fgets(current_student.name, sizeof(current_student.name), stdin);
        current_student.name[strcspn(current_student.name, "\n")] = '\0';

        printf("Roll: ");
        if (scanf("%d", &current_student.roll) != 1) {
            puts("Error: Invalid roll number");
            return 1;
        }

        printf("Marks: ");
        if (scanf("%d", &current_student.marks) != 1) {
            puts("Error: Invalid marks");
            return 1;
        }
        getchar();

        if (i == 1 || current_student.marks > topper_student.marks) {
            topper_student = current_student;
        }
    }
    
    printf("Topper: %s (Marks: %d)\n", topper_student.name, topper_student.marks);

    return 0;
}