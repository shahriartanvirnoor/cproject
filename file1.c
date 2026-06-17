#include <stdio.h>

int main () {
    // 1. Open the file in read mode ("r")
    FILE* fp = fopen("note.txt", "r");
    char string[100];
    
    // 2. Check if the file exists
    if (fp == NULL) {
        printf("Error opening the file\n");
        return 1; // Exit the program early so it doesn't crash
    }
    
    // 3. Read line-by-line until the end of the file
    // fgets returns NULL when it reaches the end of the file
    while (fgets(string, sizeof(string), fp) != NULL) {
        printf("%s", string); // Print the line we just read
    }

    // 4. Always close the file when done
    fclose(fp);

    return 0;
}