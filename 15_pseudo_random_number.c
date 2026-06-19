//Write a C program to generate pseudo random numbers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int n, i;

    // Taking input: number of random numbers required
    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    // Seeding the random number generator using current time
    srand(time(0));

    // Display heading
    printf("Pseudo Random Numbers:\n");

    // Loop to generate and print random numbers
    for(i = 0; i < n; i++) 
    {
        printf("%d\n", rand()); // rand() generates random number
    }

    return 0; // End of program
}