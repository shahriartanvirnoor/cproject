#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 printf("Enter a string : ");
 fgets(str, sizeof(str), stdin);
 str[strcspn(str, "\n")]= '\0';
 int length = strlen(str);
 int start = 0;
 int end = length -1;
 bool isPalindrome = true;
 while(start<end){
    if(str[start] != str[end]){
        isPalindrome = false;
        break;
    }
    start++;
    end--;
 }
 if(isPalindrome)
 printf("The text is palindrome\n");
 else
 printf("The text is not a palindrome text.\n");



    return 0;
}