#include <stdio.h>

int main() {
    int fatorial = 1;
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fatorial *= i;
    printf("%li\n", fatorial);

    return 0;
}