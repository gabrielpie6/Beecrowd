#include <stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        printf("Ho");
        if (i != N-1)
            printf(" ");
    }
    printf("!\n");
    return 0;
}