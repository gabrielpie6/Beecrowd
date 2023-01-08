#include <stdio.h>

int main() {
    int num, i, Soma;
    scanf("%d", &num);
    while (num != 0)
    {
        Soma = 0;
        if (num % 2 != 0)
            num++;
        for (i = num; i <= 2*(5-1) + num; i = i + 2)
            Soma += i;
        printf("%d\n", Soma);
        scanf("%d", &num);
    }

    return 0;
}