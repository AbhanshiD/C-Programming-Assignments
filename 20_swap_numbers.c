//Write a C function to swap two numbers with and without using pointers.

#include <stdio.h>

// Call by Value: Swaps local copies only 
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference: Swaps original variables via memory addresses 
void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    // Platform: Linux 
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2); // Input: Two integers 

    // Initialize variables for both methods
    int a = num1, b = num2;
    int x = num1, y = num2;

    // Swapping without pointers 
    swapByValue(a, b);
    // Note: a and b remain unchanged in main() 
    printf("After swapping without pointers: a = %d b = %d\n", b, a);

    // Swapping with pointers 
    swapByReference(&x, &y);
    // Note: x and y are modified directly in memory 
    printf("After swapping with pointers: x = %d y = %d\n", x, y);

    return 0; 
}