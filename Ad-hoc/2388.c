#include <stdio.h>
 
int main() {
    int n, i;
    int tempo, vel, distancia = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &tempo, &vel);
        distancia += vel * tempo;
    }
    printf("%d\n", distancia);
 
    return 0;
}