#include <stdio.h>

int main() {
    int n, i, qtd, Soma;
    int coelhos = 0;
    int ratos = 0;
    int sapos = 0;
    char tipo;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %c", &qtd, &tipo);
        switch (tipo)
        {
            case 'C':
                coelhos += qtd;
                break;
            case 'R':
                ratos += qtd;
                break;
            case 'S':
                sapos += qtd;
                break;
        }
    }
    Soma = coelhos + ratos + sapos;
    printf("Total: %d cobaias\n", Soma);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n",  (float) (coelhos*100)/Soma);
    printf("Percentual de ratos: %.2f %%\n", (float) (ratos*100)/Soma);
    printf("Percentual de sapos: %.2f %%\n", (float) (sapos*100)/Soma);

    return 0;
}