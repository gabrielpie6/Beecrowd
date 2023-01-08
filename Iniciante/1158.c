#include <stdio.h>

int main() {
    int i, j, n, x, y, Soma;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        Soma = 0;
        if (x % 2 == 0)
            x++;
        for (j = x; j <= 2*(y-1) + x; j = j + 2)
            Soma += j;
        printf("%d\n", Soma);
    }

    return 0;
}