#include <stdio.h>

int main() {
    int i, n;

    scanf("%d", &n);
    int valor[n];
    for (i = 0; i < n; i++)
        scanf("%d", &valor[i]);

    for (i = 0; i < n; i++)
    {
        if (valor[i] == 0)
            printf("NULL\n");
        else
        {
            if (valor[i] % 2 == 0)
                printf("EVEN");
            else
                printf("ODD");
            if (valor[i] > 0)
                printf(" POSITIVE\n");
            if (valor[i] < 0)
                printf(" NEGATIVE\n");
        }
    }
    return 0;
}