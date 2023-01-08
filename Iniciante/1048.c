#include <stdio.h>
 
int main() {
 
    float Interval[][3] = {
        {0, 400, 15},
        {400.01, 800, 12},
        {800.01 , 1200, 10},
        {1200.01 , 2000, 7},
        {2000.1, -1, 4}
    };
    int i, controle;
    float base, ganho, salario;
    scanf("%f", &base);
    Interval[4][1] = base;

    i = 0;
    controle = 0;
    while (controle == 0)
    {
        if (Interval[i][0] <= base && base <= Interval[i][1])
            controle = 1;
        i++;
    }
    i--;
    ganho = (float) (base * Interval[i][2]) / 100;
    salario = base + ganho;


    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", ganho);
    printf("Em percentual: %.0f %%\n", Interval[i][2]);
    return 0;
}