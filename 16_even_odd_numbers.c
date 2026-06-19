//To accept a list of N integers and partition the list into two sublists containing even and odd numbers.

#include <stdio.h>

int main() {
    int n, i;

    // Taking number of elements from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    // Taking array elements as input
    printf("Enter integers: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display even numbers
    printf("Even numbers are: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) { // Check if number is divisible by 2
            printf("%d ", arr[i]);
        }
    }

    // Display odd numbers
    printf("\nOdd numbers are: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) { // Check if number is not divisible by 2
            printf("%d ", arr[i]);
        }
    }

    return 0; // End of program
}