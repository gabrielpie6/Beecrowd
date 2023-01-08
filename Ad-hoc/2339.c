#include <stdio.h>

//2339 Ad-hoc
int main() {
    int competidores, total, papel_cada;
    scanf("%d %d %d", &competidores, &total, &papel_cada);
    if (papel_cada * competidores <= total)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}