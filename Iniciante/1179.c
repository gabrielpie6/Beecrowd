#include <stdio.h>

int main() {
    int i, j, num;
    int par[5], impar[5];
    int ind_par = 0;
    int ind_imp = 0;
    for (j = 0; j < 15; j++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            par[ind_par] = num;
            ind_par++;
        }
        else
        {
            impar[ind_imp] = num;
            ind_imp++;
        }

        if (ind_par == 5)
            for(i = 0; i < 5; i++)
            {
                printf("par[%d] = %d\n", i, par[i]);
                ind_par = 0;
            }
        if (ind_imp == 5)
            for(i = 0; i < 5; i++)
            {
                printf("impar[%d] = %d\n", i, impar[i]);
                ind_imp = 0;
            }
    }
    //Ultima escrita
    if (ind_imp != 0)
        for(i = 0; i < ind_imp; i++)
            printf("impar[%d] = %d\n", i, impar[i]);
    
    if (ind_par != 0)
        for(i = 0; i < ind_par; i++)
            printf("par[%d] = %d\n", i, par[i]);

    return 0;
}