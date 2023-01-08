#include <stdio.h>
#define n 3
 
int main() {
    int V[n], original[n], i, aux, alteracao = 1;
    scanf("%d %d %d", &V[0], &V[1], &V[2]);

    for (i = 0; i < n; i++)
        original[i] = V[i];
    
    while (alteracao == 1)
    {
        alteracao = 0;
        for (i = 0; i < n-1; i++)
        {
            if (V[i] > V[i+1])
            {
                aux = V[i+1];
                V[i+1] = V[i];
                V[i] = aux;
                alteracao = 1;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d\n", V[i]);

    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d\n", original[i]);
        
    return 0;
}