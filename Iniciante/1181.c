#include <stdio.h>

int main() {
    int i, j;
    int linha;
    char car;
    float Soma = 0;
    float M[12][12];

    scanf("%d %c", &linha, &car);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);
    
    for (i = 0; i < 12; i++)
        Soma += M[linha][i];
    switch(car)
    {
        case 'S':
            printf("%.1f\n", Soma);
            break;

        case 'M':
            printf("%.1f\n", (float) Soma/12);
            break;
    }

    return 0;
}