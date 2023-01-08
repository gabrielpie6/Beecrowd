#include <stdio.h>

int main() {
    int i, j;
    char car;
    double Soma = 0;
    int qtd = 0;
    double M[12][12];

    scanf("%c", &car);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    
    for (i = 0; i <= 4; i++)
    {
        for (j = 1+i; j <= 10-i; j++)
        {
            Soma += M[i][j];
            qtd++;
        }
    }
    switch(car)
    {
        case 'S':
        {
            printf("%.1lf\n", Soma);
            break;
        }

        case 'M':
        {
            printf("%.1lf\n", (double) Soma/qtd);
            break;
        }
    }

    return 0;
}