#include <stdio.h>
 
int main() {
    int n, i;
    int long r1, r2;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &r1, &r2);
        printf("%ld\n", r1 + r2);
    }

    return 0;
}