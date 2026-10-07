#include <stdio.h>

void increase(int *value)
{
    *value = *value + 10;
}

int main()
{
    int balance = 100;

    increase(&balance);
    increase(&balance);
    increase(&balance);
    increase(&balance);

    printf("Final balance = %d\n", balance);

    return 0;
}