#include <stdio.h>

int main() {
    char *Meses[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int mes;
    scanf("%d", &mes);
    printf("%s\n", Meses[mes-1]);

    return 0;
}