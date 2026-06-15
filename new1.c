#include <stdio.h>
void update(int *a, int *b);
int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int *pa = &a;
    int *pb = &b;
    printf("a = %d, b = %d\n", a, b);
    update(pa, pb);
    printf("Value of those variable after using update function.\n");
    printf("_______________________________________________________________________________\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
void update(int *a, int *b){
    *a = *a + *b;
    if((*a - *b -*b)>0)//we need modulas value. so we have used if else statement
    *b = *a - *b - *b;
    else *b = *b + *b - *a;
}
