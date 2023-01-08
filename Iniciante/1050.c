#include <stdio.h>
#include <string.h>

int main() {
    char *DDD[8][10] = 
    {
        {"", "", "", "", "", "", "", "", "", ""}, //0X
        {"", "Sao Paulo", "", "", "", "", "", "", "", "Campinas"}, //1X
        {"", "Rio de Janeiro", "", "", "", "", "", "Vitoria", "", ""}, //2X
        {"", "Belo Horizonte", "Juiz de Fora", "", "", "", "", "", "", ""}, //3X
        {"", "", "", "", "", "", "", "", "", ""}, //4X
        {"", "", "", "", "", "", "", "", "", ""}, //5X
        {"", "Brasilia", "", "", "", "", "", "", "", ""}, //6X
        {"", "Salvador", "", "", "", "", "", "", "", ""}, //7X
    };

    char num[3];
    int digit0, digit1;
    scanf("%s", num);
    digit0 = num[0] - '0';
    digit1 = num[1] - '0';

    if (digit0 < 8)
    {
        if (DDD[digit0][digit1][0] != '\0')
            printf("%s\n", DDD[digit0][digit1]);
        else
            printf("DDD nao cadastrado\n");
    } else
    {
        printf("DDD nao cadastrado\n");
    }

    return 0;
}