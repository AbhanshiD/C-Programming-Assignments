/*
   PROGRAM TO CALCULATE STUDENT RESULT

   The program:
   - Accepts marks of five subjects
   - Checks if student passes (minimum 40 in each subject)
   - Calculates percentage if passed
   - Assigns grade based on percentage
*/

#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;   // Stores marks of five subjects
    int total;               // Stores total marks
    float percentage;        // Stores calculated percentage

    // Taking input from user
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Calculating total marks
    total = m1 + m2 + m3 + m4 + m5;

    // Checking pass condition (minimum 40 in each subject)
    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40)
    {
        // Calculating percentage
        percentage = total / 5.0;

        printf("Total Marks = %d\n", total);
        printf("Percentage = %.2f%%\n", percentage);
        printf("Result: PASS\n");

        // Assigning grade based on percentage
        if (percentage >= 75)
            printf("Grade: Distinction");
        else if (percentage >= 60)
            printf("Grade: First Division");
        else if (percentage >= 50)
            printf("Grade: Second Division");
        else
            printf("Grade: Third Division");
    }
    else
    {
        // If student fails in any subject
        printf("Total Marks = %d\n", total);
        printf("Result: FAIL");
    }

    return 0;   
}
