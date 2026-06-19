/* Write a program in C to perform basic matrix operations such as:

Addition of two matrices
Saddle point of a matrix
Inverse of a matrix
Magic square of a matrix */


// 3. INVERSE OF A MATRIX (2×2)

#include <stdio.h>

int main() {

    float a, b, c, d;   // Matrix elements
    float det;          // Determinant

    // Taking matrix elements as input
    printf("Enter matrix elements (a b c d): ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    // Calculating determinant
    det = a*d - b*c;

    // Checking if inverse exists
    if(det != 0) {

        printf("Inverse Matrix:\n");

        // Printing inverse using formula
        printf("%.2f %.2f\n",  d/det, -b/det);
        printf("%.2f %.2f\n", -c/det,  a/det);
    }
    else {
        printf("Inverse does not exist (Determinant = 0)");
    }

    return 0;   
}