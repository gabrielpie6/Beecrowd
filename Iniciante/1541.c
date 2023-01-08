#include <stdio.h>
#include <math.h>

//1541 Iniciante
int main() {
    int i = 3;
    int L_Terreno_Max, Dados[3] = {1, 1, 1};

    while (i == 3)
    {
        i = 0;
        while (Dados[0] != 0 && Dados[1] != 0 && Dados[2] != 0 && i != 3)
        {
            scanf("%d", &Dados[i]);
            i++;
        }
        if (i == 3)
        {
            L_Terreno_Max = trunc((float) (10 * sqrt(Dados[0] * Dados[1] * Dados[2])) / Dados[2]);
            printf("%d\n", L_Terreno_Max);
        }
    }
    
    return 0;
}