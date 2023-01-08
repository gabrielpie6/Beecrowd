#include <stdio.h>
 
int main() {
    int valor, i, qtd;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &valor);

    printf("%d\n", valor);
    for (i = 0; i < 7; i++)
    {
        qtd = (int) valor/notas[i];
        valor = valor - notas[i] * qtd;
        printf("%d nota(s) de R$ %d,00\n", qtd, notas[i]);
    }

    return 0;
}