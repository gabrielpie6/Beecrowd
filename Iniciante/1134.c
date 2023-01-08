#include <stdio.h>

int main() {
    int num;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    int controle = 1;
    while (controle == 1)
    {
        scanf("%d", &num);
        switch (num)
        {
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                controle = 0;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
            
    return 0;
}