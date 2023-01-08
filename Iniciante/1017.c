#include <stdio.h>
 
int main() {
    int tempo, velocidade;
    float total;
    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    total = (float) (tempo * velocidade)/12;
    printf("%.3f\n", total);
    return 0;
}