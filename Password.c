#include <stdio.h>
#define default "password"
//#include<string>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define MAX 20

bool user_entry(char* user_name);
bool pass_check(char* pass_string);

int main()
{
    char usern[MAX], passw[100];
    printf("Enter user name: ");
    fgets(usern, 20, stdin);
    printf("Enter password: ");
    fgets(passw, 100, stdin);
    if(pass_check(passw))
    {
        printf("-----------------------------------------------------------\n");
        printf("Welcome to console!");


    }
    return 0;
}

bool pass_check(char* pass_string)
     {
         if(pass_string != default)
         {
             printf("Invalid password!");
             pass_check(fgets(pass_string, 100, stdin));
         } else return true;

     }

bool user_entry(char* user_name)
{
    int i=0;
    while(isalpha(user_name[i])){
        i++;
    }
}
