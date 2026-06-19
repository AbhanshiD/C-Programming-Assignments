/*
   MENU DRIVEN PROGRAM FOR BASIC ARITHMETIC OPERATIONS

   The program performs:
   1. Addition
   2. Subtraction
   3. Multiplication
   4. Division
*/

#include <stdio.h>

int main()
{
    int choice;          // Stores user's menu choice
    float a, b;          // Stores two numbers
    float result;        // Stores result of operation

    // Displaying menu
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Taking user choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Performing operation using switch case
    switch(choice)
    {
        case 1:
            result = a + b;
            printf("Addition = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %.2f", result);
            break;

        case 4:
            // Checking division by zero
            if(b != 0)
            {
                result = a / b;
                printf("Division = %.2f", result);
            }
            else
            {
                printf("Division by zero not possible");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;  
}
