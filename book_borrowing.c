#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Name: Mathenge Collins mureithi 
reg no:CT100/G/26138/25
Description:program to borrow a book from the library 

*/
int main(void) {
    char title[512];
    FILE *fp = fopen("borrowed_books.txt", "a"); // append mode

    if (!fp) {
        perror("Error opening borrowed_books.txt");
        return 1;
    }

    printf("Enter book title (max 511 chars). To finish press Enter:\n");
    if (fgets(title, sizeof(title), stdin) == NULL) {
        printf("No input received.\n");
        fclose(fp);
        return 0;
    }

    // remove trailing newline if present
    size_t len = strlen(title);
    if (len > 0 && title[len-1] == '\n') title[len-1] = '\0';

    // write title as a new line in file
    if (fprintf(fp, "%s\n", title) < 0) {
        perror("Error writing to file");
        fclose(fp);
        return 1;
    }

    fclose(fp);
    printf("Title saved successfully to borrowed_books.txt\n");
    return 0;
}