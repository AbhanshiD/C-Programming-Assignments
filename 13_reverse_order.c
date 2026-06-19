/*
   PROGRAM TO PRINT DIGITS OF A NUMBER IN REVERSE ORDER

   This program:
   - Accepts an integer from the user
   - Extracts each digit using modulus (%)
   - Prints digits in reverse order
*/

#include <stdio.h>

int main() {

    int number;   // Stores the number entered by user
    int digit;    // Stores extracted digit

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Special case: if number is 0
    if(number == 0) {
        printf("Digits in reverse order: 0");
    }
    else {

        printf("Digits in reverse order: ");
        
        // Loop runs until number becomes 0
        while(number != 0) {

            digit = number % 10;     // Extract last digit
            printf("%d ", digit);    // Print extracted digit

            number = number / 10;    // Remove last digit
        }
    }

    return 0;  
}
