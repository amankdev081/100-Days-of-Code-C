// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    int roll;
    int marks;
} Student;

int main(void) {
    Student student[5];

    for (int i = 0; i < 5; i++) {
        printf("For student %d:\n", i + 1);

        printf("Name: ");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("Roll: ");
        if (scanf("%d", &student[i].roll) != 1) {
            puts("Error: Invalid roll number");
            return 1;
        }

        printf("Marks: ");
        if (scanf("%d", &student[i].marks) != 1) {
            puts("Error: Invalid marks");
            return 1;
        }
        getchar();
    }

    puts("Roll | Name         | Marks");
    puts("---------------------------");
    for (int i = 0; i < 5; i++) {
        printf("%4d | %-12s | %4d\n", student[i].roll, student[i].name, student[i].marks);
    }

    return 0;
}