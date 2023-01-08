#include <stdio.h>
 
int main() {
 
    int distancia;
    float combustivel, total;
    scanf("%d", &distancia);
    scanf("%f", &combustivel);
    total = (float) distancia/combustivel;
    printf("%.3f km/l\n", total);
    
    return 0;
}