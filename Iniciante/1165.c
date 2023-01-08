#include <stdio.h>

int main() {
    int num, i, j, qtd, primo;
    
    scanf("%d", &qtd);
    for (j = 0; j < qtd; j++)
    {
        scanf("%d", &num);
        primo = 1;
        for (i = 2; i <= num/2; i++)
            if (num % i == 0)
                primo = 0;
                
        if (primo == 1)
            printf("%d eh primo\n", num);
        else
            printf("%d nao eh primo\n", num);
    }

    return 0;
}