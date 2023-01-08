#include <stdio.h>

int main()
{
    int a, b, quociente, resto;
    int control = 1;
    scanf("%d %d", &a, &b);
    if (b != 0)
    {
        resto = a % b;
        quociente = (a - resto) / b;
        if (resto < 0)
        {
            if (a < 0 && b < 0)
                control = -1;
            resto =  a - b * (quociente - 1 * control);
            quociente = (a - resto) / b;
        }
        printf("%d %d\n", quociente, resto);
    }

    return 0;
}