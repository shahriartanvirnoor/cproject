#include<stdio.h>
#include<string
int
{
    char name[30];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is %s.\n", name);
    printf("The size of name: %d\n", sizeof(name));
    printf("using strlen() function: %d\n",strlen(name));
    return 1;
    
}