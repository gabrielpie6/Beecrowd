#include <stdio.h>

int main() {
    int n, X, Y;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &X, &Y);
        if (Y != 0)
            printf("%.1f\n", (float) X/Y);
        else
            printf("divisao impossivel\n");
    }

    return 0;
}