//To accept the number of terms and find the sum of the sine series.

#include <stdio.h>
#include <math.h>  // for power function

int main() {
    int n, i;
    float x, sum = 0, term;
    int sign = 1;  // to handle + and - alternately

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Loop to calculate sine series
    for(i = 1; i <= n; i++) {
        int fact = 1;
        int j;
        int power = 2*i - 1;  // exponent: 1,3,5,7,...

        // Calculate factorial (2i-1)!
        for(j = 1; j <= power; j++) {
            fact = fact * j;
        }

        // Calculate each term: x^(2i-1) / (2i-1)!
        term = pow(x, power) / fact;

        // Add/subtract term based on sign
        sum = sum + sign * term;

        // Change sign for next term
        sign = -sign;
    }

    printf("Sum of sine series = %f", sum);

    return 0;
}