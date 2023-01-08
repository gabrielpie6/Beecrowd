#include <stdio.h>

int main()
{
    int qtd, i, num, amount;
    float products[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    float total = 0;
    scanf("%d", &qtd);
    for (i = 0; i < qtd; i++)
    {
        scanf("%d %d", &num, &amount);
        total += products[num - 1001] * amount;
    }
    printf("%.2f\n", total);

    return 0;
}