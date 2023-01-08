#include <stdio.h>

int main() {
    int a, b, aux, i;
    int Soma = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
        aux  = a;
        a = b;
        b = aux;
    }
    for (i = a; i <= b; i++)
        if (i % 13 != 0)
            Soma += i;
    printf("%d\n", Soma);
    return 0;
}