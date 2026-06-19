/*
   PROGRAM TO GENERATE MULTIPLICATION TABLE OF A GIVEN NUMBER

   The program:
   - Accepts a number from the user
   - Uses a for loop to print its table from 1 to 10
*/

#include <stdio.h>

int main()
{
    int n;   // Stores the number entered by user
    int i;   // Loop variable

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to generate multiplication table from 1 to 10
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;  
}
