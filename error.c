#include <stdio.h>

 int main()
 {
    FILE* fp = fopen("nothing.txt", "r");
    if(fp==NULL)
    {
        perror("Error opening the file\n");
        return 1;
    }

    fclose(fp);
    return 0;
 }