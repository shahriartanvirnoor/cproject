#include<stdio.h>
#include<math.h>

int main() {
    int a, b, n, eqn;
    printf("Enter a, b and c: ");
    scanf("%d %d %d", &a, &b, &n);
    eqn = a + b;
    for(int i=1; i<n; i++) {
        if(i==1){
            printf("%d ", eqn);
        }
        eqn = eqn + pow(2,i) * b;
        printf("%d ", eqn);
    }
}