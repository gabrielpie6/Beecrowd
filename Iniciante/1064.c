#include <stdio.h>

int main() {
    int i, positivo = 0;
    float valor, Soma, media;
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &valor);
        if (valor > 0)
        {
            positivo++;
            Soma += valor;
        }       
    }
    media = (float) Soma / positivo;
    printf("%d valores positivos\n", positivo);
    printf("%.1f\n", media);

    return 0;
}