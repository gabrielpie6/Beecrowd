#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    char car;
    float Soma = 0;
    int qtd = 0;
    float M[12][12];

    scanf("%c", &car);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);
    
    for (i = 1; i <= 10; i++)
        for (j = 0; j <= 4.5 - abs(i - (float) 11/2); j++)
        {
            Soma += M[i][j];
            qtd++;
        }
    switch(car)
    {
        case 'S':
            printf("%.1f\n", Soma);
            break;

        case 'M':
            printf("%.1f\n", (float) Soma/qtd);
            break;
    }

    return 0;
}