#include <stdio.h>

 int main() {
   //We will work with a file
   //It's very hard to remember file related syntax
FILE* fp = fopen("Text1.txt","w");
if(fp==NULL){
   printf("Error opening file!\n");
   return 1;
}
printf("File is opened!\n");

char *string = "My name is Shahriar Tanvir Noor. I am from Mymensingh Bangladesh\n studying in University of Frontier Technology, Bangladesh";
fputs(string, fp);
fclose(fp);
return 0;

 }