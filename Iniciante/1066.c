#include <stdio.h>

int main() {
    int i, valor;
    int par = 0;
    int impar = 0;
    int positivo = 0;
    int negativo = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &valor);
        if (valor % 2 == 0)
            par++;
        else
            impar++;
        if (valor > 0)
            positivo++;
        if (valor < 0)
            negativo++;
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}