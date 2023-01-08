#include <stdio.h>

int main() {
    int n, menor, i, posicao;
    scanf("%d", &n);
    int Vector[n];

    scanf("%d", &Vector[0]);
    menor = Vector[0];
    posicao = 0;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &Vector[i]);
        if (Vector[i] < menor)
        {
            menor = Vector[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}