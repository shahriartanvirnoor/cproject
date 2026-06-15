#include <stdio.h>
int main()
{
    printf("Enter e: ");
    int x = 1, e, p ;// initialize x to something else it will show you error result. 
    scanf("%d",&e);
    printf("Enter p: ");
    scanf("%d", &p);
    while((e*x)%p!=1){
        x++;
    }
    printf("The x is : %d", x);
    return 0;
}