#include <stdio.h>

int main() {
    int a, b, hora;
    scanf("%d %d", &a, &b);

    if (a >= b)
        hora = 24 - a + b;
    else
        hora = b - a;
    printf("O JOGO DUROU %d HORA(S)\n", hora);

    return 0;
}