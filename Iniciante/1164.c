#include <stdio.h>

int main() {
    int i, j, t, num, Soma;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &num);
        Soma = 0;
        for (j = 1; j <= num/2; j++)
            if (num % j == 0)
                Soma += j;
        if (Soma == num)
            printf("%d eh perfeito\n", num);
        else
            printf ("%d nao eh perfeito\n", num);
    }

    return 0;
}