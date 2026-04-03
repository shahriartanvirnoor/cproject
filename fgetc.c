#include<stdio.h>
#include<string.h>
int main()
{
        FILE* fp;
        fp= fopen("monerkotha.txt","a");//opening file for writting
        if(fp==NULL){//checking if fp is open or not
            printf("File can not open succesfully.\n");
        }
        else{
            printf("File is open\n");//giving message to the console so that user must know that it is ready for writing

         char name[30];//declaring name string
    printf("Enter your name: ");
    fgets(name, sizeof(name),stdin);//it is used for safely take string but there must be avoid new line
    name[strcspn(name,"\n")]= '\0';//এইলাইনে মূলত নিউলাইন এর সমস্যার সমাধান করা হয়েছে।
    for(int i=0; i<strlen(name); i++){//এইখানে একটা সমস্যা আছে আর তা হলো যেই ঘর গুলাতে লিখা হয় নাই সেইখানে নাল দ্বারা পরিপূর্ন হয় যা আউটপুটে দেখা যায়। এই সমস্যার সমাধান করতে হবে। কিন্তু কিভাবে করবো তা আমার মাথায় নেই।
        putc(name[i],fp);
        
    }
    fclose(fp);
}

//strlen  using strlen will help me specify the main length of the array so that it won't gie me nuul to the end where there is no letter


    return 0;
}
//এইখান সমস্যা দেখা যাচ্ছে আউটপুটে কি যেনো আসতেছে কিন্তু তার উৎস আমি খুঁজে পাচ্ছি না।  চ্যাটজিপীটি দিয়ে সমস্যা খুঁজ পাইতে হবে।
//
