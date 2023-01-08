#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i <= 20; i = i + 2)
        for (j = i + 10; j <= i + 30; j = j + 10)
            if (i % 10 == 0)
                printf("I=%d J=%d\n", i/10, j/10);
            else
                printf("I=%.1f J=%.1f\n", (float) i/10, (float) j/10);
    return 0;
}