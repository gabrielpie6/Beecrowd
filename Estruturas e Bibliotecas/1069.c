#include <stdio.h>

int main()
{
    int N, i;
    int aberto = 0, fechado = 0, numero_de_linhas_lido = 0;
    char current_character;
    scanf("%d", &N);
    scanf("%c", &current_character);

    while (1)
    {
        if (!scanf("%c", &current_character))
        {
            current_character = '\n';
        }

        switch (current_character)
        {
            case '<':
            {
                aberto++;
                break;
            }
            case '>':
            {
                if (aberto > 0)
                {
                    aberto--;
                    fechado++;
                }
                break;
            }
            case '\n':
            {
                printf("%d\n", fechado);
                aberto = 0;
                fechado = 0;
                numero_de_linhas_lido++;
                if (numero_de_linhas_lido >= N)
                    return 0;
                break;
            }
            default:
            {
                continue;
            }
        }
    }

    return 0;
}
