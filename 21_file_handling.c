//Write a C program to copy contents of one file to another using file handling.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char ch;

    // Open source file in read mode
    src = fopen("source.txt", "r");
    if (src == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open destination file in write mode 
    dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        fclose(src);
        printf("Error opening destination file.\n");
        return 1;
    }

    // Copy character by character until EOF 
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n"); 

    // Close both files to release memory 
    fclose(src);
    fclose(dest);

    return 0;
}