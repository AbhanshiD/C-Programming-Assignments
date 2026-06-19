/* Write a program in C to perform basic matrix operations such as:

Addition of two matrices
Saddle point of a matrix
Inverse of a matrix
Magic square of a matrix */


// 1. ADDITION OF TWO MATRICES

#include <stdio.h>

int main() {

    int r, c;                 // Number of rows and columns
    int i, j;                 // Loop variables
    int A[10][10];            // First matrix
    int B[10][10];            // Second matrix
    int C[10][10];            // Resultant matrix

    // Taking matrix size input
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input elements of Matrix A
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    // Input elements of Matrix B
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    // Performing matrix addition
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];

    // Displaying resultant matrix
    printf("Resultant Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;   
}





