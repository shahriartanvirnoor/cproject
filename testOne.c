#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int base, n, res;
    puts("Enter base, n: ");
    scanf("%d %d", &base, &n);
    res = pow(base, n);
    printf("result: %d", res);
}