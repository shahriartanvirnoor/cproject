#include<stdio.h>
#include<stdlib.h>
int power(int base, int n) {
    if(n<0){
        printf("Power can't be negative");
        exit(999);
    }
    if(n==0){
        return 1;
    }
    return power(base, n-1) * base;
}

int main() {
    int base, n;
    printf("Enter base and n: ");
    scanf("%d %d", &base, &n);
    int result = power(base, n);
    printf("Result %d^%d = %d", base, n, result);

}