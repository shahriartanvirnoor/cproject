#include<stdio.h>
int dhara(long int n);
int main()
{
    printf("Enter n: ");
    int n;
    scanf("%d", &n);
    long int result = dhara(n);
    printf("The result of dhara : %d\n", result);
    return 0;
}
int dhara( long int n)
{
    long int result = (n* (n+1))/2;
    return result;
}
