/*
   PROGRAM TO CHECK ARMSTRONG NUMBER (3-DIGIT)

   An Armstrong number is a three-digit number
   in which the sum of the cubes of its digits
   is equal to the number itself.

   Example:
   371 = 3^3 + 7^3 + 1^3
*/

#include <stdio.h>

int main()
{
    int n;          // Stores the number entered by user
    int temp;       // Temporary variable to process digits
    int digit;      // Stores extracted digit
    int sum = 0;    // Stores sum of cubes of digits

    // Taking input from user
    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    // Store original number for comparison
    temp = n;

    // Extract digits and calculate cube sum
    while (temp != 0)
    {
        digit = temp % 10;                     // Extract last digit
        sum = sum + (digit * digit * digit);   // Add cube of digit
        temp = temp / 10;                      // Remove last digit
    }

    // Check if sum equals original number
    if (sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);

    return 0;   
}
