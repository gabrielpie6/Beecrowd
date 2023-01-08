#include <stdio.h>

void Atribuir(int Mtx[100][100], int valor);
int main() {
    
    int i, j;
    int num = 1;
    int Mtx[100][100];
    
    while (scanf("%d", &num) != EOF)
    {
        Atribuir(Mtx, 3);
        for (i = 0; i < num; i++)
            for (j = 0; j < num;  j++)
                if (i == j)
                {
                    Mtx[i][j] -= 2;
                    Mtx[i][num-1-j] = 2;
                }

        //Escrita
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < num; j++)
                printf("%d", Mtx[i][j]);
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