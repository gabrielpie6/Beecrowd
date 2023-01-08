#include <stdio.h>

int main()
{
    int N;
    while (scanf("%d", &N) != EOF)
    {
        printf("vai ter ");
        if (N == 0)
            printf("copa!\n");
        else
            printf("duas!\n");
    }
    return 0;
}