#include <stdio.h>

int main() {
    int X, Z;
    int i = 0;
    int Soma = 0;
    scanf("%d %d", &X, &Z);
    while (Z <= X)
    {
        scanf("%d", &Z);
    }

    while (Soma < Z)
    {
        Soma += X + i;
        i++;
    }
    printf("%d\n", i);

    return 0;
}