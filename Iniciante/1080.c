#include <stdio.h>

int main() {
    int i, pos, maior, num;
    scanf("%d", &num);
    maior = num;
    pos = 1;
    for (i = 1; i < 100; i++)
    {
        scanf("%d", &num);
        if (num > maior)
        {
            maior = num;
            pos = i+1;
        }
    }
    printf("%d\n%d\n", maior, pos);

    return 0;
}