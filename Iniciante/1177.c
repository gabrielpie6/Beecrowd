#include <stdio.h>
#define n 1000

int main() {
    int i, t, num = 0;
    int N[n];

    scanf("%d", &t);
    for (i = 0; i < n; i++)
    {
        N[i] = num;
        num++;
        if (num == t)
            num = 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}