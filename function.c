#include<stdio.h>
#include<string.h>


int main()
{
    char name[20];
    int age;
    printf("Enter a string: ");
    fgets(name, 20, stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You typed: %s\n", name);
    printf("String length: %d\n", strlen(name));
    printf("Your age: %d\n", age);
    return 0;
}