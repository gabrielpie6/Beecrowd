#include <stdio.h>
 
int main() {
    int i, abas, qtd;
    char acao[7];
    scanf("%d %d", &abas, &qtd);
    for (i = 0; i < qtd; i++)
    {
        scanf("%s", acao);
        if (acao[0] == 'f')
            abas++;
        else
            abas--;
    }
    printf("%d\n", abas);

    return 0;
}