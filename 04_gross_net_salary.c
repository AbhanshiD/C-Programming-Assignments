/*
   PROGRAM TO CALCULATE GROSS AND NET SALARY

   Given:
   HRA = 10% of Basic Pay
   TA  = 5% of Basic Pay
   Professional Tax = 2% of Gross Salary

   Gross Salary = Basic + HRA + TA
   Net Salary   = Gross Salary - Tax
*/

#include <stdio.h>

int main()
{
    float basic;   // Stores basic pay
    float hra;     // House Rent Allowance
    float ta;      // Travel Allowance
    float gross;   // Gross salary
    float tax;     // Professional tax
    float net;     // Net salary after deduction

    // Taking input from user
    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    // Calculating allowances
    hra = basic * 0.10;   // 10% of basic
    ta  = basic * 0.05;   // 5% of basic

    // Calculating gross salary
    gross = basic + hra + ta;

    // Calculating professional tax (2% of gross)
    tax = gross * 0.02;

    // Calculating net salary
    net = gross - tax;

    // Displaying results
    printf("Gross Salary = %.2f\n", gross);
    printf("Net Salary = %.2f", net);

    return 0;  
}
