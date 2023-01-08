#include <stdio.h>

//2791 Iniciante
int main() {
    int C[4], i = 0;
    scanf("%d %d %d %d", &C[0], &C[1], &C[2], &C[3]);
    while (C[i] == 0)
        i++;
    printf("%d\n", i+1);

    return 0;
}