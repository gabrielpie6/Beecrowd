#include <stdio.h>

int main() {
    int contagem, gremio, inter;
    int calculo = 1;

    int qtd = 0;
    int empates = 0;
    int SomaGremio = 0;
    int SomaInter = 0;

    while (calculo == 1)
    {
        scanf("%d %d", &inter, &gremio);
        qtd++;
        if (gremio == inter)
            empates++;
        else
            if (gremio > inter)
                SomaGremio++;
            else
                SomaInter++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &calculo);
        while (calculo != 1  && calculo != 2)
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &calculo);
        }
    }
    printf("%d grenais\n", qtd);
    printf("Inter:%d\n", SomaInter);
    printf("Gremio:%d\n", SomaGremio);
    printf("Empates:%d\n", empates);

    if (SomaGremio == SomaInter)
        printf("Nao houve vencedor\n");
    else
        if (SomaGremio > SomaInter)
            printf("Gremio venceu mais\n");
        else
            printf("Inter venceu mais\n");

    return 0;
}