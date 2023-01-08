#include <stdio.h>

int main() {
    int i;
    int X = 1;
    while (X != 0)
    {
        scanf("%d", &X);
        for (i = 1; i <= X; i++)
        {
            printf("%d", i);
            if (i != X)
                printf(" ");
        }
        if (X != 0)
            printf("\n");
    }
    
    return 0;
}