#include<stdio.h>
int main(){
    int i,j;
    int B[2][3]=
    {
        {1, 3, 5},
        {2, 4, 6}
    };

    for( i=0; i<2; i++)
    {
        for( j=0; j<3; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    
        
    }
    printf("%d\n", B);
    printf("%d\n", *B);
    printf("%d\n", B[0]);
    printf("%d\n",&B[0][0]);
    return 0;
}