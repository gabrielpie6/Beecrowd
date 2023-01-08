#include <stdio.h>
#define n 20

int main() {
    int i, aux;
    int X[n];
    
    for (i = 0; i < n; i++)
        scanf("%d", &X[i]);

    for (i = 0; i < n/2; i++)
    {
        aux  = X[i];
        X[i] = X[n-1-i];
        X[n-1-i] = aux;
    }

    for (i = 0; i < n; i++)
        printf("N[%d] = %d\n", i, X[i]);
    
    return 0;
}