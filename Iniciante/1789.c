#include <stdio.h>

int main()
{
    int i, num, maior;
    int v[500];
    while (scanf("%d", &num) != EOF)
    {
        maior = 0;
        for (i = 0; i < num; i++)
        {
            scanf("%d", &v[i]);
            if (v[i] > maior)
                maior = v[i];
        }
        if (maior < 10)
            printf("1\n");
        else
            if (10 <= maior && maior < 20)
                printf("2\n");
            else
                printf("3\n");
    }

    return 0;
}