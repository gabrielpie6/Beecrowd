#include <stdio.h>

int main() {
    int i, positivo = 0;
    int valor;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &valor);
        if ((valor % 2 == 0) /*&& (valor != 0)*/)
        {
            positivo++;
        }       
    }
    printf("%d valores pares\n", positivo);

    return 0;
}