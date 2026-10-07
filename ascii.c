#include <stdio.h>


int main() {
    FILE *fp = fopen("Text1.txt", "w");
    if(fp==NULL){
        printf("File not found!\n");
        return 1;
    }
    int Id;
    char name[20];
    double balance;
    while(1) {
            printf("Enter your ID[space]name[space]balance[enter]\n");
    int arg = scanf("%d %19s %lf",&Id, name, &balance);
    if(arg!=3) break;
    fprintf(fp,"%6d %19s %9lf\n", Id, name, balance);
    }
    fclose(fp);

    return 0;
}
