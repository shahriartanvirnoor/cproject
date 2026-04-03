#include<stdio.h>
int main()
{
    printf("We are going to showcase fibonacci\n");
    int f1, f2, fn, n;
    f1= 1, f2= fn = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
     for(int i=0; i<n; i++)
     {
        fn = f1 + f2;
        f2= f1;
        f1= fn;
        printf("%d ", fn);
     }

     return 0;
}
