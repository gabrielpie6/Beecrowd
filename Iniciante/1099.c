#include <stdio.h>

int main() {
    int n, x, y, aux, Soma;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        Soma = 0;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            aux = x;
            x = y;
            y = aux;
        }
        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
                Soma += j;
        }
        printf("%d\n", Soma);
    }

    return 0;
}