#include <stdio.h>

int main()
{
    int n, saldo, i, valor, menor;
    scanf("%d %d", &n, &saldo);
    menor = saldo;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &valor);
        saldo += valor;
        if (saldo < menor)
            menor = saldo;
    }
    printf("%d\n", menor);

    return 0;
}