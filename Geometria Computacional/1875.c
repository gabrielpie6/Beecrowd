#include <stdio.h>

int main()
{
    int n, i, j, qtd, Rpts, Gpts, Bpts;
    char time, alvo;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        Rpts = 0;
        Gpts = 0;
        Bpts = 0;
        scanf("%d", &qtd);
        for (j = 0; j < qtd; j++)
        {
            scanf(" %c %c", &time, &alvo);

            if (time == 'R')
                if (alvo == 'G')
                    Rpts += 2;
                else
                    Rpts++;
            else
                if (time == 'G')
                    if (alvo == 'B')
                        Gpts += 2;
                    else
                        Gpts++;
                else
                    if (alvo == 'R')
                        Bpts += 2;
                    else
                        Bpts++;
        }

        if (Rpts > Gpts && Rpts > Bpts)
            printf("red\n");
        else
            if (Gpts > Rpts && Gpts > Bpts)
                printf("green\n");
            else
                if (Bpts > Rpts && Bpts > Gpts)
                    printf("blue\n");
                else
                    if (Rpts == Gpts && Gpts == Bpts)
                        printf("trempate\n");
                    else
                        printf("empate\n");
    }
    return 0;
}