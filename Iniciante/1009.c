#include <stdio.h>
 
int main() {
    char nome[100];
    double salario, vendas;
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    salario = salario + vendas * 0.15;
    printf("TOTAL = R$ %.2lf\n", salario);

    return 0;
}