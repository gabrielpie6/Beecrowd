#include <stdio.h>
 
int main() {
    int i, try, tipo;
    int resposta_correta = 0;
    scanf("%d", &tipo);
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &try);
        if (try == tipo)
            resposta_correta++;
    }
    printf("%d\n", resposta_correta);
 
    return 0;
}