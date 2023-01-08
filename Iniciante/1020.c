#include <stdio.h>

int main() {
    int dias, i, fator, qtd;
    scanf("%d", &dias);


    fator = 365;
    qtd = (int) dias / fator;
    dias = dias - fator * qtd;
    printf("%d ano(s)\n", qtd);

    fator = 30;
    qtd = (int) dias / fator;
    dias = dias - fator * qtd;
    printf("%d mes(es)\n", qtd);

    fator = 1;
    qtd = (int) dias / fator;
    dias = dias - fator * qtd;
    printf("%d dia(s)\n", qtd);

    return 0;
}