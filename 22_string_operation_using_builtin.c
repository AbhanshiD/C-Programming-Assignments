//Write a menu driven program in C to perform various string operations using in-built functions.

#include <stdio.h>
#include <string.h> 

int main() {
    char s1[100], s2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    printf("\n--- String Operations Menu ---\n");
    printf("1. Length\n2. Copy\n3. Concatenate\n4. Compare\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            // Find length using strlen() 
            printf("Length of first string: %ld\n", strlen(s1));
            break;
        case 2:
            // Copy s2 into s1 using strcpy() 
            strcpy(s1, s2);
            printf("String after copy: %s\n", s1);
            break;
        case 3:
            // Join s2 to end of s1 using strcat() 
            strcat(s1, s2);
            printf("Concatenated string: %s\n", s1);
            break;
        case 4:
            // Compare strings using strcmp() 
            if(strcmp(s1, s2) == 0)
                printf("Strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0; 
}