#include <stdio.h>
#include <math.h>

void Atribuir(int Mtx[100][100], int valor);
int main() {
    int i, j, k;
    int num = 1;
    int Mtx[100][100];
    
    Atribuir(Mtx, 0);
    while (num != 0)
    {
        scanf("%d", &num);
        if (num != 0)
        {
            Atribuir(Mtx, 0);
            for (k = 0; k < ceil((float)num/2); k++)
                for (i = 0 + k; i < num - k; i++)
                    for (j = 0 +k; j < num - k; j++)
                        Mtx[i][j]++;

            //Escrita
            for (i = 0; i < num; i++)
            {
                for (j = 0; j < num; j++)
                {
                    printf("%*d", 3, Mtx[i][j]);
                    if (j < num - 1)
                        printf(" ");
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}

void Atribuir(int Mtx[100][100], int valor)
{
    int i, j;
    for (i = 0; i < 100; i++)
        for (j = 0; j < 100; j++)
            Mtx[i][j] = valor;
}