#include <stdio.h>
 
int main() {
    int i, qtd;
    float preco[] = {4, 4.5, 5, 2, 1.5};
    scanf("%d %d", &i, &qtd);
    printf("Total: R$ %.2f\n", preco[i-1] * qtd);
 
    return 0;
}