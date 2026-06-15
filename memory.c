#include<stdio.h>
int main()
{
    int std[40];// 1 integr = 4 bytes. so 40 = 40*4 = 160 bytes
    printf("This will demonstrate memory allocaion in C programming language.\n");
    printf("Sizeo of array : %d\n", sizeof(std));
    return 0;
}
/* dynamic memory does not belongs to any variable. it can only be access through pointer. So to learn dynamic 
memory allocation you need to have a good command over pointer.
There is a question for you. And that is what is the difference between multidimentional
array and pointer array? I think this is a very important topic you  must know. and in today's midterm exam
it has present. so you need to give extra effort in this topic.

malloc function has one parameter and that is the size of how much space do you need to allocate for your need.
Therefore calloc function has 2 parameter on is size of one data type and other is how many data you need to allocate
for your need.
there is a basic difference between malloc and calloc. malloc set initial value as unpredictable whereas calloc sets
all values to zero. Thus using calloc is less efficient.*/