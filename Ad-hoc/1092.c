#include <stdio.h>
#include <stdlib.h>

int Verification(int **M, int iniLin, int iniCol, int fimLin, int fimCol);
int main()
{
    int i, j, p, q;
    int lin, col, subset, maior = 1;
    int **M;

    scanf("%d %d", &lin, &col);
    while (lin != 0 || col != 0)
    {
        //Alocação
        M = malloc(lin * sizeof(int*));
        for (i = 0; i < lin; i++)
            M[i] = malloc(col * sizeof(int));

        for (i = 0; i < lin; i++)
            for (j = 0; j < col; j++)
                scanf("%d", &M[i][j]);
        
        for (i = 0; i < lin; i++)
            for (j = 0; j < col; j++)
                for (p = i; p < lin; p++)
                    for (q = j; q < col; q++)
                        if (p != i || q != j)
                        {
                            subset = Verification(M, i, j, p, q);
                            if (subset > maior)
                                maior = subset;
                        }


        printf("%d\n", maior);

        //Desalocação
        for (i = 0; i < lin; i++)
            free(M[i]);
        free(M);
        M = NULL;

        //Nova leitura
        scanf("%d %d", &lin, &col);
        maior = 1;
    }

    return 0;
}

int Verification(int **M, int iniLin, int iniCol, int fimLin, int fimCol)
{
    int subset = 0;
    int i, j;
    int controle = 1;
    int aux = M[iniLin][iniCol] - 1;

    i = iniLin; j = iniCol;
    while (controle == 1 && i <= fimLin)
    {
        if (M[i][j] > aux && controle == 1)
        {
            aux = M[i][j];
            subset++;
        }
        else
        {
            controle = 0;
            subset = 0;
        }
        j++;
        if (j > fimCol)
        {
            j = iniCol;
            i++;
        }
    }

    return subset;
}