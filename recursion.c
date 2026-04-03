#include<stdio.h>
int sum(int n);
int main()
{
printf("Enter a number where it will end: ");
int num;
scanf("%d",&num);
int result = sum(num);
printf("The sum of all the number is %d.\n",result);
return 0;
}
int sum(int n)
{
    if(n==0)
    return 0;
    else
    {
        return n+sum(n-1);
    }
}
