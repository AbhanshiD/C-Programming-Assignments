/*Create Structure EMPLOYEE for storing details (Name, Designation, gender, Date of Joining and Salary). Define function members to compute 
a) total number of employees in an organization 
b) count of male and female employee 
c) Employee with salary more than 10,000 
d) Employee with designation “Asst Manager”*/

#include <stdio.h>
#include <string.h>

// Here I am creating a structure named EMPLOYEE
// This structure will store all details of an employee
struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];   // date of joining
    float salary;
};

int main() {
    int n, i;

    // Asking user how many employees are there
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Creating array of structures to store multiple employees
    struct EMPLOYEE emp[n];

    // Taking input for each employee
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender: ");
        scanf("%s", emp[i].gender);

        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Variables to count male and female employees
    int male = 0, female = 0;

    // Counting male and female employees
    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].gender, "Male") == 0) {
            male++;
        }
        else if(strcmp(emp[i].gender, "Female") == 0) {
            female++;
        }
    }

    // Displaying total employees
    printf("\nTotal number of employees = %d\n", n);

    // Displaying male and female count
    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);

    // Finding employees with salary > 10000
    printf("Employees with salary more than 10000: ");
    for(i = 0; i < n; i++) {
        if(emp[i].salary > 10000) {
            printf("%s ", emp[i].name);
        }
    }

    // Finding employees with designation "AsstManager"
    printf("\nEmployees with designation AsstManager: ");
    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "AsstManager") == 0) {
            printf("%s ", emp[i].name);
        }
    }

    return 0;
}