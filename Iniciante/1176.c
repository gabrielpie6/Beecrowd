#include <stdio.h>

long long int Fibonacci(int n);
int main() {
    int i, t, num;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &num);
        printf("Fib(%d) = %lld\n", num, Fibonacci(num));
    }
    return 0;
}

long long int Fibonacci(int n)
{
    long long int anterior = 1;
    long long int atual = 0;
    long long int aux;
    int i;

    for (i = 0; i < n; i++)
    {
        aux = anterior;
        anterior = atual;
        atual = aux + atual;
    }

    return atual;
}