/*
   PROGRAM TO CHECK WHETHER A GIVEN YEAR IS A LEAP YEAR

   A year is a Leap Year if:
   - It is divisible by 400
   OR
   - It is divisible by 4 but not divisible by 100
*/

#include <stdio.h>

int main()
{
    int year;   // Variable to store the year entered by user

    // Taking input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking leap year condition
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a Leap Year", year);
    }
    else
    {
        printf("%d is not a Leap Year", year);
    }

    return 0; 
}
