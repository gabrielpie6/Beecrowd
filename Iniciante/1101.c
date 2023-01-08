#include <stdio.h>

int main() {
    int aux, Sum, a, b;
    scanf("%d %d", &a, &b);
    while (a > 0 && b > 0)
    {
        Sum = 0;
        if (a > b)
        {
            aux = a;
            a = b;
            b = aux;
        }
        for (int i = a; i <= b; i++)
        {
            printf("%d ", i);
            Sum += i;
        }
        printf("Sum=%d\n", Sum);
        scanf("%d %d", &a, &b);
    }

    return 0;
}