#include <stdio.h>
#include <time.h>
void printTime(struct tm* ptr)
{
printf("Time : %d:%d:%d\n", ptr->tm_hour, ptr->tm_min, ptr->tm_sec);
}

int main()
  {
    time_t now = time(NULL);//আদিকাল থেকে এখন পর্যন্ত যত সেকেন্ড অতিবাহিত হয়েছে তা আনলাম
    struct tm* ptr;// টাইমের যে একটা নির্দিষ্ট ফরমেটে থাকে সেই ফরমেটে একটা পয়েন্টার ভ্যারিয়াবল ডাকলাম
    ptr = localtime(&now);//time কে মিনিংফুল করার জন্য লোকালটাইম ফাংশন দ্বারা পয়েন্টারে রাখলাম
    char *s = asctime(ptr);//asctime() function need an argument of a pointer of struct tm that holds the value recieved from localtime()

    printf("Today: %s\n",s);

    printf("--------------------------------------------------------------------\n");
    printTime(ptr);

    return 0;
  }