#include <stdio.h>

int main() {
    int i, positivo = 0;
    float valor;
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &valor);
        if (valor > 0)
            positivo++;
    }
    printf("%d valores positivos\n", positivo);

    return 0;
}