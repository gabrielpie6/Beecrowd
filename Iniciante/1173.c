#include <stdio.h>

int main() {
    int i;
    int X[10];
    scanf("%d", &X[0]);
    printf("N[0] = %d\n", X[0]);
    for (i = 1; i < 10; i++)
    {
        X[i] = 2 *X[i-1];
        printf("N[%d] = %d\n", i, X[i]);
    }
    
    return 0;
}