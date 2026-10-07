#include<stdio.h>
#include<ctype.h>

int main()
{
    char A;
    printf("Enter a character: ");
     A = getchar();
    if(isalpha(A)) {printf("It is a character.\n");}
    else if(isdigit(A)){ printf("It is a number.\n");}
    else if(iscntrl(A)) printf("It is  a control character\n");
    else if(isspace(A)) {printf("It is a space.\n");}
    else printf("You type a symbol\n");

    return 0;
}