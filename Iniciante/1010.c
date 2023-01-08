#include <stdio.h>
 
int main() {
    int cod, qtd;
    float valor, total;
    
    scanf("%d %d %f", &cod, &qtd, &valor);
    total = qtd * valor;
    scanf("%d %d %f", &cod, &qtd, &valor);
    total = total + qtd * valor;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}