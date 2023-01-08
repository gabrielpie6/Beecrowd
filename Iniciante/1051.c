#include <stdio.h>

int Vef_Intervao(int base, float Interval[][2]);

int main() {
    int posicao, i;
    float renda, aux, imposto = 0;
    int Aliquotas[] = {0, 8, 18, 28};
    float Ranges[][2] = 
    {
        {0, 2000}, {2000.01, 3000}, {3000.01 , 4500}, {4500.01, -1}
    };

    scanf("%f", &renda);
    Ranges[3][1] = renda;

    if (renda > Ranges[0][1])
    {
        posicao = Vef_Intervao(renda, Ranges);
        for (i = posicao; i > 0; i--)
        {
            aux = renda - Ranges[i-1][1];
            imposto = imposto + (aux * Aliquotas[i])/100;
            renda = renda - aux;
        }
        printf("R$ %.2f\n", imposto);
    } else
        printf("Isento\n");

    return 0;
}

int Vef_Intervao(int base, float Interval[][2])
{
    int i, controle;

    i = 0;
    controle = 0;
    while (controle == 0)
    {
        if (Interval[i][0] <= base && base <= Interval[i][1])
            controle = 1;
        i++;
    }
    i--;

    return i;
}