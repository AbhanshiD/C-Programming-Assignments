//Write a C program to accept student details and display their result using an array of structures.

#include <stdio.h>

// Structure to store student details
struct student {
    int roll_no;          // Stores roll number
    char name[50];        // Stores name of student
    float marks[3];       // Array to store marks of 3 subjects
    float total;          // Stores total marks
    float percentage;     // Stores percentage
};

int main() {
    int n, i, j;

    // Taking number of students as input
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Declaring array of structures
    struct student s[n];

    // Input details for each student
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf("%s", s[i].name); // Takes single word name

        s[i].total = 0; // Initialize total to 0

        printf("Enter marks in 3 subjects: ");
        for(j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j]; // Adding marks to total
        }

        // Calculating percentage
        s[i].percentage = s[i].total / 3;
    }

    printf("\nStudent Result:\n");

    // Displaying student details
    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll_no);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].percentage);
    }

    return 0; 
}