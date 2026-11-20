// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

struct Student topper_student(const struct Student students[], int n);

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Error: Invalid n");
        return 1;
    }
    getchar();

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("For student %d:\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        
        printf("Roll number: ");
        if (scanf("%d", &students[i].roll) != 1) {
            puts("Error: Invalid roll number");
            return 1;
        }

        printf("Marks: ");
        if (scanf("%d", &students[i].marks) != 1) {
            puts("Error: Invalid marks");
            return 1;
        }
        getchar();
    }

    struct Student topper = topper_student(students, n);
    
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll, topper.marks);

    return 0;
} 

struct Student topper_student(const struct Student students[], int n) {
    int top_idx = 0;

    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top_idx].marks) {
            top_idx = i;
        }
    }

    return students[top_idx];
}