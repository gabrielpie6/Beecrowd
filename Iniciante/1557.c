#include <stdio.h>
#include <math.h>
#define n 15

void Atribuir(int *M, int value);
int Contador_Casas(int valor);
int main()
{
    int M[n][n];
    int i, j, ordem, casas;
    int Maior_Valor;

    scanf("%d", &ordem);
    while (ordem != 0)
    {   
        Atribuir(&M[0][0], 0);
        Maior_Valor = pow(2, 2*ordem - 2);
        for (i = 0; i < ordem; i++)
            for (j = 0; j < ordem; j++)
                M[i][j] = pow(2, i+j);

        //Escrita
        casas = Contador_Casas(Maior_Valor);
        for (i = 0; i < ordem; i++)
        {
            for (j = 0; j < ordem; j++)
            {
                printf("%*d", casas, M[i][j]);
                if (j != ordem - 1)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d", &ordem);
    }
    
    return 0;
}

void Atribuir(int *M, int value)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            *(M+ i*n + j) = value;
}

int Contador_Casas(int valor)
{
    long int fator = 10;
    int casas = 1;
    while (valor >= fator)
    {
        casas++;
        fator *= 10;
    }
    return casas;
}