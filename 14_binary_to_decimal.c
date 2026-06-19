//Write a C program to input a binary number from the user and convert it into a decimal number.

#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;

    // Taking binary number as input
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Loop to convert binary to decimal
    while (binary != 0) {
        rem = binary % 10;              // Get last digit of binary number
        decimal = decimal + (rem * base); // Add corresponding value to decimal
        binary = binary / 10;           // Remove last digit
        base = base * 2;               // Increase base (2^0, 2^1, 2^2...)
    }

    // Display result
    printf("Decimal equivalent = %d", decimal);

    return 0;
}