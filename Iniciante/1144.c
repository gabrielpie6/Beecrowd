#include <stdio.h>

int main() {
    int n, j = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", j, j*j, j*j*j);
        printf("%d %d %d\n", j, j*j + 1, j*j*j + 1);
        j++;
    }
            
    return 0;
}