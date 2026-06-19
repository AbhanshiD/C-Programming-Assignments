/* 
   SIMPLE CALCULATOR PROGRAM
   This program performs:
   - Basic arithmetic operations ( +, -, *, / )
   - Power calculation (x^y)
   - Factorial (x!)
*/

#include <stdio.h>

int main() {
    
    // Variable declarations
    int choice;                  // To store user's menu choice
    float num1, num2, result;    // For arithmetic calculations
    int i, exponent, fact = 1;   // For loops and factorial
    float base;                  // Base value for power calculation

    // Displaying calculator menu
    printf("\n SIMPLE CALCULATOR ");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Power (x^y)");
    printf("\n6. Factorial");
    printf("\n7. Exit");

    // Taking user's choice
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // Switch case to perform selected operation
    switch(choice) {

        case 1:
            // Addition of two numbers
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case 2:
            // Subtraction of two numbers
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case 3:
            // Multiplication of two numbers
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case 4:
            // Division with zero-check
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            if(num2 == 0)
                printf("Division by zero not allowed");
            else {
                result = num1 / num2;
                printf("Result = %.2f", result);
            }
            break;

        case 5:
            // Power calculation using loop (x^y)
            printf("Enter base and exponent: ");
            scanf("%f %d", &base, &exponent);

            result = 1;  // Initialize result to 1
            for(i = 1; i <= exponent; i++)
                result = result * base;

            printf("Result = %.2f", result);
            break;

        case 6:
            // Factorial calculation using loop
            printf("Enter a number: ");
            scanf("%d", &i);

            fact = 1;  // Reset factorial value
            for(int j = 1; j <= i; j++)
                fact = fact * j;

            printf("Factorial = %d", fact);
            break;

        case 7:
            printf("Exiting program...");
            break;

        default:
            // Handles invalid input
            printf("Invalid Choice");
    }

    return 0;  
}
