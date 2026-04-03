#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;//this is the place where we will put our data in the list
    struct node* next;//এইটা ব্যবহার করে আমরা লোকেশন গুলা স্টোর করবো। পরবর্তী যায়গাটা এইখানেই হবে।
};
int main()
{
    struct node* head= NULL;//এইটা হবে লিস্টের মাথা যার মাধ্যমে আমরা লিস্টে প্রবেশ করবো
    struct node* n1= (struct node*) malloc(sizeof(struct node));//ডাইনামিক্যালি মেমোরি এলুকেশন করলাম যাতে করে পয়েন্টার দিয়ে লিনকড লিস্ট বানাতে পারি। এখানে স্পষ্ট করে বলে দিসি কি ধরনের জায়গা লাগবে আমার। আর কতটুকু জায়গা লাগবে তা হচ্ছে স্ট্রাক নোড এর সমান

    n1->data = 10;// ভ্যালু এসাইন করলাম। কিন্তু একটা জিনিস আমি বুঝলাম না এইখানে -> এইটা কেনো ব্যবহার করলাম।
    n1->next = NULL;// পরবর্তী লোকেশন না থাকার কারণে নাল এসাইন করলাম।
    head = n1;
    struct node* n2= (struct node*) malloc(sizeof(struct node));
    n2 ->data = 20;
    n2 ->next = NULL;
    n1 ->next = n2;
    struct node* n3 = (struct node*)malloc(sizeof(struct node));
    n3 ->data = 30;
    n3 -> next= NULL;
    n2 ->next = n3;//আচ্ছা ডাইনাম্যাকলি মেমোরি এলুকেশন করলে তো মেমোরি খালি করে দিতে হয় কিন্তু এখানে কি করা লাগবে না?
    struct node* temp;
    temp = head;// temp  এর কাজ কি লোকেশন হোল্ড করা। তাই এইটা পয়েন্টার যেহেতু head ও পয়েন্টার তাই * দিতে হবে না। কেননা * ভ্যালুর জন্য দেওয়া হয়। ও আরেকটা জিনিস মাথায় রাখতে হবে যে  temp er ডাটা টাইপ কিন্তু struct.d
    while(temp != NULL){
        printf("%d ->", temp -> data);// পয়েন্টার দিয়ে স্ট্রাক্ট একসেস করতে হলে -> ব্যবহার করতে হয়। আমরা ডট অপারেটর দিয়েও এটা করতে পারি। বাট সবি শিখতে হবে তো তাই আরকি।
        
        temp = temp ->next;
    }


    return 0;

}