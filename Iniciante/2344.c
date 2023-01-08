#include <stdio.h>
 
int main() {
    int nota;

    scanf("%d", &nota);
    if (nota == 0)
        printf("E\n");
    else
        if (1 <= nota && nota <= 35)
            printf("D\n");
        else
            if (36 <= nota && nota <= 60)
                printf("C\n");
            else
                if (61 <= nota && nota <= 85)
                    printf("B\n");
                else
                    printf("A\n");
    
    return 0;
}