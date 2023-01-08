#include <stdio.h>
#define n 3

void Sort(float V[]);

int main() {
    int i;
    float L[n];
    scanf("%f %f %f", &L[0], &L[1], &L[2]);
    Sort(L);
    
    if (L[0] >= L[1] + L[2])
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        L[0] *= L[0];
        L[1] *= L[1];
        L[2] *= L[2];
        if (L[0] == L[1] + L[2])
            printf("TRIANGULO RETANGULO\n");
        else
            if (L[0] > L[1] + L[2])
                printf("TRIANGULO OBTUSANGULO\n");
            else
                printf("TRIANGULO ACUTANGULO\n");

        if (L[0] == L[1] && L[0] == L[2] && L[1] == L[2])
            printf("TRIANGULO EQUILATERO\n");  
        else 
            if (L[0] != L[1] && L[0] != L[2] && L[1] != L[2])
            {
                //printf("TRIANGULO ESCALENO\n");
            }
            else
                printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

void Sort(float V[])
{
    float aux;
    int i, alteracao = 1;
    while (alteracao == 1)
    {
        alteracao = 0;
        for (i = 0; i < n-1; i++)
            if (V[i] < V[i+1])
            {
                aux = V[i+1];
                V[i+1] = V[i];
                V[i] = aux;
                alteracao = 1;
            }
    }
}