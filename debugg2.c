#include <stdio.h>

void update_value(int *ptr)
{
    *ptr = 100;
}

int main()
{
    int number = 50;
    int *ptr;

    update_value(ptr);

    printf("Number = %d\n", number);

    return 0;
}