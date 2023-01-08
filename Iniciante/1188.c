#include <stdio.h>

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
    
    for (i = 7; i <= 11; i++)
        for (j = 12-i; j <= i-1; j++)
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