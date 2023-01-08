#include <stdio.h>
#define n 100

int main() {
    int i;
    float X[n];
    
    for (i = 0; i < n; i++)
        scanf("%f", &X[i]);
    for (i = 0; i < n; i++)
        if (X[i] <= 10)
            printf("A[%d] = %.1f\n", i, X[i]);
    
    return 0;
}