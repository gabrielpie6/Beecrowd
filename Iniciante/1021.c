#include <stdio.h>
#include <math.h>
 
int main() {
    int i, qtd;
    float valor;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    scanf("%f", &valor);

    printf("NOTAS:\n");
    for (i = 0; i < 6; i++)
    {
        qtd = (int) valor/notas[i];
        valor = valor - notas[i] * qtd;
        printf("%d nota(s) de R$ %d.00\n", qtd, notas[i]);
    }
    
    valor = round(valor * 100);
    printf("MOEDAS:\n");
    for (i = 0; i < 6; i++)
    {
        qtd = (int) valor/moedas[i];
        valor = valor - moedas[i] * qtd;
        printf("%d moeda(s) de R$ %.2f\n", qtd, (float) moedas[i]/100);
    }

    return 0;
}