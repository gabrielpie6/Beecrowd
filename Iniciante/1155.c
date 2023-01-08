#include <stdio.h>

int main() {
    int i;
    float S = 1;
    for (i = 2; i <= 100; i++)
    {
        S += (float) 1/i;
    }
    printf("%.2f\n", S);

    return 0;
}