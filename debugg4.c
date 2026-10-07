#include <stdio.h>

void increase(int *value)
{
    *value = *value + 10;
}

void reset(int *value)
{
    *value = 0;
}

int main()
{
    int balance = 100;

    increase(&balance);
    increase(&balance);

    reset(&balance);

    increase(&balance);

    printf("Final balance = %d\n", balance);

    return 0;
}