// Q121: Write a C program that creates a text file named info.txt in write mode. The program should 
// take the user’s name and age as input, and write them to the file using fprintf(). After 
// writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *file;
    file = fopen("info.txt", "w");

    if (file == NULL) {
        puts("Error: Could not create / open info.txt");
        return 1;
    }

    char name[100];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int age;
    printf("Enter age: ");
    if (scanf("%d", &age) != 1) {
        puts("Error: Invalid age");
        fclose(file);
        return 1;
    }
    

    fprintf(file, "Name: %s, Age: %d\n", name, age);
    puts("File created successfully! Data written to info.txt");

    fclose(file);

    return 0;
}