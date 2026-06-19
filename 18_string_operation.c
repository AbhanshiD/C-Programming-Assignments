/*Write a C program that accepts a string from the user and performs the following string operations: 
i) Calculate length of string 
ii) String reversal 
iii) Equality check of two strings 
iv) Check palindrome 
v) Check substring. */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int i, length = 0, flag = 0;

    // Taking first string input from user
    printf("Enter a string: ");
    scanf("%s", str1);

    // Taking second string for comparison
    printf("Enter another string for equality check: ");
    scanf("%s", str2);

    // Calculating length of string manually
    // I am looping until I reach the null character '\0'
    for(i = 0; str1[i] != '\0'; i++) {
        length++;
    }

    printf("Length of string = %d\n", length);

    // Reversing the string
    // I am copying characters from end to start
    for(i = 0; i < length; i++) {
        rev[i] = str1[length - i - 1];
    }
    rev[i] = '\0';  // Adding null character at end

    printf("Reversed string = %s\n", rev);

    // Checking palindrome
    // If original and reversed string are same, it's palindrome
    if(strcmp(str1, rev) == 0) {
        printf("The string is a Palindrome\n");
    } else {
        printf("The string is not a Palindrome\n");
    }

    // Checking equality of two strings
    // strcmp returns 0 if both strings are equal
    if(strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // Checking substring
    // strstr returns pointer if substring is found
    if(strstr(str1, str2) != NULL) {
        printf("Substring found in main string\n");
    } else {
        printf("Substring not found\n");
    }

    return 0;
}