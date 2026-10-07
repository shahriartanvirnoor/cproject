#include <stdio.h>

int calculate_total(int prices[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}

int calculate_discount(int total)
{
    if (total > 1000)
    {
        return 100;
    }

    return 0;
}

int main()
{
    int prices[] = {200, 300, 400, 500};
    int size = 4;

    int total = calculate_total(prices, size);
    int discount = calculate_discount(total);

    int final_price = total - discount;

    printf("Total: %d\n", total);
    printf("Discount: %d\n", discount);
    printf("Final price: %d\n", final_price);

    return 0;
}