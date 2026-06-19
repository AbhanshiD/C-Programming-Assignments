/*
   PROGRAM TO FIND:
   1. Smallest Common Divisor (other than 1)
   2. Greatest Common Divisor (GCD)

   The program takes two numbers from the user
   and performs the above calculations.
*/

#include <stdio.h>

int main() {

    // Variable declarations
    int num1, num2;          // Numbers entered by the user
    int i;                   // Loop variable
    int min;                 // Stores smaller number
    int found = 0;           // Flag to check if divisor exists
    int a, b, remainder;     // Variables for Euclidean Algorithm (GCD)

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Finding Smallest Common Divisor

    // Determine the smaller of the two numbers
    min = (num1 < num2) ? num1 : num2;

    // Start checking from 2 (since we exclude 1)
    for(i = 2; i <= min; i++) {

        // Check if i divides both numbers
        if(num1 % i == 0 && num2 % i == 0) {
            printf("Smallest Common Divisor: %d\n", i);
            found = 1;      // Mark that divisor is found
            break;          // Stop after first (smallest) match
        }
    }

    // If no common divisor (other than 1) is found
    if(found == 0)
        printf("No common divisor other than 1\n");

    // Finding GCD using Euclidean Algorithm

    // Copy original numbers into temporary variables
    a = num1;
    b = num2;

    // Repeat until remainder becomes 0
    while(b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    // When loop ends, 'a' contains the GCD
    printf("Greatest Common Divisor (GCD): %d\n", a);

    return 0;   
}
