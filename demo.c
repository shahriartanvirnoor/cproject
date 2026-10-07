#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(void) {
   int x = rand();
   int n;
   printf("Guess the number: ");
   scanf("%d", &n);
   if(x==n) printf("Your guess is correct\n");
   else {
      printf("Wrong answer!\n");
      printf("%d is the random number\n");
      if(x>n) printf("Too high\n");
      else printf("Too low\n");
   }
   return 0;
}
/* 
   *In the case of generating random number
   *I have to learn how to generate number in a given range.
   *Otherwise, it will be useless.
   */