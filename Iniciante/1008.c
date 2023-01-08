#include <stdio.h>
 
int main() {
    int num, qtd;
    float valor, Salario;
    scanf("%d", &num);
    scanf("%d", &qtd);
    scanf("%f", &valor);
    
    Salario = qtd * valor;
    printf("NUMBER = %d", num);
    printf("\nSALARY = U$ %.2f\n", Salario);

    return 0;
}