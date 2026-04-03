#include<stdio.h>
int add(int a, int b);//ফাংশন ডিক্লেয়ার করা হয়েছে।
int main()
{
    int a, b;
printf("Enter a: ");
scanf("%d", &a);
printf("Enter b: ");
scanf("%d", &b);
printf("the sum is %d\n", add(a, b));//ফাংশন কল ও তার ভ্যালু একেবারে প্রিন্ট করা হচ্ছে।
printf("%p\n", add);//এইখানে মূলত ফাংশনের এড্রেস প্রিন্ট করা হচ্ছে।



    return 0;
}
int add(int a, int b)//ফাংশন ইনিশিয়ালাইজ করা হয়েছে।
{
    return a + b;// কাজ করার পর ফাংশন রিটার্ন করছে

}