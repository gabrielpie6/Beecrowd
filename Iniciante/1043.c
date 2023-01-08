#include <stdio.h>

int main() {
    int controle, i;
    float perimetro, L[3], soma, Area;
    scanf("%f %f %f", &L[0], &L[1], &L[2]);

    controle = 1;
    soma = L[0] + L[1] + L[2];
    for (i = 0; i < 3; i++)
        if (soma - L[i] <= L[i])
            controle = 0;
    
    if (controle)
        printf("Perimetro = %.1f\n", soma);
    else
    {
        Area = (float) (L[2] * (L[0] + L[1])) / 2;
        printf("Area = %.1f\n", Area);
    }

    return 0;
}