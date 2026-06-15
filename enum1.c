#include <stdio.h>
enum weekDay{
    Sat, Sun, Mon, Tue, Wed, Thu, Fri
};

int main()
{

    enum weekDay day1 = Sat;
    printf("Size of week : %d\n", sizeof(enum weekDay));//the reason behind why it is showing us only 4 is this is indicates an integer type data. And we know an integer is 4 bytes.
    printf("Day %d", day1);


    return 0;

}