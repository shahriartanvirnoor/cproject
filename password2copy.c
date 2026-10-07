// Source - https://stackoverflow.com/q/71664718
// Posted by Maisie Brooke, modified by community. See post 'Timeline' for change history
// Retrieved 2026-10-02, License - CC BY-SA 4.0

#include <string.h>
#include <stdio.h>

int main() {
    char password[20];
    int i, length;
    int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    char letters[] = { 'a', 'b', 'c', 'c', 'e', 'f', 'g', 'h',
                       'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                       'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
                       'y', 'z' };
    char symbols[] = { '!', '@', '#', '$', '%', '^', '&', '*',
                       '-', '_', '+', '=' };

    printf("Password rules:\n"
           " --------------------- \n"
           " must follow the format ee$L1LL$L$$eL \n"
           " --------------------- \n"
           " Please enter your current password:");
    fgets(password, 20, stdin);
    printf("%s\n", password);

    length = strlen(password);

    if (length == 13) {
        printf("Password ok 1\n");
        for (int i = 0; i < strlen(letters); i++) {
            if ((password[0] == letters[i]) && (password[1] == letters[i+1])) {
                printf("Password ok 2\n");
                i++;
            } else {
                printf("Digits 1 or 2 do not fit the correct format\n");
            }


            if (password[2] == symbols[i]) {
                printf("Password ok 3");
            } else {
                printf("Digit 3 does not fit the correct format\n");
            }

            if (password[3]==symbols[i]) {
                printf("Password ok 4\n");
            } else {
                printf("Digit 3 does not fit the correct format\n");
            }
        }
    } else if (length != 13) {
        printf("\nPassword must be 13 digits long\n");
    }
}

