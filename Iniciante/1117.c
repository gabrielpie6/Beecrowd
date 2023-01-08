#include <stdio.h>

int main() {
    int contagem = 0;
    float nota, Soma = 0;

    while (contagem < 2)
    {
        scanf("%f", &nota);
        if (0 <= nota && nota <= 10)
        {
            contagem++;
            Soma += nota;
        } else
            printf("nota invalida\n");
    }
    printf("media = %.2f\n", (float) Soma/2);

    return 0;
}