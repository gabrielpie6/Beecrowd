#include <stdio.h>

int main() {
    int incremento, limit, i, j;
    scanf("%d %d", &incremento, &limit);
    for (i = 1; i < limit; i = i + incremento)
    {
        for (j = 0; j < incremento; j++)
            if (i+j <= limit)
            {
                printf("%d", i+j);
                if (j < incremento - 1)
                    printf(" ");
            }
        printf("\n");
    }
            
    return 0;
}