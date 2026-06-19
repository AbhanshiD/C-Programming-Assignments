/* Write a program in C to perform basic matrix operations such as:

Addition of two matrices
Saddle point of a matrix
Inverse of a matrix
Magic square of a matrix */


// 4. MAGIC SQUARE

#include <stdio.h>

int main() {

    int a[10][10];      // Matrix
    int n;              // Order of matrix (n x n)
    int i, j;           // Loop variables
    int sum = 0;        // Stores sum of first row
    int temp;           // Stores sum of other rows

    // Taking order of square matrix
    printf("Enter order: ");
    scanf("%d", &n);

    // Taking matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Calculating sum of first row
    for(j = 0; j < n; j++)
        sum += a[0][j];

    // Checking sum of remaining rows
    for(i = 1; i < n; i++) {
        temp = 0;
        for(j = 0; j < n; j++)
            temp += a[i][j];

        // If any row sum differs, not magic square
        if(temp != sum) {
            printf("Not a Magic Square");
            return 0;
        }
    }

    // If all row sums are equal
    printf("Magic Square");

    return 0;  
}