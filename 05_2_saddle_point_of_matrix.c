/* Write a program in C to perform basic matrix operations such as:

Addition of two matrices
Saddle point of a matrix
Inverse of a matrix
Magic square of a matrix */


// 2. SADDLE POINT OF A MATRIX

#include <stdio.h>

int main() {

    int a[10][10];        // Matrix
    int r, c;             // Rows and columns
    int i, j;             // Loop variables
    int min;              // Minimum element in a row
    int col;              // Column index of minimum element
    int flag = 0;         // To check if saddle point exists

    // Taking matrix size input
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Taking matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Checking each row
    for(i = 0; i < r; i++) {

        // Assume first element of row is minimum
        min = a[i][0];
        col = 0;

        // Find minimum element in the current row
        for(j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;   // Store column index
            }
        }

        // Check if this minimum element is largest in its column
        for(j = 0; j < r; j++) {
            if(a[j][col] > min)
                break;
        }

        // If loop completes fully, saddle point found
        if(j == r) {
            printf("Saddle point: %d\n", min);
            flag = 1;
        }
    }

    // If no saddle point exists
    if(flag == 0)
        printf("No Saddle Point\n");

    return 0;  
}