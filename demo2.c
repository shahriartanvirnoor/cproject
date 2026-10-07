#include <stdio.h>

int main() {
   unsigned int ID;
   char name[30];
   double balance;
   
   FILE* fp = fopen("Text1.bin", "wb");
   if(fp == NULL) {
      printf("Error opening the file!\n");
   } else {
      printf("Enter ID, Name, and Balance (Ctrl+D or Ctrl+Z to stop):\n");
      
      // Better loop control: loop while scanf successfully reads 3 items
      while(scanf("%u %29s %lf", &ID, name, &balance) == 3) {
         
         // Write the raw blocks of memory to the file
         fwrite(&ID, sizeof(unsigned int), 1, fp);
         fwrite(name, sizeof(char), 30, fp); // Writes all 30 bytes of the buffer
         fwrite(&balance, sizeof(double), 1, fp);
         
      }
      
      fclose(fp);
      printf("File has been closed!\n");
   }
   return 0;
}