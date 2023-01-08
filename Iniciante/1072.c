#include <stdio.h>

int main() {
    int i, n, valor;
    int in = 0;
    int out = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &valor);
        if (10 <= valor && valor <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}