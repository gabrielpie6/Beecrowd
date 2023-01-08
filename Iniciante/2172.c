#include <stdio.h>

int main()
{
    int x, m;
    scanf("%d %d", &x, &m);
    while (x != 0 || m != 0)
    {
        printf("%ld\n", x * m);
        scanf("%d %d", &x, &m);
    }

    return 0;
}