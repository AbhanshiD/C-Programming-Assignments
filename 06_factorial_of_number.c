//Write a C function to compute the factorial of a number with and without recursion.

#include <stdio.h>

// Function to calculate factorial using recursion
int factorial_recursive(int n)
{
    // Base condition: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
        return 1;
    else
        // Recursive call: n * factorial of (n-1)
        return n * factorial_recursive(n - 1);
}

int main()
{
    int n, i;
    long long fact_iterative = 1; // To store factorial using loop

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking if number is negative
    if (n < 0)
    {
        printf("Factorial not defined for negative numbers");
    }
    else
    {
        // Iterative method using loop
        for (i = 1; i <= n; i++)
        {
            fact_iterative = fact_iterative * i; // Multiply numbers from 1 to n
        }

        // Display result using iterative method
        printf("\nFactorial using Iterative method = %lld", fact_iterative);

        // Display result using recursive method
        printf("\nFactorial using Recursive method = %d", factorial_recursive(n));
    }

    return 0; 
}