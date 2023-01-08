#include <stdio.h>

int main() {
    int anterior = 1;
    int atual = 0;
    int n, i, aux;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d", atual);
        aux = anterior;
        anterior = atual;
        atual = aux + atual;
        if (i < n-1)
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}