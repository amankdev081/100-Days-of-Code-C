// Q130: Store multiple student records (name, roll number, marks) into a file 
// using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>
#include <string.h>

typedef struct StudentRecord {
    char name[100];
    int roll;
    int marks;
} Student;

int main(void) {
    FILE *fptr;
    if ((fptr = fopen("info.txt", "w")) == NULL) {
        puts("Error: Could not create / open file");
        return 1;
    }

    int n; 
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) {
        puts("Error: Invalid n");
        return 1;
    }
    getchar();

    Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nFor Student %d\n", i + 1);

        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter roll: ");
        if (scanf("%d", &students[i].roll) != 1) {
            puts("Error: Invalid roll");
            return 1;
        }

        printf("Enter marks: ");
        if (scanf("%d", &students[i].marks) != 1) {
            puts("Error: Invalid marks");
            return 1;
        }  
        getchar();      

        fprintf(fptr, "Name: %-15s | Roll: %5d | Marks: %5d\n", students[i].name, students[i].roll, students[i].marks);        
    }

    fclose(fptr);

    if ((fptr = fopen("info.txt", "r")) == NULL) {
        puts("Error: Could not open file");
        return 1;
    } 

    printf("\n--- Output ---\n");
    for (int i = 0; i < n; i++) {
        fscanf(fptr, "Name: %[^|] | Roll: %d | Marks: %d\n", students[i].name, &students[i].roll, &students[i].marks);

        printf("Name: %-15s| Roll: %5d | Marks: %5d\n", students[i].name, students[i].roll, students[i].marks);
    } 
    
    fclose(fptr);

    return 0;
}    