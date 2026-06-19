/*
   NUMBER OPERATIONS PROGRAM

   This program performs the following operations on a number:
   - Square Root
   - Square
   - Cube
   - Prime Check
   - Factorial
   - Prime Factors
*/

#include <stdio.h>
#include <math.h>   // Required for sqrt() function

int main() {

    // Variable declarations
    int choice;            // Stores user’s selected operation
    int number;            // Stores the number entered by user
    int i;                 // Loop variable
    int fact = 1;          // Used for factorial calculation
    int flag = 0;          // Used for prime checking
    double result;         // Used for square root (since it may be decimal)

    // Displaying menu
    printf("\nNUMBER OPERATIONS PROGRAM");
    printf("\n1. Square Root");
    printf("\n2. Square");
    printf("\n3. Cube");
    printf("\n4. Prime Check");
    printf("\n5. Factorial");
    printf("\n6. Prime Factors");
    printf("\n7. Exit");

    // Taking input number
    printf("\nEnter a number: ");
    scanf("%d", &number);

    // Taking user's choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Switch case to perform selected operation
    switch(choice) {

        case 1:
            // Square Root calculation
            if(number < 0)
                printf("Square root not possible for negative number");
            else {
                result = sqrt(number);   // Using math library function
                printf("Square Root = %.2lf", result);
            }
            break;

        case 2:
            // Square calculation
            printf("Square = %d", number * number);
            break;

        case 3:
            // Cube calculation
            printf("Cube = %d", number * number * number);
            break;

        case 4:
            // Prime number check
            if(number <= 1)
                printf("Not Prime");
            else {
                for(i = 2; i <= number / 2; i++) {
                    if(number % i == 0) {
                        flag = 1;  // Divisor found
                        break;
                    }
                }

                if(flag == 0)
                    printf("Prime Number");
                else
                    printf("Not Prime");
            }
            break;

        case 5:
            // Factorial calculation
            if(number < 0)
                printf("Factorial not defined for negative numbers");
            else {
                fact = 1;  // Reset factorial
                for(i = 1; i <= number; i++)
                    fact = fact * i;

                printf("Factorial = %d", fact);
            }
            break;

        case 6:
            // Prime factorization
            printf("Prime Factors: ");
            for(i = 2; i <= number; i++) {
                while(number % i == 0) {
                    printf("%d ", i);
                    number = number / i;   // Reduce number
                }
            }
            break;

        case 7:
            printf("Exiting...");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;   
}
