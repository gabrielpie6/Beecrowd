#include <stdio.h>

int main()
{
    int num, i, j;
    int M[102][102];
    while (scanf("%d", &num) != EOF)
    {
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++)
                M[i][j] = 0;
        //preencher diagonal primaria
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++)
                if (i == j)
                    M[i][j] = 2;
        //Diagonal secundaria
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++)
                if (j == num-1-i)
                    M[i][j] = 3;

        //preencher quadro 1
        for (i = num/3; i < num - num/3; i++)
            for (j = num/3; j < num - num/3; j++)
                M[i][j] = 1;

        //ponto central
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++)
                if (i == (num+1)/2 - 1 && j == (num+1)/2 - 1)
                    M[i][j] = 4;
        
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < num; j++)
                printf("%d", M[i][j]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}