#include <stdio.h>

int main() {
    int A, N, i;
    int Soma = 0;
    scanf("%d %d", &A, &N);
    while (N <= 0)
    {
        scanf("%d", &N);
    }
    
    for (i = 0; i <= N-1; i++)
    {
        Soma += A + i;
    }
    printf("%d\n", Soma);

    return 0;
}