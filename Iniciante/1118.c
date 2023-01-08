#include <stdio.h>

int main() {
    int contagem;
    int calculo = 1;
    float nota, Soma;

    while (calculo == 1)
    {
        contagem = 0;
        Soma = 0;
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
        
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &calculo);
        while (calculo != 1  && calculo != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &calculo);
        }
    }
    
    return 0;
}