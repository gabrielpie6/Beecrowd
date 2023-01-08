#include <stdio.h>

void Sort(int V[], int n);
int main() {
    int i, num[2], impar = 0;
    scanf("%d", &num[0]);
    scanf("%d", &num[1]);
    Sort(num, 2);

    for (i = (num[0] + 1); i < num[1]; i++)
        if (i % 2 != 0)
            impar += i;
    printf("%d\n", impar);

    return 0;
}

void Sort(int V[], int n)
{
    int aux;
    int i, alteracao = 1;
    while (alteracao == 1)
    {
        alteracao = 0;
        for (i = 0; i < n-1; i++)
            if (V[i] > V[i+1])
            {
                aux = V[i+1];
                V[i+1] = V[i];
                V[i] = aux;
                alteracao = 1;
            }
    }
}