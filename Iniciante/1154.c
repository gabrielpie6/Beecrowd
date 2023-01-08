#include <stdio.h>

int main() {
    int idade;
    int n = 0;
    int Soma = 0;
    scanf("%d", &idade);
    while (idade > 0)
    {
        Soma += idade;
        n++;
        scanf("%d", &idade);
    }
    printf("%.2f\n", (float) Soma/n);

    return 0;
}